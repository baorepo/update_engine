// Automatic generation of D-Bus interfaces:
//  - org.chromium.KioskAppServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING___HOME_T_WORK_UPDATE_ENGINE_KIOSK_APP_DBUS_PROXIES_H
#define ____CHROMEOS_DBUS_BINDING___HOME_T_WORK_UPDATE_ENGINE_KIOSK_APP_DBUS_PROXIES_H
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

// Abstract interface proxy for org::chromium::KioskAppServiceInterface.
class KioskAppServiceInterfaceProxyInterface {
 public:
  virtual ~KioskAppServiceInterfaceProxyInterface() = default;

  virtual bool GetRequiredPlatformVersion(
      std::string* out_required_platform_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual void GetRequiredPlatformVersionAsync(
      const base::Callback<void(const std::string& /*required_platform_version*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) = 0;

  virtual const dbus::ObjectPath& GetObjectPath() const = 0;
  virtual dbus::ObjectProxy* GetObjectProxy() const = 0;
};

}  // namespace chromium
}  // namespace org

namespace org {
namespace chromium {

// Interface proxy for org::chromium::KioskAppServiceInterface.
class KioskAppServiceInterfaceProxy final : public KioskAppServiceInterfaceProxyInterface {
 public:
  KioskAppServiceInterfaceProxy(
      const scoped_refptr<dbus::Bus>& bus,
      const std::string& service_name) :
          bus_{bus},
          service_name_{service_name},
          dbus_object_proxy_{
              bus_->GetObjectProxy(service_name_, object_path_)} {
  }

  ~KioskAppServiceInterfaceProxy() override {
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

  bool GetRequiredPlatformVersion(
      std::string* out_required_platform_version,
      brillo::ErrorPtr* error,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    auto response = brillo::dbus_utils::CallMethodAndBlockWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.KioskAppServiceInterface",
        "GetRequiredPlatformVersion",
        error);
    return response && brillo::dbus_utils::ExtractMethodCallResults(
        response.get(), error, out_required_platform_version);
  }

  void GetRequiredPlatformVersionAsync(
      const base::Callback<void(const std::string& /*required_platform_version*/)>& success_callback,
      const base::Callback<void(brillo::Error*)>& error_callback,
      int timeout_ms = dbus::ObjectProxy::TIMEOUT_USE_DEFAULT) override {
    brillo::dbus_utils::CallMethodWithTimeout(
        timeout_ms,
        dbus_object_proxy_,
        "org.chromium.KioskAppServiceInterface",
        "GetRequiredPlatformVersion",
        success_callback,
        error_callback);
  }

 private:
  scoped_refptr<dbus::Bus> bus_;
  std::string service_name_;
  const dbus::ObjectPath object_path_{"/org/chromium/KioskAppService"};
  dbus::ObjectProxy* dbus_object_proxy_;

  DISALLOW_COPY_AND_ASSIGN(KioskAppServiceInterfaceProxy);
};

}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING___HOME_T_WORK_UPDATE_ENGINE_KIOSK_APP_DBUS_PROXIES_H
