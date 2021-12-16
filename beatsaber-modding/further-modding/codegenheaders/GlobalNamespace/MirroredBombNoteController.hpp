// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MirroredNoteController`1
#include "GlobalNamespace/MirroredNoteController_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INoteMirrorable
  class INoteMirrorable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MirroredBombNoteController
  // [TokenAttribute] Offset: FFFFFFFF
  class MirroredBombNoteController : public GlobalNamespace::MirroredNoteController_1<GlobalNamespace::INoteMirrorable*> {
    public:
    // Nested type: GlobalNamespace::MirroredBombNoteController::Pool
    class Pool;
    // Creating value type constructor for type: MirroredBombNoteController
    MirroredBombNoteController() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x113C314
    // Implemented from: MirroredNoteController`1
    // Base method: System.Void MirroredNoteController_1::.ctor()
    // Base method: System.Void NoteControllerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MirroredBombNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MirroredBombNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MirroredBombNoteController*, creationType>()));
    }
  }; // MirroredBombNoteController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredBombNoteController*, "", "MirroredBombNoteController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MirroredBombNoteController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
