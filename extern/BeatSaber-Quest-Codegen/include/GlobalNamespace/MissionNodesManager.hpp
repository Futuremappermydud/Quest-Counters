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
  // Forward declaring type: MissionNode
  class MissionNode;
  // Forward declaring type: MissionStagesManager
  class MissionStagesManager;
  // Forward declaring type: CampaignProgressModel
  class CampaignProgressModel;
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionNodesManager
  class MissionNodesManager : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNode _rootMissionNode
    // Offset: 0x18
    GlobalNamespace::MissionNode* rootMissionNode;
    // private MissionNode _finalMissionNode
    // Offset: 0x20
    GlobalNamespace::MissionNode* finalMissionNode;
    // private MissionStagesManager _missionStagesManager
    // Offset: 0x28
    GlobalNamespace::MissionStagesManager* missionStagesManager;
    // private UnityEngine.GameObject _connectionsParentObject
    // Offset: 0x30
    UnityEngine::GameObject* connectionsParentObject;
    // private UnityEngine.GameObject _missionNodesParentObject
    // Offset: 0x38
    UnityEngine::GameObject* missionNodesParentObject;
    // private CampaignProgressModel _missionProgressModel
    // Offset: 0x40
    GlobalNamespace::CampaignProgressModel* missionProgressModel;
    // private MissionNodeConnection[] _allMissionNodeConnections
    // Offset: 0x48
    ::Array<GlobalNamespace::MissionNodeConnection*>* allMissionNodeConnections;
    // private MissionNode[] _allMissionNodes
    // Offset: 0x50
    ::Array<GlobalNamespace::MissionNode*>* allMissionNodes;
    // private System.Boolean _isInitialized
    // Offset: 0x58
    bool isInitialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public MissionNode get_rootMissionNode()
    // Offset: 0xC0AF44
    GlobalNamespace::MissionNode* get_rootMissionNode();
    // public MissionNode get_finalMissionNode()
    // Offset: 0xC0AF4C
    GlobalNamespace::MissionNode* get_finalMissionNode();
    // public MissionStagesManager get_missionStagesManager()
    // Offset: 0xC0AF54
    GlobalNamespace::MissionStagesManager* get_missionStagesManager();
    // public CampaignProgressModel get_missionProgressModel()
    // Offset: 0xC0AF5C
    GlobalNamespace::CampaignProgressModel* get_missionProgressModel();
    // public MissionNode[] get_allMissionNodes()
    // Offset: 0xC0AF64
    ::Array<GlobalNamespace::MissionNode*>* get_allMissionNodes();
    // public System.Boolean get_IsInitialized()
    // Offset: 0xC0AF6C
    bool get_IsInitialized();
    // protected System.Void Awake()
    // Offset: 0xC0AF74
    void Awake();
    // public System.Void SetupNodeMap()
    // Offset: 0xC085A8
    void SetupNodeMap();
    // public System.Boolean MissionWasCleared(MissionNode missionNode)
    // Offset: 0xC0B400
    bool MissionWasCleared(GlobalNamespace::MissionNode* missionNode);
    // public MissionNode GetMissionNodeWithModelClearedStateInconsistency()
    // Offset: 0xC081B0
    GlobalNamespace::MissionNode* GetMissionNodeWithModelClearedStateInconsistency();
    // public System.Boolean DidFirstLockedMissionStageChange()
    // Offset: 0xC09560
    bool DidFirstLockedMissionStageChange();
    // public System.Void UpdateStageLockText()
    // Offset: 0xC09520
    void UpdateStageLockText();
    // public MissionNode GetTopMostNotClearedMissionNode()
    // Offset: 0xC08350
    GlobalNamespace::MissionNode* GetTopMostNotClearedMissionNode();
    // private System.Void GetAllMissionNodes()
    // Offset: 0xC0AFAC
    void GetAllMissionNodes();
    // private System.Collections.Generic.HashSet`1<MissionNode> GetAllMissionNodes(MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visited)
    // Offset: 0xC0B5E8
    System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* GetAllMissionNodes(GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visited);
    // public MissionNodeConnection[] GetNewEnabledConnection()
    // Offset: 0xC091F8
    ::Array<GlobalNamespace::MissionNodeConnection*>* GetNewEnabledConnection();
    // private System.Void ResetAllNodes()
    // Offset: 0xC0B124
    void ResetAllNodes();
    // private System.Void SetupStages()
    // Offset: 0xC0B18C
    void SetupStages();
    // private System.Void RegisterAllNodes()
    // Offset: 0xC0B048
    void RegisterAllNodes();
    // private System.Void SetupNodeTree(MissionNodeVisualController node, System.Boolean parentCleared)
    // Offset: 0xC0B1F4
    void SetupNodeTree(GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);
    // private System.Boolean IsNodeInteractable(MissionNodeVisualController node, System.Boolean parentCleared)
    // Offset: 0xC0B6D8
    bool IsNodeInteractable(GlobalNamespace::MissionNodeVisualController* node, bool parentCleared);
    // private System.Void SetupNodeConnections()
    // Offset: 0xC0B324
    void SetupNodeConnections();
    // public System.Void .ctor()
    // Offset: 0xC0B7E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionNodesManager* New_ctor();
  }; // MissionNodesManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesManager*, "", "MissionNodesManager");
#pragma pack(pop)