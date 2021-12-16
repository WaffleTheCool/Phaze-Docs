// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
// Including type: ISaberSwingRatingCounterDidChangeReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidChangeReceiver.hpp"
// Including type: ISaberSwingRatingCounterDidFinishReceiver
#include "GlobalNamespace/ISaberSwingRatingCounterDidFinishReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: ICutScoreBufferDidFinishEvent
  class ICutScoreBufferDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: CutScoreBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class CutScoreBuffer : public GlobalNamespace::HMAutoincrementedRequestId/*, public GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver, public GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*/ {
    public:
    // Nested type: GlobalNamespace::CutScoreBuffer::Pool
    class Pool;
    // private System.Int32 _afterCutScoreWithMultiplier
    // Size: 0x4
    // Offset: 0x18
    int afterCutScoreWithMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _beforeCutScoreWithMultiplier
    // Size: 0x4
    // Offset: 0x1C
    int beforeCutScoreWithMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cutDistanceScoreWithMultiplier
    // Size: 0x4
    // Offset: 0x20
    int cutDistanceScoreWithMultiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0x24
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private ISaberSwingRatingCounter _saberSwingRatingCounter
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ISaberSwingRatingCounter*) == 0x8);
    // private System.Single _cutDistanceToCenter
    // Size: 0x4
    // Offset: 0x30
    float cutDistanceToCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x34
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: didFinishEvent
    char __padding6[0x3] = {};
    // private readonly LazyCopyHashSet`1<ICutScoreBufferDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>*) == 0x8);
    // Creating value type constructor for type: CutScoreBuffer
    CutScoreBuffer(int afterCutScoreWithMultiplier_ = {}, int beforeCutScoreWithMultiplier_ = {}, int cutDistanceScoreWithMultiplier_ = {}, int multiplier_ = {}, GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter_ = {}, float cutDistanceToCenter_ = {}, bool initialized_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>* didFinishEvent_ = {}) noexcept : afterCutScoreWithMultiplier{afterCutScoreWithMultiplier_}, beforeCutScoreWithMultiplier{beforeCutScoreWithMultiplier_}, cutDistanceScoreWithMultiplier{cutDistanceScoreWithMultiplier_}, multiplier{multiplier_}, saberSwingRatingCounter{saberSwingRatingCounter_}, cutDistanceToCenter{cutDistanceToCenter_}, initialized{initialized_}, didFinishEvent{didFinishEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver
    operator GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver() noexcept {
      return *reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(this);
    }
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // Get instance field reference: private System.Int32 _afterCutScoreWithMultiplier
    int& dyn__afterCutScoreWithMultiplier();
    // Get instance field reference: private System.Int32 _beforeCutScoreWithMultiplier
    int& dyn__beforeCutScoreWithMultiplier();
    // Get instance field reference: private System.Int32 _cutDistanceScoreWithMultiplier
    int& dyn__cutDistanceScoreWithMultiplier();
    // Get instance field reference: private System.Int32 _multiplier
    int& dyn__multiplier();
    // Get instance field reference: private ISaberSwingRatingCounter _saberSwingRatingCounter
    GlobalNamespace::ISaberSwingRatingCounter*& dyn__saberSwingRatingCounter();
    // Get instance field reference: private System.Single _cutDistanceToCenter
    float& dyn__cutDistanceToCenter();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // Get instance field reference: private readonly LazyCopyHashSet`1<ICutScoreBufferDidFinishEvent> _didFinishEvent
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>*& dyn__didFinishEvent();
    // public System.Int32 get_scoreWithMultiplier()
    // Offset: 0x10EB548
    int get_scoreWithMultiplier();
    // public System.Int32 get_multiplier()
    // Offset: 0x10EB55C
    int get_multiplier();
    // public ILazyCopyHashSet`1<ICutScoreBufferDidFinishEvent> get_didFinishEvent()
    // Offset: 0x10EB564
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>* get_didFinishEvent();
    // public System.Void Init(in NoteCutInfo noteCutInfo, System.Int32 multiplier)
    // Offset: 0x10EB56C
    void Init(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, int multiplier);
    // private System.Void RefreshScores()
    // Offset: 0x10EB6C8
    void RefreshScores();
    // public System.Void HandleSaberSwingRatingCounterDidChange(ISaberSwingRatingCounter swingRatingCounter, System.Single rating)
    // Offset: 0x10EB738
    void HandleSaberSwingRatingCounterDidChange(GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter, float rating);
    // public System.Void HandleSaberSwingRatingCounterDidFinish(ISaberSwingRatingCounter swingRatingCounter)
    // Offset: 0x10EB73C
    void HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter);
    // public System.Void .ctor()
    // Offset: 0x10EB998
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutScoreBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutScoreBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutScoreBuffer*, creationType>()));
    }
  }; // CutScoreBuffer
  #pragma pack(pop)
  static check_size<sizeof(CutScoreBuffer), 56 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>*)> __GlobalNamespace_CutScoreBufferSizeCheck;
  static_assert(sizeof(CutScoreBuffer) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutScoreBuffer*, "", "CutScoreBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_scoreWithMultiplier
// Il2CppName: get_scoreWithMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_scoreWithMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_scoreWithMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_multiplier
// Il2CppName: get_multiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_multiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_multiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::ICutScoreBufferDidFinishEvent*>* (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(ByRef<GlobalNamespace::NoteCutInfo>, int)>(&GlobalNamespace::CutScoreBuffer::Init)> {
  static const MethodInfo* get() {
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteCutInfo, multiplier});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::RefreshScores
// Il2CppName: RefreshScores
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)()>(&GlobalNamespace::CutScoreBuffer::RefreshScores)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "RefreshScores", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange
// Il2CppName: HandleSaberSwingRatingCounterDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(GlobalNamespace::ISaberSwingRatingCounter*, float)>(&GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidChange)> {
  static const MethodInfo* get() {
    static auto* swingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    static auto* rating = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "HandleSaberSwingRatingCounterDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingRatingCounter, rating});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish
// Il2CppName: HandleSaberSwingRatingCounterDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutScoreBuffer::*)(GlobalNamespace::ISaberSwingRatingCounter*)>(&GlobalNamespace::CutScoreBuffer::HandleSaberSwingRatingCounterDidFinish)> {
  static const MethodInfo* get() {
    static auto* swingRatingCounter = &::il2cpp_utils::GetClassFromName("", "ISaberSwingRatingCounter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutScoreBuffer*), "HandleSaberSwingRatingCounterDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{swingRatingCounter});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutScoreBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
