#pragma once

#include "Codegen.hpp"

#include <unordered_set>
#include <map>
#include <list>
#include<tuple> // for tuple 

#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"  
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"  
#include "../extern/BeatSaberQuestCustomUI/shared/customui.hpp"
#include "../extern/beatsaber-hook/shared/utils/utils.h"  
#include "../extern/beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"
#include "../extern/beatsaber-hook/include/modloader.hpp"

using namespace il2cpp_utils;
using namespace CustomUI;
using namespace GlobalNamespace;

static ModInfo modInfo;

Configuration& getConfig();
extern Logger& getLogger();
static struct Config_t {
    bool Missed = true;
    bool Hits = true;
    bool NotesLeft = true;
    bool Acc = true;
    bool Speed = true;
    bool PB = true;
    bool BombHits = true;
    bool WallsLeft = true;
    bool playCount = true;
    bool useLegacyAcc = false;
    bool PPCounter = true;
} Config;


extern void SaveConfig();
extern bool LoadConfig();

//Accuracy
void Accuracy_Start(Il2CppObject* self);

void Accuracy_FinishScore();

void Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore);

void New_Accuracy_Start(Il2CppObject* self);

void New_Accuracy_FinishScore();

void New_Accuracy_RawScore(Il2CppObject* noteCutInfo, int* beforeCutRawScore, int* afterCutRawScore, int* cutDistanceRawScore);

//Notes Left
void NotesLeft_GetNotes(IDifficultyBeatmap* difficultyBeatmap);

void NotesLeft_Start(Il2CppObject* self);

bool NotesLeft_CheckOk_Miss(Il2CppObject* noteController);

void NotesLeft_Update();

//Missed Notes
void Miss_Start(Il2CppObject* self);

void Miss_Update();

//Hit Notes
void Hit_Start(Il2CppObject* self);

void Hit_Update();

//Hit Bombs
void Bomb_Start(Il2CppObject* self);

void Bomb_Update();

//Speed
void Speed_Start(Il2CppObject* self);

void Speed_Update(float LeftSpeed, float RightSpeed);

//Update
extern std::string Ver;
extern std::string LATESTVer;
void Update_Update();
void Update_Start(Il2CppObject* self);

//PB
void PB_Start(Il2CppObject* self);
void PB_Update(float percent);
int calculateMaxScore(int blockCount);
float calculatePercentage(int maxScore, int resultScore);
extern float currentPercentage;
extern int currentScore;
extern int ModdedScore;

//Walls Left
void WallsLeft_Update();

void WallsLeft_GetWalls(IDifficultyBeatmap* difficultyBeatmap);

void WallsLeft_Start(Il2CppObject* self);

//Play Count
extern int Plays;

void PC_Start(Il2CppObject* self);


//Misc Vars
extern bool _360;
extern int Notes;
extern int WallsCount;
extern int oneSaberType;
extern bool oneSaber;
extern std::string version;


//UI
void SettingsUI_Start(Il2CppObject* self);
void SettingsUI_End();


class CustomButton {
    public:
        Il2CppObject* gameObject = nullptr;
        Il2CppObject* TMP = nullptr;
        Il2CppObject* button = nullptr;
        Il2CppObject* buttonTransform = nullptr;
        Il2CppObject* parent = nullptr;
        Il2CppObject* parentTransform = nullptr;
        Il2CppObject* TMPLocalizer = nullptr;
        Il2CppObject* rectTransform = nullptr;
        Vector3 sizeDelta = {0, 0, 0};
        Vector3 scale = {1.0f, 1.0f, 1.0f};
        Vector3 rotation = {0, 0, 0};
        float fontSize = 10.0f;
        bool toggle = true;//Use this when creating toggles
        std::string text = "Custom Button UI";
        function_ptr_t<void> onPress;
 
        bool isCreated = false;
 
        void setParentAndTransform(Il2CppObject* Obj, int parentedAmount) {
            parent = Obj;
 
            if(parentedAmount < 1) {
                getLogger().debug("Parented amount has to be greater than 0, setting to 1...");
                parentedAmount = 1;
            }
            Il2CppObject* transform = *RunMethod(Obj, "get_transform");
            std::vector<Il2CppObject*> parents;
            Il2CppObject* firstParent = *RunMethod(transform, "GetParent");
            parents.push_back(firstParent);
            for(int i = 1; i < parentedAmount; i++) {
                Il2CppObject* otherParent = *RunMethod(parents[i-1], "GetParent");
                parents.push_back(otherParent);
            }
            parentTransform = parents[parents.size()-1];
        }
 
        void setParentTransform(Il2CppObject* Obj, int parentedAmount) {
            if(parentedAmount < 1) {
                getLogger().debug("Parented amount has to be greater than 0, setting to 1...");
                parentedAmount = 1;
            }
            Il2CppObject* transform = *RunMethod(Obj, "get_transform");
            std::vector<Il2CppObject*> parents;
            Il2CppObject* firstParent = *RunMethod(transform, "GetParent");
            parents.push_back(firstParent);
            for(int i = 1; i < parentedAmount; i++) {
                Il2CppObject* otherParent = *RunMethod(parents[i-1], "GetParent");
                parents.push_back(otherParent);
            }
            parentTransform = parents[parents.size()-1];
        }
 
        void create() {
            if(!isCreated && parent != nullptr && parentTransform != nullptr) {
                getLogger().debug("Custom Button: Creating an instance of the parent");
                Il2CppObject* button = CRASH_UNLESS(*il2cpp_utils::RunMethod("UnityEngine", "Object", "Instantiate", parent));
                getLogger().debug("Custom Button: Getting the transform");
                Il2CppObject* buttonTransform = CRASH_UNLESS(*il2cpp_utils::RunMethod(button, "get_transform"));
                getLogger().debug("Custom Button: Setting the parent transform");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "SetParent", parentTransform));
                getLogger().debug("Custom Button: Setting the local scale");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_localScale", scale));
                getLogger().debug("Custom Button: Setting the local position");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_localPosition", sizeDelta));
                getLogger().debug("Custom Button: Setting the euler angles");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_eulerAngles", rotation));
                getLogger().debug("Custom Button: Getting the game object");
                gameObject = CRASH_UNLESS(*il2cpp_utils::RunMethod(button, "get_gameObject"));
                getLogger().debug("Custom Button: Getting the TMProUGUI");
                TMP = CRASH_UNLESS(*il2cpp_utils::RunMethod(gameObject, "GetComponentInChildren", il2cpp_utils::GetSystemType("TMPro", "TextMeshProUGUI")));
                getLogger().debug("Custom Button: Getting the TMP Localizer");
                TMPLocalizer = *RunMethod<Il2CppObject*>(gameObject, "GetComponentInChildren", GetSystemType("Polyglot", "LocalizedTextMeshProUGUI"));
                getLogger().debug("Custom Button: Getting the rect transform");
                rectTransform = CRASH_UNLESS(*RunMethod(TMP, "get_rectTransform"));
                getLogger().debug("Custom Button: Setting the text");
                CRASH_UNLESS(il2cpp_utils::RunMethod(TMP, "set_text", il2cpp_utils::createcsstr(text)));
                getLogger().debug("Custom Button: Setting the font size");
                CRASH_UNLESS(il2cpp_utils::RunMethod(TMP, "set_fontSize", fontSize));
                getLogger().debug("Custom Button: Getting the onClick property");
                Il2CppObject* onClick = CRASH_UNLESS(*il2cpp_utils::GetPropertyValue(button, "onClick"));
                getLogger().debug("Custom Button: Creating the action");
                auto actionToRun = il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")), (Il2CppObject*)nullptr, onPress);
                getLogger().debug("Custom Button: Setting the action to onClick");
                CRASH_UNLESS(il2cpp_utils::RunMethod(onClick, "AddListener", actionToRun));
                isCreated = true;
            } else {
                getLogger().debug("Button was already created or parent/parentTransform was null");
            }
        }
 
        bool setText(std::string newText) {
            if(gameObject != nullptr) {
                RET_0_UNLESS(RunMethod(TMP, "SetText", createcsstr(newText)));
                return true;
            }
            getLogger().debug("Game object is null, not setting text");
            return false;
        }
 
        bool setActive(bool isActive) {
            if(gameObject != nullptr) {
                RET_0_UNLESS(RunMethod(gameObject, "SetActive", isActive));
                return true;
            }
            getLogger().debug("Game object is null, not setting active");
            return false;
        }
 
        void setPos(Vector3 pos) {//Doesnt work yet, work on it more later
            il2cpp_utils::RunMethod(buttonTransform, "set_localPosition", pos);
        }
 
        void destroy() {
            if(gameObject != nullptr) {
                RunMethod("UnityEngine", "Object", "Destroy", gameObject);
                gameObject = nullptr;
                TMP = nullptr;
                parentTransform = nullptr;
                parent = nullptr;
                TMPLocalizer = nullptr;
                isCreated = false;
            } else {
                getLogger().debug("Button was already destroyed");
            }
        }
};

extern CustomButton SwitchButton;

extern CustomButton ToggleButton;

void PPDownloader_CompletedWebRequest();

void PPDownloader_WebRequest();

void PP_Init(IDifficultyBeatmap* diff, std::string SongID, GameplayModifiers* Mods);

void PP_Start(Il2CppObject *self);

void PP_Update(float Percentage);

static std::vector<std::string> split(std::string const &str, const char delim)
{
    std::vector<std::string> out;
	size_t start;
	size_t end = 0;

	while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
	{
		end = str.find(delim, start);
		out.push_back(str.substr(start, end - start));
	}
    return out;
}

static std::string GetHash(std::string levelId)
{
    getLogger().debug(levelId);
    if (levelId.find("custom_level_"))
    {
        auto splits = split(levelId, '_');
        return splits[2];
    }
    getLogger().debug(levelId);
    return levelId;
}