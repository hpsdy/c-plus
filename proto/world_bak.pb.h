// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_bak.proto

#ifndef PROTOBUF_world_5fbak_2eproto__INCLUDED
#define PROTOBUF_world_5fbak_2eproto__INCLUDED

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

namespace protobuf_world_5fbak_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultshello_w_ctypeImpl();
void InitDefaultshello_w_ctype();
void InitDefaultshello_wImpl();
void InitDefaultshello_w();
inline void InitDefaults() {
  InitDefaultshello_w_ctype();
  InitDefaultshello_w();
}
}  // namespace protobuf_world_5fbak_2eproto
namespace world {
class hello_w;
class hello_wDefaultTypeInternal;
extern hello_wDefaultTypeInternal _hello_w_default_instance_;
class hello_w_ctype;
class hello_w_ctypeDefaultTypeInternal;
extern hello_w_ctypeDefaultTypeInternal _hello_w_ctype_default_instance_;
}  // namespace world
namespace world {

// ===================================================================

class hello_w_ctype : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:world.hello_w.ctype) */ {
 public:
  hello_w_ctype();
  virtual ~hello_w_ctype();

  hello_w_ctype(const hello_w_ctype& from);

  inline hello_w_ctype& operator=(const hello_w_ctype& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  hello_w_ctype(hello_w_ctype&& from) noexcept
    : hello_w_ctype() {
    *this = ::std::move(from);
  }

  inline hello_w_ctype& operator=(hello_w_ctype&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const hello_w_ctype& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const hello_w_ctype* internal_default_instance() {
    return reinterpret_cast<const hello_w_ctype*>(
               &_hello_w_ctype_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(hello_w_ctype* other);
  friend void swap(hello_w_ctype& a, hello_w_ctype& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline hello_w_ctype* New() const PROTOBUF_FINAL { return New(NULL); }

  hello_w_ctype* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const hello_w_ctype& from);
  void MergeFrom(const hello_w_ctype& from);
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
  void InternalSwap(hello_w_ctype* other);
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

  // required string desc = 2;
  bool has_desc() const;
  void clear_desc();
  static const int kDescFieldNumber = 2;
  const ::std::string& desc() const;
  void set_desc(const ::std::string& value);
  #if LANG_CXX11
  void set_desc(::std::string&& value);
  #endif
  void set_desc(const char* value);
  void set_desc(const char* value, size_t size);
  ::std::string* mutable_desc();
  ::std::string* release_desc();
  void set_allocated_desc(::std::string* desc);

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:world.hello_w.ctype)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_desc();
  void clear_has_desc();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr desc_;
  ::google::protobuf::int32 id_;
  friend struct ::protobuf_world_5fbak_2eproto::TableStruct;
  friend void ::protobuf_world_5fbak_2eproto::InitDefaultshello_w_ctypeImpl();
};
// -------------------------------------------------------------------

class hello_w : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:world.hello_w) */ {
 public:
  hello_w();
  virtual ~hello_w();

  hello_w(const hello_w& from);

  inline hello_w& operator=(const hello_w& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  hello_w(hello_w&& from) noexcept
    : hello_w() {
    *this = ::std::move(from);
  }

  inline hello_w& operator=(hello_w&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const hello_w& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const hello_w* internal_default_instance() {
    return reinterpret_cast<const hello_w*>(
               &_hello_w_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(hello_w* other);
  friend void swap(hello_w& a, hello_w& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline hello_w* New() const PROTOBUF_FINAL { return New(NULL); }

  hello_w* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const hello_w& from);
  void MergeFrom(const hello_w& from);
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
  void InternalSwap(hello_w* other);
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

  typedef hello_w_ctype ctype;

  // accessors -------------------------------------------------------

  // repeated string some = 5;
  int some_size() const;
  void clear_some();
  static const int kSomeFieldNumber = 5;
  const ::std::string& some(int index) const;
  ::std::string* mutable_some(int index);
  void set_some(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_some(int index, ::std::string&& value);
  #endif
  void set_some(int index, const char* value);
  void set_some(int index, const char* value, size_t size);
  ::std::string* add_some();
  void add_some(const ::std::string& value);
  #if LANG_CXX11
  void add_some(::std::string&& value);
  #endif
  void add_some(const char* value);
  void add_some(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& some() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_some();

  // required string str = 2;
  bool has_str() const;
  void clear_str();
  static const int kStrFieldNumber = 2;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // optional string test = 6;
  bool has_test() const;
  void clear_test();
  static const int kTestFieldNumber = 6;
  const ::std::string& test() const;
  void set_test(const ::std::string& value);
  #if LANG_CXX11
  void set_test(::std::string&& value);
  #endif
  void set_test(const char* value);
  void set_test(const char* value, size_t size);
  ::std::string* mutable_test();
  ::std::string* release_test();
  void set_allocated_test(::std::string* test);

  // required .world.hello_w.ctype oc = 4;
  bool has_oc() const;
  void clear_oc();
  static const int kOcFieldNumber = 4;
  const ::world::hello_w_ctype& oc() const;
  ::world::hello_w_ctype* release_oc();
  ::world::hello_w_ctype* mutable_oc();
  void set_allocated_oc(::world::hello_w_ctype* oc);

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:world.hello_w)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_str();
  void clear_has_str();
  void set_has_oc();
  void clear_has_oc();
  void set_has_test();
  void clear_has_test();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> some_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::internal::ArenaStringPtr test_;
  ::world::hello_w_ctype* oc_;
  ::google::protobuf::int32 id_;
  friend struct ::protobuf_world_5fbak_2eproto::TableStruct;
  friend void ::protobuf_world_5fbak_2eproto::InitDefaultshello_wImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// hello_w_ctype

// required int32 id = 1;
inline bool hello_w_ctype::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void hello_w_ctype::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void hello_w_ctype::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void hello_w_ctype::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 hello_w_ctype::id() const {
  // @@protoc_insertion_point(field_get:world.hello_w.ctype.id)
  return id_;
}
inline void hello_w_ctype::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:world.hello_w.ctype.id)
}

// required string desc = 2;
inline bool hello_w_ctype::has_desc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void hello_w_ctype::set_has_desc() {
  _has_bits_[0] |= 0x00000001u;
}
inline void hello_w_ctype::clear_has_desc() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void hello_w_ctype::clear_desc() {
  desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_desc();
}
inline const ::std::string& hello_w_ctype::desc() const {
  // @@protoc_insertion_point(field_get:world.hello_w.ctype.desc)
  return desc_.GetNoArena();
}
inline void hello_w_ctype::set_desc(const ::std::string& value) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:world.hello_w.ctype.desc)
}
#if LANG_CXX11
inline void hello_w_ctype::set_desc(::std::string&& value) {
  set_has_desc();
  desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:world.hello_w.ctype.desc)
}
#endif
inline void hello_w_ctype::set_desc(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:world.hello_w.ctype.desc)
}
inline void hello_w_ctype::set_desc(const char* value, size_t size) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:world.hello_w.ctype.desc)
}
inline ::std::string* hello_w_ctype::mutable_desc() {
  set_has_desc();
  // @@protoc_insertion_point(field_mutable:world.hello_w.ctype.desc)
  return desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* hello_w_ctype::release_desc() {
  // @@protoc_insertion_point(field_release:world.hello_w.ctype.desc)
  clear_has_desc();
  return desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void hello_w_ctype::set_allocated_desc(::std::string* desc) {
  if (desc != NULL) {
    set_has_desc();
  } else {
    clear_has_desc();
  }
  desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:world.hello_w.ctype.desc)
}

// -------------------------------------------------------------------

// hello_w

// required int32 id = 1;
inline bool hello_w::has_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void hello_w::set_has_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void hello_w::clear_has_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void hello_w::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 hello_w::id() const {
  // @@protoc_insertion_point(field_get:world.hello_w.id)
  return id_;
}
inline void hello_w::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:world.hello_w.id)
}

// required string str = 2;
inline bool hello_w::has_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void hello_w::set_has_str() {
  _has_bits_[0] |= 0x00000001u;
}
inline void hello_w::clear_has_str() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void hello_w::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str();
}
inline const ::std::string& hello_w::str() const {
  // @@protoc_insertion_point(field_get:world.hello_w.str)
  return str_.GetNoArena();
}
inline void hello_w::set_str(const ::std::string& value) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:world.hello_w.str)
}
#if LANG_CXX11
inline void hello_w::set_str(::std::string&& value) {
  set_has_str();
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:world.hello_w.str)
}
#endif
inline void hello_w::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:world.hello_w.str)
}
inline void hello_w::set_str(const char* value, size_t size) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:world.hello_w.str)
}
inline ::std::string* hello_w::mutable_str() {
  set_has_str();
  // @@protoc_insertion_point(field_mutable:world.hello_w.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* hello_w::release_str() {
  // @@protoc_insertion_point(field_release:world.hello_w.str)
  clear_has_str();
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void hello_w::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:world.hello_w.str)
}

// repeated string some = 5;
inline int hello_w::some_size() const {
  return some_.size();
}
inline void hello_w::clear_some() {
  some_.Clear();
}
inline const ::std::string& hello_w::some(int index) const {
  // @@protoc_insertion_point(field_get:world.hello_w.some)
  return some_.Get(index);
}
inline ::std::string* hello_w::mutable_some(int index) {
  // @@protoc_insertion_point(field_mutable:world.hello_w.some)
  return some_.Mutable(index);
}
inline void hello_w::set_some(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:world.hello_w.some)
  some_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void hello_w::set_some(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:world.hello_w.some)
  some_.Mutable(index)->assign(std::move(value));
}
#endif
inline void hello_w::set_some(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  some_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:world.hello_w.some)
}
inline void hello_w::set_some(int index, const char* value, size_t size) {
  some_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:world.hello_w.some)
}
inline ::std::string* hello_w::add_some() {
  // @@protoc_insertion_point(field_add_mutable:world.hello_w.some)
  return some_.Add();
}
inline void hello_w::add_some(const ::std::string& value) {
  some_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:world.hello_w.some)
}
#if LANG_CXX11
inline void hello_w::add_some(::std::string&& value) {
  some_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:world.hello_w.some)
}
#endif
inline void hello_w::add_some(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  some_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:world.hello_w.some)
}
inline void hello_w::add_some(const char* value, size_t size) {
  some_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:world.hello_w.some)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
hello_w::some() const {
  // @@protoc_insertion_point(field_list:world.hello_w.some)
  return some_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
hello_w::mutable_some() {
  // @@protoc_insertion_point(field_mutable_list:world.hello_w.some)
  return &some_;
}

// required .world.hello_w.ctype oc = 4;
inline bool hello_w::has_oc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void hello_w::set_has_oc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void hello_w::clear_has_oc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void hello_w::clear_oc() {
  if (oc_ != NULL) oc_->Clear();
  clear_has_oc();
}
inline const ::world::hello_w_ctype& hello_w::oc() const {
  const ::world::hello_w_ctype* p = oc_;
  // @@protoc_insertion_point(field_get:world.hello_w.oc)
  return p != NULL ? *p : *reinterpret_cast<const ::world::hello_w_ctype*>(
      &::world::_hello_w_ctype_default_instance_);
}
inline ::world::hello_w_ctype* hello_w::release_oc() {
  // @@protoc_insertion_point(field_release:world.hello_w.oc)
  clear_has_oc();
  ::world::hello_w_ctype* temp = oc_;
  oc_ = NULL;
  return temp;
}
inline ::world::hello_w_ctype* hello_w::mutable_oc() {
  set_has_oc();
  if (oc_ == NULL) {
    oc_ = new ::world::hello_w_ctype;
  }
  // @@protoc_insertion_point(field_mutable:world.hello_w.oc)
  return oc_;
}
inline void hello_w::set_allocated_oc(::world::hello_w_ctype* oc) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete oc_;
  }
  if (oc) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      oc = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, oc, submessage_arena);
    }
    set_has_oc();
  } else {
    clear_has_oc();
  }
  oc_ = oc;
  // @@protoc_insertion_point(field_set_allocated:world.hello_w.oc)
}

// optional string test = 6;
inline bool hello_w::has_test() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void hello_w::set_has_test() {
  _has_bits_[0] |= 0x00000002u;
}
inline void hello_w::clear_has_test() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void hello_w::clear_test() {
  test_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_test();
}
inline const ::std::string& hello_w::test() const {
  // @@protoc_insertion_point(field_get:world.hello_w.test)
  return test_.GetNoArena();
}
inline void hello_w::set_test(const ::std::string& value) {
  set_has_test();
  test_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:world.hello_w.test)
}
#if LANG_CXX11
inline void hello_w::set_test(::std::string&& value) {
  set_has_test();
  test_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:world.hello_w.test)
}
#endif
inline void hello_w::set_test(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_test();
  test_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:world.hello_w.test)
}
inline void hello_w::set_test(const char* value, size_t size) {
  set_has_test();
  test_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:world.hello_w.test)
}
inline ::std::string* hello_w::mutable_test() {
  set_has_test();
  // @@protoc_insertion_point(field_mutable:world.hello_w.test)
  return test_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* hello_w::release_test() {
  // @@protoc_insertion_point(field_release:world.hello_w.test)
  clear_has_test();
  return test_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void hello_w::set_allocated_test(::std::string* test) {
  if (test != NULL) {
    set_has_test();
  } else {
    clear_has_test();
  }
  test_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), test);
  // @@protoc_insertion_point(field_set_allocated:world.hello_w.test)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace world

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_world_5fbak_2eproto__INCLUDED
