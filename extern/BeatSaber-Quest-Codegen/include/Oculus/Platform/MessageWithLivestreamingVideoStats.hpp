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
  // Forward declaring type: LivestreamingVideoStats
  class LivestreamingVideoStats;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLivestreamingVideoStats
  class MessageWithLivestreamingVideoStats : public Oculus::Platform::Message_1<Oculus::Platform::Models::LivestreamingVideoStats*> {
    public:
    // protected Oculus.Platform.Models.LivestreamingVideoStats GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA50C8
    Oculus::Platform::Models::LivestreamingVideoStats* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xEA5024
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLivestreamingVideoStats* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.LivestreamingVideoStats GetLivestreamingVideoStats()
    // Offset: 0xEA5084
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LivestreamingVideoStats Message::GetLivestreamingVideoStats()
    Oculus::Platform::Models::LivestreamingVideoStats* GetLivestreamingVideoStats();
  }; // Oculus.Platform.MessageWithLivestreamingVideoStats
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLivestreamingVideoStats*, "Oculus.Platform", "MessageWithLivestreamingVideoStats");
#pragma pack(pop)