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

#include "update_engine/common/platform_constants.h"

namespace chromeos_update_engine {
namespace constants {

const char kOmahaDefaultProductionURL[] =
    "https://192.168.199.117:8080/update";
const char kOmahaDefaultAUTestURL[] =
    "https://192.168.199.117:8080/update";
const char kOmahaUpdaterID[] = "SlinuxUpdateEngine";
const char kOmahaPlatformName[] = "Slinux OS";
const char kUpdatePayloadPublicKeyPath[] =
    "/home/debian/playload_public_key.pem";
const char kCACertificatesPath[] = "/home/debian/slinux-ca-certificates";
const char kOmahaResponseDeadlineFile[] =
    "/tmp/update-check-response-deadline";
// This directory is wiped during powerwash.
const char kNonVolatileDirectory[] = "/var/lib/update_engine";
const char kPostinstallMountOptions[] = "";

}  // namespace constants
}  // namespace chromeos_update_engine
