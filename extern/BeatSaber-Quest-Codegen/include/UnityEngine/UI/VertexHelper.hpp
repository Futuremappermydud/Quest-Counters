// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.UIVertex
#include "UnityEngine/UIVertex.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.VertexHelper
  class VertexHelper : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Positions
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Positions;
    // private System.Collections.Generic.List`1<UnityEngine.Color32> m_Colors
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Color32>* m_Colors;
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv0S
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv0S;
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv1S
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv1S;
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv2S
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv2S;
    // private System.Collections.Generic.List`1<UnityEngine.Vector2> m_Uv3S
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::Vector2>* m_Uv3S;
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> m_Normals
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Vector3>* m_Normals;
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> m_Tangents
    // Offset: 0x48
    System::Collections::Generic::List_1<UnityEngine::Vector4>* m_Tangents;
    // private System.Collections.Generic.List`1<System.Int32> m_Indices
    // Offset: 0x50
    System::Collections::Generic::List_1<int>* m_Indices;
    // private System.Boolean m_ListsInitalized
    // Offset: 0x58
    bool m_ListsInitalized;
    // Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static UnityEngine::Vector4 _get_s_DefaultTangent();
    // Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
    static void _set_s_DefaultTangent(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static UnityEngine::Vector3 _get_s_DefaultNormal();
    // Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
    static void _set_s_DefaultNormal(UnityEngine::Vector3 value);
    // public System.Void .ctor(UnityEngine.Mesh m)
    // Offset: 0x19379A0
    static VertexHelper* New_ctor(UnityEngine::Mesh* m);
    // private System.Void InitializeListIfRequired()
    // Offset: 0x1937B7C
    void InitializeListIfRequired();
    // public System.Void Clear()
    // Offset: 0x19364D8
    void Clear();
    // public System.Int32 get_currentVertCount()
    // Offset: 0x1937FEC
    int get_currentVertCount();
    // public System.Int32 get_currentIndexCount()
    // Offset: 0x1938040
    int get_currentIndexCount();
    // public System.Void PopulateUIVertex(ref UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x1938094
    void PopulateUIVertex(UnityEngine::UIVertex& vertex, int i);
    // public System.Void SetUIVertex(UnityEngine.UIVertex vertex, System.Int32 i)
    // Offset: 0x1938274
    void SetUIVertex(UnityEngine::UIVertex vertex, int i);
    // public System.Void FillMesh(UnityEngine.Mesh mesh)
    // Offset: 0x19383C0
    void FillMesh(UnityEngine::Mesh* mesh);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector2 uv2, UnityEngine.Vector2 uv3, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x1938524
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector2 uv2, UnityEngine::Vector2 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0, UnityEngine.Vector2 uv1, UnityEngine.Vector3 normal, UnityEngine.Vector4 tangent)
    // Offset: 0x19386E4
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent);
    // public System.Void AddVert(UnityEngine.Vector3 position, UnityEngine.Color32 color, UnityEngine.Vector2 uv0)
    // Offset: 0x19387F0
    void AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0);
    // public System.Void AddVert(UnityEngine.UIVertex v)
    // Offset: 0x1938920
    void AddVert(UnityEngine::UIVertex v);
    // public System.Void AddTriangle(System.Int32 idx0, System.Int32 idx1, System.Int32 idx2)
    // Offset: 0x1938990
    void AddTriangle(int idx0, int idx1, int idx2);
    // public System.Void AddUIVertexQuad(UnityEngine.UIVertex[] verts)
    // Offset: 0x19365F0
    void AddUIVertexQuad(::Array<UnityEngine::UIVertex>* verts);
    // public System.Void AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x1938A38
    void AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<int>* indices);
    // public System.Void AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> verts)
    // Offset: 0x1938AEC
    void AddUIVertexTriangleStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts);
    // public System.Void GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex> stream)
    // Offset: 0x1938B40
    void GetUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* stream);
    // static private System.Void .cctor()
    // Offset: 0x1938B94
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1937998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VertexHelper* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x1937D78
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.UI.VertexHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::VertexHelper*, "UnityEngine.UI", "VertexHelper");
#pragma pack(pop)