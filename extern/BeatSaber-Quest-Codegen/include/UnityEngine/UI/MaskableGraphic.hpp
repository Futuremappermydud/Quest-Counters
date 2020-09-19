// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
// Including type: UnityEngine.UI.IClippable
#include "UnityEngine/UI/IClippable.hpp"
// Including type: UnityEngine.UI.IMaskable
#include "UnityEngine/UI/IMaskable.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.MaskableGraphic
  class MaskableGraphic : public UnityEngine::UI::Graphic, public UnityEngine::UI::IClippable, public UnityEngine::UI::IMaskable, public UnityEngine::UI::IMaterialModifier {
    public:
    // Nested type: UnityEngine::UI::MaskableGraphic::CullStateChangedEvent
    class CullStateChangedEvent;
    // protected System.Boolean m_ShouldRecalculateStencil
    // Offset: 0x89
    bool m_ShouldRecalculateStencil;
    // protected UnityEngine.Material m_MaskMaterial
    // Offset: 0x90
    UnityEngine::Material* m_MaskMaterial;
    // private UnityEngine.UI.RectMask2D m_ParentMask
    // Offset: 0x98
    UnityEngine::UI::RectMask2D* m_ParentMask;
    // private System.Boolean m_Maskable
    // Offset: 0xA0
    bool m_Maskable;
    // protected System.Boolean m_IncludeForMasking
    // Offset: 0xA1
    bool m_IncludeForMasking;
    // private UnityEngine.UI.MaskableGraphic/CullStateChangedEvent m_OnCullStateChanged
    // Offset: 0xA8
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged;
    // protected System.Boolean m_ShouldRecalculate
    // Offset: 0xB0
    bool m_ShouldRecalculate;
    // protected System.Int32 m_StencilValue
    // Offset: 0xB4
    int m_StencilValue;
    // private readonly UnityEngine.Vector3[] m_Corners
    // Offset: 0xB8
    ::Array<UnityEngine::Vector3>* m_Corners;
    // public UnityEngine.UI.MaskableGraphic/CullStateChangedEvent get_onCullStateChanged()
    // Offset: 0x1205594
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* get_onCullStateChanged();
    // public System.Void set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent value)
    // Offset: 0x120559C
    void set_onCullStateChanged(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* value);
    // public System.Boolean get_maskable()
    // Offset: 0x12055A4
    bool get_maskable();
    // public System.Void set_maskable(System.Boolean value)
    // Offset: 0x12055AC
    void set_maskable(bool value);
    // private System.Void UpdateCull(System.Boolean cull)
    // Offset: 0x1205B24
    void UpdateCull(bool cull);
    // public System.Void ParentMaskStateChanged()
    // Offset: 0x1206054
    void ParentMaskStateChanged();
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x12057D4
    UnityEngine::Rect get_rootCanvasRect();
    // private System.Void UpdateClipParent()
    // Offset: 0x1205D54
    void UpdateClipParent();
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x12055E4
    // Implemented from: UnityEngine.UI.IMaterialModifier
    // Base method: UnityEngine.Material IMaterialModifier::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // public System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x1205774
    // Implemented from: UnityEngine.UI.IClippable
    // Base method: System.Void IClippable::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void SetClipRect(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x1205C08
    // Implemented from: UnityEngine.UI.IClippable
    // Base method: System.Void IClippable::SetClipRect(UnityEngine.Rect clipRect, System.Boolean validRect)
    void SetClipRect(UnityEngine::Rect clipRect, bool validRect);
    // protected override System.Void OnEnable()
    // Offset: 0x1205C84
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1205ED4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x1205FF4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1206058
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // public System.Void RecalculateClipping()
    // Offset: 0x1206348
    // Implemented from: UnityEngine.UI.IClippable
    // Base method: System.Void IClippable::RecalculateClipping()
    void RecalculateClipping();
    // public System.Void RecalculateMasking()
    // Offset: 0x120634C
    // Implemented from: UnityEngine.UI.IMaskable
    // Base method: System.Void IMaskable::RecalculateMasking()
    void RecalculateMasking();
    // protected System.Void .ctor()
    // Offset: 0x12063F0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MaskableGraphic* New_ctor();
    // private UnityEngine.GameObject UnityEngine.UI.IClippable.get_gameObject()
    // Offset: 0x120650C
    // Implemented from: UnityEngine.UI.IClippable
    // Base method: UnityEngine.GameObject IClippable::get_gameObject()
    UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject();
  }; // UnityEngine.UI.MaskableGraphic
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MaskableGraphic*, "UnityEngine.UI", "MaskableGraphic");
#pragma pack(pop)