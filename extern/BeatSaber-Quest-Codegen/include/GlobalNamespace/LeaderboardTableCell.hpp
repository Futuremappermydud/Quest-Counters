// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardTableCell
  class LeaderboardTableCell : public HMUI::TableCell {
    public:
    // private TMPro.TextMeshProUGUI _rankText
    // Offset: 0x50
    TMPro::TextMeshProUGUI* rankText;
    // private TMPro.TextMeshProUGUI _playerNameText
    // Offset: 0x58
    TMPro::TextMeshProUGUI* playerNameText;
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x60
    TMPro::TextMeshProUGUI* scoreText;
    // private TMPro.TextMeshProUGUI _fullComboText
    // Offset: 0x68
    TMPro::TextMeshProUGUI* fullComboText;
    // private UnityEngine.Color _normalColor
    // Offset: 0x70
    UnityEngine::Color normalColor;
    // private TMPro.TMP_FontAsset _normalFont
    // Offset: 0x80
    TMPro::TMP_FontAsset* normalFont;
    // private UnityEngine.Color _specialScoreColor
    // Offset: 0x88
    UnityEngine::Color specialScoreColor;
    // private TMPro.TMP_FontAsset _specialScoreFont
    // Offset: 0x98
    TMPro::TMP_FontAsset* specialScoreFont;
    // private UnityEngine.UI.Image _separatorImage
    // Offset: 0xA0
    UnityEngine::UI::Image* separatorImage;
    // public System.Void set_rank(System.Int32 value)
    // Offset: 0xB47B08
    void set_rank(int value);
    // public System.Void set_playerName(System.String value)
    // Offset: 0xB47B4C
    void set_playerName(::Il2CppString* value);
    // public System.Void set_score(System.Int32 value)
    // Offset: 0xB47B68
    void set_score(int value);
    // public System.Void set_showSeparator(System.Boolean value)
    // Offset: 0xB47C0C
    void set_showSeparator(bool value);
    // public System.Void set_showFullCombo(System.Boolean value)
    // Offset: 0xB47C2C
    void set_showFullCombo(bool value);
    // public System.Void set_specialScore(System.Boolean value)
    // Offset: 0xB47C4C
    void set_specialScore(bool value);
    // public System.Void .ctor()
    // Offset: 0xB47DAC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardTableCell* New_ctor();
  }; // LeaderboardTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableCell*, "", "LeaderboardTableCell");
#pragma pack(pop)