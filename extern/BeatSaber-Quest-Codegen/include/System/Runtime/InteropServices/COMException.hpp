// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.ExternalException
#include "System/Runtime/InteropServices/ExternalException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.COMException
  class COMException : public System::Runtime::InteropServices::ExternalException {
    public:
    // public System.Void .ctor()
    // Offset: 0x116799C
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static COMException* New_ctor();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1167A58
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static COMException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x1167A68
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.String ExternalException::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.InteropServices.COMException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::COMException*, "System.Runtime.InteropServices", "COMException");
#pragma pack(pop)
