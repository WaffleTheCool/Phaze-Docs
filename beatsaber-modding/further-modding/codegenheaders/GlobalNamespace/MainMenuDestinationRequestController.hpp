// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDestinationRequestManager
  class IDestinationRequestManager;
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuDestinationRequestController
  // [TokenAttribute] Offset: FFFFFFFF
  class MainMenuDestinationRequestController : public ::Il2CppObject/*, public System::IDisposable, public Zenject::IInitializable*/ {
    public:
    // Nested type: GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8
    struct $ProcessDestinationRequest$d__8;
    // [InjectAttribute] Offset: 0xE38DC0
    // private readonly IDestinationRequestManager _destinationRequestManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IDestinationRequestManager* destinationRequestManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDestinationRequestManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE38DD0
    // private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE38DE0
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: MainMenuDestinationRequestController
    MainMenuDestinationRequestController(GlobalNamespace::IDestinationRequestManager* destinationRequestManager_ = {}, GlobalNamespace::MenuScenesTransitionSetupDataSO* menuScenesTransitionSetupData_ = {}, GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}) noexcept : destinationRequestManager{destinationRequestManager_}, menuScenesTransitionSetupData{menuScenesTransitionSetupData_}, gameScenesManager{gameScenesManager_}, cancellationTokenSource{cancellationTokenSource_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Get instance field reference: private readonly IDestinationRequestManager _destinationRequestManager
    GlobalNamespace::IDestinationRequestManager*& dyn__destinationRequestManager();
    // Get instance field reference: private readonly MenuScenesTransitionSetupDataSO _menuScenesTransitionSetupData
    GlobalNamespace::MenuScenesTransitionSetupDataSO*& dyn__menuScenesTransitionSetupData();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // public System.Void Initialize()
    // Offset: 0x11A2C0C
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x11A2EBC
    void Dispose();
    // private System.Void HandleGameScenesManagerInstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x11A3054
    void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, Zenject::DiContainer* container);
    // private System.Void HandleDestinationRequestManagerDidSendMenuDestinationRequest(MenuDestination menuDestination)
    // Offset: 0x11A32E4
    void HandleDestinationRequestManagerDidSendMenuDestinationRequest(GlobalNamespace::MenuDestination* menuDestination);
    // private System.Void ProcessDestinationRequest(MenuDestination menuDestination)
    // Offset: 0x11A2DF4
    void ProcessDestinationRequest(GlobalNamespace::MenuDestination* menuDestination);
    // public System.Void .ctor()
    // Offset: 0x11A32E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuDestinationRequestController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainMenuDestinationRequestController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuDestinationRequestController*, creationType>()));
    }
  }; // MainMenuDestinationRequestController
  #pragma pack(pop)
  static check_size<sizeof(MainMenuDestinationRequestController), 40 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_MainMenuDestinationRequestControllerSizeCheck;
  static_assert(sizeof(MainMenuDestinationRequestController) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuDestinationRequestController*, "", "MainMenuDestinationRequestController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::*)()>(&GlobalNamespace::MainMenuDestinationRequestController::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::*)()>(&GlobalNamespace::MainMenuDestinationRequestController::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings
// Il2CppName: HandleGameScenesManagerInstallEarlyBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::*)(GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*)>(&GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController*), "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest
// Il2CppName: HandleDestinationRequestManagerDidSendMenuDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::*)(GlobalNamespace::MenuDestination*)>(&GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest)> {
  static const MethodInfo* get() {
    static auto* menuDestination = &::il2cpp_utils::GetClassFromName("", "MenuDestination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController*), "HandleDestinationRequestManagerDidSendMenuDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{menuDestination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest
// Il2CppName: ProcessDestinationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::*)(GlobalNamespace::MenuDestination*)>(&GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest)> {
  static const MethodInfo* get() {
    static auto* menuDestination = &::il2cpp_utils::GetClassFromName("", "MenuDestination")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController*), "ProcessDestinationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{menuDestination});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
