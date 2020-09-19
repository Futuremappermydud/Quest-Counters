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
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Autogenerated type: OVRSimpleJSON.JSONTextMode
  struct JSONTextMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: JSONTextMode
    constexpr JSONTextMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRSimpleJSON.JSONTextMode Compact
    static constexpr const int Compact = 0;
    // Get static field: static public OVRSimpleJSON.JSONTextMode Compact
    static OVRSimpleJSON::JSONTextMode _get_Compact();
    // Set static field: static public OVRSimpleJSON.JSONTextMode Compact
    static void _set_Compact(OVRSimpleJSON::JSONTextMode value);
    // static field const value: static public OVRSimpleJSON.JSONTextMode Indent
    static constexpr const int Indent = 1;
    // Get static field: static public OVRSimpleJSON.JSONTextMode Indent
    static OVRSimpleJSON::JSONTextMode _get_Indent();
    // Set static field: static public OVRSimpleJSON.JSONTextMode Indent
    static void _set_Indent(OVRSimpleJSON::JSONTextMode value);
  }; // OVRSimpleJSON.JSONTextMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONTextMode, "OVRSimpleJSON", "JSONTextMode");
#pragma pack(pop)
