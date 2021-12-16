// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: SafeAreaRectChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeAreaRectChecker : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SafeAreaRectChecker::InitData
    class InitData;
    // private System.Single _minAngleX
    // Size: 0x4
    // Offset: 0x18
    float minAngleX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAngleX
    // Size: 0x4
    // Offset: 0x1C
    float maxAngleX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAngleY
    // Size: 0x4
    // Offset: 0x20
    float minAngleY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxAngleY
    // Size: 0x4
    // Offset: 0x24
    float maxAngleY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.GameObject _activeObjectWhenInsideSafeArea
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::GameObject* activeObjectWhenInsideSafeArea;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _activeObjectWhenNotInsideSafeArea
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* activeObjectWhenNotInsideSafeArea;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.RectTransform _rectTransformToCheck
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::RectTransform* rectTransformToCheck;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private readonly UnityEngine.Vector3[] _corners
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::Vector3>* corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // [InjectAttribute] Offset: 0xE44750
    // private readonly MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainCamera*) == 0x8);
    // [InjectAttribute] Offset: 0xE44760
    // private readonly SafeAreaRectChecker/InitData _initData
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SafeAreaRectChecker::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SafeAreaRectChecker::InitData*) == 0x8);
    // Creating value type constructor for type: SafeAreaRectChecker
    SafeAreaRectChecker(float minAngleX_ = {}, float maxAngleX_ = {}, float minAngleY_ = {}, float maxAngleY_ = {}, UnityEngine::GameObject* activeObjectWhenInsideSafeArea_ = {}, UnityEngine::GameObject* activeObjectWhenNotInsideSafeArea_ = {}, UnityEngine::RectTransform* rectTransformToCheck_ = {}, ::Array<UnityEngine::Vector3>* corners_ = {}, GlobalNamespace::MainCamera* mainCamera_ = {}, GlobalNamespace::SafeAreaRectChecker::InitData* initData_ = {}) noexcept : minAngleX{minAngleX_}, maxAngleX{maxAngleX_}, minAngleY{minAngleY_}, maxAngleY{maxAngleY_}, activeObjectWhenInsideSafeArea{activeObjectWhenInsideSafeArea_}, activeObjectWhenNotInsideSafeArea{activeObjectWhenNotInsideSafeArea_}, rectTransformToCheck{rectTransformToCheck_}, corners{corners_}, mainCamera{mainCamera_}, initData{initData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _minAngleX
    float& dyn__minAngleX();
    // Get instance field reference: private System.Single _maxAngleX
    float& dyn__maxAngleX();
    // Get instance field reference: private System.Single _minAngleY
    float& dyn__minAngleY();
    // Get instance field reference: private System.Single _maxAngleY
    float& dyn__maxAngleY();
    // Get instance field reference: private UnityEngine.GameObject _activeObjectWhenInsideSafeArea
    UnityEngine::GameObject*& dyn__activeObjectWhenInsideSafeArea();
    // Get instance field reference: private UnityEngine.GameObject _activeObjectWhenNotInsideSafeArea
    UnityEngine::GameObject*& dyn__activeObjectWhenNotInsideSafeArea();
    // Get instance field reference: private UnityEngine.RectTransform _rectTransformToCheck
    UnityEngine::RectTransform*& dyn__rectTransformToCheck();
    // Get instance field reference: private readonly UnityEngine.Vector3[] _corners
    ::Array<UnityEngine::Vector3>*& dyn__corners();
    // Get instance field reference: private readonly MainCamera _mainCamera
    GlobalNamespace::MainCamera*& dyn__mainCamera();
    // Get instance field reference: private readonly SafeAreaRectChecker/InitData _initData
    GlobalNamespace::SafeAreaRectChecker::InitData*& dyn__initData();
    // public System.Void Start()
    // Offset: 0x1134364
    void Start();
    // protected System.Void Update()
    // Offset: 0x11343D8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1134614
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeAreaRectChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SafeAreaRectChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeAreaRectChecker*, creationType>()));
    }
  }; // SafeAreaRectChecker
  #pragma pack(pop)
  static check_size<sizeof(SafeAreaRectChecker), 80 + sizeof(GlobalNamespace::SafeAreaRectChecker::InitData*)> __GlobalNamespace_SafeAreaRectCheckerSizeCheck;
  static_assert(sizeof(SafeAreaRectChecker) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SafeAreaRectChecker*, "", "SafeAreaRectChecker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SafeAreaRectChecker::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SafeAreaRectChecker::*)()>(&GlobalNamespace::SafeAreaRectChecker::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SafeAreaRectChecker*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SafeAreaRectChecker::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SafeAreaRectChecker::*)()>(&GlobalNamespace::SafeAreaRectChecker::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SafeAreaRectChecker*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SafeAreaRectChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
