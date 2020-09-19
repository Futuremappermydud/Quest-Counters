// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ViewController/<DismissViewControllerCoroutine>d__51
  class ViewController::$DismissViewControllerCoroutine$d__51 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public HMUI.ViewController <>4__this
    // Offset: 0x20
    HMUI::ViewController* $$4__this;
    // public System.Boolean immediately
    // Offset: 0x28
    bool immediately;
    // public System.Action finishedCallback
    // Offset: 0x30
    System::Action* finishedCallback;
    // private UnityEngine.Transform <movingOutObjectTransform>5__2
    // Offset: 0x38
    UnityEngine::Transform* $movingOutObjectTransform$5__2;
    // private UnityEngine.Transform <movingInObjectTransform>5__3
    // Offset: 0x40
    UnityEngine::Transform* $movingInObjectTransform$5__3;
    // private System.Single <moveOffset>5__4
    // Offset: 0x48
    float $moveOffset$5__4;
    // private System.Single <transitionDuration>5__5
    // Offset: 0x4C
    float $transitionDuration$5__5;
    // private System.Single <elapsedTime>5__6
    // Offset: 0x50
    float $elapsedTime$5__6;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10ECC08
    static ViewController::$DismissViewControllerCoroutine$d__51* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10ED69C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10ED6A0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10EDA70
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10EDA78
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10EDAD8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.ViewController/<DismissViewControllerCoroutine>d__51
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController::$DismissViewControllerCoroutine$d__51*, "HMUI", "ViewController/<DismissViewControllerCoroutine>d__51");
#pragma pack(pop)