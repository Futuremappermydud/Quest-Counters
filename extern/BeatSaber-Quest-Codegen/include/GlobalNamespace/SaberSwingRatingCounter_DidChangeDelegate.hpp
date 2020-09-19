// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberSwingRatingCounter
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberSwingRatingCounter/DidChangeDelegate
  class SaberSwingRatingCounter::DidChangeDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC2A7B8
    static SaberSwingRatingCounter::DidChangeDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(SaberSwingRatingCounter afterCutRating, System.Single rating)
    // Offset: 0xC2A398
    void Invoke(GlobalNamespace::SaberSwingRatingCounter* afterCutRating, float rating);
    // public System.IAsyncResult BeginInvoke(SaberSwingRatingCounter afterCutRating, System.Single rating, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC2A7CC
    System::IAsyncResult* BeginInvoke(GlobalNamespace::SaberSwingRatingCounter* afterCutRating, float rating, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xC2A868
    void EndInvoke(System::IAsyncResult* result);
  }; // SaberSwingRatingCounter/DidChangeDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter::DidChangeDelegate*, "", "SaberSwingRatingCounter/DidChangeDelegate");
#pragma pack(pop)
