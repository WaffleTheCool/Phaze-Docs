// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: PreviousColorPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviousColorPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.UI.Graphic[] _graphics
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::UI::Graphic*>* graphics;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Graphic*>*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action`1<UnityEngine.Color> colorWasSelectedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::Color>* colorWasSelectedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x30
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _graphicsColor
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Color graphicsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: PreviousColorPanelController
    PreviousColorPanelController(::Array<UnityEngine::UI::Graphic*>* graphics_ = {}, UnityEngine::UI::Button* button_ = {}, System::Action_1<UnityEngine::Color>* colorWasSelectedEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, UnityEngine::Color color_ = {}, UnityEngine::Color graphicsColor_ = {}) noexcept : graphics{graphics_}, button{button_}, colorWasSelectedEvent{colorWasSelectedEvent_}, buttonBinder{buttonBinder_}, color{color_}, graphicsColor{graphicsColor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxColors
    static constexpr const int kMaxColors = 2;
    // Get static field: static private System.Int32 kMaxColors
    static int _get_kMaxColors();
    // Set static field: static private System.Int32 kMaxColors
    static void _set_kMaxColors(int value);
    // Get instance field reference: private UnityEngine.UI.Graphic[] _graphics
    ::Array<UnityEngine::UI::Graphic*>*& dyn__graphics();
    // Get instance field reference: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private System.Action`1<UnityEngine.Color> colorWasSelectedEvent
    System::Action_1<UnityEngine::Color>*& dyn_colorWasSelectedEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // Get instance field reference: private UnityEngine.Color _graphicsColor
    UnityEngine::Color& dyn__graphicsColor();
    // public System.Void add_colorWasSelectedEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x11FF540
    void add_colorWasSelectedEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_colorWasSelectedEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x11FF5E4
    void remove_colorWasSelectedEvent(System::Action_1<UnityEngine::Color>* value);
    // protected System.Void Awake()
    // Offset: 0x11FF688
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x11FF738
    void OnDestroy();
    // public System.Void AddColor(UnityEngine.Color color)
    // Offset: 0x11FF754
    void AddColor(UnityEngine::Color color);
    // public System.Void DiscardUpcomingColor()
    // Offset: 0x11FF80C
    void DiscardUpcomingColor();
    // private System.Void <Awake>b__9_0()
    // Offset: 0x11FF85C
    void $Awake$b__9_0();
    // public System.Void .ctor()
    // Offset: 0x11FF818
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviousColorPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PreviousColorPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviousColorPanelController*, creationType>()));
    }
  }; // PreviousColorPanelController
  #pragma pack(pop)
  static check_size<sizeof(PreviousColorPanelController), 72 + sizeof(UnityEngine::Color)> __GlobalNamespace_PreviousColorPanelControllerSizeCheck;
  static_assert(sizeof(PreviousColorPanelController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PreviousColorPanelController*, "", "PreviousColorPanelController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::add_colorWasSelectedEvent
// Il2CppName: add_colorWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::PreviousColorPanelController::add_colorWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "add_colorWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::remove_colorWasSelectedEvent
// Il2CppName: remove_colorWasSelectedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)(System::Action_1<UnityEngine::Color>*)>(&GlobalNamespace::PreviousColorPanelController::remove_colorWasSelectedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "remove_colorWasSelectedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)()>(&GlobalNamespace::PreviousColorPanelController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)()>(&GlobalNamespace::PreviousColorPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::AddColor
// Il2CppName: AddColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)(UnityEngine::Color)>(&GlobalNamespace::PreviousColorPanelController::AddColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "AddColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::DiscardUpcomingColor
// Il2CppName: DiscardUpcomingColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)()>(&GlobalNamespace::PreviousColorPanelController::DiscardUpcomingColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "DiscardUpcomingColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::$Awake$b__9_0
// Il2CppName: <Awake>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviousColorPanelController::*)()>(&GlobalNamespace::PreviousColorPanelController::$Awake$b__9_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviousColorPanelController*), "<Awake>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviousColorPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
