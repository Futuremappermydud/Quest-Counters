// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.IContextProperty
  class IContextProperty {
    public:
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Void Freeze(System.Runtime.Remoting.Contexts.Context newContext)
    // Offset: 0xFFFFFFFF
    void Freeze(System::Runtime::Remoting::Contexts::Context* newContext);
    // public System.Boolean IsNewContextOK(System.Runtime.Remoting.Contexts.Context newCtx)
    // Offset: 0xFFFFFFFF
    bool IsNewContextOK(System::Runtime::Remoting::Contexts::Context* newCtx);
  }; // System.Runtime.Remoting.Contexts.IContextProperty
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContextProperty*, "System.Runtime.Remoting.Contexts", "IContextProperty");
#pragma pack(pop)
