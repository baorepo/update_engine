// Automatic generation of D-Bus interface mock proxies for:
//  - org.chromium.KioskAppServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING__DBUS_PROXY_MOCKS_H
#define ____CHROMEOS_DBUS_BINDING__DBUS_PROXY_MOCKS_H
#include <string>
#include <vector>

#include <base/callback_forward.h>
#include <base/logging.h>
#include <base/macros.h>
#include <brillo/any.h>
#include <brillo/errors/error.h>
#include <brillo/variant_dictionary.h>
#include <gmock/gmock.h>

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

// Mock object for KioskAppServiceInterfaceProxyInterface.
class KioskAppServiceInterfaceProxyMock : public KioskAppServiceInterfaceProxyInterface {
 public:
  KioskAppServiceInterfaceProxyMock() = default;

  MOCK_METHOD3(GetRequiredPlatformVersion,
               bool(std::string* /*out_required_platform_version*/,
                    brillo::ErrorPtr* /*error*/,
                    int /*timeout_ms*/));
  MOCK_METHOD3(GetRequiredPlatformVersionAsync,
               void(const base::Callback<void(const std::string& /*required_platform_version*/)>& /*success_callback*/,
                    const base::Callback<void(brillo::Error*)>& /*error_callback*/,
                    int /*timeout_ms*/));
  MOCK_CONST_METHOD0(GetObjectPath, const dbus::ObjectPath&());
  MOCK_CONST_METHOD0(GetObjectProxy, dbus::ObjectProxy*());

 private:
  DISALLOW_COPY_AND_ASSIGN(KioskAppServiceInterfaceProxyMock);
};
}  // namespace chromium
}  // namespace org

#endif  // ____CHROMEOS_DBUS_BINDING__DBUS_PROXY_MOCKS_H
