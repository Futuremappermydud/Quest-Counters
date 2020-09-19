// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TableCell
  class TableCell : public HMUI::Interactable, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler {
    public:
    // Nested type: HMUI::TableCell::TransitionType
    struct TransitionType;
    // private Signal _tableCellWasPressedSignal
    // Offset: 0x20
    GlobalNamespace::Signal* tableCellWasPressedSignal;
    // private System.Boolean _canSelectSelectedCell
    // Offset: 0x28
    bool canSelectSelectedCell;
    // private System.String _reuseIdentifier
    // Offset: 0x30
    ::Il2CppString* reuseIdentifier;
    // private System.Int32 _idx
    // Offset: 0x38
    int idx;
    // private HMUI.ITableCellOwner _tableCellOwner
    // Offset: 0x40
    HMUI::ITableCellOwner* tableCellOwner;
    // private System.Boolean _selected
    // Offset: 0x48
    bool selected;
    // private System.Boolean _highlighted
    // Offset: 0x49
    bool highlighted;
    // public System.String get_reuseIdentifier()
    // Offset: 0x10E6848
    ::Il2CppString* get_reuseIdentifier();
    // public System.Void set_reuseIdentifier(System.String value)
    // Offset: 0x10E6850
    void set_reuseIdentifier(::Il2CppString* value);
    // public System.Int32 get_idx()
    // Offset: 0x10E6858
    int get_idx();
    // protected System.Void Start()
    // Offset: 0x10E6860
    void Start();
    // public System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x10E689C
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
    // public System.Void MoveIdx(System.Int32 offset)
    // Offset: 0x10E68CC
    void MoveIdx(int offset);
    // public System.Boolean get_selected()
    // Offset: 0x10E68DC
    bool get_selected();
    // public System.Void set_selected(System.Boolean value)
    // Offset: 0x10E68E4
    void set_selected(bool value);
    // public System.Boolean get_highlighted()
    // Offset: 0x10E6A20
    bool get_highlighted();
    // public System.Void ChangeSelection(System.Boolean value, HMUI.TableCell/TransitionType transitionType, System.Boolean callbackTable, System.Boolean ignoreCurrentValue)
    // Offset: 0x10E68F8
    void ChangeSelection(bool value, HMUI::TableCell::TransitionType transitionType, bool callbackTable, bool ignoreCurrentValue);
    // public System.Void ChangeHighlight(System.Boolean value, HMUI.TableCell/TransitionType transitionType, System.Boolean ignoreCurrentValue)
    // Offset: 0x10E6A28
    void ChangeHighlight(bool value, HMUI::TableCell::TransitionType transitionType, bool ignoreCurrentValue);
    // private System.Void InternalToggle()
    // Offset: 0x10E6A60
    void InternalToggle();
    // protected System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x10E6BEC
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x10E6BF0
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // public System.Void __WasPreparedForReuse()
    // Offset: 0x10E6BF4
    void __WasPreparedForReuse();
    // protected System.Void WasPreparedForReuse()
    // Offset: 0x10E6C00
    void WasPreparedForReuse();
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10E6C04
    // Implemented from: UnityEngine.EventSystems.IPointerClickHandler
    // Base method: System.Void IPointerClickHandler::OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x10E6D00
    // Implemented from: UnityEngine.EventSystems.ISubmitHandler
    // Base method: System.Void ISubmitHandler::OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10E6DD4
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10E6DF8
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x10E6E18
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TableCell* New_ctor();
  }; // HMUI.TableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TableCell*, "HMUI", "TableCell");
#pragma pack(pop)
