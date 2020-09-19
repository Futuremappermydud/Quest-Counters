// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RangeInt
  struct RangeInt : public System::ValueType {
    public:
    // public System.Int32 start
    // Offset: 0x0
    int start;
    // public System.Int32 length
    // Offset: 0x4
    int length;
    // Creating value type constructor for type: RangeInt
    constexpr RangeInt(int start_ = {}, int length_ = {}) noexcept : start{start_}, length{length_} {}
    // public System.Int32 get_end()
    // Offset: 0xA490DC
    int get_end();
    // public System.Void .ctor(System.Int32 start, System.Int32 length)
    // Offset: 0xA490E8
    static RangeInt* New_ctor(int start, int length);
  }; // UnityEngine.RangeInt
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RangeInt, "UnityEngine", "RangeInt");
#pragma pack(pop)