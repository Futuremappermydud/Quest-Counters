// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.DateTimeParse/DS
  struct DateTimeParse::DS : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: DS
    constexpr DS(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.DateTimeParse/DS BEGIN
    static constexpr const int BEGIN = 0;
    // Get static field: static public System.DateTimeParse/DS BEGIN
    static System::DateTimeParse::DS _get_BEGIN();
    // Set static field: static public System.DateTimeParse/DS BEGIN
    static void _set_BEGIN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS N
    static constexpr const int N = 1;
    // Get static field: static public System.DateTimeParse/DS N
    static System::DateTimeParse::DS _get_N();
    // Set static field: static public System.DateTimeParse/DS N
    static void _set_N(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS NN
    static constexpr const int NN = 2;
    // Get static field: static public System.DateTimeParse/DS NN
    static System::DateTimeParse::DS _get_NN();
    // Set static field: static public System.DateTimeParse/DS NN
    static void _set_NN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_Nd
    static constexpr const int D_Nd = 3;
    // Get static field: static public System.DateTimeParse/DS D_Nd
    static System::DateTimeParse::DS _get_D_Nd();
    // Set static field: static public System.DateTimeParse/DS D_Nd
    static void _set_D_Nd(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_NN
    static constexpr const int D_NN = 4;
    // Get static field: static public System.DateTimeParse/DS D_NN
    static System::DateTimeParse::DS _get_D_NN();
    // Set static field: static public System.DateTimeParse/DS D_NN
    static void _set_D_NN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_NNd
    static constexpr const int D_NNd = 5;
    // Get static field: static public System.DateTimeParse/DS D_NNd
    static System::DateTimeParse::DS _get_D_NNd();
    // Set static field: static public System.DateTimeParse/DS D_NNd
    static void _set_D_NNd(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_M
    static constexpr const int D_M = 6;
    // Get static field: static public System.DateTimeParse/DS D_M
    static System::DateTimeParse::DS _get_D_M();
    // Set static field: static public System.DateTimeParse/DS D_M
    static void _set_D_M(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_MN
    static constexpr const int D_MN = 7;
    // Get static field: static public System.DateTimeParse/DS D_MN
    static System::DateTimeParse::DS _get_D_MN();
    // Set static field: static public System.DateTimeParse/DS D_MN
    static void _set_D_MN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_NM
    static constexpr const int D_NM = 8;
    // Get static field: static public System.DateTimeParse/DS D_NM
    static System::DateTimeParse::DS _get_D_NM();
    // Set static field: static public System.DateTimeParse/DS D_NM
    static void _set_D_NM(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_MNd
    static constexpr const int D_MNd = 9;
    // Get static field: static public System.DateTimeParse/DS D_MNd
    static System::DateTimeParse::DS _get_D_MNd();
    // Set static field: static public System.DateTimeParse/DS D_MNd
    static void _set_D_MNd(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_NDS
    static constexpr const int D_NDS = 10;
    // Get static field: static public System.DateTimeParse/DS D_NDS
    static System::DateTimeParse::DS _get_D_NDS();
    // Set static field: static public System.DateTimeParse/DS D_NDS
    static void _set_D_NDS(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_Y
    static constexpr const int D_Y = 11;
    // Get static field: static public System.DateTimeParse/DS D_Y
    static System::DateTimeParse::DS _get_D_Y();
    // Set static field: static public System.DateTimeParse/DS D_Y
    static void _set_D_Y(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_YN
    static constexpr const int D_YN = 12;
    // Get static field: static public System.DateTimeParse/DS D_YN
    static System::DateTimeParse::DS _get_D_YN();
    // Set static field: static public System.DateTimeParse/DS D_YN
    static void _set_D_YN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_YNd
    static constexpr const int D_YNd = 13;
    // Get static field: static public System.DateTimeParse/DS D_YNd
    static System::DateTimeParse::DS _get_D_YNd();
    // Set static field: static public System.DateTimeParse/DS D_YNd
    static void _set_D_YNd(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_YM
    static constexpr const int D_YM = 14;
    // Get static field: static public System.DateTimeParse/DS D_YM
    static System::DateTimeParse::DS _get_D_YM();
    // Set static field: static public System.DateTimeParse/DS D_YM
    static void _set_D_YM(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_YMd
    static constexpr const int D_YMd = 15;
    // Get static field: static public System.DateTimeParse/DS D_YMd
    static System::DateTimeParse::DS _get_D_YMd();
    // Set static field: static public System.DateTimeParse/DS D_YMd
    static void _set_D_YMd(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS D_S
    static constexpr const int D_S = 16;
    // Get static field: static public System.DateTimeParse/DS D_S
    static System::DateTimeParse::DS _get_D_S();
    // Set static field: static public System.DateTimeParse/DS D_S
    static void _set_D_S(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS T_S
    static constexpr const int T_S = 17;
    // Get static field: static public System.DateTimeParse/DS T_S
    static System::DateTimeParse::DS _get_T_S();
    // Set static field: static public System.DateTimeParse/DS T_S
    static void _set_T_S(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS T_Nt
    static constexpr const int T_Nt = 18;
    // Get static field: static public System.DateTimeParse/DS T_Nt
    static System::DateTimeParse::DS _get_T_Nt();
    // Set static field: static public System.DateTimeParse/DS T_Nt
    static void _set_T_Nt(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS T_NNt
    static constexpr const int T_NNt = 19;
    // Get static field: static public System.DateTimeParse/DS T_NNt
    static System::DateTimeParse::DS _get_T_NNt();
    // Set static field: static public System.DateTimeParse/DS T_NNt
    static void _set_T_NNt(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS ERROR
    static constexpr const int ERROR = 20;
    // Get static field: static public System.DateTimeParse/DS ERROR
    static System::DateTimeParse::DS _get_ERROR();
    // Set static field: static public System.DateTimeParse/DS ERROR
    static void _set_ERROR(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NN
    static constexpr const int DX_NN = 21;
    // Get static field: static public System.DateTimeParse/DS DX_NN
    static System::DateTimeParse::DS _get_DX_NN();
    // Set static field: static public System.DateTimeParse/DS DX_NN
    static void _set_DX_NN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NNN
    static constexpr const int DX_NNN = 22;
    // Get static field: static public System.DateTimeParse/DS DX_NNN
    static System::DateTimeParse::DS _get_DX_NNN();
    // Set static field: static public System.DateTimeParse/DS DX_NNN
    static void _set_DX_NNN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_MN
    static constexpr const int DX_MN = 23;
    // Get static field: static public System.DateTimeParse/DS DX_MN
    static System::DateTimeParse::DS _get_DX_MN();
    // Set static field: static public System.DateTimeParse/DS DX_MN
    static void _set_DX_MN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NM
    static constexpr const int DX_NM = 24;
    // Get static field: static public System.DateTimeParse/DS DX_NM
    static System::DateTimeParse::DS _get_DX_NM();
    // Set static field: static public System.DateTimeParse/DS DX_NM
    static void _set_DX_NM(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_MNN
    static constexpr const int DX_MNN = 25;
    // Get static field: static public System.DateTimeParse/DS DX_MNN
    static System::DateTimeParse::DS _get_DX_MNN();
    // Set static field: static public System.DateTimeParse/DS DX_MNN
    static void _set_DX_MNN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_DS
    static constexpr const int DX_DS = 26;
    // Get static field: static public System.DateTimeParse/DS DX_DS
    static System::DateTimeParse::DS _get_DX_DS();
    // Set static field: static public System.DateTimeParse/DS DX_DS
    static void _set_DX_DS(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_DSN
    static constexpr const int DX_DSN = 27;
    // Get static field: static public System.DateTimeParse/DS DX_DSN
    static System::DateTimeParse::DS _get_DX_DSN();
    // Set static field: static public System.DateTimeParse/DS DX_DSN
    static void _set_DX_DSN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NDS
    static constexpr const int DX_NDS = 28;
    // Get static field: static public System.DateTimeParse/DS DX_NDS
    static System::DateTimeParse::DS _get_DX_NDS();
    // Set static field: static public System.DateTimeParse/DS DX_NDS
    static void _set_DX_NDS(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NNDS
    static constexpr const int DX_NNDS = 29;
    // Get static field: static public System.DateTimeParse/DS DX_NNDS
    static System::DateTimeParse::DS _get_DX_NNDS();
    // Set static field: static public System.DateTimeParse/DS DX_NNDS
    static void _set_DX_NNDS(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_YNN
    static constexpr const int DX_YNN = 30;
    // Get static field: static public System.DateTimeParse/DS DX_YNN
    static System::DateTimeParse::DS _get_DX_YNN();
    // Set static field: static public System.DateTimeParse/DS DX_YNN
    static void _set_DX_YNN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_YMN
    static constexpr const int DX_YMN = 31;
    // Get static field: static public System.DateTimeParse/DS DX_YMN
    static System::DateTimeParse::DS _get_DX_YMN();
    // Set static field: static public System.DateTimeParse/DS DX_YMN
    static void _set_DX_YMN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_YN
    static constexpr const int DX_YN = 32;
    // Get static field: static public System.DateTimeParse/DS DX_YN
    static System::DateTimeParse::DS _get_DX_YN();
    // Set static field: static public System.DateTimeParse/DS DX_YN
    static void _set_DX_YN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_YM
    static constexpr const int DX_YM = 33;
    // Get static field: static public System.DateTimeParse/DS DX_YM
    static System::DateTimeParse::DS _get_DX_YM();
    // Set static field: static public System.DateTimeParse/DS DX_YM
    static void _set_DX_YM(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS TX_N
    static constexpr const int TX_N = 34;
    // Get static field: static public System.DateTimeParse/DS TX_N
    static System::DateTimeParse::DS _get_TX_N();
    // Set static field: static public System.DateTimeParse/DS TX_N
    static void _set_TX_N(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS TX_NN
    static constexpr const int TX_NN = 35;
    // Get static field: static public System.DateTimeParse/DS TX_NN
    static System::DateTimeParse::DS _get_TX_NN();
    // Set static field: static public System.DateTimeParse/DS TX_NN
    static void _set_TX_NN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS TX_NNN
    static constexpr const int TX_NNN = 36;
    // Get static field: static public System.DateTimeParse/DS TX_NNN
    static System::DateTimeParse::DS _get_TX_NNN();
    // Set static field: static public System.DateTimeParse/DS TX_NNN
    static void _set_TX_NNN(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS TX_TS
    static constexpr const int TX_TS = 37;
    // Get static field: static public System.DateTimeParse/DS TX_TS
    static System::DateTimeParse::DS _get_TX_TS();
    // Set static field: static public System.DateTimeParse/DS TX_TS
    static void _set_TX_TS(System::DateTimeParse::DS value);
    // static field const value: static public System.DateTimeParse/DS DX_NNY
    static constexpr const int DX_NNY = 38;
    // Get static field: static public System.DateTimeParse/DS DX_NNY
    static System::DateTimeParse::DS _get_DX_NNY();
    // Set static field: static public System.DateTimeParse/DS DX_NNY
    static void _set_DX_NNY(System::DateTimeParse::DS value);
  }; // System.DateTimeParse/DS
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeParse::DS, "System", "DateTimeParse/DS");
#pragma pack(pop)
