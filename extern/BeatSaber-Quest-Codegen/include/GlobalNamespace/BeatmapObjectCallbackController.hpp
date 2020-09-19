// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::InitData
    class InitData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData
    class BeatmapObjectCallbackData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData
    class BeatmapEventCallbackData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback
    class BeatmapObjectCallback;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback
    class BeatmapEventCallback;
    // private BeatmapObjectCallbackController/InitData _initData
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectCallbackController::InitData* initData;
    // private IAudioTimeSource _audioTimeSource
    // Offset: 0x20
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // private System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectDataCallbackCacheList
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataCallbackCacheList;
    // private System.Action`1<BeatmapEventData> beatmapEventDidTriggerEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDidTriggerEvent;
    // private System.Action callbacksForThisFrameWereProcessedEvent
    // Offset: 0x38
    System::Action* callbacksForThisFrameWereProcessedEvent;
    // private System.Collections.Generic.List`1<BeatmapObjectCallbackController/BeatmapObjectCallbackData> _beatmapObjectCallbackData
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*>* beatmapObjectCallbackData;
    // private System.Collections.Generic.List`1<BeatmapObjectCallbackController/BeatmapEventCallbackData> _beatmapEventCallbackData
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*>* beatmapEventCallbackData;
    // private System.Int32 _nextEventIndex
    // Offset: 0x50
    int nextEventIndex;
    // private System.Single _spawningStartTime
    // Offset: 0x54
    float spawningStartTime;
    // private BeatmapData _beatmapData
    // Offset: 0x58
    GlobalNamespace::BeatmapData* beatmapData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xB74CF4
    void add_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void remove_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xB74D98
    void remove_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void add_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xB74E3C
    void add_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // public System.Void remove_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xB74EE0
    void remove_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0xB74F84
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0xB75178
    void LateUpdate();
    // public BeatmapObjectCallbackController/BeatmapObjectCallbackData AddBeatmapObjectCallback(BeatmapObjectCallbackController/BeatmapObjectCallback callback, System.Single aheadTime)
    // Offset: 0xB75F1C
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* AddBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapObjectCallback(BeatmapObjectCallbackController/BeatmapObjectCallbackData callbackData)
    // Offset: 0xB760C0
    void RemoveBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* callbackData);
    // public BeatmapObjectCallbackController/BeatmapEventCallbackData AddBeatmapEventCallback(BeatmapObjectCallbackController/BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0xB76134
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* AddBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapEventCallback(BeatmapObjectCallbackController/BeatmapEventCallbackData callbackData)
    // Offset: 0xB76230
    void RemoveBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* callbackData);
    // public System.Void SendBeatmapEventDidTriggerEvent(BeatmapEventData beatmapEventData)
    // Offset: 0xB75EA8
    void SendBeatmapEventDidTriggerEvent(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void SetNewBeatmapData(BeatmapData beatmapData)
    // Offset: 0xB74FA8
    void SetNewBeatmapData(GlobalNamespace::BeatmapData* beatmapData);
    // public System.Void .ctor()
    // Offset: 0xB762A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectCallbackController* New_ctor();
  }; // BeatmapObjectCallbackController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController*, "", "BeatmapObjectCallbackController");
#pragma pack(pop)