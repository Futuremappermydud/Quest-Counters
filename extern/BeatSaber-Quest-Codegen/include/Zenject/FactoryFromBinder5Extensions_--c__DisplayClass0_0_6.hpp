// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder5Extensions
#include "Zenject/FactoryFromBinder5Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder5Extensions/<>c__DisplayClass0_0`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6 : public ::Il2CppObject {
    public:
    // public System.Guid factoryId
    // Offset: 0x0
    System::Guid factoryId;
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return factoryId;
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromIFactory$b__0(Zenject::DiContainer* container) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromIFactory>b__0", container)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor() {
      return (FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get())));
    }
  }; // Zenject.FactoryFromBinder5Extensions/<>c__DisplayClass0_0`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder5Extensions::$$c__DisplayClass0_0_6, "Zenject", "FactoryFromBinder5Extensions/<>c__DisplayClass0_0`6");
#pragma pack(pop)