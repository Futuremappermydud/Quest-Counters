// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallback
#include "System/Text/DecoderFallback.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: DecoderFallbackBuffer
  class DecoderFallbackBuffer;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.InternalDecoderBestFitFallback
  class InternalDecoderBestFitFallback : public System::Text::DecoderFallback {
    public:
    // System.Text.Encoding encoding
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // System.Char[] arrayBestFit
    // Offset: 0x20
    ::Array<::Il2CppChar>* arrayBestFit;
    // System.Char cReplacement
    // Offset: 0x28
    ::Il2CppChar cReplacement;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // System.Void .ctor(System.Text.Encoding encoding)
    // Offset: 0x12F53F4
    static InternalDecoderBestFitFallback* New_ctor(System::Text::Encoding* encoding);
    // public override System.Text.DecoderFallbackBuffer CreateFallbackBuffer()
    // Offset: 0x12FB114
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Text.DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
    System::Text::DecoderFallbackBuffer* CreateFallbackBuffer();
    // public override System.Int32 get_MaxCharCount()
    // Offset: 0x12FB298
    // Implemented from: System.Text.DecoderFallback
    // Base method: System.Int32 DecoderFallback::get_MaxCharCount()
    int get_MaxCharCount();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x12FB2A0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12FB358
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.InternalDecoderBestFitFallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::InternalDecoderBestFitFallback*, "System.Text", "InternalDecoderBestFitFallback");
#pragma pack(pop)