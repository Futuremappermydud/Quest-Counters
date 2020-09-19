// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithNetSyncConnection
  class MessageWithNetSyncConnection : public Oculus::Platform::Message_1<Oculus::Platform::Models::NetSyncConnection*> {
    public:
    // protected Oculus.Platform.Models.NetSyncConnection GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA6110
    Oculus::Platform::Models::NetSyncConnection* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE9F6B0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithNetSyncConnection* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.NetSyncConnection GetNetSyncConnection()
    // Offset: 0xEA60CC
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.NetSyncConnection Message::GetNetSyncConnection()
    Oculus::Platform::Models::NetSyncConnection* GetNetSyncConnection();
  }; // Oculus.Platform.MessageWithNetSyncConnection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithNetSyncConnection*, "Oculus.Platform", "MessageWithNetSyncConnection");
#pragma pack(pop)
