// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster
#include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RaycastHit2D
  struct RaycastHit2D;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.Physics2DRaycaster
  class Physics2DRaycaster : public UnityEngine::EventSystems::PhysicsRaycaster {
    public:
    // private UnityEngine.RaycastHit2D[] m_Hits
    // Offset: 0x40
    ::Array<UnityEngine::RaycastHit2D>* m_Hits;
    // protected System.Void .ctor()
    // Offset: 0xDFF464
    // Implemented from: UnityEngine.EventSystems.PhysicsRaycaster
    // Base method: System.Void PhysicsRaycaster::.ctor()
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Physics2DRaycaster* New_ctor();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0xDFF4CC
    // Implemented from: UnityEngine.EventSystems.PhysicsRaycaster
    // Base method: System.Void PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.Physics2DRaycaster
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::Physics2DRaycaster*, "UnityEngine.EventSystems", "Physics2DRaycaster");
#pragma pack(pop)
