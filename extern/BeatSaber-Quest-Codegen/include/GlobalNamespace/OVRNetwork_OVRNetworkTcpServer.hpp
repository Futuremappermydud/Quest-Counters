// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpListener
  class TcpListener;
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRNetwork/OVRNetworkTcpServer
  class OVRNetwork::OVRNetworkTcpServer : public ::Il2CppObject {
    public:
    // public System.Net.Sockets.TcpListener tcpListener
    // Offset: 0x10
    System::Net::Sockets::TcpListener* tcpListener;
    // private readonly System.Object clientsLock
    // Offset: 0x18
    ::Il2CppObject* clientsLock;
    // public readonly System.Collections.Generic.List`1<System.Net.Sockets.TcpClient> clients
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::Sockets::TcpClient*>* clients;
    // public System.Void StartListening(System.Int32 listeningPort)
    // Offset: 0xEF0528
    void StartListening(int listeningPort);
    // public System.Void StopListening()
    // Offset: 0xEF0A78
    void StopListening();
    // private System.Void DoAcceptTcpClientCallback(System.IAsyncResult ar)
    // Offset: 0xEF0BF4
    void DoAcceptTcpClientCallback(System::IAsyncResult* ar);
    // public System.Boolean HasConnectedClient()
    // Offset: 0xEF10F8
    bool HasConnectedClient();
    // public System.Void Broadcast(System.Int32 payloadType, System.Byte[] payload)
    // Offset: 0xEF1320
    void Broadcast(int payloadType, ::Array<uint8_t>* payload);
    // private System.Void DoWriteDataCallback(System.IAsyncResult ar)
    // Offset: 0xEF1898
    void DoWriteDataCallback(System::IAsyncResult* ar);
    // public System.Void .ctor()
    // Offset: 0xEF1990
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRNetwork::OVRNetworkTcpServer* New_ctor();
  }; // OVRNetwork/OVRNetworkTcpServer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::OVRNetworkTcpServer*, "", "OVRNetwork/OVRNetworkTcpServer");
#pragma pack(pop)
