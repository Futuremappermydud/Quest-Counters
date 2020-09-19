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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.CodegenOptions
  struct CodegenOptions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CodegenOptions
    constexpr CodegenOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Bindings.CodegenOptions Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.Bindings.CodegenOptions Auto
    static UnityEngine::Bindings::CodegenOptions _get_Auto();
    // Set static field: static public UnityEngine.Bindings.CodegenOptions Auto
    static void _set_Auto(UnityEngine::Bindings::CodegenOptions value);
    // static field const value: static public UnityEngine.Bindings.CodegenOptions Custom
    static constexpr const int Custom = 1;
    // Get static field: static public UnityEngine.Bindings.CodegenOptions Custom
    static UnityEngine::Bindings::CodegenOptions _get_Custom();
    // Set static field: static public UnityEngine.Bindings.CodegenOptions Custom
    static void _set_Custom(UnityEngine::Bindings::CodegenOptions value);
    // static field const value: static public UnityEngine.Bindings.CodegenOptions Force
    static constexpr const int Force = 2;
    // Get static field: static public UnityEngine.Bindings.CodegenOptions Force
    static UnityEngine::Bindings::CodegenOptions _get_Force();
    // Set static field: static public UnityEngine.Bindings.CodegenOptions Force
    static void _set_Force(UnityEngine::Bindings::CodegenOptions value);
  }; // UnityEngine.Bindings.CodegenOptions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::CodegenOptions, "UnityEngine.Bindings", "CodegenOptions");
#pragma pack(pop)