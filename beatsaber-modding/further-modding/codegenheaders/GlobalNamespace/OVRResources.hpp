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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRResources
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRResources : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRResources::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::OVRResources::$$c__DisplayClass3_0_1<T>
    template<typename T>
    class $$c__DisplayClass3_0_1;
    // Creating value type constructor for type: OVRResources
    OVRResources() noexcept {}
    // Get static field: static private UnityEngine.AssetBundle resourceBundle
    static UnityEngine::AssetBundle* _get_resourceBundle();
    // Set static field: static private UnityEngine.AssetBundle resourceBundle
    static void _set_resourceBundle(UnityEngine::AssetBundle* value);
    // Get static field: static private System.Collections.Generic.List`1<System.String> assetNames
    static System::Collections::Generic::List_1<::Il2CppString*>* _get_assetNames();
    // Set static field: static private System.Collections.Generic.List`1<System.String> assetNames
    static void _set_assetNames(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // static public UnityEngine.Object Load(System.String path)
    // Offset: 0x163CFB0
    static UnityEngine::Object* Load(::Il2CppString* path);
    // static public T Load(System.String path)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Load(::Il2CppString* path) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::Load");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "OVRResources", "Load", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, path);
    }
    // static public System.Void SetResourceBundle(UnityEngine.AssetBundle bundle)
    // Offset: 0x163D16C
    static void SetResourceBundle(UnityEngine::AssetBundle* bundle);
    // public System.Void .ctor()
    // Offset: 0x163D224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRResources* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRResources::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRResources*, creationType>()));
    }
  }; // OVRResources
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResources*, "", "OVRResources");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (*)(::Il2CppString*)>(&GlobalNamespace::OVRResources::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResources*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::Load
// Il2CppName: Load
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::SetResourceBundle
// Il2CppName: SetResourceBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::AssetBundle*)>(&GlobalNamespace::OVRResources::SetResourceBundle)> {
  static const MethodInfo* get() {
    static auto* bundle = &::il2cpp_utils::GetClassFromName("UnityEngine", "AssetBundle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRResources*), "SetResourceBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bundle});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRResources::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
