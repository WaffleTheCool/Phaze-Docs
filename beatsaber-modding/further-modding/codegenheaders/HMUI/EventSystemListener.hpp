// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.EventSystemListener
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: E1A988
  class EventSystemListener : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // private System.Action`1<UnityEngine.EventSystems.PointerEventData> pointerDidEnterEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<UnityEngine::EventSystems::PointerEventData*>* pointerDidEnterEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // private System.Action`1<UnityEngine.EventSystems.PointerEventData> pointerDidExitEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<UnityEngine::EventSystems::PointerEventData*>* pointerDidExitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*) == 0x8);
    // Creating value type constructor for type: EventSystemListener
    EventSystemListener(System::Action_1<UnityEngine::EventSystems::PointerEventData*>* pointerDidEnterEvent_ = {}, System::Action_1<UnityEngine::EventSystems::PointerEventData*>* pointerDidExitEvent_ = {}) noexcept : pointerDidEnterEvent{pointerDidEnterEvent_}, pointerDidExitEvent{pointerDidExitEvent_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<UnityEngine.EventSystems.PointerEventData> pointerDidEnterEvent
    System::Action_1<UnityEngine::EventSystems::PointerEventData*>*& dyn_pointerDidEnterEvent();
    // Get instance field reference: private System.Action`1<UnityEngine.EventSystems.PointerEventData> pointerDidExitEvent
    System::Action_1<UnityEngine::EventSystems::PointerEventData*>*& dyn_pointerDidExitEvent();
    // public System.Void add_pointerDidEnterEvent(System.Action`1<UnityEngine.EventSystems.PointerEventData> value)
    // Offset: 0x13714F4
    void add_pointerDidEnterEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData*>* value);
    // public System.Void remove_pointerDidEnterEvent(System.Action`1<UnityEngine.EventSystems.PointerEventData> value)
    // Offset: 0x1371598
    void remove_pointerDidEnterEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData*>* value);
    // public System.Void add_pointerDidExitEvent(System.Action`1<UnityEngine.EventSystems.PointerEventData> value)
    // Offset: 0x137163C
    void add_pointerDidExitEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData*>* value);
    // public System.Void remove_pointerDidExitEvent(System.Action`1<UnityEngine.EventSystems.PointerEventData> value)
    // Offset: 0x13716E0
    void remove_pointerDidExitEvent(System::Action_1<UnityEngine::EventSystems::PointerEventData*>* value);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1371784
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x13717F8
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x137186C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSystemListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::EventSystemListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSystemListener*, creationType>()));
    }
  }; // HMUI.EventSystemListener
  #pragma pack(pop)
  static check_size<sizeof(EventSystemListener), 32 + sizeof(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*)> __HMUI_EventSystemListenerSizeCheck;
  static_assert(sizeof(EventSystemListener) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::EventSystemListener*, "HMUI", "EventSystemListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::EventSystemListener::add_pointerDidEnterEvent
// Il2CppName: add_pointerDidEnterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*)>(&HMUI::EventSystemListener::add_pointerDidEnterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "add_pointerDidEnterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::remove_pointerDidEnterEvent
// Il2CppName: remove_pointerDidEnterEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*)>(&HMUI::EventSystemListener::remove_pointerDidEnterEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "remove_pointerDidEnterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::add_pointerDidExitEvent
// Il2CppName: add_pointerDidExitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*)>(&HMUI::EventSystemListener::add_pointerDidExitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "add_pointerDidExitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::remove_pointerDidExitEvent
// Il2CppName: remove_pointerDidExitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(System::Action_1<UnityEngine::EventSystems::PointerEventData*>*)>(&HMUI::EventSystemListener::remove_pointerDidExitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "remove_pointerDidExitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::EventSystemListener::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::EventSystemListener::*)(UnityEngine::EventSystems::PointerEventData*)>(&HMUI::EventSystemListener::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::EventSystemListener*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::EventSystemListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
