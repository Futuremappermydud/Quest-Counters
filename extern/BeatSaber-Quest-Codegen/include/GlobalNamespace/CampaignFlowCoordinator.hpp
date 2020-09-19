// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuLightsPresetSO
  class MenuLightsPresetSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: MenuLightsManager
  class MenuLightsManager;
  // Forward declaring type: MissionSelectionNavigationController
  class MissionSelectionNavigationController;
  // Forward declaring type: MissionResultsViewController
  class MissionResultsViewController;
  // Forward declaring type: GameplaySetupViewController
  class GameplaySetupViewController;
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: MissionLevelScenesTransitionSetupDataSO
  class MissionLevelScenesTransitionSetupDataSO;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CampaignFlowCoordinator
  class CampaignFlowCoordinator : public HMUI::FlowCoordinator {
    public:
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass19_0
    class $$c__DisplayClass19_0;
    // Nested type: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // private MenuLightsPresetSO _defaultLightsPreset
    // Offset: 0xA8
    GlobalNamespace::MenuLightsPresetSO* defaultLightsPreset;
    // private MenuLightsPresetSO _resultsLightsPreset
    // Offset: 0xB0
    GlobalNamespace::MenuLightsPresetSO* resultsLightsPreset;
    // private MenuLightsPresetSO _newObjectiveLightsPreset
    // Offset: 0xB8
    GlobalNamespace::MenuLightsPresetSO* newObjectiveLightsPreset;
    // private MenuTransitionsHelper _menuTransitionsHelper
    // Offset: 0xC0
    GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // private MenuLightsManager _menuLightsManager
    // Offset: 0xC8
    GlobalNamespace::MenuLightsManager* menuLightsManager;
    // private MissionSelectionNavigationController _missionSelectionNavigationController
    // Offset: 0xD0
    GlobalNamespace::MissionSelectionNavigationController* missionSelectionNavigationController;
    // private MissionResultsViewController _missionResultsViewController
    // Offset: 0xD8
    GlobalNamespace::MissionResultsViewController* missionResultsViewController;
    // private GameplaySetupViewController _gameplaySetupViewController
    // Offset: 0xE0
    GlobalNamespace::GameplaySetupViewController* gameplaySetupViewController;
    // private MissionHelpViewController _missionHelpViewController
    // Offset: 0xE8
    GlobalNamespace::MissionHelpViewController* missionHelpViewController;
    // private PlayerDataModel _playerDataModel
    // Offset: 0xF0
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private CampaignProgressModel _campaignProgressModel
    // Offset: 0xF8
    GlobalNamespace::CampaignProgressModel* campaignProgressModel;
    // private System.Action`1<CampaignFlowCoordinator> didFinishEvent
    // Offset: 0x100
    System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* didFinishEvent;
    // private System.Boolean _showCredits
    // Offset: 0x108
    bool showCredits;
    // public System.Void add_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0xB7D438
    void add_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<CampaignFlowCoordinator> value)
    // Offset: 0xB7D4E0
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value);
    // private System.Void HandleMissionSelectionNavigationControllerDidPressPlayButton(MissionSelectionNavigationController viewController)
    // Offset: 0xB7D9E0
    void HandleMissionSelectionNavigationControllerDidPressPlayButton(GlobalNamespace::MissionSelectionNavigationController* viewController);
    // private System.Void HandleMissionHelpViewControllerDidFinish(MissionHelpViewController viewController)
    // Offset: 0xB7DC68
    void HandleMissionHelpViewControllerDidFinish(GlobalNamespace::MissionHelpViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerContinueButtonPressed(MissionResultsViewController viewController)
    // Offset: 0xB7DD34
    void HandleMissionResultsViewControllerContinueButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void HandleMissionResultsViewControllerRetryButtonPressed(MissionResultsViewController viewController)
    // Offset: 0xB7DDDC
    void HandleMissionResultsViewControllerRetryButtonPressed(GlobalNamespace::MissionResultsViewController* viewController);
    // private System.Void StartLevel(System.Action beforeSceneSwitchCallback)
    // Offset: 0xB7DB18
    void StartLevel(System::Action* beforeSceneSwitchCallback);
    // private System.Void HandleMissionLevelSceneDidFinish(MissionLevelScenesTransitionSetupDataSO missionLevelScenesTransitionSetupData, MissionCompletionResults missionCompletionResults)
    // Offset: 0xB7DEA8
    void HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__20_0()
    // Offset: 0xB7E11C
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__20_0();
    // private System.Void <HandleMissionResultsViewControllerContinueButtonPressed>b__20_1(System.Boolean presented)
    // Offset: 0xB7E1B0
    void $HandleMissionResultsViewControllerContinueButtonPressed$b__20_1(bool presented);
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    // Offset: 0xB7D588
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidActivate(System.Boolean firstActivation, HMUI.FlowCoordinator/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType);
    // protected override System.Void DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    // Offset: 0xB7D794
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::DidDeactivate(HMUI.FlowCoordinator/DeactivationType deactivationType)
    void DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType);
    // protected override System.Void TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, System.Boolean immediately)
    // Offset: 0xB7D920
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::TopViewControllerWillChange(HMUI.ViewController oldViewController, HMUI.ViewController newViewController, System.Boolean immediately)
    void TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, bool immediately);
    // protected override System.Void BackButtonWasPressed(HMUI.ViewController topViewController)
    // Offset: 0xB7E068
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::BackButtonWasPressed(HMUI.ViewController topViewController)
    void BackButtonWasPressed(HMUI::ViewController* topViewController);
    // public System.Void .ctor()
    // Offset: 0xB7E114
    // Implemented from: HMUI.FlowCoordinator
    // Base method: System.Void FlowCoordinator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CampaignFlowCoordinator* New_ctor();
  }; // CampaignFlowCoordinator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignFlowCoordinator*, "", "CampaignFlowCoordinator");
#pragma pack(pop)