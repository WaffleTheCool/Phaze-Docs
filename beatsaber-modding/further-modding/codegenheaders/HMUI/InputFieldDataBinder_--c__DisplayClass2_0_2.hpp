// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.InputFieldDataBinder
#include "HMUI/InputFieldDataBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IObservableChange
  class IObservableChange;
  // Forward declaring type: IValue`1<T>
  template<typename T>
  class IValue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.InputFieldDataBinder/HMUI.<>c__DisplayClass2_0`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T0, typename T1>
  class InputFieldDataBinder::$$c__DisplayClass2_0_2 : public ::Il2CppObject {
    public:
    // public System.Func`2<System.String,T1> toValueConvertor
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<::Il2CppString*, T1>* toValueConvertor;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppString*, T1>*) == 0x8);
    // public T0 valueItem
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T0 valueItem;
    // public UnityEngine.UI.InputField inputField
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::UI::InputField* inputField;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::InputField*) == 0x8);
    // public System.Func`2<T1,System.String> toStringConvertor
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<T1, ::Il2CppString*>* toStringConvertor;
    // Field size check
    static_assert(sizeof(System::Func_2<T1, ::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0_2
    $$c__DisplayClass2_0_2(System::Func_2<::Il2CppString*, T1>* toValueConvertor_ = {}, T0 valueItem_ = {}, UnityEngine::UI::InputField* inputField_ = {}, System::Func_2<T1, ::Il2CppString*>* toStringConvertor_ = {}) noexcept : toValueConvertor{toValueConvertor_}, valueItem{valueItem_}, inputField{inputField_}, toStringConvertor{toStringConvertor_} {}
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<System.String,T1> toValueConvertor
    System::Func_2<::Il2CppString*, T1>*& dyn_toValueConvertor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::dyn_toValueConvertor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "toValueConvertor"))->offset;
      return *reinterpret_cast<System::Func_2<::Il2CppString*, T1>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T0 valueItem
    T0& dyn_valueItem() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::dyn_valueItem");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "valueItem"))->offset;
      return *reinterpret_cast<T0*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public UnityEngine.UI.InputField inputField
    UnityEngine::UI::InputField*& dyn_inputField() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::dyn_inputField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "inputField"))->offset;
      return *reinterpret_cast<UnityEngine::UI::InputField**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<T1,System.String> toStringConvertor
    System::Func_2<T1, ::Il2CppString*>*& dyn_toStringConvertor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::dyn_toStringConvertor");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "toStringConvertor"))->offset;
      return *reinterpret_cast<System::Func_2<T1, ::Il2CppString*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Void <AddBindings>b__0(System.String value)
    // Offset: 0xFFFFFFFF
    void $AddBindings$b__0(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::<AddBindings>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddBindings>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // System.Void <AddBindings>b__1()
    // Offset: 0xFFFFFFFF
    void $AddBindings$b__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::<AddBindings>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddBindings>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldDataBinder::$$c__DisplayClass2_0_2<T0, T1>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldDataBinder::$$c__DisplayClass2_0_2<T0, T1>*, creationType>()));
    }
  }; // HMUI.InputFieldDataBinder/HMUI.<>c__DisplayClass2_0`2
  // Could not write size check! Type: HMUI.InputFieldDataBinder/HMUI.<>c__DisplayClass2_0`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2, "HMUI", "InputFieldDataBinder/<>c__DisplayClass2_0`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
