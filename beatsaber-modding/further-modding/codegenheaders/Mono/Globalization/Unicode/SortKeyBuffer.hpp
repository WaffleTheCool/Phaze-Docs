// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: SortKey
  class SortKey;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x83
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Globalization.Unicode.SortKeyBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class SortKeyBuffer : public ::Il2CppObject {
    public:
    // private System.Byte[] l1b
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* l1b;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l2b
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* l2b;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l3b
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* l3b;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l4sb
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* l4sb;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l4tb
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* l4tb;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l4kb
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* l4kb;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l4wb
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* l4wb;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] l5b
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* l5b;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.String source
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* source;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 l1
    // Size: 0x4
    // Offset: 0x58
    int l1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l2
    // Size: 0x4
    // Offset: 0x5C
    int l2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l3
    // Size: 0x4
    // Offset: 0x60
    int l3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l4s
    // Size: 0x4
    // Offset: 0x64
    int l4s;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l4t
    // Size: 0x4
    // Offset: 0x68
    int l4t;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l4k
    // Size: 0x4
    // Offset: 0x6C
    int l4k;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l4w
    // Size: 0x4
    // Offset: 0x70
    int l4w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 l5
    // Size: 0x4
    // Offset: 0x74
    int l5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lcid
    // Size: 0x4
    // Offset: 0x78
    int lcid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Globalization.CompareOptions options
    // Size: 0x4
    // Offset: 0x7C
    System::Globalization::CompareOptions options;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareOptions) == 0x4);
    // private System.Boolean processLevel2
    // Size: 0x1
    // Offset: 0x80
    bool processLevel2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean frenchSort
    // Size: 0x1
    // Offset: 0x81
    bool frenchSort;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean frenchSorted
    // Size: 0x1
    // Offset: 0x82
    bool frenchSorted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SortKeyBuffer
    SortKeyBuffer(::Array<uint8_t>* l1b_ = {}, ::Array<uint8_t>* l2b_ = {}, ::Array<uint8_t>* l3b_ = {}, ::Array<uint8_t>* l4sb_ = {}, ::Array<uint8_t>* l4tb_ = {}, ::Array<uint8_t>* l4kb_ = {}, ::Array<uint8_t>* l4wb_ = {}, ::Array<uint8_t>* l5b_ = {}, ::Il2CppString* source_ = {}, int l1_ = {}, int l2_ = {}, int l3_ = {}, int l4s_ = {}, int l4t_ = {}, int l4k_ = {}, int l4w_ = {}, int l5_ = {}, int lcid_ = {}, System::Globalization::CompareOptions options_ = {}, bool processLevel2_ = {}, bool frenchSort_ = {}, bool frenchSorted_ = {}) noexcept : l1b{l1b_}, l2b{l2b_}, l3b{l3b_}, l4sb{l4sb_}, l4tb{l4tb_}, l4kb{l4kb_}, l4wb{l4wb_}, l5b{l5b_}, source{source_}, l1{l1_}, l2{l2_}, l3{l3_}, l4s{l4s_}, l4t{l4t_}, l4k{l4k_}, l4w{l4w_}, l5{l5_}, lcid{lcid_}, options{options_}, processLevel2{processLevel2_}, frenchSort{frenchSort_}, frenchSorted{frenchSorted_} {}
    // Get instance field reference: private System.Byte[] l1b
    ::Array<uint8_t>*& dyn_l1b();
    // Get instance field reference: private System.Byte[] l2b
    ::Array<uint8_t>*& dyn_l2b();
    // Get instance field reference: private System.Byte[] l3b
    ::Array<uint8_t>*& dyn_l3b();
    // Get instance field reference: private System.Byte[] l4sb
    ::Array<uint8_t>*& dyn_l4sb();
    // Get instance field reference: private System.Byte[] l4tb
    ::Array<uint8_t>*& dyn_l4tb();
    // Get instance field reference: private System.Byte[] l4kb
    ::Array<uint8_t>*& dyn_l4kb();
    // Get instance field reference: private System.Byte[] l4wb
    ::Array<uint8_t>*& dyn_l4wb();
    // Get instance field reference: private System.Byte[] l5b
    ::Array<uint8_t>*& dyn_l5b();
    // Get instance field reference: private System.String source
    ::Il2CppString*& dyn_source();
    // Get instance field reference: private System.Int32 l1
    int& dyn_l1();
    // Get instance field reference: private System.Int32 l2
    int& dyn_l2();
    // Get instance field reference: private System.Int32 l3
    int& dyn_l3();
    // Get instance field reference: private System.Int32 l4s
    int& dyn_l4s();
    // Get instance field reference: private System.Int32 l4t
    int& dyn_l4t();
    // Get instance field reference: private System.Int32 l4k
    int& dyn_l4k();
    // Get instance field reference: private System.Int32 l4w
    int& dyn_l4w();
    // Get instance field reference: private System.Int32 l5
    int& dyn_l5();
    // Get instance field reference: private System.Int32 lcid
    int& dyn_lcid();
    // Get instance field reference: private System.Globalization.CompareOptions options
    System::Globalization::CompareOptions& dyn_options();
    // Get instance field reference: private System.Boolean processLevel2
    bool& dyn_processLevel2();
    // Get instance field reference: private System.Boolean frenchSort
    bool& dyn_frenchSort();
    // Get instance field reference: private System.Boolean frenchSorted
    bool& dyn_frenchSorted();
    // public System.Void .ctor(System.Int32 lcid)
    // Offset: 0x1A6CCE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortKeyBuffer* New_ctor(int lcid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::SortKeyBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortKeyBuffer*, creationType>(lcid)));
    }
    // public System.Void Reset()
    // Offset: 0x1A71364
    void Reset();
    // System.Void Initialize(System.Globalization.CompareOptions options, System.Int32 lcid, System.String s, System.Boolean frenchSort)
    // Offset: 0x1A6CCE8
    void Initialize(System::Globalization::CompareOptions options, int lcid, ::Il2CppString* s, bool frenchSort);
    // System.Void AppendCJKExtension(System.Byte lv1msb, System.Byte lv1lsb)
    // Offset: 0x1A6D7B4
    void AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb);
    // System.Void AppendKana(System.Byte category, System.Byte lv1, System.Byte lv2, System.Byte lv3, System.Boolean isSmallKana, System.Byte markType, System.Boolean isKatakana, System.Boolean isHalfWidth)
    // Offset: 0x1A6D90C
    void AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth);
    // System.Void AppendNormal(System.Byte category, System.Byte lv1, System.Byte lv2, System.Byte lv3)
    // Offset: 0x1A6D664
    void AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3);
    // private System.Void AppendLevel5(System.Byte category, System.Byte lv1)
    // Offset: 0x1A7144C
    void AppendLevel5(uint8_t category, uint8_t lv1);
    // private System.Void AppendBufferPrimitive(System.Byte value, ref System.Byte[] buf, ref System.Int32 bidx)
    // Offset: 0x1A71374
    void AppendBufferPrimitive(uint8_t value, ByRef<::Array<uint8_t>*> buf, ByRef<int> bidx);
    // public System.Globalization.SortKey GetResultAndReset()
    // Offset: 0x1A6D23C
    System::Globalization::SortKey* GetResultAndReset();
    // private System.Int32 GetOptimizedLength(System.Byte[] data, System.Int32 len, System.Byte defaultValue)
    // Offset: 0x1A719D0
    int GetOptimizedLength(::Array<uint8_t>* data, int len, uint8_t defaultValue);
    // public System.Globalization.SortKey GetResult()
    // Offset: 0x1A714F0
    System::Globalization::SortKey* GetResult();
  }; // Mono.Globalization.Unicode.SortKeyBuffer
  #pragma pack(pop)
  static check_size<sizeof(SortKeyBuffer), 130 + sizeof(bool)> __Mono_Globalization_Unicode_SortKeyBufferSizeCheck;
  static_assert(sizeof(SortKeyBuffer) == 0x83);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SortKeyBuffer*, "Mono.Globalization.Unicode", "SortKeyBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)()>(&Mono::Globalization::Unicode::SortKeyBuffer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(System::Globalization::CompareOptions, int, ::Il2CppString*, bool)>(&Mono::Globalization::Unicode::SortKeyBuffer::Initialize)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("System.Globalization", "CompareOptions")->byval_arg;
    static auto* lcid = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* frenchSort = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options, lcid, s, frenchSort});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::AppendCJKExtension
// Il2CppName: AppendCJKExtension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t)>(&Mono::Globalization::Unicode::SortKeyBuffer::AppendCJKExtension)> {
  static const MethodInfo* get() {
    static auto* lv1msb = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv1lsb = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "AppendCJKExtension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lv1msb, lv1lsb});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::AppendKana
// Il2CppName: AppendKana
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t, bool, uint8_t, bool, bool)>(&Mono::Globalization::Unicode::SortKeyBuffer::AppendKana)> {
  static const MethodInfo* get() {
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv3 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* isSmallKana = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* markType = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* isKatakana = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isHalfWidth = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "AppendKana", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{category, lv1, lv2, lv3, isSmallKana, markType, isKatakana, isHalfWidth});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::AppendNormal
// Il2CppName: AppendNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t, uint8_t, uint8_t)>(&Mono::Globalization::Unicode::SortKeyBuffer::AppendNormal)> {
  static const MethodInfo* get() {
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv2 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv3 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "AppendNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{category, lv1, lv2, lv3});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::AppendLevel5
// Il2CppName: AppendLevel5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, uint8_t)>(&Mono::Globalization::Unicode::SortKeyBuffer::AppendLevel5)> {
  static const MethodInfo* get() {
    static auto* category = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lv1 = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "AppendLevel5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{category, lv1});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::AppendBufferPrimitive
// Il2CppName: AppendBufferPrimitive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Globalization::Unicode::SortKeyBuffer::*)(uint8_t, ByRef<::Array<uint8_t>*>, ByRef<int>)>(&Mono::Globalization::Unicode::SortKeyBuffer::AppendBufferPrimitive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* bidx = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "AppendBufferPrimitive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, buf, bidx});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::GetResultAndReset
// Il2CppName: GetResultAndReset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::SortKey* (Mono::Globalization::Unicode::SortKeyBuffer::*)()>(&Mono::Globalization::Unicode::SortKeyBuffer::GetResultAndReset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "GetResultAndReset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::GetOptimizedLength
// Il2CppName: GetOptimizedLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Globalization::Unicode::SortKeyBuffer::*)(::Array<uint8_t>*, int, uint8_t)>(&Mono::Globalization::Unicode::SortKeyBuffer::GetOptimizedLength)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* defaultValue = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "GetOptimizedLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, len, defaultValue});
  }
};
// Writing MetadataGetter for method: Mono::Globalization::Unicode::SortKeyBuffer::GetResult
// Il2CppName: GetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::SortKey* (Mono::Globalization::Unicode::SortKeyBuffer::*)()>(&Mono::Globalization::Unicode::SortKeyBuffer::GetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Globalization::Unicode::SortKeyBuffer*), "GetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
