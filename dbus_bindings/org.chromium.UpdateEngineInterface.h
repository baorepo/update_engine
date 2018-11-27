// Automatic generation of D-Bus interfaces:
//  - org.chromium.UpdateEngineInterface
#ifndef ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
#define ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
#include <memory>
#include <string>
#include <tuple>
#include <vector>

#include <base/files/scoped_file.h>
#include <base/macros.h>
#include <dbus/object_path.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_object.h>
#include <brillo/dbus/exported_object_manager.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/variant_dictionary.h>

namespace org {
namespace chromium {

// Interface definition for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceInterface {
 public:
  virtual ~UpdateEngineInterfaceInterface() = default;

  virtual bool AttemptUpdate(
      brillo::ErrorPtr* error,
      const std::string& in_app_version,
      const std::string& in_omaha_url) = 0;
  virtual bool AttemptUpdateWithFlags(
      brillo::ErrorPtr* error,
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      int32_t in_flags) = 0;
  virtual bool AttemptInstall(
      brillo::ErrorPtr* error,
      const std::string& in_dlc_request) = 0;
  virtual bool AttemptRollback(
      brillo::ErrorPtr* error,
      bool in_powerwash) = 0;
  virtual bool CanRollback(
      brillo::ErrorPtr* error,
      bool* out_can_rollback) = 0;
  virtual bool ResetStatus(
      brillo::ErrorPtr* error) = 0;
  virtual bool GetStatus(
      brillo::ErrorPtr* error,
      int64_t* out_last_checked_time,
      double* out_progress,
      std::string* out_current_operation,
      std::string* out_new_version,
      int64_t* out_new_size) = 0;
  virtual bool RebootIfNeeded(
      brillo::ErrorPtr* error) = 0;
  virtual bool SetChannel(
      brillo::ErrorPtr* error,
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed) = 0;
  virtual bool GetChannel(
      brillo::ErrorPtr* error,
      bool in_get_current_channel,
      std::string* out_channel) = 0;
  virtual bool SetCohortHint(
      brillo::ErrorPtr* error,
      const std::string& in_cohort_hint) = 0;
  virtual bool GetCohortHint(
      brillo::ErrorPtr* error,
      std::string* out_cohort_hint) = 0;
  virtual bool SetP2PUpdatePermission(
      brillo::ErrorPtr* error,
      bool in_enabled) = 0;
  virtual bool GetP2PUpdatePermission(
      brillo::ErrorPtr* error,
      bool* out_enabled) = 0;
  virtual bool SetUpdateOverCellularPermission(
      brillo::ErrorPtr* error,
      bool in_allowed) = 0;
  virtual bool SetUpdateOverCellularTarget(
      brillo::ErrorPtr* error,
      const std::string& in_target_version,
      int64_t in_target_size) = 0;
  virtual bool GetUpdateOverCellularPermission(
      brillo::ErrorPtr* error,
      bool* out_allowed) = 0;
  virtual bool GetDurationSinceUpdate(
      brillo::ErrorPtr* error,
      int64_t* out_usec_wallclock) = 0;
  virtual bool GetPrevVersion(
      brillo::ErrorPtr* error,
      std::string* out_prev_version) = 0;
  virtual bool GetRollbackPartition(
      brillo::ErrorPtr* error,
      std::string* out_rollback_partition_name) = 0;
  virtual bool GetLastAttemptError(
      brillo::ErrorPtr* error,
      int32_t* out_last_attempt_error) = 0;
  virtual bool GetEolStatus(
      brillo::ErrorPtr* error,
      int32_t* out_eol_status) = 0;
};

// Interface adaptor for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceAdaptor {
 public:
  UpdateEngineInterfaceAdaptor(UpdateEngineInterfaceInterface* interface) : interface_(interface) {}

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.UpdateEngineInterface");

    itf->AddSimpleMethodHandlerWithError(
        "AttemptUpdate",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptUpdate);
    itf->AddSimpleMethodHandlerWithError(
        "AttemptUpdateWithFlags",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptUpdateWithFlags);
    itf->AddSimpleMethodHandlerWithError(
        "AttemptInstall",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptInstall);
    itf->AddSimpleMethodHandlerWithError(
        "AttemptRollback",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::AttemptRollback);
    itf->AddSimpleMethodHandlerWithError(
        "CanRollback",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::CanRollback);
    itf->AddSimpleMethodHandlerWithError(
        "ResetStatus",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::ResetStatus);
    itf->AddSimpleMethodHandlerWithError(
        "GetStatus",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetStatus);
    itf->AddSimpleMethodHandlerWithError(
        "RebootIfNeeded",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::RebootIfNeeded);
    itf->AddSimpleMethodHandlerWithError(
        "SetChannel",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetChannel);
    itf->AddSimpleMethodHandlerWithError(
        "GetChannel",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetChannel);
    itf->AddSimpleMethodHandlerWithError(
        "SetCohortHint",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetCohortHint);
    itf->AddSimpleMethodHandlerWithError(
        "GetCohortHint",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetCohortHint);
    itf->AddSimpleMethodHandlerWithError(
        "SetP2PUpdatePermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetP2PUpdatePermission);
    itf->AddSimpleMethodHandlerWithError(
        "GetP2PUpdatePermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetP2PUpdatePermission);
    itf->AddSimpleMethodHandlerWithError(
        "SetUpdateOverCellularPermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetUpdateOverCellularPermission);
    itf->AddSimpleMethodHandlerWithError(
        "SetUpdateOverCellularTarget",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::SetUpdateOverCellularTarget);
    itf->AddSimpleMethodHandlerWithError(
        "GetUpdateOverCellularPermission",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetUpdateOverCellularPermission);
    itf->AddSimpleMethodHandlerWithError(
        "GetDurationSinceUpdate",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetDurationSinceUpdate);
    itf->AddSimpleMethodHandlerWithError(
        "GetPrevVersion",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetPrevVersion);
    itf->AddSimpleMethodHandlerWithError(
        "GetRollbackPartition",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetRollbackPartition);
    itf->AddSimpleMethodHandlerWithError(
        "GetLastAttemptError",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetLastAttemptError);
    itf->AddSimpleMethodHandlerWithError(
        "GetEolStatus",
        base::Unretained(interface_),
        &UpdateEngineInterfaceInterface::GetEolStatus);

    signal_StatusUpdate_ = itf->RegisterSignalOfType<SignalStatusUpdateType>("StatusUpdate");
  }

  void SendStatusUpdateSignal(
      int64_t in_last_checked_time,
      double in_progress,
      const std::string& in_current_operation,
      const std::string& in_new_version,
      int64_t in_new_size) {
    auto signal = signal_StatusUpdate_.lock();
    if (signal)
      signal->Send(in_last_checked_time, in_progress, in_current_operation, in_new_version, in_new_size);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/UpdateEngine"};
  }

 private:
  using SignalStatusUpdateType = brillo::dbus_utils::DBusSignal<
      int64_t /*last_checked_time*/,
      double /*progress*/,
      std::string /*current_operation*/,
      std::string /*new_version*/,
      int64_t /*new_size*/>;
  std::weak_ptr<SignalStatusUpdateType> signal_StatusUpdate_;

  UpdateEngineInterfaceInterface* interface_;  // Owned by container of this adapter.

  DISALLOW_COPY_AND_ASSIGN(UpdateEngineInterfaceAdaptor);
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_UPDATEENGINEINTERFACE_H
