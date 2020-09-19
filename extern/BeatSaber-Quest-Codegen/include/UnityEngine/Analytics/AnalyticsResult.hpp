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
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.AnalyticsResult
  struct AnalyticsResult : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AnalyticsResult
    constexpr AnalyticsResult(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult Ok
    static constexpr const int Ok = 0;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult Ok
    static UnityEngine::Analytics::AnalyticsResult _get_Ok();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult Ok
    static void _set_Ok(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static constexpr const int NotInitialized = 1;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static UnityEngine::Analytics::AnalyticsResult _get_NotInitialized();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult NotInitialized
    static void _set_NotInitialized(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static constexpr const int AnalyticsDisabled = 2;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static UnityEngine::Analytics::AnalyticsResult _get_AnalyticsDisabled();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult AnalyticsDisabled
    static void _set_AnalyticsDisabled(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static constexpr const int TooManyItems = 3;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static UnityEngine::Analytics::AnalyticsResult _get_TooManyItems();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult TooManyItems
    static void _set_TooManyItems(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static constexpr const int SizeLimitReached = 4;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static UnityEngine::Analytics::AnalyticsResult _get_SizeLimitReached();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult SizeLimitReached
    static void _set_SizeLimitReached(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static constexpr const int TooManyRequests = 5;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static UnityEngine::Analytics::AnalyticsResult _get_TooManyRequests();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult TooManyRequests
    static void _set_TooManyRequests(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static constexpr const int InvalidData = 6;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static UnityEngine::Analytics::AnalyticsResult _get_InvalidData();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult InvalidData
    static void _set_InvalidData(UnityEngine::Analytics::AnalyticsResult value);
    // static field const value: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static constexpr const int UnsupportedPlatform = 7;
    // Get static field: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static UnityEngine::Analytics::AnalyticsResult _get_UnsupportedPlatform();
    // Set static field: static public UnityEngine.Analytics.AnalyticsResult UnsupportedPlatform
    static void _set_UnsupportedPlatform(UnityEngine::Analytics::AnalyticsResult value);
  }; // UnityEngine.Analytics.AnalyticsResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::AnalyticsResult, "UnityEngine.Analytics", "AnalyticsResult");
#pragma pack(pop)
