// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Autogenerated type: System.Runtime.Remoting.Activation.AppDomainLevelActivator
  class AppDomainLevelActivator : public ::Il2CppObject, public System::Runtime::Remoting::Activation::IActivator {
    public:
    // private System.String _activationUrl
    // Offset: 0x10
    ::Il2CppString* activationUrl;
    // private System.Runtime.Remoting.Activation.IActivator _next
    // Offset: 0x18
    System::Runtime::Remoting::Activation::IActivator* next;
    // public System.Void .ctor(System.String activationUrl, System.Runtime.Remoting.Activation.IActivator next)
    // Offset: 0x10536B4
    static AppDomainLevelActivator* New_ctor(::Il2CppString* activationUrl, System::Runtime::Remoting::Activation::IActivator* next);
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x1053CBC
    // Implemented from: System.Runtime.Remoting.Activation.IActivator
    // Base method: System.Runtime.Remoting.Activation.IActivator IActivator::get_NextActivator()
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1053CC4
    // Implemented from: System.Runtime.Remoting.Activation.IActivator
    // Base method: System.Runtime.Remoting.Activation.IConstructionReturnMessage IActivator::Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
  }; // System.Runtime.Remoting.Activation.AppDomainLevelActivator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::AppDomainLevelActivator*, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
#pragma pack(pop)
