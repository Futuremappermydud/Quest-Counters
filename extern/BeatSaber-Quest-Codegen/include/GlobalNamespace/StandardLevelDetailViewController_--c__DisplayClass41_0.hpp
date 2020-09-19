// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelDetailViewController
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelDetailView
  class StandardLevelDetailView;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelDetailViewController/<>c__DisplayClass41_0
  class StandardLevelDetailViewController::$$c__DisplayClass41_0 : public ::Il2CppObject {
    public:
    // public System.Action handleDidPressRefreshButton
    // Offset: 0x10
    System::Action* handleDidPressRefreshButton;
    // public System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> handleDidChangeDifficultyBeatmap
    // Offset: 0x18
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* handleDidChangeDifficultyBeatmap;
    // public System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> handleDidFavoriteToggleChange
    // Offset: 0x20
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* handleDidFavoriteToggleChange;
    // public StandardLevelDetailViewController <>4__this
    // Offset: 0x28
    GlobalNamespace::StandardLevelDetailViewController* $$4__this;
    // System.Void <DidActivate>b__2()
    // Offset: 0xBA22EC
    void $DidActivate$b__2();
    // System.Void <DidActivate>b__3()
    // Offset: 0xBA231C
    void $DidActivate$b__3();
    // System.Void <DidActivate>b__6()
    // Offset: 0xBA234C
    void $DidActivate$b__6();
    // System.Void <DidActivate>b__7()
    // Offset: 0xBA2398
    void $DidActivate$b__7();
    // public System.Void .ctor()
    // Offset: 0xBA15F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StandardLevelDetailViewController::$$c__DisplayClass41_0* New_ctor();
  }; // StandardLevelDetailViewController/<>c__DisplayClass41_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailViewController::$$c__DisplayClass41_0*, "", "StandardLevelDetailViewController/<>c__DisplayClass41_0");
#pragma pack(pop)