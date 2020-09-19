// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Rendering.BatchRendererGroup
#include "UnityEngine/Rendering/BatchRendererGroup.hpp"
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
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
  // Forward declaring type: JobHandle
  struct JobHandle;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchCullingContext
  struct BatchCullingContext;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
  class BatchRendererGroup::OnPerformCulling : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x138BF28
    static BatchRendererGroup::OnPerformCulling* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Unity.Jobs.JobHandle Invoke(UnityEngine.Rendering.BatchRendererGroup rendererGroup, UnityEngine.Rendering.BatchCullingContext cullingContext)
    // Offset: 0x138B980
    Unity::Jobs::JobHandle Invoke(UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine::Rendering::BatchCullingContext cullingContext);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Rendering.BatchRendererGroup rendererGroup, UnityEngine.Rendering.BatchCullingContext cullingContext, System.AsyncCallback callback, System.Object object)
    // Offset: 0x138BF3C
    System::IAsyncResult* BeginInvoke(UnityEngine::Rendering::BatchRendererGroup* rendererGroup, UnityEngine::Rendering::BatchCullingContext cullingContext, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Unity.Jobs.JobHandle EndInvoke(System.IAsyncResult result)
    // Offset: 0x138BFD8
    Unity::Jobs::JobHandle EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
#pragma pack(pop)