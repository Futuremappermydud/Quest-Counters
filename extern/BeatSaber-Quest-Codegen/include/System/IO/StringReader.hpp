// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.StringReader
  class StringReader : public System::IO::TextReader {
    public:
    // private System.String _s
    // Offset: 0x18
    ::Il2CppString* s;
    // private System.Int32 _pos
    // Offset: 0x20
    int pos;
    // private System.Int32 _length
    // Offset: 0x24
    int length;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // public System.Void .ctor(System.String s)
    // Offset: 0x100E4B0
    static StringReader* New_ctor(::Il2CppString* s);
    // public override System.Void Close()
    // Offset: 0x100E588
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x100E598
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Int32 Peek()
    // Offset: 0x100E5C8
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x100E608
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x100E650
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(in System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& buffer, int index, int count);
    // public override System.String ReadToEnd()
    // Offset: 0x100E830
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
    // public override System.String ReadLine()
    // Offset: 0x100E878
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
  }; // System.IO.StringReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringReader*, "System.IO", "StringReader");
#pragma pack(pop)