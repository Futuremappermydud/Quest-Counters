// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystemCurveMode
#include "UnityEngine/ParticleSystemCurveMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/MinMaxCurve
  struct ParticleSystem::MinMaxCurve : public System::ValueType {
    public:
    // private UnityEngine.ParticleSystemCurveMode m_Mode
    // Offset: 0x0
    UnityEngine::ParticleSystemCurveMode m_Mode;
    // private System.Single m_CurveMultiplier
    // Offset: 0x4
    float m_CurveMultiplier;
    // private UnityEngine.AnimationCurve m_CurveMin
    // Offset: 0x8
    UnityEngine::AnimationCurve* m_CurveMin;
    // private UnityEngine.AnimationCurve m_CurveMax
    // Offset: 0x10
    UnityEngine::AnimationCurve* m_CurveMax;
    // private System.Single m_ConstantMin
    // Offset: 0x18
    float m_ConstantMin;
    // private System.Single m_ConstantMax
    // Offset: 0x1C
    float m_ConstantMax;
    // Creating value type constructor for type: MinMaxCurve
    constexpr MinMaxCurve(UnityEngine::ParticleSystemCurveMode m_Mode_ = {}, float m_CurveMultiplier_ = {}, UnityEngine::AnimationCurve* m_CurveMin_ = {}, UnityEngine::AnimationCurve* m_CurveMax_ = {}, float m_ConstantMin_ = {}, float m_ConstantMax_ = {}) noexcept : m_Mode{m_Mode_}, m_CurveMultiplier{m_CurveMultiplier_}, m_CurveMin{m_CurveMin_}, m_CurveMax{m_CurveMax_}, m_ConstantMin{m_ConstantMin_}, m_ConstantMax{m_ConstantMax_} {}
    // public System.Void .ctor(System.Single constant)
    // Offset: 0xA5FC10
    static ParticleSystem::MinMaxCurve* New_ctor(float constant);
    // public System.Void .ctor(System.Single min, System.Single max)
    // Offset: 0xA5FC60
    static ParticleSystem::MinMaxCurve* New_ctor(float min, float max);
    // public UnityEngine.ParticleSystemCurveMode get_mode()
    // Offset: 0xA5FCB4
    UnityEngine::ParticleSystemCurveMode get_mode();
    // public System.Void set_constantMax(System.Single value)
    // Offset: 0xA5FCBC
    void set_constantMax(float value);
    // public System.Void set_constantMin(System.Single value)
    // Offset: 0xA5FCC4
    void set_constantMin(float value);
    // public System.Single get_constant()
    // Offset: 0xA5FCCC
    float get_constant();
    // public System.Single Evaluate(System.Single time)
    // Offset: 0xA5FCD4
    float Evaluate(float time);
    // public System.Single Evaluate(System.Single time, System.Single lerpFactor)
    // Offset: 0xA5FCE0
    float Evaluate(float time, float lerpFactor);
  }; // UnityEngine.ParticleSystem/MinMaxCurve
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MinMaxCurve, "UnityEngine", "ParticleSystem/MinMaxCurve");
#pragma pack(pop)
