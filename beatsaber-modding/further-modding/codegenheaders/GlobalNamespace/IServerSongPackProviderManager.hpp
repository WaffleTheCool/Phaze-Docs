// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IServerSongPackProvider
  class IServerSongPackProvider;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IServerSongPackProviderManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IServerSongPackProviderManager/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IServerSongPackProviderManager
    IServerSongPackProviderManager() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public IServerSongPackProvider GetServerSongPackProvider()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IServerSongPackProvider* GetServerSongPackProvider();
    // public System.Threading.Tasks.Task RefreshAsync()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task* RefreshAsync();
  }; // IServerSongPackProviderManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IServerSongPackProviderManager*, "", "IServerSongPackProviderManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IServerSongPackProviderManager::GetServerSongPackProvider
// Il2CppName: GetServerSongPackProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IServerSongPackProvider* (GlobalNamespace::IServerSongPackProviderManager::*)()>(&GlobalNamespace::IServerSongPackProviderManager::GetServerSongPackProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerSongPackProviderManager*), "GetServerSongPackProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IServerSongPackProviderManager::RefreshAsync
// Il2CppName: RefreshAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task* (GlobalNamespace::IServerSongPackProviderManager::*)()>(&GlobalNamespace::IServerSongPackProviderManager::RefreshAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IServerSongPackProviderManager*), "RefreshAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
