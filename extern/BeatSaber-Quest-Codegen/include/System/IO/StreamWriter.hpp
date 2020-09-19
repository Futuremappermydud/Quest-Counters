// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.StreamWriter
  class StreamWriter : public System::IO::TextWriter {
    public:
    // private System.IO.Stream stream
    // Offset: 0x28
    System::IO::Stream* stream;
    // private System.Text.Encoding encoding
    // Offset: 0x30
    System::Text::Encoding* encoding;
    // private System.Text.Encoder encoder
    // Offset: 0x38
    System::Text::Encoder* encoder;
    // private System.Byte[] byteBuffer
    // Offset: 0x40
    ::Array<uint8_t>* byteBuffer;
    // private System.Char[] charBuffer
    // Offset: 0x48
    ::Array<::Il2CppChar>* charBuffer;
    // private System.Int32 charPos
    // Offset: 0x50
    int charPos;
    // private System.Int32 charLen
    // Offset: 0x54
    int charLen;
    // private System.Boolean autoFlush
    // Offset: 0x58
    bool autoFlush;
    // private System.Boolean haveWrittenPreamble
    // Offset: 0x59
    bool haveWrittenPreamble;
    // private System.Boolean closable
    // Offset: 0x5A
    bool closable;
    // private System.Threading.Tasks.Task _asyncWriteTask
    // Offset: 0x60
    System::Threading::Tasks::Task* asyncWriteTask;
    // Get static field: static public readonly System.IO.StreamWriter Null
    static System::IO::StreamWriter* _get_Null();
    // Set static field: static public readonly System.IO.StreamWriter Null
    static void _set_Null(System::IO::StreamWriter* value);
    // Get static field: static private System.Text.Encoding _UTF8NoBOM
    static System::Text::Encoding* _get__UTF8NoBOM();
    // Set static field: static private System.Text.Encoding _UTF8NoBOM
    static void _set__UTF8NoBOM(System::Text::Encoding* value);
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0x100D08C
    void CheckAsyncTaskInProgress();
    // static System.Text.Encoding get_UTF8NoBOM()
    // Offset: 0x100D134
    static System::Text::Encoding* get_UTF8NoBOM();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x100D340
    static StreamWriter* New_ctor(System::IO::Stream* stream);
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x100D3C4
    static StreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, int bufferSize, bool leaveOpen);
    // public System.Void .ctor(System.String path)
    // Offset: 0x100D6E8
    static StreamWriter* New_ctor(::Il2CppString* path);
    // public System.Void .ctor(System.String path, System.Boolean append)
    // Offset: 0x100D77C
    static StreamWriter* New_ctor(::Il2CppString* path, bool append);
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding)
    // Offset: 0x100D808
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding);
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0x100D770
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding, int bufferSize);
    // System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0x100D818
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding, int bufferSize, bool checkHost);
    // private System.Void Init(System.IO.Stream streamArg, System.Text.Encoding encodingArg, System.Int32 bufferSize, System.Boolean shouldLeaveOpen)
    // Offset: 0x100D56C
    void Init(System::IO::Stream* streamArg, System::Text::Encoding* encodingArg, int bufferSize, bool shouldLeaveOpen);
    // static private System.IO.Stream CreateFile(System.String path, System.Boolean append, System.Boolean checkHost)
    // Offset: 0x100DA00
    static System::IO::Stream* CreateFile(::Il2CppString* path, bool append, bool checkHost);
    // private System.Void Flush(System.Boolean flushStream, System.Boolean flushEncoder)
    // Offset: 0x100DCFC
    void Flush(bool flushStream, bool flushEncoder);
    // public System.Void set_AutoFlush(System.Boolean value)
    // Offset: 0x100DF08
    void set_AutoFlush(bool value);
    // System.Boolean get_LeaveOpen()
    // Offset: 0x100DCEC
    bool get_LeaveOpen();
    // System.Void .ctor()
    // Offset: 0x100D22C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static StreamWriter* New_ctor();
    // public override System.Void Close()
    // Offset: 0x100DAEC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x100DB68
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x100DE58
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Flush()
    void Flush();
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x100DF5C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x100DF64
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer)
    // Offset: 0x100E000
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer)
    void Write(::Array<::Il2CppChar>* buffer);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x100E0D8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x100E310
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x100E3E4
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
  }; // System.IO.StreamWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamWriter*, "System.IO", "StreamWriter");
#pragma pack(pop)
