// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Encodings
namespace Org::BouncyCastle::Crypto::Encodings {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
  // [TokenAttribute] Offset: FFFFFFFF
  class ISO9796d1Encoding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: bitSize
    char __padding1[0x3] = {};
    // private System.Int32 bitSize
    // Size: 0x4
    // Offset: 0x1C
    int bitSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 padBits
    // Size: 0x4
    // Offset: 0x20
    int padBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: padBits and: modulus
    char __padding3[0x4] = {};
    // private Org.BouncyCastle.Math.BigInteger modulus
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* modulus;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: ISO9796d1Encoding
    ISO9796d1Encoding(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* engine_ = {}, bool forEncryption_ = {}, int bitSize_ = {}, int padBits_ = {}, Org::BouncyCastle::Math::BigInteger* modulus_ = {}) noexcept : engine{engine_}, forEncryption{forEncryption_}, bitSize{bitSize_}, padBits{padBits_}, modulus{modulus_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Sixteen
    static Org::BouncyCastle::Math::BigInteger* _get_Sixteen();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Sixteen
    static void _set_Sixteen(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Six
    static Org::BouncyCastle::Math::BigInteger* _get_Six();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Six
    static void _set_Six(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly System.Byte[] shadows
    static ::Array<uint8_t>* _get_shadows();
    // Set static field: static private readonly System.Byte[] shadows
    static void _set_shadows(::Array<uint8_t>* value);
    // Get static field: static private readonly System.Byte[] inverse
    static ::Array<uint8_t>* _get_inverse();
    // Set static field: static private readonly System.Byte[] inverse
    static void _set_inverse(::Array<uint8_t>* value);
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IAsymmetricBlockCipher engine
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_engine();
    // Get instance field reference: private System.Boolean forEncryption
    bool& dyn_forEncryption();
    // Get instance field reference: private System.Int32 bitSize
    int& dyn_bitSize();
    // Get instance field reference: private System.Int32 padBits
    int& dyn_padBits();
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger modulus
    Org::BouncyCastle::Math::BigInteger*& dyn_modulus();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher)
    // Offset: 0x19366E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ISO9796d1Encoding* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ISO9796d1Encoding*, creationType>(cipher)));
    }
    // static private System.Void .cctor()
    // Offset: 0x19372B4
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1936714
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x19368C4
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x1936998
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1936A6C
    ::Array<uint8_t>* ProcessBlock(::Array<uint8_t>* input, int inOff, int length);
    // private System.Byte[] EncodeBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1936A7C
    ::Array<uint8_t>* EncodeBlock(::Array<uint8_t>* input, int inOff, int inLen);
    // private System.Byte[] DecodeBlock(System.Byte[] input, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x1936DE0
    ::Array<uint8_t>* DecodeBlock(::Array<uint8_t>* input, int inOff, int inLen);
  }; // Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
  #pragma pack(pop)
  static check_size<sizeof(ISO9796d1Encoding), 40 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Encodings_ISO9796d1EncodingSizeCheck;
  static_assert(sizeof(ISO9796d1Encoding) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*, "Org.BouncyCastle.Crypto.Encodings", "ISO9796d1Encoding");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)()>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::EncodeBlock
// Il2CppName: EncodeBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::EncodeBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "EncodeBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, inLen});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::DecodeBlock
// Il2CppName: DecodeBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding::DecodeBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Encodings::ISO9796d1Encoding*), "DecodeBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, inLen});
  }
};
