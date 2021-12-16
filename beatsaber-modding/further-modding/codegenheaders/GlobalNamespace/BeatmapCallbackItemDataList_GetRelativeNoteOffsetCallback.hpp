// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapCallbackItemDataList
#include "GlobalNamespace/BeatmapCallbackItemDataList.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetRelativeNoteOffsetCallback
    GetRelativeNoteOffsetCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11E1288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*, creationType>(object, method)));
    }
    // public UnityEngine.Vector2 Invoke(System.Int32 lineIndex, NoteLineLayer noteLineLayer)
    // Offset: 0x11E0C00
    UnityEngine::Vector2 Invoke(int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer);
    // public System.IAsyncResult BeginInvoke(System.Int32 lineIndex, NoteLineLayer noteLineLayer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11E1298
    System::IAsyncResult* BeginInvoke(int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Vector2 EndInvoke(System.IAsyncResult result)
    // Offset: 0x11E1340
    UnityEngine::Vector2 EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*, "", "BeatmapCallbackItemDataList/GetRelativeNoteOffsetCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::*)(int, GlobalNamespace::NoteLineLayer)>(&GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* lineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineIndex, noteLineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::*)(int, GlobalNamespace::NoteLineLayer, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* lineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* noteLineLayer = &::il2cpp_utils::GetClassFromName("", "NoteLineLayer")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineIndex, noteLineLayer, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::*)(System::IAsyncResult*)>(&GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapCallbackItemDataList::GetRelativeNoteOffsetCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
