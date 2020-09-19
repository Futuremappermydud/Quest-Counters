// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.ScoreData
  struct ScoreData : public System::ValueType {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x0
    ::Il2CppString* Name;
    // private System.Int32 <Score>k__BackingField
    // Offset: 0x8
    int Score;
    // private System.Int64 <TimeStamp>k__BackingField
    // Offset: 0x10
    int64_t TimeStamp;
    // Creating value type constructor for type: ScoreData
    constexpr ScoreData(::Il2CppString* Name_ = {}, int Score_ = {}, int64_t TimeStamp_ = {}) noexcept : Name{Name_}, Score{Score_}, TimeStamp{TimeStamp_} {}
    // public System.String get_Name()
    // Offset: 0xA608A4
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0xA608AC
    void set_Name(::Il2CppString* value);
    // public System.Int32 get_Score()
    // Offset: 0xA608B4
    int get_Score();
    // public System.Void set_Score(System.Int32 value)
    // Offset: 0xA608BC
    void set_Score(int value);
    // public System.Void set_TimeStamp(System.Int64 value)
    // Offset: 0xA608C4
    void set_TimeStamp(int64_t value);
  }; // NetEase.Docker.ScoreData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::ScoreData, "NetEase.Docker", "ScoreData");
#pragma pack(pop)
