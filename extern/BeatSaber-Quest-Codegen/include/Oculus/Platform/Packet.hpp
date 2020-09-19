// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: SendPolicy
  struct SendPolicy;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Packet
  class Packet : public ::Il2CppObject, public System::IDisposable {
    public:
    // private readonly System.UInt64 size
    // Offset: 0x10
    uint64_t size;
    // private readonly System.IntPtr packetHandle
    // Offset: 0x18
    System::IntPtr packetHandle;
    // public System.Void .ctor(System.IntPtr packetHandle)
    // Offset: 0xEAB5DC
    static Packet* New_ctor(System::IntPtr packetHandle);
    // public System.UInt64 ReadBytes(System.Byte[] destination)
    // Offset: 0xEAC88C
    uint64_t ReadBytes(::Array<uint8_t>* destination);
    // public System.UInt64 get_SenderID()
    // Offset: 0xEAC9E0
    uint64_t get_SenderID();
    // public System.UInt64 get_Size()
    // Offset: 0xEACA4C
    uint64_t get_Size();
    // public Oculus.Platform.SendPolicy get_Policy()
    // Offset: 0xEACA54
    Oculus::Platform::SendPolicy get_Policy();
    // protected override System.Void Finalize()
    // Offset: 0xEACAC0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0xEACB28
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Oculus.Platform.Packet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Packet*, "Oculus.Platform", "Packet");
#pragma pack(pop)