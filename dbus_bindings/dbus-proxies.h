// Automatic generation of D-Bus interfaces:
//  - org.chromium.UpdateEngineInterface
#ifndef ____CHROMEOS_DBUS_BINDING___________TMP_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___________TMP_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
#include <memory>
#include <string>
#include <vector>

#include <base/bind.h>
#include <base/callback.h>
#include <base/files/scoped_file.h>
#include <base/logging.h>
#include <base/macros.h>
#include <base/memory/ref_counted.h>
#include <brillo/any.h>
#include <brillo/dbus/dbus_method_invoker.h>
#include <brillo/dbus/dbus_property.h>
#include <brillo/dbus/dbus_signal_handler.h>
#include <brillo/dbus/file_descriptor.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <dbus/bus.h>
#include <dbus/message.h>
#include <dbus/object_manager.h>
#include <dbus/object_path.h>
#include <dbus/object_proxy.h>

namespace org {
namespace chromium {

// Abstract interface proxy for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceProxyInterface {
 public:
  virtual ~UpdateEngineInterfaceProxyInterface() = default;

  virtual bool AttemptUpdate(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptUpdateAsync(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AttemptUpdateWithFlags(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      int32_t in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptUpdateWithFlagsAsync(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      int32_t in_flags,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AttemptInstall(
      const std::string& in_dlc_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptInstallAsync(
      const std::string& in_dlc_request,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool AttemptRollback(
      bool in_powerwash,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void AttemptRollbackAsync(
      bool in_powerwash,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool CanRollback(
      bool* out_can_rollback,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void CanRollbackAsync(
      const base::Callback<void(bool /*can_rollback*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ResetStatus(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ResetStatusAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetStatus(
      int64_t* out_last_checked_time,
      double* out_progress,
      std::string* out_current_operation,
      std::string* out_new_version,
      int64_t* out_new_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetStatusAsync(
      const base::Callback<void(int64_t /*last_checked_time*/, double /*progress*/, const std::string& /*current_operation*/, const std::string& /*new_version*/, int64_t /*new_size*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RebootIfNeeded(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RebootIfNeededAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetChannel(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetChannelAsync(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetChannel(
      bool in_get_current_channel,
      std::string* out_channel,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetChannelAsync(
      bool in_get_current_channel,
      const base::Callback<void(const std::string& /*channel*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetCohortHint(
      const std::string& in_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetCohortHintAsync(
      const std::string& in_cohort_hint,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetCohortHint(
      std::string* out_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetCohortHintAsync(
      const base::Callback<void(const std::string& /*cohort_hint*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetP2PUpdatePermission(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetP2PUpdatePermissionAsync(
      bool in_enabled,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetP2PUpdatePermission(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetP2PUpdatePermissionAsync(
      const base::Callback<void(bool /*enabled*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetUpdateOverCellularPermission(
      bool in_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetUpdateOverCellularPermissionAsync(
      bool in_allowed,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetUpdateOverCellularTarget(
      const std::string& in_target_version,
      int64_t in_target_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetUpdateOverCellularTargetAsync(
      const std::string& in_target_version,
      int64_t in_target_size,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetUpdateOverCellularPermission(
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetUpdateOverCellularPermissionAsync(
      const base::Callback<void(bool /*allowed*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetDurationSinceUpdate(
      int64_t* out_usec_wallclock,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetDurationSinceUpdateAsync(
      const base::Callback<void(int64_t /*usec_wallclock*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetPrevVersion(
      std::string* out_prev_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetPrevVersionAsync(
      const base::Callback<void(const std::string& /*prev_version*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetRollbackPartition(
      std::string* out_rollback_partition_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRollbackPartitionAsync(
      const base::Callback<void(const std::string& /*rollback_partition_name*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetLastAttemptError(
      int32_t* out_last_attempt_error,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetLastAttemptErrorAsync(
      const base::Callback<void(int32_t /*last_attempt_error*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetEolStatus(
      int32_t* out_eol_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetEolStatusAsync(
      const base::Callback<void(int32_t /*eol_status*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterStatusUpdateSignalHandler(
      const base::Callback<void(int64_t,
                                double,
                                const std::string&,
                                const std::string&,
                                int64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::UpdateEngineInterface.
class UpdateEngineInterfaceProxy final : public UpdateEngineInterfaceProxyInterface {
 public:
  UpdateEngineInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ~UpdateEngineInterfaceProxy() override {
  }

  void RegisterStatusUpdateSignalHandler(
      const base::Callback<void(int64_t,
                                double,
                                const std::string&,
                                const std::string&,
                                int64_t)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "StatusUpdate",
        signal_callback,
        on_connected_callback);
  }

  void ReleaseObjectProxy(const base::Closure& callback) {
    bus_->RemoveObjectProxy(service_name_, object_path_, callback);
  }

  const dbus::ObjectPath& GetObjectPath() const override {
    return object_path_;
  }

  dbus::ObjectProxy* GetObjectProxy() const override {
    return dbus_object_proxy_;
  }

  bool AttemptUpdate(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptUpdate",
        error,
        in_app_version,
        in_omaha_url);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptUpdateAsync(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptUpdate",
        success_callback,
        error_callback,
        in_app_version,
        in_omaha_url);
  }

  bool AttemptUpdateWithFlags(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      int32_t in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptUpdateWithFlags",
        error,
        in_app_version,
        in_omaha_url,
        in_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptUpdateWithFlagsAsync(
      const std::string& in_app_version,
      const std::string& in_omaha_url,
      int32_t in_flags,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptUpdateWithFlags",
        success_callback,
        error_callback,
        in_app_version,
        in_omaha_url,
        in_flags);
  }

  bool AttemptInstall(
      const std::string& in_dlc_request,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptInstall",
        error,
        in_dlc_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptInstallAsync(
      const std::string& in_dlc_request,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptInstall",
        success_callback,
        error_callback,
        in_dlc_request);
  }

  bool AttemptRollback(
      bool in_powerwash,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptRollback",
        error,
        in_powerwash);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void AttemptRollbackAsync(
      bool in_powerwash,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "AttemptRollback",
        success_callback,
        error_callback,
        in_powerwash);
  }

  bool CanRollback(
      bool* out_can_rollback,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "CanRollback",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_can_rollback);
  }

  void CanRollbackAsync(
      const base::Callback<void(bool /*can_rollback*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "CanRollback",
        success_callback,
        error_callback);
  }

  bool ResetStatus(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ResetStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void ResetStatusAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "ResetStatus",
        success_callback,
        error_callback);
  }

  bool GetStatus(
      int64_t* out_last_checked_time,
      double* out_progress,
      std::string* out_current_operation,
      std::string* out_new_version,
      int64_t* out_new_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_last_checked_time, out_progress, out_current_operation, out_new_version, out_new_size);
  }

  void GetStatusAsync(
      const base::Callback<void(int64_t /*last_checked_time*/, double /*progress*/, const std::string& /*current_operation*/, const std::string& /*new_version*/, int64_t /*new_size*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetStatus",
        success_callback,
        error_callback);
  }

  bool RebootIfNeeded(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "RebootIfNeeded",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RebootIfNeededAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "RebootIfNeeded",
        success_callback,
        error_callback);
  }

  bool SetChannel(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetChannel",
        error,
        in_target_channel,
        in_is_powerwash_allowed);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetChannelAsync(
      const std::string& in_target_channel,
      bool in_is_powerwash_allowed,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetChannel",
        success_callback,
        error_callback,
        in_target_channel,
        in_is_powerwash_allowed);
  }

  bool GetChannel(
      bool in_get_current_channel,
      std::string* out_channel,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetChannel",
        error,
        in_get_current_channel);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_channel);
  }

  void GetChannelAsync(
      bool in_get_current_channel,
      const base::Callback<void(const std::string& /*channel*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetChannel",
        success_callback,
        error_callback,
        in_get_current_channel);
  }

  bool SetCohortHint(
      const std::string& in_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetCohortHint",
        error,
        in_cohort_hint);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetCohortHintAsync(
      const std::string& in_cohort_hint,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetCohortHint",
        success_callback,
        error_callback,
        in_cohort_hint);
  }

  bool GetCohortHint(
      std::string* out_cohort_hint,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetCohortHint",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_cohort_hint);
  }

  void GetCohortHintAsync(
      const base::Callback<void(const std::string& /*cohort_hint*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetCohortHint",
        success_callback,
        error_callback);
  }

  bool SetP2PUpdatePermission(
      bool in_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetP2PUpdatePermission",
        error,
        in_enabled);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetP2PUpdatePermissionAsync(
      bool in_enabled,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetP2PUpdatePermission",
        success_callback,
        error_callback,
        in_enabled);
  }

  bool GetP2PUpdatePermission(
      bool* out_enabled,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetP2PUpdatePermission",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_enabled);
  }

  void GetP2PUpdatePermissionAsync(
      const base::Callback<void(bool /*enabled*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetP2PUpdatePermission",
        success_callback,
        error_callback);
  }

  bool SetUpdateOverCellularPermission(
      bool in_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularPermission",
        error,
        in_allowed);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetUpdateOverCellularPermissionAsync(
      bool in_allowed,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularPermission",
        success_callback,
        error_callback,
        in_allowed);
  }

  bool SetUpdateOverCellularTarget(
      const std::string& in_target_version,
      int64_t in_target_size,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularTarget",
        error,
        in_target_version,
        in_target_size);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetUpdateOverCellularTargetAsync(
      const std::string& in_target_version,
      int64_t in_target_size,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "SetUpdateOverCellularTarget",
        success_callback,
        error_callback,
        in_target_version,
        in_target_size);
  }

  bool GetUpdateOverCellularPermission(
      bool* out_allowed,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetUpdateOverCellularPermission",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_allowed);
  }

  void GetUpdateOverCellularPermissionAsync(
      const base::Callback<void(bool /*allowed*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetUpdateOverCellularPermission",
        success_callback,
        error_callback);
  }

  bool GetDurationSinceUpdate(
      int64_t* out_usec_wallclock,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetDurationSinceUpdate",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_usec_wallclock);
  }

  void GetDurationSinceUpdateAsync(
      const base::Callback<void(int64_t /*usec_wallclock*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetDurationSinceUpdate",
        success_callback,
        error_callback);
  }

  bool GetPrevVersion(
      std::string* out_prev_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetPrevVersion",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_prev_version);
  }

  void GetPrevVersionAsync(
      const base::Callback<void(const std::string& /*prev_version*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetPrevVersion",
        success_callback,
        error_callback);
  }

  bool GetRollbackPartition(
      std::string* out_rollback_partition_name,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetRollbackPartition",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_rollback_partition_name);
  }

  void GetRollbackPartitionAsync(
      const base::Callback<void(const std::string& /*rollback_partition_name*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetRollbackPartition",
        success_callback,
        error_callback);
  }

  bool GetLastAttemptError(
      int32_t* out_last_attempt_error,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetLastAttemptError",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_last_attempt_error);
  }

  void GetLastAttemptErrorAsync(
      const base::Callback<void(int32_t /*last_attempt_error*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetLastAttemptError",
        success_callback,
        error_callback);
  }

  bool GetEolStatus(
      int32_t* out_eol_status,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetEolStatus",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_eol_status);
  }

  void GetEolStatusAsync(
      const base::Callback<void(int32_t /*eol_status*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.UpdateEngineInterface",
        "GetEolStatus",
        success_callback,
        error_callback);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.UpdateEngine"};
  const dbus::ObjectPath object_path_{"/org/chromium/UpdateEngine"};
  dbus::ObjectProxy* dbus_object_proxy_;

  DISALLOW_COPY_AND_ASSIGN(UpdateEngineInterfaceProxy);
};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___________TMP_UPDATE_ENGINE_CLIENT_OUT_DEFAULT_GEN_INCLUDE_UPDATE_ENGINE_DBUS_PROXIES_H
