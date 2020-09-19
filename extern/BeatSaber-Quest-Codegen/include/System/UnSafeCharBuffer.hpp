// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.UnSafeCharBuffer
  struct UnSafeCharBuffer : public System::ValueType {
    public:
    // private System.Char* m_buffer
    // Offset: 0x0
    ::Il2CppChar* m_buffer;
    // private System.Int32 m_totalSize
    // Offset: 0x8
    int m_totalSize;
    // private System.Int32 m_length
    // Offset: 0xC
    int m_length;
    // Creating value type constructor for type: UnSafeCharBuffer
    constexpr UnSafeCharBuffer(::Il2CppChar* m_buffer_ = {}, int m_totalSize_ = {}, int m_length_ = {}) noexcept : m_buffer{m_buffer_}, m_totalSize{m_totalSize_}, m_length{m_length_} {}
    // public System.Void .ctor(System.Char* buffer, System.Int32 bufferSize)
    // Offset: 0xA5767C
    static UnSafeCharBuffer* New_ctor(::Il2CppChar* buffer, int bufferSize);
    // public System.Void AppendString(System.String stringToAppend)
    // Offset: 0xA57688
    void AppendString(::Il2CppString* stringToAppend);
  }; // System.UnSafeCharBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UnSafeCharBuffer, "System", "UnSafeCharBuffer");
#pragma pack(pop)
