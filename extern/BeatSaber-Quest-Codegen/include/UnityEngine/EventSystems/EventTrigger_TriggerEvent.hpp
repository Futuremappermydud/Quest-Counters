// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.EventTrigger
#include "UnityEngine/EventSystems/EventTrigger.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger/TriggerEvent
  class EventTrigger::TriggerEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::EventSystems::BaseEventData*> {
    public:
    // public System.Void .ctor()
    // Offset: 0xDFD5AC
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent`1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventTrigger::TriggerEvent* New_ctor();
  }; // UnityEngine.EventSystems.EventTrigger/TriggerEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTrigger::TriggerEvent*, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");
#pragma pack(pop)
