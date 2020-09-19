// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.FontUpdateTracker
  class FontUpdateTracker : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>> m_Tracked
    static System::Collections::Generic::Dictionary_2<UnityEngine::Font*, System::Collections::Generic::HashSet_1<UnityEngine::UI::Text*>*>* _get_m_Tracked();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>> m_Tracked
    static void _set_m_Tracked(System::Collections::Generic::Dictionary_2<UnityEngine::Font*, System::Collections::Generic::HashSet_1<UnityEngine::UI::Text*>*>* value);
    // static public System.Void TrackText(UnityEngine.UI.Text t)
    // Offset: 0x1169CC8
    static void TrackText(UnityEngine::UI::Text* t);
    // static private System.Void RebuildForFont(UnityEngine.Font f)
    // Offset: 0x1169ED4
    static void RebuildForFont(UnityEngine::Font* f);
    // static public System.Void UntrackText(UnityEngine.UI.Text t)
    // Offset: 0x116A018
    static void UntrackText(UnityEngine::UI::Text* t);
    // static private System.Void .cctor()
    // Offset: 0x116A1E8
    static void _cctor();
  }; // UnityEngine.UI.FontUpdateTracker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontUpdateTracker*, "UnityEngine.UI", "FontUpdateTracker");
#pragma pack(pop)
