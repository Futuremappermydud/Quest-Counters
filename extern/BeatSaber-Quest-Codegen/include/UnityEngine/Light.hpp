// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightType
  struct LightType;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: LightShadows
  struct LightShadows;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LightEvent
  struct LightEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ShadowMapPass
  struct ShadowMapPass;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Light
  class Light : public UnityEngine::Behaviour {
    public:
    // private System.Int32 m_BakedIndex
    // Offset: 0x18
    int m_BakedIndex;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.LightType get_type()
    // Offset: 0x1312738
    UnityEngine::LightType get_type();
    // public System.Single get_spotAngle()
    // Offset: 0x1311410
    float get_spotAngle();
    // public UnityEngine.Color get_color()
    // Offset: 0x131116C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1316514
    void set_color(UnityEngine::Color value);
    // public System.Single get_intensity()
    // Offset: 0x13111C8
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x13165BC
    void set_intensity(float value);
    // public System.Single get_bounceIntensity()
    // Offset: 0x1311208
    float get_bounceIntensity();
    // public System.Single get_range()
    // Offset: 0x131172C
    float get_range();
    // public UnityEngine.LightShadows get_shadows()
    // Offset: 0x1311584
    UnityEngine::LightShadows get_shadows();
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x131660C
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer, UnityEngine.Rendering.ShadowMapPass shadowPassMask)
    // Offset: 0x1316668
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer, UnityEngine::Rendering::ShadowMapPass shadowPassMask);
    // public System.Void RemoveCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x13166D0
    void RemoveCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x13164C4
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x131656C
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.Light
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Light*, "UnityEngine", "Light");
#pragma pack(pop)