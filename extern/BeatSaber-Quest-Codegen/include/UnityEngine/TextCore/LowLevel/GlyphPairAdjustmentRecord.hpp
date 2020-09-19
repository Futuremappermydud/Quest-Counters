// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord
#include "UnityEngine/TextCore/LowLevel/GlyphAdjustmentRecord.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
  struct GlyphPairAdjustmentRecord : public System::ValueType {
    public:
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_FirstAdjustmentRecord
    // Offset: 0x0
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord;
    // private UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord m_SecondAdjustmentRecord
    // Offset: 0x14
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord;
    // Creating value type constructor for type: GlyphPairAdjustmentRecord
    constexpr GlyphPairAdjustmentRecord(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_FirstAdjustmentRecord_ = {}, UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord m_SecondAdjustmentRecord_ = {}) noexcept : m_FirstAdjustmentRecord{m_FirstAdjustmentRecord_}, m_SecondAdjustmentRecord{m_SecondAdjustmentRecord_} {}
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_firstAdjustmentRecord()
    // Offset: 0xA5EA64
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_firstAdjustmentRecord();
    // public UnityEngine.TextCore.LowLevel.GlyphAdjustmentRecord get_secondAdjustmentRecord()
    // Offset: 0xA5EA78
    UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord get_secondAdjustmentRecord();
  }; // UnityEngine.TextCore.LowLevel.GlyphPairAdjustmentRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, "UnityEngine.TextCore.LowLevel", "GlyphPairAdjustmentRecord");
#pragma pack(pop)
