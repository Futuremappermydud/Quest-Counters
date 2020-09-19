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
  // Forward declaring type: AssetFileDownloadCancelResult
  class AssetFileDownloadCancelResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithAssetFileDownloadCancelResult
  class MessageWithAssetFileDownloadCancelResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadCancelResult*> {
    public:
    // protected Oculus.Platform.Models.AssetFileDownloadCancelResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA1F84
    Oculus::Platform::Models::AssetFileDownloadCancelResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE9EF30
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithAssetFileDownloadCancelResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.AssetFileDownloadCancelResult GetAssetFileDownloadCancelResult()
    // Offset: 0xEA1F40
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetFileDownloadCancelResult Message::GetAssetFileDownloadCancelResult()
    Oculus::Platform::Models::AssetFileDownloadCancelResult* GetAssetFileDownloadCancelResult();
  }; // Oculus.Platform.MessageWithAssetFileDownloadCancelResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadCancelResult*, "Oculus.Platform", "MessageWithAssetFileDownloadCancelResult");
#pragma pack(pop)
