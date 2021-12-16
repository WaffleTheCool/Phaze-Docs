// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerTaggedObject
#include "Org/BouncyCastle/Asn1/DerTaggedObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerTaggedObject
  // [TokenAttribute] Offset: FFFFFFFF
  class BerTaggedObject : public Org::BouncyCastle::Asn1::DerTaggedObject {
    public:
    // Creating value type constructor for type: BerTaggedObject
    BerTaggedObject() noexcept {}
    // public System.Void .ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x1736904
    // Implemented from: Org.BouncyCastle.Asn1.DerTaggedObject
    // Base method: System.Void DerTaggedObject::.ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Base method: System.Void Asn1TaggedObject::.ctor(System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerTaggedObject* New_ctor(int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerTaggedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerTaggedObject*, creationType>(tagNo, obj)));
    }
    // public System.Void .ctor(System.Boolean explicitly, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x1733890
    // Implemented from: Org.BouncyCastle.Asn1.DerTaggedObject
    // Base method: System.Void DerTaggedObject::.ctor(System.Boolean explicitly, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Base method: System.Void Asn1TaggedObject::.ctor(System.Boolean explicitly, System.Int32 tagNo, Org.BouncyCastle.Asn1.Asn1Encodable obj)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerTaggedObject* New_ctor(bool explicitly, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerTaggedObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerTaggedObject*, creationType>(explicitly, tagNo, obj)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1736994
    // Implemented from: Org.BouncyCastle.Asn1.DerTaggedObject
    // Base method: System.Void DerTaggedObject::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerTaggedObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerTaggedObject*, "Org.BouncyCastle.Asn1", "BerTaggedObject");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerTaggedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerTaggedObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerTaggedObject::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerTaggedObject::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::BerTaggedObject::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerTaggedObject*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};
