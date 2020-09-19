// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformTokenInfo
  class PlatformTokenInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/GetUserAuthTokenCompletionHandler
  class PlatformUserModelSO::GetUserAuthTokenCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBD8778
    static PlatformUserModelSO::GetUserAuthTokenCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(PlatformUserModelSO/GetUserAuthTokenResult result, PlatformTokenInfo platformTokenInfo)
    // Offset: 0xBD878C
    void Invoke(GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenResult result, GlobalNamespace::PlatformTokenInfo* platformTokenInfo);
    // public System.IAsyncResult BeginInvoke(PlatformUserModelSO/GetUserAuthTokenResult result, PlatformTokenInfo platformTokenInfo, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBD8A14
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenResult result, GlobalNamespace::PlatformTokenInfo* platformTokenInfo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xBD8AAC
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformUserModelSO/GetUserAuthTokenCompletionHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::GetUserAuthTokenCompletionHandler*, "", "PlatformUserModelSO/GetUserAuthTokenCompletionHandler");
#pragma pack(pop)