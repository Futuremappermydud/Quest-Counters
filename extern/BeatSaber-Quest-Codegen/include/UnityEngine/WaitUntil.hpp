// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.CustomYieldInstruction
#include "UnityEngine/CustomYieldInstruction.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.WaitUntil
  class WaitUntil : public UnityEngine::CustomYieldInstruction {
    public:
    // private System.Func`1<System.Boolean> m_Predicate
    // Offset: 0x10
    System::Func_1<bool>* m_Predicate;
    // Creating conversion operator: operator System::Func_1<bool>*
    constexpr operator System::Func_1<bool>*() const noexcept {
      return m_Predicate;
    }
    // public System.Void .ctor(System.Func`1<System.Boolean> predicate)
    // Offset: 0x139F12C
    static WaitUntil* New_ctor(System::Func_1<bool>* predicate);
    // public override System.Boolean get_keepWaiting()
    // Offset: 0x139F0C8
    // Implemented from: UnityEngine.CustomYieldInstruction
    // Base method: System.Boolean CustomYieldInstruction::get_keepWaiting()
    bool get_keepWaiting();
  }; // UnityEngine.WaitUntil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WaitUntil*, "UnityEngine", "WaitUntil");
#pragma pack(pop)