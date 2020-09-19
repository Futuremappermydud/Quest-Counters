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
  // Forward declaring type: AssetFileDownloadUpdate
  class AssetFileDownloadUpdate;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithAssetFileDownloadUpdate
  class MessageWithAssetFileDownloadUpdate : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*> {
    public:
    // protected Oculus.Platform.Models.AssetFileDownloadUpdate GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xEA22AC
    Oculus::Platform::Models::AssetFileDownloadUpdate* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE9EFF0
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithAssetFileDownloadUpdate* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.AssetFileDownloadUpdate GetAssetFileDownloadUpdate()
    // Offset: 0xEA2268
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetFileDownloadUpdate Message::GetAssetFileDownloadUpdate()
    Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate();
  }; // Oculus.Platform.MessageWithAssetFileDownloadUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadUpdate*, "Oculus.Platform", "MessageWithAssetFileDownloadUpdate");
#pragma pack(pop)