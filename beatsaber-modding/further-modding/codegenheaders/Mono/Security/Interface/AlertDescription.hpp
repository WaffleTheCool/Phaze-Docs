// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.AlertDescription
  // [TokenAttribute] Offset: FFFFFFFF
  struct AlertDescription/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: AlertDescription
    constexpr AlertDescription(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Interface.AlertDescription CloseNotify
    static constexpr const uint8_t CloseNotify = 0u;
    // Get static field: static public Mono.Security.Interface.AlertDescription CloseNotify
    static Mono::Security::Interface::AlertDescription _get_CloseNotify();
    // Set static field: static public Mono.Security.Interface.AlertDescription CloseNotify
    static void _set_CloseNotify(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription UnexpectedMessage
    static constexpr const uint8_t UnexpectedMessage = 10u;
    // Get static field: static public Mono.Security.Interface.AlertDescription UnexpectedMessage
    static Mono::Security::Interface::AlertDescription _get_UnexpectedMessage();
    // Set static field: static public Mono.Security.Interface.AlertDescription UnexpectedMessage
    static void _set_UnexpectedMessage(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription BadRecordMAC
    static constexpr const uint8_t BadRecordMAC = 20u;
    // Get static field: static public Mono.Security.Interface.AlertDescription BadRecordMAC
    static Mono::Security::Interface::AlertDescription _get_BadRecordMAC();
    // Set static field: static public Mono.Security.Interface.AlertDescription BadRecordMAC
    static void _set_BadRecordMAC(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription DecryptionFailed_RESERVED
    static constexpr const uint8_t DecryptionFailed_RESERVED = 21u;
    // Get static field: static public Mono.Security.Interface.AlertDescription DecryptionFailed_RESERVED
    static Mono::Security::Interface::AlertDescription _get_DecryptionFailed_RESERVED();
    // Set static field: static public Mono.Security.Interface.AlertDescription DecryptionFailed_RESERVED
    static void _set_DecryptionFailed_RESERVED(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription RecordOverflow
    static constexpr const uint8_t RecordOverflow = 22u;
    // Get static field: static public Mono.Security.Interface.AlertDescription RecordOverflow
    static Mono::Security::Interface::AlertDescription _get_RecordOverflow();
    // Set static field: static public Mono.Security.Interface.AlertDescription RecordOverflow
    static void _set_RecordOverflow(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription DecompressionFailure
    static constexpr const uint8_t DecompressionFailure = 30u;
    // Get static field: static public Mono.Security.Interface.AlertDescription DecompressionFailure
    static Mono::Security::Interface::AlertDescription _get_DecompressionFailure();
    // Set static field: static public Mono.Security.Interface.AlertDescription DecompressionFailure
    static void _set_DecompressionFailure(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription HandshakeFailure
    static constexpr const uint8_t HandshakeFailure = 40u;
    // Get static field: static public Mono.Security.Interface.AlertDescription HandshakeFailure
    static Mono::Security::Interface::AlertDescription _get_HandshakeFailure();
    // Set static field: static public Mono.Security.Interface.AlertDescription HandshakeFailure
    static void _set_HandshakeFailure(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription NoCertificate_RESERVED
    static constexpr const uint8_t NoCertificate_RESERVED = 41u;
    // Get static field: static public Mono.Security.Interface.AlertDescription NoCertificate_RESERVED
    static Mono::Security::Interface::AlertDescription _get_NoCertificate_RESERVED();
    // Set static field: static public Mono.Security.Interface.AlertDescription NoCertificate_RESERVED
    static void _set_NoCertificate_RESERVED(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription BadCertificate
    static constexpr const uint8_t BadCertificate = 42u;
    // Get static field: static public Mono.Security.Interface.AlertDescription BadCertificate
    static Mono::Security::Interface::AlertDescription _get_BadCertificate();
    // Set static field: static public Mono.Security.Interface.AlertDescription BadCertificate
    static void _set_BadCertificate(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription UnsupportedCertificate
    static constexpr const uint8_t UnsupportedCertificate = 43u;
    // Get static field: static public Mono.Security.Interface.AlertDescription UnsupportedCertificate
    static Mono::Security::Interface::AlertDescription _get_UnsupportedCertificate();
    // Set static field: static public Mono.Security.Interface.AlertDescription UnsupportedCertificate
    static void _set_UnsupportedCertificate(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription CertificateRevoked
    static constexpr const uint8_t CertificateRevoked = 44u;
    // Get static field: static public Mono.Security.Interface.AlertDescription CertificateRevoked
    static Mono::Security::Interface::AlertDescription _get_CertificateRevoked();
    // Set static field: static public Mono.Security.Interface.AlertDescription CertificateRevoked
    static void _set_CertificateRevoked(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription CertificateExpired
    static constexpr const uint8_t CertificateExpired = 45u;
    // Get static field: static public Mono.Security.Interface.AlertDescription CertificateExpired
    static Mono::Security::Interface::AlertDescription _get_CertificateExpired();
    // Set static field: static public Mono.Security.Interface.AlertDescription CertificateExpired
    static void _set_CertificateExpired(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription CertificateUnknown
    static constexpr const uint8_t CertificateUnknown = 46u;
    // Get static field: static public Mono.Security.Interface.AlertDescription CertificateUnknown
    static Mono::Security::Interface::AlertDescription _get_CertificateUnknown();
    // Set static field: static public Mono.Security.Interface.AlertDescription CertificateUnknown
    static void _set_CertificateUnknown(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription IlegalParameter
    static constexpr const uint8_t IlegalParameter = 47u;
    // Get static field: static public Mono.Security.Interface.AlertDescription IlegalParameter
    static Mono::Security::Interface::AlertDescription _get_IlegalParameter();
    // Set static field: static public Mono.Security.Interface.AlertDescription IlegalParameter
    static void _set_IlegalParameter(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription UnknownCA
    static constexpr const uint8_t UnknownCA = 48u;
    // Get static field: static public Mono.Security.Interface.AlertDescription UnknownCA
    static Mono::Security::Interface::AlertDescription _get_UnknownCA();
    // Set static field: static public Mono.Security.Interface.AlertDescription UnknownCA
    static void _set_UnknownCA(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription AccessDenied
    static constexpr const uint8_t AccessDenied = 49u;
    // Get static field: static public Mono.Security.Interface.AlertDescription AccessDenied
    static Mono::Security::Interface::AlertDescription _get_AccessDenied();
    // Set static field: static public Mono.Security.Interface.AlertDescription AccessDenied
    static void _set_AccessDenied(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription DecodeError
    static constexpr const uint8_t DecodeError = 50u;
    // Get static field: static public Mono.Security.Interface.AlertDescription DecodeError
    static Mono::Security::Interface::AlertDescription _get_DecodeError();
    // Set static field: static public Mono.Security.Interface.AlertDescription DecodeError
    static void _set_DecodeError(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription DecryptError
    static constexpr const uint8_t DecryptError = 51u;
    // Get static field: static public Mono.Security.Interface.AlertDescription DecryptError
    static Mono::Security::Interface::AlertDescription _get_DecryptError();
    // Set static field: static public Mono.Security.Interface.AlertDescription DecryptError
    static void _set_DecryptError(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription ExportRestriction
    static constexpr const uint8_t ExportRestriction = 60u;
    // Get static field: static public Mono.Security.Interface.AlertDescription ExportRestriction
    static Mono::Security::Interface::AlertDescription _get_ExportRestriction();
    // Set static field: static public Mono.Security.Interface.AlertDescription ExportRestriction
    static void _set_ExportRestriction(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription ProtocolVersion
    static constexpr const uint8_t ProtocolVersion = 70u;
    // Get static field: static public Mono.Security.Interface.AlertDescription ProtocolVersion
    static Mono::Security::Interface::AlertDescription _get_ProtocolVersion();
    // Set static field: static public Mono.Security.Interface.AlertDescription ProtocolVersion
    static void _set_ProtocolVersion(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription InsuficientSecurity
    static constexpr const uint8_t InsuficientSecurity = 71u;
    // Get static field: static public Mono.Security.Interface.AlertDescription InsuficientSecurity
    static Mono::Security::Interface::AlertDescription _get_InsuficientSecurity();
    // Set static field: static public Mono.Security.Interface.AlertDescription InsuficientSecurity
    static void _set_InsuficientSecurity(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription InternalError
    static constexpr const uint8_t InternalError = 80u;
    // Get static field: static public Mono.Security.Interface.AlertDescription InternalError
    static Mono::Security::Interface::AlertDescription _get_InternalError();
    // Set static field: static public Mono.Security.Interface.AlertDescription InternalError
    static void _set_InternalError(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription UserCancelled
    static constexpr const uint8_t UserCancelled = 90u;
    // Get static field: static public Mono.Security.Interface.AlertDescription UserCancelled
    static Mono::Security::Interface::AlertDescription _get_UserCancelled();
    // Set static field: static public Mono.Security.Interface.AlertDescription UserCancelled
    static void _set_UserCancelled(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription NoRenegotiation
    static constexpr const uint8_t NoRenegotiation = 100u;
    // Get static field: static public Mono.Security.Interface.AlertDescription NoRenegotiation
    static Mono::Security::Interface::AlertDescription _get_NoRenegotiation();
    // Set static field: static public Mono.Security.Interface.AlertDescription NoRenegotiation
    static void _set_NoRenegotiation(Mono::Security::Interface::AlertDescription value);
    // static field const value: static public Mono.Security.Interface.AlertDescription UnsupportedExtension
    static constexpr const uint8_t UnsupportedExtension = 110u;
    // Get static field: static public Mono.Security.Interface.AlertDescription UnsupportedExtension
    static Mono::Security::Interface::AlertDescription _get_UnsupportedExtension();
    // Set static field: static public Mono.Security.Interface.AlertDescription UnsupportedExtension
    static void _set_UnsupportedExtension(Mono::Security::Interface::AlertDescription value);
    // Get instance field reference: public System.Byte value__
    uint8_t& dyn_value__();
  }; // Mono.Security.Interface.AlertDescription
  #pragma pack(pop)
  static check_size<sizeof(AlertDescription), 0 + sizeof(uint8_t)> __Mono_Security_Interface_AlertDescriptionSizeCheck;
  static_assert(sizeof(AlertDescription) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::AlertDescription, "Mono.Security.Interface", "AlertDescription");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
