#include "include/Main.hpp"
#include "../extern/BeatSaberQuestCustomUI-master/shared/customui.hpp"

std::string URL = "https://raw.githubusercontent.com/Futuremappermydud/Quest-Counters/master/ASSETS/ver.txt";

Il2CppObject* WebRequestAPI = nullptr;
Il2CppObject* DownloadHandler = nullptr;
Il2CppObject* WebRequestAsyncOp = nullptr;
Il2CppString* JsonStr = nullptr; 

CustomUI::TextObject VersionText;

std::string text = "<size=6><mspace=3.5><align=\"center\">NO INTERNET</align></mspace></size><br><color=#88202088>Error</color>";

void CompletedWebRequest()
{
	DownloadHandler = RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "get_downloadHandler"));
	JsonStr = RET_V_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(DownloadHandler, "GetText"));
	std::string requestCompleteText = to_utf8(csstrtostr(JsonStr));
	text = requestCompleteText;
    if(text.empty())
    {
        text = "No Internet!";
    }
}

void WebRequest() {
	Il2CppString *urlPath = il2cpp_utils::createcsstr("https://raw.githubusercontent.com/Futuremappermydud/Quest-Counters/master/ASSETS/ver.txt");
	WebRequestAPI = RET_V_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Networking", "UnityWebRequest", "Get", urlPath));
	RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "SetRequestHeader", il2cpp_utils::createcsstr("User-Agent"), il2cpp_utils::createcsstr("Quest Counters/" + modInfo.version)));
	WebRequestAsyncOp = RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "SendWebRequest"));
	auto* methodInfo = RET_V_UNLESS(il2cpp_utils::FindMethodUnsafe(WebRequestAsyncOp, "add_completed", 1));
	auto action = RET_V_UNLESS(il2cpp_utils::MakeAction(methodInfo, 0, nullptr, CompletedWebRequest));
	RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAsyncOp, methodInfo, action));
}
void Update_Update()
{
	WebRequest();
}

void Update_Start(Il2CppObject* self)
{
	//Destroy Object if the Object isnt just now created
    if (VersionText.gameObj != nullptr)
    {
        RunMethod(GetClassFromName("UnityEngine", "Object"), "Destroy", VersionText.gameObj);
    }
    //Get Campaign Button Transform
    Il2CppObject* CampaignB = CRASH_UNLESS(GetFieldValue(self, "_campaignButton"));
    Il2CppObject* CampaignBTransform = CRASH_UNLESS(RunMethod<Il2CppObject*>(CampaignB, "get_transform"));
    //Set Values
    VersionText.fontSize = 5.0F;
    VersionText.sizeDelta = {0, -60 };
    VersionText.parentTransform = CampaignBTransform;
    //Set Text
    VersionText.text = "<color=#FFD700>Quest Counters</color>\nYour Version: " + std::string(version) + "\nRecent Version: " + text;
    //Create
    CRASH_UNLESS(VersionText.create());
}