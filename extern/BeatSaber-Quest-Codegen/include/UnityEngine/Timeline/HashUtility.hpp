// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.HashUtility
  class HashUtility : public ::Il2CppObject {
    public:
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2)
    // Offset: 0x1092224
    static int CombineHash(int h1, int h2);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3)
    // Offset: 0x109B6F4
    static int CombineHash(int h1, int h2, int h3);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4)
    // Offset: 0x109B720
    static int CombineHash(int h1, int h2, int h3, int h4);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5)
    // Offset: 0x109B75C
    static int CombineHash(int h1, int h2, int h3, int h4, int h5);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6)
    // Offset: 0x109B7A8
    static int CombineHash(int h1, int h2, int h3, int h4, int h5, int h6);
    // static public System.Int32 CombineHash(System.Int32 h1, System.Int32 h2, System.Int32 h3, System.Int32 h4, System.Int32 h5, System.Int32 h6, System.Int32 h7)
    // Offset: 0x109B804
    static int CombineHash(int h1, int h2, int h3, int h4, int h5, int h6, int h7);
    // static public System.Int32 CombineHash(System.Int32[] hashes)
    // Offset: 0x109B83C
    static int CombineHash(::Array<int>* hashes);
  }; // UnityEngine.Timeline.HashUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::HashUtility*, "UnityEngine.Timeline", "HashUtility");
#pragma pack(pop)