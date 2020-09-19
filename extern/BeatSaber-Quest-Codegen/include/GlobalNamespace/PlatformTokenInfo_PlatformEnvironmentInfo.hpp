// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformTokenInfo
#include "GlobalNamespace/PlatformTokenInfo.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PlatformEnvironment because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformTokenInfo/PlatformEnvironmentInfo
  class PlatformTokenInfo::PlatformEnvironmentInfo : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment
    struct PlatformEnvironment;
    // Autogenerated type: PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment
    struct PlatformEnvironment : public System::Enum {
      public:
      // public System.Byte value__
      // Offset: 0x0
      uint8_t value;
      // Creating value type constructor for type: PlatformEnvironment
      constexpr PlatformEnvironment(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Test
      static constexpr const uint8_t Test = 0u;
      // Get static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Test
      static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment _get_Test();
      // Set static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Test
      static void _set_Test(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment value);
      // static field const value: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Development
      static constexpr const uint8_t Development = 1u;
      // Get static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Development
      static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment _get_Development();
      // Set static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Development
      static void _set_Development(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment value);
      // static field const value: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Certification
      static constexpr const uint8_t Certification = 2u;
      // Get static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Certification
      static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment _get_Certification();
      // Set static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Certification
      static void _set_Certification(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment value);
      // static field const value: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Live
      static constexpr const uint8_t Live = 3u;
      // Get static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Live
      static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment _get_Live();
      // Set static field: static public PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment Live
      static void _set_Live(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment value);
    }; // PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment
    // public readonly PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment platformEnvironment
    // Offset: 0x10
    GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment platformEnvironment;
    // public readonly System.String serializedName
    // Offset: 0x18
    ::Il2CppString* serializedName;
    // private System.Void .ctor(PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment platformEnvironment, System.String serializedName)
    // Offset: 0xBD827C
    static PlatformTokenInfo::PlatformEnvironmentInfo* New_ctor(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment platformEnvironment, ::Il2CppString* serializedName);
    // static public PlatformTokenInfo/PlatformEnvironmentInfo TestPlatformEnvironmentInfo()
    // Offset: 0xBD82C0
    static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* TestPlatformEnvironmentInfo();
    // static public PlatformTokenInfo/PlatformEnvironmentInfo DevelopmentPlatformEnvironmentInfo()
    // Offset: 0xBD833C
    static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* DevelopmentPlatformEnvironmentInfo();
    // static public PlatformTokenInfo/PlatformEnvironmentInfo CertificationPlatformEnvironmentInfo()
    // Offset: 0xBD83BC
    static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* CertificationPlatformEnvironmentInfo();
    // static public PlatformTokenInfo/PlatformEnvironmentInfo LivePlatformEnvironmentInfo()
    // Offset: 0xBD843C
    static GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo* LivePlatformEnvironmentInfo();
  }; // PlatformTokenInfo/PlatformEnvironmentInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo*, "", "PlatformTokenInfo/PlatformEnvironmentInfo");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformTokenInfo::PlatformEnvironmentInfo::PlatformEnvironment, "", "PlatformTokenInfo/PlatformEnvironmentInfo/PlatformEnvironment");
#pragma pack(pop)
