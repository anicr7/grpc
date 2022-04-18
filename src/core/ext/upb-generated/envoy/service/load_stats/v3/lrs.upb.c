/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/load_stats/v3/lrs.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/service/load_stats/v3/lrs.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/endpoint/v3/load_report.upb.h"
#include "google/protobuf/duration.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_service_load_stats_v3_LoadStatsRequest_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_Node_msginit},
  {.submsg = &envoy_config_endpoint_v3_ClusterStats_msginit},
};

static const upb_MiniTable_Field envoy_service_load_stats_v3_LoadStatsRequest__fields[2] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(0, 0), 1, 11, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_load_stats_v3_LoadStatsRequest_msginit = {
  &envoy_service_load_stats_v3_LoadStatsRequest_submsgs[0],
  &envoy_service_load_stats_v3_LoadStatsRequest__fields[0],
  UPB_SIZE(12, 24), 2, kUpb_ExtMode_NonExtendable, 2, 255, 0,
};

static const upb_MiniTable_Sub envoy_service_load_stats_v3_LoadStatsResponse_submsgs[1] = {
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_MiniTable_Field envoy_service_load_stats_v3_LoadStatsResponse__fields[4] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(0, 0), kUpb_NoSub, 9, kUpb_FieldMode_Array | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(1, 1), 0, 11, kUpb_FieldMode_Scalar | (kUpb_FieldRep_Pointer << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(1, 1), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(2, 2), UPB_SIZE(0, 0), kUpb_NoSub, 8, kUpb_FieldMode_Scalar | (kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy_service_load_stats_v3_LoadStatsResponse_msginit = {
  &envoy_service_load_stats_v3_LoadStatsResponse_submsgs[0],
  &envoy_service_load_stats_v3_LoadStatsResponse__fields[0],
  UPB_SIZE(12, 24), 4, kUpb_ExtMode_NonExtendable, 4, 255, 0,
};

static const upb_MiniTable *messages_layout[2] = {
  &envoy_service_load_stats_v3_LoadStatsRequest_msginit,
  &envoy_service_load_stats_v3_LoadStatsResponse_msginit,
};

const upb_MiniTable_File envoy_service_load_stats_v3_lrs_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  2,
  0,
  0,
};

#include "upb/port_undef.inc"

