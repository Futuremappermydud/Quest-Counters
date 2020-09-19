// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.__Error
  class __Error : public ::Il2CppObject {
    public:
    // static System.Void EndOfFile()
    // Offset: 0x1012D08
    static void EndOfFile();
    // static System.Void FileNotOpen()
    // Offset: 0x1012D88
    static void FileNotOpen();
    // static System.Void StreamIsClosed()
    // Offset: 0x1011E5C
    static void StreamIsClosed();
    // static System.Void MemoryStreamNotExpandable()
    // Offset: 0x1012E0C
    static void MemoryStreamNotExpandable();
    // static System.Void ReaderClosed()
    // Offset: 0x100BFFC
    static void ReaderClosed();
    // static System.Void ReadNotSupported()
    // Offset: 0x1009690
    static void ReadNotSupported();
    // static System.Void WrongAsyncResult()
    // Offset: 0x100B328
    static void WrongAsyncResult();
    // static System.Void EndReadCalledTwice()
    // Offset: 0x100B3A8
    static void EndReadCalledTwice();
    // static System.Void EndWriteCalledTwice()
    // Offset: 0x100B428
    static void EndWriteCalledTwice();
    // static System.String GetDisplayablePath(System.String path, System.Boolean isInvalidPath)
    // Offset: 0x1012E88
    static ::Il2CppString* GetDisplayablePath(::Il2CppString* path, bool isInvalidPath);
    // static System.Void WinIOError(System.Int32 errorCode, System.String maybeFullPath)
    // Offset: 0x1012FA4
    static void WinIOError(int errorCode, ::Il2CppString* maybeFullPath);
    // static System.Void WriteNotSupported()
    // Offset: 0x100A130
    static void WriteNotSupported();
    // static System.Void WriterClosed()
    // Offset: 0x100DE84
    static void WriterClosed();
  }; // System.IO.__Error
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::__Error*, "System.IO", "__Error");
#pragma pack(pop)