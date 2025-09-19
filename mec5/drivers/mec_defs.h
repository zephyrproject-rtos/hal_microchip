/*
 * Copyright 2024 Microchip Technology Inc. and its subsidiaries.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _MEC_DEFS_H
#define _MEC_DEFS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/* General Constants */

#define BIT_n_MASK(n)   (1U << (n))
#define BIT_0_MASK  (1U << 0)
#define BIT_1_MASK  (1U << 1)
#define BIT_2_MASK  (1U << 2)
#define BIT_3_MASK  (1U << 3)
#define BIT_4_MASK  (1U << 4)
#define BIT_5_MASK  (1U << 5)
#define BIT_6_MASK  (1U << 6)
#define BIT_7_MASK  (1U << 7)
#define BIT_8_MASK  (1U << 8)
#define BIT_9_MASK  (1U << 9)
#define BIT_10_MASK (1U << 10)
#define BIT_11_MASK (1U << 11)
#define BIT_12_MASK (1U << 12)
#define BIT_13_MASK (1U << 13)
#define BIT_14_MASK (1U << 14)
#define BIT_15_MASK (1U << 15)
#define BIT_16_MASK (1U << 16)
#define BIT_17_MASK (1U << 17)
#define BIT_18_MASK (1U << 18)
#define BIT_19_MASK (1U << 19)
#define BIT_20_MASK (1U << 20)
#define BIT_21_MASK (1U << 21)
#define BIT_22_MASK (1U << 22)
#define BIT_23_MASK (1U << 23)
#define BIT_24_MASK (1U << 24)
#define BIT_25_MASK (1U << 25)
#define BIT_26_MASK (1U << 26)
#define BIT_27_MASK (1U << 27)
#define BIT_28_MASK (1U << 28)
#define BIT_29_MASK (1U << 29)
#define BIT_30_MASK (1U << 30)
#define BIT_31_MASK (1U << 31)

#ifndef MEC_BIT
#define MEC_BIT(n)    (1ul << (n))
#endif

#ifndef MEC_BIT32
#define MEC_BIT32(n)  (1ul << (n))
#endif

#ifndef MEC_BIT64
#define MEC_BIT64(n)  (1ULL << (n))
#endif

#ifndef MEC_BIT_SET
#define MEC_BIT_SET(d, pos) ((d) |= BIT(pos))
#endif

#ifndef MEC_BIT_CLR
#define MEC_BIT_CLR(d, pos) ((d) &= ~BIT(pos))
#endif

#ifndef MEC_LSHFT
#define MEC_LSHFT(v, s) (((uint32_t)(v)) << ((s) & 0x1Fu))
#endif

#ifndef MEC_FIELD_VAL
#define MEC_FIELD_VAL(val, pos) ((uint32_t)(val) << (pos))
#endif

#ifndef MEC_IS_PTR_ALIGNED
/* Check if a pointer is aligned for against a specific byte boundary  */
#define MEC_IS_PTR_ALIGNED_BYTES(ptr, bytes) ((((uintptr_t)ptr) % bytes) == 0)

/* Check if a pointer is aligned enough for a particular data type. */
#define MEC_IS_PTR_ALIGNED(ptr, type) MEC_IS_PTR_ALIGNED_BYTES(ptr, __alignof(type))
#endif

#ifndef MEC_IS_PTR_ALIGNED16
#define MEC_IS_PTR_ALIGNED16(ptr) ((((uintptr_t)(ptr)) & 0x01U) == 0)
#endif

#ifndef MEC_IS_PTR_ALIGNED32
#define MEC_IS_PTR_ALIGNED32(ptr) ((((uintptr_t)(ptr)) & 0x03U) == 0)
#endif

#ifndef MEC_IS_PTR_ALIGNED64
#define MEC_IS_PTR_ALIGNED64(ptr) ((((uintptr_t)(ptr)) & 0x07U) == 0)
#endif

#ifndef MEC_IS_PTR_ALIGNED128
#define MEC_IS_PTR_ALIGNED128(ptr) ((((uintptr_t)(ptr)) & 0x0fU) == 0)
#endif

#ifndef MEC_IS_PTR_ALIGNED4K
#define MEC_IS_PTR_ALIGNED4K(ptr) ((((uintptr_t)(ptr)) & 0xfffU) == 0)
#endif

/* Align pointer in memory region. NOTE: memory region must be large
 * enough to move pointer forward to an aligned address.
 */
#ifndef MEC_PTR_ALIGN4
#define MEC_PTR_ALIGN4(ptr)     (((uintptr_t)(ptr) + 4U) & ~0x3u)
#endif

#ifndef MEC_PTR_ALIGN8
#define MEC_PTR_ALIGN8(ptr)     (((uintptr_t)(ptr) + 8U) & ~0x7u)
#endif

#ifndef MEC_PTR_ALIGN16
#define MEC_PTR_ALIGN16(ptr)    (((uintptr_t)(ptr) + 16U) & ~0xFu)
#endif

#ifndef MEC_PTR_ALIGN4K
#define MEC_PTR_ALIGN4K(ptr)    (((uintptr_t)(ptr) + 0x1000U) & ~0xFFFu)
#endif

#define MEC_MMCR8(a)  *(volatile uint8_t *)(a)
#define MEC_MMCR16(a) *(volatile uint16_t *)(a)
#define MEC_MMCR32(a) *(volatile uint32_t *)(a)

#define MEC_MMCR8_WR(a, b)  *(volatile uint8_t *)(a) = (uint8_t)(b)
#define MEC_MMCR8_RD(a)     *(volatile uint8_t *)(a)
#define MEC_MMCR16_WR(a, b) *(volatile uint16_t *)(a) = (uint16_t)(b)
#define MEC_MMCR16_RD(a)    *(volatile uint16_t *)(a)
#define MEC_MMCR32_WR(a, b) *(volatile uint32_t *)(a) = (uint32_t)(b)
#define MEC_MMCR32_RD(a)    *(volatile uint32_t *)(a)

#ifndef MEC_DIV_ROUND_UP
#define MEC_DIV_ROUND_UP(n, d) (((n) + (d) - 1) / (d))
#endif

#ifndef MEC_BITS_PER_LONG
#define MEC_BITS_PER_LONG (__CHAR_BIT__ * __SIZEOF_LONG__)
#endif

#ifndef MEC_BITS_PER_LONG_LONG
#define MEC_BITS_PER_LONG_LONG (__CHAR_BIT__ * __SIZEOF_LONG_LONG__)
#endif

#ifndef MEC_GENMASK
#define MEC_GENMASK(h, l) \
    (((~0UL) - (1UL << (l)) + 1) & (~0UL >> (MEC_BITS_PER_LONG - 1 - (h))))
#endif

#ifndef MEC_GENMASK64
#define MEC_GENMASK64(h, l) \
    (((~0ULL) - (1ULL << (l)) + 1) & (~0ULL >> (MEC_BITS_PER_LONG_LONG - 1 - (h))))
#endif

#define MEC_ZERO_OR_COMPILE_ERROR(cond) ((int) sizeof(char[1 - 2 * !(cond)]) - 1)

#ifndef MEC_ARRAY_SIZE
#if defined(__cplusplus)
#define MEC_ARRAY_SIZE(array) (sizeof(array) / sizeof((array)[0]))
#else
#define MEC_IS_ARRAY(array) \
    MEC_ZERO_OR_COMPILE_ERROR( \
        !__builtin_types_compatible_p(__typeof__(array), \
                          __typeof__(&(array)[0])))

#define MEC_ARRAY_SIZE(array) \
    ((size_t) (MEC_IS_ARRAY(array) + (sizeof(array) / sizeof((array)[0]))))
#endif
#endif

struct mec_buf {
    void *data;
    size_t len;
};

struct mec_buf_set {
    struct mchp_buf *bufptr;
    size_t count;
};

struct mec_buf_link {
    void *data;
    size_t len;
    struct mec_buf_link *next;
};

#endif /* #ifndef _MEC_DEFS_H */
