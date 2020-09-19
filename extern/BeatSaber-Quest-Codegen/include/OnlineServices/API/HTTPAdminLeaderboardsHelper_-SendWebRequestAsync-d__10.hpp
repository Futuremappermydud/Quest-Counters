// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/<SendWebRequestAsync>d__10
  struct HTTPAdminLeaderboardsHelper::$SendWebRequestAsync$d__10 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public System.String uri
    // Offset: 0x20
    ::Il2CppString* uri;
    // public System.String method
    // Offset: 0x28
    ::Il2CppString* method;
    // public System.String bodyData
    // Offset: 0x30
    ::Il2CppString* bodyData;
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper <>4__this
    // Offset: 0x38
    OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x40
    System::Threading::CancellationToken cancellationToken;
    // private UnityEngine.Networking.UnityWebRequest <webRequest>5__2
    // Offset: 0x48
    UnityEngine::Networking::UnityWebRequest* $webRequest$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x50
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $SendWebRequestAsync$d__10
    constexpr $SendWebRequestAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, ::Il2CppString* uri_ = {}, ::Il2CppString* method_ = {}, ::Il2CppString* bodyData_ = {}, OnlineServices::API::HTTPAdminLeaderboardsHelper* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, UnityEngine::Networking::UnityWebRequest* $webRequest$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, uri{uri_}, method{method_}, bodyData{bodyData_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $webRequest$5__2{$webRequest$5__2_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C944
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C94C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/<SendWebRequestAsync>d__10
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::$SendWebRequestAsync$d__10, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/<SendWebRequestAsync>d__10");
#pragma pack(pop)