// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.NonLazyBinder
#include "Zenject/NonLazyBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.CopyNonLazyBinder
  class CopyNonLazyBinder : public Zenject::NonLazyBinder {
    public:
    // private System.Collections.Generic.List`1<Zenject.BindInfo> _secondaryBindInfos
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::BindInfo*>* secondaryBindInfos;
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // System.Void AddSecondaryCopyBindInfo(Zenject.BindInfo bindInfo)
    // Offset: 0xD70AF8
    void AddSecondaryCopyBindInfo(Zenject::BindInfo* bindInfo);
    // public Zenject.NonLazyBinder CopyIntoAllSubContainers()
    // Offset: 0xD70B9C
    Zenject::NonLazyBinder* CopyIntoAllSubContainers();
    // public Zenject.NonLazyBinder CopyIntoDirectSubContainers()
    // Offset: 0xD70CCC
    Zenject::NonLazyBinder* CopyIntoDirectSubContainers();
    // public Zenject.NonLazyBinder MoveIntoAllSubContainers()
    // Offset: 0xD70CF4
    Zenject::NonLazyBinder* MoveIntoAllSubContainers();
    // public Zenject.NonLazyBinder MoveIntoDirectSubContainers()
    // Offset: 0xD70D1C
    Zenject::NonLazyBinder* MoveIntoDirectSubContainers();
    // private System.Void SetInheritanceMethod(Zenject.BindingInheritanceMethods method)
    // Offset: 0xD70BC4
    void SetInheritanceMethod(Zenject::BindingInheritanceMethods method);
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xD6CCB4
    // Implemented from: Zenject.NonLazyBinder
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    static CopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo);
  }; // Zenject.CopyNonLazyBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::CopyNonLazyBinder*, "Zenject", "CopyNonLazyBinder");
#pragma pack(pop)