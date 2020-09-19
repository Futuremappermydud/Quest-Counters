// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HapticFeedbackController
#include "GlobalNamespace/HapticFeedbackController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HapticFeedbackController/<OneShotRumbleCoroutine>d__12
  class HapticFeedbackController::$OneShotRumbleCoroutine$d__12 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public HapticFeedbackController <>4__this
    // Offset: 0x20
    GlobalNamespace::HapticFeedbackController* $$4__this;
    // public UnityEngine.XR.XRNode node
    // Offset: 0x28
    UnityEngine::XR::XRNode node;
    // public System.Single impulseStrength
    // Offset: 0x2C
    float impulseStrength;
    // public System.Single intervalDuration
    // Offset: 0x30
    float intervalDuration;
    // public System.Single duration
    // Offset: 0x34
    float duration;
    // private System.Int64 <startTicks>5__2
    // Offset: 0x38
    int64_t $startTicks$5__2;
    // private System.Single <startTime>5__3
    // Offset: 0x40
    float $startTime$5__3;
    // private System.Single <intervalStartTime>5__4
    // Offset: 0x44
    float $intervalStartTime$5__4;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xCB7674
    static HapticFeedbackController::$OneShotRumbleCoroutine$d__12* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xCB771C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xCB7720
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xCB78E4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xCB78EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xCB794C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HapticFeedbackController/<OneShotRumbleCoroutine>d__12
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticFeedbackController::$OneShotRumbleCoroutine$d__12*, "", "HapticFeedbackController/<OneShotRumbleCoroutine>d__12");
#pragma pack(pop)
