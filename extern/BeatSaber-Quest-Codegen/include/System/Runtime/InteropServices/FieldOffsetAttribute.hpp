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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.FieldOffsetAttribute
  class FieldOffsetAttribute : public System::Attribute {
    public:
    // System.Int32 _val
    // Offset: 0x10
    int val;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Int32 offset)
    // Offset: 0x1168098
    static FieldOffsetAttribute* New_ctor(int offset);
  }; // System.Runtime.InteropServices.FieldOffsetAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::FieldOffsetAttribute*, "System.Runtime.InteropServices", "FieldOffsetAttribute");
#pragma pack(pop)