// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SendMouseEvents
  class SendMouseEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::SendMouseEvents::HitInfo
    struct HitInfo;
    // Get static field: static private System.Boolean s_MouseUsed
    static bool _get_s_MouseUsed();
    // Set static field: static private System.Boolean s_MouseUsed
    static void _set_s_MouseUsed(bool value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_LastHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_LastHit
    static void _set_m_LastHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_MouseDownHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_MouseDownHit
    static void _set_m_MouseDownHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static ::Array<UnityEngine::SendMouseEvents::HitInfo>* _get_m_CurrentHit();
    // Set static field: static private readonly UnityEngine.SendMouseEvents/HitInfo[] m_CurrentHit
    static void _set_m_CurrentHit(::Array<UnityEngine::SendMouseEvents::HitInfo>* value);
    // Get static field: static private UnityEngine.Camera[] m_Cameras
    static ::Array<UnityEngine::Camera*>* _get_m_Cameras();
    // Set static field: static private UnityEngine.Camera[] m_Cameras
    static void _set_m_Cameras(::Array<UnityEngine::Camera*>* value);
    // static private System.Void SetMouseMoved()
    // Offset: 0x1979D60
    static void SetMouseMoved();
    // static private System.Void DoSendMouseEvents(System.Int32 skipRTCameras)
    // Offset: 0x1979DCC
    static void DoSendMouseEvents(int skipRTCameras);
    // static private System.Void SendEvents(System.Int32 i, UnityEngine.SendMouseEvents/HitInfo hit)
    // Offset: 0x197A808
    static void SendEvents(int i, UnityEngine::SendMouseEvents::HitInfo hit);
    // static private System.Void .cctor()
    // Offset: 0x197AE70
    static void _cctor();
  }; // UnityEngine.SendMouseEvents
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
#pragma pack(pop)