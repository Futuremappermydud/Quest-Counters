// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionStagesManager
#include "GlobalNamespace/MissionStagesManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionStage
  class MissionStage;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionStagesManager/<>c
  class MissionStagesManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly MissionStagesManager/<>c <>9
    static GlobalNamespace::MissionStagesManager::$$c* _get_$$9();
    // Set static field: static public readonly MissionStagesManager/<>c <>9
    static void _set_$$9(GlobalNamespace::MissionStagesManager::$$c* value);
    // Get static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static System::Func_2<GlobalNamespace::MissionStage*, int>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<MissionStage,System.Int32> <>9__6_0
    static void _set_$$9__6_0(System::Func_2<GlobalNamespace::MissionStage*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0xC0F3D8
    static void _cctor();
    // System.Int32 <InitStages>b__6_0(MissionStage stage)
    // Offset: 0xC0F448
    int $InitStages$b__6_0(GlobalNamespace::MissionStage* stage);
    // public System.Void .ctor()
    // Offset: 0xC0F440
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionStagesManager::$$c* New_ctor();
  }; // MissionStagesManager/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStagesManager::$$c*, "", "MissionStagesManager/<>c");
#pragma pack(pop)