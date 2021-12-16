// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerIA5String
#include "Org/BouncyCastle/Asn1/DerIA5String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.Misc
namespace Org::BouncyCastle::Asn1::Misc {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Misc.NetscapeRevocationUrl
  // [TokenAttribute] Offset: FFFFFFFF
  class NetscapeRevocationUrl : public Org::BouncyCastle::Asn1::DerIA5String {
    public:
    // Creating value type constructor for type: NetscapeRevocationUrl
    NetscapeRevocationUrl() noexcept {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerIA5String str)
    // Offset: 0x17B4404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetscapeRevocationUrl* New_ctor(Org::BouncyCastle::Asn1::DerIA5String* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetscapeRevocationUrl*, creationType>(str)));
    }
    // public override System.String ToString()
    // Offset: 0x17B4448
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.Misc.NetscapeRevocationUrl
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*, "Org.BouncyCastle.Asn1.Misc", "NetscapeRevocationUrl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::*)()>(&Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Misc::NetscapeRevocationUrl*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
