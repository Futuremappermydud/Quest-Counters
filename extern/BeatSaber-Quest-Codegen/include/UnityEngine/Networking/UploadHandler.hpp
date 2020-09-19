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
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UploadHandler
  class UploadHandler : public ::Il2CppObject, public System::IDisposable {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Void Release()
    // Offset: 0x194A3F0
    void Release();
    // public System.Void set_contentType(System.String value)
    // Offset: 0x194A244
    void set_contentType(::Il2CppString* value);
    // System.Void SetContentType(System.String newContentType)
    // Offset: 0x194A4A0
    void SetContentType(::Il2CppString* newContentType);
    // private System.Void InternalSetContentType(System.String newContentType)
    // Offset: 0x194A4F0
    void InternalSetContentType(::Il2CppString* newContentType);
    // System.Void .ctor()
    // Offset: 0x194A430
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UploadHandler* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x194A438
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1948E20
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.Networking.UploadHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
#pragma pack(pop)