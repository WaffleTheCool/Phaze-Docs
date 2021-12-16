// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RemoteProcedureCall
#include "GlobalNamespace/RemoteProcedureCall.hpp"
// Including type: RemoteProcedureCall/TypeWrapper`1
#include "GlobalNamespace/RemoteProcedureCall_TypeWrapper_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: IRemoteProcedureCall because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: RemoteProcedureCall`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T0>
  class RemoteProcedureCall_1 : public GlobalNamespace::RemoteProcedureCall {
    public:
    // private RemoteProcedureCall/TypeWrapper`1<T0> _value0
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0> value0;
    // Creating value type constructor for type: RemoteProcedureCall_1
    RemoteProcedureCall_1(GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0> value0_ = {}) noexcept : value0{value0_} {}
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Autogenerated instance field getter
    // Get instance field: private RemoteProcedureCall/TypeWrapper`1<T0> _value0
    GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0>& dyn__value0() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::dyn__value0");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_value0"))->offset;
      return *reinterpret_cast<GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T0>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T0 get_value0()
    // Offset: 0xFFFFFFFF
    T0 get_value0() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::get_value0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_value0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T0, false>(___instance_arg, ___internal__method);
    }
    // public System.Void set_value0(T0 value)
    // Offset: 0xFFFFFFFF
    void set_value0(T0 value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::set_value0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_value0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public IRemoteProcedureCall Init(System.Single syncTime, T0 value0)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IRemoteProcedureCall* Init(float syncTime, T0 value0) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::Init");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(syncTime), ::il2cpp_utils::ExtractType(value0)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IRemoteProcedureCall*, false>(___instance_arg, ___internal__method, syncTime, value0);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteProcedureCall_1<T0>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteProcedureCall_1<T0>*, creationType>()));
    }
    // protected override System.Void SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    void SerializeData(LiteNetLib::Utils::NetDataWriter* writer) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::SerializeData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SerializeData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(writer)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, writer);
    }
    // protected override System.Void DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFF
    // Implemented from: RemoteProcedureCall
    // Base method: System.Void RemoteProcedureCall::DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    void DeserializeData(LiteNetLib::Utils::NetDataReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall_1::DeserializeData");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DeserializeData", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(reader)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, reader);
    }
  }; // RemoteProcedureCall`1
  // Could not write size check! Type: RemoteProcedureCall`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RemoteProcedureCall_1, "", "RemoteProcedureCall`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
