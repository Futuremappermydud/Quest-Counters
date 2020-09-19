// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.LogoutData
  struct LogoutData : public System::ValueType {
    public:
    // private System.Int32 <LogoutCode>k__BackingField
    // Offset: 0x0
    int LogoutCode;
    // Creating value type constructor for type: LogoutData
    constexpr LogoutData(int LogoutCode_ = {}) noexcept : LogoutCode{LogoutCode_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return LogoutCode;
    }
    // public System.Void set_LogoutCode(System.Int32 value)
    // Offset: 0xA6069C
    void set_LogoutCode(int value);
  }; // NetEase.Docker.LogoutData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::LogoutData, "NetEase.Docker", "LogoutData");
#pragma pack(pop)
