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
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Plane
  struct Plane : public System::ValueType {
    public:
    // private UnityEngine.Vector3 m_Normal
    // Offset: 0x0
    UnityEngine::Vector3 m_Normal;
    // private System.Single m_Distance
    // Offset: 0xC
    float m_Distance;
    // Creating value type constructor for type: Plane
    constexpr Plane(UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}) noexcept : m_Normal{m_Normal_}, m_Distance{m_Distance_} {}
    // static field const value: static System.Int32 size
    static constexpr const int size = 16;
    // Get static field: static System.Int32 size
    static int _get_size();
    // Set static field: static System.Int32 size
    static void _set_size(int value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xA4893C
    UnityEngine::Vector3 get_normal();
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0xA48948
    static Plane* New_ctor(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint);
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c)
    // Offset: 0xA48950
    static Plane* New_ctor(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c);
    // public System.Void SetNormalAndPosition(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0xA48968
    void SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint);
    // public UnityEngine.Vector3 ClosestPointOnPlane(UnityEngine.Vector3 point)
    // Offset: 0xA48970
    UnityEngine::Vector3 ClosestPointOnPlane(UnityEngine::Vector3 point);
    // public System.Single GetDistanceToPoint(UnityEngine.Vector3 point)
    // Offset: 0xA48978
    float GetDistanceToPoint(UnityEngine::Vector3 point);
    // public System.Boolean SameSide(UnityEngine.Vector3 inPt0, UnityEngine.Vector3 inPt1)
    // Offset: 0xA48980
    bool SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out System.Single enter)
    // Offset: 0xA48988
    bool Raycast(UnityEngine::Ray ray, float& enter);
    // public override System.String ToString()
    // Offset: 0xA489C0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Plane
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Plane, "UnityEngine", "Plane");
#pragma pack(pop)