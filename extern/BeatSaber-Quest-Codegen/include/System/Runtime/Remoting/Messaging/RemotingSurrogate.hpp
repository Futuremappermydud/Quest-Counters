// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializationSurrogate
#include "System/Runtime/Serialization/ISerializationSurrogate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.RemotingSurrogate
  class RemotingSurrogate : public ::Il2CppObject, public System::Runtime::Serialization::ISerializationSurrogate {
    public:
    // public System.Void GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0xE1246C
    // Implemented from: System.Runtime.Serialization.ISerializationSurrogate
    // Base method: System.Void ISerializationSurrogate::GetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    void GetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc);
    // public System.Object SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc, System.Runtime.Serialization.ISurrogateSelector selector)
    // Offset: 0xE126D8
    // Implemented from: System.Runtime.Serialization.ISerializationSurrogate
    // Base method: System.Object ISerializationSurrogate::SetObjectData(System.Object obj, System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc, System.Runtime.Serialization.ISurrogateSelector selector)
    ::Il2CppObject* SetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc, System::Runtime::Serialization::ISurrogateSelector* selector);
    // public System.Void .ctor()
    // Offset: 0xE12738
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemotingSurrogate* New_ctor();
  }; // System.Runtime.Remoting.Messaging.RemotingSurrogate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::RemotingSurrogate*, "System.Runtime.Remoting.Messaging", "RemotingSurrogate");
#pragma pack(pop)