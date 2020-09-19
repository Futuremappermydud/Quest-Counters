// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CapsuleCollider
  class CapsuleCollider : public UnityEngine::Collider {
    public:
    // public UnityEngine.Vector3 get_center()
    // Offset: 0x1962CD0
    UnityEngine::Vector3 get_center();
    // public System.Void set_center(UnityEngine.Vector3 value)
    // Offset: 0x1962D80
    void set_center(UnityEngine::Vector3 value);
    // public System.Single get_radius()
    // Offset: 0x1962E28
    float get_radius();
    // public System.Void set_radius(System.Single value)
    // Offset: 0x1962E68
    void set_radius(float value);
    // public System.Single get_height()
    // Offset: 0x1962EB8
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0x1962EF8
    void set_height(float value);
    // public System.Void set_direction(System.Int32 value)
    // Offset: 0x1962F48
    void set_direction(int value);
    // private System.Void get_center_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x1962D30
    void get_center_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_center_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x1962DD8
    void set_center_Injected(UnityEngine::Vector3& value);
  }; // UnityEngine.CapsuleCollider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CapsuleCollider*, "UnityEngine", "CapsuleCollider");
#pragma pack(pop)
