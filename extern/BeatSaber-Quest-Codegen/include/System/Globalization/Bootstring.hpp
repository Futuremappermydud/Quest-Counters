// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.Bootstring
  class Bootstring : public ::Il2CppObject {
    public:
    // private readonly System.Char delimiter
    // Offset: 0x10
    ::Il2CppChar delimiter;
    // private readonly System.Int32 base_num
    // Offset: 0x14
    int base_num;
    // private readonly System.Int32 tmin
    // Offset: 0x18
    int tmin;
    // private readonly System.Int32 tmax
    // Offset: 0x1C
    int tmax;
    // private readonly System.Int32 skew
    // Offset: 0x20
    int skew;
    // private readonly System.Int32 damp
    // Offset: 0x24
    int damp;
    // private readonly System.Int32 initial_bias
    // Offset: 0x28
    int initial_bias;
    // private readonly System.Int32 initial_n
    // Offset: 0x2C
    int initial_n;
    // public System.Void .ctor(System.Char delimiter, System.Int32 baseNum, System.Int32 tmin, System.Int32 tmax, System.Int32 skew, System.Int32 damp, System.Int32 initialBias, System.Int32 initialN)
    // Offset: 0xDAA058
    static Bootstring* New_ctor(::Il2CppChar delimiter, int baseNum, int tmin, int tmax, int skew, int damp, int initialBias, int initialN);
    // public System.String Encode(System.String s, System.Int32 offset)
    // Offset: 0xDAA0D0
    ::Il2CppString* Encode(::Il2CppString* s, int offset);
    // private System.Char EncodeDigit(System.Int32 d)
    // Offset: 0xDAA430
    ::Il2CppChar EncodeDigit(int d);
    // private System.Int32 DecodeDigit(System.Char c)
    // Offset: 0xDAA4C0
    int DecodeDigit(::Il2CppChar c);
    // private System.Int32 Adapt(System.Int32 delta, System.Int32 numPoints, System.Boolean firstTime)
    // Offset: 0xDAA448
    int Adapt(int delta, int numPoints, bool firstTime);
    // public System.String Decode(System.String s, System.Int32 offset)
    // Offset: 0xDAA500
    ::Il2CppString* Decode(::Il2CppString* s, int offset);
  }; // System.Globalization.Bootstring
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Bootstring*, "System.Globalization", "Bootstring");
#pragma pack(pop)