// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Fill because it is already included!
  // Skipping declaration: Anchor because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings
  struct AutoUnwrapSettings : public System::ValueType {
    public:
    // Nested type: UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor
    struct Anchor;
    // Nested type: UnityEngine::ProBuilder::AutoUnwrapSettings::Fill
    struct Fill;
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
    struct Anchor : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Anchor
      constexpr Anchor(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static constexpr const int UpperLeft = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperLeft
      static void _set_UpperLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static constexpr const int UpperCenter = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperCenter
      static void _set_UpperCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static constexpr const int UpperRight = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_UpperRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor UpperRight
      static void _set_UpperRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static constexpr const int MiddleLeft = 3;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleLeft
      static void _set_MiddleLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static constexpr const int MiddleCenter = 4;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleCenter
      static void _set_MiddleCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static constexpr const int MiddleRight = 5;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_MiddleRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor MiddleRight
      static void _set_MiddleRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static constexpr const int LowerLeft = 6;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerLeft();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerLeft
      static void _set_LowerLeft(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static constexpr const int LowerCenter = 7;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerCenter();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerCenter
      static void _set_LowerCenter(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static constexpr const int LowerRight = 8;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_LowerRight();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor LowerRight
      static void _set_LowerRight(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static constexpr const int None = 9;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor _get_None();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor None
      static void _set_None(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor
    // Autogenerated type: UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
    struct Fill : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Fill
      constexpr Fill(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static constexpr const int Fit = 0;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Fit();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Fit
      static void _set_Fit(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static constexpr const int Tile = 1;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Tile();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Tile
      static void _set_Tile(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
      // static field const value: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static constexpr const int Stretch = 2;
      // Get static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static UnityEngine::ProBuilder::AutoUnwrapSettings::Fill _get_Stretch();
      // Set static field: static public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill Stretch
      static void _set_Stretch(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
    }; // UnityEngine.ProBuilder.AutoUnwrapSettings/Fill
    // private System.Boolean m_UseWorldSpace
    // Offset: 0x0
    bool m_UseWorldSpace;
    // private System.Boolean m_FlipU
    // Offset: 0x1
    bool m_FlipU;
    // private System.Boolean m_FlipV
    // Offset: 0x2
    bool m_FlipV;
    // private System.Boolean m_SwapUV
    // Offset: 0x3
    bool m_SwapUV;
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/Fill m_Fill
    // Offset: 0x4
    UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill;
    // private UnityEngine.Vector2 m_Scale
    // Offset: 0x8
    UnityEngine::Vector2 m_Scale;
    // private UnityEngine.Vector2 m_Offset
    // Offset: 0x10
    UnityEngine::Vector2 m_Offset;
    // private System.Single m_Rotation
    // Offset: 0x18
    float m_Rotation;
    // private UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor m_Anchor
    // Offset: 0x1C
    UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor;
    // Creating value type constructor for type: AutoUnwrapSettings
    constexpr AutoUnwrapSettings(bool m_UseWorldSpace_ = {}, bool m_FlipU_ = {}, bool m_FlipV_ = {}, bool m_SwapUV_ = {}, UnityEngine::ProBuilder::AutoUnwrapSettings::Fill m_Fill_ = {}, UnityEngine::Vector2 m_Scale_ = {}, UnityEngine::Vector2 m_Offset_ = {}, float m_Rotation_ = {}, UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor m_Anchor_ = {}) noexcept : m_UseWorldSpace{m_UseWorldSpace_}, m_FlipU{m_FlipU_}, m_FlipV{m_FlipV_}, m_SwapUV{m_SwapUV_}, m_Fill{m_Fill_}, m_Scale{m_Scale_}, m_Offset{m_Offset_}, m_Rotation{m_Rotation_}, m_Anchor{m_Anchor_} {}
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_defaultAutoUnwrapSettings()
    // Offset: 0x152EE2C
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings();
    // public System.Boolean get_useWorldSpace()
    // Offset: 0xA4D36C
    bool get_useWorldSpace();
    // public System.Void set_useWorldSpace(System.Boolean value)
    // Offset: 0xA4D374
    void set_useWorldSpace(bool value);
    // public System.Boolean get_flipU()
    // Offset: 0xA4D380
    bool get_flipU();
    // public System.Void set_flipU(System.Boolean value)
    // Offset: 0xA4D388
    void set_flipU(bool value);
    // public System.Boolean get_flipV()
    // Offset: 0xA4D394
    bool get_flipV();
    // public System.Void set_flipV(System.Boolean value)
    // Offset: 0xA4D39C
    void set_flipV(bool value);
    // public System.Boolean get_swapUV()
    // Offset: 0xA4D3A8
    bool get_swapUV();
    // public System.Void set_swapUV(System.Boolean value)
    // Offset: 0xA4D3B0
    void set_swapUV(bool value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/Fill get_fill()
    // Offset: 0xA4D3BC
    UnityEngine::ProBuilder::AutoUnwrapSettings::Fill get_fill();
    // public System.Void set_fill(UnityEngine.ProBuilder.AutoUnwrapSettings/Fill value)
    // Offset: 0xA4D3C4
    void set_fill(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill value);
    // public UnityEngine.Vector2 get_scale()
    // Offset: 0xA4D3CC
    UnityEngine::Vector2 get_scale();
    // public System.Void set_scale(UnityEngine.Vector2 value)
    // Offset: 0xA4D3D4
    void set_scale(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_offset()
    // Offset: 0xA4D3DC
    UnityEngine::Vector2 get_offset();
    // public System.Void set_offset(UnityEngine.Vector2 value)
    // Offset: 0xA4D3E4
    void set_offset(UnityEngine::Vector2 value);
    // public System.Single get_rotation()
    // Offset: 0xA4D3EC
    float get_rotation();
    // public System.Void set_rotation(System.Single value)
    // Offset: 0xA4D3F4
    void set_rotation(float value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor get_anchor()
    // Offset: 0xA4D3FC
    UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor get_anchor();
    // public System.Void set_anchor(UnityEngine.ProBuilder.AutoUnwrapSettings/Anchor value)
    // Offset: 0xA4D404
    void set_anchor(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor value);
    // public System.Void .ctor(UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0xA4D40C
    static AutoUnwrapSettings* New_ctor(UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_tile()
    // Offset: 0x152EFE8
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_tile();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_fit()
    // Offset: 0x152F024
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_fit();
    // static public UnityEngine.ProBuilder.AutoUnwrapSettings get_stretch()
    // Offset: 0x152F064
    static UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch();
    // public System.Void Reset()
    // Offset: 0xA4D468
    void Reset();
    // public override System.String ToString()
    // Offset: 0xA4D470
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.AutoUnwrapSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings::Anchor, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Anchor");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::AutoUnwrapSettings::Fill, "UnityEngine.ProBuilder", "AutoUnwrapSettings/Fill");
#pragma pack(pop)
