// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/TextureRectMatrixf
  struct OVRPlugin::TextureRectMatrixf : public System::ValueType {
    public:
    // public UnityEngine.Rect leftRect
    // Offset: 0x0
    UnityEngine::Rect leftRect;
    // public UnityEngine.Rect rightRect
    // Offset: 0x10
    UnityEngine::Rect rightRect;
    // public UnityEngine.Vector4 leftScaleBias
    // Offset: 0x20
    UnityEngine::Vector4 leftScaleBias;
    // public UnityEngine.Vector4 rightScaleBias
    // Offset: 0x30
    UnityEngine::Vector4 rightScaleBias;
    // Creating value type constructor for type: TextureRectMatrixf
    constexpr TextureRectMatrixf(UnityEngine::Rect leftRect_ = {}, UnityEngine::Rect rightRect_ = {}, UnityEngine::Vector4 leftScaleBias_ = {}, UnityEngine::Vector4 rightScaleBias_ = {}) noexcept : leftRect{leftRect_}, rightRect{rightRect_}, leftScaleBias{leftScaleBias_}, rightScaleBias{rightScaleBias_} {}
    // Get static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static GlobalNamespace::OVRPlugin::TextureRectMatrixf _get_zero();
    // Set static field: static public readonly OVRPlugin/TextureRectMatrixf zero
    static void _set_zero(GlobalNamespace::OVRPlugin::TextureRectMatrixf value);
    // static private System.Void .cctor()
    // Offset: 0xF4B454
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xA3B7F0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/TextureRectMatrixf
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::TextureRectMatrixf, "", "OVRPlugin/TextureRectMatrixf");
#pragma pack(pop)
