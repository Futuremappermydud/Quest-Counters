// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.HmdColor_t
  struct HmdColor_t : public System::ValueType {
    public:
    // public System.Single r
    // Offset: 0x0
    float r;
    // public System.Single g
    // Offset: 0x4
    float g;
    // public System.Single b
    // Offset: 0x8
    float b;
    // public System.Single a
    // Offset: 0xC
    float a;
    // Creating value type constructor for type: HmdColor_t
    constexpr HmdColor_t(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
  }; // Valve.VR.HmdColor_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HmdColor_t, "Valve.VR", "HmdColor_t");
#pragma pack(pop)
