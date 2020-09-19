// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexRunner
#include "System/Text/RegularExpressions/RegexRunner.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexBoyerMoore
  class RegexBoyerMoore;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexInterpreter
  class RegexInterpreter : public System::Text::RegularExpressions::RegexRunner {
    public:
    // System.Int32 runoperator
    // Offset: 0x80
    int runoperator;
    // System.Int32[] runcodes
    // Offset: 0x88
    ::Array<int>* runcodes;
    // System.Int32 runcodepos
    // Offset: 0x90
    int runcodepos;
    // System.String[] runstrings
    // Offset: 0x98
    ::Array<::Il2CppString*>* runstrings;
    // System.Text.RegularExpressions.RegexCode runcode
    // Offset: 0xA0
    System::Text::RegularExpressions::RegexCode* runcode;
    // System.Text.RegularExpressions.RegexPrefix runfcPrefix
    // Offset: 0xA8
    System::Text::RegularExpressions::RegexPrefix* runfcPrefix;
    // System.Text.RegularExpressions.RegexBoyerMoore runbmPrefix
    // Offset: 0xB0
    System::Text::RegularExpressions::RegexBoyerMoore* runbmPrefix;
    // System.Int32 runanchors
    // Offset: 0xB8
    int runanchors;
    // System.Boolean runrtl
    // Offset: 0xBC
    bool runrtl;
    // System.Boolean runci
    // Offset: 0xBD
    bool runci;
    // System.Globalization.CultureInfo runculture
    // Offset: 0xC0
    System::Globalization::CultureInfo* runculture;
    // System.Void .ctor(System.Text.RegularExpressions.RegexCode code, System.Globalization.CultureInfo culture)
    // Offset: 0x12233A8
    static RegexInterpreter* New_ctor(System::Text::RegularExpressions::RegexCode* code, System::Globalization::CultureInfo* culture);
    // private System.Void Advance()
    // Offset: 0x122C3EC
    void Advance();
    // private System.Void Advance(System.Int32 i)
    // Offset: 0x122C3F4
    void Advance(int i);
    // private System.Void Goto(System.Int32 newpos)
    // Offset: 0x122C47C
    void Goto(int newpos);
    // private System.Void Textto(System.Int32 newpos)
    // Offset: 0x122C500
    void Textto(int newpos);
    // private System.Void Trackto(System.Int32 newpos)
    // Offset: 0x122C508
    void Trackto(int newpos);
    // private System.Int32 Textstart()
    // Offset: 0x122C52C
    int Textstart();
    // private System.Int32 Textpos()
    // Offset: 0x122C534
    int Textpos();
    // private System.Int32 Trackpos()
    // Offset: 0x122C53C
    int Trackpos();
    // private System.Void TrackPush()
    // Offset: 0x122C560
    void TrackPush();
    // private System.Void TrackPush(System.Int32 I1)
    // Offset: 0x122C5AC
    void TrackPush(int I1);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x122C620
    void TrackPush(int I1, int I2);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2, System.Int32 I3)
    // Offset: 0x122C6BC
    void TrackPush(int I1, int I2, int I3);
    // private System.Void TrackPush2(System.Int32 I1)
    // Offset: 0x122C780
    void TrackPush2(int I1);
    // private System.Void TrackPush2(System.Int32 I1, System.Int32 I2)
    // Offset: 0x122C7F8
    void TrackPush2(int I1, int I2);
    // private System.Void Backtrack()
    // Offset: 0x122C898
    void Backtrack();
    // private System.Void SetOperator(System.Int32 op)
    // Offset: 0x122C45C
    void SetOperator(int op);
    // private System.Void TrackPop()
    // Offset: 0x122C990
    void TrackPop();
    // private System.Void TrackPop(System.Int32 framesize)
    // Offset: 0x122C9A0
    void TrackPop(int framesize);
    // private System.Int32 TrackPeek()
    // Offset: 0x122C9B0
    int TrackPeek();
    // private System.Int32 TrackPeek(System.Int32 i)
    // Offset: 0x122C9F4
    int TrackPeek(int i);
    // private System.Void StackPush(System.Int32 I1)
    // Offset: 0x122CA3C
    void StackPush(int I1);
    // private System.Void StackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x122CA84
    void StackPush(int I1, int I2);
    // private System.Void StackPop()
    // Offset: 0x122CAF4
    void StackPop();
    // private System.Void StackPop(System.Int32 framesize)
    // Offset: 0x122CB04
    void StackPop(int framesize);
    // private System.Int32 StackPeek()
    // Offset: 0x122CB14
    int StackPeek();
    // private System.Int32 StackPeek(System.Int32 i)
    // Offset: 0x122CB58
    int StackPeek(int i);
    // private System.Int32 Operator()
    // Offset: 0x122CBA0
    int Operator();
    // private System.Int32 Operand(System.Int32 i)
    // Offset: 0x122CBA8
    int Operand(int i);
    // private System.Int32 Leftchars()
    // Offset: 0x122CBF0
    int Leftchars();
    // private System.Int32 Rightchars()
    // Offset: 0x122CC00
    int Rightchars();
    // private System.Int32 Bump()
    // Offset: 0x122CC10
    int Bump();
    // private System.Int32 Forwardchars()
    // Offset: 0x122CC24
    int Forwardchars();
    // private System.Char Forwardcharnext()
    // Offset: 0x122CC50
    ::Il2CppChar Forwardcharnext();
    // private System.Boolean Stringmatch(System.String str)
    // Offset: 0x122CD10
    bool Stringmatch(::Il2CppString* str);
    // private System.Boolean Refmatch(System.Int32 index, System.Int32 len)
    // Offset: 0x122CEB4
    bool Refmatch(int index, int len);
    // private System.Void Backwardnext()
    // Offset: 0x122D064
    void Backwardnext();
    // private System.Char CharAt(System.Int32 j)
    // Offset: 0x122D094
    ::Il2CppChar CharAt(int j);
    // protected override System.Void InitTrackCount()
    // Offset: 0x122C3CC
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::InitTrackCount()
    void InitTrackCount();
    // protected override System.Boolean FindFirstChar()
    // Offset: 0x122D0B0
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Boolean RegexRunner::FindFirstChar()
    bool FindFirstChar();
    // protected override System.Void Go()
    // Offset: 0x122D420
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::Go()
    void Go();
  }; // System.Text.RegularExpressions.RegexInterpreter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexInterpreter*, "System.Text.RegularExpressions", "RegexInterpreter");
#pragma pack(pop)
