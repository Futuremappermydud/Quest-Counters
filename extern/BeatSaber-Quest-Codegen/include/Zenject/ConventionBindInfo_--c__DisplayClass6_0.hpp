// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConventionBindInfo/<>c__DisplayClass6_0
  class ConventionBindInfo::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.Assembly assembly
    // Offset: 0x10
    System::Reflection::Assembly* assembly;
    // Creating conversion operator: operator System::Reflection::Assembly*
    constexpr operator System::Reflection::Assembly*() const noexcept {
      return assembly;
    }
    // System.Boolean <ShouldIncludeAssembly>b__0(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0xD6F644
    bool $ShouldIncludeAssembly$b__0(System::Func_2<System::Reflection::Assembly*, bool>* predicate);
    // public System.Void .ctor()
    // Offset: 0xD6F3EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConventionBindInfo::$$c__DisplayClass6_0* New_ctor();
  }; // Zenject.ConventionBindInfo/<>c__DisplayClass6_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
#pragma pack(pop)
