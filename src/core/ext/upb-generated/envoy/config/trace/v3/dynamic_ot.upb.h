/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/dynamic_ot.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_DYNAMIC_OT_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_DYNAMIC_OT_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_trace_v3_DynamicOtConfig;
typedef struct envoy_config_trace_v3_DynamicOtConfig envoy_config_trace_v3_DynamicOtConfig;
extern const upb_MiniTable envoy_config_trace_v3_DynamicOtConfig_msginit;
struct google_protobuf_Struct;
extern const upb_MiniTable google_protobuf_Struct_msginit;



/* envoy.config.trace.v3.DynamicOtConfig */

UPB_INLINE envoy_config_trace_v3_DynamicOtConfig* envoy_config_trace_v3_DynamicOtConfig_new(upb_Arena* arena) {
  return (envoy_config_trace_v3_DynamicOtConfig*)_upb_Message_New(&envoy_config_trace_v3_DynamicOtConfig_msginit, arena);
}
UPB_INLINE envoy_config_trace_v3_DynamicOtConfig* envoy_config_trace_v3_DynamicOtConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_trace_v3_DynamicOtConfig* ret = envoy_config_trace_v3_DynamicOtConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_trace_v3_DynamicOtConfig_msginit, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_trace_v3_DynamicOtConfig* envoy_config_trace_v3_DynamicOtConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_trace_v3_DynamicOtConfig* ret = envoy_config_trace_v3_DynamicOtConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy_config_trace_v3_DynamicOtConfig_msginit, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_trace_v3_DynamicOtConfig_serialize(const envoy_config_trace_v3_DynamicOtConfig* msg, upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_trace_v3_DynamicOtConfig_msginit, 0, arena, len);
}
UPB_INLINE char* envoy_config_trace_v3_DynamicOtConfig_serialize_ex(const envoy_config_trace_v3_DynamicOtConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  return upb_Encode(msg, &envoy_config_trace_v3_DynamicOtConfig_msginit, options, arena, len);
}
UPB_INLINE void envoy_config_trace_v3_DynamicOtConfig_clear_library(const envoy_config_trace_v3_DynamicOtConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = upb_StringView_FromDataAndSize(NULL, 0);
}
UPB_INLINE upb_StringView envoy_config_trace_v3_DynamicOtConfig_library(const envoy_config_trace_v3_DynamicOtConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView);
}
UPB_INLINE bool envoy_config_trace_v3_DynamicOtConfig_has_config(const envoy_config_trace_v3_DynamicOtConfig* msg) {
  return _upb_hasbit(msg, 1);
}
UPB_INLINE void envoy_config_trace_v3_DynamicOtConfig_clear_config(const envoy_config_trace_v3_DynamicOtConfig* msg) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const upb_Message*) = NULL;
}
UPB_INLINE const struct google_protobuf_Struct* envoy_config_trace_v3_DynamicOtConfig_config(const envoy_config_trace_v3_DynamicOtConfig* msg) {
  return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Struct*);
}

UPB_INLINE void envoy_config_trace_v3_DynamicOtConfig_set_library(envoy_config_trace_v3_DynamicOtConfig *msg, upb_StringView value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_StringView) = value;
}
UPB_INLINE void envoy_config_trace_v3_DynamicOtConfig_set_config(envoy_config_trace_v3_DynamicOtConfig *msg, struct google_protobuf_Struct* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Struct*) = value;
}
UPB_INLINE struct google_protobuf_Struct* envoy_config_trace_v3_DynamicOtConfig_mutable_config(envoy_config_trace_v3_DynamicOtConfig* msg, upb_Arena* arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)envoy_config_trace_v3_DynamicOtConfig_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)_upb_Message_New(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    envoy_config_trace_v3_DynamicOtConfig_set_config(msg, sub);
  }
  return sub;
}

extern const upb_MiniTable_File envoy_config_trace_v3_dynamic_ot_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_DYNAMIC_OT_PROTO_UPB_H_ */
