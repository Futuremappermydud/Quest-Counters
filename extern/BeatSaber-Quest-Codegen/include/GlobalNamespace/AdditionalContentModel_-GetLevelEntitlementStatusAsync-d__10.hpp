// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10
  struct AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/EntitlementStatus> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder;
    // public AdditionalContentModel <>4__this
    // Offset: 0x20
    GlobalNamespace::AdditionalContentModel* $$4__this;
    // public System.String levelId
    // Offset: 0x28
    ::Il2CppString* levelId;
    // public System.Threading.CancellationToken token
    // Offset: 0x30
    System::Threading::CancellationToken token;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $GetLevelEntitlementStatusAsync$d__10
    constexpr $GetLevelEntitlementStatusAsync$d__10(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder_ = {}, GlobalNamespace::AdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken token_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, token{token_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2BDDC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2BDE4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AdditionalContentModel::$GetLevelEntitlementStatusAsync$d__10, "", "AdditionalContentModel/<GetLevelEntitlementStatusAsync>d__10");
#pragma pack(pop)
