// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
  // Forward declaring type: TMP_StyleSheet
  class TMP_StyleSheet;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Settings
  class TMP_Settings : public UnityEngine::ScriptableObject {
    public:
    // Nested type: TMPro::TMP_Settings::LineBreakingTable
    class LineBreakingTable;
    // private System.Boolean m_enableWordWrapping
    // Offset: 0x18
    bool m_enableWordWrapping;
    // private System.Boolean m_enableKerning
    // Offset: 0x19
    bool m_enableKerning;
    // private System.Boolean m_enableExtraPadding
    // Offset: 0x1A
    bool m_enableExtraPadding;
    // private System.Boolean m_enableTintAllSprites
    // Offset: 0x1B
    bool m_enableTintAllSprites;
    // private System.Boolean m_enableParseEscapeCharacters
    // Offset: 0x1C
    bool m_enableParseEscapeCharacters;
    // private System.Boolean m_EnableRaycastTarget
    // Offset: 0x1D
    bool m_EnableRaycastTarget;
    // private System.Boolean m_GetFontFeaturesAtRuntime
    // Offset: 0x1E
    bool m_GetFontFeaturesAtRuntime;
    // private System.Int32 m_missingGlyphCharacter
    // Offset: 0x20
    int m_missingGlyphCharacter;
    // private System.Boolean m_warningsDisabled
    // Offset: 0x24
    bool m_warningsDisabled;
    // private TMPro.TMP_FontAsset m_defaultFontAsset
    // Offset: 0x28
    TMPro::TMP_FontAsset* m_defaultFontAsset;
    // private System.String m_defaultFontAssetPath
    // Offset: 0x30
    ::Il2CppString* m_defaultFontAssetPath;
    // private System.Single m_defaultFontSize
    // Offset: 0x38
    float m_defaultFontSize;
    // private System.Single m_defaultAutoSizeMinRatio
    // Offset: 0x3C
    float m_defaultAutoSizeMinRatio;
    // private System.Single m_defaultAutoSizeMaxRatio
    // Offset: 0x40
    float m_defaultAutoSizeMaxRatio;
    // private UnityEngine.Vector2 m_defaultTextMeshProTextContainerSize
    // Offset: 0x44
    UnityEngine::Vector2 m_defaultTextMeshProTextContainerSize;
    // private UnityEngine.Vector2 m_defaultTextMeshProUITextContainerSize
    // Offset: 0x4C
    UnityEngine::Vector2 m_defaultTextMeshProUITextContainerSize;
    // private System.Boolean m_autoSizeTextContainer
    // Offset: 0x54
    bool m_autoSizeTextContainer;
    // private System.Collections.Generic.List`1<TMPro.TMP_FontAsset> m_fallbackFontAssets
    // Offset: 0x58
    System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* m_fallbackFontAssets;
    // private System.Boolean m_matchMaterialPreset
    // Offset: 0x60
    bool m_matchMaterialPreset;
    // private TMPro.TMP_SpriteAsset m_defaultSpriteAsset
    // Offset: 0x68
    TMPro::TMP_SpriteAsset* m_defaultSpriteAsset;
    // private System.String m_defaultSpriteAssetPath
    // Offset: 0x70
    ::Il2CppString* m_defaultSpriteAssetPath;
    // private System.String m_defaultColorGradientPresetsPath
    // Offset: 0x78
    ::Il2CppString* m_defaultColorGradientPresetsPath;
    // private System.Boolean m_enableEmojiSupport
    // Offset: 0x80
    bool m_enableEmojiSupport;
    // private TMPro.TMP_StyleSheet m_defaultStyleSheet
    // Offset: 0x88
    TMPro::TMP_StyleSheet* m_defaultStyleSheet;
    // private UnityEngine.TextAsset m_leadingCharacters
    // Offset: 0x90
    UnityEngine::TextAsset* m_leadingCharacters;
    // private UnityEngine.TextAsset m_followingCharacters
    // Offset: 0x98
    UnityEngine::TextAsset* m_followingCharacters;
    // private TMPro.TMP_Settings/LineBreakingTable m_linebreakingRules
    // Offset: 0xA0
    TMPro::TMP_Settings::LineBreakingTable* m_linebreakingRules;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private TMPro.TMP_Settings s_Instance
    static TMPro::TMP_Settings* _get_s_Instance();
    // Set static field: static private TMPro.TMP_Settings s_Instance
    static void _set_s_Instance(TMPro::TMP_Settings* value);
    // static public System.String get_version()
    // Offset: 0xBB2AB4
    static ::Il2CppString* get_version();
    // static public System.Boolean get_enableWordWrapping()
    // Offset: 0xBB2AFC
    static bool get_enableWordWrapping();
    // static public System.Boolean get_enableKerning()
    // Offset: 0xBB2BE0
    static bool get_enableKerning();
    // static public System.Boolean get_enableExtraPadding()
    // Offset: 0xBB2C00
    static bool get_enableExtraPadding();
    // static public System.Boolean get_enableTintAllSprites()
    // Offset: 0xBB2C20
    static bool get_enableTintAllSprites();
    // static public System.Boolean get_enableParseEscapeCharacters()
    // Offset: 0xBB2C40
    static bool get_enableParseEscapeCharacters();
    // static public System.Boolean get_enableRaycastTarget()
    // Offset: 0xBB2C60
    static bool get_enableRaycastTarget();
    // static public System.Boolean get_getFontFeaturesAtRuntime()
    // Offset: 0xBB2C80
    static bool get_getFontFeaturesAtRuntime();
    // static public System.Int32 get_missingGlyphCharacter()
    // Offset: 0xBB2CA0
    static int get_missingGlyphCharacter();
    // static public System.Void set_missingGlyphCharacter(System.Int32 value)
    // Offset: 0xBB2CC0
    static void set_missingGlyphCharacter(int value);
    // static public System.Boolean get_warningsDisabled()
    // Offset: 0xBB2CEC
    static bool get_warningsDisabled();
    // static public TMPro.TMP_FontAsset get_defaultFontAsset()
    // Offset: 0xBB2D0C
    static TMPro::TMP_FontAsset* get_defaultFontAsset();
    // static public System.String get_defaultFontAssetPath()
    // Offset: 0xBB2D2C
    static ::Il2CppString* get_defaultFontAssetPath();
    // static public System.Single get_defaultFontSize()
    // Offset: 0xBB2D4C
    static float get_defaultFontSize();
    // static public System.Single get_defaultTextAutoSizingMinRatio()
    // Offset: 0xBB2D6C
    static float get_defaultTextAutoSizingMinRatio();
    // static public System.Single get_defaultTextAutoSizingMaxRatio()
    // Offset: 0xBB2D8C
    static float get_defaultTextAutoSizingMaxRatio();
    // static public UnityEngine.Vector2 get_defaultTextMeshProTextContainerSize()
    // Offset: 0xBB2DAC
    static UnityEngine::Vector2 get_defaultTextMeshProTextContainerSize();
    // static public UnityEngine.Vector2 get_defaultTextMeshProUITextContainerSize()
    // Offset: 0xBB2DCC
    static UnityEngine::Vector2 get_defaultTextMeshProUITextContainerSize();
    // static public System.Boolean get_autoSizeTextContainer()
    // Offset: 0xBB2DEC
    static bool get_autoSizeTextContainer();
    // static public System.Collections.Generic.List`1<TMPro.TMP_FontAsset> get_fallbackFontAssets()
    // Offset: 0xBB2E0C
    static System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* get_fallbackFontAssets();
    // static public System.Boolean get_matchMaterialPreset()
    // Offset: 0xBB2E2C
    static bool get_matchMaterialPreset();
    // static public TMPro.TMP_SpriteAsset get_defaultSpriteAsset()
    // Offset: 0xBB2E4C
    static TMPro::TMP_SpriteAsset* get_defaultSpriteAsset();
    // static public System.String get_defaultSpriteAssetPath()
    // Offset: 0xBB2E6C
    static ::Il2CppString* get_defaultSpriteAssetPath();
    // static public System.String get_defaultColorGradientPresetsPath()
    // Offset: 0xBB2E8C
    static ::Il2CppString* get_defaultColorGradientPresetsPath();
    // static public System.Boolean get_enableEmojiSupport()
    // Offset: 0xBB2EAC
    static bool get_enableEmojiSupport();
    // static public System.Void set_enableEmojiSupport(System.Boolean value)
    // Offset: 0xBB2ECC
    static void set_enableEmojiSupport(bool value);
    // static public TMPro.TMP_StyleSheet get_defaultStyleSheet()
    // Offset: 0xBB2EFC
    static TMPro::TMP_StyleSheet* get_defaultStyleSheet();
    // static public UnityEngine.TextAsset get_leadingCharacters()
    // Offset: 0xBB2F1C
    static UnityEngine::TextAsset* get_leadingCharacters();
    // static public UnityEngine.TextAsset get_followingCharacters()
    // Offset: 0xBB2F3C
    static UnityEngine::TextAsset* get_followingCharacters();
    // static public TMPro.TMP_Settings/LineBreakingTable get_linebreakingRules()
    // Offset: 0xBB2F5C
    static TMPro::TMP_Settings::LineBreakingTable* get_linebreakingRules();
    // static public TMPro.TMP_Settings get_instance()
    // Offset: 0xBB2B1C
    static TMPro::TMP_Settings* get_instance();
    // static public TMPro.TMP_Settings LoadDefaultSettings()
    // Offset: 0xBB30D0
    static TMPro::TMP_Settings* LoadDefaultSettings();
    // static public TMPro.TMP_Settings GetSettings()
    // Offset: 0xBB31CC
    static TMPro::TMP_Settings* GetSettings();
    // static public TMPro.TMP_FontAsset GetFontAsset()
    // Offset: 0xBB3258
    static TMPro::TMP_FontAsset* GetFontAsset();
    // static public TMPro.TMP_SpriteAsset GetSpriteAsset()
    // Offset: 0xBB32EC
    static TMPro::TMP_SpriteAsset* GetSpriteAsset();
    // static public TMPro.TMP_StyleSheet GetStyleSheet()
    // Offset: 0xBB3380
    static TMPro::TMP_StyleSheet* GetStyleSheet();
    // static public System.Void LoadLinebreakingRules()
    // Offset: 0xBB2F90
    static void LoadLinebreakingRules();
    // static private System.Collections.Generic.Dictionary`2<System.Int32,System.Char> GetCharacters(UnityEngine.TextAsset file)
    // Offset: 0xBB341C
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppChar>* GetCharacters(UnityEngine::TextAsset* file);
    // public System.Void .ctor()
    // Offset: 0xBB352C
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_Settings* New_ctor();
  }; // TMPro.TMP_Settings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Settings*, "TMPro", "TMP_Settings");
#pragma pack(pop)
