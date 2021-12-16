// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelModifiersViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionLevelModifiersViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE4820C
    // private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private UnityEngine.GameObject _modifiersPanel
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* modifiersPanel;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _titleText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* titleText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // Creating value type constructor for type: MissionLevelModifiersViewController
    MissionLevelModifiersViewController(GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}, GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList_ = {}, UnityEngine::GameObject* modifiersPanel_ = {}, TMPro::TextMeshProUGUI* titleText_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}) noexcept : gameplayModifiersModel{gameplayModifiersModel_}, gameplayModifierInfoListItemsList{gameplayModifierInfoListItemsList_}, modifiersPanel{modifiersPanel_}, titleText{titleText_}, gameplayModifiers{gameplayModifiers_} {}
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // Get instance field reference: private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    GlobalNamespace::GameplayModifierInfoListItemsList*& dyn__gameplayModifierInfoListItemsList();
    // Get instance field reference: private UnityEngine.GameObject _modifiersPanel
    UnityEngine::GameObject*& dyn__modifiersPanel();
    // Get instance field reference: private TMPro.TextMeshProUGUI _titleText
    TMPro::TextMeshProUGUI*& dyn__titleText();
    // Get instance field reference: private GameplayModifiers _gameplayModifiers
    GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // public System.Void Setup(GameplayModifiers gameplayModifiers)
    // Offset: 0x114067C
    void Setup(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void RefreshContent()
    // Offset: 0x11406B8
    void RefreshContent();
    // public System.Void .ctor()
    // Offset: 0x1140810
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelModifiersViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelModifiersViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelModifiersViewController*, creationType>()));
    }
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1140804
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // MissionLevelModifiersViewController
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelModifiersViewController), 144 + sizeof(GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_MissionLevelModifiersViewControllerSizeCheck;
  static_assert(sizeof(MissionLevelModifiersViewController) == 0x98);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelModifiersViewController*, "", "MissionLevelModifiersViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelModifiersViewController::*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::MissionLevelModifiersViewController::Setup)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelModifiersViewController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::RefreshContent
// Il2CppName: RefreshContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelModifiersViewController::*)()>(&GlobalNamespace::MissionLevelModifiersViewController::RefreshContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelModifiersViewController*), "RefreshContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionLevelModifiersViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MissionLevelModifiersViewController::*)(bool, bool, bool)>(&GlobalNamespace::MissionLevelModifiersViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionLevelModifiersViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
