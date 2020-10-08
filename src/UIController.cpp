#include "../include/UI.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"
#include "UnityEngine/Events/UnityAction_1.hpp"
#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/RectOffset.hpp"
using namespace QuestUI::BeatSaberUI;
using namespace UnityEngine::UI;
using namespace UnityEngine;

DEFINE_CLASS(QuestCounters::UIController);

GameObject* Modal;

enum UITypes
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
	LegacyAcc,
	PPCounter,
};

void SetConfigValue(UITypes Type, bool Value)
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
	case PlayCount:
		getConfig().config["Play Count(er)"].SetBool(Value);
		break;
	case LegacyAcc:
		getConfig().config["Use Legacy Acc Counter"].SetBool(Value);
		break;
	case PPCounter:
		getConfig().config["PP Counter"].SetBool(Value);
		break;
	default:
		break;
	}
	getConfig().Write();
}

bool GetConfigValue(UITypes Type)
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
	case PlayCount:
		return getConfig().config["Play Count(er)"].GetBool();
		break;
	case LegacyAcc:
		return getConfig().config["Use Legacy Acc Counter"].GetBool();
		break;
	case PPCounter:
		return getConfig().config["PP Counter"].GetBool();
		break;
	default:
		break;
	}
	
}

std::string GetText(UITypes Type)
{
	switch (Type)
	{
	case Hit:
		return "Hit Counter";
		break;
	case Miss:
		return "Misses Counter";
		break;
	case Bomb:
		return "Bombs Hit Counter";
		break;
	case Accuracy:
		return "Accuracy Counter";
		break;
	case PB:
		return "Personal Best Counter";
		break;
	case SaberSpeed:
		return "Speed Counter";
		break;
	case WallsLeft:
		return "Walls Left Counter";
		break;
	case NotesLeft:
		return "Notes Left Counter";
		break;
	case PlayCount:
		return "Plays Counter";
		break;
	case LegacyAcc:
		return "Legacy Acc Counter";
		break;
	case PPCounter:
		return "PP Counter";
		break;
	default:
		return "Unknow poggers";
		break;
	}
}

void SetHit(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::Hit, value);
}
void SetMiss(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::Miss, value);
}
void SetBomb(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::Bomb, value);
}
void SetAccuracy(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::Accuracy, value);
}
void SetPP(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::PPCounter, value);
}
void SetLegacyAcc(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::LegacyAcc, value);
}
void SetNotesLeft(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::NotesLeft, value);
}
void SetSpeed(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::SaberSpeed, value);
}
void SetWallsLeft(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::WallsLeft, value);
}
void SetPB(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::PB, value);
}
void SetPlayCount(QuestCounters::UIController* vc, bool value)
{
	SetConfigValue(UITypes::PlayCount, value);
}

void UnhideModal()
{
	Modal->SetActive(true);
}
void hideModal()
{
	Modal->SetActive(false);
}

bool Active = false;

void ToggleModal()
{
	Active = !Active;
	Active ? hideModal() : UnhideModal();
}

void QuestCounters::UIController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType){
	if(firstActivation)
	{
		HorizontalLayoutGroup* layout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(get_rectTransform());
		layout->set_spacing(2.5f);
		
		VerticalLayoutGroup* layout1 = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
		VerticalLayoutGroup* layout2 = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
		layout1->set_spacing(3.5f);
		layout2->set_spacing(3.5f);

		layout1->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));
		layout2->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));

		layout1->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));
		layout2->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));

		ContentSizeFitter* layout1Fitter = layout1->get_gameObject()->AddComponent<ContentSizeFitter*>();
		layout1Fitter->set_horizontalFit(ContentSizeFitter::FitMode::PreferredSize);
		layout1Fitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		ContentSizeFitter* layout2Fitter = layout2->get_gameObject()->AddComponent<ContentSizeFitter*>();
		layout2Fitter->set_horizontalFit(ContentSizeFitter::FitMode::PreferredSize);
		layout2Fitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		ContentSizeFitter* layoutFitter = layout->get_gameObject()->AddComponent<ContentSizeFitter*>();
		layoutFitter->set_horizontalFit(ContentSizeFitter::FitMode::Unconstrained);
		layoutFitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		Transform* Parent1 = layout1->get_transform();
		Transform* Parent2 = layout2->get_transform();

		
		auto HitToggle = CreateToggle(Parent1, GetText(UITypes::Hit), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::Hit, toggle); }));
		HitToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::Hit));
		QuestUI::BeatSaberUI::AddHoverHint(HitToggle, "Counts Your Hits!");
		HitToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto MissToggle = CreateToggle(Parent1, GetText(UITypes::Miss), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::Miss, toggle); }));
		MissToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::Miss));
		QuestUI::BeatSaberUI::AddHoverHint(MissToggle, "Shows How Many Notes You Missed!");
		MissToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto BombToggle = CreateToggle(Parent1, GetText(UITypes::Bomb), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::Bomb, toggle); }));
		BombToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::Bomb));
		QuestUI::BeatSaberUI::AddHoverHint(BombToggle, "Shows How Many Bombs You Hit!");
		BombToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto AccuracyToggle = CreateToggle(Parent1, GetText(UITypes::Accuracy), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::Accuracy, toggle); }));
		AccuracyToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::Accuracy));
		QuestUI::BeatSaberUI::AddHoverHint(AccuracyToggle, "Shows Your Average Accuracy Per Hand!");
		AccuracyToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto PBToggle = CreateToggle(Parent1, GetText(UITypes::PB), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::PB, toggle); }));
		PBToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::PB));
		QuestUI::BeatSaberUI::AddHoverHint(PBToggle, "Shows Your Personal Best And How Much Extra/Less You Have!");
		PBToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto SpeedToggle = CreateToggle(Parent1, GetText(UITypes::SaberSpeed), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::SaberSpeed, toggle); }));
		SpeedToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::SaberSpeed));
		QuestUI::BeatSaberUI::AddHoverHint(SpeedToggle, "Shows How Fast Your Sabers Are Going! Note: This May Cause Lag!");
		SpeedToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto WallsLeftToggle = CreateToggle(Parent2, GetText(UITypes::WallsLeft), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::WallsLeft, toggle); }));
		WallsLeftToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::WallsLeft));
		QuestUI::BeatSaberUI::AddHoverHint(WallsLeftToggle, "Shows How Many Walls Are Left!");
		WallsLeftToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto NotesLeftToggle = CreateToggle(Parent2, GetText(UITypes::NotesLeft), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::NotesLeft, toggle); }));
		NotesLeftToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::NotesLeft));
		QuestUI::BeatSaberUI::AddHoverHint(NotesLeftToggle, "Shows How Many Notes Are Left!");
		NotesLeftToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto PlayCountToggle = CreateToggle(Parent2, GetText(UITypes::PlayCount), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::PlayCount, toggle); }));
		PlayCountToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::PlayCount));
		QuestUI::BeatSaberUI::AddHoverHint(PlayCountToggle, "Shows How Many Times You Played This Song!");
		PlayCountToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto PPToggle = CreateToggle(Parent2, GetText(UITypes::PPCounter), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::PPCounter, toggle); }));
		PPToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::PPCounter));
		QuestUI::BeatSaberUI::AddHoverHint(PPToggle, "Shows The Estimated Amount Of PP You will get!");
		PPToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);
		
		auto LegacyAccToggle = CreateToggle(Parent2, GetText(UITypes::LegacyAcc), il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<bool>>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<bool>*)), this, +[](QuestCounters::UIController* view, bool toggle) { SetConfigValue(UITypes::LegacyAcc, toggle); }));
		LegacyAccToggle->GetComponent<UI::Toggle*>()->set_isOn(GetConfigValue(UITypes::LegacyAcc));
		QuestUI::BeatSaberUI::AddHoverHint(LegacyAccToggle, "Enables The Pre 0.2.5 Accuracy Counter!");
		LegacyAccToggle->GetComponent<LayoutElement*>()->set_preferredWidth(50);

		//Modal = CreateModalView(get_transform());

		//auto Button = CreateUIButton(get_transform(), "OKButton", il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction*)), (Il2CppObject*)nullptr, UnhideModal), "Modal", nullptr );
	
		//auto Text = CreateText(Modal->get_transform(), "test", UnityEngine::Vector2(0.0f, 0.0f));
	}
}

void QuestCounters::UIController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType) {

}