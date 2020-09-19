// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandler
  class DownloadHandler;
  // Forward declaring type: UploadHandler
  class UploadHandler;
  // Forward declaring type: CertificateHandler
  class CertificateHandler;
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UnityWebRequest
  class UnityWebRequest : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod
    struct UnityWebRequestMethod;
    // Nested type: UnityEngine::Networking::UnityWebRequest::UnityWebRequestError
    struct UnityWebRequestError;
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // UnityEngine.Networking.DownloadHandler m_DownloadHandler
    // Offset: 0x18
    UnityEngine::Networking::DownloadHandler* m_DownloadHandler;
    // UnityEngine.Networking.UploadHandler m_UploadHandler
    // Offset: 0x20
    UnityEngine::Networking::UploadHandler* m_UploadHandler;
    // UnityEngine.Networking.CertificateHandler m_CertificateHandler
    // Offset: 0x28
    UnityEngine::Networking::CertificateHandler* m_CertificateHandler;
    // System.Uri m_Uri
    // Offset: 0x30
    System::Uri* m_Uri;
    // private System.Boolean <disposeCertificateHandlerOnDispose>k__BackingField
    // Offset: 0x38
    bool disposeCertificateHandlerOnDispose;
    // private System.Boolean <disposeDownloadHandlerOnDispose>k__BackingField
    // Offset: 0x39
    bool disposeDownloadHandlerOnDispose;
    // private System.Boolean <disposeUploadHandlerOnDispose>k__BackingField
    // Offset: 0x3A
    bool disposeUploadHandlerOnDispose;
    // static private System.String GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError err)
    // Offset: 0x1948524
    static ::Il2CppString* GetWebErrorString(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError err);
    // static System.String GetHTTPStatusString(System.Int64 responseCode)
    // Offset: 0x1948564
    static ::Il2CppString* GetHTTPStatusString(int64_t responseCode);
    // public System.Boolean get_disposeCertificateHandlerOnDispose()
    // Offset: 0x19485A4
    bool get_disposeCertificateHandlerOnDispose();
    // public System.Void set_disposeCertificateHandlerOnDispose(System.Boolean value)
    // Offset: 0x19485AC
    void set_disposeCertificateHandlerOnDispose(bool value);
    // public System.Boolean get_disposeDownloadHandlerOnDispose()
    // Offset: 0x19485B8
    bool get_disposeDownloadHandlerOnDispose();
    // public System.Void set_disposeDownloadHandlerOnDispose(System.Boolean value)
    // Offset: 0x19485C0
    void set_disposeDownloadHandlerOnDispose(bool value);
    // public System.Boolean get_disposeUploadHandlerOnDispose()
    // Offset: 0x19485CC
    bool get_disposeUploadHandlerOnDispose();
    // public System.Void set_disposeUploadHandlerOnDispose(System.Boolean value)
    // Offset: 0x19485D4
    void set_disposeUploadHandlerOnDispose(bool value);
    // static System.IntPtr Create()
    // Offset: 0x19485E0
    static System::IntPtr Create();
    // private System.Void Release()
    // Offset: 0x1948614
    void Release();
    // System.Void InternalDestroy()
    // Offset: 0x1948654
    void InternalDestroy();
    // private System.Void InternalSetDefaults()
    // Offset: 0x194873C
    void InternalSetDefaults();
    // public System.Void .ctor(System.String url, System.String method)
    // Offset: 0x1948750
    static UnityWebRequest* New_ctor(::Il2CppString* url, ::Il2CppString* method);
    // public System.Void .ctor(System.String url, System.String method, UnityEngine.Networking.DownloadHandler downloadHandler, UnityEngine.Networking.UploadHandler uploadHandler)
    // Offset: 0x19489C0
    static UnityWebRequest* New_ctor(::Il2CppString* url, ::Il2CppString* method, UnityEngine::Networking::DownloadHandler* downloadHandler, UnityEngine::Networking::UploadHandler* uploadHandler);
    // private System.Void DisposeHandlers()
    // Offset: 0x1948D38
    void DisposeHandlers();
    // UnityEngine.Networking.UnityWebRequestAsyncOperation BeginWebRequest()
    // Offset: 0x1948EA8
    UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest();
    // public UnityEngine.Networking.UnityWebRequestAsyncOperation SendWebRequest()
    // Offset: 0x1948EE8
    UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest();
    // public System.Void Abort()
    // Offset: 0x19486FC
    void Abort();
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod methodType)
    // Offset: 0x1948F48
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType);
    // System.Void InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod methodType)
    // Offset: 0x1948F98
    void InternalSetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetCustomMethod(System.String customMethodName)
    // Offset: 0x19490FC
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetCustomMethod(::Il2CppString* customMethodName);
    // System.Void InternalSetCustomMethod(System.String customMethodName)
    // Offset: 0x194914C
    void InternalSetCustomMethod(::Il2CppString* customMethodName);
    // public System.Void set_method(System.String value)
    // Offset: 0x194885C
    void set_method(::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError GetError()
    // Offset: 0x1949270
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError GetError();
    // public System.String get_error()
    // Offset: 0x19492B0
    ::Il2CppString* get_error();
    // public System.Void set_url(System.String value)
    // Offset: 0x19487D0
    void set_url(::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetUrl(System.String url)
    // Offset: 0x1949A14
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetUrl(::Il2CppString* url);
    // private System.Void InternalSetUrl(System.String url)
    // Offset: 0x19498F0
    void InternalSetUrl(::Il2CppString* url);
    // public System.Int64 get_responseCode()
    // Offset: 0x1949528
    int64_t get_responseCode();
    // private System.Boolean IsExecuting()
    // Offset: 0x1949A64
    bool IsExecuting();
    // public System.Boolean get_isModifiable()
    // Offset: 0x19490BC
    bool get_isModifiable();
    // public System.Boolean get_isDone()
    // Offset: 0x1949AA4
    bool get_isDone();
    // public System.Boolean get_isNetworkError()
    // Offset: 0x19494A8
    bool get_isNetworkError();
    // public System.Boolean get_isHttpError()
    // Offset: 0x19494E8
    bool get_isHttpError();
    // private System.Single GetDownloadProgress()
    // Offset: 0x1949AE4
    float GetDownloadProgress();
    // public System.Single get_downloadProgress()
    // Offset: 0x1949B24
    float get_downloadProgress();
    // UnityEngine.Networking.UnityWebRequest/UnityWebRequestError InternalSetRequestHeader(System.String name, System.String value)
    // Offset: 0x1949BCC
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError InternalSetRequestHeader(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void SetRequestHeader(System.String name, System.String value)
    // Offset: 0x1949C24
    void SetRequestHeader(::Il2CppString* name, ::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetUploadHandler(UnityEngine.Networking.UploadHandler uh)
    // Offset: 0x1949DAC
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetUploadHandler(UnityEngine::Networking::UploadHandler* uh);
    // public UnityEngine.Networking.UploadHandler get_uploadHandler()
    // Offset: 0x1948E18
    UnityEngine::Networking::UploadHandler* get_uploadHandler();
    // public System.Void set_uploadHandler(UnityEngine.Networking.UploadHandler value)
    // Offset: 0x1948B98
    void set_uploadHandler(UnityEngine::Networking::UploadHandler* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetDownloadHandler(UnityEngine.Networking.DownloadHandler dh)
    // Offset: 0x1949DFC
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetDownloadHandler(UnityEngine::Networking::DownloadHandler* dh);
    // public UnityEngine.Networking.DownloadHandler get_downloadHandler()
    // Offset: 0x1948E10
    UnityEngine::Networking::DownloadHandler* get_downloadHandler();
    // public System.Void set_downloadHandler(UnityEngine.Networking.DownloadHandler value)
    // Offset: 0x1948A68
    void set_downloadHandler(UnityEngine::Networking::DownloadHandler* value);
    // public UnityEngine.Networking.CertificateHandler get_certificateHandler()
    // Offset: 0x1948EA0
    UnityEngine::Networking::CertificateHandler* get_certificateHandler();
    // static public UnityEngine.Networking.UnityWebRequest Get(System.String uri)
    // Offset: 0x1949E4C
    static UnityEngine::Networking::UnityWebRequest* Get(::Il2CppString* uri);
    // static public UnityEngine.Networking.UnityWebRequest Post(System.String uri, System.String postData)
    // Offset: 0x1949EE0
    static UnityEngine::Networking::UnityWebRequest* Post(::Il2CppString* uri, ::Il2CppString* postData);
    // static private System.Void SetupPost(UnityEngine.Networking.UnityWebRequest request, System.String postData)
    // Offset: 0x1949F64
    static void SetupPost(UnityEngine::Networking::UnityWebRequest* request, ::Il2CppString* postData);
    // static public System.String EscapeURL(System.String s)
    // Offset: 0x194A250
    static ::Il2CppString* EscapeURL(::Il2CppString* s);
    // static public System.String EscapeURL(System.String s, System.Text.Encoding e)
    // Offset: 0x194A27C
    static ::Il2CppString* EscapeURL(::Il2CppString* s, System::Text::Encoding* e);
    // protected override System.Void Finalize()
    // Offset: 0x1948CC8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x1948D98
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.Networking.UnityWebRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequest*, "UnityEngine.Networking", "UnityWebRequest");
#pragma pack(pop)