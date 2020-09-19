// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
  class IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1602370
    static IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(in System.Byte[] pTagsBuffer, System.UInt32 unTagCount)
    // Offset: 0x1602384
    void Invoke(::Array<uint8_t>*& pTagsBuffer, uint unTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, System.UInt32 unTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16025F0
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint unTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x160268C
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
#pragma pack(pop)