// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: AxisEventData
  class AxisEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.IMoveHandler
  class IMoveHandler : public UnityEngine::EventSystems::IEventSystemHandler {
    public:
    // public System.Void OnMove(UnityEngine.EventSystems.AxisEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnMove(UnityEngine::EventSystems::AxisEventData* eventData);
  }; // UnityEngine.EventSystems.IMoveHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IMoveHandler*, "UnityEngine.EventSystems", "IMoveHandler");
#pragma pack(pop)
