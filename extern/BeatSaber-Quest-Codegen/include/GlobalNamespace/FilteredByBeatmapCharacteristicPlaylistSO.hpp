// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: IPlaylist
#include "GlobalNamespace/IPlaylist.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FilteredByBeatmapCharacteristicPlaylistSO
  class FilteredByBeatmapCharacteristicPlaylistSO : public UnityEngine::ScriptableObject, public GlobalNamespace::IPlaylist {
    public:
    // private System.String _playListNameLocalizationKey
    // Offset: 0x18
    ::Il2CppString* playListNameLocalizationKey;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x20
    UnityEngine::Sprite* coverImage;
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Offset: 0x28
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private IBeatmapLevelCollection _beatmapLevelCollection
    // Offset: 0x30
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0xBEDEFC
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public System.Void SetupFromLevelPackCollection(IBeatmapLevelPackCollection beatmapLevelPackCollection)
    // Offset: 0xBEDF20
    void SetupFromLevelPackCollection(GlobalNamespace::IBeatmapLevelPackCollection* beatmapLevelPackCollection);
    // public System.String get_collectionName()
    // Offset: 0xBEDF04
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0xBEDF10
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0xBEDF18
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0xBEDF68
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FilteredByBeatmapCharacteristicPlaylistSO* New_ctor();
  }; // FilteredByBeatmapCharacteristicPlaylistSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FilteredByBeatmapCharacteristicPlaylistSO*, "", "FilteredByBeatmapCharacteristicPlaylistSO");
#pragma pack(pop)
