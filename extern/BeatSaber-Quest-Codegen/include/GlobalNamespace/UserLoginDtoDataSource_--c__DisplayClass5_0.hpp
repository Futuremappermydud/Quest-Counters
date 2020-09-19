// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UserLoginDtoDataSource
#include "GlobalNamespace/UserLoginDtoDataSource.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UserLoginDtoDataSource/<>c__DisplayClass5_0
  class UserLoginDtoDataSource::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x10
    System::Threading::CancellationToken cancellationToken;
    // public System.Threading.Tasks.TaskCompletionSource`1<PlatformUserModelSO/UserInfo> tcs
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::PlatformUserModelSO::UserInfo*>* tcs;
    // System.Void <GetUserInfo>b__0(PlatformUserModelSO/GetUserInfoResult result, PlatformUserModelSO/UserInfo userInfo)
    // Offset: 0xC4E1CC
    void $GetUserInfo$b__0(GlobalNamespace::PlatformUserModelSO::GetUserInfoResult result, GlobalNamespace::PlatformUserModelSO::UserInfo* userInfo);
    // public System.Void .ctor()
    // Offset: 0xC4E1C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UserLoginDtoDataSource::$$c__DisplayClass5_0* New_ctor();
  }; // UserLoginDtoDataSource/<>c__DisplayClass5_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$$c__DisplayClass5_0*, "", "UserLoginDtoDataSource/<>c__DisplayClass5_0");
#pragma pack(pop)
