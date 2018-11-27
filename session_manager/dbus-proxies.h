// Automatic generation of D-Bus interfaces:
//  - org.chromium.SessionManagerInterface
#ifndef ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceProxyInterface {
 public:
  virtual ~SessionManagerInterfaceProxyInterface() = default;

  virtual bool EmitLoginPromptVisible(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitLoginPromptVisibleAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EmitAshInitialized(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitAshInitializedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EnableChromeTesting(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      std::string* out_filepath,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EnableChromeTestingAsync(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      const base::Callback<void(const std::string& /*filepath*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SaveLoginPassword(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SaveLoginPasswordAsync(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartSession(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartSessionAsync(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StopSession(
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StopSessionAsync(
      const std::string& in_unique_identifier,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StorePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StorePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StoreUnsignedPolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StoreUnsignedPolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool ListStoredComponentPolicies(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<std::string>* out_component_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void ListStoredComponentPoliciesAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const base::Callback<void(const std::vector<std::string>& /*component_ids*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StorePolicy(
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StorePolicyAsync(
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePolicy(
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePolicyAsync(
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StorePolicyForUser(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StorePolicyForUserAsync(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePolicyForUser(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePolicyForUserAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePolicyForUserWithoutSession(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePolicyForUserWithoutSessionAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StoreDeviceLocalAccountPolicy(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StoreDeviceLocalAccountPolicyAsync(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrieveDeviceLocalAccountPolicy(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrieveDeviceLocalAccountPolicyAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrieveSessionState(
      std::string* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrieveSessionStateAsync(
      const base::Callback<void(const std::string& /*state*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrieveActiveSessions(
      std::map<std::string, std::string>* out_sessions,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrieveActiveSessionsAsync(
      const base::Callback<void(const std::map<std::string, std::string>& /*sessions*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RetrievePrimarySession(
      std::string* out_username,
      std::string* out_sanitized_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RetrievePrimarySessionAsync(
      const base::Callback<void(const std::string& /*username*/, const std::string& /*sanitized_username*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsGuestSessionActive(
      bool* out_is_guest,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsGuestSessionActiveAsync(
      const base::Callback<void(bool /*is_guest*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleSupervisedUserCreationStarting(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleSupervisedUserCreationStartingAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleSupervisedUserCreationFinished(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleSupervisedUserCreationFinishedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool LockScreen(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void LockScreenAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleLockScreenShown(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleLockScreenShownAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool HandleLockScreenDismissed(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void HandleLockScreenDismissedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool IsScreenLocked(
      bool* out_screen_locked,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void IsScreenLockedAsync(
      const base::Callback<void(bool /*screen_locked*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RestartJob(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RestartJobAsync(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartDeviceWipe(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartDeviceWipeAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartTPMFirmwareUpdate(
      const std::string& in_update_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartTPMFirmwareUpdateAsync(
      const std::string& in_update_mode,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetServerBackedStateKeys(
      std::vector<std::vector<uint8_t>>* out_state_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetServerBackedStateKeysAsync(
      const base::Callback<void(const std::vector<std::vector<uint8_t>>& /*state_keys*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool InitMachineInfo(
      const std::string& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void InitMachineInfoAsync(
      const std::string& in_data,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StartArcMiniContainer(
      const std::vector<uint8_t>& in_request,
      std::string* out_container_instance_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StartArcMiniContainerAsync(
      const std::vector<uint8_t>& in_request,
      const base::Callback<void(const std::string& /*container_instance_id*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool UpgradeArcContainer(
      const std::vector<uint8_t>& in_request,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void UpgradeArcContainerAsync(
      const std::vector<uint8_t>& in_request,
      const base::Callback<void(const base::ScopedFD& /*fd*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool StopArcInstance(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void StopArcInstanceAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool SetArcCpuRestriction(
      uint32_t in_restriction_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void SetArcCpuRestrictionAsync(
      uint32_t in_restriction_state,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool EmitArcBooted(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void EmitArcBootedAsync(
      const std::string& in_account_id,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool GetArcStartTimeTicks(
      int64_t* out_start_time,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetArcStartTimeTicksAsync(
      const base::Callback<void(int64_t /*start_time*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual bool RemoveArcData(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RemoveArcDataAsync(
      const std::string& in_account_id,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void RegisterLoginPromptVisibleSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSessionStateChangedSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterSetOwnerKeyCompleteSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterPropertyChangeCompleteSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterScreenIsLockedSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterScreenIsUnlockedSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual void RegisterArcInstanceStoppedSignalHandler(
      const base::Callback<void(uint32_t,
                                const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::SessionManagerInterface.
class SessionManagerInterfaceProxy final : public SessionManagerInterfaceProxyInterface {
 public:
  SessionManagerInterfaceProxy(const scoped_refptr<dbus::Bus>& bus) :
      bus_{bus},
      dbus_object_proxy_{
          bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ~SessionManagerInterfaceProxy() override {
  }

  void RegisterLoginPromptVisibleSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LoginPromptVisible",
        signal_callback,
        on_connected_callback);
  }

  void RegisterSessionStateChangedSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SessionStateChanged",
        signal_callback,
        on_connected_callback);
  }

  void RegisterSetOwnerKeyCompleteSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetOwnerKeyComplete",
        signal_callback,
        on_connected_callback);
  }

  void RegisterPropertyChangeCompleteSignalHandler(
      const base::Callback<void(const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "PropertyChangeComplete",
        signal_callback,
        on_connected_callback);
  }

  void RegisterScreenIsLockedSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ScreenIsLocked",
        signal_callback,
        on_connected_callback);
  }

  void RegisterScreenIsUnlockedSignalHandler(
      const base::Closure& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ScreenIsUnlocked",
        signal_callback,
        on_connected_callback);
  }

  void RegisterArcInstanceStoppedSignalHandler(
      const base::Callback<void(uint32_t,
                                const std::string&)>& signal_callback,
      dbus::ObjectProxy::OnConnectedCallback on_connected_callback) override {
    brillo::dbus_utils::ConnectToSignal(
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ArcInstanceStopped",
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

  bool EmitLoginPromptVisible(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitLoginPromptVisible",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitLoginPromptVisibleAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitLoginPromptVisible",
        success_callback,
        error_callback);
  }

  bool EmitAshInitialized(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitAshInitialized",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitAshInitializedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitAshInitialized",
        success_callback,
        error_callback);
  }

  bool EnableChromeTesting(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      std::string* out_filepath,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableChromeTesting",
        error,
        in_force_relaunch,
        in_extra_arguments,
        in_extra_environment_variables);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_filepath);
  }

  void EnableChromeTestingAsync(
      bool in_force_relaunch,
      const std::vector<std::string>& in_extra_arguments,
      const std::vector<std::string>& in_extra_environment_variables,
      const base::Callback<void(const std::string& /*filepath*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EnableChromeTesting",
        success_callback,
        error_callback,
        in_force_relaunch,
        in_extra_arguments,
        in_extra_environment_variables);
  }

  bool SaveLoginPassword(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SaveLoginPassword",
        error,
        in_password_fd);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SaveLoginPasswordAsync(
      const brillo::dbus_utils::FileDescriptor& in_password_fd,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SaveLoginPassword",
        success_callback,
        error_callback,
        in_password_fd);
  }

  bool StartSession(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartSession",
        error,
        in_account_id,
        in_unique_identifier);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartSessionAsync(
      const std::string& in_account_id,
      const std::string& in_unique_identifier,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartSession",
        success_callback,
        error_callback,
        in_account_id,
        in_unique_identifier);
  }

  bool StopSession(
      const std::string& in_unique_identifier,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSession",
        error,
        in_unique_identifier);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StopSessionAsync(
      const std::string& in_unique_identifier,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopSession",
        success_callback,
        error_callback,
        in_unique_identifier);
  }

  bool StorePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyEx",
        error,
        in_descriptor_blob,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StorePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyEx",
        success_callback,
        error_callback,
        in_descriptor_blob,
        in_policy_blob);
  }

  bool StoreUnsignedPolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreUnsignedPolicyEx",
        error,
        in_descriptor_blob,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StoreUnsignedPolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreUnsignedPolicyEx",
        success_callback,
        error_callback,
        in_descriptor_blob,
        in_policy_blob);
  }

  bool ListStoredComponentPolicies(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<std::string>* out_component_ids,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ListStoredComponentPolicies",
        error,
        in_descriptor_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_component_ids);
  }

  void ListStoredComponentPoliciesAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const base::Callback<void(const std::vector<std::string>& /*component_ids*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "ListStoredComponentPolicies",
        success_callback,
        error_callback,
        in_descriptor_blob);
  }

  bool RetrievePolicyEx(
      const std::vector<uint8_t>& in_descriptor_blob,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyEx",
        error,
        in_descriptor_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrievePolicyExAsync(
      const std::vector<uint8_t>& in_descriptor_blob,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyEx",
        success_callback,
        error_callback,
        in_descriptor_blob);
  }

  bool StorePolicy(
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicy",
        error,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StorePolicyAsync(
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicy",
        success_callback,
        error_callback,
        in_policy_blob);
  }

  bool RetrievePolicy(
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicy",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrievePolicyAsync(
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicy",
        success_callback,
        error_callback);
  }

  bool StorePolicyForUser(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyForUser",
        error,
        in_account_id,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StorePolicyForUserAsync(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StorePolicyForUser",
        success_callback,
        error_callback,
        in_account_id,
        in_policy_blob);
  }

  bool RetrievePolicyForUser(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyForUser",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrievePolicyForUserAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyForUser",
        success_callback,
        error_callback,
        in_account_id);
  }

  bool RetrievePolicyForUserWithoutSession(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyForUserWithoutSession",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrievePolicyForUserWithoutSessionAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePolicyForUserWithoutSession",
        success_callback,
        error_callback,
        in_account_id);
  }

  bool StoreDeviceLocalAccountPolicy(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreDeviceLocalAccountPolicy",
        error,
        in_account_id,
        in_policy_blob);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StoreDeviceLocalAccountPolicyAsync(
      const std::string& in_account_id,
      const std::vector<uint8_t>& in_policy_blob,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StoreDeviceLocalAccountPolicy",
        success_callback,
        error_callback,
        in_account_id,
        in_policy_blob);
  }

  bool RetrieveDeviceLocalAccountPolicy(
      const std::string& in_account_id,
      std::vector<uint8_t>* out_policy_blob,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveDeviceLocalAccountPolicy",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_policy_blob);
  }

  void RetrieveDeviceLocalAccountPolicyAsync(
      const std::string& in_account_id,
      const base::Callback<void(const std::vector<uint8_t>& /*policy_blob*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveDeviceLocalAccountPolicy",
        success_callback,
        error_callback,
        in_account_id);
  }

  bool RetrieveSessionState(
      std::string* out_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveSessionState",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_state);
  }

  void RetrieveSessionStateAsync(
      const base::Callback<void(const std::string& /*state*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveSessionState",
        success_callback,
        error_callback);
  }

  bool RetrieveActiveSessions(
      std::map<std::string, std::string>* out_sessions,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveActiveSessions",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_sessions);
  }

  void RetrieveActiveSessionsAsync(
      const base::Callback<void(const std::map<std::string, std::string>& /*sessions*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrieveActiveSessions",
        success_callback,
        error_callback);
  }

  bool RetrievePrimarySession(
      std::string* out_username,
      std::string* out_sanitized_username,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePrimarySession",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_username, out_sanitized_username);
  }

  void RetrievePrimarySessionAsync(
      const base::Callback<void(const std::string& /*username*/, const std::string& /*sanitized_username*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RetrievePrimarySession",
        success_callback,
        error_callback);
  }

  bool IsGuestSessionActive(
      bool* out_is_guest,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsGuestSessionActive",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_is_guest);
  }

  void IsGuestSessionActiveAsync(
      const base::Callback<void(bool /*is_guest*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsGuestSessionActive",
        success_callback,
        error_callback);
  }

  bool HandleSupervisedUserCreationStarting(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationStarting",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleSupervisedUserCreationStartingAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationStarting",
        success_callback,
        error_callback);
  }

  bool HandleSupervisedUserCreationFinished(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationFinished",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleSupervisedUserCreationFinishedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleSupervisedUserCreationFinished",
        success_callback,
        error_callback);
  }

  bool LockScreen(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LockScreen",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void LockScreenAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "LockScreen",
        success_callback,
        error_callback);
  }

  bool HandleLockScreenShown(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenShown",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleLockScreenShownAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenShown",
        success_callback,
        error_callback);
  }

  bool HandleLockScreenDismissed(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenDismissed",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void HandleLockScreenDismissedAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "HandleLockScreenDismissed",
        success_callback,
        error_callback);
  }

  bool IsScreenLocked(
      bool* out_screen_locked,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsScreenLocked",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_screen_locked);
  }

  void IsScreenLockedAsync(
      const base::Callback<void(bool /*screen_locked*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "IsScreenLocked",
        success_callback,
        error_callback);
  }

  bool RestartJob(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RestartJob",
        error,
        in_cred_fd,
        in_argv);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RestartJobAsync(
      const brillo::dbus_utils::FileDescriptor& in_cred_fd,
      const std::vector<std::string>& in_argv,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RestartJob",
        success_callback,
        error_callback,
        in_cred_fd,
        in_argv);
  }

  bool StartDeviceWipe(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartDeviceWipe",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartDeviceWipeAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartDeviceWipe",
        success_callback,
        error_callback);
  }

  bool StartTPMFirmwareUpdate(
      const std::string& in_update_mode,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartTPMFirmwareUpdate",
        error,
        in_update_mode);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StartTPMFirmwareUpdateAsync(
      const std::string& in_update_mode,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartTPMFirmwareUpdate",
        success_callback,
        error_callback,
        in_update_mode);
  }

  bool SetFlagsForUser(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFlagsForUser",
        error,
        in_account_id,
        in_flags);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetFlagsForUserAsync(
      const std::string& in_account_id,
      const std::vector<std::string>& in_flags,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetFlagsForUser",
        success_callback,
        error_callback,
        in_account_id,
        in_flags);
  }

  bool GetServerBackedStateKeys(
      std::vector<std::vector<uint8_t>>* out_state_keys,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetServerBackedStateKeys",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_state_keys);
  }

  void GetServerBackedStateKeysAsync(
      const base::Callback<void(const std::vector<std::vector<uint8_t>>& /*state_keys*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetServerBackedStateKeys",
        success_callback,
        error_callback);
  }

  bool InitMachineInfo(
      const std::string& in_data,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "InitMachineInfo",
        error,
        in_data);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void InitMachineInfoAsync(
      const std::string& in_data,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "InitMachineInfo",
        success_callback,
        error_callback,
        in_data);
  }

  bool StartArcMiniContainer(
      const std::vector<uint8_t>& in_request,
      std::string* out_container_instance_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartArcMiniContainer",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_container_instance_id);
  }

  void StartArcMiniContainerAsync(
      const std::vector<uint8_t>& in_request,
      const base::Callback<void(const std::string& /*container_instance_id*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StartArcMiniContainer",
        success_callback,
        error_callback,
        in_request);
  }

  bool UpgradeArcContainer(
      const std::vector<uint8_t>& in_request,
      base::ScopedFD* out_fd,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "UpgradeArcContainer",
        error,
        in_request);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_fd);
  }

  void UpgradeArcContainerAsync(
      const std::vector<uint8_t>& in_request,
      const base::Callback<void(const base::ScopedFD& /*fd*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "UpgradeArcContainer",
        success_callback,
        error_callback,
        in_request);
  }

  bool StopArcInstance(
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopArcInstance",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void StopArcInstanceAsync(
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "StopArcInstance",
        success_callback,
        error_callback);
  }

  bool SetArcCpuRestriction(
      uint32_t in_restriction_state,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetArcCpuRestriction",
        error,
        in_restriction_state);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void SetArcCpuRestrictionAsync(
      uint32_t in_restriction_state,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "SetArcCpuRestriction",
        success_callback,
        error_callback,
        in_restriction_state);
  }

  bool EmitArcBooted(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitArcBooted",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void EmitArcBootedAsync(
      const std::string& in_account_id,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "EmitArcBooted",
        success_callback,
        error_callback,
        in_account_id);
  }

  bool GetArcStartTimeTicks(
      int64_t* out_start_time,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetArcStartTimeTicks",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_start_time);
  }

  void GetArcStartTimeTicksAsync(
      const base::Callback<void(int64_t /*start_time*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "GetArcStartTimeTicks",
        success_callback,
        error_callback);
  }

  bool RemoveArcData(
      const std::string& in_account_id,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RemoveArcData",
        error,
        in_account_id);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error);
  }

  void RemoveArcDataAsync(
      const std::string& in_account_id,
      const base::Callback<void()>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.SessionManagerInterface",
        "RemoveArcData",
        success_callback,
        error_callback,
        in_account_id);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  const std::string service_name_{"org.chromium.SessionManager"};
  const dbus::ObjectPath object_path_{"/org/chromium/SessionManager"};
  dbus::ObjectProxy* dbus_object_proxy_;

  DISALLOW_COPY_AND_ASSIGN(SessionManagerInterfaceProxy);
};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___BUILD_ARM_GENERIC_VAR_CACHE_PORTAGE_CHROMEOS_BASE_SESSION_MANAGER_CLIENT_OUT_DEFAULT_GEN_INCLUDE_SESSION_MANAGER_DBUS_PROXIES_H
