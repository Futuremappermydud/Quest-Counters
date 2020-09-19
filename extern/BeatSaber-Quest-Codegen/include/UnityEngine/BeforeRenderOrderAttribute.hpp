// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.BeforeRenderOrderAttribute
  class BeforeRenderOrderAttribute : public System::Attribute {
    public:
    // private System.Int32 <order>k__BackingField
    // Offset: 0x10
    int order;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return order;
    }
    // public System.Int32 get_order()
    // Offset: 0x1306A48
    int get_order();
  }; // UnityEngine.BeforeRenderOrderAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BeforeRenderOrderAttribute*, "UnityEngine", "BeforeRenderOrderAttribute");
#pragma pack(pop)
