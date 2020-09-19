// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperone/_GetCalibrationState
  class IVRChaperone::_GetCalibrationState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFEAFC4
    static IVRChaperone::_GetCalibrationState* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.ChaperoneCalibrationState Invoke()
    // Offset: 0xFE30E0
    Valve::VR::ChaperoneCalibrationState Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xFEAFD8
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.ChaperoneCalibrationState EndInvoke(System.IAsyncResult result)
    // Offset: 0xFEB004
    Valve::VR::ChaperoneCalibrationState EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_GetCalibrationState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_GetCalibrationState*, "Valve.VR", "IVRChaperone/_GetCalibrationState");
#pragma pack(pop)
