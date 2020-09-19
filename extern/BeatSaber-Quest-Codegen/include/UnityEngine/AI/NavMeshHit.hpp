// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.AI
namespace UnityEngine::AI {
  // Autogenerated type: UnityEngine.AI.NavMeshHit
  struct NavMeshHit : public System::ValueType {
    public:
    // private UnityEngine.Vector3 m_Position
    // Offset: 0x0
    UnityEngine::Vector3 m_Position;
    // private UnityEngine.Vector3 m_Normal
    // Offset: 0xC
    UnityEngine::Vector3 m_Normal;
    // private System.Single m_Distance
    // Offset: 0x18
    float m_Distance;
    // private System.Int32 m_Mask
    // Offset: 0x1C
    int m_Mask;
    // private System.Int32 m_Hit
    // Offset: 0x20
    int m_Hit;
    // Creating value type constructor for type: NavMeshHit
    constexpr NavMeshHit(UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}, int m_Mask_ = {}, int m_Hit_ = {}) noexcept : m_Position{m_Position_}, m_Normal{m_Normal_}, m_Distance{m_Distance_}, m_Mask{m_Mask_}, m_Hit{m_Hit_} {}
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xA63720
    UnityEngine::Vector3 get_position();
  }; // UnityEngine.AI.NavMeshHit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshHit, "UnityEngine.AI", "NavMeshHit");
#pragma pack(pop)
