// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: Kernel
  class Kernel;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0x194361C
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel();
    // public Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder WithKernel()
    // Offset: 0xFFFFFFFF
    template<class TKernel>
    Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* WithKernel() {
      static_assert(std::is_convertible_v<TKernel, Zenject::Kernel*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "WithKernel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKernel>::get()})));
    }
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0x1943614
    // Implemented from: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    static WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, Zenject::BindInfo* bindInfo);
  }; // Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
#pragma pack(pop)
