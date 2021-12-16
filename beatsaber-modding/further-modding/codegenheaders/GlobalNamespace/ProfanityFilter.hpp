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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ProfanityFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class ProfanityFilter : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::ProfanityFilter::TrieNode
    class TrieNode;
    // Nested type: GlobalNamespace::ProfanityFilter::$GetLookalikeLetters$d__4
    class $GetLookalikeLetters$d__4;
    // private readonly ProfanityFilter/TrieNode _trie
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ProfanityFilter::TrieNode* trie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ProfanityFilter::TrieNode*) == 0x8);
    // Creating value type constructor for type: ProfanityFilter
    ProfanityFilter(GlobalNamespace::ProfanityFilter::TrieNode* trie_ = {}) noexcept : trie{trie_} {}
    // Creating conversion operator: operator GlobalNamespace::ProfanityFilter::TrieNode*
    constexpr operator GlobalNamespace::ProfanityFilter::TrieNode*() const noexcept {
      return trie;
    }
    // Get instance field reference: private readonly ProfanityFilter/TrieNode _trie
    GlobalNamespace::ProfanityFilter::TrieNode*& dyn__trie();
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.String> wordList)
    // Offset: 0x16FB0C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProfanityFilter* New_ctor(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* wordList) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ProfanityFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProfanityFilter*, creationType>(wordList)));
    }
    // public System.Boolean IsProfane(System.String word)
    // Offset: 0x16FB770
    bool IsProfane(::Il2CppString* word);
    // static private System.Collections.Generic.IEnumerable`1<System.Char> GetLookalikeLetters(System.Char c)
    // Offset: 0x16FB964
    static System::Collections::Generic::IEnumerable_1<::Il2CppChar>* GetLookalikeLetters(::Il2CppChar c);
    // static private System.Char GetLeetEquivalent(System.Char c)
    // Offset: 0x16FBA1C
    static ::Il2CppChar GetLeetEquivalent(::Il2CppChar c);
  }; // ProfanityFilter
  #pragma pack(pop)
  static check_size<sizeof(ProfanityFilter), 16 + sizeof(GlobalNamespace::ProfanityFilter::TrieNode*)> __GlobalNamespace_ProfanityFilterSizeCheck;
  static_assert(sizeof(ProfanityFilter) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProfanityFilter*, "", "ProfanityFilter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ProfanityFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ProfanityFilter::IsProfane
// Il2CppName: IsProfane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ProfanityFilter::*)(::Il2CppString*)>(&GlobalNamespace::ProfanityFilter::IsProfane)> {
  static const MethodInfo* get() {
    static auto* word = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProfanityFilter*), "IsProfane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{word});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProfanityFilter::GetLookalikeLetters
// Il2CppName: GetLookalikeLetters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::Il2CppChar>* (*)(::Il2CppChar)>(&GlobalNamespace::ProfanityFilter::GetLookalikeLetters)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProfanityFilter*), "GetLookalikeLetters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ProfanityFilter::GetLeetEquivalent
// Il2CppName: GetLeetEquivalent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (*)(::Il2CppChar)>(&GlobalNamespace::ProfanityFilter::GetLeetEquivalent)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ProfanityFilter*), "GetLeetEquivalent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
