//
// Copyright (C) 2015 The Android Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "update_engine/hardware_slinux.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <algorithm>
#include <memory>

#include <base/files/file_util.h>
#include <base/strings/stringprintf.h>

#include "update_engine/common/hardware.h"
#include "update_engine/common/platform_constants.h"
#include "update_engine/common/utils.h"

using std::string;

namespace chromeos_update_engine {

namespace {

const char kOOBECompletedMarker[] = "/home/debian/.oobe_completed";

// The stateful directory used by update_engine to store powerwash-safe files.
// The files stored here must be whitelisted in the powerwash scripts.
const char kPowerwashSafeDirectory[] =
    "/mnt/stateful_partition/unencrypted/preserve";

// The powerwash_count marker file contains the number of times the device was
// powerwashed. This value is incremented by the clobber-state script when
// a powerwash is performed.
const char kPowerwashCountMarker[] = "powerwash_count";

// The name of the marker file used to trigger powerwash when post-install
// completes successfully so that the device is powerwashed on next reboot.
const char kPowerwashMarkerFile[] =
    "/mnt/stateful_partition/factory_install_reset";

// The contents of the powerwash marker file.
const char kPowerwashCommand[] = "safe fast keepimg reason=update_engine\n";

// UpdateManager config path.
const char* kConfigFilePath = "/etc/update_manager.conf";

// UpdateManager config options:
const char* kConfigOptsIsOOBEEnabled = "is_oobe_enabled";

const char* kActivePingKey = "first_active_omaha_ping_sent";

const char* kBeagleboneEeprom = "/sys/devices/platform/ocp/44e0b000.i2c/i2c-0/0-0050/eeprom";


const char* kBeagleboneVersion = "/etc/issue.net";



struct am335x_baseboard_id {
	unsigned int  magic;
	char name[8];
	char version[4];
	char serial[12];
	//char config[32];
	//char mac_addr[HDR_NO_OF_MAC_ADDR][HDR_ETH_ALEN];
};

}  // namespace

namespace hardware {

// Factory defined in hardware.h.
std::unique_ptr<HardwareInterface> CreateHardware() {
  return std::make_unique<HardwareSLinux>();
}

}  // namespace hardware

// In Android there are normally three kinds of builds: eng, userdebug and user.
// These builds target respectively a developer build, a debuggable version of
// the final product and the pristine final product the end user will run.
// Apart from the ro.build.type property name, they differ in the following
// properties that characterize the builds:
// * eng builds: ro.secure=0 and ro.debuggable=1
// * userdebug builds: ro.secure=1 and ro.debuggable=1
// * user builds: ro.secure=1 and ro.debuggable=0
//
// See IsOfficialBuild() and IsNormalMode() for the meaning of these options in
// Android.

bool HardwareSLinux::IsOfficialBuild() const {
  // We run an official build iff ro.secure == 1, because we expect the build to
  // behave like the end user product and check for updates. Note that while
  // developers are able to build "official builds" by just running "make user",
  // that will only result in a more restrictive environment. The important part
  // is that we don't produce and push "non-official" builds to the end user.
  //
  // In case of a non-bool value, we take the most restrictive option and
  // assume we are in an official-build.
  return false;
}

bool HardwareSLinux::IsNormalBootMode() const {
  // We are running in "dev-mode" iff ro.debuggable == 1. In dev-mode the
  // update_engine will allow extra developers options, such as providing a
  // different update URL. In case of error, we assume the build is in
  // normal-mode.
  return true;
}

bool HardwareSLinux::AreDevFeaturesEnabled() const {
  return !IsNormalBootMode();
}

bool HardwareSLinux::IsOOBEEnabled() const {
  // No OOBE flow blocking updates for Android-based boards.
  return false;
}

bool HardwareSLinux::IsOOBEComplete(base::Time* out_time_of_oobe) const {
  LOG(WARNING) << "OOBE is not enabled but IsOOBEComplete() called.";
  if (out_time_of_oobe)
    *out_time_of_oobe = base::Time();
  return true;
}

string HardwareSLinux::GetHardwareClass() const {
  struct am335x_baseboard_id id;
  bool eof;
  size_t bytes_read;
  int fd = HANDLE_EINTR(open(kBeagleboneEeprom, O_RDONLY));
  if (fd < 0) {
    LOG(ERROR) << "Opening misc";
  }
  ScopedFdCloser fd_closer(&fd);
  // We only re-write the first part of the bootloader_message, up to and
  // including the recovery message.
  if (!utils::ReadAll(fd,(char*)&id,sizeof(id), &bytes_read, &eof)) {
    LOG(ERROR) << "Reading version id in eeprom";
  }

  string sku(id.serial,12);
  string revision(id.version, 4);

  LOG(INFO) << "serial: " << sku; 
  LOG(INFO) << "version: " << revision; 
  
  return string("Seeed Studio") + ":" + sku + ":" + revision;
}

string HardwareSLinux::GetFirmwareVersion() const {
  FILE *stream;
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  stream = fopen(kBeagleboneVersion, "r");
  if (stream == NULL) {
      LOG(ERROR) << (string)"fopen" + kBeagleboneVersion + "error!";
  }
  getline(&line, &len, stream); //readline 1
  getline(&line, &len, stream); //readline 2
  getline(&line, &len, stream); //readline 3
  string firmwareVersion(line);
  free(line);
  fclose(stream);
  LOG(INFO) << "Firmware Verion " << firmwareVersion;
  return firmwareVersion;
}

string HardwareSLinux::GetECVersion() const {
  LOG(INFO) << "GetECVersion ..."; 
  return nullptr;
}

int HardwareSLinux::GetMinKernelKeyVersion() const {
  LOG(WARNING) << "STUB: No Kernel key version is available.";
  return -1;
}

int HardwareSLinux::GetMinFirmwareKeyVersion() const {
  LOG(WARNING) << "STUB: No Firmware key version is available.";
  return -1;
}

int HardwareSLinux::GetMaxFirmwareKeyRollforward() const {
  LOG(WARNING) << "STUB: Getting firmware_max_rollforward is not supported.";
  return -1;
}

bool HardwareSLinux::SetMaxFirmwareKeyRollforward(
    int firmware_max_rollforward) {
  LOG(WARNING) << "STUB: Setting firmware_max_rollforward is not supported.";
  return false;
}

bool HardwareSLinux::SetMaxKernelKeyRollforward(int kernel_max_rollforward) {
  LOG(WARNING) << "STUB: Setting kernel_max_rollforward is not supported.";
  return false;
}

int HardwareSLinux::GetPowerwashCount() const {
  LOG(WARNING) << "STUB: Assuming no factory reset was performed.";
  return 0;
}

bool HardwareSLinux::SchedulePowerwash() {
  LOG(INFO) << "Scheduling a powerwash to BCB.";
  return true;
}

bool HardwareSLinux::CancelPowerwash() {
   LOG(INFO) << "Cancel a powerwash to BCB.";
  return true;
}

bool HardwareSLinux::GetNonVolatileDirectory(base::FilePath* path) const {
  base::FilePath local_path(constants::kNonVolatileDirectory);
  if (!base::PathExists(local_path)) {
    LOG(ERROR) << "Non-volatile directory not found: " << local_path.value();
    return false;
  }
  *path = local_path;
  return true;
}

bool HardwareSLinux::GetPowerwashSafeDirectory(base::FilePath* path) const {
  // On Android, we don't have a directory persisted across powerwash.
  return false;
}

bool HardwareSLinux::GetFirstActiveOmahaPingSent() const {
  LOG(WARNING) << "STUB: Assuming first active omaha was never set.";
  return false;
}

bool HardwareSLinux::SetFirstActiveOmahaPingSent() {
  LOG(WARNING) << "STUB: Assuming first active omaha is set.";
  // We will set it true, so its failure doesn't cause escalation.
  return true;
}

}  // namespace chromeos_update_engine
