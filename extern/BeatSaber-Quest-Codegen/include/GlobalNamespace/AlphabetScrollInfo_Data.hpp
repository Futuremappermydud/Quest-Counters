// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AlphabetScrollInfo/Data
  class AlphabetScrollInfo::Data : public ::Il2CppObject {
    public:
    // public readonly System.Char character
    // Offset: 0x10
    ::Il2CppChar character;
    // public readonly System.Int32 cellIdx
    // Offset: 0x14
    int cellIdx;
    // public System.Void .ctor(System.Char character, System.Int32 cellIdx)
    // Offset: 0xCAD8A4
    static AlphabetScrollInfo::Data* New_ctor(::Il2CppChar character, int cellIdx);
  }; // AlphabetScrollInfo/Data
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AlphabetScrollInfo::Data*, "", "AlphabetScrollInfo/Data");
#pragma pack(pop)
