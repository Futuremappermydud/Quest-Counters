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
  // Autogenerated type: System.IComparable`1
  template<typename T>
  class IComparable_1 {
    public:
    // public System.Int32 CompareTo(T other)
    // Offset: 0xFFFFFFFF
    int CompareTo(T other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CompareTo", other));
    }
  }; // System.IComparable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IComparable_1, "System", "IComparable`1");
#pragma pack(pop)