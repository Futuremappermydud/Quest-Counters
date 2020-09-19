// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: PhysicsScene
  struct PhysicsScene;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Physics
  class Physics : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector3 get_gravity()
    // Offset: 0x19636F0
    static UnityEngine::Vector3 get_gravity();
    // static public UnityEngine.PhysicsScene get_defaultPhysicsScene()
    // Offset: 0x1963788
    static UnityEngine::PhysicsScene get_defaultPhysicsScene();
    // static public System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2, System.Boolean ignore)
    // Offset: 0x1963810
    static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2, bool ignore);
    // static public System.Void IgnoreCollision(UnityEngine.Collider collider1, UnityEngine.Collider collider2)
    // Offset: 0x1963868
    static void IgnoreCollision(UnityEngine::Collider* collider1, UnityEngine::Collider* collider2);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x19638BC
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1963B08
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
    // Offset: 0x1963BD0
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0x1963C94
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1963D50
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1963FC0
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
    // Offset: 0x1964098
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo)
    // Offset: 0x1964164
    static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964228
    static bool Raycast(UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x19642FC
    static bool Raycast(UnityEngine::Ray ray, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, System.Single maxDistance)
    // Offset: 0x19643CC
    static bool Raycast(UnityEngine::Ray ray, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Ray ray)
    // Offset: 0x1964490
    static bool Raycast(UnityEngine::Ray ray);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964554
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1964638
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance)
    // Offset: 0x19646C0
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance);
    // static public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo)
    // Offset: 0x1964794
    static bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo);
    // static public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964868
    static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1964968
    static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964988
    static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1964A68
    static bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // static private UnityEngine.RaycastHit[] Internal_RaycastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964A70
    static ::Array<UnityEngine::RaycastHit>* Internal_RaycastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964B5C
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1964D08
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance)
    // Offset: 0x1964D10
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0x1964D1C
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964D30
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1964DB4
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance, int layerMask);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray, System.Single maxDistance)
    // Offset: 0x1964E2C
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray, float maxDistance);
    // static public UnityEngine.RaycastHit[] RaycastAll(UnityEngine.Ray ray)
    // Offset: 0x1964EA0
    static ::Array<UnityEngine::RaycastHit>* RaycastAll(UnityEngine::Ray ray);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964F14
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1965104
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results, System.Single maxDistance)
    // Offset: 0x19651D8
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results, float maxDistance);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit[] results)
    // Offset: 0x19652A8
    static int RaycastNonAlloc(UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* results);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1965378
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x1965450
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance, int layerMask);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results, System.Single maxDistance)
    // Offset: 0x1965524
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results, float maxDistance);
    // static public System.Int32 RaycastNonAlloc(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] results)
    // Offset: 0x19655EC
    static int RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* results);
    // static private UnityEngine.RaycastHit[] Query_SphereCastAll(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x19656AC
    static ::Array<UnityEngine::RaycastHit>* Query_SphereCastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x19657C8
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x196593C
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Ray ray, float radius, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public UnityEngine.RaycastHit[] SphereCastAll(UnityEngine.Ray ray, System.Single radius, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x19659D0
    static ::Array<UnityEngine::RaycastHit>* SphereCastAll(UnityEngine::Ray ray, float radius, float maxDistance, int layerMask);
    // static public System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1965A04
    static int OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static public System.Int32 OverlapBoxNonAlloc(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask)
    // Offset: 0x1965AEC
    static int OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask);
    // static private System.Void get_gravity_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x1963748
    static void get_gravity_Injected(UnityEngine::Vector3& ret);
    // static private System.Void get_defaultPhysicsScene_Injected(out UnityEngine.PhysicsScene ret)
    // Offset: 0x19637D0
    static void get_defaultPhysicsScene_Injected(UnityEngine::PhysicsScene& ret);
    // static private UnityEngine.RaycastHit[] Internal_RaycastAll_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1964AE4
    static ::Array<UnityEngine::RaycastHit>* Internal_RaycastAll_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private UnityEngine.RaycastHit[] Query_SphereCastAll_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 origin, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x1965740
    static ::Array<UnityEngine::RaycastHit>* Query_SphereCastAll_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
  }; // UnityEngine.Physics
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Physics*, "UnityEngine", "Physics");
#pragma pack(pop)
