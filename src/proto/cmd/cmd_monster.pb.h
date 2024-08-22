// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_monster.proto

#ifndef PROTOBUF_cmd_2fcmd_5fmonster_2eproto__INCLUDED
#define PROTOBUF_cmd_2fcmd_5fmonster_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace proto {
class MonsterSummonTagNotify;
class MonsterSummonTagNotifyDefaultTypeInternal;
extern MonsterSummonTagNotifyDefaultTypeInternal _MonsterSummonTagNotify_default_instance_;
class MonsterSummonTagNotify_SummonTagMapEntry;
class MonsterSummonTagNotify_SummonTagMapEntryDefaultTypeInternal;
extern MonsterSummonTagNotify_SummonTagMapEntryDefaultTypeInternal _MonsterSummonTagNotify_SummonTagMapEntry_default_instance_;
}  // namespace proto

namespace proto {

namespace protobuf_cmd_2fcmd_5fmonster_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cmd_2fcmd_5fmonster_2eproto

enum MonsterSummonTagNotify_CmdId {
  MonsterSummonTagNotify_CmdId_NONE = 0,
  MonsterSummonTagNotify_CmdId_CMD_ID = 1372,
  MonsterSummonTagNotify_CmdId_ENET_CHANNEL_ID = 0,
  MonsterSummonTagNotify_CmdId_ENET_IS_RELIABLE = 1,
  MonsterSummonTagNotify_CmdId_MonsterSummonTagNotify_CmdId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MonsterSummonTagNotify_CmdId_MonsterSummonTagNotify_CmdId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MonsterSummonTagNotify_CmdId_IsValid(int value);
const MonsterSummonTagNotify_CmdId MonsterSummonTagNotify_CmdId_CmdId_MIN = MonsterSummonTagNotify_CmdId_NONE;
const MonsterSummonTagNotify_CmdId MonsterSummonTagNotify_CmdId_CmdId_MAX = MonsterSummonTagNotify_CmdId_CMD_ID;
const int MonsterSummonTagNotify_CmdId_CmdId_ARRAYSIZE = MonsterSummonTagNotify_CmdId_CmdId_MAX + 1;

const ::google::protobuf::EnumDescriptor* MonsterSummonTagNotify_CmdId_descriptor();
inline const ::std::string& MonsterSummonTagNotify_CmdId_Name(MonsterSummonTagNotify_CmdId value) {
  return ::google::protobuf::internal::NameOfEnum(
    MonsterSummonTagNotify_CmdId_descriptor(), value);
}
inline bool MonsterSummonTagNotify_CmdId_Parse(
    const ::std::string& name, MonsterSummonTagNotify_CmdId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MonsterSummonTagNotify_CmdId>(
    MonsterSummonTagNotify_CmdId_descriptor(), name, value);
}
// ===================================================================


// -------------------------------------------------------------------

class MonsterSummonTagNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.MonsterSummonTagNotify) */ {
 public:
  MonsterSummonTagNotify();
  virtual ~MonsterSummonTagNotify();

  MonsterSummonTagNotify(const MonsterSummonTagNotify& from);

  inline MonsterSummonTagNotify& operator=(const MonsterSummonTagNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MonsterSummonTagNotify(MonsterSummonTagNotify&& from) noexcept
    : MonsterSummonTagNotify() {
    *this = ::std::move(from);
  }

  inline MonsterSummonTagNotify& operator=(MonsterSummonTagNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MonsterSummonTagNotify& default_instance();

  static inline const MonsterSummonTagNotify* internal_default_instance() {
    return reinterpret_cast<const MonsterSummonTagNotify*>(
               &_MonsterSummonTagNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(MonsterSummonTagNotify* other);
  friend void swap(MonsterSummonTagNotify& a, MonsterSummonTagNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MonsterSummonTagNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  MonsterSummonTagNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MonsterSummonTagNotify& from);
  void MergeFrom(const MonsterSummonTagNotify& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MonsterSummonTagNotify* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  typedef MonsterSummonTagNotify_CmdId CmdId;
  static const CmdId NONE =
    MonsterSummonTagNotify_CmdId_NONE;
  static const CmdId CMD_ID =
    MonsterSummonTagNotify_CmdId_CMD_ID;
  static const CmdId ENET_CHANNEL_ID =
    MonsterSummonTagNotify_CmdId_ENET_CHANNEL_ID;
  static const CmdId ENET_IS_RELIABLE =
    MonsterSummonTagNotify_CmdId_ENET_IS_RELIABLE;
  static inline bool CmdId_IsValid(int value) {
    return MonsterSummonTagNotify_CmdId_IsValid(value);
  }
  static const CmdId CmdId_MIN =
    MonsterSummonTagNotify_CmdId_CmdId_MIN;
  static const CmdId CmdId_MAX =
    MonsterSummonTagNotify_CmdId_CmdId_MAX;
  static const int CmdId_ARRAYSIZE =
    MonsterSummonTagNotify_CmdId_CmdId_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CmdId_descriptor() {
    return MonsterSummonTagNotify_CmdId_descriptor();
  }
  static inline const ::std::string& CmdId_Name(CmdId value) {
    return MonsterSummonTagNotify_CmdId_Name(value);
  }
  static inline bool CmdId_Parse(const ::std::string& name,
      CmdId* value) {
    return MonsterSummonTagNotify_CmdId_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // map<uint32, uint32> summon_tag_map = 1;
  int summon_tag_map_size() const;
  void clear_summon_tag_map();
  static const int kSummonTagMapFieldNumber = 1;
  const ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >&
      summon_tag_map() const;
  ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >*
      mutable_summon_tag_map();

  // uint32 monster_entity_id = 8;
  void clear_monster_entity_id();
  static const int kMonsterEntityIdFieldNumber = 8;
  ::google::protobuf::uint32 monster_entity_id() const;
  void set_monster_entity_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proto.MonsterSummonTagNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  public:
  class MonsterSummonTagNotify_SummonTagMapEntry : public ::google::protobuf::internal::MapEntry<MonsterSummonTagNotify_SummonTagMapEntry, 
      ::google::protobuf::uint32, ::google::protobuf::uint32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<MonsterSummonTagNotify_SummonTagMapEntry, 
      ::google::protobuf::uint32, ::google::protobuf::uint32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      0 > SuperType;
    MonsterSummonTagNotify_SummonTagMapEntry();
    MonsterSummonTagNotify_SummonTagMapEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const MonsterSummonTagNotify_SummonTagMapEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_MonsterSummonTagNotify_SummonTagMapEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      MonsterSummonTagNotify_SummonTagMapEntry,
      ::google::protobuf::uint32, ::google::protobuf::uint32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      0 > summon_tag_map_;
  private:
  ::google::protobuf::uint32 monster_entity_id_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fmonster_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MonsterSummonTagNotify

// map<uint32, uint32> summon_tag_map = 1;
inline int MonsterSummonTagNotify::summon_tag_map_size() const {
  return summon_tag_map_.size();
}
inline void MonsterSummonTagNotify::clear_summon_tag_map() {
  summon_tag_map_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >&
MonsterSummonTagNotify::summon_tag_map() const {
  // @@protoc_insertion_point(field_map:proto.MonsterSummonTagNotify.summon_tag_map)
  return summon_tag_map_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint32, ::google::protobuf::uint32 >*
MonsterSummonTagNotify::mutable_summon_tag_map() {
  // @@protoc_insertion_point(field_mutable_map:proto.MonsterSummonTagNotify.summon_tag_map)
  return summon_tag_map_.MutableMap();
}

// uint32 monster_entity_id = 8;
inline void MonsterSummonTagNotify::clear_monster_entity_id() {
  monster_entity_id_ = 0u;
}
inline ::google::protobuf::uint32 MonsterSummonTagNotify::monster_entity_id() const {
  // @@protoc_insertion_point(field_get:proto.MonsterSummonTagNotify.monster_entity_id)
  return monster_entity_id_;
}
inline void MonsterSummonTagNotify::set_monster_entity_id(::google::protobuf::uint32 value) {
  
  monster_entity_id_ = value;
  // @@protoc_insertion_point(field_set:proto.MonsterSummonTagNotify.monster_entity_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto::MonsterSummonTagNotify_CmdId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::MonsterSummonTagNotify_CmdId>() {
  return ::proto::MonsterSummonTagNotify_CmdId_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cmd_2fcmd_5fmonster_2eproto__INCLUDED
