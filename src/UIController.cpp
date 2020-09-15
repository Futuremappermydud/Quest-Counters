#include "../include/Main.hpp"

<<<<<<< HEAD
Color DefaultColor;
Color Changes = {0, 255, 0, 1};

CustomButton SwitchButton;

CustomButton ToggleButton;

CustomUI::TextObject ChangesMadeText;

Il2CppObject* restartImage;
=======
Il2CppObject* PlayButton;

Il2CppObject* SwitchButton;
Il2CppObject* SwitchButtonTMP;

Il2CppObject* ToggleButton;
Il2CppObject* ToggleButtonTMP;
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842

enum UI 
{
	Hit,
	Miss,
	Bomb,
	Accuracy,
	PB,
	SaberSpeed,
	WallsLeft,
	NotesLeft,
	PlayCount,
<<<<<<< HEAD
	LegacyAcc,
} UIType;

int index = 0;
bool setActive(Il2CppObject* object, bool isActive) 
{
    if(object != nullptr) {
        RET_0_UNLESS(RunMethod(object, "SetActive", isActive));
        return true;
    }
    getLogger().debug("Game object is null, not setting active");
    return false;
}

void SetPosition(Il2CppObject* Obj, Vector3 pos)
{
	Il2CppObject* Transform = CRASH_UNLESS(GetPropertyValue(Obj, "transform"));
	SetPropertyValue(Transform, "position", pos);
}

Il2CppObject* setParentTransform(Il2CppObject* Obj, int parentedAmount) {
	Il2CppObject* parentTransform;
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

	return parentTransform;
}

=======
} UIType;

int index = 0;
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842

void SetConfigValue(UI Type, bool Value)
{
	switch (Type)
	{
	case Hit:
		getConfig().config["Hit Notes Counter"].SetBool(Value);
		break;
	case Miss:
		getConfig().config["Missed Notes Counter"].SetBool(Value);
		break;
	case Bomb:
		getConfig().config["Hit Bomb Counter"].SetBool(Value);
		break;
	case Accuracy:
		getConfig().config["Accuracy Counter"].SetBool(Value);
		break;
	case PB:
		getConfig().config["Personal Best Counter"].SetBool(Value);
		break;
	case SaberSpeed:
		getConfig().config["Saber Speed Counter"].SetBool(Value);
		break;
	case WallsLeft:
		getConfig().config["Walls Left / Wall Percentage"].SetBool(Value);
		break;
	case NotesLeft:
		getConfig().config["Notes Left / Note Percentage"].SetBool(Value);
		break;
<<<<<<< HEAD
	case PlayCount:
		getConfig().config["Play Count(er)"].SetBool(Value);
		break;
	case LegacyAcc:
		getConfig().config["Use Legacy Acc Counter"].SetBool(Value);
		break;
	default:
		break;
	}
	getConfig().Write();
	setActive(ChangesMadeText.gameObj, true);
	SetPropertyValue(restartImage, "color", Changes);
=======
		case PlayCount:
		getConfig().config["Play Count(er)"].SetBool(Value);
		break;
	default:
		break;
	}
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842
}

bool GetConfigValue(UI Type)
{
	LoadConfig();
	switch (Type)
	{
	case Hit:
		return getConfig().config["Hit Notes Counter"].GetBool();
		break;
	case Miss:
		return getConfig().config["Missed Notes Counter"].GetBool();
		break;
	case Bomb:
		return getConfig().config["Hit Bomb Counter"].GetBool();
		break;
	case Accuracy:
		return getConfig().config["Accuracy Counter"].GetBool();
		break;
	case PB:
		return getConfig().config["Personal Best Counter"].GetBool();
		break;
	case SaberSpeed:
		return getConfig().config["Saber Speed Counter"].GetBool();
		break;
	case WallsLeft:
		return getConfig().config["Walls Left / Wall Percentage"].GetBool();
		break;
	case NotesLeft:
		return getConfig().config["Notes Left / Note Percentage"].GetBool();
		break;
<<<<<<< HEAD
	case PlayCount:
		return getConfig().config["Play Count(er)"].GetBool();
		break;
	case LegacyAcc:
		return getConfig().config["Use Legacy Acc Counter"].GetBool();
		break;
=======
		case PlayCount:
		return getConfig().config["Play Count(er)"].GetBool();
		break;
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842
	default:
		break;
	}
	
}

std::string GetText(UI Type)
{
	switch (Type)
	{
	case Hit:
		return "Hits";
		break;
	case Miss:
		return "Misses";
		break;
	case Bomb:
		return "Bombs";
		break;
	case Accuracy:
		return "Accuracy";
		break;
	case PB:
		return "PB";
		break;
	case SaberSpeed:
		return "Speed";
		break;
	case WallsLeft:
		return "Walls Left";
		break;
	case NotesLeft:
		return "Notes Left";
		break;
<<<<<<< HEAD
	case PlayCount:
		return "Play Count";
		break;
	case LegacyAcc:
		return "Legacy Acc Counter";
		break;
=======
		case PlayCount:
		return "Play Count";
		break;
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842
	default:
		return "Unknow poggers";
		break;
	}
}

std::string GetEnabledText(UI Type)
{
	return GetConfigValue(Type) ? "Enabled" : "Disabled";
}

void SwitchCounter()
{
	index++;
<<<<<<< HEAD
	if(index == 10) index = 0;
	UIType = (UI)index;
	std::string Text = GetText(UI(index));
    RunMethod(SwitchButton.TMP, "set_text", createcsstr(Text));
	RunMethod(ToggleButton.TMP, "set_text", createcsstr(GetEnabledText(UI(index))));
=======
	if(index == 9) index = 0;
	UIType = (UI)index;
	std::string Text = GetText(UI(index));
    RunMethod(SwitchButtonTMP, "set_text", createcsstr(Text));
	RunMethod(ToggleButtonTMP, "set_text", createcsstr(GetEnabledText(UI(index))));
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842
}

void Toggle()
{
	SetConfigValue(UI(index) , ! GetConfigValue(UI(index)));
<<<<<<< HEAD
	RunMethod(ToggleButton.TMP, "set_text", createcsstr(GetEnabledText(UI(index))));
}

void SettingsUI_Start(Il2CppObject* self)
{
	auto continueButton = CRASH_UNLESS(*GetFieldValue(self, "_continueButton"));
	auto continueButtonObj = CRASH_UNLESS(*GetPropertyValue(continueButton, "gameObject"));

	auto restartButton = CRASH_UNLESS(*GetFieldValue(self, "_restartButton"));
	auto restartButton2 = CRASH_UNLESS(*GetPropertyValue(restartButton, "gameObject"));

	auto continueImage = CRASH_UNLESS(RunMethod(continueButtonObj, "GetComponentInChildren", GetSystemType("UnityEngine.UI", "Image")));
	restartImage = CRASH_UNLESS(RunMethod(restartButton2, "GetComponentInChildren", GetSystemType("UnityEngine.UI", "Image")));

	DefaultColor = CRASH_UNLESS(GetPropertyValue<Color>(continueImage, "color"));

	SetPropertyValue(restartImage, "color", DefaultColor);

	//Init Changes Made Text

	ChangesMadeText.parentTransform = setParentTransform(continueButton, 2);
	
	ChangesMadeText.text = "<i><b>Changes made please restart the song for them to take effect!</b></i>";

	ChangesMadeText.fontSize = 6.0F;
	Color color = {255, 0, 0, 1};

	ChangesMadeText.sizeDelta = {-39, 28};
	ChangesMadeText.color = color;
	ChangesMadeText.create();
	setActive(ChangesMadeText.gameObj, false);

	//Switch
	
    SwitchButton.setParentAndTransform(continueButton, 2);

	SwitchButton.text = GetText((UI)index);

    SwitchButton.fontSize = 4.3f;
    SwitchButton.scale = {1, 1, 1};
    SwitchButton.sizeDelta = {-50, 35, 0};
    SwitchButton.onPress = SwitchCounter;
    SwitchButton.create();
    if(SwitchButton.TMPLocalizer != nullptr) {
        RunMethod("UnityEngine", "Object", "Destroy", SwitchButton.TMPLocalizer);
    }
    RunMethod(SwitchButton.TMP, "set_enableWordWrapping", false);

	//Toggle
	
    ToggleButton.setParentAndTransform(continueButton, 2);

	ToggleButton.text = GetEnabledText((UI)index);

    ToggleButton.fontSize = 4.3f;
    ToggleButton.scale = {1, 1, 1};
    ToggleButton.sizeDelta = {-50, 25, 0};
    ToggleButton.onPress = Toggle;
    ToggleButton.create();
    if(ToggleButton.TMPLocalizer != nullptr) {
        RunMethod("UnityEngine", "Object", "Destroy", ToggleButton.TMPLocalizer);
    }
    	RunMethod(ToggleButton.TMP, "set_enableWordWrapping", false);
}

void SettingsUI_End()
{
	ToggleButton.destroy();
	SwitchButton.destroy();
=======
	RunMethod(ToggleButtonTMP, "set_text", createcsstr(GetEnabledText(UI(index))));
}

void Destroy(Il2CppObject* obj)
{
    RunMethod("UnityEngine", "Object", "Destroy", obj);
}

void SettingsUI_Start(Il2CppObject* self)
{
	//Switch
	Vector3 Pos = {0, 0, 2.0f};
    Vector3 Scale = {1, 1, 1};
	PlayButton = *GetFieldValue(self, "_continueButton");	
	index = 0;
	SwitchButton = *RunMethod("UnityEngine", "Object", "Instantiate", PlayButton);
    auto PlayButtonTransform = CRASH_UNLESS(il2cpp_utils::RunMethod(PlayButton, "get_transform"));
    auto parent = CRASH_UNLESS(il2cpp_utils::RunMethod(PlayButtonTransform, "get_parent"));
    Il2CppObject* OnClick = CRASH_UNLESS(il2cpp_utils::GetPropertyValue(SwitchButton, "onClick"));
	std::string SwitchButtonText = GetText(UI(index));
	auto SwitchButtonTransform = CRASH_UNLESS(il2cpp_utils::RunMethod(SwitchButton, "get_transform"));
	RunMethod(SwitchButtonTransform, "SetParent", parent);
	RunMethod(SwitchButtonTransform, "set_position", Pos);
    RunMethod(SwitchButtonTransform, "set_localScale", Scale);
    Il2CppObject* SwitchButtonObj2 = *RunMethod(SwitchButton, "get_gameObject");
    SwitchButtonTMP = *RunMethod(SwitchButtonObj2, "GetComponentInChildren", GetSystemType("TMPro", "TextMeshProUGUI"));
    auto SwitchButtonTMPLocalizer = *RunMethod(SwitchButtonObj2, "GetComponentInChildren", GetSystemType("Polyglot", "LocalizedTextMeshProUGUI"));
    if (SwitchButtonTMPLocalizer != nullptr)
    {
        Destroy(SwitchButtonTMPLocalizer);
    }
    RunMethod(SwitchButtonTMP, "set_text", createcsstr(SwitchButtonText));
    auto action = MakeAction(il2cpp_functions::class_get_type(il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")), (Il2CppObject*)nullptr, SwitchCounter);
    RunMethod(OnClick, "AddListener", action);
	
	//Toggle

	ToggleButton = *RunMethod("UnityEngine", "Object", "Instantiate", PlayButton);
    Il2CppObject* OnClick2 = CRASH_UNLESS(il2cpp_utils::GetPropertyValue(ToggleButton, "onClick"));
	std::string ToggleButtonText = GetText(UI(index));
	auto ToggleButtonTransform = CRASH_UNLESS(il2cpp_utils::RunMethod(ToggleButton, "get_transform"));
	RunMethod(ToggleButtonTransform, "SetParent", parent);
	RunMethod(ToggleButtonTransform, "set_position", Pos);
    RunMethod(ToggleButtonTransform, "set_localScale", Scale);
    Il2CppObject* ToggleButtonObj2 = *RunMethod(ToggleButton, "get_gameObject");
    ToggleButtonTMP = *RunMethod(ToggleButtonObj2, "GetComponentInChildren", GetSystemType("TMPro", "TextMeshProUGUI"));
    auto ToggleButtonTMPLocalizer = *RunMethod(ToggleButtonObj2, "GetComponentInChildren", GetSystemType("Polyglot", "LocalizedTextMeshProUGUI"));
    if (ToggleButtonTMPLocalizer != nullptr)
    {
        Destroy(ToggleButtonTMPLocalizer);
    }
    RunMethod(ToggleButtonTMP, "set_text", createcsstr(GetEnabledText(UI(index))));
    auto action2 = MakeAction(il2cpp_functions::class_get_type(il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")), (Il2CppObject*)nullptr, Toggle);
    RunMethod(OnClick2, "AddListener", action2);
>>>>>>> 6d6f8c50b9866a354075971468ec4abea89b0842
}