// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InstallerBase
#include "Zenject/InstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Installer`2
  template<typename TParam1, typename TDerived>
  class Installer_2 : public Zenject::InstallerBase {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TDerived>> || std::is_convertible_v<TDerived, Zenject::Installer_2<TParam1, TDerived>*>));
    public:
    // static public System.Void Install(Zenject.DiContainer container, TParam1 p1)
    // Offset: 0xFFFFFFFF
    static void Install(Zenject::DiContainer* container, TParam1 p1) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_2<TParam1, TDerived>*>::get(), "Install", container, p1)));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static Installer_2<TParam1, TDerived>* New_ctor() {
      return (Installer_2<TParam1, TDerived>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_2<TParam1, TDerived>*>::get())));
    }
  }; // Zenject.Installer`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_2, "Zenject", "Installer`2");
#pragma pack(pop)