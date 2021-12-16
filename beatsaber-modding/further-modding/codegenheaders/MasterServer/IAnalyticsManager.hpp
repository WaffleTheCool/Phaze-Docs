// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MetricIdentifier
  struct MetricIdentifier;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: AnalyticsMetricUnit
  struct AnalyticsMetricUnit;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IAnalyticsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class IAnalyticsManager/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IAnalyticsManager
    IAnalyticsManager() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
    // public System.Void UpdateState(MetricIdentifier metricIdentifier, System.Int64 state, MasterServer.AnalyticsMetricUnit unit, System.Boolean alarmMetric)
    // Offset: 0xFFFFFFFF
    void UpdateState(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t state, MasterServer::AnalyticsMetricUnit unit, bool alarmMetric);
    // public System.Void UpdateAverage(MetricIdentifier metricIdentifier, System.Double value, MasterServer.AnalyticsMetricUnit unit, System.Boolean alarmMetric)
    // Offset: 0xFFFFFFFF
    void UpdateAverage(GlobalNamespace::MetricIdentifier metricIdentifier, double value, MasterServer::AnalyticsMetricUnit unit, bool alarmMetric);
    // public System.Void IncrementCounter(MetricIdentifier metricIdentifier, System.Int64 incrementAmount, MasterServer.AnalyticsMetricUnit unit)
    // Offset: 0xFFFFFFFF
    void IncrementCounter(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t incrementAmount, MasterServer::AnalyticsMetricUnit unit);
  }; // MasterServer.IAnalyticsManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IAnalyticsManager*, "MasterServer", "IAnalyticsManager");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IAnalyticsManager::PollUpdate
// Il2CppName: PollUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IAnalyticsManager::*)()>(&MasterServer::IAnalyticsManager::PollUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IAnalyticsManager*), "PollUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IAnalyticsManager::UpdateState
// Il2CppName: UpdateState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, int64_t, MasterServer::AnalyticsMetricUnit, bool)>(&MasterServer::IAnalyticsManager::UpdateState)> {
  static const MethodInfo* get() {
    static auto* metricIdentifier = &::il2cpp_utils::GetClassFromName("", "MetricIdentifier")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* unit = &::il2cpp_utils::GetClassFromName("MasterServer", "AnalyticsMetricUnit")->byval_arg;
    static auto* alarmMetric = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IAnalyticsManager*), "UpdateState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{metricIdentifier, state, unit, alarmMetric});
  }
};
// Writing MetadataGetter for method: MasterServer::IAnalyticsManager::UpdateAverage
// Il2CppName: UpdateAverage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, double, MasterServer::AnalyticsMetricUnit, bool)>(&MasterServer::IAnalyticsManager::UpdateAverage)> {
  static const MethodInfo* get() {
    static auto* metricIdentifier = &::il2cpp_utils::GetClassFromName("", "MetricIdentifier")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* unit = &::il2cpp_utils::GetClassFromName("MasterServer", "AnalyticsMetricUnit")->byval_arg;
    static auto* alarmMetric = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IAnalyticsManager*), "UpdateAverage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{metricIdentifier, value, unit, alarmMetric});
  }
};
// Writing MetadataGetter for method: MasterServer::IAnalyticsManager::IncrementCounter
// Il2CppName: IncrementCounter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, int64_t, MasterServer::AnalyticsMetricUnit)>(&MasterServer::IAnalyticsManager::IncrementCounter)> {
  static const MethodInfo* get() {
    static auto* metricIdentifier = &::il2cpp_utils::GetClassFromName("", "MetricIdentifier")->byval_arg;
    static auto* incrementAmount = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* unit = &::il2cpp_utils::GetClassFromName("MasterServer", "AnalyticsMetricUnit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IAnalyticsManager*), "IncrementCounter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{metricIdentifier, incrementAmount, unit});
  }
};
