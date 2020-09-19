// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.SegmentedControlCell
#include "HMUI/SegmentedControlCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.IconSegmentedControlCell
  class IconSegmentedControlCell : public HMUI::SegmentedControlCell {
    public:
    // private UnityEngine.UI.Image _icon
    // Offset: 0x38
    UnityEngine::UI::Image* icon;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x40
    UnityEngine::UI::Image* bgImage;
    // private HMUI.HoverHint _hoverHint
    // Offset: 0x48
    HMUI::HoverHint* hoverHint;
    // private UnityEngine.Color _normalIconColor
    // Offset: 0x50
    UnityEngine::Color normalIconColor;
    // private UnityEngine.Color _selectedIconColor
    // Offset: 0x60
    UnityEngine::Color selectedIconColor;
    // private UnityEngine.Color _highlightIconColor
    // Offset: 0x70
    UnityEngine::Color highlightIconColor;
    // private UnityEngine.Color _selectedHighlightIconColor
    // Offset: 0x80
    UnityEngine::Color selectedHighlightIconColor;
    // private UnityEngine.Color _normalBGColor
    // Offset: 0x90
    UnityEngine::Color normalBGColor;
    // private UnityEngine.Color _selectedBGColor
    // Offset: 0xA0
    UnityEngine::Color selectedBGColor;
    // private UnityEngine.Color _highlightBGColor
    // Offset: 0xB0
    UnityEngine::Color highlightBGColor;
    // private UnityEngine.Color _selectedHighlightBGColor
    // Offset: 0xC0
    UnityEngine::Color selectedHighlightBGColor;
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0xEE3A78
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0xEE3B28
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_hintText(System.String value)
    // Offset: 0xEE3A94
    void set_hintText(::Il2CppString* value);
    // private System.Void RefreshVisuals()
    // Offset: 0xEE3B48
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0xEE3B44
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::SelectionDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    // Offset: 0xEE3C54
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::HighlightDidChange(HMUI.SegmentedControlCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SegmentedControlCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0xEE3C58
    // Implemented from: HMUI.SegmentedControlCell
    // Base method: System.Void SegmentedControlCell::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IconSegmentedControlCell* New_ctor();
  }; // HMUI.IconSegmentedControlCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControlCell*, "HMUI", "IconSegmentedControlCell");
#pragma pack(pop)