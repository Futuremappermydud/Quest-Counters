// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/HandFinger
  struct OVRPlugin::HandFinger : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: HandFinger
    constexpr HandFinger(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/HandFinger Thumb
    static constexpr const int Thumb = 0;
    // Get static field: static public OVRPlugin/HandFinger Thumb
    static GlobalNamespace::OVRPlugin::HandFinger _get_Thumb();
    // Set static field: static public OVRPlugin/HandFinger Thumb
    static void _set_Thumb(GlobalNamespace::OVRPlugin::HandFinger value);
    // static field const value: static public OVRPlugin/HandFinger Index
    static constexpr const int Index = 1;
    // Get static field: static public OVRPlugin/HandFinger Index
    static GlobalNamespace::OVRPlugin::HandFinger _get_Index();
    // Set static field: static public OVRPlugin/HandFinger Index
    static void _set_Index(GlobalNamespace::OVRPlugin::HandFinger value);
    // static field const value: static public OVRPlugin/HandFinger Middle
    static constexpr const int Middle = 2;
    // Get static field: static public OVRPlugin/HandFinger Middle
    static GlobalNamespace::OVRPlugin::HandFinger _get_Middle();
    // Set static field: static public OVRPlugin/HandFinger Middle
    static void _set_Middle(GlobalNamespace::OVRPlugin::HandFinger value);
    // static field const value: static public OVRPlugin/HandFinger Ring
    static constexpr const int Ring = 3;
    // Get static field: static public OVRPlugin/HandFinger Ring
    static GlobalNamespace::OVRPlugin::HandFinger _get_Ring();
    // Set static field: static public OVRPlugin/HandFinger Ring
    static void _set_Ring(GlobalNamespace::OVRPlugin::HandFinger value);
    // static field const value: static public OVRPlugin/HandFinger Pinky
    static constexpr const int Pinky = 4;
    // Get static field: static public OVRPlugin/HandFinger Pinky
    static GlobalNamespace::OVRPlugin::HandFinger _get_Pinky();
    // Set static field: static public OVRPlugin/HandFinger Pinky
    static void _set_Pinky(GlobalNamespace::OVRPlugin::HandFinger value);
    // static field const value: static public OVRPlugin/HandFinger Max
    static constexpr const int Max = 5;
    // Get static field: static public OVRPlugin/HandFinger Max
    static GlobalNamespace::OVRPlugin::HandFinger _get_Max();
    // Set static field: static public OVRPlugin/HandFinger Max
    static void _set_Max(GlobalNamespace::OVRPlugin::HandFinger value);
  }; // OVRPlugin/HandFinger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::HandFinger, "", "OVRPlugin/HandFinger");
#pragma pack(pop)
