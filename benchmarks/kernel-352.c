// --atomics 29 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 72,89,1 -l 6,1,1
#define int64_t long
#define uint64_t ulong
#define int_least64_t long
#define uint_least64_t ulong
#define int_fast64_t long
#define uint_fast64_t ulong
#define intmax_t long
#define uintmax_t ulong
#define int32_t int
#define uint32_t uint
#define int16_t short
#define uint16_t ushort
#define int8_t char
#define uint8_t uchar

#define INT64_MIN LONG_MIN
#define INT64_MAX LONG_MAX
#define INT32_MIN INT_MIN
#define INT32_MAX INT_MAX
#define INT16_MIN SHRT_MIN
#define INT16_MAX SHRT_MAX
#define INT8_MIN CHAR_MIN
#define INT8_MAX CHAR_MAX
#define UINT64_MIN ULONG_MIN
#define UINT64_MAX ULONG_MAX
#define UINT32_MIN UINT_MIN
#define UINT32_MAX UINT_MAX
#define UINT16_MIN USHRT_MIN
#define UINT16_MAX USHRT_MAX
#define UINT8_MIN UCHAR_MIN
#define UINT8_MAX UCHAR_MAX

#define transparent_crc(X, Y, Z) transparent_crc_(&crc64_context, X, Y, Z)

#define VECTOR(X , Y) VECTOR_(X, Y)
#define VECTOR_(X, Y) X##Y

#ifndef NO_GROUP_DIVERGENCE
#define GROUP_DIVERGE(x, y) get_group_id(x)
#else
#define GROUP_DIVERGE(x, y) (y)
#endif

#ifndef NO_FAKE_DIVERGENCE
#define FAKE_DIVERGE(x, y, z) (x - y)
#else
#define FAKE_DIVERGE(x, y, z) (z)
#endif

__constant uint32_t permutations[10][6] = {
{1,2,0,3,5,4}, // permutation 0
{1,3,0,5,4,2}, // permutation 1
{2,5,1,4,0,3}, // permutation 2
{5,2,4,3,0,1}, // permutation 3
{5,0,4,3,1,2}, // permutation 4
{2,0,3,4,5,1}, // permutation 5
{3,0,5,1,4,2}, // permutation 6
{3,0,4,5,2,1}, // permutation 7
{5,2,3,0,4,1}, // permutation 8
{2,0,1,3,4,5} // permutation 9
};

// Seed: 4012761799

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint16_t  f0;
   int64_t  f1;
   int64_t  f2;
};

struct S1 {
    uint32_t g_12;
    int16_t g_19;
    int32_t g_23;
    int32_t *g_24[4][1];
    struct S0 g_25;
    uint32_t *g_70;
    uint32_t **g_69[4];
    volatile VECTOR(int8_t, 2) g_75;
    volatile VECTOR(int8_t, 4) g_76;
    uint32_t g_83;
    int32_t g_91;
    VECTOR(int16_t, 8) g_108;
    struct S0 g_130;
    VECTOR(int16_t, 16) g_177;
    uint32_t g_191;
    volatile VECTOR(uint16_t, 2) g_192;
    VECTOR(uint16_t, 16) g_193;
    VECTOR(uint64_t, 8) g_195;
    VECTOR(int8_t, 16) g_200;
    volatile VECTOR(int8_t, 4) g_203;
    VECTOR(int8_t, 8) g_204;
    int64_t g_221;
    uint32_t *g_222;
    volatile VECTOR(uint8_t, 2) g_262;
    volatile VECTOR(uint16_t, 2) g_287;
    uint16_t *g_304;
    uint8_t *g_317;
    volatile VECTOR(int8_t, 16) g_353;
    volatile VECTOR(int8_t, 2) g_398;
    int32_t * volatile g_474;
    int32_t g_495;
    uint32_t g_499;
    int32_t * volatile g_502;
    int8_t g_560[2][4];
    VECTOR(uint8_t, 16) g_566;
    int32_t **g_569;
    int32_t ***g_568[5];
    int32_t ****g_567[9][6];
    struct S0 g_587;
    VECTOR(uint8_t, 8) g_654;
    VECTOR(int64_t, 16) g_655;
    volatile VECTOR(int32_t, 16) g_710;
    volatile VECTOR(int8_t, 8) g_721;
    volatile VECTOR(uint64_t, 16) g_745;
    volatile int8_t g_772;
    volatile VECTOR(uint16_t, 8) g_783;
    struct S0 *g_801[10][9][2];
    struct S0 ** volatile g_800[4];
    uint32_t v_collective;
    uint64_t global_0_offset;
    uint64_t global_1_offset;
    uint64_t global_2_offset;
    uint64_t local_0_offset;
    uint64_t local_1_offset;
    uint64_t local_2_offset;
    uint64_t group_0_offset;
    uint64_t group_1_offset;
    uint64_t group_2_offset;
    uint32_t tid;
    __local volatile uint32_t *l_atomic_input;
    __local volatile uint32_t *l_special_values;
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_803);
struct S0 * func_2(uint32_t  p_3, struct S0 * p_4, struct S1 * p_803);
struct S0 * func_7(uint8_t  p_8, uint32_t  p_9, uint8_t  p_10, struct S1 * p_803);
struct S0  func_14(uint32_t * p_15, int16_t  p_16, struct S1 * p_803);
int32_t  func_26(struct S0  p_27, struct S0 * p_28, int32_t ** p_29, struct S1 * p_803);
uint32_t * func_30(uint32_t * p_31, struct S1 * p_803);
uint32_t * func_32(int32_t  p_33, int16_t  p_34, uint32_t  p_35, int32_t ** p_36, int32_t  p_37, struct S1 * p_803);
int32_t ** func_40(int16_t  p_41, uint32_t * p_42, uint8_t  p_43, uint32_t  p_44, uint64_t  p_45, struct S1 * p_803);
int32_t * func_49(int32_t * p_50, int8_t  p_51, uint32_t * p_52, int32_t ** p_53, uint32_t  p_54, struct S1 * p_803);
int32_t * func_55(uint32_t * p_56, int32_t  p_57, int16_t * p_58, int32_t  p_59, int32_t ** p_60, struct S1 * p_803);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_803->g_comm_values p_803->l_comm_values p_803->g_25 p_803->g_24 p_803->g_12 p_803->g_23 p_803->g_70 p_803->g_75 p_803->g_76 p_803->g_19 p_803->g_83 p_803->g_91 p_803->g_130.f1 p_803->g_108 p_803->g_195 p_803->g_204 p_803->g_222 p_803->g_130 p_803->g_200 p_803->g_191 p_803->g_262 p_803->g_304 p_803->g_287 p_803->g_177 p_803->g_193 p_803->g_474 p_803->g_499 p_803->g_502 p_803->g_569 p_803->g_654 p_803->g_655 p_803->g_353 p_803->g_587.f2 p_803->g_710 p_803->g_721 p_803->g_566 p_803->g_398 p_803->g_745 p_803->g_783
 * writes: p_803->g_12 p_803->g_24 p_803->g_23 p_803->g_69 p_803->g_83 p_803->g_25.f0 p_803->g_91 p_803->g_191 p_803->g_130 p_803->g_25.f2 p_803->g_70 p_803->g_222 p_803->g_25.f1 p_803->g_200 p_803->g_499 p_803->g_560 p_803->g_587.f0 p_803->g_566 p_803->g_195 p_803->g_587.f2 p_803->g_801
 */
int16_t  func_1(struct S1 * p_803)
{ /* block id: 4 */
    int64_t l_5 = 0x59B8BC588E1B61BAL;
    VECTOR(int32_t, 4) l_6 = (VECTOR(int32_t, 4))(0x3E8F2100L, (VECTOR(int32_t, 2))(0x3E8F2100L, 1L), 1L);
    uint32_t *l_11 = &p_803->g_12;
    struct S0 *l_797 = &p_803->g_130;
    struct S0 **l_796 = &l_797;
    struct S0 *l_799 = &p_803->g_587;
    struct S0 **l_798 = &l_799;
    struct S0 **l_802 = &p_803->g_801[4][0][0];
    int i;
    (*l_802) = ((*l_798) = ((*l_796) = func_2(l_5, (((VECTOR(int32_t, 2))(l_6.xz)).odd , func_7(p_803->g_comm_values[p_803->tid], ((*l_11) = l_6.w), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 6))], p_803)), p_803)));
    return l_6.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_25.f2 p_803->g_502 p_803->g_75 p_803->g_195 p_803->g_25.f1 p_803->g_19 p_803->g_91 p_803->g_304 p_803->g_130.f0 p_803->l_comm_values p_803->g_177 p_803->g_654 p_803->g_655 p_803->g_191 p_803->g_108 p_803->g_499 p_803->g_130.f2 p_803->g_353 p_803->g_587.f2 p_803->g_200 p_803->g_193 p_803->g_710 p_803->g_721 p_803->g_566 p_803->g_398 p_803->g_745 p_803->g_474 p_803->g_23 p_803->g_130.f1 p_803->g_76 p_803->g_12 p_803->g_83 p_803->g_569 p_803->g_783
 * writes: p_803->g_25.f2 p_803->g_91 p_803->g_195 p_803->g_499 p_803->g_587.f2 p_803->g_83 p_803->g_23 p_803->g_24
 */
struct S0 * func_2(uint32_t  p_3, struct S0 * p_4, struct S1 * p_803)
{ /* block id: 237 */
    uint32_t l_629 = 1UL;
    int32_t l_630 = (-7L);
    int8_t *l_651 = (void*)0;
    int32_t l_705 = 1L;
    int32_t l_706 = 0x327E421EL;
    VECTOR(int32_t, 8) l_711 = (VECTOR(int32_t, 8))(0x12ED3981L, (VECTOR(int32_t, 4))(0x12ED3981L, (VECTOR(int32_t, 2))(0x12ED3981L, 0x664E947CL), 0x664E947CL), 0x664E947CL, 0x12ED3981L, 0x664E947CL);
    VECTOR(int8_t, 16) l_720 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int8_t, 2))(1L, 1L), (VECTOR(int8_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    uint32_t *l_759 = &p_803->g_12;
    int32_t l_773 = (-1L);
    int16_t l_774 = (-1L);
    uint64_t l_775[10][4][6] = {{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}},{{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L},{0xAF3592B8334861A8L,18446744073709551614UL,2UL,0xA126D5D7F78ECB1BL,0xD0A76C368764651AL,0x547F6BDF7CB2AB21L}}};
    uint8_t *l_782[1];
    VECTOR(uint16_t, 2) l_784 = (VECTOR(uint16_t, 2))(65528UL, 0x36D5L);
    int16_t l_791 = 0L;
    struct S0 *l_795[3][7] = {{&p_803->g_130,(void*)0,(void*)0,(void*)0,&p_803->g_130,&p_803->g_130,(void*)0},{&p_803->g_130,(void*)0,(void*)0,(void*)0,&p_803->g_130,&p_803->g_130,(void*)0},{&p_803->g_130,(void*)0,(void*)0,(void*)0,&p_803->g_130,&p_803->g_130,(void*)0}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_782[i] = (void*)0;
    for (p_803->g_25.f2 = 0; (p_803->g_25.f2 > (-26)); p_803->g_25.f2--)
    { /* block id: 240 */
        uint32_t *l_597 = (void*)0;
        int32_t l_600 = 0x46AD56F5L;
        int32_t l_624 = (-1L);
        VECTOR(int16_t, 8) l_713 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        VECTOR(int8_t, 2) l_719 = (VECTOR(int8_t, 2))(0L, (-2L));
        VECTOR(int8_t, 8) l_722 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
        struct S0 *l_735 = &p_803->g_587;
        struct S0 **l_734 = &l_735;
        VECTOR(uint8_t, 16) l_755 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL, (VECTOR(uint8_t, 2))(0UL, 4UL), (VECTOR(uint8_t, 2))(0UL, 4UL), 0UL, 4UL, 0UL, 4UL);
        int32_t *l_765 = &l_706;
        int32_t *l_766 = (void*)0;
        int32_t *l_767 = &l_705;
        int32_t *l_768 = &l_705;
        int32_t *l_769 = &l_706;
        int32_t *l_770 = &l_624;
        int32_t *l_771[4][1] = {{&l_624},{&l_624},{&l_624},{&l_624}};
        int i, j;
        (*p_803->g_502) = 0L;
        if (p_3)
        { /* block id: 242 */
            VECTOR(int64_t, 2) l_619 = (VECTOR(int64_t, 2))(0x47D6294B8C81B30EL, 0x0000620D4DEE5B54L);
            VECTOR(int64_t, 16) l_620 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7289E94E9E235FABL), 0x7289E94E9E235FABL), 0x7289E94E9E235FABL, 0L, 0x7289E94E9E235FABL, (VECTOR(int64_t, 2))(0L, 0x7289E94E9E235FABL), (VECTOR(int64_t, 2))(0L, 0x7289E94E9E235FABL), 0L, 0x7289E94E9E235FABL, 0L, 0x7289E94E9E235FABL);
            uint64_t *l_621 = (void*)0;
            uint64_t *l_622[7][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_623 = (-3L);
            int32_t *l_693 = &l_623;
            int32_t *l_694 = &l_624;
            int32_t *l_695 = &p_803->g_91;
            int32_t *l_696 = (void*)0;
            int32_t *l_697 = &l_600;
            int32_t *l_698 = &l_624;
            int32_t *l_699 = &l_630;
            int32_t *l_700 = &l_600;
            int32_t *l_701 = &l_600;
            int32_t *l_702 = &p_803->g_23;
            int32_t *l_703 = &l_624;
            int32_t *l_704[6] = {&l_630,(void*)0,&l_630,&l_630,(void*)0,&l_630};
            uint64_t l_707 = 0xE01829D04014FA3DL;
            int i, j, k;
            if ((((((void*)0 == l_597) | 0x6530F9CA8BF8FA23L) > (safe_div_func_uint8_t_u_u(((l_600 , (safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((((p_803->g_75.y | ((safe_sub_func_int32_t_s_s(0x12D5E1C9L, ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_600 ^ (safe_add_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_619.yyyyyxxyxyxxyxxy)))))).sad, ((VECTOR(int64_t, 8))(l_620.s1470ed73)).s30))).odd && (p_803->g_195.s5++)), (p_3 ^ ((safe_add_func_int32_t_s_s(7L, p_803->g_25.f1)) , 1L)))) <= 1L), 7UL))), GROUP_DIVERGE(1, 1))), FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10))) || p_803->g_19))) != l_620.s1)) >= p_803->g_91) || 0xB5B9L) != l_629), p_3)), 12))), (*p_803->g_304))), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 6))]))) >= 1UL), p_803->g_177.sd))) , p_3))
            { /* block id: 244 */
                l_630 |= 0L;
                return p_4;
            }
            else
            { /* block id: 247 */
                VECTOR(int8_t, 16) l_631 = (VECTOR(int8_t, 16))(0x33L, (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 1L), 1L), 1L, 0x33L, 1L, (VECTOR(int8_t, 2))(0x33L, 1L), (VECTOR(int8_t, 2))(0x33L, 1L), 0x33L, 1L, 0x33L, 1L);
                int8_t *l_653 = &p_803->g_560[0][0];
                int8_t **l_652 = &l_653;
                uint32_t *l_656[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_657 = (void*)0;
                int8_t *l_658[8][9][3] = {{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}},{{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]},{(void*)0,(void*)0,&p_803->g_560[0][0]}}};
                int64_t *l_659 = &p_803->g_587.f2;
                int64_t *l_660[9];
                int32_t *l_661 = (void*)0;
                int32_t *l_662 = &p_803->g_91;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_660[i] = &p_803->g_130.f2;
                (*l_662) = ((((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(l_631.s94a3398a278836d2)).s7979, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x4BL, 0x61L)).xxyxxyyxxyyyxxyy)).s3d, ((VECTOR(int8_t, 8))((!(safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((l_624 = (safe_div_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(((*l_659) |= ((((l_600 = (l_623 &= ((p_803->g_304 == (void*)0) != (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))((((((((safe_div_func_uint64_t_u_u(((!((VECTOR(int32_t, 4))(0x46239E21L, 0x4F4EB7BDL, 0L, (-1L))).y) , (safe_mul_func_uint16_t_u_u((((p_3 || FAKE_DIVERGE(p_803->local_2_offset, get_local_id(2), 10)) && (((((safe_unary_minus_func_uint64_t_u((p_3 < ((p_803->g_499 ^= ((safe_sub_func_uint8_t_u_u((l_651 != (p_803->g_75.x , ((*l_652) = l_651))), ((VECTOR(uint8_t, 4))(p_803->g_654.s3747)).w)) ^ (((VECTOR(int64_t, 4))(p_803->g_655.s0869)).z , (p_803->g_191 <= (((0L < l_600) ^ p_803->g_108.s3) < 8L))))) == p_3)))) , &p_3) == &p_803->g_191) <= 0x05BF62A7L) != 0UL)) != 0x6F446BEBL), p_3))), GROUP_DIVERGE(0, 1))) > p_803->g_130.f2) >= 1L) , 0x535B4EDCFA5E0E6DL) & p_3) , p_803->g_353.s7) && p_803->g_654.s6), p_3, 0x7C37L, 1L)).xwyxwyyz, ((VECTOR(int16_t, 8))(4L))))).s7, FAKE_DIVERGE(p_803->local_1_offset, get_local_id(1), 10)))))) , l_620.s5) == 0x6EDBL) || p_3)), p_803->g_200.s2)) ^ FAKE_DIVERGE(p_803->group_2_offset, get_group_id(2), 10)), p_3)) != p_3), l_629))), p_803->g_193.sb)), p_3))), (-8L), (-10L), ((VECTOR(int8_t, 2))(0x04L)), 0L, 7L, 0x15L)).s17))).xxxy))).x | p_3) || l_623);
                if ((atomic_inc(&p_803->g_atomic_input[29 * get_linear_group_id() + 6]) == 9))
                { /* block id: 256 */
                    int32_t l_664 = 0x7091CC2FL;
                    int32_t *l_663 = &l_664;
                    int32_t *l_665 = &l_664;
                    int32_t l_666 = 0L;
                    uint16_t l_683 = 0xFC45L;
                    l_665 = l_663;
                    if (l_666)
                    { /* block id: 258 */
                        struct S0 l_668 = {0xAB13L,0x019D77DF64131BBDL,0x07CDE874BB3DACE6L};
                        struct S0 *l_667 = &l_668;
                        int8_t l_669 = (-9L);
                        int32_t l_671 = (-9L);
                        int32_t *l_670 = &l_671;
                        int32_t *l_672 = &l_671;
                        struct S0 l_673[2] = {{1UL,-1L,0L},{1UL,-1L,0L}};
                        int32_t *l_674 = &l_671;
                        int i;
                        l_667 = (void*)0;
                        (*l_663) = l_669;
                        l_672 = (l_670 = (l_663 = (l_665 = (void*)0)));
                        l_663 = (l_673[1] , l_674);
                    }
                    else
                    { /* block id: 266 */
                        int32_t l_676 = (-4L);
                        int32_t *l_675 = &l_676;
                        int32_t *l_677 = (void*)0;
                        int32_t *l_678 = &l_676;
                        VECTOR(int16_t, 16) l_679 = (VECTOR(int16_t, 16))(0x7836L, (VECTOR(int16_t, 4))(0x7836L, (VECTOR(int16_t, 2))(0x7836L, 0L), 0L), 0L, 0x7836L, 0L, (VECTOR(int16_t, 2))(0x7836L, 0L), (VECTOR(int16_t, 2))(0x7836L, 0L), 0x7836L, 0L, 0x7836L, 0L);
                        struct S0 l_680 = {0x0E43L,0x3C3B9795C0F1FBCAL,1L};
                        int32_t *l_681 = &l_676;
                        uint8_t l_682 = 0x1EL;
                        int i;
                        l_677 = (l_663 = (l_675 = (l_665 = (void*)0)));
                        l_663 = l_678;
                        l_681 = (l_677 = (l_665 = (((((VECTOR(int16_t, 2))(l_679.s98)).hi , 0x09560893991F9F3EL) , l_680) , (l_663 = (void*)0))));
                        l_664 |= l_682;
                    }
                    if ((l_683 &= 2L))
                    { /* block id: 279 */
                        int8_t l_684 = 0x17L;
                        VECTOR(uint32_t, 4) l_685 = (VECTOR(uint32_t, 4))(0x740B8721L, (VECTOR(uint32_t, 2))(0x740B8721L, 4294967295UL), 4294967295UL);
                        uint64_t l_688 = 8UL;
                        struct S0 l_689 = {4UL,-1L,0x1CA702A5556B088FL};
                        struct S0 l_690 = {65535UL,1L,-1L};
                        int i;
                        l_664 ^= l_684;
                        l_685.x--;
                        l_690 = (l_688 , l_689);
                    }
                    else
                    { /* block id: 283 */
                        int32_t l_692 = 0L;
                        int32_t *l_691 = &l_692;
                        l_664 = ((VECTOR(int32_t, 2))((-9L), 6L)).lo;
                        l_663 = l_691;
                    }
                    unsigned int result = 0;
                    result += l_664;
                    result += l_666;
                    result += l_683;
                    atomic_add(&p_803->g_special_values[29 * get_linear_group_id() + 6], result);
                }
                else
                { /* block id: 287 */
                    (1 + 1);
                }
            }
            --l_707;
            (*l_694) = 0L;
        }
        else
        { /* block id: 293 */
            int16_t *l_739 = (void*)0;
            int16_t **l_738 = &l_739;
            int32_t l_740 = 4L;
            if (l_600)
            { /* block id: 294 */
                return p_4;
            }
            else
            { /* block id: 296 */
                VECTOR(int8_t, 2) l_723 = (VECTOR(int8_t, 2))(0x4BL, 0x21L);
                int32_t *l_742 = &l_624;
                int i;
                if (p_3)
                { /* block id: 297 */
                    VECTOR(int16_t, 2) l_712 = (VECTOR(int16_t, 2))((-1L), (-1L));
                    VECTOR(int8_t, 4) l_718 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, (-1L)), (-1L));
                    int i;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(p_803->g_710.sfae4)).zwxzwxzx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(l_711.s75)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_712.xxyx)).lo, ((VECTOR(int16_t, 8))(l_713.s61441610)).s53, ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0L, 0x1977L)).yyyxxyyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x967AL, (((((p_803->g_83 = (((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_718.zyzz)).zxxwyzxy, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_719.xyxx)).zwyyyxyx, ((VECTOR(int8_t, 4))(l_720.s9389)).zzyxxzwx))).s1124707622562714)).s71, ((VECTOR(int8_t, 8))(p_803->g_721.s71656313)).s17, ((VECTOR(int8_t, 2))(0x78L, 0L))))).xxyyxyyyxxyxxxyy)).odd))).s01, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_722.s64642722)).lo)).lo))), ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-2L), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(l_723.yyxxyyyy)).s66, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x35L, 2L)))).yxxx)).odd))), (((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((0x3377813437B30EF0L || l_713.s3) && (safe_add_func_uint8_t_u_u(p_803->g_566.sd, p_803->g_75.y))), (safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_803->local_0_offset, get_local_id(0), 10), (((void*)0 == l_734) != ((safe_add_func_int32_t_s_s(((l_738 == (l_629 , (void*)0)) != p_803->g_19), p_3)) < 0UL)))), l_712.y)))), l_740)) >= p_3) < 0xC4L), p_803->g_398.y, 0x23L, 0x22L, 0x72L)).lo)).hi)).yyyy, ((VECTOR(int8_t, 4))((-1L)))))).even))).yyxyyxyy, ((VECTOR(int8_t, 8))(0x7EL))))), ((VECTOR(int8_t, 4))(9L)), ((VECTOR(int8_t, 4))(0x44L)))).s58, ((VECTOR(int8_t, 2))(0x16L))))).even && 0xF5L)) & 0x7B01BA97L) >= p_3) > 1L) != 18446744073709551610UL))), p_3)) && p_3) < 1UL), l_723.x, 0x6A66L, 0x79BCL, (-1L), 0x60A2L, 0x1B8CL, 0x3901L)).odd)).even)))).xxyyxxxy, ((VECTOR(int16_t, 8))(0x3E65L))))).s51))).xxyy, ((VECTOR(uint16_t, 4))(0xC231L))))).even))).yxyyxyyxxxxyyxyx, ((VECTOR(int32_t, 16))(0L))))).sf47e)).xwxxwzyx, ((VECTOR(int32_t, 8))(0x42A6CD4AL))))).lo)).y)
                    { /* block id: 299 */
                        uint8_t l_741[1][9] = {{0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L,0xE0L}};
                        int i, j;
                        if (l_706)
                            break;
                        if (l_741[0][1])
                            continue;
                    }
                    else
                    { /* block id: 302 */
                        uint64_t *l_758[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        atomic_max(&p_803->l_atomic_reduction[0], p_3);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_803->v_collective += p_803->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*p_803->g_569) = func_49((p_3 , l_742), (safe_lshift_func_int8_t_s_u(((l_630 = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(p_803->g_745.secb60dd09f9f5881)).s5703, ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 4))(l_740, 0xF0324B9C497BFE36L, 0x8027D71F2AD69878L, 18446744073709551613UL)).zxyxxxwx, ((VECTOR(uint64_t, 8))(0x350272A5CC308477L, 0xDA314F0F8A6F7E96L, (p_803->g_195.s1 = (((safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s(1L, ((safe_mod_func_int64_t_s_s((!(p_3 & ((VECTOR(uint8_t, 16))(l_755.s1a0f5ee045034964)).s2)), ((*l_742) && (*p_803->g_474)))) != p_3))), ((safe_lshift_func_uint16_t_u_u((&l_740 != (void*)0), 13)) > GROUP_DIVERGE(1, 1)))), (*l_742))))) , 0x5CDBL) | (*p_803->g_304))), 0x0CB94EADEC83C397L, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x8501B22BC63EF3E8L, 18446744073709551607UL)), ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s53)), (uint64_t)FAKE_DIVERGE(p_803->group_1_offset, get_group_id(1), 10)))).yyxy)), 0x12E081A8CC87E0E5L, 18446744073709551613UL)).s1753277323743652)).hi, ((VECTOR(uint64_t, 8))(0xF7EB10D7A362A300L))))).s0233035621245760, ((VECTOR(uint64_t, 16))(18446744073709551612UL)), ((VECTOR(uint64_t, 16))(0xD2DB5C2CD2733ACEL))))).s6da1, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).wwwwwzwzxzyxywxz)).se) >= p_803->g_177.se), p_803->g_130.f1)), l_759, &l_742, p_3, p_803);
                    }
                    (*l_742) |= (safe_mul_func_uint8_t_u_u((p_803->g_12 > (safe_mul_func_uint16_t_u_u(p_3, (*p_803->g_304)))), 0xEBL));
                }
                else
                { /* block id: 309 */
                    int8_t l_764 = 0L;
                    (*l_742) = (*p_803->g_502);
                    l_764 = l_740;
                    if (l_629)
                        continue;
                }
                (*l_742) = 1L;
                (*l_742) = 0L;
            }
        }
        l_775[1][1][2]--;
    }
    if ((+(safe_mul_func_int8_t_s_s((p_3 , (-1L)), (l_705 = ((safe_rshift_func_int8_t_s_u(l_629, 4)) >= l_705))))))
    { /* block id: 321 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_803->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[(safe_mod_func_uint32_t_u_u(((p_3 > ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_803->g_783.s53536414)), 1UL, ((VECTOR(uint16_t, 4))(l_784.yyxx)), 0x8B38L, 0xCD3CL, 4UL)).s5) == p_803->g_200.sd), 10))][(safe_mod_func_uint32_t_u_u(p_803->tid, 6))]));
    }
    else
    { /* block id: 325 */
        int32_t *l_785 = &p_803->g_91;
        int32_t *l_786 = &l_705;
        int32_t *l_787 = &p_803->g_91;
        int32_t *l_788 = &l_705;
        int32_t *l_789[8][1] = {{&p_803->g_91},{&p_803->g_91},{&p_803->g_91},{&p_803->g_91},{&p_803->g_91},{&p_803->g_91},{&p_803->g_91},{&p_803->g_91}};
        int8_t l_790 = 0x68L;
        uint32_t l_792 = 0xDEFD5C48L;
        int i, j;
        --l_792;
        (*p_803->g_569) = l_787;
        (*l_785) = (l_706 |= ((void*)0 == &p_803->g_19));
    }
    return l_795[1][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_25 p_803->g_24 p_803->g_12 p_803->g_23 p_803->g_70 p_803->g_comm_values p_803->g_75 p_803->g_76 p_803->g_19 p_803->g_83 p_803->g_91 p_803->l_comm_values p_803->g_130.f1 p_803->g_108 p_803->g_195 p_803->g_204 p_803->g_222 p_803->g_130 p_803->g_200 p_803->g_191 p_803->g_262 p_803->g_304 p_803->g_287 p_803->g_177 p_803->g_193 p_803->g_474 p_803->g_499 p_803->g_502 p_803->g_569
 * writes: p_803->g_24 p_803->g_12 p_803->g_23 p_803->g_69 p_803->g_83 p_803->g_25.f0 p_803->g_91 p_803->g_191 p_803->g_130 p_803->g_25.f2 p_803->g_70 p_803->g_222 p_803->g_25.f1 p_803->g_200 p_803->g_499 p_803->g_560 p_803->g_587.f0 p_803->g_566
 */
struct S0 * func_7(uint8_t  p_8, uint32_t  p_9, uint8_t  p_10, struct S1 * p_803)
{ /* block id: 6 */
    int32_t l_13 = 6L;
    VECTOR(int8_t, 8) l_17 = (VECTOR(int8_t, 8))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, (-5L)), (-5L)), (-5L), 0x5CL, (-5L));
    int16_t *l_18[3];
    int32_t l_20 = (-1L);
    uint32_t *l_46[5] = {&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12};
    struct S0 *l_586[6] = {&p_803->g_587,&p_803->g_587,&p_803->g_587,&p_803->g_587,&p_803->g_587,&p_803->g_587};
    int32_t **l_588 = (void*)0;
    uint16_t *l_591 = (void*)0;
    uint16_t *l_592 = &p_803->g_587.f0;
    uint8_t *l_593 = (void*)0;
    int32_t *l_594 = &p_803->g_23;
    int i;
    for (i = 0; i < 3; i++)
        l_18[i] = &p_803->g_19;
    (*l_594) = ((p_803->g_566.s7 = (+(l_13 & (((*l_592) = ((*p_803->g_304) = ((((func_14(&p_803->g_12, (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_17.s2005)).yxyyzxzzwwwyyywy)))).s8 , (l_20 = 0x2A7EL)), p_803) , func_26(func_14(func_30(func_32(l_13, p_803->g_25.f1, (safe_rshift_func_uint8_t_u_u((&p_803->g_19 == l_18[1]), 0)), func_40(l_20, l_46[2], l_17.s7, l_17.s2, p_10, p_803), p_803->g_19, p_803), p_803), p_8, p_803), l_586[0], l_588, p_803)) & 0x0910146CL) > 8L) | p_803->g_195.s1))) == l_17.s4)))) ^ p_803->g_195.s1);
    (*l_594) = (*l_594);
    return l_586[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_25
 * writes: p_803->g_24
 */
struct S0  func_14(uint32_t * p_15, int16_t  p_16, struct S1 * p_803)
{ /* block id: 8 */
    int32_t *l_22[2];
    int32_t **l_21[9] = {&l_22[0],&l_22[0],&l_22[0],&l_22[0],&l_22[0],&l_22[0],&l_22[0],&l_22[0],&l_22[0]};
    int i;
    for (i = 0; i < 2; i++)
        l_22[i] = &p_803->g_23;
    p_803->g_24[3][0] = p_15;
    return p_803->g_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_25
 * writes: p_803->g_24 p_803->g_130
 */
int32_t  func_26(struct S0  p_27, struct S0 * p_28, int32_t ** p_29, struct S1 * p_803)
{ /* block id: 228 */
    uint32_t *l_589 = &p_803->g_12;
    int32_t l_590 = 0x37A6B011L;
    p_803->g_130 = func_14(l_589, (l_589 != l_589), p_803);
    return l_590;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_569 p_803->g_91
 * writes: p_803->g_24 p_803->g_91
 */
uint32_t * func_30(uint32_t * p_31, struct S1 * p_803)
{ /* block id: 220 */
    uint32_t *l_585[5];
    int i;
    for (i = 0; i < 5; i++)
        l_585[i] = &p_803->g_12;
    (*p_803->g_569) = p_31;
    for (p_803->g_91 = 0; (p_803->g_91 >= 25); p_803->g_91 = safe_add_func_int8_t_s_s(p_803->g_91, 9))
    { /* block id: 224 */
        return l_585[4];
    }
    return l_585[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_23 p_803->g_200 p_803->g_24 p_803->g_91 p_803->g_12 p_803->g_25.f2 p_803->g_25 p_803->g_191 p_803->g_287 p_803->g_177 p_803->g_204 p_803->g_304 p_803->g_262 p_803->g_83 p_803->g_130.f0 p_803->g_195 p_803->g_193 p_803->g_474 p_803->g_75 p_803->g_499 p_803->g_108 p_803->g_502
 * writes: p_803->g_91 p_803->g_12 p_803->g_23 p_803->g_69 p_803->g_24 p_803->g_25.f2 p_803->g_70 p_803->g_222 p_803->g_25.f1 p_803->g_25.f0 p_803->g_200 p_803->g_499 p_803->g_560
 */
uint32_t * func_32(int32_t  p_33, int16_t  p_34, uint32_t  p_35, int32_t ** p_36, int32_t  p_37, struct S1 * p_803)
{ /* block id: 86 */
    uint32_t *l_240 = (void*)0;
    int16_t *l_241 = &p_803->g_19;
    VECTOR(uint8_t, 2) l_242 = (VECTOR(uint8_t, 2))(1UL, 0xDAL);
    VECTOR(uint8_t, 16) l_243 = (VECTOR(uint8_t, 16))(0x4AL, (VECTOR(uint8_t, 4))(0x4AL, (VECTOR(uint8_t, 2))(0x4AL, 0x3CL), 0x3CL), 0x3CL, 0x4AL, 0x3CL, (VECTOR(uint8_t, 2))(0x4AL, 0x3CL), (VECTOR(uint8_t, 2))(0x4AL, 0x3CL), 0x4AL, 0x3CL, 0x4AL, 0x3CL);
    int32_t **l_245 = &p_803->g_24[0][0];
    int32_t ***l_244 = &l_245;
    int32_t l_279 = 0L;
    uint64_t l_280 = 18446744073709551615UL;
    VECTOR(int16_t, 16) l_314 = (VECTOR(int16_t, 16))(0x47F5L, (VECTOR(int16_t, 4))(0x47F5L, (VECTOR(int16_t, 2))(0x47F5L, 0x555FL), 0x555FL), 0x555FL, 0x47F5L, 0x555FL, (VECTOR(int16_t, 2))(0x47F5L, 0x555FL), (VECTOR(int16_t, 2))(0x47F5L, 0x555FL), 0x47F5L, 0x555FL, 0x47F5L, 0x555FL);
    int32_t l_331 = 0L;
    uint64_t l_332 = 0xFA6290891B9CC9BAL;
    int32_t l_335[5][8] = {{0x487C4B88L,0x73582594L,1L,0x73582594L,0x487C4B88L,0x487C4B88L,0x73582594L,1L},{0x487C4B88L,0x73582594L,1L,0x73582594L,0x487C4B88L,0x487C4B88L,0x73582594L,1L},{0x487C4B88L,0x73582594L,1L,0x73582594L,0x487C4B88L,0x487C4B88L,0x73582594L,1L},{0x487C4B88L,0x73582594L,1L,0x73582594L,0x487C4B88L,0x487C4B88L,0x73582594L,1L},{0x487C4B88L,0x73582594L,1L,0x73582594L,0x487C4B88L,0x487C4B88L,0x73582594L,1L}};
    VECTOR(int8_t, 2) l_348 = (VECTOR(int8_t, 2))(0x67L, (-6L));
    VECTOR(int8_t, 8) l_354 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 7L), 7L), 7L, 8L, 7L);
    VECTOR(uint32_t, 2) l_382 = (VECTOR(uint32_t, 2))(0x59B88759L, 4294967286UL);
    uint8_t *l_461 = (void*)0;
    VECTOR(int32_t, 8) l_503 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    uint32_t *l_564[10][4] = {{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}};
    uint32_t *l_565 = &p_803->g_12;
    int32_t ****l_571[9] = {&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2],&p_803->g_568[2]};
    VECTOR(int64_t, 4) l_577 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-7L)), (-7L));
    uint32_t *l_582 = &p_803->g_12;
    int i, j;
    p_803->g_24[3][0] = func_55(l_240, p_37, l_241, ((p_803->g_23 > ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 2))(l_242.xx)), ((VECTOR(uint8_t, 16))(l_243.sf0b41b177a25ce23)).sc8))).lo) & p_803->g_200.s0), ((*l_244) = &p_803->g_24[3][0]), p_803);
    for (p_803->g_25.f2 = 0; (p_803->g_25.f2 > (-22)); p_803->g_25.f2--)
    { /* block id: 91 */
        uint32_t *l_259 = (void*)0;
        int32_t l_274[2];
        int16_t l_330 = 0x45B6L;
        int8_t *l_355[3];
        int16_t l_356 = (-8L);
        uint8_t l_359 = 247UL;
        uint32_t ***l_360 = (void*)0;
        int64_t l_361 = 0x0FBE32F9ADA0AB17L;
        int32_t *l_362 = &l_335[1][1];
        int64_t l_389[7][6] = {{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L},{0L,0x143F08E09314E9CFL,0L,1L,0x143F08E09314E9CFL,1L}};
        uint32_t l_401[4];
        int32_t l_402 = 1L;
        uint32_t *l_420 = &l_401[2];
        int32_t ***l_464 = &l_245;
        uint32_t **l_563[9][5] = {{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0},{&p_803->g_70,(void*)0,&l_240,(void*)0,(void*)0}};
        int32_t *****l_570[10] = {&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1],&p_803->g_567[7][1]};
        VECTOR(uint16_t, 2) l_572 = (VECTOR(uint16_t, 2))(1UL, 0x5BA9L);
        int64_t *l_580 = &l_389[3][2];
        uint16_t *l_581 = &p_803->g_25.f0;
        int i, j;
        for (i = 0; i < 2; i++)
            l_274[i] = 0L;
        for (i = 0; i < 3; i++)
            l_355[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_401[i] = 0x2376C293L;
        for (p_803->g_12 = 0; (p_803->g_12 <= 41); p_803->g_12 = safe_add_func_int64_t_s_s(p_803->g_12, 8))
        { /* block id: 94 */
            uint32_t *l_258[10][2][10] = {{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12,(void*)0}}};
            uint32_t **l_267 = (void*)0;
            uint32_t **l_268 = (void*)0;
            uint32_t **l_269 = &p_803->g_70;
            uint32_t **l_270 = &p_803->g_222;
            uint32_t ***l_273 = &l_267;
            int32_t l_275 = 0x4F9AAC96L;
            uint8_t *l_276[10][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t *l_277 = (void*)0;
            int32_t *l_278[5];
            int32_t l_305 = 0x34A41C4BL;
            VECTOR(int16_t, 4) l_315 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 2L), 2L);
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_278[i] = &p_803->g_91;
            l_279 |= (l_274[0] = (safe_lshift_func_uint8_t_u_u((l_275 = (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))((-7L), 2L)).even, (func_14(l_258[7][0][4], p_803->g_12, p_803) , p_803->g_12))) ^ ((((void*)0 == l_259) > ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_803->g_262.yy)).lo, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((((*l_270) = ((*l_269) = &p_35)) != &p_35) , (safe_mod_func_uint32_t_u_u(((FAKE_DIVERGE(p_803->local_0_offset, get_local_id(0), 10) >= ((((*l_273) = &l_258[1][0][1]) != (void*)0) | 4L)) & GROUP_DIVERGE(1, 1)), p_35))), l_274[1])), 6)) <= 0x84D7L))) <= l_275)) | 0x7F21BBBAL)) >= 0x570FE7DAA40CD548L), p_37)), p_803->g_191))), FAKE_DIVERGE(p_803->local_2_offset, get_local_id(2), 10))));
            l_280 = p_35;
            for (l_275 = 0; (l_275 > 15); ++l_275)
            { /* block id: 104 */
                int64_t *l_290 = (void*)0;
                int64_t *l_291 = &p_803->g_25.f1;
                struct S0 l_312 = {7UL,4L,0x6A9B58B7B8E3A09AL};
                VECTOR(int16_t, 2) l_313 = (VECTOR(int16_t, 2))(0x2262L, 1L);
                uint8_t *l_316 = (void*)0;
                int32_t l_318 = 0x754FA88BL;
                int32_t l_321 = 0x7E8411E5L;
                uint16_t l_326 = 65531UL;
                int32_t l_336 = 0x580A4429L;
                int32_t l_337 = 0x53221B43L;
                int32_t l_338 = 0L;
                int32_t l_339 = 0x1E3B734FL;
                int32_t l_340 = 0x62365567L;
                uint16_t l_341 = 1UL;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_803->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[(safe_mod_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_u(p_37, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_803->g_287.xxxy)).hi)).even)) >= (safe_lshift_func_uint16_t_u_u(p_803->g_177.s1, 2))) != (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))((p_803->g_204.s2 , ((*l_291) = (+0L))), 0x5FAB8D9AD0FB6353L, ((safe_rshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(246UL, p_803->g_25.f1)) || ((safe_add_func_int32_t_s_s((FAKE_DIVERGE(p_803->local_1_offset, get_local_id(1), 10) >= (p_803->g_304 == p_803->g_304)), p_33)) == p_34)), 0x09L)) , 0x7305L), p_35)) || p_35) != 4294967289UL), 7)) & p_33), ((VECTOR(int64_t, 4))(0x1D35D143F756F641L)), ((VECTOR(int64_t, 8))(0x37F280FFB08B6A63L)), 0x011302DED6B33085L)).s4c, ((VECTOR(int64_t, 2))((-1L)))))))).odd <= p_34)) ^ 0UL) && l_305), 10))][(safe_mod_func_uint32_t_u_u(p_803->tid, 6))]));
                l_318 = ((safe_mul_func_uint16_t_u_u(p_34, p_803->g_262.y)) <= (p_803->g_83 < ((safe_div_func_uint8_t_u_u(((((l_312 , ((((*p_803->g_304) != l_312.f0) != ((VECTOR(int16_t, 16))(0x6D82L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_313.yxyxyyxxxyxxyxxy)).hi)), ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(p_803->g_130.f0, 0x00FBL, 1L, ((VECTOR(int16_t, 2))(l_314.sdb)), ((VECTOR(int16_t, 2))(l_315.zz)), (0xF2L > (l_316 != p_803->g_317)), p_37, 0x6A37L, ((VECTOR(int16_t, 4))(0x4580L)), 0L, 0x5F1FL)).lo))).hi)), ((VECTOR(int16_t, 4))(0x0C30L))))), 0x3A09L, 7L, 0x7AA6L)).s1) >= 0L)) > l_274[1]) | p_803->g_200.s9) && l_312.f0), l_274[1])) >= 7UL)));
                for (p_803->g_25.f0 = (-26); (p_803->g_25.f0 >= 15); p_803->g_25.f0 = safe_add_func_uint16_t_u_u(p_803->g_25.f0, 5))
                { /* block id: 112 */
                    uint32_t l_322 = 0UL;
                    int32_t l_325 = (-1L);
                    int32_t l_329[4][3] = {{0L,0x2EE28371L,0L},{0L,0x2EE28371L,0L},{0L,0x2EE28371L,0L},{0L,0x2EE28371L,0L}};
                    int i, j;
                    l_322--;
                    --l_326;
                    --l_332;
                }
                l_341--;
            }
        }
        (*l_362) &= ((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(6L, ((VECTOR(int8_t, 2))(l_348.yy)), (((VECTOR(uint32_t, 2))(9UL, 0x4BE7AF5BL)).even ^ (0x2AE30E29L != p_35)), ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x1FAAL, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_803->g_353.se247e2a96e05f31d)).odd)).s2 == ((l_356 ^= ((p_803->g_204.s7 = (!((VECTOR(int8_t, 2))(l_354.s57)).lo)) != p_803->g_193.s5)) | (safe_lshift_func_uint16_t_u_u((l_359 | (((l_330 <= (((void*)0 == l_360) & p_803->g_83)) , p_803->g_comm_values[p_803->tid]) , (*p_803->g_304))), FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10))))))), p_803->g_comm_values[p_803->tid])) | 0x2D20BD8AL), 0x36L, p_37, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x51L)), (-1L), l_361, 0x63L, 0x44L, 0x23L)).sd, 0x16L)), p_34)) , 0x0D301ACBL);
        for (l_331 = (-8); (l_331 >= (-3)); ++l_331)
        { /* block id: 125 */
            uint32_t *l_365 = &p_803->g_12;
            uint32_t **l_366[3][1][10] = {{{&l_240,&l_240,&l_365,&l_240,&l_240,&l_240,&l_240,&l_365,&l_240,&l_240}},{{&l_240,&l_240,&l_365,&l_240,&l_240,&l_240,&l_240,&l_365,&l_240,&l_240}},{{&l_240,&l_240,&l_365,&l_240,&l_240,&l_240,&l_240,&l_365,&l_240,&l_240}}};
            uint32_t ****l_385 = (void*)0;
            uint32_t ***l_387 = &l_366[2][0][4];
            uint32_t ****l_386 = &l_387;
            int32_t l_388 = 0x0626E87CL;
            uint8_t l_395 = 0UL;
            VECTOR(int8_t, 2) l_396 = (VECTOR(int8_t, 2))(0L, (-8L));
            VECTOR(int8_t, 16) l_397 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-4L)), (-4L)), (-4L), 9L, (-4L), (VECTOR(int8_t, 2))(9L, (-4L)), (VECTOR(int8_t, 2))(9L, (-4L)), 9L, (-4L), 9L, (-4L));
            VECTOR(int16_t, 8) l_417 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
            uint16_t l_438 = 0x57C2L;
            struct S0 l_441 = {0x0AB6L,-1L,0x5F4F89C629497943L};
            int32_t ***l_467 = &l_245;
            int32_t l_496 = (-3L);
            uint32_t *l_504 = &p_803->g_12;
            int i, j, k;
            (*l_244) = (func_14((l_240 = l_365), ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(l_382.xxxyyxyxxxyxxyxx)).s6)), p_35)) && (+(&p_803->g_191 == ((&p_35 == ((p_37 >= (safe_rshift_func_uint16_t_u_u(((1L & ((*l_362) < (l_360 != ((*l_386) = &p_803->g_69[3])))) , l_388), 4))) , &p_35)) , (void*)0)))) , l_389[4][0]), p_33)), p_37)), p_803->g_91)), 1)), p_33)), p_37)) & (*l_362)), p_803) , (void*)0);
            l_388 &= (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((p_803->g_195.s6 == p_803->g_200.sf) , (l_360 == (void*)0)), (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((0xD8BAL & (((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(2L, (p_803->g_200.se = ((*l_362) = l_395)), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_396.yxyx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x1DL)).xyyyyxyy)).even))), (-6L), (-1L))).s01, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(l_397.sac31)).zxxyxzzz, ((VECTOR(int8_t, 16))(p_803->g_398.yxxxxyxxxyxyxyxx)).hi))))).s30))), 0x60L, ((GROUP_DIVERGE(0, 1) , (((safe_mul_func_int8_t_s_s(0x71L, p_803->g_193.sb)) != (!(p_34 != (*l_362)))) != p_803->g_353.sb)) | l_401[2]), 0x40L, (-10L), 0x68L, 0x22L)).lo, ((VECTOR(int8_t, 4))(0x64L))))).hi, ((VECTOR(int8_t, 2))(5L)), ((VECTOR(int8_t, 2))(0x10L))))).odd || 1L)))), 255UL)), ((VECTOR(int8_t, 4))(0x4DL)), l_402, 0x0AL, p_803->g_83, ((VECTOR(int8_t, 4))(0x78L)), ((VECTOR(int8_t, 2))(0L)), 0x00L)).sbe44)).xzzxwzww)).s7607633076353742)).s5, l_402));
            for (l_359 = 1; (l_359 >= 27); ++l_359)
            { /* block id: 134 */
                int64_t l_429[10][8][3] = {{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}},{{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L},{1L,1L,0x363FF28CFC0586F8L}}};
                uint32_t l_430 = 4294967291UL;
                struct S0 *l_457 = &l_441;
                uint8_t *l_462 = &l_359;
                uint32_t l_484 = 4294967287UL;
                int32_t l_498 = (-9L);
                int i, j, k;
                if (((safe_rshift_func_uint16_t_u_s((p_803->g_25.f1 , (((((p_34 < p_803->g_287.y) > (safe_div_func_int16_t_s_s(((0x67C8E55D73DE8CF6L | (((safe_lshift_func_uint16_t_u_u((*p_803->g_304), (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u((p_34 > (((safe_add_func_int64_t_s_s((((((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x1D4FL, 0x6F0EL)), (-10L), (-4L))).even)).xxxyxyyxyxyyyyyy)).odd)).s64, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(l_417.s13064374)).s51, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4192L, 0x4457L)), 0x46F0L, ((VECTOR(int16_t, 2))(0x072FL, 8L)), (((((safe_add_func_int8_t_s_s(((void*)0 != l_420), (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) != ((l_429[4][1][1] | 0xD2L) | p_803->g_191)), (-1L))), (-1L))), (*p_803->g_304))), GROUP_DIVERGE(1, 1))))) && 0xFBC524AC476CD277L) | 0x6FL) , p_803->g_comm_values[p_803->tid]) <= l_396.x), p_35, 0x6DA1L, (-6L), p_803->g_204.s2, (-10L), 0x2DFBL, 0x6223L, 0L, 0x7101L, 0x1F0CL)).sb5))), ((VECTOR(int16_t, 2))(0x26DDL)), p_35, ((VECTOR(int16_t, 2))((-1L))), 5L)).s03))), 0x066FL, 0x6203L)).lo, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x32C5L))))).even & 65534UL) != p_34) , p_803->g_195.s2), p_37)) < FAKE_DIVERGE(p_803->local_1_offset, get_local_id(1), 10)) | 0x8DEFB303L)), l_429[4][1][1])), p_37)))) | p_35) == GROUP_DIVERGE(0, 1))) && l_417.s3), 0xD7F0L))) , 0x23L) , p_33) >= 1UL)), 14)) , l_430))
                { /* block id: 135 */
                    struct S0 l_442 = {0x65E7L,0x23E8FD4E309EC7B7L,0x14839DB03DC5237EL};
                    for (p_803->g_25.f1 = 0; (p_803->g_25.f1 == 9); p_803->g_25.f1++)
                    { /* block id: 138 */
                        int64_t l_437 = 0x2BCD382FE71DF8CFL;
                        l_437 ^= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_803->g_287.y, 4)), 7));
                        --l_438;
                    }
                    l_442 = l_441;
                    for (l_441.f0 = (-28); (l_441.f0 == 56); l_441.f0 = safe_add_func_int64_t_s_s(l_441.f0, 4))
                    { /* block id: 145 */
                        int16_t l_449 = 1L;
                        atomic_and(&p_803->g_atomic_reduction[get_linear_group_id()], (((5L | (((p_803->g_200.s2 ^= (-7L)) <= (safe_rshift_func_int16_t_s_u(((0L != 4294967295UL) , (safe_mod_func_uint32_t_u_u(3UL, l_429[4][1][1]))), (65533UL == l_449)))) | (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s((p_34 & l_429[4][1][1]), 18446744073709551610UL)) != l_449), 5)))) >= p_803->g_25.f2) <= p_33) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_803->v_collective += p_803->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                }
                else
                { /* block id: 149 */
                    int8_t l_456 = 3L;
                    VECTOR(int64_t, 2) l_468 = (VECTOR(int64_t, 2))(0x4313AE0275B6B0E3L, 0L);
                    int32_t l_493 = (-1L);
                    int32_t l_494 = 0x1C8AA3ACL;
                    int32_t l_497 = (-1L);
                    int i;
                    if ((safe_mul_func_uint8_t_u_u((p_34 , l_456), FAKE_DIVERGE(p_803->global_2_offset, get_global_id(2), 10))))
                    { /* block id: 150 */
                        struct S0 **l_458 = &l_457;
                        p_803->g_69[1] = &l_240;
                        (*l_458) = l_457;
                    }
                    else
                    { /* block id: 153 */
                        uint8_t **l_463 = &l_462;
                        int32_t ****l_465 = (void*)0;
                        int32_t ****l_466 = &l_464;
                        int64_t *l_469 = &l_441.f1;
                        uint8_t *l_479 = (void*)0;
                        uint8_t *l_480 = (void*)0;
                        uint8_t *l_481 = (void*)0;
                        uint8_t *l_482 = (void*)0;
                        uint8_t *l_483[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_483[i] = (void*)0;
                        (*l_457) = p_803->g_25;
                        (*p_803->g_474) = (((safe_mul_func_int16_t_s_s((l_461 != ((*l_463) = l_462)), (((0xD33D3892A6235906L <= (((((*l_466) = l_464) != ((~(*p_803->g_304)) , l_467)) || ((*l_469) = ((VECTOR(int64_t, 4))(l_468.yyyy)).y)) > (safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(0x7D11752CL, 3UL)).lo < (0x2CDAL & ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65527UL, 7UL)).xxyy)).yxwwwwxx)).s4)), ((*l_362) &= (safe_add_func_uint8_t_u_u(0x30L, (l_468.y , p_33)))))))) , 0x3E0FL) <= GROUP_DIVERGE(0, 1)))) ^ p_803->g_193.s9) , l_429[5][7][0]);
                        (*p_803->g_502) = ((*l_362) &= (p_34 <= (((l_484 = (safe_div_func_uint32_t_u_u(p_803->g_75.x, 5UL))) , (p_37 < p_34)) | ((safe_mul_func_uint8_t_u_u(p_803->g_195.s5, (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((+(safe_lshift_func_int8_t_s_u((((p_803->g_499++) && (-1L)) & p_37), (p_803->g_108.s4 || FAKE_DIVERGE(p_803->group_0_offset, get_group_id(0), 10))))) < 0xA066L), 0)), p_34)))) >= p_33))));
                    }
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_503.s64)).xyyyyxxy)).s0)
                    { /* block id: 165 */
                        return l_504;
                    }
                    else
                    { /* block id: 167 */
                        uint32_t *l_505 = &p_803->g_12;
                        return l_505;
                    }
                }
                if (p_33)
                    continue;
                if ((atomic_inc(&p_803->l_atomic_input[17]) == 1))
                { /* block id: 173 */
                    int32_t l_506 = 0x3E44250DL;
                    uint16_t l_510 = 0x43B1L;
                    VECTOR(uint32_t, 2) l_511 = (VECTOR(uint32_t, 2))(0xFCB15012L, 4294967295UL);
                    VECTOR(uint32_t, 2) l_512 = (VECTOR(uint32_t, 2))(1UL, 0x932680FAL);
                    VECTOR(uint32_t, 2) l_513 = (VECTOR(uint32_t, 2))(4294967286UL, 0xFC42AFB3L);
                    int32_t l_514 = (-1L);
                    VECTOR(uint32_t, 16) l_536 = (VECTOR(uint32_t, 16))(0x409A4950L, (VECTOR(uint32_t, 4))(0x409A4950L, (VECTOR(uint32_t, 2))(0x409A4950L, 4294967286UL), 4294967286UL), 4294967286UL, 0x409A4950L, 4294967286UL, (VECTOR(uint32_t, 2))(0x409A4950L, 4294967286UL), (VECTOR(uint32_t, 2))(0x409A4950L, 4294967286UL), 0x409A4950L, 4294967286UL, 0x409A4950L, 4294967286UL);
                    VECTOR(uint32_t, 2) l_537 = (VECTOR(uint32_t, 2))(0xF03CF641L, 0xAD16645AL);
                    VECTOR(int32_t, 8) l_538 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                    VECTOR(uint32_t, 16) l_539 = (VECTOR(uint32_t, 16))(0x4B4CF3FDL, (VECTOR(uint32_t, 4))(0x4B4CF3FDL, (VECTOR(uint32_t, 2))(0x4B4CF3FDL, 0xECE94975L), 0xECE94975L), 0xECE94975L, 0x4B4CF3FDL, 0xECE94975L, (VECTOR(uint32_t, 2))(0x4B4CF3FDL, 0xECE94975L), (VECTOR(uint32_t, 2))(0x4B4CF3FDL, 0xECE94975L), 0x4B4CF3FDL, 0xECE94975L, 0x4B4CF3FDL, 0xECE94975L);
                    VECTOR(uint32_t, 2) l_540 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL);
                    VECTOR(uint32_t, 4) l_541 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 9UL), 9UL);
                    int8_t l_542 = (-2L);
                    int64_t l_543[1][6];
                    VECTOR(uint32_t, 4) l_544 = (VECTOR(uint32_t, 4))(0x335EFA70L, (VECTOR(uint32_t, 2))(0x335EFA70L, 4294967295UL), 4294967295UL);
                    VECTOR(uint16_t, 8) l_545 = (VECTOR(uint16_t, 8))(0xE943L, (VECTOR(uint16_t, 4))(0xE943L, (VECTOR(uint16_t, 2))(0xE943L, 0UL), 0UL), 0UL, 0xE943L, 0UL);
                    int32_t l_546 = (-2L);
                    VECTOR(uint16_t, 16) l_547 = (VECTOR(uint16_t, 16))(0x8386L, (VECTOR(uint16_t, 4))(0x8386L, (VECTOR(uint16_t, 2))(0x8386L, 65533UL), 65533UL), 65533UL, 0x8386L, 65533UL, (VECTOR(uint16_t, 2))(0x8386L, 65533UL), (VECTOR(uint16_t, 2))(0x8386L, 65533UL), 0x8386L, 65533UL, 0x8386L, 65533UL);
                    uint32_t l_548 = 0xDEAA2CD9L;
                    VECTOR(uint16_t, 8) l_549 = (VECTOR(uint16_t, 8))(0xBD30L, (VECTOR(uint16_t, 4))(0xBD30L, (VECTOR(uint16_t, 2))(0xBD30L, 7UL), 7UL), 7UL, 0xBD30L, 7UL);
                    uint64_t l_550 = 1UL;
                    int32_t l_551 = 0x75800ADDL;
                    uint32_t l_552 = 0UL;
                    uint32_t l_553 = 0xE9B7EAA6L;
                    uint32_t l_554 = 4294967288UL;
                    uint16_t l_555 = 65533UL;
                    VECTOR(int32_t, 4) l_556 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x78862A88L), 0x78862A88L);
                    uint32_t l_557 = 0xFF499715L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_543[i][j] = 6L;
                    }
                    for (l_506 = 0; (l_506 == (-25)); --l_506)
                    { /* block id: 176 */
                        struct S0 l_509 = {0x97BDL,0x32563B8E7DEECD70L,0L};
                        l_509 = l_509;
                    }
                    if (((l_510 , ((VECTOR(uint32_t, 8))(0xD220F242L, ((VECTOR(uint32_t, 4))(9UL, ((VECTOR(uint32_t, 2))(l_511.yy)).odd, 0UL, 0x7A10CFD1L)).z, ((VECTOR(uint32_t, 2))(l_512.yx)).odd, 0x730C61CAL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_513.xyxxyyyxxxyxxyxx)).s35b7)))).s7) , l_514))
                    { /* block id: 179 */
                        int32_t l_515 = (-7L);
                        int32_t l_516 = 0x007B56A0L;
                        uint64_t l_517 = 0xF87F8B879C9CEACAL;
                        uint32_t l_518 = 0xDAF3B1FCL;
                        l_506 &= (l_515 , (-1L));
                        l_506 &= l_516;
                        l_514 &= 0x713B1E03L;
                        l_518 ^= (l_506 = l_517);
                    }
                    else
                    { /* block id: 185 */
                        int64_t l_519 = 0x76247D9A2666B083L;
                        int32_t l_521 = (-6L);
                        int32_t *l_520 = &l_521;
                        l_506 |= l_519;
                        l_520 = l_520;
                    }
                    for (l_512.y = 0; (l_512.y >= 60); l_512.y = safe_add_func_int32_t_s_s(l_512.y, 7))
                    { /* block id: 191 */
                        VECTOR(uint64_t, 2) l_524 = (VECTOR(uint64_t, 2))(0xFB92EB2A7B44341CL, 0xE12647030D683B06L);
                        int64_t l_525 = 1L;
                        int8_t l_526 = (-1L);
                        struct S0 l_528 = {0x950BL,1L,-1L};
                        struct S0 *l_527 = &l_528;
                        struct S0 *l_529 = (void*)0;
                        int32_t l_531 = 9L;
                        int32_t *l_530 = &l_531;
                        int32_t *l_532 = &l_531;
                        uint32_t l_533 = 1UL;
                        int i;
                        l_529 = (l_527 = (((VECTOR(int32_t, 8))(0x6BD2927FL, (-1L), 0x6D028CE4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_526 = (l_524.y , (l_514 = (l_506 ^= l_525)))), 5L, 0x48818405L, 0x6B84E8AAL)))), (-1L))).s3 , (void*)0));
                        l_532 = l_530;
                        --l_533;
                        l_506 &= 8L;
                    }
                    l_557 |= (l_556.y ^= ((((((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_536.s8c3a)))).yyyzyzwxzzxyzxxz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_537.yxxy)).yxywwzyyyxwwwxzz))))).s3 , ((VECTOR(int32_t, 16))(l_538.s3004051640404010)).sc) , (((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(8UL, 1UL)).xxyx, ((VECTOR(uint32_t, 16))(l_539.s9afa7bb1e3114251)).sd7fb))).odd, (uint32_t)(FAKE_DIVERGE(p_803->global_1_offset, get_global_id(1), 10) , ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 2))(l_540.yx)).xyyxxyxx, ((VECTOR(uint32_t, 16))(l_541.xxyzwzzxwywxyyyy)).lo))), (uint32_t)0x1C36A85DL, (uint32_t)l_542))))), 0UL, 0xEF1EAEF4L, 3UL, 0UL, 2UL, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0xD15C7D16L, 1UL, 0xFA0875E3L, 0UL)).even)).odd, 4294967295UL, ((VECTOR(uint32_t, 4))(l_543[0][2], ((VECTOR(uint32_t, 2))(4294967289UL, 4294967295UL)), 0xDF00451FL)), 7UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_544.xwzyxxyx)))), 0xABD11887L)).sa , 1UL), 0xAB13AEBDL, 0x6C6F79ADL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(l_545.s2703)).zwwwxzyw, ((VECTOR(uint16_t, 16))(65528UL, ((VECTOR(uint16_t, 2))(8UL, 0xE2C8L)), l_546, 0x30F0L, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(l_547.s5d)).yxyxxxxx, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(l_548, 0UL, ((VECTOR(uint16_t, 2))(l_549.s57)), 0xBB04L, 65535UL, 0xF2D1L, 0x7615L)), (uint16_t)(l_550 = 0x367EL))))))), ((VECTOR(uint16_t, 2))(0xFE93L)), 0x10CFL)).lo))).s00, ((VECTOR(uint16_t, 2))(0x7F2FL))))), l_551, l_552, 0x6D09B6B3L, 0x36FF028DL, 0x2E11B7FEL, 4294967295UL))))).s10)).yxxx)).zwwwzwxyyyzyxyyy, ((VECTOR(uint32_t, 16))(1UL))))).s5)))).xyxyyyxyxxyxyxyx, ((VECTOR(uint32_t, 16))(0x0B2D8AF9L))))).s44f6, ((VECTOR(uint32_t, 4))(0x9156DDF9L))))).x , l_553)) , l_554) , l_555));
                    unsigned int result = 0;
                    result += l_506;
                    result += l_510;
                    result += l_511.y;
                    result += l_511.x;
                    result += l_512.y;
                    result += l_512.x;
                    result += l_513.y;
                    result += l_513.x;
                    result += l_514;
                    result += l_536.sf;
                    result += l_536.se;
                    result += l_536.sd;
                    result += l_536.sc;
                    result += l_536.sb;
                    result += l_536.sa;
                    result += l_536.s9;
                    result += l_536.s8;
                    result += l_536.s7;
                    result += l_536.s6;
                    result += l_536.s5;
                    result += l_536.s4;
                    result += l_536.s3;
                    result += l_536.s2;
                    result += l_536.s1;
                    result += l_536.s0;
                    result += l_537.y;
                    result += l_537.x;
                    result += l_538.s7;
                    result += l_538.s6;
                    result += l_538.s5;
                    result += l_538.s4;
                    result += l_538.s3;
                    result += l_538.s2;
                    result += l_538.s1;
                    result += l_538.s0;
                    result += l_539.sf;
                    result += l_539.se;
                    result += l_539.sd;
                    result += l_539.sc;
                    result += l_539.sb;
                    result += l_539.sa;
                    result += l_539.s9;
                    result += l_539.s8;
                    result += l_539.s7;
                    result += l_539.s6;
                    result += l_539.s5;
                    result += l_539.s4;
                    result += l_539.s3;
                    result += l_539.s2;
                    result += l_539.s1;
                    result += l_539.s0;
                    result += l_540.y;
                    result += l_540.x;
                    result += l_541.w;
                    result += l_541.z;
                    result += l_541.y;
                    result += l_541.x;
                    result += l_542;
                    int l_543_i0, l_543_i1;
                    for (l_543_i0 = 0; l_543_i0 < 1; l_543_i0++) {
                        for (l_543_i1 = 0; l_543_i1 < 6; l_543_i1++) {
                            result += l_543[l_543_i0][l_543_i1];
                        }
                    }
                    result += l_544.w;
                    result += l_544.z;
                    result += l_544.y;
                    result += l_544.x;
                    result += l_545.s7;
                    result += l_545.s6;
                    result += l_545.s5;
                    result += l_545.s4;
                    result += l_545.s3;
                    result += l_545.s2;
                    result += l_545.s1;
                    result += l_545.s0;
                    result += l_546;
                    result += l_547.sf;
                    result += l_547.se;
                    result += l_547.sd;
                    result += l_547.sc;
                    result += l_547.sb;
                    result += l_547.sa;
                    result += l_547.s9;
                    result += l_547.s8;
                    result += l_547.s7;
                    result += l_547.s6;
                    result += l_547.s5;
                    result += l_547.s4;
                    result += l_547.s3;
                    result += l_547.s2;
                    result += l_547.s1;
                    result += l_547.s0;
                    result += l_548;
                    result += l_549.s7;
                    result += l_549.s6;
                    result += l_549.s5;
                    result += l_549.s4;
                    result += l_549.s3;
                    result += l_549.s2;
                    result += l_549.s1;
                    result += l_549.s0;
                    result += l_550;
                    result += l_551;
                    result += l_552;
                    result += l_553;
                    result += l_554;
                    result += l_555;
                    result += l_556.w;
                    result += l_556.z;
                    result += l_556.y;
                    result += l_556.x;
                    result += l_557;
                    atomic_add(&p_803->l_special_values[17], result);
                }
                else
                { /* block id: 204 */
                    (1 + 1);
                }
            }
            (*p_36) = &p_803->g_91;
        }
        l_503.s1 ^= (p_35 && ((*l_581) = (((*l_580) ^= (safe_rshift_func_uint8_t_u_u((p_803->g_560[0][3] = p_33), (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((0x569AB1304C13A5C3L > (((((l_240 != (l_565 = (l_564[0][2] = (void*)0))) && ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_803->g_566.sb45a)).wzxxxxwxzxxzwwyw)).even)), 255UL, 250UL, ((l_571[1] = p_803->g_567[7][1]) == &p_803->g_568[2]), 0x32L, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 2))(255UL, 9UL))))), 248UL, 255UL)).s4) , ((VECTOR(uint16_t, 4))(l_572.xyxx)).w) >= ((safe_mul_func_uint16_t_u_u(((*p_803->g_304)--), p_803->g_262.y)) >= ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_577.wz)), (safe_div_func_uint32_t_u_u(((p_803->g_108.s6 > 0xA0C5L) , p_803->g_25.f1), 0x1925B809L)), 0L, ((VECTOR(int64_t, 2))(0L)), 1L, p_803->g_204.s4, p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 6))], 0x58BF4B65968F6345L, 1L, 0x36263135BEC9F051L, 0x4641E4E623A5349EL, ((VECTOR(int64_t, 2))(0x429CC1A933CFFB83L)), 0x34BBE1F03935BE4EL)).s4 & p_803->g_12) , 9L))) ^ (-4L))), (*l_362), 9L, p_34, p_35, (-1L), ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 4))(0L)), (*p_803->g_474), p_34, 0x69302BDCL, (-1L))).s9516)).y, 0x6AC2D19EL))))) == 0x58FD4A34CC87385EL)));
    }
    return l_582;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_24 p_803->g_12 p_803->g_23 p_803->g_70 p_803->g_comm_values p_803->g_75 p_803->g_76 p_803->g_19 p_803->g_25.f2 p_803->g_83 p_803->g_91 p_803->g_25.f0 p_803->l_comm_values p_803->g_130.f1 p_803->g_25 p_803->g_108 p_803->g_195 p_803->g_204 p_803->g_222 p_803->g_130
 * writes: p_803->g_12 p_803->g_23 p_803->g_69 p_803->g_24 p_803->g_83 p_803->g_25.f0 p_803->g_91 p_803->g_191 p_803->g_130
 */
int32_t ** func_40(int16_t  p_41, uint32_t * p_42, uint8_t  p_43, uint32_t  p_44, uint64_t  p_45, struct S1 * p_803)
{ /* block id: 11 */
    uint32_t l_62 = 4294967288UL;
    int16_t *l_63 = (void*)0;
    int32_t **l_66 = &p_803->g_24[3][0];
    int32_t l_88 = 8L;
    VECTOR(int32_t, 2) l_89 = (VECTOR(int32_t, 2))(0x33BF0D08L, 0x794E43DEL);
    int32_t l_92[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_93 = 1L;
    int64_t l_95 = 0x70E4C8E59B3DB330L;
    int32_t l_96 = 0x496881A2L;
    VECTOR(uint8_t, 2) l_97 = (VECTOR(uint8_t, 2))(0x72L, 253UL);
    struct S0 *l_128 = &p_803->g_25;
    struct S0 *l_129 = &p_803->g_130;
    VECTOR(int16_t, 2) l_137 = (VECTOR(int16_t, 2))(1L, (-1L));
    VECTOR(uint32_t, 4) l_146 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x9F17B183L), 0x9F17B183L);
    struct S0 *l_153 = &p_803->g_25;
    int16_t *l_162 = (void*)0;
    uint16_t l_165 = 0x7A4CL;
    int32_t l_187 = 0x5A4BAC16L;
    int i;
    for (p_44 = 0; (p_44 >= 45); p_44++)
    { /* block id: 14 */
        uint32_t *l_61[2];
        int16_t **l_64 = &l_63;
        int32_t l_65[5] = {0L,0L,0L,0L,0L};
        int i;
        for (i = 0; i < 2; i++)
            l_61[i] = (void*)0;
        (*l_66) = func_49(func_55(l_61[1], l_62, ((*l_64) = l_63), l_65[1], l_66, p_803), l_65[1], p_803->g_70, l_66, p_803->g_comm_values[p_803->tid], p_803);
    }
    for (p_41 = 0; (p_41 != 6); p_41++)
    { /* block id: 32 */
        int32_t *l_86 = &p_803->g_23;
        int32_t *l_87[2];
        int32_t l_90 = 0x3613B7DAL;
        int32_t l_94 = 0x6285BD8CL;
        uint32_t l_121 = 0xA3C79E36L;
        VECTOR(uint32_t, 4) l_147 = (VECTOR(uint32_t, 4))(0xCE81F658L, (VECTOR(uint32_t, 2))(0xCE81F658L, 4294967287UL), 4294967287UL);
        VECTOR(int8_t, 2) l_150 = (VECTOR(int8_t, 2))((-2L), (-7L));
        VECTOR(int8_t, 16) l_151 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x65L), 0x65L), 0x65L, 8L, 0x65L, (VECTOR(int8_t, 2))(8L, 0x65L), (VECTOR(int8_t, 2))(8L, 0x65L), 8L, 0x65L, 8L, 0x65L);
        int32_t **l_154 = &l_87[1];
        struct S0 *l_157[10][10] = {{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130},{(void*)0,&p_803->g_25,&p_803->g_25,&p_803->g_130,&p_803->g_25,&p_803->g_25,(void*)0,&p_803->g_130,&p_803->g_130,&p_803->g_130}};
        uint32_t **l_185 = &p_803->g_70;
        VECTOR(int8_t, 2) l_206 = (VECTOR(int8_t, 2))((-1L), 0L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_87[i] = &p_803->g_23;
        l_97.x--;
        for (l_94 = (-4); (l_94 <= (-15)); --l_94)
        { /* block id: 36 */
            uint8_t *l_122[5][2][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t l_123 = 9L;
            int32_t l_126 = 6L;
            uint16_t *l_127 = &p_803->g_25.f0;
            struct S0 **l_138 = &l_129;
            struct S0 **l_139 = &l_128;
            uint32_t *l_152 = &l_121;
            int i, j, k;
            l_93 &= ((0x3CA9B584F45175A4L < ((((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(1L, p_45, 0x1049L, 1L)).y, (((safe_mul_func_uint16_t_u_u(((*l_127) = (safe_mul_func_uint16_t_u_u((((VECTOR(int16_t, 16))(p_803->g_108.s3117332131220167)).s6 != (p_41 <= (safe_div_func_uint8_t_u_u((**l_66), (((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((GROUP_DIVERGE(0, 1) , ((safe_rshift_func_uint16_t_u_s(0UL, 5)) , 0L)), (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_123 |= l_121), ((safe_rshift_func_int16_t_s_u(l_126, p_45)) < p_41))), p_43)))) == 0L), p_803->g_75.y)) , p_803->g_12) ^ 1L))))), p_803->g_25.f0))), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 6))])) , l_128) != l_129))) , (**l_66)) , l_127) == (void*)0)) == l_126);
            (*l_66) = func_55(((safe_mod_func_uint16_t_u_u(1UL, ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((*l_139) = ((*l_138) = ((p_44 || (((VECTOR(int16_t, 4))(l_137.xyxy)).z < (-2L))) , &p_803->g_130))) != ((safe_sub_func_uint32_t_u_u(p_803->g_130.f1, (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((&p_803->g_91 != &p_803->g_91), ((-1L) & ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_146.wwyx)), 4294967291UL, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_147.xy)).xyyxxxyxxyyyxyxy)).s9, 1UL, 4294967295UL)).s7))), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(0x32L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_150.yxxy)), ((VECTOR(int8_t, 4))(l_151.s9f95))))).even)), 0x1EL)).y, (((((*l_152) = (*l_86)) | p_45) & 0UL) <= p_44))))))) , l_153)), p_44)), p_41)) | p_41))) , (void*)0), p_41, &p_803->g_19, l_126, l_154, p_803);
            if ((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (((l_126 < (((void*)0 == l_157[1][0]) , p_803->g_12)) | ((((safe_sub_func_int16_t_s_s(p_45, (safe_mul_func_int16_t_s_s(p_45, ((l_162 != l_162) > (((((l_165 = (safe_rshift_func_int8_t_s_s((p_803->g_25 , 0L), 0))) , p_44) == 0L) , p_45) & 4294967294UL)))))) ^ 1L) > p_803->g_76.w) & (-4L))) & (**l_66)))))
            { /* block id: 45 */
                int16_t *l_179 = &p_803->g_19;
                uint32_t ***l_180 = &p_803->g_69[2];
                uint32_t ***l_181 = &p_803->g_69[3];
                uint32_t ***l_182 = &p_803->g_69[3];
                uint32_t ***l_183 = &p_803->g_69[3];
                uint32_t ***l_184[5];
                int32_t l_186 = (-9L);
                int32_t **l_223[4];
                int i;
                for (i = 0; i < 5; i++)
                    l_184[i] = &p_803->g_69[3];
                for (i = 0; i < 4; i++)
                    l_223[i] = &p_803->g_24[2][0];
                (**l_66) = (safe_div_func_int32_t_s_s(2L, (safe_unary_minus_func_uint8_t_u((((safe_mul_func_int8_t_s_s(p_803->g_comm_values[p_803->tid], (safe_mod_func_uint8_t_u_u(((0x81L < (p_44 >= (l_126 &= (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((VECTOR(int16_t, 8))(p_803->g_177.sc3cd315a)).s1 < ((safe_unary_minus_func_int16_t_s(((p_42 == p_42) == p_803->g_25.f2))) ^ ((l_179 == (((l_185 = &p_803->g_70) == &p_42) , &p_803->g_19)) >= p_41))), GROUP_DIVERGE(0, 1))), 5))))) , 0x9FL), l_186)))) > p_803->g_108.s6) & 0x4DE95602A4F98EE4L)))));
                if (l_187)
                    break;
                if ((**l_66))
                { /* block id: 50 */
                    int8_t *l_190[4];
                    VECTOR(int16_t, 4) l_194 = (VECTOR(int16_t, 4))(0x567DL, (VECTOR(int16_t, 2))(0x567DL, 0L), 0L);
                    VECTOR(int8_t, 4) l_205 = (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x44L), 0x44L);
                    int32_t l_220 = (-1L);
                    int32_t ***l_224 = &l_66;
                    uint32_t *l_225 = &l_62;
                    uint64_t l_228 = 18446744073709551614UL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_190[i] = (void*)0;
                    (*l_154) = &p_803->g_23;
                    if (((safe_lshift_func_int16_t_s_u(((void*)0 == l_157[6][1]), (((p_803->g_191 = p_41) | FAKE_DIVERGE(p_803->group_1_offset, get_group_id(1), 10)) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_803->g_192.yyyxxyxx)))).odd, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(p_803->g_193.s5eb81ec1)).s63, (uint16_t)((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 8))(l_194.wxywyzxz)), ((VECTOR(int16_t, 16))(0x5937L, 0x7BAFL, (((VECTOR(uint64_t, 16))(p_803->g_195.s3033435050242645)).s2 < (((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_803->g_200.sfbf9)).y, (p_41 < (1L && (safe_sub_func_int8_t_s_s(0x57L, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 2))(p_803->g_203.yw)).xyxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_803->g_204.s62661367)))), ((VECTOR(int8_t, 2))(l_205.xw)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_206.yxxyyyxx)).s31)), (safe_div_func_int64_t_s_s(p_43, (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((p_803->g_221 = (l_220 = (safe_unary_minus_func_int64_t_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((*l_179) &= (1UL > l_186)), FAKE_DIVERGE(p_803->global_2_offset, get_global_id(2), 10))), p_803->g_130.f1)))))), (*l_86))) || 0x62BE75F27348CBB6L), p_41)), (-3L))))), 2L, 0x75L, 0x01L)).s6921))).y)))))), l_186)) == (**l_66)) || 0x613B280EC724F6DBL)), ((VECTOR(int16_t, 8))(0L)), 0x3859L, (-2L), 0L, 0x54AAL, 0x0353L)).odd))).s2))).xxxxyxxyyyyyxyxx, ((VECTOR(uint16_t, 16))(65529UL))))).sdc51))), ((VECTOR(uint16_t, 2))(0xFBE4L)), 1UL, 65527UL)).s1))) > p_803->g_195.s7))
                    { /* block id: 56 */
                        (*l_86) &= l_186;
                    }
                    else
                    { /* block id: 58 */
                        (*l_138) = (*l_138);
                    }
                    (*l_154) = func_49((l_186 , func_49(p_42, p_803->g_204.s5, p_803->g_222, ((*l_224) = l_223[2]), ((*l_225)++), p_803)), l_123, (*l_185), &l_87[1], l_228, p_803);
                    return &p_803->g_24[3][0];
                }
                else
                { /* block id: 65 */
                    (*l_154) = func_55((*l_185), ((**l_66) & p_803->g_204.s2), &p_803->g_19, (&p_803->g_69[3] == &p_803->g_69[2]), l_66, p_803);
                    if ((atomic_inc(&p_803->l_atomic_input[11]) == 8))
                    { /* block id: 68 */
                        uint32_t l_229 = 8UL;
                        VECTOR(int32_t, 2) l_230 = (VECTOR(int32_t, 2))((-5L), 3L);
                        int32_t l_231 = (-8L);
                        VECTOR(int32_t, 16) l_232 = (VECTOR(int32_t, 16))(0x279CDB67L, (VECTOR(int32_t, 4))(0x279CDB67L, (VECTOR(int32_t, 2))(0x279CDB67L, 0x34546D45L), 0x34546D45L), 0x34546D45L, 0x279CDB67L, 0x34546D45L, (VECTOR(int32_t, 2))(0x279CDB67L, 0x34546D45L), (VECTOR(int32_t, 2))(0x279CDB67L, 0x34546D45L), 0x279CDB67L, 0x34546D45L, 0x279CDB67L, 0x34546D45L);
                        uint32_t l_233 = 0x5FC7A70CL;
                        VECTOR(int32_t, 16) l_234 = (VECTOR(int32_t, 16))(0x371DC9CEL, (VECTOR(int32_t, 4))(0x371DC9CEL, (VECTOR(int32_t, 2))(0x371DC9CEL, 0x070B250DL), 0x070B250DL), 0x070B250DL, 0x371DC9CEL, 0x070B250DL, (VECTOR(int32_t, 2))(0x371DC9CEL, 0x070B250DL), (VECTOR(int32_t, 2))(0x371DC9CEL, 0x070B250DL), 0x371DC9CEL, 0x070B250DL, 0x371DC9CEL, 0x070B250DL);
                        int8_t l_235 = 0x76L;
                        int64_t l_236 = 0x7A46C010700F1547L;
                        uint64_t l_237 = 0x0AA6D9CE3C2340BFL;
                        int i;
                        l_236 = (l_235 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(5L, 0x2596C84EL, l_229, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_230.xx)).yxxyxyyx))), l_231, 0L, ((VECTOR(int32_t, 2))(0L, 0x2FED8E15L)), 0x69D18B01L)).lo)).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_232.se5a6)).even)).yyxy))), (l_233 = 0x5588E29FL), l_234.sb, 1L, 0L)).s4);
                        --l_237;
                        unsigned int result = 0;
                        result += l_229;
                        result += l_230.y;
                        result += l_230.x;
                        result += l_231;
                        result += l_232.sf;
                        result += l_232.se;
                        result += l_232.sd;
                        result += l_232.sc;
                        result += l_232.sb;
                        result += l_232.sa;
                        result += l_232.s9;
                        result += l_232.s8;
                        result += l_232.s7;
                        result += l_232.s6;
                        result += l_232.s5;
                        result += l_232.s4;
                        result += l_232.s3;
                        result += l_232.s2;
                        result += l_232.s1;
                        result += l_232.s0;
                        result += l_233;
                        result += l_234.sf;
                        result += l_234.se;
                        result += l_234.sd;
                        result += l_234.sc;
                        result += l_234.sb;
                        result += l_234.sa;
                        result += l_234.s9;
                        result += l_234.s8;
                        result += l_234.s7;
                        result += l_234.s6;
                        result += l_234.s5;
                        result += l_234.s4;
                        result += l_234.s3;
                        result += l_234.s2;
                        result += l_234.s1;
                        result += l_234.s0;
                        result += l_235;
                        result += l_236;
                        result += l_237;
                        atomic_add(&p_803->l_special_values[11], result);
                    }
                    else
                    { /* block id: 73 */
                        (1 + 1);
                    }
                    (**l_139) = p_803->g_130;
                }
                p_803->g_24[3][0] = &p_803->g_91;
            }
            else
            { /* block id: 79 */
                return l_66;
            }
            (*l_86) &= p_44;
        }
    }
    return &p_803->g_24[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_75 p_803->g_76 p_803->g_19 p_803->g_23 p_803->g_25.f2 p_803->g_12 p_803->g_83
 * writes: p_803->g_23 p_803->g_83
 */
int32_t * func_49(int32_t * p_50, int8_t  p_51, uint32_t * p_52, int32_t ** p_53, uint32_t  p_54, struct S1 * p_803)
{ /* block id: 21 */
    int16_t l_71 = 0L;
    VECTOR(int8_t, 2) l_74 = (VECTOR(int8_t, 2))(0x44L, (-1L));
    VECTOR(int8_t, 16) l_77 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int8_t, 2))((-1L), 5L), (VECTOR(int8_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
    VECTOR(int8_t, 16) l_78 = (VECTOR(int8_t, 16))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x43L), 0x43L), 0x43L, (-6L), 0x43L, (VECTOR(int8_t, 2))((-6L), 0x43L), (VECTOR(int8_t, 2))((-6L), 0x43L), (-6L), 0x43L, (-6L), 0x43L);
    VECTOR(uint32_t, 16) l_79 = (VECTOR(uint32_t, 16))(0x90AD7A22L, (VECTOR(uint32_t, 4))(0x90AD7A22L, (VECTOR(uint32_t, 2))(0x90AD7A22L, 4294967292UL), 4294967292UL), 4294967292UL, 0x90AD7A22L, 4294967292UL, (VECTOR(uint32_t, 2))(0x90AD7A22L, 4294967292UL), (VECTOR(uint32_t, 2))(0x90AD7A22L, 4294967292UL), 0x90AD7A22L, 4294967292UL, 0x90AD7A22L, 4294967292UL);
    int16_t l_81 = 0x7E12L;
    uint32_t *l_82 = &p_803->g_83;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_803->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[(safe_mod_func_uint32_t_u_u(((*l_82) &= (l_71 == (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_74.xyxy)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))((-1L), 0x78L)).yyyyxxyy, ((VECTOR(int8_t, 2))(0x52L, (-9L))).yxyyxxxx))).odd)).hi, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-8L), 0L)).xyyyxxxxyxxxxyxy)).s20, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_803->g_75.yy)), ((VECTOR(int8_t, 2))(p_803->g_76.xy)), 0L, p_803->g_19, 0x5FL, 7L)).s6072105362621667)), ((VECTOR(int8_t, 8))(l_77.s85525c53)).s7745627762221612))).s26, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_78.s4589)))).lo))).xyyxyxxxyyxyyyyy)).sba)))))), 0x33L, (-1L))).s0 ^ (((*p_50) = (*p_50)) != ((+((((p_803->g_25.f2 == ((~0UL) , 2L)) > l_77.sc) & (((VECTOR(uint32_t, 16))(l_79.sc67ce96ea6506138)).sf <= (safe_unary_minus_func_int32_t_s((l_78.s3 > (((void*)0 != &p_803->g_24[3][0]) , l_81)))))) != FAKE_DIVERGE(p_803->global_0_offset, get_global_id(0), 10))) && p_803->g_12))))), 10))][(safe_mod_func_uint32_t_u_u(p_803->tid, 6))]));
    return &p_803->g_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_24 p_803->g_12 p_803->g_23 p_803->g_91
 * writes: p_803->g_12 p_803->g_23 p_803->g_69 p_803->g_24 p_803->g_91
 */
int32_t * func_55(uint32_t * p_56, int32_t  p_57, int16_t * p_58, int32_t  p_59, int32_t ** p_60, struct S1 * p_803)
{ /* block id: 16 */
    uint32_t *l_68[8][7][4] = {{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}},{{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12},{&p_803->g_12,&p_803->g_12,&p_803->g_12,&p_803->g_12}}};
    uint32_t **l_67 = &l_68[4][5][0];
    int i, j, k;
    (**p_60) = (**p_60);
    p_803->g_69[3] = l_67;
    (*p_60) = &p_803->g_23;
    return &p_803->g_23;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[29];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 29; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[29];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 29; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S1 c_804;
    struct S1* p_803 = &c_804;
    struct S1 c_805 = {
        0xBF33880EL, // p_803->g_12
        (-1L), // p_803->g_19
        0x39956A21L, // p_803->g_23
        {{&p_803->g_23},{&p_803->g_23},{&p_803->g_23},{&p_803->g_23}}, // p_803->g_24
        {0x9130L,0x53B51AD5B481D3EFL,0x35FE57B6A69EED08L}, // p_803->g_25
        &p_803->g_12, // p_803->g_70
        {&p_803->g_70,&p_803->g_70,&p_803->g_70,&p_803->g_70}, // p_803->g_69
        (VECTOR(int8_t, 2))(0x74L, 0x27L), // p_803->g_75
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), // p_803->g_76
        4294967292UL, // p_803->g_83
        6L, // p_803->g_91
        (VECTOR(int16_t, 8))(0x6F7BL, (VECTOR(int16_t, 4))(0x6F7BL, (VECTOR(int16_t, 2))(0x6F7BL, 0x54AAL), 0x54AAL), 0x54AAL, 0x6F7BL, 0x54AAL), // p_803->g_108
        {65527UL,4L,0x460BA7D1E3074757L}, // p_803->g_130
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int16_t, 2))(1L, 8L), (VECTOR(int16_t, 2))(1L, 8L), 1L, 8L, 1L, 8L), // p_803->g_177
        4294967288UL, // p_803->g_191
        (VECTOR(uint16_t, 2))(0x8B51L, 65527UL), // p_803->g_192
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x3555L), 0x3555L), 0x3555L, 1UL, 0x3555L, (VECTOR(uint16_t, 2))(1UL, 0x3555L), (VECTOR(uint16_t, 2))(1UL, 0x3555L), 1UL, 0x3555L, 1UL, 0x3555L), // p_803->g_193
        (VECTOR(uint64_t, 8))(0xDE2BD186E39A06C5L, (VECTOR(uint64_t, 4))(0xDE2BD186E39A06C5L, (VECTOR(uint64_t, 2))(0xDE2BD186E39A06C5L, 1UL), 1UL), 1UL, 0xDE2BD186E39A06C5L, 1UL), // p_803->g_195
        (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, (-1L)), (-1L)), (-1L), 0x6CL, (-1L), (VECTOR(int8_t, 2))(0x6CL, (-1L)), (VECTOR(int8_t, 2))(0x6CL, (-1L)), 0x6CL, (-1L), 0x6CL, (-1L)), // p_803->g_200
        (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x14L), 0x14L), // p_803->g_203
        (VECTOR(int8_t, 8))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0x01L), 0x01L), 0x01L, 0x44L, 0x01L), // p_803->g_204
        0x3D07EFA30DC9C6B8L, // p_803->g_221
        &p_803->g_12, // p_803->g_222
        (VECTOR(uint8_t, 2))(1UL, 7UL), // p_803->g_262
        (VECTOR(uint16_t, 2))(65535UL, 0xFDECL), // p_803->g_287
        &p_803->g_130.f0, // p_803->g_304
        (void*)0, // p_803->g_317
        (VECTOR(int8_t, 16))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x59L), 0x59L), 0x59L, 0x6EL, 0x59L, (VECTOR(int8_t, 2))(0x6EL, 0x59L), (VECTOR(int8_t, 2))(0x6EL, 0x59L), 0x6EL, 0x59L, 0x6EL, 0x59L), // p_803->g_353
        (VECTOR(int8_t, 2))(0x36L, 0x4DL), // p_803->g_398
        &p_803->g_23, // p_803->g_474
        0x13FC44A2L, // p_803->g_495
        0xE05505A8L, // p_803->g_499
        &p_803->g_91, // p_803->g_502
        {{0x75L,0x75L,0x75L,0x75L},{0x75L,0x75L,0x75L,0x75L}}, // p_803->g_560
        (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x69L), 0x69L), 0x69L, 247UL, 0x69L, (VECTOR(uint8_t, 2))(247UL, 0x69L), (VECTOR(uint8_t, 2))(247UL, 0x69L), 247UL, 0x69L, 247UL, 0x69L), // p_803->g_566
        &p_803->g_24[3][0], // p_803->g_569
        {&p_803->g_569,&p_803->g_569,&p_803->g_569,&p_803->g_569,&p_803->g_569}, // p_803->g_568
        {{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0},{&p_803->g_568[2],(void*)0,&p_803->g_568[3],(void*)0,&p_803->g_568[3],(void*)0}}, // p_803->g_567
        {0x5C57L,0x6FBBD799A4ACABA1L,0x126BD26CCDC4E092L}, // p_803->g_587
        (VECTOR(uint8_t, 8))(0x92L, (VECTOR(uint8_t, 4))(0x92L, (VECTOR(uint8_t, 2))(0x92L, 0x30L), 0x30L), 0x30L, 0x92L, 0x30L), // p_803->g_654
        (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int64_t, 2))(9L, (-1L)), (VECTOR(int64_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L)), // p_803->g_655
        (VECTOR(int32_t, 16))(0x6161F2BCL, (VECTOR(int32_t, 4))(0x6161F2BCL, (VECTOR(int32_t, 2))(0x6161F2BCL, 0x2E40B541L), 0x2E40B541L), 0x2E40B541L, 0x6161F2BCL, 0x2E40B541L, (VECTOR(int32_t, 2))(0x6161F2BCL, 0x2E40B541L), (VECTOR(int32_t, 2))(0x6161F2BCL, 0x2E40B541L), 0x6161F2BCL, 0x2E40B541L, 0x6161F2BCL, 0x2E40B541L), // p_803->g_710
        (VECTOR(int8_t, 8))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 8L), 8L), 8L, 0x5FL, 8L), // p_803->g_721
        (VECTOR(uint64_t, 16))(0x54414C422FEB072AL, (VECTOR(uint64_t, 4))(0x54414C422FEB072AL, (VECTOR(uint64_t, 2))(0x54414C422FEB072AL, 0UL), 0UL), 0UL, 0x54414C422FEB072AL, 0UL, (VECTOR(uint64_t, 2))(0x54414C422FEB072AL, 0UL), (VECTOR(uint64_t, 2))(0x54414C422FEB072AL, 0UL), 0x54414C422FEB072AL, 0UL, 0x54414C422FEB072AL, 0UL), // p_803->g_745
        0L, // p_803->g_772
        (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 65535UL), 65535UL), 65535UL, 5UL, 65535UL), // p_803->g_783
        {{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}},{{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587},{&p_803->g_587,&p_803->g_587}}}, // p_803->g_801
        {&p_803->g_801[9][6][0],&p_803->g_801[9][6][0],&p_803->g_801[9][6][0],&p_803->g_801[9][6][0]}, // p_803->g_800
        0, // p_803->v_collective
        sequence_input[get_global_id(0)], // p_803->global_0_offset
        sequence_input[get_global_id(1)], // p_803->global_1_offset
        sequence_input[get_global_id(2)], // p_803->global_2_offset
        sequence_input[get_local_id(0)], // p_803->local_0_offset
        sequence_input[get_local_id(1)], // p_803->local_1_offset
        sequence_input[get_local_id(2)], // p_803->local_2_offset
        sequence_input[get_group_id(0)], // p_803->group_0_offset
        sequence_input[get_group_id(1)], // p_803->group_1_offset
        sequence_input[get_group_id(2)], // p_803->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_803->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_804 = c_805;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_803);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_803->g_12, "p_803->g_12", print_hash_value);
    transparent_crc(p_803->g_19, "p_803->g_19", print_hash_value);
    transparent_crc(p_803->g_23, "p_803->g_23", print_hash_value);
    transparent_crc(p_803->g_25.f0, "p_803->g_25.f0", print_hash_value);
    transparent_crc(p_803->g_25.f1, "p_803->g_25.f1", print_hash_value);
    transparent_crc(p_803->g_25.f2, "p_803->g_25.f2", print_hash_value);
    transparent_crc(p_803->g_75.x, "p_803->g_75.x", print_hash_value);
    transparent_crc(p_803->g_75.y, "p_803->g_75.y", print_hash_value);
    transparent_crc(p_803->g_76.x, "p_803->g_76.x", print_hash_value);
    transparent_crc(p_803->g_76.y, "p_803->g_76.y", print_hash_value);
    transparent_crc(p_803->g_76.z, "p_803->g_76.z", print_hash_value);
    transparent_crc(p_803->g_76.w, "p_803->g_76.w", print_hash_value);
    transparent_crc(p_803->g_83, "p_803->g_83", print_hash_value);
    transparent_crc(p_803->g_91, "p_803->g_91", print_hash_value);
    transparent_crc(p_803->g_108.s0, "p_803->g_108.s0", print_hash_value);
    transparent_crc(p_803->g_108.s1, "p_803->g_108.s1", print_hash_value);
    transparent_crc(p_803->g_108.s2, "p_803->g_108.s2", print_hash_value);
    transparent_crc(p_803->g_108.s3, "p_803->g_108.s3", print_hash_value);
    transparent_crc(p_803->g_108.s4, "p_803->g_108.s4", print_hash_value);
    transparent_crc(p_803->g_108.s5, "p_803->g_108.s5", print_hash_value);
    transparent_crc(p_803->g_108.s6, "p_803->g_108.s6", print_hash_value);
    transparent_crc(p_803->g_108.s7, "p_803->g_108.s7", print_hash_value);
    transparent_crc(p_803->g_130.f0, "p_803->g_130.f0", print_hash_value);
    transparent_crc(p_803->g_130.f1, "p_803->g_130.f1", print_hash_value);
    transparent_crc(p_803->g_130.f2, "p_803->g_130.f2", print_hash_value);
    transparent_crc(p_803->g_177.s0, "p_803->g_177.s0", print_hash_value);
    transparent_crc(p_803->g_177.s1, "p_803->g_177.s1", print_hash_value);
    transparent_crc(p_803->g_177.s2, "p_803->g_177.s2", print_hash_value);
    transparent_crc(p_803->g_177.s3, "p_803->g_177.s3", print_hash_value);
    transparent_crc(p_803->g_177.s4, "p_803->g_177.s4", print_hash_value);
    transparent_crc(p_803->g_177.s5, "p_803->g_177.s5", print_hash_value);
    transparent_crc(p_803->g_177.s6, "p_803->g_177.s6", print_hash_value);
    transparent_crc(p_803->g_177.s7, "p_803->g_177.s7", print_hash_value);
    transparent_crc(p_803->g_177.s8, "p_803->g_177.s8", print_hash_value);
    transparent_crc(p_803->g_177.s9, "p_803->g_177.s9", print_hash_value);
    transparent_crc(p_803->g_177.sa, "p_803->g_177.sa", print_hash_value);
    transparent_crc(p_803->g_177.sb, "p_803->g_177.sb", print_hash_value);
    transparent_crc(p_803->g_177.sc, "p_803->g_177.sc", print_hash_value);
    transparent_crc(p_803->g_177.sd, "p_803->g_177.sd", print_hash_value);
    transparent_crc(p_803->g_177.se, "p_803->g_177.se", print_hash_value);
    transparent_crc(p_803->g_177.sf, "p_803->g_177.sf", print_hash_value);
    transparent_crc(p_803->g_191, "p_803->g_191", print_hash_value);
    transparent_crc(p_803->g_192.x, "p_803->g_192.x", print_hash_value);
    transparent_crc(p_803->g_192.y, "p_803->g_192.y", print_hash_value);
    transparent_crc(p_803->g_193.s0, "p_803->g_193.s0", print_hash_value);
    transparent_crc(p_803->g_193.s1, "p_803->g_193.s1", print_hash_value);
    transparent_crc(p_803->g_193.s2, "p_803->g_193.s2", print_hash_value);
    transparent_crc(p_803->g_193.s3, "p_803->g_193.s3", print_hash_value);
    transparent_crc(p_803->g_193.s4, "p_803->g_193.s4", print_hash_value);
    transparent_crc(p_803->g_193.s5, "p_803->g_193.s5", print_hash_value);
    transparent_crc(p_803->g_193.s6, "p_803->g_193.s6", print_hash_value);
    transparent_crc(p_803->g_193.s7, "p_803->g_193.s7", print_hash_value);
    transparent_crc(p_803->g_193.s8, "p_803->g_193.s8", print_hash_value);
    transparent_crc(p_803->g_193.s9, "p_803->g_193.s9", print_hash_value);
    transparent_crc(p_803->g_193.sa, "p_803->g_193.sa", print_hash_value);
    transparent_crc(p_803->g_193.sb, "p_803->g_193.sb", print_hash_value);
    transparent_crc(p_803->g_193.sc, "p_803->g_193.sc", print_hash_value);
    transparent_crc(p_803->g_193.sd, "p_803->g_193.sd", print_hash_value);
    transparent_crc(p_803->g_193.se, "p_803->g_193.se", print_hash_value);
    transparent_crc(p_803->g_193.sf, "p_803->g_193.sf", print_hash_value);
    transparent_crc(p_803->g_195.s0, "p_803->g_195.s0", print_hash_value);
    transparent_crc(p_803->g_195.s1, "p_803->g_195.s1", print_hash_value);
    transparent_crc(p_803->g_195.s2, "p_803->g_195.s2", print_hash_value);
    transparent_crc(p_803->g_195.s3, "p_803->g_195.s3", print_hash_value);
    transparent_crc(p_803->g_195.s4, "p_803->g_195.s4", print_hash_value);
    transparent_crc(p_803->g_195.s5, "p_803->g_195.s5", print_hash_value);
    transparent_crc(p_803->g_195.s6, "p_803->g_195.s6", print_hash_value);
    transparent_crc(p_803->g_195.s7, "p_803->g_195.s7", print_hash_value);
    transparent_crc(p_803->g_200.s0, "p_803->g_200.s0", print_hash_value);
    transparent_crc(p_803->g_200.s1, "p_803->g_200.s1", print_hash_value);
    transparent_crc(p_803->g_200.s2, "p_803->g_200.s2", print_hash_value);
    transparent_crc(p_803->g_200.s3, "p_803->g_200.s3", print_hash_value);
    transparent_crc(p_803->g_200.s4, "p_803->g_200.s4", print_hash_value);
    transparent_crc(p_803->g_200.s5, "p_803->g_200.s5", print_hash_value);
    transparent_crc(p_803->g_200.s6, "p_803->g_200.s6", print_hash_value);
    transparent_crc(p_803->g_200.s7, "p_803->g_200.s7", print_hash_value);
    transparent_crc(p_803->g_200.s8, "p_803->g_200.s8", print_hash_value);
    transparent_crc(p_803->g_200.s9, "p_803->g_200.s9", print_hash_value);
    transparent_crc(p_803->g_200.sa, "p_803->g_200.sa", print_hash_value);
    transparent_crc(p_803->g_200.sb, "p_803->g_200.sb", print_hash_value);
    transparent_crc(p_803->g_200.sc, "p_803->g_200.sc", print_hash_value);
    transparent_crc(p_803->g_200.sd, "p_803->g_200.sd", print_hash_value);
    transparent_crc(p_803->g_200.se, "p_803->g_200.se", print_hash_value);
    transparent_crc(p_803->g_200.sf, "p_803->g_200.sf", print_hash_value);
    transparent_crc(p_803->g_203.x, "p_803->g_203.x", print_hash_value);
    transparent_crc(p_803->g_203.y, "p_803->g_203.y", print_hash_value);
    transparent_crc(p_803->g_203.z, "p_803->g_203.z", print_hash_value);
    transparent_crc(p_803->g_203.w, "p_803->g_203.w", print_hash_value);
    transparent_crc(p_803->g_204.s0, "p_803->g_204.s0", print_hash_value);
    transparent_crc(p_803->g_204.s1, "p_803->g_204.s1", print_hash_value);
    transparent_crc(p_803->g_204.s2, "p_803->g_204.s2", print_hash_value);
    transparent_crc(p_803->g_204.s3, "p_803->g_204.s3", print_hash_value);
    transparent_crc(p_803->g_204.s4, "p_803->g_204.s4", print_hash_value);
    transparent_crc(p_803->g_204.s5, "p_803->g_204.s5", print_hash_value);
    transparent_crc(p_803->g_204.s6, "p_803->g_204.s6", print_hash_value);
    transparent_crc(p_803->g_204.s7, "p_803->g_204.s7", print_hash_value);
    transparent_crc(p_803->g_221, "p_803->g_221", print_hash_value);
    transparent_crc(p_803->g_262.x, "p_803->g_262.x", print_hash_value);
    transparent_crc(p_803->g_262.y, "p_803->g_262.y", print_hash_value);
    transparent_crc(p_803->g_287.x, "p_803->g_287.x", print_hash_value);
    transparent_crc(p_803->g_287.y, "p_803->g_287.y", print_hash_value);
    transparent_crc(p_803->g_353.s0, "p_803->g_353.s0", print_hash_value);
    transparent_crc(p_803->g_353.s1, "p_803->g_353.s1", print_hash_value);
    transparent_crc(p_803->g_353.s2, "p_803->g_353.s2", print_hash_value);
    transparent_crc(p_803->g_353.s3, "p_803->g_353.s3", print_hash_value);
    transparent_crc(p_803->g_353.s4, "p_803->g_353.s4", print_hash_value);
    transparent_crc(p_803->g_353.s5, "p_803->g_353.s5", print_hash_value);
    transparent_crc(p_803->g_353.s6, "p_803->g_353.s6", print_hash_value);
    transparent_crc(p_803->g_353.s7, "p_803->g_353.s7", print_hash_value);
    transparent_crc(p_803->g_353.s8, "p_803->g_353.s8", print_hash_value);
    transparent_crc(p_803->g_353.s9, "p_803->g_353.s9", print_hash_value);
    transparent_crc(p_803->g_353.sa, "p_803->g_353.sa", print_hash_value);
    transparent_crc(p_803->g_353.sb, "p_803->g_353.sb", print_hash_value);
    transparent_crc(p_803->g_353.sc, "p_803->g_353.sc", print_hash_value);
    transparent_crc(p_803->g_353.sd, "p_803->g_353.sd", print_hash_value);
    transparent_crc(p_803->g_353.se, "p_803->g_353.se", print_hash_value);
    transparent_crc(p_803->g_353.sf, "p_803->g_353.sf", print_hash_value);
    transparent_crc(p_803->g_398.x, "p_803->g_398.x", print_hash_value);
    transparent_crc(p_803->g_398.y, "p_803->g_398.y", print_hash_value);
    transparent_crc(p_803->g_495, "p_803->g_495", print_hash_value);
    transparent_crc(p_803->g_499, "p_803->g_499", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_803->g_560[i][j], "p_803->g_560[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_803->g_566.s0, "p_803->g_566.s0", print_hash_value);
    transparent_crc(p_803->g_566.s1, "p_803->g_566.s1", print_hash_value);
    transparent_crc(p_803->g_566.s2, "p_803->g_566.s2", print_hash_value);
    transparent_crc(p_803->g_566.s3, "p_803->g_566.s3", print_hash_value);
    transparent_crc(p_803->g_566.s4, "p_803->g_566.s4", print_hash_value);
    transparent_crc(p_803->g_566.s5, "p_803->g_566.s5", print_hash_value);
    transparent_crc(p_803->g_566.s6, "p_803->g_566.s6", print_hash_value);
    transparent_crc(p_803->g_566.s7, "p_803->g_566.s7", print_hash_value);
    transparent_crc(p_803->g_566.s8, "p_803->g_566.s8", print_hash_value);
    transparent_crc(p_803->g_566.s9, "p_803->g_566.s9", print_hash_value);
    transparent_crc(p_803->g_566.sa, "p_803->g_566.sa", print_hash_value);
    transparent_crc(p_803->g_566.sb, "p_803->g_566.sb", print_hash_value);
    transparent_crc(p_803->g_566.sc, "p_803->g_566.sc", print_hash_value);
    transparent_crc(p_803->g_566.sd, "p_803->g_566.sd", print_hash_value);
    transparent_crc(p_803->g_566.se, "p_803->g_566.se", print_hash_value);
    transparent_crc(p_803->g_566.sf, "p_803->g_566.sf", print_hash_value);
    transparent_crc(p_803->g_587.f0, "p_803->g_587.f0", print_hash_value);
    transparent_crc(p_803->g_587.f1, "p_803->g_587.f1", print_hash_value);
    transparent_crc(p_803->g_587.f2, "p_803->g_587.f2", print_hash_value);
    transparent_crc(p_803->g_654.s0, "p_803->g_654.s0", print_hash_value);
    transparent_crc(p_803->g_654.s1, "p_803->g_654.s1", print_hash_value);
    transparent_crc(p_803->g_654.s2, "p_803->g_654.s2", print_hash_value);
    transparent_crc(p_803->g_654.s3, "p_803->g_654.s3", print_hash_value);
    transparent_crc(p_803->g_654.s4, "p_803->g_654.s4", print_hash_value);
    transparent_crc(p_803->g_654.s5, "p_803->g_654.s5", print_hash_value);
    transparent_crc(p_803->g_654.s6, "p_803->g_654.s6", print_hash_value);
    transparent_crc(p_803->g_654.s7, "p_803->g_654.s7", print_hash_value);
    transparent_crc(p_803->g_655.s0, "p_803->g_655.s0", print_hash_value);
    transparent_crc(p_803->g_655.s1, "p_803->g_655.s1", print_hash_value);
    transparent_crc(p_803->g_655.s2, "p_803->g_655.s2", print_hash_value);
    transparent_crc(p_803->g_655.s3, "p_803->g_655.s3", print_hash_value);
    transparent_crc(p_803->g_655.s4, "p_803->g_655.s4", print_hash_value);
    transparent_crc(p_803->g_655.s5, "p_803->g_655.s5", print_hash_value);
    transparent_crc(p_803->g_655.s6, "p_803->g_655.s6", print_hash_value);
    transparent_crc(p_803->g_655.s7, "p_803->g_655.s7", print_hash_value);
    transparent_crc(p_803->g_655.s8, "p_803->g_655.s8", print_hash_value);
    transparent_crc(p_803->g_655.s9, "p_803->g_655.s9", print_hash_value);
    transparent_crc(p_803->g_655.sa, "p_803->g_655.sa", print_hash_value);
    transparent_crc(p_803->g_655.sb, "p_803->g_655.sb", print_hash_value);
    transparent_crc(p_803->g_655.sc, "p_803->g_655.sc", print_hash_value);
    transparent_crc(p_803->g_655.sd, "p_803->g_655.sd", print_hash_value);
    transparent_crc(p_803->g_655.se, "p_803->g_655.se", print_hash_value);
    transparent_crc(p_803->g_655.sf, "p_803->g_655.sf", print_hash_value);
    transparent_crc(p_803->g_710.s0, "p_803->g_710.s0", print_hash_value);
    transparent_crc(p_803->g_710.s1, "p_803->g_710.s1", print_hash_value);
    transparent_crc(p_803->g_710.s2, "p_803->g_710.s2", print_hash_value);
    transparent_crc(p_803->g_710.s3, "p_803->g_710.s3", print_hash_value);
    transparent_crc(p_803->g_710.s4, "p_803->g_710.s4", print_hash_value);
    transparent_crc(p_803->g_710.s5, "p_803->g_710.s5", print_hash_value);
    transparent_crc(p_803->g_710.s6, "p_803->g_710.s6", print_hash_value);
    transparent_crc(p_803->g_710.s7, "p_803->g_710.s7", print_hash_value);
    transparent_crc(p_803->g_710.s8, "p_803->g_710.s8", print_hash_value);
    transparent_crc(p_803->g_710.s9, "p_803->g_710.s9", print_hash_value);
    transparent_crc(p_803->g_710.sa, "p_803->g_710.sa", print_hash_value);
    transparent_crc(p_803->g_710.sb, "p_803->g_710.sb", print_hash_value);
    transparent_crc(p_803->g_710.sc, "p_803->g_710.sc", print_hash_value);
    transparent_crc(p_803->g_710.sd, "p_803->g_710.sd", print_hash_value);
    transparent_crc(p_803->g_710.se, "p_803->g_710.se", print_hash_value);
    transparent_crc(p_803->g_710.sf, "p_803->g_710.sf", print_hash_value);
    transparent_crc(p_803->g_721.s0, "p_803->g_721.s0", print_hash_value);
    transparent_crc(p_803->g_721.s1, "p_803->g_721.s1", print_hash_value);
    transparent_crc(p_803->g_721.s2, "p_803->g_721.s2", print_hash_value);
    transparent_crc(p_803->g_721.s3, "p_803->g_721.s3", print_hash_value);
    transparent_crc(p_803->g_721.s4, "p_803->g_721.s4", print_hash_value);
    transparent_crc(p_803->g_721.s5, "p_803->g_721.s5", print_hash_value);
    transparent_crc(p_803->g_721.s6, "p_803->g_721.s6", print_hash_value);
    transparent_crc(p_803->g_721.s7, "p_803->g_721.s7", print_hash_value);
    transparent_crc(p_803->g_745.s0, "p_803->g_745.s0", print_hash_value);
    transparent_crc(p_803->g_745.s1, "p_803->g_745.s1", print_hash_value);
    transparent_crc(p_803->g_745.s2, "p_803->g_745.s2", print_hash_value);
    transparent_crc(p_803->g_745.s3, "p_803->g_745.s3", print_hash_value);
    transparent_crc(p_803->g_745.s4, "p_803->g_745.s4", print_hash_value);
    transparent_crc(p_803->g_745.s5, "p_803->g_745.s5", print_hash_value);
    transparent_crc(p_803->g_745.s6, "p_803->g_745.s6", print_hash_value);
    transparent_crc(p_803->g_745.s7, "p_803->g_745.s7", print_hash_value);
    transparent_crc(p_803->g_745.s8, "p_803->g_745.s8", print_hash_value);
    transparent_crc(p_803->g_745.s9, "p_803->g_745.s9", print_hash_value);
    transparent_crc(p_803->g_745.sa, "p_803->g_745.sa", print_hash_value);
    transparent_crc(p_803->g_745.sb, "p_803->g_745.sb", print_hash_value);
    transparent_crc(p_803->g_745.sc, "p_803->g_745.sc", print_hash_value);
    transparent_crc(p_803->g_745.sd, "p_803->g_745.sd", print_hash_value);
    transparent_crc(p_803->g_745.se, "p_803->g_745.se", print_hash_value);
    transparent_crc(p_803->g_745.sf, "p_803->g_745.sf", print_hash_value);
    transparent_crc(p_803->g_772, "p_803->g_772", print_hash_value);
    transparent_crc(p_803->g_783.s0, "p_803->g_783.s0", print_hash_value);
    transparent_crc(p_803->g_783.s1, "p_803->g_783.s1", print_hash_value);
    transparent_crc(p_803->g_783.s2, "p_803->g_783.s2", print_hash_value);
    transparent_crc(p_803->g_783.s3, "p_803->g_783.s3", print_hash_value);
    transparent_crc(p_803->g_783.s4, "p_803->g_783.s4", print_hash_value);
    transparent_crc(p_803->g_783.s5, "p_803->g_783.s5", print_hash_value);
    transparent_crc(p_803->g_783.s6, "p_803->g_783.s6", print_hash_value);
    transparent_crc(p_803->g_783.s7, "p_803->g_783.s7", print_hash_value);
    transparent_crc(p_803->v_collective, "p_803->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 29; i++)
            transparent_crc(p_803->g_special_values[i + 29 * get_linear_group_id()], "p_803->g_special_values[i + 29 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 29; i++)
            transparent_crc(p_803->l_special_values[i], "p_803->l_special_values[i]", print_hash_value);
    transparent_crc(p_803->l_comm_values[get_linear_local_id()], "p_803->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_803->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_803->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
