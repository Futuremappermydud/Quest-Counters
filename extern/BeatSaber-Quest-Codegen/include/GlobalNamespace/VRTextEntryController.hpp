// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRTextEntryController
  class VRTextEntryController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRTextEntryController::$BlinkCursor$d__23
    class $BlinkCursor$d__23;
    // private UIKeyboard _uiKeyboard
    // Offset: 0x18
    GlobalNamespace::UIKeyboard* uiKeyboard;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // private TMPro.TextMeshProUGUI _cursorText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* cursorText;
    // private System.Int32 _maxLength
    // Offset: 0x30
    int maxLength;
    // private System.Boolean _allowBlank
    // Offset: 0x34
    bool allowBlank;
    // private System.Action`1<System.String> textDidChangeEvent
    // Offset: 0x38
    System::Action_1<::Il2CppString*>* textDidChangeEvent;
    // private System.Action okButtonWasPressedEvent
    // Offset: 0x40
    System::Action* okButtonWasPressedEvent;
    // private System.Action cancelButtonWasPressedEvent
    // Offset: 0x48
    System::Action* cancelButtonWasPressedEvent;
    // private System.Boolean _stopBlinkingCursor
    // Offset: 0x50
    bool stopBlinkingCursor;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xC530E8
    void add_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_textDidChangeEvent(System.Action`1<System.String> value)
    // Offset: 0xC5318C
    void remove_textDidChangeEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xC53230
    void add_okButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_okButtonWasPressedEvent(System.Action value)
    // Offset: 0xC532D4
    void remove_okButtonWasPressedEvent(System::Action* value);
    // public System.Void add_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xC53378
    void add_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_cancelButtonWasPressedEvent(System.Action value)
    // Offset: 0xC5341C
    void remove_cancelButtonWasPressedEvent(System::Action* value);
    // public System.Void set_hideCancelButton(System.Boolean value)
    // Offset: 0xC534C0
    void set_hideCancelButton(bool value);
    // public System.String get_text()
    // Offset: 0xC534DC
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xC534F8
    void set_text(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0xC535BC
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0xC5370C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xC537B8
    void OnDisable();
    // private System.Collections.IEnumerator BlinkCursor()
    // Offset: 0xC5373C
    System::Collections::IEnumerator* BlinkCursor();
    // private System.Void HandleUIKeyboardTextKeyWasPressed(System.Char key)
    // Offset: 0xC537F0
    void HandleUIKeyboardTextKeyWasPressed(::Il2CppChar key);
    // private System.Void HandleUIKeyboardDeleteButtonWasPressed()
    // Offset: 0xC538CC
    void HandleUIKeyboardDeleteButtonWasPressed();
    // private System.Void <Awake>b__20_0()
    // Offset: 0xC539B0
    void $Awake$b__20_0();
    // private System.Void <Awake>b__20_1()
    // Offset: 0xC539C4
    void $Awake$b__20_1();
    // public System.Void .ctor()
    // Offset: 0xC539A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRTextEntryController* New_ctor();
  }; // VRTextEntryController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTextEntryController*, "", "VRTextEntryController");
#pragma pack(pop)