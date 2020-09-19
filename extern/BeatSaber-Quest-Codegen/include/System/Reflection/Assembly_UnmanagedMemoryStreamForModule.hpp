// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
// Including type: System.IO.UnmanagedMemoryStream
#include "System/IO/UnmanagedMemoryStream.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Module
  class Module;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.Assembly/UnmanagedMemoryStreamForModule
  class Assembly::UnmanagedMemoryStreamForModule : public System::IO::UnmanagedMemoryStream {
    public:
    // private System.Reflection.Module module
    // Offset: 0x60
    System::Reflection::Module* module;
    // public System.Void .ctor(System.Byte* pointer, System.Int64 length, System.Reflection.Module module)
    // Offset: 0x13674D0
    static Assembly::UnmanagedMemoryStreamForModule* New_ctor(uint8_t* pointer, int64_t length, System::Reflection::Module* module);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13688C4
    // Implemented from: System.IO.UnmanagedMemoryStream
    // Base method: System.Void UnmanagedMemoryStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Reflection.Assembly/UnmanagedMemoryStreamForModule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Assembly::UnmanagedMemoryStreamForModule*, "System.Reflection", "Assembly/UnmanagedMemoryStreamForModule");
#pragma pack(pop)