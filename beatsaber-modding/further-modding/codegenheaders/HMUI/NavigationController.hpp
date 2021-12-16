// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ContainerViewController
#include "HMUI/ContainerViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: ViewController because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x94
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.NavigationController
  // [TokenAttribute] Offset: FFFFFFFF
  class NavigationController : public HMUI::ContainerViewController {
    public:
    // Nested type: HMUI::NavigationController::Orientation
    struct Orientation;
    // Nested type: HMUI::NavigationController::Alignment
    struct Alignment;
    // Nested type: HMUI::NavigationController::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: HMUI::NavigationController::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.NavigationController/HMUI.Orientation
    // [TokenAttribute] Offset: FFFFFFFF
    struct Orientation/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Orientation
      constexpr Orientation(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.NavigationController/HMUI.Orientation Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public HMUI.NavigationController/HMUI.Orientation Horizontal
      static HMUI::NavigationController::Orientation _get_Horizontal();
      // Set static field: static public HMUI.NavigationController/HMUI.Orientation Horizontal
      static void _set_Horizontal(HMUI::NavigationController::Orientation value);
      // static field const value: static public HMUI.NavigationController/HMUI.Orientation Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public HMUI.NavigationController/HMUI.Orientation Vertical
      static HMUI::NavigationController::Orientation _get_Vertical();
      // Set static field: static public HMUI.NavigationController/HMUI.Orientation Vertical
      static void _set_Vertical(HMUI::NavigationController::Orientation value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HMUI.NavigationController/HMUI.Orientation
    #pragma pack(pop)
    static check_size<sizeof(NavigationController::Orientation), 0 + sizeof(int)> __HMUI_NavigationController_OrientationSizeCheck;
    static_assert(sizeof(NavigationController::Orientation) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: HMUI.NavigationController/HMUI.Alignment
    // [TokenAttribute] Offset: FFFFFFFF
    struct Alignment/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Alignment
      constexpr Alignment(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.NavigationController/HMUI.Alignment Beginning
      static constexpr const int Beginning = 0;
      // Get static field: static public HMUI.NavigationController/HMUI.Alignment Beginning
      static HMUI::NavigationController::Alignment _get_Beginning();
      // Set static field: static public HMUI.NavigationController/HMUI.Alignment Beginning
      static void _set_Beginning(HMUI::NavigationController::Alignment value);
      // static field const value: static public HMUI.NavigationController/HMUI.Alignment Middle
      static constexpr const int Middle = 1;
      // Get static field: static public HMUI.NavigationController/HMUI.Alignment Middle
      static HMUI::NavigationController::Alignment _get_Middle();
      // Set static field: static public HMUI.NavigationController/HMUI.Alignment Middle
      static void _set_Middle(HMUI::NavigationController::Alignment value);
      // static field const value: static public HMUI.NavigationController/HMUI.Alignment End
      static constexpr const int End = 2;
      // Get static field: static public HMUI.NavigationController/HMUI.Alignment End
      static HMUI::NavigationController::Alignment _get_End();
      // Set static field: static public HMUI.NavigationController/HMUI.Alignment End
      static void _set_End(HMUI::NavigationController::Alignment value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // HMUI.NavigationController/HMUI.Alignment
    #pragma pack(pop)
    static check_size<sizeof(NavigationController::Alignment), 0 + sizeof(int)> __HMUI_NavigationController_AlignmentSizeCheck;
    static_assert(sizeof(NavigationController::Alignment) == 0x4);
    // private HMUI.NavigationController/HMUI.Orientation _orientation
    // Size: 0x4
    // Offset: 0x80
    HMUI::NavigationController::Orientation orientation;
    // Field size check
    static_assert(sizeof(HMUI::NavigationController::Orientation) == 0x4);
    // private System.Boolean _reversedStacking
    // Size: 0x1
    // Offset: 0x84
    bool reversedStacking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reversedStacking and: alignment
    char __padding1[0x3] = {};
    // private HMUI.NavigationController/HMUI.Alignment _alignment
    // Size: 0x4
    // Offset: 0x88
    HMUI::NavigationController::Alignment alignment;
    // Field size check
    static_assert(sizeof(HMUI::NavigationController::Alignment) == 0x4);
    // private System.Single _edgeSize
    // Size: 0x4
    // Offset: 0x8C
    float edgeSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _viewControllersSeparator
    // Size: 0x4
    // Offset: 0x90
    float viewControllersSeparator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: NavigationController
    NavigationController(HMUI::NavigationController::Orientation orientation_ = {}, bool reversedStacking_ = {}, HMUI::NavigationController::Alignment alignment_ = {}, float edgeSize_ = {}, float viewControllersSeparator_ = {}) noexcept : orientation{orientation_}, reversedStacking{reversedStacking_}, alignment{alignment_}, edgeSize{edgeSize_}, viewControllersSeparator{viewControllersSeparator_} {}
    // Get instance field reference: private HMUI.NavigationController/HMUI.Orientation _orientation
    HMUI::NavigationController::Orientation& dyn__orientation();
    // Get instance field reference: private System.Boolean _reversedStacking
    bool& dyn__reversedStacking();
    // Get instance field reference: private HMUI.NavigationController/HMUI.Alignment _alignment
    HMUI::NavigationController::Alignment& dyn__alignment();
    // Get instance field reference: private System.Single _edgeSize
    float& dyn__edgeSize();
    // Get instance field reference: private System.Single _viewControllersSeparator
    float& dyn__viewControllersSeparator();
    // public System.Void PushViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x1310980
    void PushViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, bool immediately);
    // public System.Void PopViewController(System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x1310A5C
    void PopViewController(System::Action* finishedCallback, bool immediately);
    // public System.Void PopViewControllers(System.Int32 numberOfViewControllersToPop, System.Action finishedCallback, System.Boolean immediately)
    // Offset: 0x1310A70
    void PopViewControllers(int numberOfViewControllersToPop, System::Action* finishedCallback, bool immediately);
    // private UnityEngine.Vector3 PositionVector(System.Single pos)
    // Offset: 0x1310924
    UnityEngine::Vector3 PositionVector(float pos);
    // private System.Void SetupViewControllerRect(HMUI.ViewController viewController)
    // Offset: 0x13108CC
    void SetupViewControllerRect(HMUI::ViewController* viewController);
    // private System.Single[] GetNewPositionsForViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers, System.Collections.Generic.HashSet`1<HMUI.ViewController> fixedViewControllers, System.Single fixedEndPos)
    // Offset: 0x131044C
    ::Array<float>* GetNewPositionsForViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers, System::Collections::Generic::HashSet_1<HMUI::ViewController*>* fixedViewControllers, float fixedEndPos);
    // public System.Void .ctor()
    // Offset: 0x1310CDC
    // Implemented from: HMUI.ContainerViewController
    // Base method: System.Void ContainerViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NavigationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::NavigationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NavigationController*, creationType>()));
    }
    // protected override System.Void LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    // Offset: 0x1310318
    // Implemented from: HMUI.ContainerViewController
    // Base method: System.Void ContainerViewController::LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    void LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers);
  }; // HMUI.NavigationController
  #pragma pack(pop)
  static check_size<sizeof(NavigationController), 144 + sizeof(float)> __HMUI_NavigationControllerSizeCheck;
  static_assert(sizeof(NavigationController) == 0x94);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController*, "HMUI", "NavigationController");
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController::Orientation, "HMUI", "NavigationController/Orientation");
DEFINE_IL2CPP_ARG_TYPE(HMUI::NavigationController::Alignment, "HMUI", "NavigationController/Alignment");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::NavigationController::PushViewController
// Il2CppName: PushViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::*)(HMUI::ViewController*, System::Action*, bool)>(&HMUI::NavigationController::PushViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "PushViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, finishedCallback, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::PopViewController
// Il2CppName: PopViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::*)(System::Action*, bool)>(&HMUI::NavigationController::PopViewController)> {
  static const MethodInfo* get() {
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "PopViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{finishedCallback, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::PopViewControllers
// Il2CppName: PopViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::*)(int, System::Action*, bool)>(&HMUI::NavigationController::PopViewControllers)> {
  static const MethodInfo* get() {
    static auto* numberOfViewControllersToPop = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "PopViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numberOfViewControllersToPop, finishedCallback, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::PositionVector
// Il2CppName: PositionVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (HMUI::NavigationController::*)(float)>(&HMUI::NavigationController::PositionVector)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "PositionVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::SetupViewControllerRect
// Il2CppName: SetupViewControllerRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::*)(HMUI::ViewController*)>(&HMUI::NavigationController::SetupViewControllerRect)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "SetupViewControllerRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::GetNewPositionsForViewControllers
// Il2CppName: GetNewPositionsForViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<float>* (HMUI::NavigationController::*)(System::Collections::Generic::List_1<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*, float)>(&HMUI::NavigationController::GetNewPositionsForViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    static auto* fixedViewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    static auto* fixedEndPos = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "GetNewPositionsForViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers, fixedViewControllers, fixedEndPos});
  }
};
// Writing MetadataGetter for method: HMUI::NavigationController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::NavigationController::LayoutViewControllers
// Il2CppName: LayoutViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::NavigationController::*)(System::Collections::Generic::List_1<HMUI::ViewController*>*)>(&HMUI::NavigationController::LayoutViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::NavigationController*), "LayoutViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers});
  }
};
