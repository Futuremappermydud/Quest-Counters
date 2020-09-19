// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Normal
  struct Normal : public System::ValueType, public System::IEquatable_1<UnityEngine::ProBuilder::Normal> {
    public:
    // private UnityEngine.Vector3 <normal>k__BackingField
    // Offset: 0x0
    UnityEngine::Vector3 normal;
    // private UnityEngine.Vector4 <tangent>k__BackingField
    // Offset: 0xC
    UnityEngine::Vector4 tangent;
    // private UnityEngine.Vector3 <bitangent>k__BackingField
    // Offset: 0x1C
    UnityEngine::Vector3 bitangent;
    // Creating value type constructor for type: Normal
    constexpr Normal(UnityEngine::Vector3 normal_ = {}, UnityEngine::Vector4 tangent_ = {}, UnityEngine::Vector3 bitangent_ = {}) noexcept : normal{normal_}, tangent{tangent_}, bitangent{bitangent_} {}
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xA3FF70
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xA3FF7C
    void set_normal(UnityEngine::Vector3 value);
    // public UnityEngine.Vector4 get_tangent()
    // Offset: 0xA3FF88
    UnityEngine::Vector4 get_tangent();
    // public System.Void set_tangent(UnityEngine.Vector4 value)
    // Offset: 0xA3FF94
    void set_tangent(UnityEngine::Vector4 value);
    // public UnityEngine.Vector3 get_bitangent()
    // Offset: 0xA3FFA0
    UnityEngine::Vector3 get_bitangent();
    // public System.Void set_bitangent(UnityEngine.Vector3 value)
    // Offset: 0xA3FFAC
    void set_bitangent(UnityEngine::Vector3 value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA3FFB8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA3FFC0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public System.Boolean Equals(UnityEngine.ProBuilder.Normal other)
    // Offset: 0xA3FFC8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.ProBuilder.Normal other)
    bool Equals(UnityEngine::ProBuilder::Normal other);
  }; // UnityEngine.ProBuilder.Normal
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x1030DAC
  bool operator ==(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.Normal a, UnityEngine.ProBuilder.Normal b)
  // Offset: 0x1030DE0
  bool operator !=(const UnityEngine::ProBuilder::Normal& a, const UnityEngine::ProBuilder::Normal& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Normal, "UnityEngine.ProBuilder", "Normal");
#pragma pack(pop)