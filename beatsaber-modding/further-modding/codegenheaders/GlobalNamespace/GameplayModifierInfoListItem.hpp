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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierInfoListItem
  // [TokenAttribute] Offset: FFFFFFFF
  class GameplayModifierInfoListItem : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.HoverHint _hoverHint
    // Size: 0x8
    // Offset: 0x18
    HMUI::HoverHint* hoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.UI.Image _iconImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* iconImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: GameplayModifierInfoListItem
    GameplayModifierInfoListItem(HMUI::HoverHint* hoverHint_ = {}, UnityEngine::UI::Image* iconImage_ = {}) noexcept : hoverHint{hoverHint_}, iconImage{iconImage_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.HoverHint _hoverHint
    HMUI::HoverHint*& dyn__hoverHint();
    // Get instance field reference: private UnityEngine.UI.Image _iconImage
    UnityEngine::UI::Image*& dyn__iconImage();
    // public System.Void SetModifier(GameplayModifierParamsSO modifierParam, System.Boolean showName)
    // Offset: 0x10FB31C
    void SetModifier(GlobalNamespace::GameplayModifierParamsSO* modifierParam, bool showName);
    // public System.Void .ctor()
    // Offset: 0x11004B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierInfoListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierInfoListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierInfoListItem*, creationType>()));
    }
  }; // GameplayModifierInfoListItem
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifierInfoListItem), 32 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_GameplayModifierInfoListItemSizeCheck;
  static_assert(sizeof(GameplayModifierInfoListItem) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierInfoListItem::SetModifier
// Il2CppName: SetModifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameplayModifierInfoListItem::*)(GlobalNamespace::GameplayModifierParamsSO*, bool)>(&GlobalNamespace::GameplayModifierInfoListItem::SetModifier)> {
  static const MethodInfo* get() {
    static auto* modifierParam = &::il2cpp_utils::GetClassFromName("", "GameplayModifierParamsSO")->byval_arg;
    static auto* showName = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierInfoListItem*), "SetModifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{modifierParam, showName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierInfoListItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
