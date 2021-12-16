// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ColorExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ColorExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ColorExtensions
    ColorExtensions() noexcept {}
    // static public UnityEngine.Color SaturatedColor(UnityEngine.Color color, System.Single saturation)
    // Offset: 0x125D1D8
    static UnityEngine::Color SaturatedColor(UnityEngine::Color color, float saturation);
    // static public UnityEngine.Color ColorWithAlpha(UnityEngine.Color color, System.Single alpha)
    // Offset: 0x125D230
    static UnityEngine::Color ColorWithAlpha(UnityEngine::Color color, float alpha);
    // static public UnityEngine.Color ColorWithR(UnityEngine.Color color, System.Single r)
    // Offset: 0x125D238
    static UnityEngine::Color ColorWithR(UnityEngine::Color color, float r);
    // static public UnityEngine.Color ColorWithG(UnityEngine.Color color, System.Single g)
    // Offset: 0x125D240
    static UnityEngine::Color ColorWithG(UnityEngine::Color color, float g);
    // static public UnityEngine.Color ColorWithB(UnityEngine.Color color, System.Single b)
    // Offset: 0x125D248
    static UnityEngine::Color ColorWithB(UnityEngine::Color color, float b);
    // static public UnityEngine.Color ColorWithValue(UnityEngine.Color color, System.Single value)
    // Offset: 0x125D250
    static UnityEngine::Color ColorWithValue(UnityEngine::Color color, float value);
    // static public UnityEngine.Color LerpRGBUnclamped(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x125D2A4
    static UnityEngine::Color LerpRGBUnclamped(UnityEngine::Color a, UnityEngine::Color b, float t);
  }; // ColorExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorExtensions*, "", "ColorExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::SaturatedColor
// Il2CppName: SaturatedColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::SaturatedColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* saturation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "SaturatedColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, saturation});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::ColorWithAlpha
// Il2CppName: ColorWithAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::ColorWithAlpha)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* alpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "ColorWithAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, alpha});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::ColorWithR
// Il2CppName: ColorWithR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::ColorWithR)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "ColorWithR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, r});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::ColorWithG
// Il2CppName: ColorWithG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::ColorWithG)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "ColorWithG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, g});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::ColorWithB
// Il2CppName: ColorWithB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::ColorWithB)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "ColorWithB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::ColorWithValue
// Il2CppName: ColorWithValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::ColorWithValue)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "ColorWithValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ColorExtensions::LerpRGBUnclamped
// Il2CppName: LerpRGBUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(UnityEngine::Color, UnityEngine::Color, float)>(&GlobalNamespace::ColorExtensions::LerpRGBUnclamped)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ColorExtensions*), "LerpRGBUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
