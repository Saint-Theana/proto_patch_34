// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: shit.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "shit.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {
class ClientSetGameTimeReqDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<ClientSetGameTimeReq>
     _instance;
} _ClientSetGameTimeReq_default_instance_;

namespace protobuf_shit_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientSetGameTimeReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientSetGameTimeReq, is_force_set_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientSetGameTimeReq, client_game_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientSetGameTimeReq, game_time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(ClientSetGameTimeReq)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ClientSetGameTimeReq_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "shit.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ClientSetGameTimeReq_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_ClientSetGameTimeReq_default_instance_);}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nshit.proto\022\005proto\"\250\001\n\024ClientSetGameTim"
      "eReq\022\024\n\014is_force_set\030\003 \001(\010\022\030\n\020client_gam"
      "e_time\030\001 \001(\r\022\021\n\tgame_time\030\017 \001(\r\"M\n\005CmdId"
      "\022\010\n\004NONE\020\000\022\013\n\006CMD_ID\020\215N\022\023\n\017ENET_CHANNEL_"
      "ID\020\000\022\024\n\020ENET_IS_RELIABLE\020\001\032\002\020\001B\nZ\010./;pro"
      "tob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "shit.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_shit_2eproto

const ::google::protobuf::EnumDescriptor* ClientSetGameTimeReq_CmdId_descriptor() {
  protobuf_shit_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_shit_2eproto::file_level_enum_descriptors[0];
}
bool ClientSetGameTimeReq_CmdId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 9997:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::NONE;
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::CMD_ID;
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::ENET_CHANNEL_ID;
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::ENET_IS_RELIABLE;
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::CmdId_MIN;
const ClientSetGameTimeReq_CmdId ClientSetGameTimeReq::CmdId_MAX;
const int ClientSetGameTimeReq::CmdId_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ClientSetGameTimeReq::kIsForceSetFieldNumber;
const int ClientSetGameTimeReq::kClientGameTimeFieldNumber;
const int ClientSetGameTimeReq::kGameTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ClientSetGameTimeReq::ClientSetGameTimeReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_shit_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.ClientSetGameTimeReq)
}
ClientSetGameTimeReq::ClientSetGameTimeReq(const ClientSetGameTimeReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&client_game_time_, &from.client_game_time_,
    static_cast<size_t>(reinterpret_cast<char*>(&game_time_) -
    reinterpret_cast<char*>(&client_game_time_)) + sizeof(game_time_));
  // @@protoc_insertion_point(copy_constructor:proto.ClientSetGameTimeReq)
}

void ClientSetGameTimeReq::SharedCtor() {
  ::memset(&client_game_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&game_time_) -
      reinterpret_cast<char*>(&client_game_time_)) + sizeof(game_time_));
  _cached_size_ = 0;
}

ClientSetGameTimeReq::~ClientSetGameTimeReq() {
  // @@protoc_insertion_point(destructor:proto.ClientSetGameTimeReq)
  SharedDtor();
}

void ClientSetGameTimeReq::SharedDtor() {
}

void ClientSetGameTimeReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientSetGameTimeReq::descriptor() {
  protobuf_shit_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_shit_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ClientSetGameTimeReq& ClientSetGameTimeReq::default_instance() {
  protobuf_shit_2eproto::InitDefaults();
  return *internal_default_instance();
}

ClientSetGameTimeReq* ClientSetGameTimeReq::New(::google::protobuf::Arena* arena) const {
  ClientSetGameTimeReq* n = new ClientSetGameTimeReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ClientSetGameTimeReq::Clear() {
// @@protoc_insertion_point(message_clear_start:proto.ClientSetGameTimeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&client_game_time_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&game_time_) -
      reinterpret_cast<char*>(&client_game_time_)) + sizeof(game_time_));
  _internal_metadata_.Clear();
}

bool ClientSetGameTimeReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.ClientSetGameTimeReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 client_game_time = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &client_game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool is_force_set = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_force_set_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 game_time = 15;
      case 15: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(120u /* 120 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &game_time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.ClientSetGameTimeReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.ClientSetGameTimeReq)
  return false;
#undef DO_
}

void ClientSetGameTimeReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.ClientSetGameTimeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_game_time = 1;
  if (this->client_game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->client_game_time(), output);
  }

  // bool is_force_set = 3;
  if (this->is_force_set() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_force_set(), output);
  }

  // uint32 game_time = 15;
  if (this->game_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(15, this->game_time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.ClientSetGameTimeReq)
}

::google::protobuf::uint8* ClientSetGameTimeReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:proto.ClientSetGameTimeReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 client_game_time = 1;
  if (this->client_game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->client_game_time(), target);
  }

  // bool is_force_set = 3;
  if (this->is_force_set() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->is_force_set(), target);
  }

  // uint32 game_time = 15;
  if (this->game_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(15, this->game_time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.ClientSetGameTimeReq)
  return target;
}

size_t ClientSetGameTimeReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto.ClientSetGameTimeReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 client_game_time = 1;
  if (this->client_game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->client_game_time());
  }

  // bool is_force_set = 3;
  if (this->is_force_set() != 0) {
    total_size += 1 + 1;
  }

  // uint32 game_time = 15;
  if (this->game_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->game_time());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientSetGameTimeReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto.ClientSetGameTimeReq)
  GOOGLE_DCHECK_NE(&from, this);
  const ClientSetGameTimeReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ClientSetGameTimeReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto.ClientSetGameTimeReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto.ClientSetGameTimeReq)
    MergeFrom(*source);
  }
}

void ClientSetGameTimeReq::MergeFrom(const ClientSetGameTimeReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto.ClientSetGameTimeReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.client_game_time() != 0) {
    set_client_game_time(from.client_game_time());
  }
  if (from.is_force_set() != 0) {
    set_is_force_set(from.is_force_set());
  }
  if (from.game_time() != 0) {
    set_game_time(from.game_time());
  }
}

void ClientSetGameTimeReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto.ClientSetGameTimeReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientSetGameTimeReq::CopyFrom(const ClientSetGameTimeReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto.ClientSetGameTimeReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientSetGameTimeReq::IsInitialized() const {
  return true;
}

void ClientSetGameTimeReq::Swap(ClientSetGameTimeReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ClientSetGameTimeReq::InternalSwap(ClientSetGameTimeReq* other) {
  using std::swap;
  swap(client_game_time_, other->client_game_time_);
  swap(is_force_set_, other->is_force_set_);
  swap(game_time_, other->game_time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ClientSetGameTimeReq::GetMetadata() const {
  protobuf_shit_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_shit_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientSetGameTimeReq

// bool is_force_set = 3;
void ClientSetGameTimeReq::clear_is_force_set() {
  is_force_set_ = false;
}
bool ClientSetGameTimeReq::is_force_set() const {
  // @@protoc_insertion_point(field_get:proto.ClientSetGameTimeReq.is_force_set)
  return is_force_set_;
}
void ClientSetGameTimeReq::set_is_force_set(bool value) {
  
  is_force_set_ = value;
  // @@protoc_insertion_point(field_set:proto.ClientSetGameTimeReq.is_force_set)
}

// uint32 client_game_time = 1;
void ClientSetGameTimeReq::clear_client_game_time() {
  client_game_time_ = 0u;
}
::google::protobuf::uint32 ClientSetGameTimeReq::client_game_time() const {
  // @@protoc_insertion_point(field_get:proto.ClientSetGameTimeReq.client_game_time)
  return client_game_time_;
}
void ClientSetGameTimeReq::set_client_game_time(::google::protobuf::uint32 value) {
  
  client_game_time_ = value;
  // @@protoc_insertion_point(field_set:proto.ClientSetGameTimeReq.client_game_time)
}

// uint32 game_time = 15;
void ClientSetGameTimeReq::clear_game_time() {
  game_time_ = 0u;
}
::google::protobuf::uint32 ClientSetGameTimeReq::game_time() const {
  // @@protoc_insertion_point(field_get:proto.ClientSetGameTimeReq.game_time)
  return game_time_;
}
void ClientSetGameTimeReq::set_game_time(::google::protobuf::uint32 value) {
  
  game_time_ = value;
  // @@protoc_insertion_point(field_set:proto.ClientSetGameTimeReq.game_time)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
