// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::SteamLevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    // private SteamLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Offset: 0x18
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackProductsData;
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SteamLevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0xBA5F80
    ::Array<GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* get_levelPackProductsData();
    // public SteamLevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0xBA60E0
    GlobalNamespace::SteamLevelProductsModelSO::LevelProductData* GetLevelProductData(::Il2CppString* levelId);
    // public SteamLevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0xBA6160
    GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::Il2CppString* levelPackId);
    // protected override System.Void OnEnable()
    // Offset: 0xBA5F88
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0xBA61E0
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamLevelProductsModelSO* New_ctor();
  }; // SteamLevelProductsModelSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO*, "", "SteamLevelProductsModelSO");
#pragma pack(pop)
