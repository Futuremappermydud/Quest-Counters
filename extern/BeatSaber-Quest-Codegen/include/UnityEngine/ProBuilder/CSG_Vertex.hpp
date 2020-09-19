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
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.ProBuilder.MeshArrays
#include "UnityEngine/ProBuilder/MeshArrays.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.CSG_Vertex
  struct CSG_Vertex : public System::ValueType {
    public:
    // private UnityEngine.Vector3 m_Position
    // Offset: 0x0
    UnityEngine::Vector3 m_Position;
    // private UnityEngine.Color m_Color
    // Offset: 0xC
    UnityEngine::Color m_Color;
    // private UnityEngine.Vector3 m_Normal
    // Offset: 0x1C
    UnityEngine::Vector3 m_Normal;
    // private UnityEngine.Vector4 m_Tangent
    // Offset: 0x28
    UnityEngine::Vector4 m_Tangent;
    // private UnityEngine.Vector2 m_UV0
    // Offset: 0x38
    UnityEngine::Vector2 m_UV0;
    // private UnityEngine.Vector2 m_UV2
    // Offset: 0x40
    UnityEngine::Vector2 m_UV2;
    // private UnityEngine.Vector4 m_UV3
    // Offset: 0x48
    UnityEngine::Vector4 m_UV3;
    // private UnityEngine.Vector4 m_UV4
    // Offset: 0x58
    UnityEngine::Vector4 m_UV4;
    // private UnityEngine.ProBuilder.MeshArrays m_Attributes
    // Offset: 0x68
    UnityEngine::ProBuilder::MeshArrays m_Attributes;
    // Creating value type constructor for type: CSG_Vertex
    constexpr CSG_Vertex(UnityEngine::Vector3 m_Position_ = {}, UnityEngine::Color m_Color_ = {}, UnityEngine::Vector3 m_Normal_ = {}, UnityEngine::Vector4 m_Tangent_ = {}, UnityEngine::Vector2 m_UV0_ = {}, UnityEngine::Vector2 m_UV2_ = {}, UnityEngine::Vector4 m_UV3_ = {}, UnityEngine::Vector4 m_UV4_ = {}, UnityEngine::ProBuilder::MeshArrays m_Attributes_ = {}) noexcept : m_Position{m_Position_}, m_Color{m_Color_}, m_Normal{m_Normal_}, m_Tangent{m_Tangent_}, m_UV0{m_UV0_}, m_UV2{m_UV2_}, m_UV3{m_UV3_}, m_UV4{m_UV4_}, m_Attributes{m_Attributes_} {}
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xA4D4E8
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xA4D4F4
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Color get_color()
    // Offset: 0xA4D50C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0xA4D518
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xA4D530
    UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xA4D53C
    void set_normal(UnityEngine::Vector3 value);
    // public UnityEngine.Vector4 get_tangent()
    // Offset: 0xA4D554
    UnityEngine::Vector4 get_tangent();
    // public System.Void set_tangent(UnityEngine.Vector4 value)
    // Offset: 0xA4D560
    void set_tangent(UnityEngine::Vector4 value);
    // public UnityEngine.Vector2 get_uv0()
    // Offset: 0xA4D578
    UnityEngine::Vector2 get_uv0();
    // public System.Void set_uv0(UnityEngine.Vector2 value)
    // Offset: 0xA4D580
    void set_uv0(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_uv2()
    // Offset: 0xA4D594
    UnityEngine::Vector2 get_uv2();
    // public System.Void set_uv2(UnityEngine.Vector2 value)
    // Offset: 0xA4D59C
    void set_uv2(UnityEngine::Vector2 value);
    // public UnityEngine.Vector4 get_uv3()
    // Offset: 0xA4D5B0
    UnityEngine::Vector4 get_uv3();
    // public System.Void set_uv3(UnityEngine.Vector4 value)
    // Offset: 0xA4D5BC
    void set_uv3(UnityEngine::Vector4 value);
    // public UnityEngine.Vector4 get_uv4()
    // Offset: 0xA4D5D4
    UnityEngine::Vector4 get_uv4();
    // public System.Void set_uv4(UnityEngine.Vector4 value)
    // Offset: 0xA4D5E0
    void set_uv4(UnityEngine::Vector4 value);
    // public System.Boolean HasArrays(UnityEngine.ProBuilder.MeshArrays attribute)
    // Offset: 0xA4D5F8
    bool HasArrays(UnityEngine::ProBuilder::MeshArrays attribute);
    // public System.Boolean get_hasPosition()
    // Offset: 0xA4D608
    bool get_hasPosition();
    // private System.Void set_hasPosition(System.Boolean value)
    // Offset: 0xA4D614
    void set_hasPosition(bool value);
    // public System.Boolean get_hasColor()
    // Offset: 0xA4D630
    bool get_hasColor();
    // private System.Void set_hasColor(System.Boolean value)
    // Offset: 0xA4D63C
    void set_hasColor(bool value);
    // public System.Boolean get_hasNormal()
    // Offset: 0xA4D658
    bool get_hasNormal();
    // private System.Void set_hasNormal(System.Boolean value)
    // Offset: 0xA4D664
    void set_hasNormal(bool value);
    // public System.Boolean get_hasTangent()
    // Offset: 0xA4D680
    bool get_hasTangent();
    // private System.Void set_hasTangent(System.Boolean value)
    // Offset: 0xA4D68C
    void set_hasTangent(bool value);
    // public System.Boolean get_hasUV0()
    // Offset: 0xA4D6A8
    bool get_hasUV0();
    // private System.Void set_hasUV0(System.Boolean value)
    // Offset: 0xA4D6B4
    void set_hasUV0(bool value);
    // public System.Boolean get_hasUV2()
    // Offset: 0xA4D6D0
    bool get_hasUV2();
    // private System.Void set_hasUV2(System.Boolean value)
    // Offset: 0xA4D6DC
    void set_hasUV2(bool value);
    // public System.Boolean get_hasUV3()
    // Offset: 0xA4D6F8
    bool get_hasUV3();
    // private System.Void set_hasUV3(System.Boolean value)
    // Offset: 0xA4D704
    void set_hasUV3(bool value);
    // public System.Boolean get_hasUV4()
    // Offset: 0xA4D720
    bool get_hasUV4();
    // private System.Void set_hasUV4(System.Boolean value)
    // Offset: 0xA4D72C
    void set_hasUV4(bool value);
    // public System.Void Flip()
    // Offset: 0xA4D748
    void Flip();
  }; // UnityEngine.ProBuilder.CSG_Vertex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::CSG_Vertex, "UnityEngine.ProBuilder", "CSG_Vertex");
#pragma pack(pop)