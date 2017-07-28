// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: requests.proto

#ifndef PROTOBUF_requests_2eproto__INCLUDED
#define PROTOBUF_requests_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace GeneratedRpc {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_requests_2eproto();
void protobuf_AssignDesc_requests_2eproto();
void protobuf_ShutdownFile_requests_2eproto();

class ProcessData;
class ProcessesData;
class RequestInfo;

// ===================================================================

class RequestInfo : public ::google::protobuf::Message {
 public:
  RequestInfo();
  virtual ~RequestInfo();

  RequestInfo(const RequestInfo& from);

  inline RequestInfo& operator=(const RequestInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RequestInfo& default_instance();

  void Swap(RequestInfo* other);

  // implements Message ----------------------------------------------

  inline RequestInfo* New() const { return New(NULL); }

  RequestInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RequestInfo& from);
  void MergeFrom(const RequestInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RequestInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 info = 1;
  void clear_info();
  static const int kInfoFieldNumber = 1;
  ::google::protobuf::uint32 info() const;
  void set_info(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:GeneratedRpc.RequestInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 info_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_requests_2eproto();
  friend void protobuf_AssignDesc_requests_2eproto();
  friend void protobuf_ShutdownFile_requests_2eproto();

  void InitAsDefaultInstance();
  static RequestInfo* default_instance_;
};
// -------------------------------------------------------------------

class ProcessData : public ::google::protobuf::Message {
 public:
  ProcessData();
  virtual ~ProcessData();

  ProcessData(const ProcessData& from);

  inline ProcessData& operator=(const ProcessData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProcessData& default_instance();

  void Swap(ProcessData* other);

  // implements Message ----------------------------------------------

  inline ProcessData* New() const { return New(NULL); }

  ProcessData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessData& from);
  void MergeFrom(const ProcessData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ProcessData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string processName = 1;
  void clear_processname();
  static const int kProcessNameFieldNumber = 1;
  const ::std::string& processname() const;
  void set_processname(const ::std::string& value);
  void set_processname(const char* value);
  void set_processname(const char* value, size_t size);
  ::std::string* mutable_processname();
  ::std::string* release_processname();
  void set_allocated_processname(::std::string* processname);

  // optional string processId = 2;
  void clear_processid();
  static const int kProcessIdFieldNumber = 2;
  const ::std::string& processid() const;
  void set_processid(const ::std::string& value);
  void set_processid(const char* value);
  void set_processid(const char* value, size_t size);
  ::std::string* mutable_processid();
  ::std::string* release_processid();
  void set_allocated_processid(::std::string* processid);

  // optional string userName = 3;
  void clear_username();
  static const int kUserNameFieldNumber = 3;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // optional string mem = 4;
  void clear_mem();
  static const int kMemFieldNumber = 4;
  const ::std::string& mem() const;
  void set_mem(const ::std::string& value);
  void set_mem(const char* value);
  void set_mem(const char* value, size_t size);
  ::std::string* mutable_mem();
  ::std::string* release_mem();
  void set_allocated_mem(::std::string* mem);

  // optional string userId = 5;
  void clear_userid();
  static const int kUserIdFieldNumber = 5;
  const ::std::string& userid() const;
  void set_userid(const ::std::string& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  ::std::string* mutable_userid();
  ::std::string* release_userid();
  void set_allocated_userid(::std::string* userid);

  // optional string cpu = 6;
  void clear_cpu();
  static const int kCpuFieldNumber = 6;
  const ::std::string& cpu() const;
  void set_cpu(const ::std::string& value);
  void set_cpu(const char* value);
  void set_cpu(const char* value, size_t size);
  ::std::string* mutable_cpu();
  ::std::string* release_cpu();
  void set_allocated_cpu(::std::string* cpu);

  // optional string commandLine = 7;
  void clear_commandline();
  static const int kCommandLineFieldNumber = 7;
  const ::std::string& commandline() const;
  void set_commandline(const ::std::string& value);
  void set_commandline(const char* value);
  void set_commandline(const char* value, size_t size);
  ::std::string* mutable_commandline();
  ::std::string* release_commandline();
  void set_allocated_commandline(::std::string* commandline);

  // @@protoc_insertion_point(class_scope:GeneratedRpc.ProcessData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr processname_;
  ::google::protobuf::internal::ArenaStringPtr processid_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr mem_;
  ::google::protobuf::internal::ArenaStringPtr userid_;
  ::google::protobuf::internal::ArenaStringPtr cpu_;
  ::google::protobuf::internal::ArenaStringPtr commandline_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_requests_2eproto();
  friend void protobuf_AssignDesc_requests_2eproto();
  friend void protobuf_ShutdownFile_requests_2eproto();

  void InitAsDefaultInstance();
  static ProcessData* default_instance_;
};
// -------------------------------------------------------------------

class ProcessesData : public ::google::protobuf::Message {
 public:
  ProcessesData();
  virtual ~ProcessesData();

  ProcessesData(const ProcessesData& from);

  inline ProcessesData& operator=(const ProcessesData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ProcessesData& default_instance();

  void Swap(ProcessesData* other);

  // implements Message ----------------------------------------------

  inline ProcessesData* New() const { return New(NULL); }

  ProcessesData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessesData& from);
  void MergeFrom(const ProcessesData& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ProcessesData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .GeneratedRpc.ProcessData processes = 2;
  int processes_size() const;
  void clear_processes();
  static const int kProcessesFieldNumber = 2;
  const ::GeneratedRpc::ProcessData& processes(int index) const;
  ::GeneratedRpc::ProcessData* mutable_processes(int index);
  ::GeneratedRpc::ProcessData* add_processes();
  ::google::protobuf::RepeatedPtrField< ::GeneratedRpc::ProcessData >*
      mutable_processes();
  const ::google::protobuf::RepeatedPtrField< ::GeneratedRpc::ProcessData >&
      processes() const;

  // @@protoc_insertion_point(class_scope:GeneratedRpc.ProcessesData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::GeneratedRpc::ProcessData > processes_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_requests_2eproto();
  friend void protobuf_AssignDesc_requests_2eproto();
  friend void protobuf_ShutdownFile_requests_2eproto();

  void InitAsDefaultInstance();
  static ProcessesData* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RequestInfo

// optional uint32 info = 1;
inline void RequestInfo::clear_info() {
  info_ = 0u;
}
inline ::google::protobuf::uint32 RequestInfo::info() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.RequestInfo.info)
  return info_;
}
inline void RequestInfo::set_info(::google::protobuf::uint32 value) {
  
  info_ = value;
  // @@protoc_insertion_point(field_set:GeneratedRpc.RequestInfo.info)
}

// -------------------------------------------------------------------

// ProcessData

// optional string processName = 1;
inline void ProcessData::clear_processname() {
  processname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::processname() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.processName)
  return processname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_processname(const ::std::string& value) {
  
  processname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.processName)
}
inline void ProcessData::set_processname(const char* value) {
  
  processname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.processName)
}
inline void ProcessData::set_processname(const char* value, size_t size) {
  
  processname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.processName)
}
inline ::std::string* ProcessData::mutable_processname() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.processName)
  return processname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_processname() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.processName)
  
  return processname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_processname(::std::string* processname) {
  if (processname != NULL) {
    
  } else {
    
  }
  processname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), processname);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.processName)
}

// optional string processId = 2;
inline void ProcessData::clear_processid() {
  processid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::processid() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.processId)
  return processid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_processid(const ::std::string& value) {
  
  processid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.processId)
}
inline void ProcessData::set_processid(const char* value) {
  
  processid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.processId)
}
inline void ProcessData::set_processid(const char* value, size_t size) {
  
  processid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.processId)
}
inline ::std::string* ProcessData::mutable_processid() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.processId)
  return processid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_processid() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.processId)
  
  return processid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_processid(::std::string* processid) {
  if (processid != NULL) {
    
  } else {
    
  }
  processid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), processid);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.processId)
}

// optional string userName = 3;
inline void ProcessData::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::username() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.userName)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.userName)
}
inline void ProcessData::set_username(const char* value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.userName)
}
inline void ProcessData::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.userName)
}
inline ::std::string* ProcessData::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.userName)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_username() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.userName)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.userName)
}

// optional string mem = 4;
inline void ProcessData::clear_mem() {
  mem_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::mem() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.mem)
  return mem_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_mem(const ::std::string& value) {
  
  mem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.mem)
}
inline void ProcessData::set_mem(const char* value) {
  
  mem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.mem)
}
inline void ProcessData::set_mem(const char* value, size_t size) {
  
  mem_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.mem)
}
inline ::std::string* ProcessData::mutable_mem() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.mem)
  return mem_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_mem() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.mem)
  
  return mem_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_mem(::std::string* mem) {
  if (mem != NULL) {
    
  } else {
    
  }
  mem_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mem);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.mem)
}

// optional string userId = 5;
inline void ProcessData::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::userid() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.userId)
  return userid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.userId)
}
inline void ProcessData::set_userid(const char* value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.userId)
}
inline void ProcessData::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.userId)
}
inline ::std::string* ProcessData::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.userId)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_userid() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.userId)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_userid(::std::string* userid) {
  if (userid != NULL) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.userId)
}

// optional string cpu = 6;
inline void ProcessData::clear_cpu() {
  cpu_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::cpu() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.cpu)
  return cpu_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_cpu(const ::std::string& value) {
  
  cpu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.cpu)
}
inline void ProcessData::set_cpu(const char* value) {
  
  cpu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.cpu)
}
inline void ProcessData::set_cpu(const char* value, size_t size) {
  
  cpu_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.cpu)
}
inline ::std::string* ProcessData::mutable_cpu() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.cpu)
  return cpu_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_cpu() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.cpu)
  
  return cpu_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_cpu(::std::string* cpu) {
  if (cpu != NULL) {
    
  } else {
    
  }
  cpu_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cpu);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.cpu)
}

// optional string commandLine = 7;
inline void ProcessData::clear_commandline() {
  commandline_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ProcessData::commandline() const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessData.commandLine)
  return commandline_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_commandline(const ::std::string& value) {
  
  commandline_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneratedRpc.ProcessData.commandLine)
}
inline void ProcessData::set_commandline(const char* value) {
  
  commandline_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneratedRpc.ProcessData.commandLine)
}
inline void ProcessData::set_commandline(const char* value, size_t size) {
  
  commandline_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneratedRpc.ProcessData.commandLine)
}
inline ::std::string* ProcessData::mutable_commandline() {
  
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessData.commandLine)
  return commandline_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ProcessData::release_commandline() {
  // @@protoc_insertion_point(field_release:GeneratedRpc.ProcessData.commandLine)
  
  return commandline_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessData::set_allocated_commandline(::std::string* commandline) {
  if (commandline != NULL) {
    
  } else {
    
  }
  commandline_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), commandline);
  // @@protoc_insertion_point(field_set_allocated:GeneratedRpc.ProcessData.commandLine)
}

// -------------------------------------------------------------------

// ProcessesData

// repeated .GeneratedRpc.ProcessData processes = 2;
inline int ProcessesData::processes_size() const {
  return processes_.size();
}
inline void ProcessesData::clear_processes() {
  processes_.Clear();
}
inline const ::GeneratedRpc::ProcessData& ProcessesData::processes(int index) const {
  // @@protoc_insertion_point(field_get:GeneratedRpc.ProcessesData.processes)
  return processes_.Get(index);
}
inline ::GeneratedRpc::ProcessData* ProcessesData::mutable_processes(int index) {
  // @@protoc_insertion_point(field_mutable:GeneratedRpc.ProcessesData.processes)
  return processes_.Mutable(index);
}
inline ::GeneratedRpc::ProcessData* ProcessesData::add_processes() {
  // @@protoc_insertion_point(field_add:GeneratedRpc.ProcessesData.processes)
  return processes_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::GeneratedRpc::ProcessData >*
ProcessesData::mutable_processes() {
  // @@protoc_insertion_point(field_mutable_list:GeneratedRpc.ProcessesData.processes)
  return &processes_;
}
inline const ::google::protobuf::RepeatedPtrField< ::GeneratedRpc::ProcessData >&
ProcessesData::processes() const {
  // @@protoc_insertion_point(field_list:GeneratedRpc.ProcessesData.processes)
  return processes_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace GeneratedRpc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_requests_2eproto__INCLUDED