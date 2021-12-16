// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: CutoutAnimateEffect
#include "GlobalNamespace/CutoutAnimateEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public CutoutAnimateEffect <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CutoutAnimateEffect*) == 0x8);
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x28
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single cutoutStart
    // Size: 0x4
    // Offset: 0x2C
    float cutoutStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single cutoutEnd
    // Size: 0x4
    // Offset: 0x30
    float cutoutEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <elapsedTime>5__2
    // Size: 0x4
    // Offset: 0x34
    float $elapsedTime$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $AnimateToCutoutCoroutine$d__7
    $AnimateToCutoutCoroutine$d__7(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::CutoutAnimateEffect* $$4__this_ = {}, float duration_ = {}, float cutoutStart_ = {}, float cutoutEnd_ = {}, float $elapsedTime$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, duration{duration_}, cutoutStart{cutoutStart_}, cutoutEnd{cutoutEnd_}, $elapsedTime$5__2{$elapsedTime$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public CutoutAnimateEffect <>4__this
    GlobalNamespace::CutoutAnimateEffect*& dyn_$$4__this();
    // Get instance field reference: public System.Single duration
    float& dyn_duration();
    // Get instance field reference: public System.Single cutoutStart
    float& dyn_cutoutStart();
    // Get instance field reference: public System.Single cutoutEnd
    float& dyn_cutoutEnd();
    // Get instance field reference: private System.Single <elapsedTime>5__2
    float& dyn_$elapsedTime$5__2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x10EBEA8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10EBF10
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10EBBA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10EBD64
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10EBD68
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10EBEB0
    void System_Collections_IEnumerator_Reset();
  }; // CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7
  #pragma pack(pop)
  static check_size<sizeof(CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7), 52 + sizeof(float)> __GlobalNamespace_CutoutAnimateEffect_$AnimateToCutoutCoroutine$d__7SizeCheck;
  static_assert(sizeof(CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*, "", "CutoutAnimateEffect/<AnimateToCutoutCoroutine>d__7");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::*)()>(&GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::*)()>(&GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::*)()>(&GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::*)()>(&GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::*)()>(&GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CutoutAnimateEffect::$AnimateToCutoutCoroutine$d__7*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
