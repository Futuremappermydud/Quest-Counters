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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
  class IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1602048
    static IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount)
    // Offset: 0x160205C
    void Invoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.HmdQuad_t[] pQuadsBuffer, System.UInt32 unQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16022C8
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::HmdQuad_t>*& pQuadsBuffer, uint unQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1602364
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo");
#pragma pack(pop)
