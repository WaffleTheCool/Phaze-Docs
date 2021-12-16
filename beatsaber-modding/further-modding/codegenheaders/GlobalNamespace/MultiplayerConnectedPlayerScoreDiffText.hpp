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
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerLeadPlayerProvider
  class MultiplayerLeadPlayerProvider;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: FloatTween
  class FloatTween;
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerScoreDiffText
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerScoreDiffText : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition
    struct HorizontalPosition;
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MultiplayerConnectedPlayerScoreDiffText/State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/State Hidden
      static constexpr const int Hidden = 0;
      // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/State Hidden
      static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State _get_Hidden();
      // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/State Hidden
      static void _set_Hidden(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State value);
      // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/State Displayed
      static constexpr const int Displayed = 1;
      // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/State Displayed
      static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State _get_Displayed();
      // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/State Displayed
      static void _set_Displayed(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State value);
      // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingDisplay
      static constexpr const int AnimatingDisplay = 2;
      // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingDisplay
      static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State _get_AnimatingDisplay();
      // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingDisplay
      static void _set_AnimatingDisplay(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State value);
      // static field const value: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingHide
      static constexpr const int AnimatingHide = 3;
      // Get static field: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingHide
      static GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State _get_AnimatingHide();
      // Set static field: static public MultiplayerConnectedPlayerScoreDiffText/State AnimatingHide
      static void _set_AnimatingHide(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MultiplayerConnectedPlayerScoreDiffText/State
    #pragma pack(pop)
    static check_size<sizeof(MultiplayerConnectedPlayerScoreDiffText::State), 0 + sizeof(int)> __GlobalNamespace_MultiplayerConnectedPlayerScoreDiffText_StateSizeCheck;
    static_assert(sizeof(MultiplayerConnectedPlayerScoreDiffText::State) == 0x4);
    // private UnityEngine.Color _activeTextColor
    // Size: 0x10
    // Offset: 0x18
    UnityEngine::Color activeTextColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _normalBackgroundColor
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color normalBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _leadingBackgroundColor
    // Size: 0x10
    // Offset: 0x38
    UnityEngine::Color leadingBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // [SpaceAttribute] Offset: 0xE3FECC
    // private TMPro.TextMeshPro _onPlatformText
    // Size: 0x8
    // Offset: 0x48
    TMPro::TextMeshPro* onPlatformText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.SpriteRenderer _backgroundSpriteRenderer
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::SpriteRenderer* backgroundSpriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FF14
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x58
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FF24
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE3FF34
    // private readonly MultiplayerLeadPlayerProvider _leadPlayerProvider
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MultiplayerLeadPlayerProvider* leadPlayerProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLeadPlayerProvider*) == 0x8);
    // private UnityEngine.Color _currentBackgroundColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color currentBackgroundColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private MultiplayerConnectedPlayerScoreDiffText/State _state
    // Size: 0x4
    // Offset: 0x80
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State state;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State) == 0x4);
    // Padding between fields: state and: onPlatformTextAlphaTween
    char __padding9[0x4] = {};
    // private Tweening.FloatTween _onPlatformTextAlphaTween
    // Size: 0x8
    // Offset: 0x88
    Tweening::FloatTween* onPlatformTextAlphaTween;
    // Field size check
    static_assert(sizeof(Tweening::FloatTween*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerScoreDiffText
    MultiplayerConnectedPlayerScoreDiffText(UnityEngine::Color activeTextColor_ = {}, UnityEngine::Color normalBackgroundColor_ = {}, UnityEngine::Color leadingBackgroundColor_ = {}, TMPro::TextMeshPro* onPlatformText_ = {}, UnityEngine::SpriteRenderer* backgroundSpriteRenderer_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, GlobalNamespace::MultiplayerLeadPlayerProvider* leadPlayerProvider_ = {}, UnityEngine::Color currentBackgroundColor_ = {}, GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State state_ = {}, Tweening::FloatTween* onPlatformTextAlphaTween_ = {}) noexcept : activeTextColor{activeTextColor_}, normalBackgroundColor{normalBackgroundColor_}, leadingBackgroundColor{leadingBackgroundColor_}, onPlatformText{onPlatformText_}, backgroundSpriteRenderer{backgroundSpriteRenderer_}, tweeningManager{tweeningManager_}, connectedPlayer{connectedPlayer_}, leadPlayerProvider{leadPlayerProvider_}, currentBackgroundColor{currentBackgroundColor_}, state{state_}, onPlatformTextAlphaTween{onPlatformTextAlphaTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color _activeTextColor
    UnityEngine::Color& dyn__activeTextColor();
    // Get instance field reference: private UnityEngine.Color _normalBackgroundColor
    UnityEngine::Color& dyn__normalBackgroundColor();
    // Get instance field reference: private UnityEngine.Color _leadingBackgroundColor
    UnityEngine::Color& dyn__leadingBackgroundColor();
    // Get instance field reference: private TMPro.TextMeshPro _onPlatformText
    TMPro::TextMeshPro*& dyn__onPlatformText();
    // Get instance field reference: private UnityEngine.SpriteRenderer _backgroundSpriteRenderer
    UnityEngine::SpriteRenderer*& dyn__backgroundSpriteRenderer();
    // Get instance field reference: private readonly Tweening.TweeningManager _tweeningManager
    Tweening::TweeningManager*& dyn__tweeningManager();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly MultiplayerLeadPlayerProvider _leadPlayerProvider
    GlobalNamespace::MultiplayerLeadPlayerProvider*& dyn__leadPlayerProvider();
    // Get instance field reference: private UnityEngine.Color _currentBackgroundColor
    UnityEngine::Color& dyn__currentBackgroundColor();
    // Get instance field reference: private MultiplayerConnectedPlayerScoreDiffText/State _state
    GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State& dyn__state();
    // Get instance field reference: private Tweening.FloatTween _onPlatformTextAlphaTween
    Tweening::FloatTween*& dyn__onPlatformTextAlphaTween();
    // private System.Void Start()
    // Offset: 0x11CD414
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11CD5DC
    void OnDestroy();
    // public System.Void SetHorizontalPositionRelativeToLocalPlayer(MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition relativePosition)
    // Offset: 0x11CD79C
    void SetHorizontalPositionRelativeToLocalPlayer(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition relativePosition);
    // public System.Void AnimateScoreDiff(System.Int32 scoreDiff)
    // Offset: 0x11CD8B4
    void AnimateScoreDiff(int scoreDiff);
    // public System.Void AnimateHide()
    // Offset: 0x11CDA68
    void AnimateHide();
    // private System.Void HandleNewLeaderWasSelected(System.String userId)
    // Offset: 0x11CDB58
    void HandleNewLeaderWasSelected(::Il2CppString* userId);
    // private System.Void <Start>b__13_0(System.Single val)
    // Offset: 0x11CDCE8
    void $Start$b__13_0(float val);
    // private System.Void <AnimateScoreDiff>b__16_0()
    // Offset: 0x11CDD6C
    void $AnimateScoreDiff$b__16_0();
    // private System.Void <AnimateHide>b__17_0()
    // Offset: 0x11CDD78
    void $AnimateHide$b__17_0();
    // public System.Void .ctor()
    // Offset: 0x11CDC94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerScoreDiffText* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerScoreDiffText*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerScoreDiffText
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerScoreDiffText), 136 + sizeof(Tweening::FloatTween*)> __GlobalNamespace_MultiplayerConnectedPlayerScoreDiffTextSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerScoreDiffText) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*, "", "MultiplayerConnectedPlayerScoreDiffText");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::State, "", "MultiplayerConnectedPlayerScoreDiffText/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer
// Il2CppName: SetHorizontalPositionRelativeToLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HorizontalPosition)>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::SetHorizontalPositionRelativeToLocalPlayer)> {
  static const MethodInfo* get() {
    static auto* relativePosition = &::il2cpp_utils::GetClassFromName("", "MultiplayerConnectedPlayerScoreDiffText/HorizontalPosition")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "SetHorizontalPositionRelativeToLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{relativePosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::AnimateScoreDiff
// Il2CppName: AnimateScoreDiff
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)(int)>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::AnimateScoreDiff)> {
  static const MethodInfo* get() {
    static auto* scoreDiff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "AnimateScoreDiff", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scoreDiff});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::AnimateHide
// Il2CppName: AnimateHide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::AnimateHide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "AnimateHide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HandleNewLeaderWasSelected
// Il2CppName: HandleNewLeaderWasSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)(::Il2CppString*)>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::HandleNewLeaderWasSelected)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "HandleNewLeaderWasSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$Start$b__13_0
// Il2CppName: <Start>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)(float)>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$Start$b__13_0)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "<Start>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$AnimateScoreDiff$b__16_0
// Il2CppName: <AnimateScoreDiff>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$AnimateScoreDiff$b__16_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "<AnimateScoreDiff>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$AnimateHide$b__17_0
// Il2CppName: <AnimateHide>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::$AnimateHide$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText*), "<AnimateHide>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerScoreDiffText::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
