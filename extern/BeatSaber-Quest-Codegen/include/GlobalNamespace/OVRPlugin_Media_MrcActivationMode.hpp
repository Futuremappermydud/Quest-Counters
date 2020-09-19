// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/Media
#include "GlobalNamespace/OVRPlugin_Media.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Media/MrcActivationMode
  struct OVRPlugin::Media::MrcActivationMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: MrcActivationMode
    constexpr MrcActivationMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Media/MrcActivationMode Automatic
    static constexpr const int Automatic = 0;
    // Get static field: static public OVRPlugin/Media/MrcActivationMode Automatic
    static GlobalNamespace::OVRPlugin::Media::MrcActivationMode _get_Automatic();
    // Set static field: static public OVRPlugin/Media/MrcActivationMode Automatic
    static void _set_Automatic(GlobalNamespace::OVRPlugin::Media::MrcActivationMode value);
    // static field const value: static public OVRPlugin/Media/MrcActivationMode Disabled
    static constexpr const int Disabled = 1;
    // Get static field: static public OVRPlugin/Media/MrcActivationMode Disabled
    static GlobalNamespace::OVRPlugin::Media::MrcActivationMode _get_Disabled();
    // Set static field: static public OVRPlugin/Media/MrcActivationMode Disabled
    static void _set_Disabled(GlobalNamespace::OVRPlugin::Media::MrcActivationMode value);
    // static field const value: static public OVRPlugin/Media/MrcActivationMode EnumSize
    static constexpr const int EnumSize = 2147483647;
    // Get static field: static public OVRPlugin/Media/MrcActivationMode EnumSize
    static GlobalNamespace::OVRPlugin::Media::MrcActivationMode _get_EnumSize();
    // Set static field: static public OVRPlugin/Media/MrcActivationMode EnumSize
    static void _set_EnumSize(GlobalNamespace::OVRPlugin::Media::MrcActivationMode value);
  }; // OVRPlugin/Media/MrcActivationMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Media::MrcActivationMode, "", "OVRPlugin/Media/MrcActivationMode");
#pragma pack(pop)