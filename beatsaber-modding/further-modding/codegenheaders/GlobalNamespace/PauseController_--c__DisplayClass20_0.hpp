// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PauseController
#include "GlobalNamespace/PauseController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: PauseController/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PauseController::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    // public System.Boolean value
    // Size: 0x1
    // Offset: 0x10
    bool value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass20_0
    $$c__DisplayClass20_0(bool value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return value;
    }
    // Get instance field reference: public System.Boolean value
    bool& dyn_value();
    // System.Void <get_canPause>b__0(System.Boolean newValue)
    // Offset: 0x11EFE38
    void $get_canPause$b__0(bool newValue);
    // public System.Void .ctor()
    // Offset: 0x11EFE30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseController::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PauseController::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseController::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // PauseController/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(PauseController::$$c__DisplayClass20_0), 16 + sizeof(bool)> __GlobalNamespace_PauseController_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(PauseController::$$c__DisplayClass20_0) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseController::$$c__DisplayClass20_0*, "", "PauseController/<>c__DisplayClass20_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseController::$$c__DisplayClass20_0::$get_canPause$b__0
// Il2CppName: <get_canPause>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::$$c__DisplayClass20_0::*)(bool)>(&GlobalNamespace::PauseController::$$c__DisplayClass20_0::$get_canPause$b__0)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController::$$c__DisplayClass20_0*), "<get_canPause>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
