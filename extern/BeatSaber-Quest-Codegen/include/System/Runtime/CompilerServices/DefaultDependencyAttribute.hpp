// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.CompilerServices.LoadHint
#include "System/Runtime/CompilerServices/LoadHint.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.DefaultDependencyAttribute
  class DefaultDependencyAttribute : public System::Attribute {
    public:
    // private System.Runtime.CompilerServices.LoadHint loadHint
    // Offset: 0x10
    System::Runtime::CompilerServices::LoadHint loadHint;
    // Creating conversion operator: operator System::Runtime::CompilerServices::LoadHint
    constexpr operator System::Runtime::CompilerServices::LoadHint() const noexcept {
      return loadHint;
    }
    // public System.Void .ctor(System.Runtime.CompilerServices.LoadHint loadHintArgument)
    // Offset: 0x1166A18
    static DefaultDependencyAttribute* New_ctor(System::Runtime::CompilerServices::LoadHint loadHintArgument);
  }; // System.Runtime.CompilerServices.DefaultDependencyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DefaultDependencyAttribute*, "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
#pragma pack(pop)
