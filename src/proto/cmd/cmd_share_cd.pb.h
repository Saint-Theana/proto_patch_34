// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cmd/cmd_share_cd.proto

#ifndef PROTOBUF_cmd_2fcmd_5fshare_5fcd_2eproto__INCLUDED
#define PROTOBUF_cmd_2fcmd_5fshare_5fcd_2eproto__INCLUDED

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
#include "define.pb.h"
// @@protoc_insertion_point(includes)
namespace proto {
class AllShareCDDataNotify;
class AllShareCDDataNotifyDefaultTypeInternal;
extern AllShareCDDataNotifyDefaultTypeInternal _AllShareCDDataNotify_default_instance_;
class AllShareCDDataNotify_ShareCdInfoMapEntry;
class AllShareCDDataNotify_ShareCdInfoMapEntryDefaultTypeInternal;
extern AllShareCDDataNotify_ShareCdInfoMapEntryDefaultTypeInternal _AllShareCDDataNotify_ShareCdInfoMapEntry_default_instance_;
class ShareCDInfo;
class ShareCDInfoDefaultTypeInternal;
extern ShareCDInfoDefaultTypeInternal _ShareCDInfo_default_instance_;
}  // namespace proto

namespace proto {

namespace protobuf_cmd_2fcmd_5fshare_5fcd_2eproto {
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
}  // namespace protobuf_cmd_2fcmd_5fshare_5fcd_2eproto

enum AllShareCDDataNotify_CmdId {
  AllShareCDDataNotify_CmdId_NONE = 0,
  AllShareCDDataNotify_CmdId_CMD_ID = 9072,
  AllShareCDDataNotify_CmdId_ENET_CHANNEL_ID = 0,
  AllShareCDDataNotify_CmdId_ENET_IS_RELIABLE = 1,
  AllShareCDDataNotify_CmdId_AllShareCDDataNotify_CmdId_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  AllShareCDDataNotify_CmdId_AllShareCDDataNotify_CmdId_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool AllShareCDDataNotify_CmdId_IsValid(int value);
const AllShareCDDataNotify_CmdId AllShareCDDataNotify_CmdId_CmdId_MIN = AllShareCDDataNotify_CmdId_NONE;
const AllShareCDDataNotify_CmdId AllShareCDDataNotify_CmdId_CmdId_MAX = AllShareCDDataNotify_CmdId_CMD_ID;
const int AllShareCDDataNotify_CmdId_CmdId_ARRAYSIZE = AllShareCDDataNotify_CmdId_CmdId_MAX + 1;

const ::google::protobuf::EnumDescriptor* AllShareCDDataNotify_CmdId_descriptor();
inline const ::std::string& AllShareCDDataNotify_CmdId_Name(AllShareCDDataNotify_CmdId value) {
  return ::google::protobuf::internal::NameOfEnum(
    AllShareCDDataNotify_CmdId_descriptor(), value);
}
inline bool AllShareCDDataNotify_CmdId_Parse(
    const ::std::string& name, AllShareCDDataNotify_CmdId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AllShareCDDataNotify_CmdId>(
    AllShareCDDataNotify_CmdId_descriptor(), name, value);
}
// ===================================================================

class ShareCDInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.ShareCDInfo) */ {
 public:
  ShareCDInfo();
  virtual ~ShareCDInfo();

  ShareCDInfo(const ShareCDInfo& from);

  inline ShareCDInfo& operator=(const ShareCDInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ShareCDInfo(ShareCDInfo&& from) noexcept
    : ShareCDInfo() {
    *this = ::std::move(from);
  }

  inline ShareCDInfo& operator=(ShareCDInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ShareCDInfo& default_instance();

  static inline const ShareCDInfo* internal_default_instance() {
    return reinterpret_cast<const ShareCDInfo*>(
               &_ShareCDInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(ShareCDInfo* other);
  friend void swap(ShareCDInfo& a, ShareCDInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ShareCDInfo* New() const PROTOBUF_FINAL { return New(NULL); }

  ShareCDInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ShareCDInfo& from);
  void MergeFrom(const ShareCDInfo& from);
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
  void InternalSwap(ShareCDInfo* other);
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

  // accessors -------------------------------------------------------

  // uint32 index = 2;
  void clear_index();
  static const int kIndexFieldNumber = 2;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // uint32 share_cd_id = 12;
  void clear_share_cd_id();
  static const int kShareCdIdFieldNumber = 12;
  ::google::protobuf::uint32 share_cd_id() const;
  void set_share_cd_id(::google::protobuf::uint32 value);

  // uint64 cd_start_time = 14;
  void clear_cd_start_time();
  static const int kCdStartTimeFieldNumber = 14;
  ::google::protobuf::uint64 cd_start_time() const;
  void set_cd_start_time(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:proto.ShareCDInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 index_;
  ::google::protobuf::uint32 share_cd_id_;
  ::google::protobuf::uint64 cd_start_time_;
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fshare_5fcd_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------

class AllShareCDDataNotify : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proto.AllShareCDDataNotify) */ {
 public:
  AllShareCDDataNotify();
  virtual ~AllShareCDDataNotify();

  AllShareCDDataNotify(const AllShareCDDataNotify& from);

  inline AllShareCDDataNotify& operator=(const AllShareCDDataNotify& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AllShareCDDataNotify(AllShareCDDataNotify&& from) noexcept
    : AllShareCDDataNotify() {
    *this = ::std::move(from);
  }

  inline AllShareCDDataNotify& operator=(AllShareCDDataNotify&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AllShareCDDataNotify& default_instance();

  static inline const AllShareCDDataNotify* internal_default_instance() {
    return reinterpret_cast<const AllShareCDDataNotify*>(
               &_AllShareCDDataNotify_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(AllShareCDDataNotify* other);
  friend void swap(AllShareCDDataNotify& a, AllShareCDDataNotify& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AllShareCDDataNotify* New() const PROTOBUF_FINAL { return New(NULL); }

  AllShareCDDataNotify* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AllShareCDDataNotify& from);
  void MergeFrom(const AllShareCDDataNotify& from);
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
  void InternalSwap(AllShareCDDataNotify* other);
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


  typedef AllShareCDDataNotify_CmdId CmdId;
  static const CmdId NONE =
    AllShareCDDataNotify_CmdId_NONE;
  static const CmdId CMD_ID =
    AllShareCDDataNotify_CmdId_CMD_ID;
  static const CmdId ENET_CHANNEL_ID =
    AllShareCDDataNotify_CmdId_ENET_CHANNEL_ID;
  static const CmdId ENET_IS_RELIABLE =
    AllShareCDDataNotify_CmdId_ENET_IS_RELIABLE;
  static inline bool CmdId_IsValid(int value) {
    return AllShareCDDataNotify_CmdId_IsValid(value);
  }
  static const CmdId CmdId_MIN =
    AllShareCDDataNotify_CmdId_CmdId_MIN;
  static const CmdId CmdId_MAX =
    AllShareCDDataNotify_CmdId_CmdId_MAX;
  static const int CmdId_ARRAYSIZE =
    AllShareCDDataNotify_CmdId_CmdId_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  CmdId_descriptor() {
    return AllShareCDDataNotify_CmdId_descriptor();
  }
  static inline const ::std::string& CmdId_Name(CmdId value) {
    return AllShareCDDataNotify_CmdId_Name(value);
  }
  static inline bool CmdId_Parse(const ::std::string& name,
      CmdId* value) {
    return AllShareCDDataNotify_CmdId_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
  int share_cd_info_map_size() const;
  void clear_share_cd_info_map();
  static const int kShareCdInfoMapFieldNumber = 2;
  const ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >&
      share_cd_info_map() const;
  ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >*
      mutable_share_cd_info_map();

  // @@protoc_insertion_point(class_scope:proto.AllShareCDDataNotify)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  public:
  class AllShareCDDataNotify_ShareCdInfoMapEntry : public ::google::protobuf::internal::MapEntry<AllShareCDDataNotify_ShareCdInfoMapEntry, 
      ::google::protobuf::uint32, ::proto::ShareCDInfo,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<AllShareCDDataNotify_ShareCdInfoMapEntry, 
      ::google::protobuf::uint32, ::proto::ShareCDInfo,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > SuperType;
    AllShareCDDataNotify_ShareCdInfoMapEntry();
    AllShareCDDataNotify_ShareCdInfoMapEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const AllShareCDDataNotify_ShareCdInfoMapEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_AllShareCDDataNotify_ShareCdInfoMapEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      AllShareCDDataNotify_ShareCdInfoMapEntry,
      ::google::protobuf::uint32, ::proto::ShareCDInfo,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > share_cd_info_map_;
  private:
  mutable int _cached_size_;
  friend struct protobuf_cmd_2fcmd_5fshare_5fcd_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ShareCDInfo

// uint32 index = 2;
inline void ShareCDInfo::clear_index() {
  index_ = 0u;
}
inline ::google::protobuf::uint32 ShareCDInfo::index() const {
  // @@protoc_insertion_point(field_get:proto.ShareCDInfo.index)
  return index_;
}
inline void ShareCDInfo::set_index(::google::protobuf::uint32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:proto.ShareCDInfo.index)
}

// uint64 cd_start_time = 14;
inline void ShareCDInfo::clear_cd_start_time() {
  cd_start_time_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ShareCDInfo::cd_start_time() const {
  // @@protoc_insertion_point(field_get:proto.ShareCDInfo.cd_start_time)
  return cd_start_time_;
}
inline void ShareCDInfo::set_cd_start_time(::google::protobuf::uint64 value) {
  
  cd_start_time_ = value;
  // @@protoc_insertion_point(field_set:proto.ShareCDInfo.cd_start_time)
}

// uint32 share_cd_id = 12;
inline void ShareCDInfo::clear_share_cd_id() {
  share_cd_id_ = 0u;
}
inline ::google::protobuf::uint32 ShareCDInfo::share_cd_id() const {
  // @@protoc_insertion_point(field_get:proto.ShareCDInfo.share_cd_id)
  return share_cd_id_;
}
inline void ShareCDInfo::set_share_cd_id(::google::protobuf::uint32 value) {
  
  share_cd_id_ = value;
  // @@protoc_insertion_point(field_set:proto.ShareCDInfo.share_cd_id)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// AllShareCDDataNotify

// map<uint32, .proto.ShareCDInfo> share_cd_info_map = 2;
inline int AllShareCDDataNotify::share_cd_info_map_size() const {
  return share_cd_info_map_.size();
}
inline void AllShareCDDataNotify::clear_share_cd_info_map() {
  share_cd_info_map_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >&
AllShareCDDataNotify::share_cd_info_map() const {
  // @@protoc_insertion_point(field_map:proto.AllShareCDDataNotify.share_cd_info_map)
  return share_cd_info_map_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint32, ::proto::ShareCDInfo >*
AllShareCDDataNotify::mutable_share_cd_info_map() {
  // @@protoc_insertion_point(field_mutable_map:proto.AllShareCDDataNotify.share_cd_info_map)
  return share_cd_info_map_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::proto::AllShareCDDataNotify_CmdId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto::AllShareCDDataNotify_CmdId>() {
  return ::proto::AllShareCDDataNotify_CmdId_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cmd_2fcmd_5fshare_5fcd_2eproto__INCLUDED