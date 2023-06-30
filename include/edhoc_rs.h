/*
 * ================================================================================================
 *  WARNING: This file is automatically generated by cbindgen. Manual edits are likely to be lost.
 * ================================================================================================
 */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "edhoc_consts.h"

typedef struct RustEdhocResponderC {
  State state;
  const uint8_t *r;
  uintptr_t r_len;
  const uint8_t *g_i;
  uintptr_t g_i_len;
  const uint8_t *id_cred_i;
  uintptr_t id_cred_i_len;
  const uint8_t *cred_i;
  uintptr_t cred_i_len;
  const uint8_t *id_cred_r;
  uintptr_t id_cred_r_len;
  const uint8_t *cred_r;
  uintptr_t cred_r_len;
} RustEdhocResponderC;

typedef struct RustEdhocInitiatorC {
  State state;
  const uint8_t *i;
  uintptr_t i_len;
  const uint8_t *g_r;
  uintptr_t g_r_len;
  const uint8_t *id_cred_i;
  uintptr_t id_cred_i_len;
  const uint8_t *cred_i;
  uintptr_t cred_i_len;
  const uint8_t *id_cred_r;
  uintptr_t id_cred_r_len;
  const uint8_t *cred_r;
  uintptr_t cred_r_len;
} RustEdhocInitiatorC;

int32_t edhoc_add(int32_t a, int32_t b);

void p256_generate_key_pair_from_c(uint8_t *out_private_key, uint8_t *out_public_key);

struct RustEdhocResponderC responder_new(const uint8_t *r,
                                         uintptr_t r_len,
                                         const uint8_t *g_i,
                                         uintptr_t g_i_len,
                                         const uint8_t *id_cred_i,
                                         uintptr_t id_cred_i_len,
                                         const uint8_t *cred_i,
                                         uintptr_t cred_i_len,
                                         const uint8_t *id_cred_r,
                                         uintptr_t id_cred_r_len,
                                         const uint8_t *cred_r,
                                         uintptr_t cred_r_len);

struct RustEdhocInitiatorC initiator_new(const uint8_t *i,
                                         uintptr_t i_len,
                                         const uint8_t *g_r,
                                         uintptr_t g_r_len,
                                         const uint8_t *id_cred_i,
                                         uintptr_t id_cred_i_len,
                                         const uint8_t *cred_i,
                                         uintptr_t cred_i_len,
                                         const uint8_t *id_cred_r,
                                         uintptr_t id_cred_r_len,
                                         const uint8_t *cred_r,
                                         uintptr_t cred_r_len);

int8_t initiator_prepare_message_1(struct RustEdhocInitiatorC *initiator_c,
                                   EdhocMessageBuffer *message_1);

int8_t responder_process_message_1(struct RustEdhocResponderC *responder_c,
                                   const EdhocMessageBuffer *message_1);

int8_t responder_prepare_message_2(struct RustEdhocResponderC *responder_c,
                                   EdhocMessageBuffer *message_2,
                                   uint8_t *c_r);

int8_t initiator_process_message_2(struct RustEdhocInitiatorC *initiator_c,
                                   const EdhocMessageBuffer *message_2,
                                   uint8_t *c_r);

int8_t initiator_prepare_message_3(struct RustEdhocInitiatorC *initiator_c,
                                   EdhocMessageBuffer *message_3,
                                   uint8_t (*prk_out)[SHA256_DIGEST_LEN]);

int8_t responder_process_message_3(struct RustEdhocResponderC *responder_c,
                                   const EdhocMessageBuffer *message_3,
                                   uint8_t (*prk_out)[SHA256_DIGEST_LEN]);
