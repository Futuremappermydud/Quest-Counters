// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TimeExtensions
  class TimeExtensions : public ::Il2CppObject {
    public:
    // static public System.String MinSecDurationText(System.Single duration)
    // Offset: 0xCBDEF0
    static ::Il2CppString* MinSecDurationText(float duration);
    // static public System.String MinSecMillisecDurationText(System.Single duration)
    // Offset: 0xCBE07C
    static ::Il2CppString* MinSecMillisecDurationText(float duration);
    // static public System.Int32 SecondsToDays(System.Int32 time)
    // Offset: 0xCBE16C
    static int SecondsToDays(int time);
    // static public System.Int32 SecondsToHours(System.Int32 time)
    // Offset: 0xCBE18C
    static int SecondsToHours(int time);
    // static public System.Int32 SecondsToMinutes(System.Int32 time)
    // Offset: 0xCBE1AC
    static int SecondsToMinutes(int time);
    // static public System.Int32 DaysToSeconds(System.Int32 days)
    // Offset: 0xCBE1CC
    static int DaysToSeconds(int days);
    // static public System.Int32 HoursToSeconds(System.Int32 hours)
    // Offset: 0xCBE1DC
    static int HoursToSeconds(int hours);
    // static public System.Int32 MinutesToSeconds(System.Int32 minutes)
    // Offset: 0xCBE1E8
    static int MinutesToSeconds(int minutes);
    // static public System.Int32 Hours(System.Single time)
    // Offset: 0xCBE1F4
    static int Hours(float time);
    // static public System.Int32 Minutes(System.Single time)
    // Offset: 0xCBE008
    static int Minutes(float time);
    // static public System.Int32 Seconds(System.Single time)
    // Offset: 0xCBE05C
    static int Seconds(float time);
    // static public System.Int32 Milliseconds(System.Single time)
    // Offset: 0xCBE144
    static int Milliseconds(float time);
    // static public System.Int32 TotalDays(System.Single time)
    // Offset: 0xCBE24C
    static int TotalDays(float time);
    // static public System.Int32 TotalHours(System.Single time)
    // Offset: 0xCBE270
    static int TotalHours(float time);
    // static public System.Int32 TotalMinutes(System.Single time)
    // Offset: 0xCBE294
    static int TotalMinutes(float time);
    // static public System.Int32 TotalSeconds(System.Single time)
    // Offset: 0xCBE2B8
    static int TotalSeconds(float time);
  }; // TimeExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeExtensions*, "", "TimeExtensions");
#pragma pack(pop)
