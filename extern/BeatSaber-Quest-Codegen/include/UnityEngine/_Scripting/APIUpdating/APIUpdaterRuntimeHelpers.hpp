// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine._Scripting.APIUpdating
namespace UnityEngine::_Scripting::APIUpdating {
  // Autogenerated type: UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  class APIUpdaterRuntimeHelpers : public ::Il2CppObject {
    public:
    // static System.Boolean GetMovedFromAttributeDataForType(System.Type sourceType, out System.String assembly, out System.String nsp, out System.String klass)
    // Offset: 0x139F160
    static bool GetMovedFromAttributeDataForType(System::Type* sourceType, ::Il2CppString*& assembly, ::Il2CppString*& nsp, ::Il2CppString*& klass);
    // static System.Boolean GetObsoleteTypeRedirection(System.Type sourceType, out System.String assemblyName, out System.String nsp, out System.String className)
    // Offset: 0x139F2D4
    static bool GetObsoleteTypeRedirection(System::Type* sourceType, ::Il2CppString*& assemblyName, ::Il2CppString*& nsp, ::Il2CppString*& className);
  }; // UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
#pragma pack(pop)
