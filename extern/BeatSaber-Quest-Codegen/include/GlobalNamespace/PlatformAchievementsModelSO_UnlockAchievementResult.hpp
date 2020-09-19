// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsModelSO/UnlockAchievementResult
  struct PlatformAchievementsModelSO::UnlockAchievementResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: UnlockAchievementResult
    constexpr UnlockAchievementResult(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static constexpr const int OK = 0;
    // Get static field: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult _get_OK();
    // Set static field: static public PlatformAchievementsModelSO/UnlockAchievementResult OK
    static void _set_OK(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult value);
    // static field const value: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static constexpr const int Failed = 1;
    // Get static field: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult _get_Failed();
    // Set static field: static public PlatformAchievementsModelSO/UnlockAchievementResult Failed
    static void _set_Failed(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult value);
  }; // PlatformAchievementsModelSO/UnlockAchievementResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementResult, "", "PlatformAchievementsModelSO/UnlockAchievementResult");
#pragma pack(pop)