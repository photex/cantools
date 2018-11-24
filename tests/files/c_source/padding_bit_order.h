/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * This file was generated by cantools version 29.2.1 Sat Nov 24 21:02:10 2018.
 */

#ifndef __PADDING_BIT_ORDER_H__
#define __PADDING_BIT_ORDER_H__

#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>

#ifndef EINVAL
#    define EINVAL -22
#endif

#define PADDING_BIT_ORDER_FRAME_ID_MSG0 (0x01U)
#define PADDING_BIT_ORDER_FRAME_ID_MSG1 (0x02U)
#define PADDING_BIT_ORDER_FRAME_ID_MSG2 (0x03U)
#define PADDING_BIT_ORDER_FRAME_ID_MSG3 (0x04U)
#define PADDING_BIT_ORDER_FRAME_ID_MSG4 (0x05U)

/**
 * Signals in message MSG0.
 *
 * @param b Value as on the CAN bus.
 *            Range: 0..1 (0..1 -)
 *            Scale: 1
 *            Offset: 0
 * @param a Value as on the CAN bus.
 *            Range: 0..32767 (0..32767 -)
 *            Scale: 1
 *            Offset: 0
 * @param d Value as on the CAN bus.
 *            Range: 0..1 (0..1 -)
 *            Scale: 1
 *            Offset: 0
 * @param c Value as on the CAN bus.
 *            Range: 0..32767 (0..32767 -)
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg0_t {
    uint8_t b;
    uint16_t a;
    uint8_t d;
    uint16_t c;
};

/**
 * Signals in message MSG1.
 *
 * @param e Value as on the CAN bus.
 *            Range: 0..1 (0..1 -)
 *            Scale: 1
 *            Offset: 0
 * @param f Value as on the CAN bus.
 *            Range: 0..32767 (0..32767 -)
 *            Scale: 1
 *            Offset: 0
 * @param g Value as on the CAN bus.
 *            Range: 0..1 (0..1 -)
 *            Scale: 1
 *            Offset: 0
 * @param h Value as on the CAN bus.
 *            Range: 0..32767 (0..32767 -)
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg1_t {
    uint8_t e;
    uint16_t f;
    uint8_t g;
    uint16_t h;
};

/**
 * Signals in message MSG2.
 *
 * @param i Value as on the CAN bus.
 *            Range: 0..15 (0..15 -)
 *            Scale: 1
 *            Offset: 0
 * @param j Value as on the CAN bus.
 *            Range: 0..15 (0..15 -)
 *            Scale: 1
 *            Offset: 0
 * @param k Value as on the CAN bus.
 *            Range: 0..15 (0..15 -)
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg2_t {
    uint8_t i;
    uint8_t j;
    uint8_t k;
};

/**
 * Signals in message MSG3.
 *
 * @param l Value as on the CAN bus.
 *            Range: 0..18446744073709551615 (0..18446744073709551615 -)
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg3_t {
    uint64_t l;
};

/**
 * Signals in message MSG4.
 *
 * @param m Value as on the CAN bus.
 *            Range: 0..18446744073709551615 (0..18446744073709551615 -)
 *            Scale: 1
 *            Offset: 0
 */
struct padding_bit_order_msg4_t {
    uint64_t m;
};

/**
 * Encode message MSG0.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg0_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg0_t *src_p,
    size_t size);

/**
 * Decode message MSG0.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg0_decode(
    struct padding_bit_order_msg0_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg0_b_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg0_a_is_in_range(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg0_d_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg0_c_is_in_range(uint16_t value);

/**
 * Encode message MSG1.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg1_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg1_t *src_p,
    size_t size);

/**
 * Decode message MSG1.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg1_decode(
    struct padding_bit_order_msg1_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg1_e_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg1_f_is_in_range(uint16_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg1_g_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg1_h_is_in_range(uint16_t value);

/**
 * Encode message MSG2.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg2_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg2_t *src_p,
    size_t size);

/**
 * Decode message MSG2.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg2_decode(
    struct padding_bit_order_msg2_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg2_i_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg2_j_is_in_range(uint8_t value);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg2_k_is_in_range(uint8_t value);

/**
 * Encode message MSG3.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg3_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg3_t *src_p,
    size_t size);

/**
 * Decode message MSG3.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg3_decode(
    struct padding_bit_order_msg3_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg3_l_is_in_range(uint64_t value);

/**
 * Encode message MSG4.
 *
 * @param[out] dst_p Buffer to encode the message into.
 * @param[in] src_p Data to encode.
 * @param[in] size Size of dst_p.
 *
 * @return Size of encoded data, or negative error code.
 */
ssize_t padding_bit_order_msg4_encode(
    uint8_t *dst_p,
    struct padding_bit_order_msg4_t *src_p,
    size_t size);

/**
 * Decode message MSG4.
 *
 * @param[out] dst_p Object to decode the message into.
 * @param[in] src_p Message to decode.
 * @param[in] size Size of src_p.
 *
 * @return zero(0) or negative error code.
 */
int padding_bit_order_msg4_decode(
    struct padding_bit_order_msg4_t *dst_p,
    uint8_t *src_p,
    size_t size);

/**
 * Check that given signal is in allowed range.
 *
 * @param[in] value Signal to check.
 *
 * @return true if in range, false otherwise.
 */
bool padding_bit_order_msg4_m_is_in_range(uint64_t value);

#endif
