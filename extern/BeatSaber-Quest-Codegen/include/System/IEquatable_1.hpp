// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.IEquatable`1
  template<typename T>
  class IEquatable_1 {
    public:
    // public System.Boolean Equals(T other)
    // Offset: 0xFFFFFFFF
    bool Equals(T other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
    }
  }; // System.IEquatable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IEquatable_1, "System", "IEquatable`1");
#pragma pack(pop)