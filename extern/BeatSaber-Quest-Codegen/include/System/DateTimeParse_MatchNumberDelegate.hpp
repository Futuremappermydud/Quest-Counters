// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: __DTString
  struct __DTString;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeParse/MatchNumberDelegate
  class DateTimeParse::MatchNumberDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC8B160
    static DateTimeParse::MatchNumberDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result)
    // Offset: 0xC8B174
    bool Invoke(System::__DTString& str, int digitLen, int& result);
    // public System.IAsyncResult BeginInvoke(ref System.__DTString str, System.Int32 digitLen, out System.Int32 result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC8B404
    System::IAsyncResult* BeginInvoke(System::__DTString& str, int digitLen, int& result, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.__DTString str, out System.Int32 result, System.IAsyncResult __result)
    // Offset: 0xC8B4D0
    bool EndInvoke(System::__DTString& str, int& result, System::IAsyncResult* __result);
  }; // System.DateTimeParse/MatchNumberDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::MatchNumberDelegate*, "System", "DateTimeParse/MatchNumberDelegate");
#pragma pack(pop)