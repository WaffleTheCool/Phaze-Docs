// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainFlowCoordinator
#include "GlobalNamespace/MainFlowCoordinator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__40
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MainFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainFlowCoordinator*) == 0x8);
    // public MenuDestination destination
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuDestination* destination;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuDestination*) == 0x8);
    // Creating value type constructor for type: $ProcessMenuDestinationRequestAfterFrameCoroutine$d__40
    $ProcessMenuDestinationRequestAfterFrameCoroutine$d__40(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MainFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MenuDestination* destination_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, destination{destination_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public MainFlowCoordinator <>4__this
    GlobalNamespace::MainFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public MenuDestination destination
    GlobalNamespace::MenuDestination*& dyn_destination();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x11A2B9C
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x11A2C04
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x11A27C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x11A2B40
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x11A2B44
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x11A2BA4
    void System_Collections_IEnumerator_Reset();
  }; // MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__40
  #pragma pack(pop)
  static check_size<sizeof(MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40), 40 + sizeof(GlobalNamespace::MenuDestination*)> __GlobalNamespace_MainFlowCoordinator_$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40SizeCheck;
  static_assert(sizeof(MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*, "", "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__40");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::*)()>(&GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::*)()>(&GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::*)()>(&GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::*)()>(&GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::*)()>(&GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__40*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
