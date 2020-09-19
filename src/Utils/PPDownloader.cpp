#include "PPUtils.hpp"

std::map<std::string, RawPPData> PPData;

class PPDownloader
{
	private:
	const std::string URI_PREFIX = "https://cdn.pulselane.dev/";
	const std::string FILE_NAME = "raw_pp.json";

	Il2CppObject* WebRequestAPI = nullptr;
	Il2CppObject* DownloadHandler = nullptr;
	Il2CppObject* WebRequestAsyncOp = nullptr;
	Il2CppString* JsonStr = nullptr; 
 
	public:

	void PPDownloader_CompletedWebRequest()
	{
		DownloadHandler = RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "get_downloadHandler"));
		JsonStr = RET_V_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(DownloadHandler, "GetText"));
		std::string requestCompleteText = to_utf8(csstrtostr(JsonStr));

		rapidjson::Document d;
		d.Parse(requestCompleteText);
		
		using namespace refltool;

		from_rapidjson(d, PPData);
	}
	void PPDownloader_WebRequest() 
	{
		Il2CppString *urlPath = il2cpp_utils::createcsstr(URI_PREFIX + FILE_NAME);
		WebRequestAPI = RET_V_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Networking", "UnityWebRequest", "Get", urlPath));
		RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "SetRequestHeader", il2cpp_utils::createcsstr("User-Agent"), il2cpp_utils::createcsstr("Quest Counters/PPCounter" + modInfo.version)));
		WebRequestAsyncOp = RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAPI, "SendWebRequest"));
		auto* methodInfo = RET_V_UNLESS(il2cpp_utils::FindMethodUnsafe(WebRequestAsyncOp, "add_completed", 1));
		auto action = RET_V_UNLESS(il2cpp_utils::MakeAction(methodInfo, 0, nullptr, PPDownloader_CompletedWebRequest));
		RET_V_UNLESS(il2cpp_utils::RunMethod(WebRequestAsyncOp, methodInfo, action));
	}

	
};
