// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerEnumerated
  class DerEnumerated;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectDigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.DerEnumerated digestedObjectType
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerEnumerated*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerObjectIdentifier otherObjectTypeID
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier digestAlgorithm
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerBitString objectDigest
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerBitString* objectDigest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Creating value type constructor for type: ObjectDigestInfo
    ObjectDigestInfo(Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType_ = {}, Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm_ = {}, Org::BouncyCastle::Asn1::DerBitString* objectDigest_ = {}) noexcept : digestedObjectType{digestedObjectType_}, otherObjectTypeID{otherObjectTypeID_}, digestAlgorithm{digestAlgorithm_}, objectDigest{objectDigest_} {}
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerEnumerated digestedObjectType
    Org::BouncyCastle::Asn1::DerEnumerated*& dyn_digestedObjectType();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerObjectIdentifier otherObjectTypeID
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_otherObjectTypeID();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier digestAlgorithm
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_digestAlgorithm();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerBitString objectDigest
    Org::BouncyCastle::Asn1::DerBitString*& dyn_objectDigest();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1A00C6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDigestInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDigestInfo*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(System.Object obj)
    // Offset: 0x1A00AEC
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x19FFB00
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1A00EAC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
  #pragma pack(pop)
  static check_size<sizeof(ObjectDigestInfo), 40 + sizeof(Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_ObjectDigestInfoSizeCheck;
  static_assert(sizeof(ObjectDigestInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* (*)(Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* isExplicit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, isExplicit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::*)()>(&Org::BouncyCastle::Asn1::X509::ObjectDigestInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
