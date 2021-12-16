// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.PlatformOnlineServicesAvailabilityModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformOnlineServicesAvailabilityModel : public ::Il2CppObject {
    public:
    // Nested type: OnlineServices::PlatformOnlineServicesAvailabilityModel::$GetPlatformServicesAvailabilityInfo$d__4
    struct $GetPlatformServicesAvailabilityInfo$d__4;
    // private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    // Size: 0x8
    // Offset: 0x10
    System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*) == 0x8);
    // Creating value type constructor for type: PlatformOnlineServicesAvailabilityModel
    PlatformOnlineServicesAvailabilityModel(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* platformServicesAvailabilityInfoChangedEvent_ = {}) noexcept : platformServicesAvailabilityInfoChangedEvent{platformServicesAvailabilityInfoChangedEvent_} {}
    // Creating conversion operator: operator System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*
    constexpr operator System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*() const noexcept {
      return platformServicesAvailabilityInfoChangedEvent;
    }
    // Get instance field reference: private System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> platformServicesAvailabilityInfoChangedEvent
    System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*& dyn_platformServicesAvailabilityInfoChangedEvent();
    // public System.Void add_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0x1032028
    void add_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Void remove_platformServicesAvailabilityInfoChangedEvent(System.Action`1<OnlineServices.PlatformServicesAvailabilityInfo> value)
    // Offset: 0x10320CC
    void remove_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value);
    // public System.Threading.Tasks.Task`1<OnlineServices.PlatformServicesAvailabilityInfo> GetPlatformServicesAvailabilityInfo(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1031F1C
    System::Threading::Tasks::Task_1<OnlineServices::PlatformServicesAvailabilityInfo*>* GetPlatformServicesAvailabilityInfo(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x1032170
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformOnlineServicesAvailabilityModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OnlineServices::PlatformOnlineServicesAvailabilityModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformOnlineServicesAvailabilityModel*, creationType>()));
    }
  }; // OnlineServices.PlatformOnlineServicesAvailabilityModel
  #pragma pack(pop)
  static check_size<sizeof(PlatformOnlineServicesAvailabilityModel), 16 + sizeof(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*)> __OnlineServices_PlatformOnlineServicesAvailabilityModelSizeCheck;
  static_assert(sizeof(PlatformOnlineServicesAvailabilityModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::PlatformOnlineServicesAvailabilityModel*, "OnlineServices", "PlatformOnlineServicesAvailabilityModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::add_platformServicesAvailabilityInfoChangedEvent
// Il2CppName: add_platformServicesAvailabilityInfoChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::PlatformOnlineServicesAvailabilityModel::*)(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*)>(&OnlineServices::PlatformOnlineServicesAvailabilityModel::add_platformServicesAvailabilityInfoChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformOnlineServicesAvailabilityModel*), "add_platformServicesAvailabilityInfoChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::remove_platformServicesAvailabilityInfoChangedEvent
// Il2CppName: remove_platformServicesAvailabilityInfoChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::PlatformOnlineServicesAvailabilityModel::*)(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>*)>(&OnlineServices::PlatformOnlineServicesAvailabilityModel::remove_platformServicesAvailabilityInfoChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("OnlineServices", "PlatformServicesAvailabilityInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformOnlineServicesAvailabilityModel*), "remove_platformServicesAvailabilityInfoChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::GetPlatformServicesAvailabilityInfo
// Il2CppName: GetPlatformServicesAvailabilityInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<OnlineServices::PlatformServicesAvailabilityInfo*>* (OnlineServices::PlatformOnlineServicesAvailabilityModel::*)(System::Threading::CancellationToken)>(&OnlineServices::PlatformOnlineServicesAvailabilityModel::GetPlatformServicesAvailabilityInfo)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::PlatformOnlineServicesAvailabilityModel*), "GetPlatformServicesAvailabilityInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: OnlineServices::PlatformOnlineServicesAvailabilityModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
