// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoDriver
  class TermInfoDriver;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.CStreamReader
  class CStreamReader : public System::IO::StreamReader {
    public:
    // private System.TermInfoDriver driver
    // Offset: 0x68
    System::TermInfoDriver* driver;
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x112EE34
    // Implemented from: System.IO.StreamReader
    // Base method: System.Void StreamReader::.ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    static CStreamReader* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding);
    // public override System.Int32 Peek()
    // Offset: 0x112EF30
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Peek()
    int Peek();
    // public override System.Int32 Read()
    // Offset: 0x112EFF0
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read()
    int Read();
    // public override System.Int32 Read(in System.Char[] dest, System.Int32 index, System.Int32 count)
    // Offset: 0x112F0D0
    // Implemented from: System.IO.StreamReader
    // Base method: System.Int32 StreamReader::Read(in System.Char[] dest, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>*& dest, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x112F29C
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadLine()
    ::Il2CppString* ReadLine();
    // public override System.String ReadToEnd()
    // Offset: 0x112F368
    // Implemented from: System.IO.StreamReader
    // Base method: System.String StreamReader::ReadToEnd()
    ::Il2CppString* ReadToEnd();
  }; // System.IO.CStreamReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::CStreamReader*, "System.IO", "CStreamReader");
#pragma pack(pop)