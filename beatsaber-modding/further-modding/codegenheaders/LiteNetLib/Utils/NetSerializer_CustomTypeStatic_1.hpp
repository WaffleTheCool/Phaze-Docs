// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.NetSerializer
#include "LiteNetLib/Utils/NetSerializer.hpp"
// Including type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType
#include "LiteNetLib/Utils/NetSerializer_CustomType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeStatic`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TProperty>
  class NetSerializer::CustomTypeStatic_1 : public LiteNetLib::Utils::NetSerializer::CustomType {
    public:
    // private readonly System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> _writer
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>* writer;
    // Field size check
    static_assert(sizeof(System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>*) == 0x8);
    // private readonly System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> _reader
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>* reader;
    // Field size check
    static_assert(sizeof(System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>*) == 0x8);
    // Creating value type constructor for type: CustomTypeStatic_1
    CustomTypeStatic_1(System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>* writer_ = {}, System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>* reader_ = {}) noexcept : writer{writer_}, reader{reader_} {}
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> _writer
    System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>*& dyn__writer() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1::dyn__writer");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_writer"))->offset;
      return *reinterpret_cast<System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> _reader
    System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>*& dyn__reader() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1::dyn__reader");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_reader"))->offset;
      return *reinterpret_cast<System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Action`2<LiteNetLib.Utils.NetDataWriter,TProperty> writer, System.Func`2<LiteNetLib.Utils.NetDataReader,TProperty> reader)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetSerializer::CustomTypeStatic_1<TProperty>* New_ctor(System::Action_2<LiteNetLib::Utils::NetDataWriter*, TProperty>* writer, System::Func_2<LiteNetLib::Utils::NetDataReader*, TProperty>* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetSerializer::CustomTypeStatic_1<TProperty>*, creationType>(writer, reader)));
    }
    // public override LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T> Get()
    // Offset: 0xFFFFFFFF
    // Implemented from: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomType
    // Base method: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.FastCall`1<T> CustomType::Get()
    template<class T>
    LiteNetLib::Utils::NetSerializer::FastCall_1<T>* Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1::Get");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<LiteNetLib::Utils::NetSerializer::FastCall_1<T>*, false>(___instance_arg, ___generic__method);
    }
  }; // LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeStatic`1
  // Could not write size check! Type: LiteNetLib.Utils.NetSerializer/LiteNetLib.Utils.CustomTypeStatic`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(LiteNetLib::Utils::NetSerializer::CustomTypeStatic_1, "LiteNetLib.Utils", "NetSerializer/CustomTypeStatic`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
