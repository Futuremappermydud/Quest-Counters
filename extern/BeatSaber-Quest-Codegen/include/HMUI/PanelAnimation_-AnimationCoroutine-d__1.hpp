// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.PanelAnimation
#include "HMUI/PanelAnimation.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.PanelAnimation/<AnimationCoroutine>d__1
  class PanelAnimation::$AnimationCoroutine$d__1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public UnityEngine.CanvasGroup canvasGroup
    // Offset: 0x20
    UnityEngine::CanvasGroup* canvasGroup;
    // public System.Single duration
    // Offset: 0x28
    float duration;
    // public UnityEngine.CanvasGroup parentCanvasGroup
    // Offset: 0x30
    UnityEngine::CanvasGroup* parentCanvasGroup;
    // public UnityEngine.AnimationCurve parentAlphaAnimationCurve
    // Offset: 0x38
    UnityEngine::AnimationCurve* parentAlphaAnimationCurve;
    // public UnityEngine.AnimationCurve alphaAnimationCurve
    // Offset: 0x40
    UnityEngine::AnimationCurve* alphaAnimationCurve;
    // public UnityEngine.AnimationCurve scaleXAnimationCurve
    // Offset: 0x48
    UnityEngine::AnimationCurve* scaleXAnimationCurve;
    // public UnityEngine.AnimationCurve scaleYAnimationCurve
    // Offset: 0x50
    UnityEngine::AnimationCurve* scaleYAnimationCurve;
    // public HMUI.PanelAnimation <>4__this
    // Offset: 0x58
    HMUI::PanelAnimation* $$4__this;
    // public System.Action finishedCallback
    // Offset: 0x60
    System::Action* finishedCallback;
    // private UnityEngine.Transform <canvasTransform>5__2
    // Offset: 0x68
    UnityEngine::Transform* $canvasTransform$5__2;
    // private System.Single <elapsedTime>5__3
    // Offset: 0x70
    float $elapsedTime$5__3;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10DF4B4
    static PanelAnimation::$AnimationCoroutine$d__1* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10DF4E8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10DF4EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10DF7FC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10DF804
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10DF864
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // HMUI.PanelAnimation/<AnimationCoroutine>d__1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::PanelAnimation::$AnimationCoroutine$d__1*, "HMUI", "PanelAnimation/<AnimationCoroutine>d__1");
#pragma pack(pop)
