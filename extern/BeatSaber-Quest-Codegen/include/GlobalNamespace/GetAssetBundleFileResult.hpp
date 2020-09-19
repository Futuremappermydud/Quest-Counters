// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GetAssetBundleFileResult
  struct GetAssetBundleFileResult : public System::ValueType {
    public:
    // public readonly System.Boolean isError
    // Offset: 0x0
    bool isError;
    // public readonly System.String assetBundlePath
    // Offset: 0x8
    ::Il2CppString* assetBundlePath;
    // Creating value type constructor for type: GetAssetBundleFileResult
    constexpr GetAssetBundleFileResult(bool isError_ = {}, ::Il2CppString* assetBundlePath_ = {}) noexcept : isError{isError_}, assetBundlePath{assetBundlePath_} {}
    // public System.Void .ctor(System.Boolean isError, System.String assetBundlePath)
    // Offset: 0xA2B1DC
    static GetAssetBundleFileResult* New_ctor(bool isError, ::Il2CppString* assetBundlePath);
  }; // GetAssetBundleFileResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
#pragma pack(pop)