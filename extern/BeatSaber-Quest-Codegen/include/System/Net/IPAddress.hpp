// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Sockets.AddressFamily
#include "System/Net/Sockets/AddressFamily.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.IPAddress
  class IPAddress : public ::Il2CppObject {
    public:
    // System.Int64 m_Address
    // Offset: 0x10
    int64_t m_Address;
    // System.String m_ToString
    // Offset: 0x18
    ::Il2CppString* m_ToString;
    // private System.Net.Sockets.AddressFamily m_Family
    // Offset: 0x20
    System::Net::Sockets::AddressFamily m_Family;
    // private System.UInt16[] m_Numbers
    // Offset: 0x28
    ::Array<uint16_t>* m_Numbers;
    // private System.Int64 m_ScopeId
    // Offset: 0x30
    int64_t m_ScopeId;
    // private System.Int32 m_HashCode
    // Offset: 0x38
    int m_HashCode;
    // Get static field: static public readonly System.Net.IPAddress Any
    static System::Net::IPAddress* _get_Any();
    // Set static field: static public readonly System.Net.IPAddress Any
    static void _set_Any(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress Loopback
    static System::Net::IPAddress* _get_Loopback();
    // Set static field: static public readonly System.Net.IPAddress Loopback
    static void _set_Loopback(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress Broadcast
    static System::Net::IPAddress* _get_Broadcast();
    // Set static field: static public readonly System.Net.IPAddress Broadcast
    static void _set_Broadcast(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress None
    static System::Net::IPAddress* _get_None();
    // Set static field: static public readonly System.Net.IPAddress None
    static void _set_None(System::Net::IPAddress* value);
    // static field const value: static System.Int64 LoopbackMask
    static constexpr const int64_t LoopbackMask = 255;
    // Get static field: static System.Int64 LoopbackMask
    static int64_t _get_LoopbackMask();
    // Set static field: static System.Int64 LoopbackMask
    static void _set_LoopbackMask(int64_t value);
    // Get static field: static public readonly System.Net.IPAddress IPv6Any
    static System::Net::IPAddress* _get_IPv6Any();
    // Set static field: static public readonly System.Net.IPAddress IPv6Any
    static void _set_IPv6Any(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress IPv6Loopback
    static System::Net::IPAddress* _get_IPv6Loopback();
    // Set static field: static public readonly System.Net.IPAddress IPv6Loopback
    static void _set_IPv6Loopback(System::Net::IPAddress* value);
    // Get static field: static public readonly System.Net.IPAddress IPv6None
    static System::Net::IPAddress* _get_IPv6None();
    // Set static field: static public readonly System.Net.IPAddress IPv6None
    static void _set_IPv6None(System::Net::IPAddress* value);
    // static field const value: static System.Int32 IPv4AddressBytes
    static constexpr const int IPv4AddressBytes = 4;
    // Get static field: static System.Int32 IPv4AddressBytes
    static int _get_IPv4AddressBytes();
    // Set static field: static System.Int32 IPv4AddressBytes
    static void _set_IPv4AddressBytes(int value);
    // static field const value: static System.Int32 IPv6AddressBytes
    static constexpr const int IPv6AddressBytes = 16;
    // Get static field: static System.Int32 IPv6AddressBytes
    static int _get_IPv6AddressBytes();
    // Set static field: static System.Int32 IPv6AddressBytes
    static void _set_IPv6AddressBytes(int value);
    // static field const value: static System.Int32 NumberOfLabels
    static constexpr const int NumberOfLabels = 8;
    // Get static field: static System.Int32 NumberOfLabels
    static int _get_NumberOfLabels();
    // Set static field: static System.Int32 NumberOfLabels
    static void _set_NumberOfLabels(int value);
    // public System.Void .ctor(System.Int64 newAddress)
    // Offset: 0xF6E128
    static IPAddress* New_ctor(int64_t newAddress);
    // public System.Void .ctor(System.Byte[] address, System.Int64 scopeid)
    // Offset: 0xF6E1F4
    static IPAddress* New_ctor(::Array<uint8_t>* address, int64_t scopeid);
    // private System.Void .ctor(System.UInt16[] address, System.UInt32 scopeid)
    // Offset: 0xF6E3CC
    static IPAddress* New_ctor(::Array<uint16_t>* address, uint scopeid);
    // System.Void .ctor(System.Int32 newAddress)
    // Offset: 0xF6E478
    static IPAddress* New_ctor(int newAddress);
    // static public System.Boolean TryParse(System.String ipString, out System.Net.IPAddress address)
    // Offset: 0xF6DBB0
    static bool TryParse(::Il2CppString* ipString, System::Net::IPAddress*& address);
    // static public System.Net.IPAddress Parse(System.String ipString)
    // Offset: 0xF6D75C
    static System::Net::IPAddress* Parse(::Il2CppString* ipString);
    // static private System.Net.IPAddress InternalParse(System.String ipString, System.Boolean tryParse)
    // Offset: 0xF6E504
    static System::Net::IPAddress* InternalParse(::Il2CppString* ipString, bool tryParse);
    // public System.Byte[] GetAddressBytes()
    // Offset: 0xF6E830
    ::Array<uint8_t>* GetAddressBytes();
    // public System.Net.Sockets.AddressFamily get_AddressFamily()
    // Offset: 0xF6E978
    System::Net::Sockets::AddressFamily get_AddressFamily();
    // public System.Int64 get_ScopeId()
    // Offset: 0xF6E980
    int64_t get_ScopeId();
    // System.Boolean Equals(System.Object comparandObj, System.Boolean compareScopeId)
    // Offset: 0xF6EF10
    bool Equals(::Il2CppObject* comparandObj, bool compareScopeId);
    // public System.Net.IPAddress MapToIPv6()
    // Offset: 0xF6F154
    System::Net::IPAddress* MapToIPv6();
    // static private System.Void .cctor()
    // Offset: 0xF6F238
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xF6EA04
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0xF6F050
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF6F058
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Net.IPAddress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPAddress*, "System.Net", "IPAddress");
#pragma pack(pop)
