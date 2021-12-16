// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.LongDigest
  // [TokenAttribute] Offset: FFFFFFFF
  class LongDigest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Int32 MyByteLength
    // Size: 0x4
    // Offset: 0x10
    int MyByteLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: MyByteLength and: xBuf
    char __padding0[0x4] = {};
    // private System.Byte[] xBuf
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* xBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 xBufOff
    // Size: 0x4
    // Offset: 0x20
    int xBufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: xBufOff and: byteCount1
    char __padding2[0x4] = {};
    // private System.Int64 byteCount1
    // Size: 0x8
    // Offset: 0x28
    int64_t byteCount1;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 byteCount2
    // Size: 0x8
    // Offset: 0x30
    int64_t byteCount2;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.UInt64 H1
    // Size: 0x8
    // Offset: 0x38
    uint64_t H1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H2
    // Size: 0x8
    // Offset: 0x40
    uint64_t H2;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H3
    // Size: 0x8
    // Offset: 0x48
    uint64_t H3;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H4
    // Size: 0x8
    // Offset: 0x50
    uint64_t H4;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H5
    // Size: 0x8
    // Offset: 0x58
    uint64_t H5;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H6
    // Size: 0x8
    // Offset: 0x60
    uint64_t H6;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H7
    // Size: 0x8
    // Offset: 0x68
    uint64_t H7;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 H8
    // Size: 0x8
    // Offset: 0x70
    uint64_t H8;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64[] W
    // Size: 0x8
    // Offset: 0x78
    ::Array<uint64_t>* W;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // private System.Int32 wOff
    // Size: 0x4
    // Offset: 0x80
    int wOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LongDigest
    LongDigest(int MyByteLength_ = {}, ::Array<uint8_t>* xBuf_ = {}, int xBufOff_ = {}, int64_t byteCount1_ = {}, int64_t byteCount2_ = {}, uint64_t H1_ = {}, uint64_t H2_ = {}, uint64_t H3_ = {}, uint64_t H4_ = {}, uint64_t H5_ = {}, uint64_t H6_ = {}, uint64_t H7_ = {}, uint64_t H8_ = {}, ::Array<uint64_t>* W_ = {}, int wOff_ = {}) noexcept : MyByteLength{MyByteLength_}, xBuf{xBuf_}, xBufOff{xBufOff_}, byteCount1{byteCount1_}, byteCount2{byteCount2_}, H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, H5{H5_}, H6{H6_}, H7{H7_}, H8{H8_}, W{W_}, wOff{wOff_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static readonly System.UInt64[] K
    static ::Array<uint64_t>* _get_K();
    // Set static field: static readonly System.UInt64[] K
    static void _set_K(::Array<uint64_t>* value);
    // Get instance field reference: private System.Int32 MyByteLength
    int& dyn_MyByteLength();
    // Get instance field reference: private System.Byte[] xBuf
    ::Array<uint8_t>*& dyn_xBuf();
    // Get instance field reference: private System.Int32 xBufOff
    int& dyn_xBufOff();
    // Get instance field reference: private System.Int64 byteCount1
    int64_t& dyn_byteCount1();
    // Get instance field reference: private System.Int64 byteCount2
    int64_t& dyn_byteCount2();
    // Get instance field reference: System.UInt64 H1
    uint64_t& dyn_H1();
    // Get instance field reference: System.UInt64 H2
    uint64_t& dyn_H2();
    // Get instance field reference: System.UInt64 H3
    uint64_t& dyn_H3();
    // Get instance field reference: System.UInt64 H4
    uint64_t& dyn_H4();
    // Get instance field reference: System.UInt64 H5
    uint64_t& dyn_H5();
    // Get instance field reference: System.UInt64 H6
    uint64_t& dyn_H6();
    // Get instance field reference: System.UInt64 H7
    uint64_t& dyn_H7();
    // Get instance field reference: System.UInt64 H8
    uint64_t& dyn_H8();
    // Get instance field reference: private System.UInt64[] W
    ::Array<uint64_t>*& dyn_W();
    // Get instance field reference: private System.Int32 wOff
    int& dyn_wOff();
    // public System.String get_AlgorithmName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_AlgorithmName();
    // System.Void .ctor(Org.BouncyCastle.Crypto.Digests.LongDigest t)
    // Offset: 0x1D62E58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::LongDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::LongDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongDigest*, creationType>(t)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D639E0
    static void _cctor();
    // protected System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.LongDigest t)
    // Offset: 0x1D62F00
    void CopyIn(Org::BouncyCastle::Crypto::Digests::LongDigest* t);
    // public System.Void Update(System.Byte input)
    // Offset: 0x1D62FC8
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1D630DC
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Void Finish()
    // Offset: 0x1D63204
    void Finish();
    // public System.Void Reset()
    // Offset: 0x1D638FC
    void Reset();
    // System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1D63050
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // private System.Void AdjustByteCounts()
    // Offset: 0x1D6327C
    void AdjustByteCounts();
    // System.Void ProcessLength(System.Int64 lowW, System.Int64 hiW)
    // Offset: 0x1D632A0
    void ProcessLength(int64_t lowW, int64_t hiW);
    // System.Void ProcessBlock()
    // Offset: 0x1D63320
    void ProcessBlock();
    // static private System.UInt64 Ch(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x1D639A4
    static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Maj(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x1D639C4
    static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Sum0(System.UInt64 x)
    // Offset: 0x1D639B4
    static uint64_t Sum0(uint64_t x);
    // static private System.UInt64 Sum1(System.UInt64 x)
    // Offset: 0x1D63994
    static uint64_t Sum1(uint64_t x);
    // static private System.UInt64 Sigma0(System.UInt64 x)
    // Offset: 0x1D63984
    static uint64_t Sigma0(uint64_t x);
    // static private System.UInt64 Sigma1(System.UInt64 x)
    // Offset: 0x1D63974
    static uint64_t Sigma1(uint64_t x);
    // public System.Int32 GetByteLength()
    // Offset: 0x1D639D8
    int GetByteLength();
    // public System.Int32 GetDigestSize()
    // Offset: 0xFFFFFFFF
    int GetDigestSize();
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFF
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable t)
    // Offset: 0xFFFFFFFF
    void Reset(Org::BouncyCastle::Utilities::IMemoable* t);
    // System.Void .ctor()
    // Offset: 0x1D62DC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongDigest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::LongDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongDigest*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Digests.LongDigest
  #pragma pack(pop)
  static check_size<sizeof(LongDigest), 128 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_LongDigestSizeCheck;
  static_assert(sizeof(LongDigest) == 0x84);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::LongDigest*, "Org.BouncyCastle.Crypto.Digests", "LongDigest");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::CopyIn
// Il2CppName: CopyIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(Org::BouncyCastle::Crypto::Digests::LongDigest*)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::CopyIn)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Digests", "LongDigest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "CopyIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Update)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Finish
// Il2CppName: Finish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Finish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Finish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessWord
// Il2CppName: ProcessWord
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessWord)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "ProcessWord", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::AdjustByteCounts
// Il2CppName: AdjustByteCounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::AdjustByteCounts)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "AdjustByteCounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessLength
// Il2CppName: ProcessLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(int64_t, int64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessLength)> {
  static const MethodInfo* get() {
    static auto* lowW = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* hiW = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "ProcessLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lowW, hiW});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::ProcessBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Ch
// Il2CppName: Ch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Ch)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Ch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Maj
// Il2CppName: Maj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Maj)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Maj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Sum0
// Il2CppName: Sum0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Sum0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Sum0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Sum1
// Il2CppName: Sum1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Sum1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Sum1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Sigma0
// Il2CppName: Sigma0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Sigma0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Sigma0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Sigma1
// Il2CppName: Sigma1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Sigma1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Sigma1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::GetByteLength
// Il2CppName: GetByteLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::GetByteLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "GetByteLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::GetDigestSize
// Il2CppName: GetDigestSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::GetDigestSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "GetDigestSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::DoFinal)> {
  static const MethodInfo* get() {
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::IMemoable* (Org::BouncyCastle::Crypto::Digests::LongDigest::*)()>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Digests::LongDigest::*)(Org::BouncyCastle::Utilities::IMemoable*)>(&Org::BouncyCastle::Crypto::Digests::LongDigest::Reset)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Utilities", "IMemoable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Digests::LongDigest*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Digests::LongDigest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
