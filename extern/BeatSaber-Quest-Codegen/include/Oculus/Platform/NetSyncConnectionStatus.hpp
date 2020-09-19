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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.NetSyncConnectionStatus
  struct NetSyncConnectionStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NetSyncConnectionStatus
    constexpr NetSyncConnectionStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static Oculus::Platform::NetSyncConnectionStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static Oculus::Platform::NetSyncConnectionStatus _get_Connecting();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connecting
    static void _set_Connecting(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static constexpr const int Disconnected = 2;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static Oculus::Platform::NetSyncConnectionStatus _get_Disconnected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Disconnected
    static void _set_Disconnected(Oculus::Platform::NetSyncConnectionStatus value);
    // static field const value: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static constexpr const int Connected = 3;
    // Get static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static Oculus::Platform::NetSyncConnectionStatus _get_Connected();
    // Set static field: static public Oculus.Platform.NetSyncConnectionStatus Connected
    static void _set_Connected(Oculus::Platform::NetSyncConnectionStatus value);
  }; // Oculus.Platform.NetSyncConnectionStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncConnectionStatus, "Oculus.Platform", "NetSyncConnectionStatus");
#pragma pack(pop)
