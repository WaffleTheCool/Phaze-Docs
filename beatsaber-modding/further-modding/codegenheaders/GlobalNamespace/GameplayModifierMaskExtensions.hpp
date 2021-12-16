// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierMask
  struct GameplayModifierMask;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierMaskExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class GameplayModifierMaskExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GameplayModifierMaskExtensions
    GameplayModifierMaskExtensions() noexcept {}
    // static public System.Boolean Contains(GameplayModifierMask mask, GameplayModifierMask other)
    // Offset: 0x237406C
    static bool Contains(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other);
    // static public System.Int32 DifferenceFrom(GameplayModifierMask mask, GameplayModifierMask other)
    // Offset: 0x237407C
    static int DifferenceFrom(GlobalNamespace::GameplayModifierMask mask, GlobalNamespace::GameplayModifierMask other);
    // static public System.String ToHexString(GameplayModifierMask mask)
    // Offset: 0x237408C
    static ::Il2CppString* ToHexString(GlobalNamespace::GameplayModifierMask mask);
    // static public GameplayModifiers ToModifiers(GameplayModifierMask gameplayModifierMask)
    // Offset: 0x23740F0
    static GlobalNamespace::GameplayModifiers* ToModifiers(GlobalNamespace::GameplayModifierMask gameplayModifierMask);
    // static public GameplayModifierMask ToMask(GameplayModifiers gameplayModifiers)
    // Offset: 0x237433C
    static GlobalNamespace::GameplayModifierMask ToMask(GlobalNamespace::GameplayModifiers* gameplayModifiers);
  }; // GameplayModifierMaskExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierMaskExtensions*, "", "GameplayModifierMaskExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierMaskExtensions::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(GlobalNamespace::GameplayModifierMask, GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::Contains)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierMaskExtensions*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom
// Il2CppName: DifferenceFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(GlobalNamespace::GameplayModifierMask, GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::DifferenceFrom)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    static auto* other = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierMaskExtensions*), "DifferenceFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierMaskExtensions::ToHexString
// Il2CppName: ToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToHexString)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierMaskExtensions*), "ToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers
// Il2CppName: ToModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifiers* (*)(GlobalNamespace::GameplayModifierMask)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToModifiers)> {
  static const MethodInfo* get() {
    static auto* gameplayModifierMask = &::il2cpp_utils::GetClassFromName("", "GameplayModifierMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierMaskExtensions*), "ToModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifierMask});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameplayModifierMaskExtensions::ToMask
// Il2CppName: ToMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayModifierMask (*)(GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::GameplayModifierMaskExtensions::ToMask)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameplayModifierMaskExtensions*), "ToMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
