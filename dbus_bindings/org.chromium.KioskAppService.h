// Automatic generation of D-Bus interfaces:
//  - org.chromium.KioskAppServiceInterface
#ifndef ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_KIOSKAPPSERVICE_H
#define ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_KIOSKAPPSERVICE_H
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

// Interface definition for org::chromium::KioskAppServiceInterface.
class KioskAppServiceInterfaceInterface {
 public:
  virtual ~KioskAppServiceInterfaceInterface() = default;

  virtual bool GetRequiredPlatformVersion(
      brillo::ErrorPtr* error,
      std::string* out_required_platform_version) = 0;
};

// Interface adaptor for org::chromium::KioskAppServiceInterface.
class KioskAppServiceInterfaceAdaptor {
 public:
  KioskAppServiceInterfaceAdaptor(KioskAppServiceInterfaceInterface* interface) : interface_(interface) {}

  void RegisterWithDBusObject(brillo::dbus_utils::DBusObject* object) {
    brillo::dbus_utils::DBusInterface* itf =
        object->AddOrGetInterface("org.chromium.KioskAppServiceInterface");

    itf->AddSimpleMethodHandlerWithError(
        "GetRequiredPlatformVersion",
        base::Unretained(interface_),
        &KioskAppServiceInterfaceInterface::GetRequiredPlatformVersion);
  }

  static dbus::ObjectPath GetObjectPath() {
    return dbus::ObjectPath{"/org/chromium/KioskAppService"};
  }

 private:
  KioskAppServiceInterfaceInterface* interface_;  // Owned by container of this adapter.

  DISALLOW_COPY_AND_ASSIGN(KioskAppServiceInterfaceAdaptor);
};

}  // namespace chromium
}  // namespace org
#endif  // ____CHROMEOS_DBUS_BINDING__ORG_CHROMIUM_KIOSKAPPSERVICE_H
