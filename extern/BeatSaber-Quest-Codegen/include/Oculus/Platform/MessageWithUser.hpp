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
  // Forward declaring type: User
  class User;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithUser
  class MessageWithUser : public Oculus::Platform::Message_1<Oculus::Platform::Models::User*> {
    public:
    // protected Oculus.Platform.Models.User GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA943C
    Oculus::Platform::Models::User* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE9FDD0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithUser* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.User GetUser()
    // Offset: 0xEA93F8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.User Message::GetUser()
    Oculus::Platform::Models::User* GetUser();
  }; // Oculus.Platform.MessageWithUser
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithUser*, "Oculus.Platform", "MessageWithUser");
#pragma pack(pop)