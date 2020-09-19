// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.ByteEnum
  struct ByteEnum : public System::Enum {
    public:
    // public System.Byte value__
    // Offset: 0x0
    uint8_t value;
    // Creating value type constructor for type: ByteEnum
    constexpr ByteEnum(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
  }; // System.ByteEnum
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ByteEnum, "System", "ByteEnum");
#pragma pack(pop)
