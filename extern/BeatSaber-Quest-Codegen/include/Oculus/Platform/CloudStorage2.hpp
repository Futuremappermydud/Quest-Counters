// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.CloudStorage2
  class CloudStorage2 : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<System.String> GetUserDirectoryPath()
    // Offset: 0xE98F14
    static Oculus::Platform::Request_1<::Il2CppString*>* GetUserDirectoryPath();
  }; // Oculus.Platform.CloudStorage2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CloudStorage2*, "Oculus.Platform", "CloudStorage2");
#pragma pack(pop)
