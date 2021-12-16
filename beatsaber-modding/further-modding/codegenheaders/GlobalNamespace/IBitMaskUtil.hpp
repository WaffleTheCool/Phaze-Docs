// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBitMask`1<T>
  template<typename T>
  class IBitMask_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IBitMaskUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class IBitMaskUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IBitMaskUtil
    IBitMaskUtil() noexcept {}
    // static public System.Int32 NumberOfSetBits(T bitMask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int NumberOfSetBits(T bitMask) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::NumberOfSetBits");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "NumberOfSetBits", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bitMask);
    }
    // static public System.String ToShortString(T bitMask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Il2CppString* ToShortString(T bitMask) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::ToShortString");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "ToShortString", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bitMask);
    }
    // static public System.Byte[] ToBytes(T bitMask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<uint8_t>* ToBytes(T bitMask) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::ToBytes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "ToBytes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bitMask)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bitMask);
    }
    // static public System.Boolean TryParse(System.String stringSerializedMask, out T bitMask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool TryParse(::Il2CppString* stringSerializedMask, ByRef<T> bitMask) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::TryParse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "TryParse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stringSerializedMask), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, stringSerializedMask, byref(bitMask));
    }
    // static public System.Boolean TryParse(System.String stringSerializedMask, System.Int32 offset, System.Int32 length, out T bitMask)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool TryParse(::Il2CppString* stringSerializedMask, int offset, int length, ByRef<T> bitMask) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::TryParse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "TryParse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stringSerializedMask), ::il2cpp_utils::ExtractType(offset), ::il2cpp_utils::ExtractType(length), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, stringSerializedMask, offset, length, byref(bitMask));
    }
    // static public T FromBytes(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FromBytes(::Array<uint8_t>* bytes, int offset) {
      static_assert(std::is_base_of_v<GlobalNamespace::IBitMask_1<T>, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IBitMaskUtil::FromBytes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "IBitMaskUtil", "FromBytes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(bytes), ::il2cpp_utils::ExtractType(offset)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, bytes, offset);
    }
    // static private System.UInt32 GetHexDigit(System.Char c)
    // Offset: 0x2374B08
    static uint GetHexDigit(::Il2CppChar c);
    // static private System.UInt32 GetBase64Digit(System.Char c)
    // Offset: 0x2374B58
    static uint GetBase64Digit(::Il2CppChar c);
    // static private System.Char GetBase64Char(System.UInt64 digit)
    // Offset: 0x2374BC8
    static ::Il2CppChar GetBase64Char(uint64_t digit);
  }; // IBitMaskUtil
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBitMaskUtil*, "", "IBitMaskUtil");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::NumberOfSetBits
// Il2CppName: NumberOfSetBits
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::ToShortString
// Il2CppName: ToShortString
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::ToBytes
// Il2CppName: ToBytes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::TryParse
// Il2CppName: TryParse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::TryParse
// Il2CppName: TryParse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::FromBytes
// Il2CppName: FromBytes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::GetHexDigit
// Il2CppName: GetHexDigit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppChar)>(&GlobalNamespace::IBitMaskUtil::GetHexDigit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBitMaskUtil*), "GetHexDigit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::GetBase64Digit
// Il2CppName: GetBase64Digit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::Il2CppChar)>(&GlobalNamespace::IBitMaskUtil::GetBase64Digit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBitMaskUtil*), "GetBase64Digit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBitMaskUtil::GetBase64Char
// Il2CppName: GetBase64Char
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(uint64_t)>(&GlobalNamespace::IBitMaskUtil::GetBase64Char)> {
  static const MethodInfo* get() {
    static auto* digit = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBitMaskUtil*), "GetBase64Char", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{digit});
  }
};
