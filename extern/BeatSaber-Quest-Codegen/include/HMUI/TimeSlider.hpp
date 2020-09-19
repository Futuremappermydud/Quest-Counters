// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TimeSlider
  class TimeSlider : public HMUI::RangeValuesTextSlider {
    public:
    // Nested type: HMUI::TimeSlider::TimeType
    struct TimeType;
    // Autogenerated type: HMUI.TimeSlider/TimeType
    struct TimeType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: TimeType
      constexpr TimeType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.TimeSlider/TimeType Default
      static constexpr const int Default = 0;
      // Get static field: static public HMUI.TimeSlider/TimeType Default
      static HMUI::TimeSlider::TimeType _get_Default();
      // Set static field: static public HMUI.TimeSlider/TimeType Default
      static void _set_Default(HMUI::TimeSlider::TimeType value);
      // static field const value: static public HMUI.TimeSlider/TimeType Miliseconds
      static constexpr const int Miliseconds = 1;
      // Get static field: static public HMUI.TimeSlider/TimeType Miliseconds
      static HMUI::TimeSlider::TimeType _get_Miliseconds();
      // Set static field: static public HMUI.TimeSlider/TimeType Miliseconds
      static void _set_Miliseconds(HMUI::TimeSlider::TimeType value);
    }; // HMUI.TimeSlider/TimeType
    // private HMUI.TimeSlider/TimeType _timeType
    // Offset: 0x160
    HMUI::TimeSlider::TimeType timeType;
    // protected override System.String TextForValue(System.Single value)
    // Offset: 0x10EB808
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.String RangeValuesTextSlider::TextForValue(System.Single value)
    ::Il2CppString* TextForValue(float value);
    // public System.Void .ctor()
    // Offset: 0x10EB9C0
    // Implemented from: HMUI.RangeValuesTextSlider
    // Base method: System.Void RangeValuesTextSlider::.ctor()
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TimeSlider* New_ctor();
  }; // HMUI.TimeSlider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TimeSlider*, "HMUI", "TimeSlider");
DEFINE_IL2CPP_ARG_TYPE(HMUI::TimeSlider::TimeType, "HMUI", "TimeSlider/TimeType");
#pragma pack(pop)
