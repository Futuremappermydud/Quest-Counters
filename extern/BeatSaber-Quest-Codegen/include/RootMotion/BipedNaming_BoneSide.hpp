// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BipedNaming
#include "RootMotion/BipedNaming.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BipedNaming/BoneSide
  struct BipedNaming::BoneSide : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: BoneSide
    constexpr BoneSide(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public RootMotion.BipedNaming/BoneSide Center
    static constexpr const int Center = 0;
    // Get static field: static public RootMotion.BipedNaming/BoneSide Center
    static RootMotion::BipedNaming::BoneSide _get_Center();
    // Set static field: static public RootMotion.BipedNaming/BoneSide Center
    static void _set_Center(RootMotion::BipedNaming::BoneSide value);
    // static field const value: static public RootMotion.BipedNaming/BoneSide Left
    static constexpr const int Left = 1;
    // Get static field: static public RootMotion.BipedNaming/BoneSide Left
    static RootMotion::BipedNaming::BoneSide _get_Left();
    // Set static field: static public RootMotion.BipedNaming/BoneSide Left
    static void _set_Left(RootMotion::BipedNaming::BoneSide value);
    // static field const value: static public RootMotion.BipedNaming/BoneSide Right
    static constexpr const int Right = 2;
    // Get static field: static public RootMotion.BipedNaming/BoneSide Right
    static RootMotion::BipedNaming::BoneSide _get_Right();
    // Set static field: static public RootMotion.BipedNaming/BoneSide Right
    static void _set_Right(RootMotion::BipedNaming::BoneSide value);
  }; // RootMotion.BipedNaming/BoneSide
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedNaming::BoneSide, "RootMotion", "BipedNaming/BoneSide");
#pragma pack(pop)