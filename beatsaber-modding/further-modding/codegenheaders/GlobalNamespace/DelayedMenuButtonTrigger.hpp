// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: IMenuButtonTrigger
#include "GlobalNamespace/IMenuButtonTrigger.hpp"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DelayedMenuButtonTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class DelayedMenuButtonTrigger : public ::Il2CppObject/*, public Zenject::ITickable, public GlobalNamespace::IMenuButtonTrigger*/ {
    public:
    // private System.Action menuButtonTriggeredEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action* menuButtonTriggeredEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [InjectAttribute] Offset: 0xE3EEB4
    // private System.Single _pressDuration
    // Size: 0x4
    // Offset: 0x18
    float pressDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timer
    // Size: 0x4
    // Offset: 0x1C
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _waitingForButtonRelease
    // Size: 0x1
    // Offset: 0x20
    bool waitingForButtonRelease;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: waitingForButtonRelease and: vrControllersInputManager
    char __padding3[0x7] = {};
    // [InjectAttribute] Offset: 0xE3EEC4
    // private VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRControllersInputManager*) == 0x8);
    // Creating value type constructor for type: DelayedMenuButtonTrigger
    DelayedMenuButtonTrigger(System::Action* menuButtonTriggeredEvent_ = {}, float pressDuration_ = {}, float timer_ = {}, bool waitingForButtonRelease_ = {}, GlobalNamespace::VRControllersInputManager* vrControllersInputManager_ = {}) noexcept : menuButtonTriggeredEvent{menuButtonTriggeredEvent_}, pressDuration{pressDuration_}, timer{timer_}, waitingForButtonRelease{waitingForButtonRelease_}, vrControllersInputManager{vrControllersInputManager_} {}
    // Creating interface conversion operator: operator Zenject::ITickable
    operator Zenject::ITickable() noexcept {
      return *reinterpret_cast<Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IMenuButtonTrigger
    operator GlobalNamespace::IMenuButtonTrigger() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMenuButtonTrigger*>(this);
    }
    // Get instance field reference: private System.Action menuButtonTriggeredEvent
    System::Action*& dyn_menuButtonTriggeredEvent();
    // Get instance field reference: private System.Single _pressDuration
    float& dyn__pressDuration();
    // Get instance field reference: private System.Single _timer
    float& dyn__timer();
    // Get instance field reference: private System.Boolean _waitingForButtonRelease
    bool& dyn__waitingForButtonRelease();
    // Get instance field reference: private VRControllersInputManager _vrControllersInputManager
    GlobalNamespace::VRControllersInputManager*& dyn__vrControllersInputManager();
    // public System.Void add_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0x10EE47C
    void add_menuButtonTriggeredEvent(System::Action* value);
    // public System.Void remove_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0x10EE520
    void remove_menuButtonTriggeredEvent(System::Action* value);
    // public System.Void Tick()
    // Offset: 0x10EE5C4
    void Tick();
    // public System.Void .ctor()
    // Offset: 0x10EE654
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelayedMenuButtonTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DelayedMenuButtonTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelayedMenuButtonTrigger*, creationType>()));
    }
  }; // DelayedMenuButtonTrigger
  #pragma pack(pop)
  static check_size<sizeof(DelayedMenuButtonTrigger), 40 + sizeof(GlobalNamespace::VRControllersInputManager*)> __GlobalNamespace_DelayedMenuButtonTriggerSizeCheck;
  static_assert(sizeof(DelayedMenuButtonTrigger) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DelayedMenuButtonTrigger*, "", "DelayedMenuButtonTrigger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent
// Il2CppName: add_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DelayedMenuButtonTrigger::*)(System::Action*)>(&GlobalNamespace::DelayedMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DelayedMenuButtonTrigger*), "add_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent
// Il2CppName: remove_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DelayedMenuButtonTrigger::*)(System::Action*)>(&GlobalNamespace::DelayedMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DelayedMenuButtonTrigger*), "remove_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DelayedMenuButtonTrigger::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DelayedMenuButtonTrigger::*)()>(&GlobalNamespace::DelayedMenuButtonTrigger::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DelayedMenuButtonTrigger*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DelayedMenuButtonTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
