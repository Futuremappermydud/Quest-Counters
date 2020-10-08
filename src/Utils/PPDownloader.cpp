#include "PPUtils.hpp"

std::map<std::string, RawPPData> PPData;

RawPPData DeserializeIntoRawPPData(rapidjson::Value& obj)
{
	RawPPData data;

	data._Easy_SoloStandard = 0.0f;
	data._Normal_SoloStandard = 0.0f;
	data._Hard_SoloStandard = 0.0f;
	data._Expert_SoloStandard = 0.0f;
	data._ExpertPlus_SoloStandard = 0.0f;

	if(obj.HasMember("_Easy_SoloStandard"))
		data._Easy_SoloStandard = obj["_Easy_SoloStandard"].GetFloat();

	if(obj.HasMember("_Normal_SoloStandard"))
		data._Normal_SoloStandard = obj["_Normal_SoloStandard"].GetFloat();
	
	if(obj.HasMember("_Hard_SoloStandard"))
		data._Hard_SoloStandard = obj["_Hard_SoloStandard"].GetFloat();
		
	if(obj.HasMember("_Expert_SoloStandard"))
		data._Expert_SoloStandard = obj["_Expert_SoloStandard"].GetFloat();
	
	if(obj.HasMember("_ExpertPlus_SoloStandard"))
		data._ExpertPlus_SoloStandard = obj["_ExpertPlus_SoloStandard"].GetFloat();

	return data;
}

const std::string URI_PREFIX = "https://cdn.pulselane.dev/";
const std::string FILE_NAME = "raw_pp.json";

Il2CppObject* PP_WebRequestAPI;
Il2CppObject* PP_DownloadHandler;
Il2CppObject* PP_WebRequestAsyncOp;
Il2CppString* PP_JsonStr;

void PPDownloader_CompletedWebRequest()
{
	getLogger().debug("PP DOWNLOADED");
	PP_DownloadHandler = RET_V_UNLESS(il2cpp_utils::RunMethod(PP_WebRequestAPI, "get_downloadHandler"));
	PP_JsonStr = RET_V_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(PP_DownloadHandler, "GetText"));
	std::string requestCompleteText = to_utf8(csstrtostr(PP_JsonStr));

	rapidjson::Document d;
	d.Parse(requestCompleteText);

	//VSCode doesnt like rapidjson so you can ignore the "errors"
	for (auto itr = d.MemberBegin(); itr != d.MemberEnd(); ++itr)
	{
		getLogger().debug(itr->name.GetString() + std::string(" is being initialized"));
		RawPPData data = DeserializeIntoRawPPData(itr->value);
		getLogger().debug(itr->name.GetString() + std::to_string(data._Easy_SoloStandard));
		getLogger().debug(itr->name.GetString() + std::to_string(data._Normal_SoloStandard));
		getLogger().debug(itr->name.GetString() + std::to_string(data._Hard_SoloStandard));
		getLogger().debug(itr->name.GetString() + std::to_string(data._Expert_SoloStandard));
		getLogger().debug(itr->name.GetString() + std::to_string(data._ExpertPlus_SoloStandard));
		PPData.insert({itr->name.GetString(), data});
	}
	getLogger().debug(std::to_string(PPData.size()));	
	PPData_Init(PPData);
}
void PPDownloader_WebRequest() 
{
	getLogger().debug("DOWNLOADING PP");
	Il2CppString *urlPath = il2cpp_utils::createcsstr(URI_PREFIX + FILE_NAME);
	PP_WebRequestAPI = RET_V_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Networking", "UnityWebRequest", "Get", urlPath));
	RET_V_UNLESS(il2cpp_utils::RunMethod(PP_WebRequestAPI, "SetRequestHeader", il2cpp_utils::createcsstr("User-Agent"), il2cpp_utils::createcsstr("Quest Counters/PPCounter" + modInfo.version)));
	PP_WebRequestAsyncOp = RET_V_UNLESS(il2cpp_utils::RunMethod(PP_WebRequestAPI, "SendWebRequest"));
	auto* methodInfo = RET_V_UNLESS(il2cpp_utils::FindMethodUnsafe(PP_WebRequestAsyncOp, "add_completed", 1));
	auto action = RET_V_UNLESS(il2cpp_utils::MakeAction(methodInfo, 0, nullptr, PPDownloader_CompletedWebRequest));
	RET_V_UNLESS(il2cpp_utils::RunMethod(PP_WebRequestAsyncOp, methodInfo, action));
}
