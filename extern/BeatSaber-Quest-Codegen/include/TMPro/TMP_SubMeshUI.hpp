// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
  // Forward declaring type: MaterialReference
  struct MaterialReference;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: CanvasRenderer
  class CanvasRenderer;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Rect
  struct Rect;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SubMeshUI
  class TMP_SubMeshUI : public UnityEngine::UI::MaskableGraphic {
    public:
    // private TMPro.TMP_FontAsset m_fontAsset
    // Offset: 0xC0
    TMPro::TMP_FontAsset* m_fontAsset;
    // private TMPro.TMP_SpriteAsset m_spriteAsset
    // Offset: 0xC8
    TMPro::TMP_SpriteAsset* m_spriteAsset;
    // private UnityEngine.Material m_material
    // Offset: 0xD0
    UnityEngine::Material* m_material;
    // private UnityEngine.Material m_sharedMaterial
    // Offset: 0xD8
    UnityEngine::Material* m_sharedMaterial;
    // private UnityEngine.Material m_fallbackMaterial
    // Offset: 0xE0
    UnityEngine::Material* m_fallbackMaterial;
    // private UnityEngine.Material m_fallbackSourceMaterial
    // Offset: 0xE8
    UnityEngine::Material* m_fallbackSourceMaterial;
    // private System.Boolean m_isDefaultMaterial
    // Offset: 0xF0
    bool m_isDefaultMaterial;
    // private System.Single m_padding
    // Offset: 0xF4
    float m_padding;
    // private UnityEngine.CanvasRenderer m_canvasRenderer
    // Offset: 0xF8
    UnityEngine::CanvasRenderer* m_canvasRenderer;
    // private UnityEngine.Mesh m_mesh
    // Offset: 0x100
    UnityEngine::Mesh* m_mesh;
    // private TMPro.TextMeshProUGUI m_TextComponent
    // Offset: 0x108
    TMPro::TextMeshProUGUI* m_TextComponent;
    // private System.Boolean m_isRegisteredForEvents
    // Offset: 0x110
    bool m_isRegisteredForEvents;
    // private System.Boolean m_materialDirty
    // Offset: 0x111
    bool m_materialDirty;
    // private System.Int32 m_materialReferenceIndex
    // Offset: 0x114
    int m_materialReferenceIndex;
    // public TMPro.TMP_FontAsset get_fontAsset()
    // Offset: 0xBB7788
    TMPro::TMP_FontAsset* get_fontAsset();
    // public System.Void set_fontAsset(TMPro.TMP_FontAsset value)
    // Offset: 0xBB7790
    void set_fontAsset(TMPro::TMP_FontAsset* value);
    // public TMPro.TMP_SpriteAsset get_spriteAsset()
    // Offset: 0xBB7798
    TMPro::TMP_SpriteAsset* get_spriteAsset();
    // public System.Void set_spriteAsset(TMPro.TMP_SpriteAsset value)
    // Offset: 0xBB77A0
    void set_spriteAsset(TMPro::TMP_SpriteAsset* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xBB7B40
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0xBB7B48
    void set_sharedMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackMaterial()
    // Offset: 0xBB7BA4
    UnityEngine::Material* get_fallbackMaterial();
    // public System.Void set_fallbackMaterial(UnityEngine.Material value)
    // Offset: 0xBB7BAC
    void set_fallbackMaterial(UnityEngine::Material* value);
    // public UnityEngine.Material get_fallbackSourceMaterial()
    // Offset: 0xBB7D20
    UnityEngine::Material* get_fallbackSourceMaterial();
    // public System.Void set_fallbackSourceMaterial(UnityEngine.Material value)
    // Offset: 0xBB7D28
    void set_fallbackSourceMaterial(UnityEngine::Material* value);
    // public System.Boolean get_isDefaultMaterial()
    // Offset: 0xBB7D9C
    bool get_isDefaultMaterial();
    // public System.Void set_isDefaultMaterial(System.Boolean value)
    // Offset: 0xBB7DA4
    void set_isDefaultMaterial(bool value);
    // public System.Single get_padding()
    // Offset: 0xBB7DB0
    float get_padding();
    // public System.Void set_padding(System.Single value)
    // Offset: 0xBB7DB8
    void set_padding(float value);
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0xBB7E6C
    UnityEngine::Mesh* get_mesh();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0xBB7F30
    void set_mesh(UnityEngine::Mesh* value);
    // static public TMPro.TMP_SubMeshUI AddSubTextObject(TMPro.TextMeshProUGUI textComponent, TMPro.MaterialReference materialReference)
    // Offset: 0xBB7F40
    static TMPro::TMP_SubMeshUI* AddSubTextObject(TMPro::TextMeshProUGUI* textComponent, TMPro::MaterialReference materialReference);
    // public System.Single GetPaddingForMaterial()
    // Offset: 0xBB7AA8
    float GetPaddingForMaterial();
    // public System.Single GetPaddingForMaterial(UnityEngine.Material mat)
    // Offset: 0xBB8854
    float GetPaddingForMaterial(UnityEngine::Material* mat);
    // public System.Void UpdateMeshPadding(System.Boolean isExtraPadding, System.Boolean isUsingBold)
    // Offset: 0xBB88EC
    void UpdateMeshPadding(bool isExtraPadding, bool isUsingBold);
    // public System.Void SetPivotDirty()
    // Offset: 0xBB8AA8
    void SetPivotDirty();
    // public System.Void RefreshMaterial()
    // Offset: 0xBB8BF8
    void RefreshMaterial();
    // private UnityEngine.Material GetMaterial()
    // Offset: 0xBB8D34
    UnityEngine::Material* GetMaterial();
    // private UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0xBB7878
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // private UnityEngine.Material CreateMaterialInstance(UnityEngine.Material source)
    // Offset: 0xBB8D3C
    UnityEngine::Material* CreateMaterialInstance(UnityEngine::Material* source);
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0xBB8DF8
    UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0xBB7B4C
    void SetSharedMaterial(UnityEngine::Material* mat);
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0xBB77A8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public override UnityEngine.Material get_material()
    // Offset: 0xBB7870
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_material()
    UnityEngine::Material* get_material();
    // public override System.Void set_material(UnityEngine.Material value)
    // Offset: 0xBB7990
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::set_material(UnityEngine.Material value)
    void set_material(UnityEngine::Material* value);
    // public override UnityEngine.Material get_materialForRendering()
    // Offset: 0xBB7D30
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Material Graphic::get_materialForRendering()
    UnityEngine::Material* get_materialForRendering();
    // public UnityEngine.CanvasRenderer get_canvasRenderer()
    // Offset: 0xBB7DC0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.CanvasRenderer Graphic::get_canvasRenderer()
    UnityEngine::CanvasRenderer* get_canvasRenderer();
    // protected override System.Void OnEnable()
    // Offset: 0xBB837C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xBB83D4
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0xBB8518
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDestroy()
    void OnDestroy();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xBB86A0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // public override UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0xBB8704
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: UnityEngine.Material MaskableGraphic::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // public override System.Void SetAllDirty()
    // Offset: 0xBB8978
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetAllDirty()
    void SetAllDirty();
    // public override System.Void SetVerticesDirty()
    // Offset: 0xBB897C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetVerticesDirty()
    void SetVerticesDirty();
    // public override System.Void SetLayoutDirty()
    // Offset: 0xBB8A58
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetLayoutDirty()
    void SetLayoutDirty();
    // public override System.Void SetMaterialDirty()
    // Offset: 0xBB8A5C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetMaterialDirty()
    void SetMaterialDirty();
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xBB8B1C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // protected override System.Void UpdateGeometry()
    // Offset: 0xBB8B48
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateGeometry()
    void UpdateGeometry();
    // public override System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xBB8BB4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // protected override System.Void UpdateMaterial()
    // Offset: 0xBB8C08
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // public override System.Void RecalculateClipping()
    // Offset: 0xBB8D14
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateClipping()
    void RecalculateClipping();
    // public override System.Void RecalculateMasking()
    // Offset: 0xBB8D1C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::RecalculateMasking()
    void RecalculateMasking();
    // public System.Void .ctor()
    // Offset: 0xBB8EB0
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SubMeshUI* New_ctor();
  }; // TMPro.TMP_SubMeshUI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SubMeshUI*, "TMPro", "TMP_SubMeshUI");
#pragma pack(pop)