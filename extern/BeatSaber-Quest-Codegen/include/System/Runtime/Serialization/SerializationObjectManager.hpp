// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationObjectManager
  class SerializationObjectManager : public ::Il2CppObject {
    public:
    // private System.Collections.Hashtable m_objectSeenTable
    // Offset: 0x10
    System::Collections::Hashtable* m_objectSeenTable;
    // private System.Runtime.Serialization.SerializationEventHandler m_onSerializedHandler
    // Offset: 0x18
    System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler;
    // private System.Runtime.Serialization.StreamingContext m_context
    // Offset: 0x20
    System::Runtime::Serialization::StreamingContext m_context;
    // public System.Void .ctor(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFEC7FC
    static SerializationObjectManager* New_ctor(System::Runtime::Serialization::StreamingContext context);
    // public System.Void RegisterObject(System.Object obj)
    // Offset: 0xFF4274
    void RegisterObject(::Il2CppObject* obj);
    // public System.Void RaiseOnSerializedEvent()
    // Offset: 0xFED93C
    void RaiseOnSerializedEvent();
    // private System.Void AddOnSerialized(System.Object obj)
    // Offset: 0x1003434
    void AddOnSerialized(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.SerializationObjectManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationObjectManager*, "System.Runtime.Serialization", "SerializationObjectManager");
#pragma pack(pop)
