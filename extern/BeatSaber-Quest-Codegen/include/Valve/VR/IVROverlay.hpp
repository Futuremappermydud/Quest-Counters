// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay
  struct IVROverlay : public System::ValueType {
    public:
    // Nested type: Valve::VR::IVROverlay::_FindOverlay
    class _FindOverlay;
    // Nested type: Valve::VR::IVROverlay::_CreateOverlay
    class _CreateOverlay;
    // Nested type: Valve::VR::IVROverlay::_DestroyOverlay
    class _DestroyOverlay;
    // Nested type: Valve::VR::IVROverlay::_SetHighQualityOverlay
    class _SetHighQualityOverlay;
    // Nested type: Valve::VR::IVROverlay::_GetHighQualityOverlay
    class _GetHighQualityOverlay;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayKey
    class _GetOverlayKey;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayName
    class _GetOverlayName;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayName
    class _SetOverlayName;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayImageData
    class _GetOverlayImageData;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayErrorNameFromEnum
    class _GetOverlayErrorNameFromEnum;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayRenderingPid
    class _SetOverlayRenderingPid;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayRenderingPid
    class _GetOverlayRenderingPid;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayFlag
    class _SetOverlayFlag;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayFlag
    class _GetOverlayFlag;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayColor
    class _SetOverlayColor;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayColor
    class _GetOverlayColor;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayAlpha
    class _SetOverlayAlpha;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayAlpha
    class _GetOverlayAlpha;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTexelAspect
    class _SetOverlayTexelAspect;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTexelAspect
    class _GetOverlayTexelAspect;
    // Nested type: Valve::VR::IVROverlay::_SetOverlaySortOrder
    class _SetOverlaySortOrder;
    // Nested type: Valve::VR::IVROverlay::_GetOverlaySortOrder
    class _GetOverlaySortOrder;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayWidthInMeters
    class _SetOverlayWidthInMeters;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayWidthInMeters
    class _GetOverlayWidthInMeters;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters
    class _SetOverlayAutoCurveDistanceRangeInMeters;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters
    class _GetOverlayAutoCurveDistanceRangeInMeters;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTextureColorSpace
    class _SetOverlayTextureColorSpace;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTextureColorSpace
    class _GetOverlayTextureColorSpace;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTextureBounds
    class _SetOverlayTextureBounds;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTextureBounds
    class _GetOverlayTextureBounds;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayRenderModel
    class _GetOverlayRenderModel;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayRenderModel
    class _SetOverlayRenderModel;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTransformType
    class _GetOverlayTransformType;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTransformAbsolute
    class _SetOverlayTransformAbsolute;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTransformAbsolute
    class _GetOverlayTransformAbsolute;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative
    class _SetOverlayTransformTrackedDeviceRelative;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative
    class _GetOverlayTransformTrackedDeviceRelative;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent
    class _SetOverlayTransformTrackedDeviceComponent;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent
    class _GetOverlayTransformTrackedDeviceComponent;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative
    class _GetOverlayTransformOverlayRelative;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTransformOverlayRelative
    class _SetOverlayTransformOverlayRelative;
    // Nested type: Valve::VR::IVROverlay::_ShowOverlay
    class _ShowOverlay;
    // Nested type: Valve::VR::IVROverlay::_HideOverlay
    class _HideOverlay;
    // Nested type: Valve::VR::IVROverlay::_IsOverlayVisible
    class _IsOverlayVisible;
    // Nested type: Valve::VR::IVROverlay::_GetTransformForOverlayCoordinates
    class _GetTransformForOverlayCoordinates;
    // Nested type: Valve::VR::IVROverlay::_PollNextOverlayEvent
    class _PollNextOverlayEvent;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayInputMethod
    class _GetOverlayInputMethod;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayInputMethod
    class _SetOverlayInputMethod;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayMouseScale
    class _GetOverlayMouseScale;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayMouseScale
    class _SetOverlayMouseScale;
    // Nested type: Valve::VR::IVROverlay::_ComputeOverlayIntersection
    class _ComputeOverlayIntersection;
    // Nested type: Valve::VR::IVROverlay::_IsHoverTargetOverlay
    class _IsHoverTargetOverlay;
    // Nested type: Valve::VR::IVROverlay::_GetGamepadFocusOverlay
    class _GetGamepadFocusOverlay;
    // Nested type: Valve::VR::IVROverlay::_SetGamepadFocusOverlay
    class _SetGamepadFocusOverlay;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayNeighbor
    class _SetOverlayNeighbor;
    // Nested type: Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor
    class _MoveGamepadFocusToNeighbor;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform
    class _SetOverlayDualAnalogTransform;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayDualAnalogTransform
    class _GetOverlayDualAnalogTransform;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayTexture
    class _SetOverlayTexture;
    // Nested type: Valve::VR::IVROverlay::_ClearOverlayTexture
    class _ClearOverlayTexture;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayRaw
    class _SetOverlayRaw;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayFromFile
    class _SetOverlayFromFile;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTexture
    class _GetOverlayTexture;
    // Nested type: Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle
    class _ReleaseNativeOverlayHandle;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayTextureSize
    class _GetOverlayTextureSize;
    // Nested type: Valve::VR::IVROverlay::_CreateDashboardOverlay
    class _CreateDashboardOverlay;
    // Nested type: Valve::VR::IVROverlay::_IsDashboardVisible
    class _IsDashboardVisible;
    // Nested type: Valve::VR::IVROverlay::_IsActiveDashboardOverlay
    class _IsActiveDashboardOverlay;
    // Nested type: Valve::VR::IVROverlay::_SetDashboardOverlaySceneProcess
    class _SetDashboardOverlaySceneProcess;
    // Nested type: Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess
    class _GetDashboardOverlaySceneProcess;
    // Nested type: Valve::VR::IVROverlay::_ShowDashboard
    class _ShowDashboard;
    // Nested type: Valve::VR::IVROverlay::_GetPrimaryDashboardDevice
    class _GetPrimaryDashboardDevice;
    // Nested type: Valve::VR::IVROverlay::_ShowKeyboard
    class _ShowKeyboard;
    // Nested type: Valve::VR::IVROverlay::_ShowKeyboardForOverlay
    class _ShowKeyboardForOverlay;
    // Nested type: Valve::VR::IVROverlay::_GetKeyboardText
    class _GetKeyboardText;
    // Nested type: Valve::VR::IVROverlay::_HideKeyboard
    class _HideKeyboard;
    // Nested type: Valve::VR::IVROverlay::_SetKeyboardTransformAbsolute
    class _SetKeyboardTransformAbsolute;
    // Nested type: Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay
    class _SetKeyboardPositionForOverlay;
    // Nested type: Valve::VR::IVROverlay::_SetOverlayIntersectionMask
    class _SetOverlayIntersectionMask;
    // Nested type: Valve::VR::IVROverlay::_GetOverlayFlags
    class _GetOverlayFlags;
    // Nested type: Valve::VR::IVROverlay::_ShowMessageOverlay
    class _ShowMessageOverlay;
    // Nested type: Valve::VR::IVROverlay::_CloseMessageOverlay
    class _CloseMessageOverlay;
    // Valve.VR.IVROverlay/_FindOverlay FindOverlay
    // Offset: 0x0
    Valve::VR::IVROverlay::_FindOverlay* FindOverlay;
    // Valve.VR.IVROverlay/_CreateOverlay CreateOverlay
    // Offset: 0x8
    Valve::VR::IVROverlay::_CreateOverlay* CreateOverlay;
    // Valve.VR.IVROverlay/_DestroyOverlay DestroyOverlay
    // Offset: 0x10
    Valve::VR::IVROverlay::_DestroyOverlay* DestroyOverlay;
    // Valve.VR.IVROverlay/_SetHighQualityOverlay SetHighQualityOverlay
    // Offset: 0x18
    Valve::VR::IVROverlay::_SetHighQualityOverlay* SetHighQualityOverlay;
    // Valve.VR.IVROverlay/_GetHighQualityOverlay GetHighQualityOverlay
    // Offset: 0x20
    Valve::VR::IVROverlay::_GetHighQualityOverlay* GetHighQualityOverlay;
    // Valve.VR.IVROverlay/_GetOverlayKey GetOverlayKey
    // Offset: 0x28
    Valve::VR::IVROverlay::_GetOverlayKey* GetOverlayKey;
    // Valve.VR.IVROverlay/_GetOverlayName GetOverlayName
    // Offset: 0x30
    Valve::VR::IVROverlay::_GetOverlayName* GetOverlayName;
    // Valve.VR.IVROverlay/_SetOverlayName SetOverlayName
    // Offset: 0x38
    Valve::VR::IVROverlay::_SetOverlayName* SetOverlayName;
    // Valve.VR.IVROverlay/_GetOverlayImageData GetOverlayImageData
    // Offset: 0x40
    Valve::VR::IVROverlay::_GetOverlayImageData* GetOverlayImageData;
    // Valve.VR.IVROverlay/_GetOverlayErrorNameFromEnum GetOverlayErrorNameFromEnum
    // Offset: 0x48
    Valve::VR::IVROverlay::_GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum;
    // Valve.VR.IVROverlay/_SetOverlayRenderingPid SetOverlayRenderingPid
    // Offset: 0x50
    Valve::VR::IVROverlay::_SetOverlayRenderingPid* SetOverlayRenderingPid;
    // Valve.VR.IVROverlay/_GetOverlayRenderingPid GetOverlayRenderingPid
    // Offset: 0x58
    Valve::VR::IVROverlay::_GetOverlayRenderingPid* GetOverlayRenderingPid;
    // Valve.VR.IVROverlay/_SetOverlayFlag SetOverlayFlag
    // Offset: 0x60
    Valve::VR::IVROverlay::_SetOverlayFlag* SetOverlayFlag;
    // Valve.VR.IVROverlay/_GetOverlayFlag GetOverlayFlag
    // Offset: 0x68
    Valve::VR::IVROverlay::_GetOverlayFlag* GetOverlayFlag;
    // Valve.VR.IVROverlay/_SetOverlayColor SetOverlayColor
    // Offset: 0x70
    Valve::VR::IVROverlay::_SetOverlayColor* SetOverlayColor;
    // Valve.VR.IVROverlay/_GetOverlayColor GetOverlayColor
    // Offset: 0x78
    Valve::VR::IVROverlay::_GetOverlayColor* GetOverlayColor;
    // Valve.VR.IVROverlay/_SetOverlayAlpha SetOverlayAlpha
    // Offset: 0x80
    Valve::VR::IVROverlay::_SetOverlayAlpha* SetOverlayAlpha;
    // Valve.VR.IVROverlay/_GetOverlayAlpha GetOverlayAlpha
    // Offset: 0x88
    Valve::VR::IVROverlay::_GetOverlayAlpha* GetOverlayAlpha;
    // Valve.VR.IVROverlay/_SetOverlayTexelAspect SetOverlayTexelAspect
    // Offset: 0x90
    Valve::VR::IVROverlay::_SetOverlayTexelAspect* SetOverlayTexelAspect;
    // Valve.VR.IVROverlay/_GetOverlayTexelAspect GetOverlayTexelAspect
    // Offset: 0x98
    Valve::VR::IVROverlay::_GetOverlayTexelAspect* GetOverlayTexelAspect;
    // Valve.VR.IVROverlay/_SetOverlaySortOrder SetOverlaySortOrder
    // Offset: 0xA0
    Valve::VR::IVROverlay::_SetOverlaySortOrder* SetOverlaySortOrder;
    // Valve.VR.IVROverlay/_GetOverlaySortOrder GetOverlaySortOrder
    // Offset: 0xA8
    Valve::VR::IVROverlay::_GetOverlaySortOrder* GetOverlaySortOrder;
    // Valve.VR.IVROverlay/_SetOverlayWidthInMeters SetOverlayWidthInMeters
    // Offset: 0xB0
    Valve::VR::IVROverlay::_SetOverlayWidthInMeters* SetOverlayWidthInMeters;
    // Valve.VR.IVROverlay/_GetOverlayWidthInMeters GetOverlayWidthInMeters
    // Offset: 0xB8
    Valve::VR::IVROverlay::_GetOverlayWidthInMeters* GetOverlayWidthInMeters;
    // Valve.VR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters SetOverlayAutoCurveDistanceRangeInMeters
    // Offset: 0xC0
    Valve::VR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters;
    // Valve.VR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters GetOverlayAutoCurveDistanceRangeInMeters
    // Offset: 0xC8
    Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters;
    // Valve.VR.IVROverlay/_SetOverlayTextureColorSpace SetOverlayTextureColorSpace
    // Offset: 0xD0
    Valve::VR::IVROverlay::_SetOverlayTextureColorSpace* SetOverlayTextureColorSpace;
    // Valve.VR.IVROverlay/_GetOverlayTextureColorSpace GetOverlayTextureColorSpace
    // Offset: 0xD8
    Valve::VR::IVROverlay::_GetOverlayTextureColorSpace* GetOverlayTextureColorSpace;
    // Valve.VR.IVROverlay/_SetOverlayTextureBounds SetOverlayTextureBounds
    // Offset: 0xE0
    Valve::VR::IVROverlay::_SetOverlayTextureBounds* SetOverlayTextureBounds;
    // Valve.VR.IVROverlay/_GetOverlayTextureBounds GetOverlayTextureBounds
    // Offset: 0xE8
    Valve::VR::IVROverlay::_GetOverlayTextureBounds* GetOverlayTextureBounds;
    // Valve.VR.IVROverlay/_GetOverlayRenderModel GetOverlayRenderModel
    // Offset: 0xF0
    Valve::VR::IVROverlay::_GetOverlayRenderModel* GetOverlayRenderModel;
    // Valve.VR.IVROverlay/_SetOverlayRenderModel SetOverlayRenderModel
    // Offset: 0xF8
    Valve::VR::IVROverlay::_SetOverlayRenderModel* SetOverlayRenderModel;
    // Valve.VR.IVROverlay/_GetOverlayTransformType GetOverlayTransformType
    // Offset: 0x100
    Valve::VR::IVROverlay::_GetOverlayTransformType* GetOverlayTransformType;
    // Valve.VR.IVROverlay/_SetOverlayTransformAbsolute SetOverlayTransformAbsolute
    // Offset: 0x108
    Valve::VR::IVROverlay::_SetOverlayTransformAbsolute* SetOverlayTransformAbsolute;
    // Valve.VR.IVROverlay/_GetOverlayTransformAbsolute GetOverlayTransformAbsolute
    // Offset: 0x110
    Valve::VR::IVROverlay::_GetOverlayTransformAbsolute* GetOverlayTransformAbsolute;
    // Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative SetOverlayTransformTrackedDeviceRelative
    // Offset: 0x118
    Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative;
    // Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative GetOverlayTransformTrackedDeviceRelative
    // Offset: 0x120
    Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative;
    // Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent SetOverlayTransformTrackedDeviceComponent
    // Offset: 0x128
    Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent;
    // Valve.VR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent GetOverlayTransformTrackedDeviceComponent
    // Offset: 0x130
    Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent;
    // Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative GetOverlayTransformOverlayRelative
    // Offset: 0x138
    Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative;
    // Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative SetOverlayTransformOverlayRelative
    // Offset: 0x140
    Valve::VR::IVROverlay::_SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative;
    // Valve.VR.IVROverlay/_ShowOverlay ShowOverlay
    // Offset: 0x148
    Valve::VR::IVROverlay::_ShowOverlay* ShowOverlay;
    // Valve.VR.IVROverlay/_HideOverlay HideOverlay
    // Offset: 0x150
    Valve::VR::IVROverlay::_HideOverlay* HideOverlay;
    // Valve.VR.IVROverlay/_IsOverlayVisible IsOverlayVisible
    // Offset: 0x158
    Valve::VR::IVROverlay::_IsOverlayVisible* IsOverlayVisible;
    // Valve.VR.IVROverlay/_GetTransformForOverlayCoordinates GetTransformForOverlayCoordinates
    // Offset: 0x160
    Valve::VR::IVROverlay::_GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates;
    // Valve.VR.IVROverlay/_PollNextOverlayEvent PollNextOverlayEvent
    // Offset: 0x168
    Valve::VR::IVROverlay::_PollNextOverlayEvent* PollNextOverlayEvent;
    // Valve.VR.IVROverlay/_GetOverlayInputMethod GetOverlayInputMethod
    // Offset: 0x170
    Valve::VR::IVROverlay::_GetOverlayInputMethod* GetOverlayInputMethod;
    // Valve.VR.IVROverlay/_SetOverlayInputMethod SetOverlayInputMethod
    // Offset: 0x178
    Valve::VR::IVROverlay::_SetOverlayInputMethod* SetOverlayInputMethod;
    // Valve.VR.IVROverlay/_GetOverlayMouseScale GetOverlayMouseScale
    // Offset: 0x180
    Valve::VR::IVROverlay::_GetOverlayMouseScale* GetOverlayMouseScale;
    // Valve.VR.IVROverlay/_SetOverlayMouseScale SetOverlayMouseScale
    // Offset: 0x188
    Valve::VR::IVROverlay::_SetOverlayMouseScale* SetOverlayMouseScale;
    // Valve.VR.IVROverlay/_ComputeOverlayIntersection ComputeOverlayIntersection
    // Offset: 0x190
    Valve::VR::IVROverlay::_ComputeOverlayIntersection* ComputeOverlayIntersection;
    // Valve.VR.IVROverlay/_IsHoverTargetOverlay IsHoverTargetOverlay
    // Offset: 0x198
    Valve::VR::IVROverlay::_IsHoverTargetOverlay* IsHoverTargetOverlay;
    // Valve.VR.IVROverlay/_GetGamepadFocusOverlay GetGamepadFocusOverlay
    // Offset: 0x1A0
    Valve::VR::IVROverlay::_GetGamepadFocusOverlay* GetGamepadFocusOverlay;
    // Valve.VR.IVROverlay/_SetGamepadFocusOverlay SetGamepadFocusOverlay
    // Offset: 0x1A8
    Valve::VR::IVROverlay::_SetGamepadFocusOverlay* SetGamepadFocusOverlay;
    // Valve.VR.IVROverlay/_SetOverlayNeighbor SetOverlayNeighbor
    // Offset: 0x1B0
    Valve::VR::IVROverlay::_SetOverlayNeighbor* SetOverlayNeighbor;
    // Valve.VR.IVROverlay/_MoveGamepadFocusToNeighbor MoveGamepadFocusToNeighbor
    // Offset: 0x1B8
    Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor;
    // Valve.VR.IVROverlay/_SetOverlayDualAnalogTransform SetOverlayDualAnalogTransform
    // Offset: 0x1C0
    Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform;
    // Valve.VR.IVROverlay/_GetOverlayDualAnalogTransform GetOverlayDualAnalogTransform
    // Offset: 0x1C8
    Valve::VR::IVROverlay::_GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform;
    // Valve.VR.IVROverlay/_SetOverlayTexture SetOverlayTexture
    // Offset: 0x1D0
    Valve::VR::IVROverlay::_SetOverlayTexture* SetOverlayTexture;
    // Valve.VR.IVROverlay/_ClearOverlayTexture ClearOverlayTexture
    // Offset: 0x1D8
    Valve::VR::IVROverlay::_ClearOverlayTexture* ClearOverlayTexture;
    // Valve.VR.IVROverlay/_SetOverlayRaw SetOverlayRaw
    // Offset: 0x1E0
    Valve::VR::IVROverlay::_SetOverlayRaw* SetOverlayRaw;
    // Valve.VR.IVROverlay/_SetOverlayFromFile SetOverlayFromFile
    // Offset: 0x1E8
    Valve::VR::IVROverlay::_SetOverlayFromFile* SetOverlayFromFile;
    // Valve.VR.IVROverlay/_GetOverlayTexture GetOverlayTexture
    // Offset: 0x1F0
    Valve::VR::IVROverlay::_GetOverlayTexture* GetOverlayTexture;
    // Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle ReleaseNativeOverlayHandle
    // Offset: 0x1F8
    Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle;
    // Valve.VR.IVROverlay/_GetOverlayTextureSize GetOverlayTextureSize
    // Offset: 0x200
    Valve::VR::IVROverlay::_GetOverlayTextureSize* GetOverlayTextureSize;
    // Valve.VR.IVROverlay/_CreateDashboardOverlay CreateDashboardOverlay
    // Offset: 0x208
    Valve::VR::IVROverlay::_CreateDashboardOverlay* CreateDashboardOverlay;
    // Valve.VR.IVROverlay/_IsDashboardVisible IsDashboardVisible
    // Offset: 0x210
    Valve::VR::IVROverlay::_IsDashboardVisible* IsDashboardVisible;
    // Valve.VR.IVROverlay/_IsActiveDashboardOverlay IsActiveDashboardOverlay
    // Offset: 0x218
    Valve::VR::IVROverlay::_IsActiveDashboardOverlay* IsActiveDashboardOverlay;
    // Valve.VR.IVROverlay/_SetDashboardOverlaySceneProcess SetDashboardOverlaySceneProcess
    // Offset: 0x220
    Valve::VR::IVROverlay::_SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess;
    // Valve.VR.IVROverlay/_GetDashboardOverlaySceneProcess GetDashboardOverlaySceneProcess
    // Offset: 0x228
    Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess;
    // Valve.VR.IVROverlay/_ShowDashboard ShowDashboard
    // Offset: 0x230
    Valve::VR::IVROverlay::_ShowDashboard* ShowDashboard;
    // Valve.VR.IVROverlay/_GetPrimaryDashboardDevice GetPrimaryDashboardDevice
    // Offset: 0x238
    Valve::VR::IVROverlay::_GetPrimaryDashboardDevice* GetPrimaryDashboardDevice;
    // Valve.VR.IVROverlay/_ShowKeyboard ShowKeyboard
    // Offset: 0x240
    Valve::VR::IVROverlay::_ShowKeyboard* ShowKeyboard;
    // Valve.VR.IVROverlay/_ShowKeyboardForOverlay ShowKeyboardForOverlay
    // Offset: 0x248
    Valve::VR::IVROverlay::_ShowKeyboardForOverlay* ShowKeyboardForOverlay;
    // Valve.VR.IVROverlay/_GetKeyboardText GetKeyboardText
    // Offset: 0x250
    Valve::VR::IVROverlay::_GetKeyboardText* GetKeyboardText;
    // Valve.VR.IVROverlay/_HideKeyboard HideKeyboard
    // Offset: 0x258
    Valve::VR::IVROverlay::_HideKeyboard* HideKeyboard;
    // Valve.VR.IVROverlay/_SetKeyboardTransformAbsolute SetKeyboardTransformAbsolute
    // Offset: 0x260
    Valve::VR::IVROverlay::_SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute;
    // Valve.VR.IVROverlay/_SetKeyboardPositionForOverlay SetKeyboardPositionForOverlay
    // Offset: 0x268
    Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay;
    // Valve.VR.IVROverlay/_SetOverlayIntersectionMask SetOverlayIntersectionMask
    // Offset: 0x270
    Valve::VR::IVROverlay::_SetOverlayIntersectionMask* SetOverlayIntersectionMask;
    // Valve.VR.IVROverlay/_GetOverlayFlags GetOverlayFlags
    // Offset: 0x278
    Valve::VR::IVROverlay::_GetOverlayFlags* GetOverlayFlags;
    // Valve.VR.IVROverlay/_ShowMessageOverlay ShowMessageOverlay
    // Offset: 0x280
    Valve::VR::IVROverlay::_ShowMessageOverlay* ShowMessageOverlay;
    // Valve.VR.IVROverlay/_CloseMessageOverlay CloseMessageOverlay
    // Offset: 0x288
    Valve::VR::IVROverlay::_CloseMessageOverlay* CloseMessageOverlay;
    // Creating value type constructor for type: IVROverlay
    constexpr IVROverlay(Valve::VR::IVROverlay::_FindOverlay* FindOverlay_ = {}, Valve::VR::IVROverlay::_CreateOverlay* CreateOverlay_ = {}, Valve::VR::IVROverlay::_DestroyOverlay* DestroyOverlay_ = {}, Valve::VR::IVROverlay::_SetHighQualityOverlay* SetHighQualityOverlay_ = {}, Valve::VR::IVROverlay::_GetHighQualityOverlay* GetHighQualityOverlay_ = {}, Valve::VR::IVROverlay::_GetOverlayKey* GetOverlayKey_ = {}, Valve::VR::IVROverlay::_GetOverlayName* GetOverlayName_ = {}, Valve::VR::IVROverlay::_SetOverlayName* SetOverlayName_ = {}, Valve::VR::IVROverlay::_GetOverlayImageData* GetOverlayImageData_ = {}, Valve::VR::IVROverlay::_GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum_ = {}, Valve::VR::IVROverlay::_SetOverlayRenderingPid* SetOverlayRenderingPid_ = {}, Valve::VR::IVROverlay::_GetOverlayRenderingPid* GetOverlayRenderingPid_ = {}, Valve::VR::IVROverlay::_SetOverlayFlag* SetOverlayFlag_ = {}, Valve::VR::IVROverlay::_GetOverlayFlag* GetOverlayFlag_ = {}, Valve::VR::IVROverlay::_SetOverlayColor* SetOverlayColor_ = {}, Valve::VR::IVROverlay::_GetOverlayColor* GetOverlayColor_ = {}, Valve::VR::IVROverlay::_SetOverlayAlpha* SetOverlayAlpha_ = {}, Valve::VR::IVROverlay::_GetOverlayAlpha* GetOverlayAlpha_ = {}, Valve::VR::IVROverlay::_SetOverlayTexelAspect* SetOverlayTexelAspect_ = {}, Valve::VR::IVROverlay::_GetOverlayTexelAspect* GetOverlayTexelAspect_ = {}, Valve::VR::IVROverlay::_SetOverlaySortOrder* SetOverlaySortOrder_ = {}, Valve::VR::IVROverlay::_GetOverlaySortOrder* GetOverlaySortOrder_ = {}, Valve::VR::IVROverlay::_SetOverlayWidthInMeters* SetOverlayWidthInMeters_ = {}, Valve::VR::IVROverlay::_GetOverlayWidthInMeters* GetOverlayWidthInMeters_ = {}, Valve::VR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters_ = {}, Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters_ = {}, Valve::VR::IVROverlay::_SetOverlayTextureColorSpace* SetOverlayTextureColorSpace_ = {}, Valve::VR::IVROverlay::_GetOverlayTextureColorSpace* GetOverlayTextureColorSpace_ = {}, Valve::VR::IVROverlay::_SetOverlayTextureBounds* SetOverlayTextureBounds_ = {}, Valve::VR::IVROverlay::_GetOverlayTextureBounds* GetOverlayTextureBounds_ = {}, Valve::VR::IVROverlay::_GetOverlayRenderModel* GetOverlayRenderModel_ = {}, Valve::VR::IVROverlay::_SetOverlayRenderModel* SetOverlayRenderModel_ = {}, Valve::VR::IVROverlay::_GetOverlayTransformType* GetOverlayTransformType_ = {}, Valve::VR::IVROverlay::_SetOverlayTransformAbsolute* SetOverlayTransformAbsolute_ = {}, Valve::VR::IVROverlay::_GetOverlayTransformAbsolute* GetOverlayTransformAbsolute_ = {}, Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative_ = {}, Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative_ = {}, Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent_ = {}, Valve::VR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent_ = {}, Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative_ = {}, Valve::VR::IVROverlay::_SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative_ = {}, Valve::VR::IVROverlay::_ShowOverlay* ShowOverlay_ = {}, Valve::VR::IVROverlay::_HideOverlay* HideOverlay_ = {}, Valve::VR::IVROverlay::_IsOverlayVisible* IsOverlayVisible_ = {}, Valve::VR::IVROverlay::_GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates_ = {}, Valve::VR::IVROverlay::_PollNextOverlayEvent* PollNextOverlayEvent_ = {}, Valve::VR::IVROverlay::_GetOverlayInputMethod* GetOverlayInputMethod_ = {}, Valve::VR::IVROverlay::_SetOverlayInputMethod* SetOverlayInputMethod_ = {}, Valve::VR::IVROverlay::_GetOverlayMouseScale* GetOverlayMouseScale_ = {}, Valve::VR::IVROverlay::_SetOverlayMouseScale* SetOverlayMouseScale_ = {}, Valve::VR::IVROverlay::_ComputeOverlayIntersection* ComputeOverlayIntersection_ = {}, Valve::VR::IVROverlay::_IsHoverTargetOverlay* IsHoverTargetOverlay_ = {}, Valve::VR::IVROverlay::_GetGamepadFocusOverlay* GetGamepadFocusOverlay_ = {}, Valve::VR::IVROverlay::_SetGamepadFocusOverlay* SetGamepadFocusOverlay_ = {}, Valve::VR::IVROverlay::_SetOverlayNeighbor* SetOverlayNeighbor_ = {}, Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor_ = {}, Valve::VR::IVROverlay::_SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform_ = {}, Valve::VR::IVROverlay::_GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform_ = {}, Valve::VR::IVROverlay::_SetOverlayTexture* SetOverlayTexture_ = {}, Valve::VR::IVROverlay::_ClearOverlayTexture* ClearOverlayTexture_ = {}, Valve::VR::IVROverlay::_SetOverlayRaw* SetOverlayRaw_ = {}, Valve::VR::IVROverlay::_SetOverlayFromFile* SetOverlayFromFile_ = {}, Valve::VR::IVROverlay::_GetOverlayTexture* GetOverlayTexture_ = {}, Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle_ = {}, Valve::VR::IVROverlay::_GetOverlayTextureSize* GetOverlayTextureSize_ = {}, Valve::VR::IVROverlay::_CreateDashboardOverlay* CreateDashboardOverlay_ = {}, Valve::VR::IVROverlay::_IsDashboardVisible* IsDashboardVisible_ = {}, Valve::VR::IVROverlay::_IsActiveDashboardOverlay* IsActiveDashboardOverlay_ = {}, Valve::VR::IVROverlay::_SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess_ = {}, Valve::VR::IVROverlay::_GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess_ = {}, Valve::VR::IVROverlay::_ShowDashboard* ShowDashboard_ = {}, Valve::VR::IVROverlay::_GetPrimaryDashboardDevice* GetPrimaryDashboardDevice_ = {}, Valve::VR::IVROverlay::_ShowKeyboard* ShowKeyboard_ = {}, Valve::VR::IVROverlay::_ShowKeyboardForOverlay* ShowKeyboardForOverlay_ = {}, Valve::VR::IVROverlay::_GetKeyboardText* GetKeyboardText_ = {}, Valve::VR::IVROverlay::_HideKeyboard* HideKeyboard_ = {}, Valve::VR::IVROverlay::_SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute_ = {}, Valve::VR::IVROverlay::_SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay_ = {}, Valve::VR::IVROverlay::_SetOverlayIntersectionMask* SetOverlayIntersectionMask_ = {}, Valve::VR::IVROverlay::_GetOverlayFlags* GetOverlayFlags_ = {}, Valve::VR::IVROverlay::_ShowMessageOverlay* ShowMessageOverlay_ = {}, Valve::VR::IVROverlay::_CloseMessageOverlay* CloseMessageOverlay_ = {}) noexcept : FindOverlay{FindOverlay_}, CreateOverlay{CreateOverlay_}, DestroyOverlay{DestroyOverlay_}, SetHighQualityOverlay{SetHighQualityOverlay_}, GetHighQualityOverlay{GetHighQualityOverlay_}, GetOverlayKey{GetOverlayKey_}, GetOverlayName{GetOverlayName_}, SetOverlayName{SetOverlayName_}, GetOverlayImageData{GetOverlayImageData_}, GetOverlayErrorNameFromEnum{GetOverlayErrorNameFromEnum_}, SetOverlayRenderingPid{SetOverlayRenderingPid_}, GetOverlayRenderingPid{GetOverlayRenderingPid_}, SetOverlayFlag{SetOverlayFlag_}, GetOverlayFlag{GetOverlayFlag_}, SetOverlayColor{SetOverlayColor_}, GetOverlayColor{GetOverlayColor_}, SetOverlayAlpha{SetOverlayAlpha_}, GetOverlayAlpha{GetOverlayAlpha_}, SetOverlayTexelAspect{SetOverlayTexelAspect_}, GetOverlayTexelAspect{GetOverlayTexelAspect_}, SetOverlaySortOrder{SetOverlaySortOrder_}, GetOverlaySortOrder{GetOverlaySortOrder_}, SetOverlayWidthInMeters{SetOverlayWidthInMeters_}, GetOverlayWidthInMeters{GetOverlayWidthInMeters_}, SetOverlayAutoCurveDistanceRangeInMeters{SetOverlayAutoCurveDistanceRangeInMeters_}, GetOverlayAutoCurveDistanceRangeInMeters{GetOverlayAutoCurveDistanceRangeInMeters_}, SetOverlayTextureColorSpace{SetOverlayTextureColorSpace_}, GetOverlayTextureColorSpace{GetOverlayTextureColorSpace_}, SetOverlayTextureBounds{SetOverlayTextureBounds_}, GetOverlayTextureBounds{GetOverlayTextureBounds_}, GetOverlayRenderModel{GetOverlayRenderModel_}, SetOverlayRenderModel{SetOverlayRenderModel_}, GetOverlayTransformType{GetOverlayTransformType_}, SetOverlayTransformAbsolute{SetOverlayTransformAbsolute_}, GetOverlayTransformAbsolute{GetOverlayTransformAbsolute_}, SetOverlayTransformTrackedDeviceRelative{SetOverlayTransformTrackedDeviceRelative_}, GetOverlayTransformTrackedDeviceRelative{GetOverlayTransformTrackedDeviceRelative_}, SetOverlayTransformTrackedDeviceComponent{SetOverlayTransformTrackedDeviceComponent_}, GetOverlayTransformTrackedDeviceComponent{GetOverlayTransformTrackedDeviceComponent_}, GetOverlayTransformOverlayRelative{GetOverlayTransformOverlayRelative_}, SetOverlayTransformOverlayRelative{SetOverlayTransformOverlayRelative_}, ShowOverlay{ShowOverlay_}, HideOverlay{HideOverlay_}, IsOverlayVisible{IsOverlayVisible_}, GetTransformForOverlayCoordinates{GetTransformForOverlayCoordinates_}, PollNextOverlayEvent{PollNextOverlayEvent_}, GetOverlayInputMethod{GetOverlayInputMethod_}, SetOverlayInputMethod{SetOverlayInputMethod_}, GetOverlayMouseScale{GetOverlayMouseScale_}, SetOverlayMouseScale{SetOverlayMouseScale_}, ComputeOverlayIntersection{ComputeOverlayIntersection_}, IsHoverTargetOverlay{IsHoverTargetOverlay_}, GetGamepadFocusOverlay{GetGamepadFocusOverlay_}, SetGamepadFocusOverlay{SetGamepadFocusOverlay_}, SetOverlayNeighbor{SetOverlayNeighbor_}, MoveGamepadFocusToNeighbor{MoveGamepadFocusToNeighbor_}, SetOverlayDualAnalogTransform{SetOverlayDualAnalogTransform_}, GetOverlayDualAnalogTransform{GetOverlayDualAnalogTransform_}, SetOverlayTexture{SetOverlayTexture_}, ClearOverlayTexture{ClearOverlayTexture_}, SetOverlayRaw{SetOverlayRaw_}, SetOverlayFromFile{SetOverlayFromFile_}, GetOverlayTexture{GetOverlayTexture_}, ReleaseNativeOverlayHandle{ReleaseNativeOverlayHandle_}, GetOverlayTextureSize{GetOverlayTextureSize_}, CreateDashboardOverlay{CreateDashboardOverlay_}, IsDashboardVisible{IsDashboardVisible_}, IsActiveDashboardOverlay{IsActiveDashboardOverlay_}, SetDashboardOverlaySceneProcess{SetDashboardOverlaySceneProcess_}, GetDashboardOverlaySceneProcess{GetDashboardOverlaySceneProcess_}, ShowDashboard{ShowDashboard_}, GetPrimaryDashboardDevice{GetPrimaryDashboardDevice_}, ShowKeyboard{ShowKeyboard_}, ShowKeyboardForOverlay{ShowKeyboardForOverlay_}, GetKeyboardText{GetKeyboardText_}, HideKeyboard{HideKeyboard_}, SetKeyboardTransformAbsolute{SetKeyboardTransformAbsolute_}, SetKeyboardPositionForOverlay{SetKeyboardPositionForOverlay_}, SetOverlayIntersectionMask{SetOverlayIntersectionMask_}, GetOverlayFlags{GetOverlayFlags_}, ShowMessageOverlay{ShowMessageOverlay_}, CloseMessageOverlay{CloseMessageOverlay_} {}
  }; // Valve.VR.IVROverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay, "Valve.VR", "IVROverlay");
#pragma pack(pop)
