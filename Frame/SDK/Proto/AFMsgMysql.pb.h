// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AFMsgMysql.proto

#ifndef PROTOBUF_AFMsgMysql_2eproto_INCLUDED
#define PROTOBUF_AFMsgMysql_2eproto_INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_AFMsgMysql_2eproto {
// Internal implementation detail -- do not use these members.
struct LIBPROTOC_EXPORT TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void LIBPROTOC_EXPORT AddDescriptors();
void LIBPROTOC_EXPORT InitDefaultsPackMysqlParamImpl();
void LIBPROTOC_EXPORT InitDefaultsPackMysqlParam();
void LIBPROTOC_EXPORT InitDefaultsPackMysqlServerInfoImpl();
void LIBPROTOC_EXPORT InitDefaultsPackMysqlServerInfo();
inline void LIBPROTOC_EXPORT InitDefaults() {
  InitDefaultsPackMysqlParam();
  InitDefaultsPackMysqlServerInfo();
}
}  // namespace protobuf_AFMsgMysql_2eproto
namespace AFMsg {
class PackMysqlParam;
class PackMysqlParamDefaultTypeInternal;
LIBPROTOC_EXPORT extern PackMysqlParamDefaultTypeInternal _PackMysqlParam_default_instance_;
class PackMysqlServerInfo;
class PackMysqlServerInfoDefaultTypeInternal;
LIBPROTOC_EXPORT extern PackMysqlServerInfoDefaultTypeInternal _PackMysqlServerInfo_default_instance_;
}  // namespace AFMsg
namespace google {
namespace protobuf {
template<> LIBPROTOC_EXPORT ::AFMsg::PackMysqlParam* Arena::Create< ::AFMsg::PackMysqlParam>(Arena*);
template<> LIBPROTOC_EXPORT ::AFMsg::PackMysqlServerInfo* Arena::Create< ::AFMsg::PackMysqlServerInfo>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace AFMsg {

// ===================================================================

class LIBPROTOC_EXPORT PackMysqlParam : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AFMsg.PackMysqlParam) */ {
 public:
  PackMysqlParam();
  virtual ~PackMysqlParam();

  PackMysqlParam(const PackMysqlParam& from);

  inline PackMysqlParam& operator=(const PackMysqlParam& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PackMysqlParam(PackMysqlParam&& from) noexcept
    : PackMysqlParam() {
    *this = ::std::move(from);
  }

  inline PackMysqlParam& operator=(PackMysqlParam&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PackMysqlParam& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PackMysqlParam* internal_default_instance() {
    return reinterpret_cast<const PackMysqlParam*>(
               &_PackMysqlParam_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PackMysqlParam* other);
  friend void swap(PackMysqlParam& a, PackMysqlParam& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PackMysqlParam* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<PackMysqlParam>(NULL);
  }

  PackMysqlParam* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<PackMysqlParam>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PackMysqlParam& from);
  void MergeFrom(const PackMysqlParam& from);
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
  void InternalSwap(PackMysqlParam* other);
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

  // bytes strRecordName = 1;
  void clear_strrecordname();
  static const int kStrRecordNameFieldNumber = 1;
  const ::std::string& strrecordname() const;
  void set_strrecordname(const ::std::string& value);
  #if LANG_CXX11
  void set_strrecordname(::std::string&& value);
  #endif
  void set_strrecordname(const char* value);
  void set_strrecordname(const void* value, size_t size);
  ::std::string* mutable_strrecordname();
  ::std::string* release_strrecordname();
  void set_allocated_strrecordname(::std::string* strrecordname);

  // bytes strKey = 2;
  void clear_strkey();
  static const int kStrKeyFieldNumber = 2;
  const ::std::string& strkey() const;
  void set_strkey(const ::std::string& value);
  #if LANG_CXX11
  void set_strkey(::std::string&& value);
  #endif
  void set_strkey(const char* value);
  void set_strkey(const void* value, size_t size);
  ::std::string* mutable_strkey();
  ::std::string* release_strkey();
  void set_allocated_strkey(::std::string* strkey);

  // bytes fieldVecList = 3;
  void clear_fieldveclist();
  static const int kFieldVecListFieldNumber = 3;
  const ::std::string& fieldveclist() const;
  void set_fieldveclist(const ::std::string& value);
  #if LANG_CXX11
  void set_fieldveclist(::std::string&& value);
  #endif
  void set_fieldveclist(const char* value);
  void set_fieldveclist(const void* value, size_t size);
  ::std::string* mutable_fieldveclist();
  ::std::string* release_fieldveclist();
  void set_allocated_fieldveclist(::std::string* fieldveclist);

  // bytes valueVecList = 4;
  void clear_valueveclist();
  static const int kValueVecListFieldNumber = 4;
  const ::std::string& valueveclist() const;
  void set_valueveclist(const ::std::string& value);
  #if LANG_CXX11
  void set_valueveclist(::std::string&& value);
  #endif
  void set_valueveclist(const char* value);
  void set_valueveclist(const void* value, size_t size);
  ::std::string* mutable_valueveclist();
  ::std::string* release_valueveclist();
  void set_allocated_valueveclist(::std::string* valueveclist);

  // int64 bExit = 5;
  void clear_bexit();
  static const int kBExitFieldNumber = 5;
  ::google::protobuf::int64 bexit() const;
  void set_bexit(::google::protobuf::int64 value);

  // int64 nreqid = 6;
  void clear_nreqid();
  static const int kNreqidFieldNumber = 6;
  ::google::protobuf::int64 nreqid() const;
  void set_nreqid(::google::protobuf::int64 value);

  // int64 nRet = 7;
  void clear_nret();
  static const int kNRetFieldNumber = 7;
  ::google::protobuf::int64 nret() const;
  void set_nret(::google::protobuf::int64 value);

  // int64 eType = 8;
  void clear_etype();
  static const int kETypeFieldNumber = 8;
  ::google::protobuf::int64 etype() const;
  void set_etype(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:AFMsg.PackMysqlParam)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr strrecordname_;
  ::google::protobuf::internal::ArenaStringPtr strkey_;
  ::google::protobuf::internal::ArenaStringPtr fieldveclist_;
  ::google::protobuf::internal::ArenaStringPtr valueveclist_;
  ::google::protobuf::int64 bexit_;
  ::google::protobuf::int64 nreqid_;
  ::google::protobuf::int64 nret_;
  ::google::protobuf::int64 etype_;
  mutable int _cached_size_;
  friend struct ::protobuf_AFMsgMysql_2eproto::TableStruct;
  friend void ::protobuf_AFMsgMysql_2eproto::InitDefaultsPackMysqlParamImpl();
};
// -------------------------------------------------------------------

class LIBPROTOC_EXPORT PackMysqlServerInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AFMsg.PackMysqlServerInfo) */ {
 public:
  PackMysqlServerInfo();
  virtual ~PackMysqlServerInfo();

  PackMysqlServerInfo(const PackMysqlServerInfo& from);

  inline PackMysqlServerInfo& operator=(const PackMysqlServerInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PackMysqlServerInfo(PackMysqlServerInfo&& from) noexcept
    : PackMysqlServerInfo() {
    *this = ::std::move(from);
  }

  inline PackMysqlServerInfo& operator=(PackMysqlServerInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PackMysqlServerInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PackMysqlServerInfo* internal_default_instance() {
    return reinterpret_cast<const PackMysqlServerInfo*>(
               &_PackMysqlServerInfo_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PackMysqlServerInfo* other);
  friend void swap(PackMysqlServerInfo& a, PackMysqlServerInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PackMysqlServerInfo* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<PackMysqlServerInfo>(NULL);
  }

  PackMysqlServerInfo* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<PackMysqlServerInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PackMysqlServerInfo& from);
  void MergeFrom(const PackMysqlServerInfo& from);
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
  void InternalSwap(PackMysqlServerInfo* other);
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

  // bytes strDBName = 4;
  void clear_strdbname();
  static const int kStrDBNameFieldNumber = 4;
  const ::std::string& strdbname() const;
  void set_strdbname(const ::std::string& value);
  #if LANG_CXX11
  void set_strdbname(::std::string&& value);
  #endif
  void set_strdbname(const char* value);
  void set_strdbname(const void* value, size_t size);
  ::std::string* mutable_strdbname();
  ::std::string* release_strdbname();
  void set_allocated_strdbname(::std::string* strdbname);

  // bytes strDnsIp = 5;
  void clear_strdnsip();
  static const int kStrDnsIpFieldNumber = 5;
  const ::std::string& strdnsip() const;
  void set_strdnsip(const ::std::string& value);
  #if LANG_CXX11
  void set_strdnsip(::std::string&& value);
  #endif
  void set_strdnsip(const char* value);
  void set_strdnsip(const void* value, size_t size);
  ::std::string* mutable_strdnsip();
  ::std::string* release_strdnsip();
  void set_allocated_strdnsip(::std::string* strdnsip);

  // bytes strDBUser = 6;
  void clear_strdbuser();
  static const int kStrDBUserFieldNumber = 6;
  const ::std::string& strdbuser() const;
  void set_strdbuser(const ::std::string& value);
  #if LANG_CXX11
  void set_strdbuser(::std::string&& value);
  #endif
  void set_strdbuser(const char* value);
  void set_strdbuser(const void* value, size_t size);
  ::std::string* mutable_strdbuser();
  ::std::string* release_strdbuser();
  void set_allocated_strdbuser(::std::string* strdbuser);

  // bytes strDBPwd = 7;
  void clear_strdbpwd();
  static const int kStrDBPwdFieldNumber = 7;
  const ::std::string& strdbpwd() const;
  void set_strdbpwd(const ::std::string& value);
  #if LANG_CXX11
  void set_strdbpwd(::std::string&& value);
  #endif
  void set_strdbpwd(const char* value);
  void set_strdbpwd(const void* value, size_t size);
  ::std::string* mutable_strdbpwd();
  ::std::string* release_strdbpwd();
  void set_allocated_strdbpwd(::std::string* strdbpwd);

  // int64 nRconnectTime = 1;
  void clear_nrconnecttime();
  static const int kNRconnectTimeFieldNumber = 1;
  ::google::protobuf::int64 nrconnecttime() const;
  void set_nrconnecttime(::google::protobuf::int64 value);

  // int64 nRconneCount = 2;
  void clear_nrconnecount();
  static const int kNRconneCountFieldNumber = 2;
  ::google::protobuf::int64 nrconnecount() const;
  void set_nrconnecount(::google::protobuf::int64 value);

  // int64 nPort = 3;
  void clear_nport();
  static const int kNPortFieldNumber = 3;
  ::google::protobuf::int64 nport() const;
  void set_nport(::google::protobuf::int64 value);

  // int64 nServerID = 8;
  void clear_nserverid();
  static const int kNServerIDFieldNumber = 8;
  ::google::protobuf::int64 nserverid() const;
  void set_nserverid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:AFMsg.PackMysqlServerInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr strdbname_;
  ::google::protobuf::internal::ArenaStringPtr strdnsip_;
  ::google::protobuf::internal::ArenaStringPtr strdbuser_;
  ::google::protobuf::internal::ArenaStringPtr strdbpwd_;
  ::google::protobuf::int64 nrconnecttime_;
  ::google::protobuf::int64 nrconnecount_;
  ::google::protobuf::int64 nport_;
  ::google::protobuf::int64 nserverid_;
  mutable int _cached_size_;
  friend struct ::protobuf_AFMsgMysql_2eproto::TableStruct;
  friend void ::protobuf_AFMsgMysql_2eproto::InitDefaultsPackMysqlServerInfoImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PackMysqlParam

// bytes strRecordName = 1;
inline void PackMysqlParam::clear_strrecordname() {
  strrecordname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlParam::strrecordname() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.strRecordName)
  return strrecordname_.GetNoArena();
}
inline void PackMysqlParam::set_strrecordname(const ::std::string& value) {
  
  strrecordname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.strRecordName)
}
#if LANG_CXX11
inline void PackMysqlParam::set_strrecordname(::std::string&& value) {
  
  strrecordname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlParam.strRecordName)
}
#endif
inline void PackMysqlParam::set_strrecordname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strrecordname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlParam.strRecordName)
}
inline void PackMysqlParam::set_strrecordname(const void* value, size_t size) {
  
  strrecordname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlParam.strRecordName)
}
inline ::std::string* PackMysqlParam::mutable_strrecordname() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlParam.strRecordName)
  return strrecordname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlParam::release_strrecordname() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlParam.strRecordName)
  
  return strrecordname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlParam::set_allocated_strrecordname(::std::string* strrecordname) {
  if (strrecordname != NULL) {
    
  } else {
    
  }
  strrecordname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strrecordname);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlParam.strRecordName)
}

// bytes strKey = 2;
inline void PackMysqlParam::clear_strkey() {
  strkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlParam::strkey() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.strKey)
  return strkey_.GetNoArena();
}
inline void PackMysqlParam::set_strkey(const ::std::string& value) {
  
  strkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.strKey)
}
#if LANG_CXX11
inline void PackMysqlParam::set_strkey(::std::string&& value) {
  
  strkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlParam.strKey)
}
#endif
inline void PackMysqlParam::set_strkey(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlParam.strKey)
}
inline void PackMysqlParam::set_strkey(const void* value, size_t size) {
  
  strkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlParam.strKey)
}
inline ::std::string* PackMysqlParam::mutable_strkey() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlParam.strKey)
  return strkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlParam::release_strkey() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlParam.strKey)
  
  return strkey_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlParam::set_allocated_strkey(::std::string* strkey) {
  if (strkey != NULL) {
    
  } else {
    
  }
  strkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strkey);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlParam.strKey)
}

// bytes fieldVecList = 3;
inline void PackMysqlParam::clear_fieldveclist() {
  fieldveclist_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlParam::fieldveclist() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.fieldVecList)
  return fieldveclist_.GetNoArena();
}
inline void PackMysqlParam::set_fieldveclist(const ::std::string& value) {
  
  fieldveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.fieldVecList)
}
#if LANG_CXX11
inline void PackMysqlParam::set_fieldveclist(::std::string&& value) {
  
  fieldveclist_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlParam.fieldVecList)
}
#endif
inline void PackMysqlParam::set_fieldveclist(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  fieldveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlParam.fieldVecList)
}
inline void PackMysqlParam::set_fieldveclist(const void* value, size_t size) {
  
  fieldveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlParam.fieldVecList)
}
inline ::std::string* PackMysqlParam::mutable_fieldveclist() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlParam.fieldVecList)
  return fieldveclist_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlParam::release_fieldveclist() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlParam.fieldVecList)
  
  return fieldveclist_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlParam::set_allocated_fieldveclist(::std::string* fieldveclist) {
  if (fieldveclist != NULL) {
    
  } else {
    
  }
  fieldveclist_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fieldveclist);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlParam.fieldVecList)
}

// bytes valueVecList = 4;
inline void PackMysqlParam::clear_valueveclist() {
  valueveclist_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlParam::valueveclist() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.valueVecList)
  return valueveclist_.GetNoArena();
}
inline void PackMysqlParam::set_valueveclist(const ::std::string& value) {
  
  valueveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.valueVecList)
}
#if LANG_CXX11
inline void PackMysqlParam::set_valueveclist(::std::string&& value) {
  
  valueveclist_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlParam.valueVecList)
}
#endif
inline void PackMysqlParam::set_valueveclist(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  valueveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlParam.valueVecList)
}
inline void PackMysqlParam::set_valueveclist(const void* value, size_t size) {
  
  valueveclist_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlParam.valueVecList)
}
inline ::std::string* PackMysqlParam::mutable_valueveclist() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlParam.valueVecList)
  return valueveclist_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlParam::release_valueveclist() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlParam.valueVecList)
  
  return valueveclist_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlParam::set_allocated_valueveclist(::std::string* valueveclist) {
  if (valueveclist != NULL) {
    
  } else {
    
  }
  valueveclist_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), valueveclist);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlParam.valueVecList)
}

// int64 bExit = 5;
inline void PackMysqlParam::clear_bexit() {
  bexit_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlParam::bexit() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.bExit)
  return bexit_;
}
inline void PackMysqlParam::set_bexit(::google::protobuf::int64 value) {
  
  bexit_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.bExit)
}

// int64 nreqid = 6;
inline void PackMysqlParam::clear_nreqid() {
  nreqid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlParam::nreqid() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.nreqid)
  return nreqid_;
}
inline void PackMysqlParam::set_nreqid(::google::protobuf::int64 value) {
  
  nreqid_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.nreqid)
}

// int64 nRet = 7;
inline void PackMysqlParam::clear_nret() {
  nret_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlParam::nret() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.nRet)
  return nret_;
}
inline void PackMysqlParam::set_nret(::google::protobuf::int64 value) {
  
  nret_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.nRet)
}

// int64 eType = 8;
inline void PackMysqlParam::clear_etype() {
  etype_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlParam::etype() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlParam.eType)
  return etype_;
}
inline void PackMysqlParam::set_etype(::google::protobuf::int64 value) {
  
  etype_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlParam.eType)
}

// -------------------------------------------------------------------

// PackMysqlServerInfo

// int64 nRconnectTime = 1;
inline void PackMysqlServerInfo::clear_nrconnecttime() {
  nrconnecttime_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nrconnecttime() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.nRconnectTime)
  return nrconnecttime_;
}
inline void PackMysqlServerInfo::set_nrconnecttime(::google::protobuf::int64 value) {
  
  nrconnecttime_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.nRconnectTime)
}

// int64 nRconneCount = 2;
inline void PackMysqlServerInfo::clear_nrconnecount() {
  nrconnecount_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nrconnecount() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.nRconneCount)
  return nrconnecount_;
}
inline void PackMysqlServerInfo::set_nrconnecount(::google::protobuf::int64 value) {
  
  nrconnecount_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.nRconneCount)
}

// int64 nPort = 3;
inline void PackMysqlServerInfo::clear_nport() {
  nport_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nport() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.nPort)
  return nport_;
}
inline void PackMysqlServerInfo::set_nport(::google::protobuf::int64 value) {
  
  nport_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.nPort)
}

// bytes strDBName = 4;
inline void PackMysqlServerInfo::clear_strdbname() {
  strdbname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlServerInfo::strdbname() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.strDBName)
  return strdbname_.GetNoArena();
}
inline void PackMysqlServerInfo::set_strdbname(const ::std::string& value) {
  
  strdbname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.strDBName)
}
#if LANG_CXX11
inline void PackMysqlServerInfo::set_strdbname(::std::string&& value) {
  
  strdbname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlServerInfo.strDBName)
}
#endif
inline void PackMysqlServerInfo::set_strdbname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strdbname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlServerInfo.strDBName)
}
inline void PackMysqlServerInfo::set_strdbname(const void* value, size_t size) {
  
  strdbname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlServerInfo.strDBName)
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbname() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlServerInfo.strDBName)
  return strdbname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlServerInfo::release_strdbname() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlServerInfo.strDBName)
  
  return strdbname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlServerInfo::set_allocated_strdbname(::std::string* strdbname) {
  if (strdbname != NULL) {
    
  } else {
    
  }
  strdbname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdbname);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlServerInfo.strDBName)
}

// bytes strDnsIp = 5;
inline void PackMysqlServerInfo::clear_strdnsip() {
  strdnsip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlServerInfo::strdnsip() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.strDnsIp)
  return strdnsip_.GetNoArena();
}
inline void PackMysqlServerInfo::set_strdnsip(const ::std::string& value) {
  
  strdnsip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.strDnsIp)
}
#if LANG_CXX11
inline void PackMysqlServerInfo::set_strdnsip(::std::string&& value) {
  
  strdnsip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlServerInfo.strDnsIp)
}
#endif
inline void PackMysqlServerInfo::set_strdnsip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strdnsip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlServerInfo.strDnsIp)
}
inline void PackMysqlServerInfo::set_strdnsip(const void* value, size_t size) {
  
  strdnsip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlServerInfo.strDnsIp)
}
inline ::std::string* PackMysqlServerInfo::mutable_strdnsip() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlServerInfo.strDnsIp)
  return strdnsip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlServerInfo::release_strdnsip() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlServerInfo.strDnsIp)
  
  return strdnsip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlServerInfo::set_allocated_strdnsip(::std::string* strdnsip) {
  if (strdnsip != NULL) {
    
  } else {
    
  }
  strdnsip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdnsip);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlServerInfo.strDnsIp)
}

// bytes strDBUser = 6;
inline void PackMysqlServerInfo::clear_strdbuser() {
  strdbuser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlServerInfo::strdbuser() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.strDBUser)
  return strdbuser_.GetNoArena();
}
inline void PackMysqlServerInfo::set_strdbuser(const ::std::string& value) {
  
  strdbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.strDBUser)
}
#if LANG_CXX11
inline void PackMysqlServerInfo::set_strdbuser(::std::string&& value) {
  
  strdbuser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlServerInfo.strDBUser)
}
#endif
inline void PackMysqlServerInfo::set_strdbuser(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strdbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlServerInfo.strDBUser)
}
inline void PackMysqlServerInfo::set_strdbuser(const void* value, size_t size) {
  
  strdbuser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlServerInfo.strDBUser)
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbuser() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlServerInfo.strDBUser)
  return strdbuser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlServerInfo::release_strdbuser() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlServerInfo.strDBUser)
  
  return strdbuser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlServerInfo::set_allocated_strdbuser(::std::string* strdbuser) {
  if (strdbuser != NULL) {
    
  } else {
    
  }
  strdbuser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdbuser);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlServerInfo.strDBUser)
}

// bytes strDBPwd = 7;
inline void PackMysqlServerInfo::clear_strdbpwd() {
  strdbpwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PackMysqlServerInfo::strdbpwd() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.strDBPwd)
  return strdbpwd_.GetNoArena();
}
inline void PackMysqlServerInfo::set_strdbpwd(const ::std::string& value) {
  
  strdbpwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.strDBPwd)
}
#if LANG_CXX11
inline void PackMysqlServerInfo::set_strdbpwd(::std::string&& value) {
  
  strdbpwd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:AFMsg.PackMysqlServerInfo.strDBPwd)
}
#endif
inline void PackMysqlServerInfo::set_strdbpwd(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  strdbpwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AFMsg.PackMysqlServerInfo.strDBPwd)
}
inline void PackMysqlServerInfo::set_strdbpwd(const void* value, size_t size) {
  
  strdbpwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AFMsg.PackMysqlServerInfo.strDBPwd)
}
inline ::std::string* PackMysqlServerInfo::mutable_strdbpwd() {
  
  // @@protoc_insertion_point(field_mutable:AFMsg.PackMysqlServerInfo.strDBPwd)
  return strdbpwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PackMysqlServerInfo::release_strdbpwd() {
  // @@protoc_insertion_point(field_release:AFMsg.PackMysqlServerInfo.strDBPwd)
  
  return strdbpwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PackMysqlServerInfo::set_allocated_strdbpwd(::std::string* strdbpwd) {
  if (strdbpwd != NULL) {
    
  } else {
    
  }
  strdbpwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strdbpwd);
  // @@protoc_insertion_point(field_set_allocated:AFMsg.PackMysqlServerInfo.strDBPwd)
}

// int64 nServerID = 8;
inline void PackMysqlServerInfo::clear_nserverid() {
  nserverid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 PackMysqlServerInfo::nserverid() const {
  // @@protoc_insertion_point(field_get:AFMsg.PackMysqlServerInfo.nServerID)
  return nserverid_;
}
inline void PackMysqlServerInfo::set_nserverid(::google::protobuf::int64 value) {
  
  nserverid_ = value;
  // @@protoc_insertion_point(field_set:AFMsg.PackMysqlServerInfo.nServerID)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AFMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AFMsgMysql_2eproto_INCLUDED
