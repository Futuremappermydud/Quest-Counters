// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraFrameType
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t : public System::ValueType {
    public:
    // public OVR.OpenVR.EVRTrackedCameraFrameType eFrameType
    // Offset: 0x0
    OVR::OpenVR::EVRTrackedCameraFrameType eFrameType;
    // public System.UInt32 nWidth
    // Offset: 0x4
    uint nWidth;
    // public System.UInt32 nHeight
    // Offset: 0x8
    uint nHeight;
    // public System.UInt32 nBytesPerPixel
    // Offset: 0xC
    uint nBytesPerPixel;
    // public System.UInt32 nFrameSequence
    // Offset: 0x10
    uint nFrameSequence;
    // public OVR.OpenVR.TrackedDevicePose_t standingTrackedDevicePose
    // Offset: 0x14
    OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose;
    // Creating value type constructor for type: CameraVideoStreamFrameHeader_t
    constexpr CameraVideoStreamFrameHeader_t(OVR::OpenVR::EVRTrackedCameraFrameType eFrameType_ = {}, uint nWidth_ = {}, uint nHeight_ = {}, uint nBytesPerPixel_ = {}, uint nFrameSequence_ = {}, OVR::OpenVR::TrackedDevicePose_t standingTrackedDevicePose_ = {}) noexcept : eFrameType{eFrameType_}, nWidth{nWidth_}, nHeight{nHeight_}, nBytesPerPixel{nBytesPerPixel_}, nFrameSequence{nFrameSequence_}, standingTrackedDevicePose{standingTrackedDevicePose_} {}
  }; // OVR.OpenVR.CameraVideoStreamFrameHeader_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CameraVideoStreamFrameHeader_t, "OVR.OpenVR", "CameraVideoStreamFrameHeader_t");
#pragma pack(pop)
