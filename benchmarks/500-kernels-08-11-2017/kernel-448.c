// --atomics 85 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 89,70,1 -l 1,10,1
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

__constant uint32_t permutations[10][10] = {
{1,4,8,0,9,3,2,6,7,5}, // permutation 0
{1,5,2,3,8,9,0,6,7,4}, // permutation 1
{1,8,2,4,9,0,6,5,3,7}, // permutation 2
{1,7,5,6,4,2,0,8,9,3}, // permutation 3
{6,5,1,3,4,0,8,7,9,2}, // permutation 4
{7,3,5,2,8,0,9,4,1,6}, // permutation 5
{4,9,3,8,7,1,2,5,6,0}, // permutation 6
{1,2,7,6,5,9,4,0,8,3}, // permutation 7
{1,4,0,6,9,3,7,5,8,2}, // permutation 8
{9,2,0,3,1,8,4,5,6,7} // permutation 9
};

// Seed: 3206432657

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_192[4];
    int16_t g_236;
    uint8_t g_247;
    uint8_t g_252;
    uint32_t g_255;
    uint32_t g_258;
    int32_t g_262;
    int32_t *g_266[9][7][4];
    int32_t **g_265;
    int32_t g_270;
    int8_t g_317[2][9];
    volatile int8_t g_339;
    int32_t * volatile g_384[10][9][2];
    int32_t *g_385;
    int32_t * volatile *g_383[10][9];
    volatile int64_t g_392;
    uint64_t g_514;
    VECTOR(int64_t, 4) g_524;
    int32_t g_534;
    volatile VECTOR(int16_t, 16) g_633;
    int32_t g_642;
    uint32_t g_644;
    int8_t *g_667[1][1];
    int8_t * volatile *g_666;
    VECTOR(uint16_t, 4) g_675;
    uint64_t g_683;
    volatile VECTOR(int32_t, 8) g_697;
    volatile VECTOR(int32_t, 16) g_698;
    volatile VECTOR(int32_t, 16) g_700;
    uint32_t *g_725;
    uint32_t **g_724;
    VECTOR(int8_t, 8) g_731;
    uint64_t g_733;
    uint32_t g_734[7][5];
    int16_t *g_745;
    uint8_t * volatile g_753[3];
    uint8_t * volatile * volatile g_752;
    VECTOR(int64_t, 8) g_757;
    VECTOR(uint16_t, 4) g_758;
    VECTOR(uint16_t, 16) g_759;
    VECTOR(uint16_t, 4) g_760;
    VECTOR(int8_t, 8) g_767;
    int32_t ** volatile g_776;
    int32_t ** volatile g_779;
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
int32_t  func_1(struct S0 * p_780);
int32_t * func_181(uint16_t  p_182, uint8_t  p_183, struct S0 * p_780);
int32_t * func_186(uint32_t  p_187, uint16_t  p_188, int32_t * p_189, struct S0 * p_780);
uint32_t  func_195(int64_t  p_196, int32_t * p_197, int64_t  p_198, uint16_t  p_199, int32_t ** p_200, struct S0 * p_780);
int64_t  func_201(uint8_t  p_202, int8_t  p_203, int32_t ** p_204, struct S0 * p_780);
uint16_t  func_209(int32_t  p_210, struct S0 * p_780);
int32_t ** func_211(int32_t  p_212, int32_t ** p_213, uint32_t  p_214, int32_t  p_215, struct S0 * p_780);
int32_t ** func_216(uint8_t  p_217, int64_t  p_218, int64_t  p_219, int32_t ** p_220, int32_t  p_221, struct S0 * p_780);
uint8_t  func_229(int32_t ** p_230, int64_t  p_231, uint16_t  p_232, uint8_t  p_233, uint64_t  p_234, struct S0 * p_780);
int32_t ** func_237(uint32_t  p_238, int32_t * p_239, struct S0 * p_780);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_780->g_192 p_780->g_comm_values p_780->g_236 p_780->g_247 p_780->g_255 p_780->g_258 p_780->g_265 p_780->l_comm_values p_780->g_270 p_780->g_339 p_780->g_383 p_780->g_317 p_780->g_385 p_780->g_524 p_780->g_644 p_780->g_666 p_780->g_667 p_780->g_642 p_780->g_731 p_780->g_262 p_780->g_724 p_780->g_534 p_780->g_752 p_780->g_745 p_780->g_776 p_780->g_779 p_780->g_757
 * writes: p_780->g_236 p_780->g_247 p_780->g_252 p_780->g_255 p_780->g_258 p_780->g_262 p_780->g_270 p_780->g_266 p_780->g_317 p_780->g_265 p_780->g_385 p_780->g_534 p_780->g_192 p_780->l_comm_values p_780->g_644 p_780->g_514 p_780->g_745 p_780->g_724 p_780->g_733 p_780->g_734
 */
int32_t  func_1(struct S0 * p_780)
{ /* block id: 4 */
    int8_t l_184 = 0x21L;
    uint32_t l_185 = 0x573045CAL;
    int32_t l_777 = (-1L);
    int32_t **l_778 = &p_780->g_266[8][2][3];
    if ((atomic_inc(&p_780->g_atomic_input[85 * get_linear_group_id() + 34]) == 5))
    { /* block id: 6 */
        int32_t l_2[7] = {(-7L),0x10197F0AL,(-7L),(-7L),0x10197F0AL,(-7L),(-7L)};
        int32_t *l_177 = &l_2[2];
        int32_t *l_178 = (void*)0;
        int32_t *l_179 = &l_2[4];
        int32_t *l_180 = &l_2[1];
        int i;
        for (l_2[4] = 0; (l_2[4] >= (-22)); --l_2[4])
        { /* block id: 9 */
            uint32_t l_5 = 4294967295UL;
            int32_t l_6 = 0x0EE41B66L;
            uint32_t l_7 = 7UL;
            int8_t l_35 = (-1L);
            l_6 ^= l_5;
            if (l_7)
            { /* block id: 11 */
                VECTOR(int64_t, 16) l_8 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int64_t, 2))((-1L), 0L), (VECTOR(int64_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                uint64_t l_9 = 0UL;
                int32_t l_10 = 1L;
                VECTOR(int32_t, 4) l_11 = (VECTOR(int32_t, 4))(0x63E45BBBL, (VECTOR(int32_t, 2))(0x63E45BBBL, 0x3F889E02L), 0x3F889E02L);
                VECTOR(int32_t, 8) l_12 = (VECTOR(int32_t, 8))(0x6F703C57L, (VECTOR(int32_t, 4))(0x6F703C57L, (VECTOR(int32_t, 2))(0x6F703C57L, (-1L)), (-1L)), (-1L), 0x6F703C57L, (-1L));
                VECTOR(int32_t, 4) l_13 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x480AE7B1L), 0x480AE7B1L);
                VECTOR(int32_t, 4) l_14 = (VECTOR(int32_t, 4))(0x68729207L, (VECTOR(int32_t, 2))(0x68729207L, 1L), 1L);
                int8_t l_15 = 0L;
                VECTOR(int32_t, 4) l_16 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x7BF5CBF7L), 0x7BF5CBF7L);
                uint16_t l_17 = 1UL;
                uint32_t l_18 = 0x6E3268DDL;
                uint32_t l_19[3];
                VECTOR(int32_t, 8) l_20 = (VECTOR(int32_t, 8))(0x59780293L, (VECTOR(int32_t, 4))(0x59780293L, (VECTOR(int32_t, 2))(0x59780293L, (-6L)), (-6L)), (-6L), 0x59780293L, (-6L));
                uint8_t l_21 = 6UL;
                int32_t l_22 = 0x73ADCFECL;
                uint64_t l_23[1];
                uint8_t l_24 = 9UL;
                uint32_t l_25 = 4294967293UL;
                int8_t l_26 = 1L;
                int8_t l_27 = 0x26L;
                VECTOR(int32_t, 4) l_28 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L);
                int16_t l_29 = 0x02D4L;
                uint16_t l_30 = 6UL;
                uint8_t l_31 = 8UL;
                int16_t l_32 = 0x0B4DL;
                int i;
                for (i = 0; i < 3; i++)
                    l_19[i] = 4294967295UL;
                for (i = 0; i < 1; i++)
                    l_23[i] = 18446744073709551612UL;
                l_8.s5 = (-1L);
                l_30 = (l_9 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x274952F3L, ((VECTOR(int32_t, 8))((-5L), l_10, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_11.zzywxxzzxzyyzxxy)).hi, ((VECTOR(int32_t, 2))(l_12.s12)).xyyyyyxy, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(l_13.wx)).xxyyyyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x0886A6C6L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_14.yzywzwww)))).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(0L, 0x0E834AB4L, l_15, ((VECTOR(int32_t, 2))(l_16.yw)), (l_18 ^= l_17), 0x430BCA0BL, (-7L))).s33, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-1L), 0x0B25631CL, l_19[0], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_20.s3657)), (l_23[0] = (l_22 |= (l_21 , ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))((-2L), (-1L), 1L, ((VECTOR(int32_t, 4))(0x6042C8CDL)), ((VECTOR(int32_t, 8))(0L)), 1L)).sc7, ((VECTOR(int32_t, 2))(2L))))).xyyx, ((VECTOR(int32_t, 4))(0x0AD385E3L))))).y))), l_24, 0x6DAD3F04L, ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 4))(0x458D81C9L)), ((VECTOR(int32_t, 2))(0x0E88FEFDL)), (-5L))).s1a, ((VECTOR(int32_t, 2))((-8L)))))), 0x5D2DC097L)).lo)), 1L, 0x7E298319L, (-7L), ((VECTOR(int32_t, 2))(0x23FA0B5BL)), l_25, 0L, ((VECTOR(int32_t, 2))(0x0F83F3A8L)), 0x5584D75FL, 0x3D0C964BL)).even)).s25))).xxyxxyyyxyyxxyyy)).even)).even))), ((VECTOR(int32_t, 2))(0x47819AFCL)), 0x777A3124L, 6L, 1L, 0x0FF5F6F5L, l_26, 3L, l_27, (-1L), (-1L))).even)).s70)), 0x5C493A78L, 1L)).yzwwwyyy)))))).s6, 0x78960BD9L, 0x0F82EDDAL, 7L, (-1L), 0x2BBF3AF7L)), (-1L), (-5L), 0x5A0DE902L, 1L, l_28.x, 0L, (-1L))).s6b)), (-4L), l_29, 4L, 0L, 0x0A907459L, 0x006EB766L)).s2);
                l_32 = ((l_31 &= 1L) , (-1L));
            }
            else
            { /* block id: 19 */
                int32_t l_34 = 0x0C77B72BL;
                int32_t *l_33 = &l_34;
                l_33 = (void*)0;
            }
            if (l_35)
            { /* block id: 22 */
                int32_t **l_36 = (void*)0;
                int32_t *l_38 = (void*)0;
                int32_t **l_37 = &l_38;
                uint16_t l_39 = 1UL;
                int16_t l_40[5][8][6] = {{{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L}},{{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L}},{{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L}},{{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L}},{{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L},{0x5243L,0x17E7L,(-1L),9L,0x0C11L,0x6988L}}};
                int i, j, k;
                l_37 = l_36;
                l_40[4][6][0] = l_39;
            }
            else
            { /* block id: 25 */
                VECTOR(int32_t, 16) l_41 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                uint32_t l_89 = 0x120889FCL;
                int i;
                if (l_41.s2)
                { /* block id: 26 */
                    int32_t l_42 = 0x19E491D0L;
                    VECTOR(int64_t, 4) l_48 = (VECTOR(int64_t, 4))(0x20C6649A34647568L, (VECTOR(int64_t, 2))(0x20C6649A34647568L, (-8L)), (-8L));
                    uint64_t l_49[10] = {0xC76AAD2A6E1962FFL,0xC73EBF557C78B2DFL,0x2AE80F8EF8B48F96L,0xC73EBF557C78B2DFL,0xC76AAD2A6E1962FFL,0xC76AAD2A6E1962FFL,0xC73EBF557C78B2DFL,0x2AE80F8EF8B48F96L,0xC73EBF557C78B2DFL,0xC76AAD2A6E1962FFL};
                    VECTOR(int32_t, 4) l_50 = (VECTOR(int32_t, 4))(0x3F5C28DFL, (VECTOR(int32_t, 2))(0x3F5C28DFL, 0x73BD0260L), 0x73BD0260L);
                    VECTOR(int32_t, 16) l_51 = (VECTOR(int32_t, 16))(0x5E97E3D8L, (VECTOR(int32_t, 4))(0x5E97E3D8L, (VECTOR(int32_t, 2))(0x5E97E3D8L, 0x2A5F9F99L), 0x2A5F9F99L), 0x2A5F9F99L, 0x5E97E3D8L, 0x2A5F9F99L, (VECTOR(int32_t, 2))(0x5E97E3D8L, 0x2A5F9F99L), (VECTOR(int32_t, 2))(0x5E97E3D8L, 0x2A5F9F99L), 0x5E97E3D8L, 0x2A5F9F99L, 0x5E97E3D8L, 0x2A5F9F99L);
                    VECTOR(int32_t, 16) l_52 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    int32_t l_53 = 0x6984B8F1L;
                    VECTOR(int64_t, 16) l_54 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
                    uint32_t l_55 = 4294967294UL;
                    uint16_t l_56 = 65529UL;
                    int32_t l_57 = 5L;
                    uint32_t l_58[6] = {0x43457D5AL,0x653C0322L,0x43457D5AL,0x43457D5AL,0x653C0322L,0x43457D5AL};
                    int32_t l_59 = 0x59EA3BD3L;
                    uint16_t l_60 = 0x304CL;
                    int64_t l_61 = 1L;
                    uint64_t l_62 = 7UL;
                    uint16_t l_63 = 0x3C84L;
                    uint32_t l_64 = 9UL;
                    uint32_t l_65[9][6][4] = {{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}},{{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL},{0x68E203B9L,0x57AA8C2CL,0xC0668297L,4294967293UL}}};
                    int32_t *l_66 = (void*)0;
                    int32_t *l_67 = (void*)0;
                    int i, j, k;
                    for (l_42 = (-7); (l_42 != 9); l_42++)
                    { /* block id: 29 */
                        int32_t l_46 = (-10L);
                        int32_t *l_45 = &l_46;
                        int32_t *l_47 = (void*)0;
                        l_47 = l_45;
                    }
                    l_65[6][0][3] = (l_41.s5 ^= (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_48.wzxwwwxzzywyyzyy)).se5)), ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))((l_49[0] = 0x7039836713F97C6DL), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((l_53 = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_50.xxxwzxxxzzxwwwyz)), ((VECTOR(int32_t, 2))(l_51.s06)).xyxyxyxxxxyyxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_52.sda98)).wzzyxywzzyxxyyyz)).s59fc)).wywxyxzxzzzxxxzy))).se) , ((VECTOR(int64_t, 8))(l_54.s750e480c)).s5), ((VECTOR(int64_t, 4))(0L, 6L, 1L, 0x193A17D067C9850CL)), 1L, 0L, (-1L))).hi)), ((VECTOR(int64_t, 4))(0x3BD426427E379CB2L, 0x1CE7A6402E1C81CAL, 0x2389647ED555874CL, 4L)), 0L, (l_48.y ^= (l_56 = l_55)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))((-1L), (-1L)))))).xyyy)), 7L)).sacf3, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((l_57 , l_58[2]), (l_59 , l_60), 0x34D02DCD109C4FFDL, (((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_61, ((VECTOR(int64_t, 2))(0x5000C4EEBD0F6480L)), (-1L), (-4L), ((VECTOR(int64_t, 2))(0x3E10E113701F4E42L)), (-1L))).s4273420554240361)))).s5e56)), ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))(0x1CBC00A24D0A3929L))))).x , l_62), 0L, 1L, l_63, ((VECTOR(int64_t, 8))(0x1DBD7B545DD45CAFL)), 1L)).s6a)).yyyy, ((VECTOR(int64_t, 4))(0x35FCD5A05CCE5AB6L))))), ((VECTOR(int64_t, 4))(0x2EAC40E40D8D5C70L))))), 0x1DEE43BDDC6D73AEL, 0x2A7D5B95D3AA6B80L)).s1 , l_64));
                    l_67 = l_66;
                    l_41.s2 = ((VECTOR(int32_t, 2))(0x7720CA04L, (-1L))).odd;
                }
                else
                { /* block id: 40 */
                    uint16_t l_68 = 0x7C8BL;
                    int32_t *l_88 = (void*)0;
                    if (l_68)
                    { /* block id: 41 */
                        uint8_t l_69 = 247UL;
                        int32_t l_71 = 0x0A40B4FCL;
                        int32_t *l_70 = &l_71;
                        int32_t *l_72 = &l_71;
                        int32_t *l_73 = (void*)0;
                        int16_t l_74 = 0x527BL;
                        int8_t l_75 = 0x18L;
                        int8_t l_76 = 0x23L;
                        uint32_t l_77 = 0UL;
                        l_41.s6 ^= l_69;
                        l_72 = (l_70 = (void*)0);
                        l_70 = l_73;
                        l_77++;
                    }
                    else
                    { /* block id: 47 */
                        VECTOR(int16_t, 16) l_80 = (VECTOR(int16_t, 16))(0x2AC6L, (VECTOR(int16_t, 4))(0x2AC6L, (VECTOR(int16_t, 2))(0x2AC6L, 0x125FL), 0x125FL), 0x125FL, 0x2AC6L, 0x125FL, (VECTOR(int16_t, 2))(0x2AC6L, 0x125FL), (VECTOR(int16_t, 2))(0x2AC6L, 0x125FL), 0x2AC6L, 0x125FL, 0x2AC6L, 0x125FL);
                        uint64_t l_81 = 0UL;
                        int64_t l_82 = 0x25565FB1AFB4286FL;
                        uint32_t l_83 = 0xCAC37E68L;
                        int32_t l_87 = 0x4D5FB044L;
                        int32_t *l_86 = &l_87;
                        int i;
                        l_41.sa |= 0L;
                        l_41.s7 ^= (((VECTOR(int16_t, 8))(l_80.s7aeea3ce)).s1 , l_81);
                        l_83++;
                        l_86 = (void*)0;
                    }
                    l_88 = (void*)0;
                }
                if ((l_89 = 0x15DCD2A4L))
                { /* block id: 56 */
                    int8_t l_92 = 4L;
                    uint16_t l_93 = 0xF148L;
                    VECTOR(int64_t, 8) l_94 = (VECTOR(int64_t, 8))(0x626814382FC2C680L, (VECTOR(int64_t, 4))(0x626814382FC2C680L, (VECTOR(int64_t, 2))(0x626814382FC2C680L, 0x32BBBA2D269C2A35L), 0x32BBBA2D269C2A35L), 0x32BBBA2D269C2A35L, 0x626814382FC2C680L, 0x32BBBA2D269C2A35L);
                    int32_t l_95[6] = {0L,0x60E78EEBL,0L,0L,0x60E78EEBL,0L};
                    int i;
                    l_93 = ((l_5++) , l_92);
                    if ((l_94.s7 , l_95[3]))
                    { /* block id: 59 */
                        int8_t l_96 = (-9L);
                        l_41.se |= l_96;
                    }
                    else
                    { /* block id: 61 */
                        uint16_t l_97 = 0xCBC5L;
                        uint8_t l_98 = 1UL;
                        l_41.sa = (l_98 = l_97);
                    }
                    for (l_92 = 0; (l_92 > 10); l_92++)
                    { /* block id: 67 */
                        VECTOR(int32_t, 8) l_101 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                        VECTOR(int32_t, 8) l_102 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        VECTOR(int32_t, 16) l_103 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-9L)), (-9L)), (-9L), (-4L), (-9L), (VECTOR(int32_t, 2))((-4L), (-9L)), (VECTOR(int32_t, 2))((-4L), (-9L)), (-4L), (-9L), (-4L), (-9L));
                        int32_t *l_104[3];
                        int32_t *l_105 = (void*)0;
                        int32_t *l_106 = (void*)0;
                        int32_t *l_107 = (void*)0;
                        uint32_t l_108 = 0x79F73879L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_104[i] = (void*)0;
                        l_41.s9 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_101.s3763)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_102.s6741723037765360)).even)).even))).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_103.se1)))).xyxx)).even))).xxyyxyxx)).s1;
                        l_105 = l_104[0];
                        l_107 = l_106;
                        l_108--;
                    }
                }
                else
                { /* block id: 73 */
                    int16_t l_111[5][8][1] = {{{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL}},{{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL}},{{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL}},{{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL}},{{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL},{0x68BCL}}};
                    int64_t l_112 = 0x6AAE59B509E70583L;
                    int16_t l_113 = (-1L);
                    VECTOR(uint32_t, 8) l_114 = (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0xCF226FB7L), 0xCF226FB7L), 0xCF226FB7L, 4294967287UL, 0xCF226FB7L);
                    int32_t l_115 = 0x623668E1L;
                    int i, j, k;
                    l_114.s2 = (l_113 |= (l_111[4][1][0] , ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x49L, (-10L))), 0x17L, (-1L))).wzwxxxyw)).s3 , l_112) , (l_41.s2 ^= 0x63AE82E7L))));
                    if (l_115)
                    { /* block id: 77 */
                        int64_t l_116 = 1L;
                        uint8_t l_117 = 251UL;
                        uint16_t l_118[10] = {65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL,65528UL};
                        int i;
                        l_41.s9 |= ((l_118[9] ^= (l_117 = l_116)) , (-8L));
                    }
                    else
                    { /* block id: 81 */
                        int32_t *l_119 = (void*)0;
                        int32_t l_121 = 0x1456BA32L;
                        int32_t *l_120 = &l_121;
                        uint32_t l_122 = 1UL;
                        uint16_t l_123 = 65535UL;
                        l_120 = l_119;
                        l_123 = (l_115 &= (l_41.s1 = l_122));
                    }
                }
            }
        }
        for (l_2[5] = 0; (l_2[5] == 26); l_2[5]++)
        { /* block id: 92 */
            uint64_t l_126 = 5UL;
            uint64_t l_127 = 0xB921B1E45251D080L;
            VECTOR(uint32_t, 2) l_128 = (VECTOR(uint32_t, 2))(9UL, 0x668E61B9L);
            uint16_t l_129 = 65532UL;
            int16_t l_130[6][3][4] = {{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}},{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}},{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}},{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}},{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}},{{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)},{0L,(-8L),0x6E85L,(-8L)}}};
            int32_t *l_131 = (void*)0;
            int32_t l_133 = (-1L);
            int32_t *l_132 = &l_133;
            int64_t l_134 = 3L;
            int i, j, k;
            l_129 = ((VECTOR(int32_t, 8))(0x41F5A472L, ((VECTOR(int32_t, 2))((-4L), (-7L))), 0x23D644B8L, (l_126 , l_127), l_128.x, 0x6CF05B78L, 0x5D73F1AFL)).s4;
            l_131 = (l_130[2][0][0] , (l_132 = l_131));
            if (l_134)
            { /* block id: 96 */
                uint16_t l_135 = 65535UL;
                int32_t *l_136 = (void*)0;
                uint8_t l_137 = 250UL;
                VECTOR(uint64_t, 16) l_138 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                uint32_t l_139[5];
                int16_t l_140 = 7L;
                int64_t l_141 = 0x2EF202E73300B031L;
                int32_t l_143 = 0x7505CF3AL;
                int32_t *l_142 = &l_143;
                int32_t l_144 = 1L;
                uint8_t l_145[4] = {0x69L,0x69L,0x69L,0x69L};
                int i;
                for (i = 0; i < 5; i++)
                    l_139[i] = 0x754541C6L;
                l_132 = (((VECTOR(int64_t, 2))((-1L), 0x2310836F5F2D47BFL)).even , (l_135 , (l_131 = l_136)));
                l_131 = ((l_137 , FAKE_DIVERGE(p_780->group_1_offset, get_group_id(1), 10)) , ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_138.sa0)), l_139[1], l_140, 0x2BE0C65E12B1052BL, l_141, 1UL, 0UL)).s2 , GROUP_DIVERGE(1, 1)) , l_142));
                l_145[3]--;
            }
            else
            { /* block id: 101 */
                VECTOR(int32_t, 2) l_148 = (VECTOR(int32_t, 2))(1L, 0x4F7F432AL);
                VECTOR(int16_t, 4) l_149 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x1948L), 0x1948L);
                VECTOR(uint32_t, 16) l_150 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x8C2A8405L), 0x8C2A8405L), 0x8C2A8405L, 4294967290UL, 0x8C2A8405L, (VECTOR(uint32_t, 2))(4294967290UL, 0x8C2A8405L), (VECTOR(uint32_t, 2))(4294967290UL, 0x8C2A8405L), 4294967290UL, 0x8C2A8405L, 4294967290UL, 0x8C2A8405L);
                uint16_t l_151 = 0x66EDL;
                VECTOR(uint8_t, 16) l_152 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x88L), 0x88L), 0x88L, 248UL, 0x88L, (VECTOR(uint8_t, 2))(248UL, 0x88L), (VECTOR(uint8_t, 2))(248UL, 0x88L), 248UL, 0x88L, 248UL, 0x88L);
                int8_t l_153[6][10] = {{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL},{0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL}};
                VECTOR(int8_t, 2) l_154 = (VECTOR(int8_t, 2))(1L, 3L);
                VECTOR(int16_t, 8) l_155 = (VECTOR(int16_t, 8))(0x189DL, (VECTOR(int16_t, 4))(0x189DL, (VECTOR(int16_t, 2))(0x189DL, 0x6EB1L), 0x6EB1L), 0x6EB1L, 0x189DL, 0x6EB1L);
                int32_t l_156[2][5][1] = {{{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L}}};
                int16_t l_157 = 0x6F25L;
                int32_t l_158 = 2L;
                int32_t l_159 = 0x37BA4540L;
                int i, j, k;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, (-3L), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_148.yyxxxxyxyxxyxyyy)).s8e, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-1L), 0L, (-1L), 2L)).lo))))).even, 8L, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(l_149.xyzxwzyz)).lo, (int16_t)l_150.s1))), ((VECTOR(int16_t, 4))(0x4E17L, (-7L), 0x2A48L, 0x4B9CL))))).yzxzzwzy)).s5 , l_151) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_148.y ^= 0x1F5B1E06L), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(0x1CFE6626L, 0x144D6AABL, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_152.se, 0x0EL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(6L, ((VECTOR(int8_t, 2))(1L, 0x3AL)), (-3L))).even)), (l_153[5][0] |= (-10L)), ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x22L, (-3L))), 0x4CL, 0x0AL)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_154.yx)).xxxyyyxxxyxyyxyx)).sb204))).yxwyxzzx)).s43, ((VECTOR(int8_t, 2))(0x72L, (-2L)))))), 3L)).even, ((VECTOR(uint8_t, 2))(4UL, 9UL)).yyxx))))).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_155.s73106137)))).s12))), 0x4F45L, 0L)).xzzwyxwyzwwxzywy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x2B29L, FAKE_DIVERGE(p_780->global_1_offset, get_global_id(1), 10), 0xA73AL, 8UL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(l_156[0][2][0], 1UL, 249UL, 0xE9L)).lo, ((VECTOR(uint8_t, 2))(1UL))))))).yyyyxxyy)), 1UL, ((VECTOR(uint16_t, 2))(0x1413L)), 65535UL)).s75)).yyyxxxxyyxxxyxxx))).sc84f, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))(0L))))), l_157, ((VECTOR(int32_t, 4))((-4L))), 1L, ((VECTOR(int32_t, 2))(1L)), (-1L), 0x5CD4D274L)).s6254, ((VECTOR(int32_t, 4))(1L))))), 5L, l_158, ((VECTOR(int32_t, 8))(0x4C347452L)), 1L)).even)).s4), l_159, (-1L), 0x39BBD235L)).even)).yyyzyxwx)).s1525134317454510)).sb)
                { /* block id: 104 */
                    int32_t **l_160 = (void*)0;
                    int32_t l_161 = 0x2003F887L;
                    uint16_t l_162[3];
                    uint32_t l_163 = 4294967295UL;
                    VECTOR(int32_t, 16) l_164 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0FC994EAL), 0x0FC994EAL), 0x0FC994EAL, (-3L), 0x0FC994EAL, (VECTOR(int32_t, 2))((-3L), 0x0FC994EAL), (VECTOR(int32_t, 2))((-3L), 0x0FC994EAL), (-3L), 0x0FC994EAL, (-3L), 0x0FC994EAL);
                    int32_t l_165 = 0x3F2718EBL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_162[i] = 0UL;
                    l_160 = (void*)0;
                    l_156[0][4][0] = (l_163 = (l_161 , l_162[0]));
                    if ((l_156[0][2][0] = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_164.se7410e65150dd777)).sc9, (int32_t)(((VECTOR(int16_t, 4))((-1L), 0x00A1L, 1L, 0x4C20L)).w , l_165)))).hi))
                    { /* block id: 109 */
                        int32_t l_168 = (-1L);
                        int32_t *l_167 = &l_168;
                        int32_t **l_166 = &l_167;
                        int8_t l_169 = (-9L);
                        l_160 = l_166;
                        (**l_160) = l_169;
                    }
                    else
                    { /* block id: 112 */
                        int64_t l_170 = 1L;
                        VECTOR(uint16_t, 2) l_171 = (VECTOR(uint16_t, 2))(65535UL, 65530UL);
                        int i;
                        l_164.s5 &= l_170;
                        ++l_171.x;
                    }
                    l_133 = ((VECTOR(int32_t, 2))((-1L), 0x0F016774L)).odd;
                }
                else
                { /* block id: 117 */
                    int8_t l_174 = 0x32L;
                    VECTOR(uint32_t, 16) l_175 = (VECTOR(uint32_t, 16))(0x4BB0F4E4L, (VECTOR(uint32_t, 4))(0x4BB0F4E4L, (VECTOR(uint32_t, 2))(0x4BB0F4E4L, 4294967291UL), 4294967291UL), 4294967291UL, 0x4BB0F4E4L, 4294967291UL, (VECTOR(uint32_t, 2))(0x4BB0F4E4L, 4294967291UL), (VECTOR(uint32_t, 2))(0x4BB0F4E4L, 4294967291UL), 0x4BB0F4E4L, 4294967291UL, 0x4BB0F4E4L, 4294967291UL);
                    uint64_t l_176 = 18446744073709551614UL;
                    int i;
                    l_133 &= (l_148.x &= (l_174 , (((VECTOR(uint32_t, 4))(l_175.s9940)).w , l_176)));
                }
            }
        }
        l_180 = (l_179 = (l_178 = l_177));
        unsigned int result = 0;
        int l_2_i0;
        for (l_2_i0 = 0; l_2_i0 < 7; l_2_i0++) {
            result += l_2[l_2_i0];
        }
        atomic_add(&p_780->g_special_values[85 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 126 */
        (1 + 1);
    }
    (*p_780->g_776) = func_181(l_184, l_185, p_780);
    (*p_780->g_779) = ((*l_778) = &l_777);
    return p_780->g_757.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_780->g_192 p_780->g_comm_values p_780->g_236 p_780->g_247 p_780->g_255 p_780->g_258 p_780->g_265 p_780->l_comm_values p_780->g_270 p_780->g_339 p_780->g_383 p_780->g_317 p_780->g_385 p_780->g_524 p_780->g_644 p_780->g_666 p_780->g_667 p_780->g_642 p_780->g_731 p_780->g_262 p_780->g_724 p_780->g_534 p_780->g_752 p_780->g_745
 * writes: p_780->g_236 p_780->g_247 p_780->g_252 p_780->g_255 p_780->g_258 p_780->g_262 p_780->g_270 p_780->g_266 p_780->g_317 p_780->g_265 p_780->g_385 p_780->g_534 p_780->g_192 p_780->l_comm_values p_780->g_644 p_780->g_514 p_780->g_745 p_780->g_724 p_780->g_733 p_780->g_734
 */
int32_t * func_181(uint16_t  p_182, uint8_t  p_183, struct S0 * p_780)
{ /* block id: 129 */
    int32_t *l_190 = (void*)0;
    int32_t *l_191 = &p_780->g_192[3];
    int32_t **l_193 = &l_191;
    int32_t l_194 = 0x470156CEL;
    int32_t ***l_382 = &p_780->g_265;
    uint64_t l_396[9][4] = {{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL},{0x4C8F0780F7D8C4F6L,18446744073709551614UL,2UL,3UL}};
    int8_t *l_397 = &p_780->g_317[0][2];
    int32_t *l_775 = &p_780->g_192[3];
    int i, j;
    (*l_193) = func_186((l_190 == ((*l_193) = l_191)), (l_194 && (func_195(func_201(p_780->g_192[3], ((*l_397) = (p_780->g_192[3] || (safe_lshift_func_uint8_t_u_u(0UL, (((safe_sub_func_int16_t_s_s(p_780->g_comm_values[p_780->tid], func_209(((((*l_382) = func_211(l_194, func_216(p_780->g_comm_values[p_780->tid], p_182, l_194, &l_190, p_780->g_192[3], p_780), l_194, p_183, p_780)) != p_780->g_383[8][7]) && p_780->g_317[0][3]), p_780))) | 2UL) != l_396[8][3]))))), &l_190, p_780), &p_780->g_192[3], p_182, p_182, &p_780->g_385, p_780) && 3UL)), &p_780->g_192[3], p_780);
    return l_775;
}


/* ------------------------------------------ */
/* 
 * reads : p_780->g_258 p_780->g_265 p_780->g_192 p_780->g_385 p_780->g_524 p_780->g_339 p_780->g_644 p_780->g_255 p_780->g_666 p_780->g_667 p_780->g_317 p_780->g_642 p_780->g_262 p_780->g_724 p_780->g_731 p_780->g_534 p_780->g_752 p_780->g_745 p_780->g_236
 * writes: p_780->g_258 p_780->g_266 p_780->g_252 p_780->g_534 p_780->g_262 p_780->g_192 p_780->g_270 p_780->l_comm_values p_780->g_644 p_780->g_514 p_780->g_724 p_780->g_236 p_780->g_733 p_780->g_734 p_780->g_745 p_780->g_317
 */
int32_t * func_186(uint32_t  p_187, uint16_t  p_188, int32_t * p_189, struct S0 * p_780)
{ /* block id: 312 */
    int32_t *l_512 = &p_780->g_192[3];
    uint64_t *l_513 = &p_780->g_514;
    int32_t l_533 = 0x5E47E754L;
    int32_t l_562 = 0x25D33FF2L;
    int32_t l_565 = (-9L);
    int32_t l_568 = 0x45B884A5L;
    int32_t l_575 = 1L;
    int32_t l_580 = 0L;
    VECTOR(int32_t, 16) l_582 = (VECTOR(int32_t, 16))(0x18AB3CC2L, (VECTOR(int32_t, 4))(0x18AB3CC2L, (VECTOR(int32_t, 2))(0x18AB3CC2L, (-4L)), (-4L)), (-4L), 0x18AB3CC2L, (-4L), (VECTOR(int32_t, 2))(0x18AB3CC2L, (-4L)), (VECTOR(int32_t, 2))(0x18AB3CC2L, (-4L)), 0x18AB3CC2L, (-4L), 0x18AB3CC2L, (-4L));
    int8_t *l_602 = &p_780->g_317[0][2];
    VECTOR(int8_t, 4) l_637 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x06L), 0x06L);
    int16_t *l_657 = &p_780->g_236;
    VECTOR(int64_t, 2) l_676 = (VECTOR(int64_t, 2))(0x43B47816E10EE930L, 0x59E64D643CF4EF0EL);
    uint32_t *l_727 = (void*)0;
    int8_t l_747 = (-10L);
    VECTOR(uint16_t, 8) l_761 = (VECTOR(uint16_t, 8))(0x0C3AL, (VECTOR(uint16_t, 4))(0x0C3AL, (VECTOR(uint16_t, 2))(0x0C3AL, 1UL), 1UL), 1UL, 0x0C3AL, 1UL);
    VECTOR(uint16_t, 8) l_763 = (VECTOR(uint16_t, 8))(0x2E2BL, (VECTOR(uint16_t, 4))(0x2E2BL, (VECTOR(uint16_t, 2))(0x2E2BL, 3UL), 3UL), 3UL, 0x2E2BL, 3UL);
    VECTOR(int8_t, 8) l_768 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x56L), 0x56L), 0x56L, 0L, 0x56L);
    uint32_t *l_773[10][7][3] = {{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}},{{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0},{&p_780->g_734[2][0],&p_780->g_734[2][0],(void*)0}}};
    int32_t *l_774 = &p_780->g_192[3];
    int i, j, k;
    for (p_780->g_258 = 0; (p_780->g_258 < 8); p_780->g_258++)
    { /* block id: 315 */
        int8_t l_519 = 9L;
        int64_t *l_527 = (void*)0;
        int64_t *l_528 = (void*)0;
        int64_t *l_529 = (void*)0;
        int64_t *l_530 = (void*)0;
        int64_t *l_531 = (void*)0;
        int64_t *l_532[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int32_t l_574[4] = {0x05BD9F4CL,0x05BD9F4CL,0x05BD9F4CL,0x05BD9F4CL};
        VECTOR(int64_t, 16) l_615 = (VECTOR(int64_t, 16))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int64_t, 2))((-7L), (-1L)), (VECTOR(int64_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
        VECTOR(int64_t, 2) l_616 = (VECTOR(int64_t, 2))(0x2C686C3349176872L, 0x1BFC7FB33974C129L);
        VECTOR(int16_t, 4) l_635 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0B83L), 0x0B83L);
        int32_t l_643 = 0x755877F5L;
        int8_t l_690[6] = {0x3AL,0x2BL,0x3AL,0x3AL,0x2BL,0x3AL};
        VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(0x535AABE4L, (VECTOR(int32_t, 2))(0x535AABE4L, 1L), 1L);
        VECTOR(int64_t, 2) l_728 = (VECTOR(int64_t, 2))(0x7275A732CE66A4DAL, (-2L));
        int16_t *l_743 = &p_780->g_236;
        uint32_t *l_772 = (void*)0;
        int i, j, k;
        (*p_780->g_265) = l_512;
        if ((p_780->g_534 = (((l_513 == (void*)0) , ((safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0x1218L, 1UL)).even, (~((*p_189) | ((VECTOR(uint32_t, 4))((*l_512), ((VECTOR(uint32_t, 2))(0UL, 1UL)), 0xA9B21BA9L)).x)))) & (l_533 ^= ((1L && ((l_519 & (safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x04L, 0x37L)).yyxxyyyxyyyxxxxx)))).hi)).s61)).xyxxyxxy)).s5, (*l_512))) == ((VECTOR(int64_t, 8))(p_780->g_524.yxywwyyx)).s0), (p_780->g_252 = p_188)))) & (safe_lshift_func_int8_t_s_u(0L, 7)))) , (*l_512)))), (*l_512))) == (*p_189))) != l_519)))
        { /* block id: 320 */
            int32_t l_546 = 9L;
            int32_t l_566 = 1L;
            int32_t l_569 = 1L;
            int32_t l_573 = 0x53EE6A09L;
            int32_t l_576 = 2L;
            int32_t l_577 = 0L;
            int32_t l_581 = (-4L);
            int32_t l_583[7] = {0x6DD3265EL,1L,0x6DD3265EL,0x6DD3265EL,1L,0x6DD3265EL,0x6DD3265EL};
            int16_t l_584 = 1L;
            int32_t ***l_611 = &p_780->g_265;
            int32_t ****l_610[2][10][8] = {{{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611}},{{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611},{&l_611,(void*)0,&l_611,&l_611,(void*)0,&l_611,&l_611,&l_611}}};
            uint8_t *l_625 = (void*)0;
            uint32_t l_693 = 0x9272E8DDL;
            uint64_t l_696 = 0UL;
            uint32_t ***l_726[4][7] = {{&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724},{&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724},{&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724},{&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724,&p_780->g_724}};
            int16_t *l_732[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int16_t **l_744 = &l_743;
            int32_t l_746 = 1L;
            int i, j, k;
            for (l_533 = 0; (l_533 > (-19)); l_533 = safe_sub_func_int8_t_s_s(l_533, 1))
            { /* block id: 323 */
                int64_t l_553 = (-1L);
                int32_t l_557 = (-1L);
                int32_t l_563 = 9L;
                int32_t l_567 = 0x21EC5FE1L;
                int32_t l_570 = 0x0A99463CL;
                int32_t l_571 = 0x32FCEC55L;
                int32_t l_572 = 8L;
                int32_t l_578 = 0x3F20D41CL;
                int32_t l_579 = 2L;
                int32_t l_585 = 0x3063DF27L;
                int32_t l_586 = (-1L);
                int32_t l_587 = (-9L);
                int32_t l_588 = 0x1A3ABA12L;
                int32_t l_589 = (-4L);
                int32_t l_590 = 0x11E2DA97L;
                int32_t l_591[7];
                int32_t l_592 = 0x68E9E442L;
                uint16_t l_593[3];
                uint32_t *l_603[2];
                int64_t *l_628[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 7; i++)
                    l_591[i] = 2L;
                for (i = 0; i < 3; i++)
                    l_593[i] = 0x58CBL;
                for (i = 0; i < 2; i++)
                    l_603[i] = &p_780->g_255;
                for (p_780->g_262 = (-6); (p_780->g_262 >= (-16)); --p_780->g_262)
                { /* block id: 326 */
                    for (p_780->g_534 = 0; (p_780->g_534 <= (-18)); p_780->g_534 = safe_sub_func_int64_t_s_s(p_780->g_534, 8))
                    { /* block id: 329 */
                        int32_t ***l_542 = &p_780->g_265;
                        int32_t ****l_541 = &l_542;
                        (*p_780->g_385) &= (((*l_541) = &p_780->g_265) == &p_780->g_265);
                    }
                    (*p_780->g_385) = ((void*)0 == &p_780->g_252);
                }
                if ((*p_189))
                { /* block id: 335 */
                    int32_t l_545 = 0L;
                    int32_t *l_547 = &p_780->g_270;
                    int32_t *l_548 = &p_780->g_270;
                    int32_t *l_549 = (void*)0;
                    int32_t *l_550 = (void*)0;
                    int32_t *l_551 = &p_780->g_192[0];
                    int32_t *l_552 = (void*)0;
                    int32_t *l_554 = (void*)0;
                    int32_t *l_555 = (void*)0;
                    int32_t *l_556 = &l_546;
                    int32_t *l_558 = &p_780->g_192[3];
                    int32_t *l_559 = &p_780->g_534;
                    int32_t *l_560 = &l_546;
                    int32_t *l_561 = &p_780->g_192[3];
                    int32_t *l_564[2][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*p_780->g_265) = p_189;
                    for (p_780->g_270 = 0; (p_780->g_270 == (-4)); --p_780->g_270)
                    { /* block id: 339 */
                        return p_189;
                    }
                    l_593[2]++;
                }
                else
                { /* block id: 343 */
                    int32_t ****l_612[7][8] = {{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0},{&l_611,(void*)0,&l_611,&l_611,&l_611,(void*)0,&l_611,(void*)0}};
                    VECTOR(int8_t, 4) l_636 = (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x78L), 0x78L);
                    int i, j;
                    for (l_563 = 0; (l_563 <= (-24)); l_563 = safe_sub_func_uint64_t_u_u(l_563, 3))
                    { /* block id: 346 */
                        int8_t *l_601 = &l_519;
                        int8_t **l_600 = &l_601;
                        uint32_t **l_604 = &l_603[0];
                        uint32_t l_629 = 0xB1DEB17BL;
                        int32_t l_630[5][10] = {{1L,0x18EEC714L,0x18EEC714L,1L,6L,0x33DECD3FL,0x33DECD3FL,6L,1L,0x18EEC714L},{1L,0x18EEC714L,0x18EEC714L,1L,6L,0x33DECD3FL,0x33DECD3FL,6L,1L,0x18EEC714L},{1L,0x18EEC714L,0x18EEC714L,1L,6L,0x33DECD3FL,0x33DECD3FL,6L,1L,0x18EEC714L},{1L,0x18EEC714L,0x18EEC714L,1L,6L,0x33DECD3FL,0x33DECD3FL,6L,1L,0x18EEC714L},{1L,0x18EEC714L,0x18EEC714L,1L,6L,0x33DECD3FL,0x33DECD3FL,6L,1L,0x18EEC714L}};
                        int16_t *l_634 = &l_584;
                        int i, j;
                        (*p_189) = ((((*l_600) = &l_519) == l_602) == (((p_780->g_524.w == p_780->g_339) , ((*l_604) = l_603[0])) != (void*)0));
                        l_630[3][9] &= (((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_s(p_187, 0)))) , (((((safe_mod_func_int8_t_s_s(((p_188 = (l_610[1][4][1] != l_612[1][7])) <= (((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(0x3A31489E1F2C232CL, ((VECTOR(int64_t, 8))(l_615.sfbe527b2)), (-6L), 0x059CBEF645ED80D8L, 0x192A17F7195A9E7AL, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_616.xy)).xxyxxxxxyxxxxxyy)).sa6))), 0L, 0L)).s3, (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(p_187, ((l_625 == &p_780->g_247) & (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))((0x186AB529L & (-1L)), 0xAFL, ((void*)0 != l_628[5]), 8UL, p_780->l_comm_values[(safe_mod_func_uint32_t_u_u(p_780->tid, 10))], p_187, 1UL, p_780->g_339, 0x49L, p_187, ((VECTOR(uint8_t, 2))(0xAAL)), GROUP_DIVERGE(0, 1), 0x2DL, 5UL, 0xB6L)), ((VECTOR(uint8_t, 16))(3UL))))).even)).s5, p_187))))), (*l_512))), GROUP_DIVERGE(0, 1))), 0x70E1E737L)))) , (*p_189)) | p_187)), p_187)) != l_615.s5) != (-3L)) <= (*p_189)) ^ l_629)) ^ p_187);
                        l_587 &= ((safe_mul_func_uint16_t_u_u((*l_512), (((*l_634) ^= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(0x7467L, 0x3F10L)).yyxxxxxyyyxyyxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x072AL, p_780->g_524.y, 0x6980L, 0x1A08L)).hi)).yyxyxyxyyxxyxxyy, ((VECTOR(int16_t, 8))(p_780->g_633.sd5f96c70)).s7211724462505533))))).sd0, ((VECTOR(int16_t, 2))(0x2A78L, 0x127AL))))).yxyy)).y) <= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_635.wyxw)).even)).odd))) ^ (l_630[0][0] = (p_780->l_comm_values[(safe_mod_func_uint32_t_u_u(p_780->tid, 10))] = ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(0x5BC3881D815180B1L, 0x281917F6FED5E37AL)).xyxxyxxy, (int64_t)p_188, (int64_t)(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_636.zyyz)).zxxwyyyyzwzxyzwx)).s30c2, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_637.zy)).xxxy))))).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((!0L), (safe_sub_func_int8_t_s_s(((*l_602) = ((*l_601) = (-4L))), (safe_div_func_uint8_t_u_u(((p_188 , 8L) < (p_188 , l_630[3][9])), GROUP_DIVERGE(1, 1))))), (-8L), ((VECTOR(int8_t, 8))(4L)), p_187, ((VECTOR(int8_t, 4))(0x69L)))).s8f6b)).lo))), (-6L), 0x69L)).hi)).even != p_187)))).s1)));
                        if ((*p_189))
                            continue;
                    }
                    (*l_512) = (*l_512);
                    p_780->g_644--;
                }
                for (l_578 = (-1); (l_578 > 25); l_578++)
                { /* block id: 365 */
                    int16_t *l_656[8][2][4] = {{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}},{{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584},{&p_780->g_236,&p_780->g_236,&p_780->g_236,&l_584}}};
                    int16_t **l_655[4];
                    uint16_t *l_660 = &l_593[2];
                    uint8_t *l_664 = &p_780->g_252;
                    int32_t l_665 = 0x048552C7L;
                    int32_t **l_684 = (void*)0;
                    int32_t l_687 = 3L;
                    int32_t l_692[2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_655[i] = &l_656[0][1][2];
                    for (i = 0; i < 2; i++)
                        l_692[i] = 1L;
                    (*l_512) = ((safe_mod_func_int64_t_s_s((((*l_513) = p_780->g_339) | (safe_div_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((((l_657 = &l_584) == &p_780->g_236) , ((VECTOR(int8_t, 4))((l_665 = (p_780->g_534 || (safe_div_func_int8_t_s_s(((*l_602) = (65535UL == ((*l_660) ^= (p_189 == &p_780->g_270)))), ((*l_664) = (((safe_add_func_uint64_t_u_u(p_780->g_192[3], (((safe_unary_minus_func_uint16_t_u(l_574[3])) && 1L) == FAKE_DIVERGE(p_780->global_0_offset, get_global_id(0), 10)))) || p_780->g_644) , GROUP_DIVERGE(0, 1))))))), 0x37L, 1L, 0L)).z) | 254UL) , 0x250CD88177B5838CL), 0x74AEF5593191FF46L)), p_187))), p_780->g_255)) != 18446744073709551615UL);
                    if ((p_780->g_666 != &p_780->g_667[0][0]))
                    { /* block id: 373 */
                        p_189 = p_189;
                    }
                    else
                    { /* block id: 375 */
                        uint32_t l_668[5][5] = {{4294967295UL,4294967295UL,3UL,0x20D812BEL,9UL},{4294967295UL,4294967295UL,3UL,0x20D812BEL,9UL},{4294967295UL,4294967295UL,3UL,0x20D812BEL,9UL},{4294967295UL,4294967295UL,3UL,0x20D812BEL,9UL},{4294967295UL,4294967295UL,3UL,0x20D812BEL,9UL}};
                        int32_t l_679 = 0x1497F48BL;
                        VECTOR(uint32_t, 4) l_680 = (VECTOR(uint32_t, 4))(0x4634043DL, (VECTOR(uint32_t, 2))(0x4634043DL, 0x15258320L), 0x15258320L);
                        uint32_t *l_681 = (void*)0;
                        uint32_t *l_682 = (void*)0;
                        uint16_t **l_685 = (void*)0;
                        uint16_t **l_686 = &l_660;
                        int32_t l_688 = (-7L);
                        int32_t l_689 = 0x0C83BCF4L;
                        int32_t l_691 = 0L;
                        int i, j;
                        l_687 ^= (((l_665 , ((l_668[1][0] &= (~p_188)) != ((*l_513) = (((safe_rshift_func_uint16_t_u_u(p_187, 13)) ^ ((0x73BDADF4L == (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_780->g_675.yyww)).y, (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_676.yyxyyyyyxyxyxyyx)).s6dd7)).y , (!0x4ACEL)))) , (((*l_686) = ((((VECTOR(int32_t, 2))(4L, 0x62653E6EL)).even < ((((safe_div_func_int32_t_s_s((l_592 <= ((*p_189) & ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_679, 0x4B495AFFL, 0x7E6D9AB8L, 0L)))))).wzwywwxw)).s7)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_680.ywwzxywy)).odd)), (p_780->g_683 = p_780->g_252), 4UL, 0x7EA784AEL, ((VECTOR(uint32_t, 2))(1UL)), l_665, FAKE_DIVERGE(p_780->group_1_offset, get_group_id(1), 10), p_780->g_633.sd, 0x439494BEL, ((VECTOR(uint32_t, 2))(4294967286UL)), 4294967289UL)).s8)) >= p_187) , (void*)0) == l_684)) , (void*)0)) != &p_188)) >= 5L) | (**p_780->g_666)), p_780->g_642))) == p_188)) || 0x4866F9194E5B32F9L)))) == l_592) && 0x1336L);
                        ++l_693;
                        if (l_696)
                            break;
                        l_574[0] ^= ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(0L, (-1L))).yxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_780->g_697.s13)).xyxx)), (&p_780->g_265 == &p_780->g_383[6][3]), (*p_189), 0x1DCF52A4L, 0L)).lo))).odd, ((VECTOR(int32_t, 2))(p_780->g_698.s5b))))), 0x59431ABDL, (-6L), ((VECTOR(int32_t, 2))(l_699.yy)), 0x777A3C08L, 0L)))).s76, ((VECTOR(int32_t, 8))(p_780->g_700.s963fc117)).s57, ((VECTOR(int32_t, 2))((-7L), (-4L)))))).lo;
                    }
                }
                if ((atomic_inc(&p_780->g_atomic_input[85 * get_linear_group_id() + 28]) == 5))
                { /* block id: 387 */
                    int32_t l_702[9] = {0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL,0x47863B6BL};
                    int32_t *l_701 = &l_702[8];
                    int32_t *l_703[9][7] = {{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]},{&l_702[4],(void*)0,&l_702[8],&l_702[8],(void*)0,&l_702[4],&l_702[8]}};
                    int32_t *l_704 = &l_702[8];
                    int16_t l_714 = 0x5111L;
                    int8_t l_715[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    uint32_t l_716 = 4294967287UL;
                    uint16_t l_719[7] = {65530UL,65530UL,65530UL,65530UL,65530UL,65530UL,65530UL};
                    int i, j;
                    l_704 = (l_703[8][1] = l_701);
                    for (l_702[8] = (-12); (l_702[8] <= 27); l_702[8]++)
                    { /* block id: 392 */
                        int32_t l_708 = 0x194D7B7DL;
                        int32_t *l_707 = &l_708;
                        int32_t *l_709 = &l_708;
                        int32_t *l_710 = &l_708;
                        uint32_t l_711 = 0UL;
                        l_703[7][2] = l_707;
                        l_710 = l_709;
                        l_711++;
                    }
                    l_716++;
                    l_719[5] |= (-1L);
                    unsigned int result = 0;
                    int l_702_i0;
                    for (l_702_i0 = 0; l_702_i0 < 9; l_702_i0++) {
                        result += l_702[l_702_i0];
                    }
                    result += l_714;
                    int l_715_i0;
                    for (l_715_i0 = 0; l_715_i0 < 9; l_715_i0++) {
                        result += l_715[l_715_i0];
                    }
                    result += l_716;
                    int l_719_i0;
                    for (l_719_i0 = 0; l_719_i0 < 7; l_719_i0++) {
                        result += l_719[l_719_i0];
                    }
                    atomic_add(&p_780->g_special_values[85 * get_linear_group_id() + 28], result);
                }
                else
                { /* block id: 399 */
                    (1 + 1);
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_780->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 10)), permutations[(safe_mod_func_uint32_t_u_u(((l_574[0] ^= (safe_mul_func_int16_t_s_s(p_780->g_262, ((p_780->g_734[1][3] = (p_780->g_733 = ((*l_657) = (0x0432D1A7L ^ (safe_sub_func_uint32_t_u_u(l_699.z, (((p_780->g_724 = p_780->g_724) != ((((l_727 = &p_780->g_255) != p_189) > ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_728.yy)))).yyxxyyxy)).s0) , &p_780->g_725)) > (((safe_rshift_func_int16_t_s_u((*l_512), (((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_780->g_731.s3506107546621110)).sd5)).yyxx))), (int8_t)0x12L))).w != l_690[5]))) ^ 0x0EC2BA96BB4BF11AL) >= p_780->g_258)))))))) > p_780->g_534)))) == (-4L)), 10))][(safe_mod_func_uint32_t_u_u(p_780->tid, 10))]));
            (*p_780->g_385) = (safe_div_func_uint64_t_u_u(p_188, (safe_mod_func_int8_t_s_s((((((safe_div_func_int32_t_s_s((l_565 &= ((((+((void*)0 != &p_780->g_514)) | (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_780->local_0_offset, get_local_id(0), 10), (~((FAKE_DIVERGE(p_780->global_2_offset, get_global_id(2), 10) == ((VECTOR(int64_t, 2))(0L, 0x1B51E0EA098CF799L)).even) <= ((p_187 , ((*l_744) = l_743)) == (p_780->g_745 = &p_780->g_236))))))) , ((l_574[0] = 0x6368FDEE78866B09L) == l_746)) , (((**p_780->g_666) = ((p_188 || 1UL) && 0x7EL)) & p_188))), l_747)) , GROUP_DIVERGE(2, 1)) < p_780->g_731.s6) <= p_187) | p_188), p_780->g_339))));
        }
        else
        { /* block id: 418 */
            uint32_t **l_754 = (void*)0;
            VECTOR(uint16_t, 4) l_762 = (VECTOR(uint16_t, 4))(0x69CCL, (VECTOR(uint16_t, 2))(0x69CCL, 0xCB57L), 0xCB57L);
            uint8_t *l_764 = &p_780->g_252;
            int16_t l_769 = 1L;
            int32_t l_770 = 0x2702ACD7L;
            int32_t l_771 = 0x63139F63L;
            int i;
            l_771 = (safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((&p_780->g_725 == (((void*)0 != p_780->g_752) , l_754)), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))((-9L), 0x712ABCDBDCB72311L)).xxyy, ((VECTOR(int64_t, 8))(p_780->g_757.s75472555)).odd))).w, (((*l_764) = (l_616.x >= ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x8FFCL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(1UL, 65535UL)).xxyyyxxx, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(p_780->g_758.yxyx)), (uint16_t)0xD601L))).wxyyyxyw))))).hi)).lo)))), 0x44C8L)))))).zzzywxzxzyyxwzwx, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(p_780->g_759.s94ce4b3b580035dc)).sbe, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(p_780->g_760.wywzwyzxyzwyzxyy)).even, ((VECTOR(uint16_t, 2))(l_761.s52)).yyyxxxyx, ((VECTOR(uint16_t, 16))(l_762.xyzywwwwyyxwzxyx)).even))).s56))).yyxxxyxyxxyxyxyy))).s8a)).yxyxxxyyxxxyyyyx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_763.s7216)), ((VECTOR(uint16_t, 2))(65528UL, 0x8B6CL)), 0xA31CL, 0x534CL)).hi)).xyxzwxwwxwzxwwxw))), ((VECTOR(uint16_t, 4))(0x5C5FL, ((VECTOR(uint16_t, 2))(0x5ECFL, 0x5941L)), 1UL)).wzzyzwwzzxwxwywy))).s4)) > ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(p_780->g_767.s6302)).zywzxyzxyxxwxyzw, ((VECTOR(int8_t, 4))(l_768.s1504)).xzxxyxxyzxzzxywz))).sf, l_769)) <= ((l_770 = ((*l_512) = (((l_754 != (((FAKE_DIVERGE(p_780->global_1_offset, get_global_id(1), 10) , 0x1A762FF32FFB8B6FL) > 0x5031CD926B5F05A8L) , l_754)) >= l_762.x) > (*p_780->g_745)))) , p_780->g_524.y))))))) , p_188), p_187));
        }
        (*p_780->g_265) = (void*)0;
        (*p_780->g_385) ^= ((l_772 != (l_773[3][1][0] = (void*)0)) & 0xE071560CL);
    }
    return l_774;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_780->g_385
 */
uint32_t  func_195(int64_t  p_196, int32_t * p_197, int64_t  p_198, uint16_t  p_199, int32_t ** p_200, struct S0 * p_780)
{ /* block id: 308 */
    int32_t *l_509 = &p_780->g_192[1];
    (*p_200) = l_509;
    (*p_200) = l_509;
    return p_198;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_201(uint8_t  p_202, int8_t  p_203, int32_t ** p_204, struct S0 * p_780)
{ /* block id: 218 */
    int32_t *l_398 = &p_780->g_270;
    l_398 = (*p_204);
    if ((atomic_inc(&p_780->l_atomic_input[15]) == 7))
    { /* block id: 221 */
        int32_t l_399 = 0x5B45BCCEL;
        int32_t l_400[1];
        int16_t l_401 = 0x5A5AL;
        VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(0x2F0B213FL, (VECTOR(int32_t, 4))(0x2F0B213FL, (VECTOR(int32_t, 2))(0x2F0B213FL, 0x74B3791BL), 0x74B3791BL), 0x74B3791BL, 0x2F0B213FL, 0x74B3791BL, (VECTOR(int32_t, 2))(0x2F0B213FL, 0x74B3791BL), (VECTOR(int32_t, 2))(0x2F0B213FL, 0x74B3791BL), 0x2F0B213FL, 0x74B3791BL, 0x2F0B213FL, 0x74B3791BL);
        uint32_t l_403[6] = {0xA96F8BF4L,0xA96F8BF4L,0xA96F8BF4L,0xA96F8BF4L,0xA96F8BF4L,0xA96F8BF4L};
        uint32_t l_404 = 0x59213B34L;
        uint16_t l_405 = 0x5C39L;
        int i;
        for (i = 0; i < 1; i++)
            l_400[i] = 0L;
        l_401 = (l_400[0] = l_399);
        if ((l_405 |= (l_404 = (((VECTOR(int32_t, 16))(l_402.sa438deebc8c2dc67)).sa , l_403[5]))))
        { /* block id: 226 */
            uint8_t l_406 = 0xB1L;
            uint8_t l_409 = 0xBDL;
            uint64_t l_410 = 0x1369024C3D8576F8L;
            int8_t l_411 = 0L;
            l_399 = 0x76579A3AL;
            l_406++;
            l_410 ^= l_409;
            if (l_411)
            { /* block id: 230 */
                uint8_t l_412 = 246UL;
                int16_t l_413 = 0x129BL;
                uint32_t l_414 = 4294967286UL;
                int32_t l_417 = (-9L);
                uint32_t l_418 = 0x2AEFDB63L;
                uint32_t l_421 = 1UL;
                l_399 ^= l_412;
                l_414--;
                l_418++;
                l_399 = l_421;
            }
            else
            { /* block id: 235 */
                int32_t l_422 = 0x09CC5707L;
                for (l_422 = 0; (l_422 == (-17)); l_422 = safe_sub_func_uint64_t_u_u(l_422, 9))
                { /* block id: 238 */
                    uint8_t *l_426 = (void*)0;
                    uint8_t **l_425 = &l_426;
                    uint8_t l_427[10][4][6] = {{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}},{{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL},{255UL,0xF1L,254UL,249UL,247UL,1UL}}};
                    VECTOR(uint32_t, 16) l_428 = (VECTOR(uint32_t, 16))(0xD80908BFL, (VECTOR(uint32_t, 4))(0xD80908BFL, (VECTOR(uint32_t, 2))(0xD80908BFL, 4294967295UL), 4294967295UL), 4294967295UL, 0xD80908BFL, 4294967295UL, (VECTOR(uint32_t, 2))(0xD80908BFL, 4294967295UL), (VECTOR(uint32_t, 2))(0xD80908BFL, 4294967295UL), 0xD80908BFL, 4294967295UL, 0xD80908BFL, 4294967295UL);
                    int32_t l_429 = (-3L);
                    uint64_t l_430 = 1UL;
                    VECTOR(uint8_t, 2) l_431 = (VECTOR(uint8_t, 2))(0x48L, 0x8AL);
                    int32_t *l_432 = (void*)0;
                    int32_t l_434 = (-1L);
                    int32_t *l_433[9] = {&l_434,(void*)0,&l_434,&l_434,(void*)0,&l_434,&l_434,(void*)0,&l_434};
                    int i, j, k;
                    l_425 = (void*)0;
                    l_428.s5 = l_427[7][3][2];
                    l_430 = (l_399 = l_429);
                    l_433[6] = (((VECTOR(uint8_t, 8))(l_431.yxxxyxxx)).s7 , l_432);
                }
            }
        }
        else
        { /* block id: 246 */
            uint16_t l_435 = 0xACAEL;
            VECTOR(uint32_t, 8) l_506 = (VECTOR(uint32_t, 8))(0x7C68756BL, (VECTOR(uint32_t, 4))(0x7C68756BL, (VECTOR(uint32_t, 2))(0x7C68756BL, 4294967291UL), 4294967291UL), 4294967291UL, 0x7C68756BL, 4294967291UL);
            int64_t l_507 = 0x179E2421DBD94C7CL;
            int16_t l_508 = (-1L);
            int i;
            l_399 = (-7L);
            if (l_435)
            { /* block id: 248 */
                uint32_t l_436 = 2UL;
                VECTOR(int32_t, 2) l_439 = (VECTOR(int32_t, 2))(0L, 1L);
                int32_t *l_488[1];
                int32_t *l_489[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_488[i] = (void*)0;
                ++l_436;
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-6L), 0x43E0866EL, (-7L), 0x581341BFL)).x, ((VECTOR(int32_t, 2))(l_439.xx)), 0x6C06B988L)).y)
                { /* block id: 250 */
                    int32_t l_440 = (-1L);
                    for (l_440 = 0; (l_440 == 4); l_440 = safe_add_func_uint32_t_u_u(l_440, 5))
                    { /* block id: 253 */
                        int16_t l_443[3];
                        uint8_t l_444 = 250UL;
                        uint16_t l_445 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_443[i] = 0x5E24L;
                        l_444 = l_443[2];
                        l_439.x = 2L;
                        l_399 = l_445;
                    }
                    for (l_440 = (-30); (l_440 == (-25)); l_440 = safe_add_func_int64_t_s_s(l_440, 1))
                    { /* block id: 260 */
                        uint16_t l_448[9][8][3] = {{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}},{{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL},{1UL,0xF188L,0x6BFFL}}};
                        VECTOR(uint32_t, 8) l_451 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x644DFB60L), 0x644DFB60L), 0x644DFB60L, 1UL, 0x644DFB60L);
                        uint32_t l_452[4][1][9] = {{{0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL}},{{0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL}},{{0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL}},{{0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL,0x41D82E4FL}}};
                        VECTOR(int64_t, 4) l_453 = (VECTOR(int64_t, 4))(0x019C7D26710AEF6AL, (VECTOR(int64_t, 2))(0x019C7D26710AEF6AL, 0x1C6E4E7EB738CBE7L), 0x1C6E4E7EB738CBE7L);
                        VECTOR(int32_t, 4) l_454 = (VECTOR(int32_t, 4))(0x00DCC190L, (VECTOR(int32_t, 2))(0x00DCC190L, 1L), 1L);
                        VECTOR(int32_t, 4) l_455 = (VECTOR(int32_t, 4))(0x423847E2L, (VECTOR(int32_t, 2))(0x423847E2L, 0L), 0L);
                        VECTOR(int32_t, 8) l_456 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2C0D27F5L), 0x2C0D27F5L), 0x2C0D27F5L, 0L, 0x2C0D27F5L);
                        VECTOR(int32_t, 2) l_457 = (VECTOR(int32_t, 2))(0x0D2B9B9DL, 0x16784784L);
                        VECTOR(int32_t, 2) l_458 = (VECTOR(int32_t, 2))((-1L), 0x38DE1FB4L);
                        VECTOR(int32_t, 4) l_459 = (VECTOR(int32_t, 4))(0x373BEA6FL, (VECTOR(int32_t, 2))(0x373BEA6FL, 0x68DC383DL), 0x68DC383DL);
                        uint64_t l_460 = 0x8944EB55DE1E9BAEL;
                        VECTOR(uint32_t, 8) l_461 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
                        int16_t l_462 = 5L;
                        VECTOR(uint32_t, 8) l_463 = (VECTOR(uint32_t, 8))(0x54C06514L, (VECTOR(uint32_t, 4))(0x54C06514L, (VECTOR(uint32_t, 2))(0x54C06514L, 4294967286UL), 4294967286UL), 4294967286UL, 0x54C06514L, 4294967286UL);
                        VECTOR(uint32_t, 4) l_464 = (VECTOR(uint32_t, 4))(0x91E16E8AL, (VECTOR(uint32_t, 2))(0x91E16E8AL, 0UL), 0UL);
                        VECTOR(uint32_t, 2) l_465 = (VECTOR(uint32_t, 2))(4UL, 0x3BB68F0CL);
                        VECTOR(int32_t, 8) l_466 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                        uint16_t l_467 = 0xF2E8L;
                        VECTOR(int32_t, 4) l_468 = (VECTOR(int32_t, 4))(0x704B99BDL, (VECTOR(int32_t, 2))(0x704B99BDL, 3L), 3L);
                        int32_t l_469 = 0x212CA1CBL;
                        int16_t l_470 = 0x4C79L;
                        int64_t l_471[7][4][3] = {{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}},{{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L},{(-1L),0x081D414C82FBFFFFL,0x42D0A7A8E6A7A896L}}};
                        int64_t l_472 = 1L;
                        int32_t l_473[9];
                        int32_t *l_474[3];
                        int32_t *l_475 = &l_473[7];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_473[i] = (-3L);
                        for (i = 0; i < 3; i++)
                            l_474[i] = &l_469;
                        --l_448[4][3][2];
                        l_475 = (l_474[0] = ((((VECTOR(uint32_t, 16))(l_451.s4344071101121305)).s4 , l_452[1][0][8]) , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_453.yzyyzyxw)).odd)).zxzxxywzxxxzwwzx)).s36, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(7L, 0x4884F101L)).yyxx))))), 0x3E48B410L, ((VECTOR(int32_t, 8))(3L, 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_454.zw)), 7L, 0x7562CC35L)), 0x6793D22FL, 0L)), 1L, 1L, (-1L))).s23)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_455.zxxyywwz)).even, (int32_t)0L))).wywywzzy)).s02))).xyyy)), ((VECTOR(int32_t, 8))(l_456.s26275746)).hi))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_457.yxxyxxxyyyxxxyyy)).sa14c, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(0x5F8CE8F5L, 1L)).yyyyxyxy, ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_458.xyxx)), ((VECTOR(int32_t, 2))(0x6BE0B57CL, 0x44F5BB74L)), (-1L), 0L)).s52, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_459.wzxz)).zzyxyxzx, (int32_t)3L))).s01))), 2L, 8L)), l_460, (-4L), 0x1E10849BL))))).even)))))))).yzwxxwxy)).s3423642144504646, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_461.s37444653)), 0x93D66BECL, l_462, 0x4026DE08L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_463.s4144771002134170)).sdc)), ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_464.yxxz)).xyyywwywxywyzyxx)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_465.yxyxxyxx)))), (l_466.s4 , (l_467 , (l_470 = (((VECTOR(int32_t, 2))(l_468.wx)).odd , (l_404 = l_469))))), l_471[5][0][2], l_472, l_473[8], ((VECTOR(uint32_t, 2))(1UL)), 0xC3DBC631L, 0UL)).hi, ((VECTOR(uint32_t, 8))(0x0C5FCD04L))))).s62, ((VECTOR(uint32_t, 2))(0x9839A67BL))))), 0x1E246523L)).s9e56, ((VECTOR(uint32_t, 4))(0x55D797B6L))))).lo)).xxxxyyxxyxyyyxyx))).sef, ((VECTOR(int64_t, 2))(0L))))), 1L, (-3L))).w , (void*)0)));
                        l_439.x = ((VECTOR(int32_t, 2))(0x73552ED8L, 0x18319604L)).odd;
                    }
                    if ((l_399 = 0x2F95376CL))
                    { /* block id: 269 */
                        int16_t l_476[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int64_t l_477 = 0x237AD12D1A6F48E3L;
                        uint32_t l_478 = 0x45DC5DE7L;
                        int i;
                        l_478--;
                    }
                    else
                    { /* block id: 271 */
                        l_439.y = 5L;
                    }
                }
                else
                { /* block id: 274 */
                    int32_t l_481 = 0x45F05901L;
                    for (l_481 = 0; (l_481 > 0); l_481 = safe_add_func_uint8_t_u_u(l_481, 4))
                    { /* block id: 277 */
                        int32_t l_485 = 0x5B0868C6L;
                        int32_t *l_484 = &l_485;
                        int32_t *l_486 = &l_485;
                        uint8_t l_487 = 8UL;
                        l_399 = (-3L);
                        l_486 = l_484;
                        l_439.y = l_487;
                    }
                }
                l_489[0][0] = l_488[0];
            }
            else
            { /* block id: 284 */
                int32_t l_491 = 0x076BDD8CL;
                int32_t *l_490 = &l_491;
                int32_t *l_492 = &l_491;
                l_492 = l_490;
                for (l_491 = 0; (l_491 == (-12)); l_491 = safe_sub_func_uint64_t_u_u(l_491, 2))
                { /* block id: 288 */
                    int64_t l_495 = 0x3430270CB8531AABL;
                    int16_t l_496[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int16_t l_497 = (-1L);
                    uint8_t l_498 = 0x7DL;
                    int32_t l_499[1][2];
                    uint8_t l_500 = 2UL;
                    int8_t l_501 = 0x52L;
                    int32_t *l_502[1][3];
                    int32_t *l_503 = (void*)0;
                    int32_t **l_504 = &l_502[0][2];
                    int32_t **l_505 = &l_502[0][0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_499[i][j] = (-1L);
                    }
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_502[i][j] = &l_499[0][0];
                    }
                    l_498 = ((l_495 , (l_402.s4 = 0x7B6F1853L)) , (l_497 ^= l_496[4]));
                    l_502[0][1] = ((FAKE_DIVERGE(p_780->group_0_offset, get_group_id(0), 10) , (l_501 = (l_500 = l_499[0][0]))) , (l_490 = (void*)0));
                    l_490 = l_503;
                    l_505 = l_504;
                }
            }
            l_399 &= ((l_403[5] = ((VECTOR(uint32_t, 2))(l_506.s51)).hi) , l_507);
            l_399 ^= (l_508 , (-5L));
        }
        unsigned int result = 0;
        result += l_399;
        int l_400_i0;
        for (l_400_i0 = 0; l_400_i0 < 1; l_400_i0++) {
            result += l_400[l_400_i0];
        }
        result += l_401;
        result += l_402.sf;
        result += l_402.se;
        result += l_402.sd;
        result += l_402.sc;
        result += l_402.sb;
        result += l_402.sa;
        result += l_402.s9;
        result += l_402.s8;
        result += l_402.s7;
        result += l_402.s6;
        result += l_402.s5;
        result += l_402.s4;
        result += l_402.s3;
        result += l_402.s2;
        result += l_402.s1;
        result += l_402.s0;
        int l_403_i0;
        for (l_403_i0 = 0; l_403_i0 < 6; l_403_i0++) {
            result += l_403[l_403_i0];
        }
        result += l_404;
        result += l_405;
        atomic_add(&p_780->l_special_values[15], result);
    }
    else
    { /* block id: 304 */
        (1 + 1);
    }
    return p_202;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_209(int32_t  p_210, struct S0 * p_780)
{ /* block id: 214 */
    int8_t l_386[3];
    int32_t l_387 = (-1L);
    int32_t *l_388 = &l_387;
    int32_t *l_389[3][9] = {{&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270},{&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270},{&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_270,&p_780->g_192[3],&p_780->g_270}};
    int64_t l_390 = 0x040474EEFF7961D5L;
    int16_t l_391 = 0x6EBCL;
    uint32_t l_393 = 4294967295UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_386[i] = 0x7BL;
    --l_393;
    return p_210;
}


/* ------------------------------------------ */
/* 
 * reads : p_780->g_270 p_780->g_265 p_780->g_258 p_780->g_255 p_780->g_339 p_780->g_192
 * writes: p_780->g_270 p_780->g_317 p_780->g_258 p_780->g_266 p_780->g_236
 */
int32_t ** func_211(int32_t  p_212, int32_t ** p_213, uint32_t  p_214, int32_t  p_215, struct S0 * p_780)
{ /* block id: 148 */
    int64_t l_280 = 0x1F6079FCFDB27AC7L;
    int32_t l_296 = (-1L);
    int32_t l_297 = 2L;
    int32_t l_298 = 0x459D8328L;
    int32_t l_299 = 0x029DB8E8L;
    int32_t l_300 = 0x1D039D2FL;
    int32_t l_301[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(uint64_t, 2) l_311 = (VECTOR(uint64_t, 2))(0xF65CCC253A74ED63L, 18446744073709551612UL);
    uint16_t l_322 = 6UL;
    VECTOR(int32_t, 4) l_358 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L));
    uint8_t *l_359 = &p_780->g_247;
    VECTOR(int64_t, 8) l_360 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(uint32_t, 4) l_373 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAD11F482L), 0xAD11F482L);
    int64_t *l_378 = (void*)0;
    int64_t *l_379 = &l_280;
    uint32_t l_380 = 0x28005721L;
    uint16_t l_381 = 0x4D05L;
    int i;
    for (p_215 = 0; (p_215 >= (-4)); --p_215)
    { /* block id: 151 */
        int32_t *l_282 = (void*)0;
        int32_t *l_283 = &p_780->g_270;
        int32_t *l_284 = &p_780->g_270;
        int32_t *l_285 = &p_780->g_270;
        int32_t *l_286 = &p_780->g_270;
        int32_t l_287 = (-1L);
        int32_t *l_288 = &p_780->g_270;
        int32_t *l_289 = (void*)0;
        int32_t *l_290 = &p_780->g_270;
        int32_t *l_291 = &p_780->g_270;
        int32_t *l_292 = (void*)0;
        int32_t *l_293 = &l_287;
        int32_t *l_294 = &l_287;
        int32_t *l_295[8] = {&l_287,&l_287,&l_287,&l_287,&l_287,&l_287,&l_287,&l_287};
        uint8_t l_302 = 254UL;
        uint64_t *l_312 = (void*)0;
        int8_t *l_315 = (void*)0;
        int8_t *l_316 = &p_780->g_317[0][2];
        VECTOR(int64_t, 8) l_321 = (VECTOR(int64_t, 8))(0x4C7C46ECD58CF915L, (VECTOR(int64_t, 4))(0x4C7C46ECD58CF915L, (VECTOR(int64_t, 2))(0x4C7C46ECD58CF915L, 0x752C8BBB3147C789L), 0x752C8BBB3147C789L), 0x752C8BBB3147C789L, 0x4C7C46ECD58CF915L, 0x752C8BBB3147C789L);
        uint32_t *l_323 = &p_780->g_258;
        int32_t l_324 = 0L;
        int i;
        for (p_212 = 0; (p_212 > 20); ++p_212)
        { /* block id: 154 */
            int32_t *l_281 = &p_780->g_270;
            (*l_281) = l_280;
        }
        l_302--;
        if (((safe_sub_func_uint16_t_u_u(p_780->g_270, (safe_sub_func_int32_t_s_s((*l_286), (((safe_sub_func_uint16_t_u_u(l_301[4], ((l_297 = ((VECTOR(uint64_t, 16))(l_311.xxxxyyyyxxyyyxyy)).sb) > p_214))) >= p_212) | (p_214 >= (((*l_323) = ((safe_mul_func_int8_t_s_s(((*l_316) = p_212), (safe_unary_minus_func_int32_t_s((safe_mod_func_uint64_t_u_u(18446744073709551615UL, ((VECTOR(int64_t, 16))(l_321.s0074033431614516)).sb)))))) < l_322)) <= l_324))))))) >= GROUP_DIVERGE(1, 1)))
        { /* block id: 161 */
            (*p_780->g_265) = &p_780->g_270;
            for (p_780->g_258 = 0; (p_780->g_258 != 8); p_780->g_258 = safe_add_func_uint64_t_u_u(p_780->g_258, 8))
            { /* block id: 165 */
                (*l_294) |= (+((*l_285) = p_212));
            }
            (*l_284) &= (safe_unary_minus_func_int16_t_s(p_215));
            (*p_780->g_265) = (void*)0;
        }
        else
        { /* block id: 171 */
            int16_t l_328 = 0x439DL;
            int32_t l_338[6] = {0x21C97F0DL,0x10D51BD0L,0x21C97F0DL,0x21C97F0DL,0x10D51BD0L,0x21C97F0DL};
            uint8_t l_341[10][9][2] = {{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}},{{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL},{1UL,252UL}}};
            int i, j, k;
            (*l_294) = l_328;
            for (l_297 = 0; (l_297 >= (-25)); l_297 = safe_sub_func_uint64_t_u_u(l_297, 6))
            { /* block id: 175 */
                int16_t l_340 = 0L;
                if ((atomic_inc(&p_780->l_atomic_input[20]) == 6))
                { /* block id: 177 */
                    uint64_t l_331 = 18446744073709551609UL;
                    int32_t l_333 = 0L;
                    int32_t *l_332 = &l_333;
                    int32_t *l_334[2][5][6] = {{{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0}},{{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,(void*)0}}};
                    int32_t *l_335 = &l_333;
                    int32_t *l_336 = &l_333;
                    int32_t *l_337 = &l_333;
                    int i, j, k;
                    l_335 = (l_334[0][3][4] = (l_332 = (l_331 , (void*)0)));
                    l_337 = l_336;
                    unsigned int result = 0;
                    result += l_331;
                    result += l_333;
                    atomic_add(&p_780->l_special_values[20], result);
                }
                else
                { /* block id: 182 */
                    (1 + 1);
                }
                --l_341[4][2][0];
            }
            for (p_780->g_236 = (-16); (p_780->g_236 > 11); p_780->g_236++)
            { /* block id: 189 */
                if ((atomic_inc(&p_780->l_atomic_input[71]) == 0))
                { /* block id: 191 */
                    int16_t l_346 = 1L;
                    uint8_t l_347 = 0xC9L;
                    int32_t l_348 = 1L;
                    VECTOR(uint16_t, 8) l_349 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
                    int64_t l_350 = 0L;
                    int64_t l_351 = 0x1ECC703E0CC88084L;
                    VECTOR(int8_t, 16) l_352 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7AL), 0x7AL), 0x7AL, 0L, 0x7AL, (VECTOR(int8_t, 2))(0L, 0x7AL), (VECTOR(int8_t, 2))(0L, 0x7AL), 0L, 0x7AL, 0L, 0x7AL);
                    uint32_t l_353 = 4294967289UL;
                    int i;
                    l_349.s6 = (l_348 ^= (l_346 , l_347));
                    l_352.s8 = (l_351 = (l_350 , 0x0E768BA2L));
                    l_353--;
                    unsigned int result = 0;
                    result += l_346;
                    result += l_347;
                    result += l_348;
                    result += l_349.s7;
                    result += l_349.s6;
                    result += l_349.s5;
                    result += l_349.s4;
                    result += l_349.s3;
                    result += l_349.s2;
                    result += l_349.s1;
                    result += l_349.s0;
                    result += l_350;
                    result += l_351;
                    result += l_352.sf;
                    result += l_352.se;
                    result += l_352.sd;
                    result += l_352.sc;
                    result += l_352.sb;
                    result += l_352.sa;
                    result += l_352.s9;
                    result += l_352.s8;
                    result += l_352.s7;
                    result += l_352.s6;
                    result += l_352.s5;
                    result += l_352.s4;
                    result += l_352.s3;
                    result += l_352.s2;
                    result += l_352.s1;
                    result += l_352.s0;
                    result += l_353;
                    atomic_add(&p_780->l_special_values[71], result);
                }
                else
                { /* block id: 197 */
                    (1 + 1);
                }
            }
        }
    }
    for (p_780->g_270 = 14; (p_780->g_270 != 27); p_780->g_270 = safe_add_func_int8_t_s_s(p_780->g_270, 1))
    { /* block id: 205 */
        return &p_780->g_266[4][5][3];
    }
    atomic_and(&p_780->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_358.wwwywzwy)).s50)), (int32_t)((((void*)0 != l_359) == ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_360.s63)).xyyxxxxyxyxxxxyy)).s0) , (((l_296 & (l_358.y = (0x40B2AE9A6A0F35D9L > (((l_360.s6 , (((l_358.w == (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(0x23F320E88AB914D1L, 18446744073709551615UL, 18446744073709551615UL, 6UL)).w, (l_380 &= (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((+(((((*l_379) = ((!((((safe_rshift_func_int16_t_s_u(9L, 5)) && ((VECTOR(uint32_t, 2))(l_373.wx)).even) , (safe_div_func_uint64_t_u_u(p_780->g_255, (safe_sub_func_int32_t_s_s(l_296, 0xFAAE3616L))))) >= l_322)) ^ l_322)) , p_214) <= p_780->g_270) == p_212)), p_780->g_339)) <= 0x27830DFDL), l_373.x))))), 7))) > l_299) || 0xA7L)) | 1UL) ^ p_780->g_192[3])))) != 0x61L) , l_380)), (int32_t)l_381))).hi + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_780->v_collective += p_780->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_213;
}


/* ------------------------------------------ */
/* 
 * reads : p_780->g_236 p_780->g_comm_values p_780->g_247 p_780->g_192 p_780->g_255 p_780->g_258 p_780->g_265 p_780->l_comm_values p_780->g_270
 * writes: p_780->g_236 p_780->g_247 p_780->g_252 p_780->g_255 p_780->g_258 p_780->g_262 p_780->g_270 p_780->g_266
 */
int32_t ** func_216(uint8_t  p_217, int64_t  p_218, int64_t  p_219, int32_t ** p_220, int32_t  p_221, struct S0 * p_780)
{ /* block id: 131 */
    uint8_t l_235 = 0x05L;
    VECTOR(int8_t, 8) l_244 = (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x4FL), 0x4FL), 0x4FL, 0x58L, 0x4FL);
    int32_t l_245 = (-3L);
    uint8_t *l_246 = &p_780->g_247;
    uint8_t *l_250 = (void*)0;
    uint8_t *l_251 = &p_780->g_252;
    uint16_t l_253 = 0xB9FCL;
    uint32_t *l_254[3];
    uint32_t l_267 = 1UL;
    int32_t *l_268 = &l_245;
    int32_t *l_269 = &p_780->g_270;
    int i;
    for (i = 0; i < 3; i++)
        l_254[i] = &p_780->g_255;
    (*l_269) |= ((*l_268) |= ((4L | (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((!(func_229((((l_235 <= (p_780->g_236 |= 0UL)) <= p_217) , func_237((p_780->g_255 |= (l_235 != (safe_div_func_int16_t_s_s(((GROUP_DIVERGE(1, 1) , p_780->g_comm_values[p_780->tid]) , ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_244.s0307117252751417)).s1, l_244.s6)) , ((((++(*l_246)) > ((*l_251) = l_235)) != (p_780->g_192[3] , p_218)) , l_244.s0))), l_253)))), (*p_220), p_780)), l_235, p_218, l_267, p_780->l_comm_values[(safe_mod_func_uint32_t_u_u(p_780->tid, 10))], p_780) & p_217)), p_218)) < GROUP_DIVERGE(1, 1)) , FAKE_DIVERGE(p_780->group_1_offset, get_group_id(1), 10)), (-1L))))), p_780->l_comm_values[(safe_mod_func_uint32_t_u_u(p_780->tid, 10))]))) < p_780->g_192[3]));
    p_221 = (safe_div_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s(1UL, 2)))), (*l_268)));
    (*p_780->g_265) = &l_245;
    return p_220;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_229(int32_t ** p_230, int64_t  p_231, uint16_t  p_232, uint8_t  p_233, uint64_t  p_234, struct S0 * p_780)
{ /* block id: 141 */
    return p_231;
}


/* ------------------------------------------ */
/* 
 * reads : p_780->g_258 p_780->g_265
 * writes: p_780->g_258 p_780->g_262
 */
int32_t ** func_237(uint32_t  p_238, int32_t * p_239, struct S0 * p_780)
{ /* block id: 136 */
    int32_t l_256[4][9] = {{0x7FC08A9CL,(-1L),7L,2L,7L,(-1L),0x7FC08A9CL,0x02735C65L,1L},{0x7FC08A9CL,(-1L),7L,2L,7L,(-1L),0x7FC08A9CL,0x02735C65L,1L},{0x7FC08A9CL,(-1L),7L,2L,7L,(-1L),0x7FC08A9CL,0x02735C65L,1L},{0x7FC08A9CL,(-1L),7L,2L,7L,(-1L),0x7FC08A9CL,0x02735C65L,1L}};
    uint32_t *l_257[4][10] = {{(void*)0,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,(void*)0,(void*)0},{(void*)0,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,(void*)0,(void*)0},{(void*)0,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,(void*)0,(void*)0},{(void*)0,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,&p_780->g_258,(void*)0,(void*)0}};
    int32_t *l_264 = &l_256[0][8];
    int32_t **l_263[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_263[i][j] = &l_264;
    }
    l_256[0][8] = p_238;
    p_780->g_262 = ((7L != (p_780->g_258--)) , (safe_unary_minus_func_uint32_t_u((&p_780->g_258 == &p_780->g_258))));
    return p_780->g_265;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[85];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 85; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[85];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 85; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[10];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 10; i++)
            l_comm_values[i] = 1;
    struct S0 c_781;
    struct S0* p_780 = &c_781;
    struct S0 c_782 = {
        {0x0D9F4A77L,0x0D9F4A77L,0x0D9F4A77L,0x0D9F4A77L}, // p_780->g_192
        4L, // p_780->g_236
        247UL, // p_780->g_247
        0xD1L, // p_780->g_252
        0xC2B7C60AL, // p_780->g_255
        0x70F7D346L, // p_780->g_258
        (-1L), // p_780->g_262
        {{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[1],(void*)0,&p_780->g_192[3]}}}, // p_780->g_266
        &p_780->g_266[4][5][3], // p_780->g_265
        0x3D41AF20L, // p_780->g_270
        {{0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL},{0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL,0x2AL}}, // p_780->g_317
        0x4DL, // p_780->g_339
        {{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}},{{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]},{(void*)0,&p_780->g_192[3]}}}, // p_780->g_384
        &p_780->g_192[3], // p_780->g_385
        {{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0},{&p_780->g_385,&p_780->g_384[7][7][0],&p_780->g_385,(void*)0,&p_780->g_385,&p_780->g_385,&p_780->g_385,&p_780->g_385,(void*)0}}, // p_780->g_383
        (-3L), // p_780->g_392
        18446744073709551610UL, // p_780->g_514
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7628287A5DC66763L), 0x7628287A5DC66763L), // p_780->g_524
        (-1L), // p_780->g_534
        (VECTOR(int16_t, 16))(0x744CL, (VECTOR(int16_t, 4))(0x744CL, (VECTOR(int16_t, 2))(0x744CL, 1L), 1L), 1L, 0x744CL, 1L, (VECTOR(int16_t, 2))(0x744CL, 1L), (VECTOR(int16_t, 2))(0x744CL, 1L), 0x744CL, 1L, 0x744CL, 1L), // p_780->g_633
        1L, // p_780->g_642
        6UL, // p_780->g_644
        {{&p_780->g_317[1][6]}}, // p_780->g_667
        &p_780->g_667[0][0], // p_780->g_666
        (VECTOR(uint16_t, 4))(0x4A80L, (VECTOR(uint16_t, 2))(0x4A80L, 0UL), 0UL), // p_780->g_675
        4UL, // p_780->g_683
        (VECTOR(int32_t, 8))(0x45668767L, (VECTOR(int32_t, 4))(0x45668767L, (VECTOR(int32_t, 2))(0x45668767L, 0x01ABEC43L), 0x01ABEC43L), 0x01ABEC43L, 0x45668767L, 0x01ABEC43L), // p_780->g_697
        (VECTOR(int32_t, 16))(0x7AEEC747L, (VECTOR(int32_t, 4))(0x7AEEC747L, (VECTOR(int32_t, 2))(0x7AEEC747L, 0x28DFF974L), 0x28DFF974L), 0x28DFF974L, 0x7AEEC747L, 0x28DFF974L, (VECTOR(int32_t, 2))(0x7AEEC747L, 0x28DFF974L), (VECTOR(int32_t, 2))(0x7AEEC747L, 0x28DFF974L), 0x7AEEC747L, 0x28DFF974L, 0x7AEEC747L, 0x28DFF974L), // p_780->g_698
        (VECTOR(int32_t, 16))(0x446AAAEBL, (VECTOR(int32_t, 4))(0x446AAAEBL, (VECTOR(int32_t, 2))(0x446AAAEBL, 0x1A0BCC0FL), 0x1A0BCC0FL), 0x1A0BCC0FL, 0x446AAAEBL, 0x1A0BCC0FL, (VECTOR(int32_t, 2))(0x446AAAEBL, 0x1A0BCC0FL), (VECTOR(int32_t, 2))(0x446AAAEBL, 0x1A0BCC0FL), 0x446AAAEBL, 0x1A0BCC0FL, 0x446AAAEBL, 0x1A0BCC0FL), // p_780->g_700
        &p_780->g_644, // p_780->g_725
        &p_780->g_725, // p_780->g_724
        (VECTOR(int8_t, 8))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x46L), 0x46L), 0x46L, 0x73L, 0x46L), // p_780->g_731
        0x472E801A64BEBBE2L, // p_780->g_733
        {{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL},{0x3C370F3DL,0x3C370F3DL,0x48709603L,0xA0E02C87L,0UL}}, // p_780->g_734
        &p_780->g_236, // p_780->g_745
        {&p_780->g_252,&p_780->g_252,&p_780->g_252}, // p_780->g_753
        &p_780->g_753[0], // p_780->g_752
        (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L), // p_780->g_757
        (VECTOR(uint16_t, 4))(0x2707L, (VECTOR(uint16_t, 2))(0x2707L, 1UL), 1UL), // p_780->g_758
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x65E3L), 0x65E3L), 0x65E3L, 65530UL, 0x65E3L, (VECTOR(uint16_t, 2))(65530UL, 0x65E3L), (VECTOR(uint16_t, 2))(65530UL, 0x65E3L), 65530UL, 0x65E3L, 65530UL, 0x65E3L), // p_780->g_759
        (VECTOR(uint16_t, 4))(0x8CD9L, (VECTOR(uint16_t, 2))(0x8CD9L, 0x249DL), 0x249DL), // p_780->g_760
        (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0L), 0L), 0L, 0x64L, 0L), // p_780->g_767
        &p_780->g_385, // p_780->g_776
        &p_780->g_385, // p_780->g_779
        0, // p_780->v_collective
        sequence_input[get_global_id(0)], // p_780->global_0_offset
        sequence_input[get_global_id(1)], // p_780->global_1_offset
        sequence_input[get_global_id(2)], // p_780->global_2_offset
        sequence_input[get_local_id(0)], // p_780->local_0_offset
        sequence_input[get_local_id(1)], // p_780->local_1_offset
        sequence_input[get_local_id(2)], // p_780->local_2_offset
        sequence_input[get_group_id(0)], // p_780->group_0_offset
        sequence_input[get_group_id(1)], // p_780->group_1_offset
        sequence_input[get_group_id(2)], // p_780->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 10)), permutations[0][get_linear_local_id()])), // p_780->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_781 = c_782;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_780);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_780->g_192[i], "p_780->g_192[i]", print_hash_value);

    }
    transparent_crc(p_780->g_236, "p_780->g_236", print_hash_value);
    transparent_crc(p_780->g_247, "p_780->g_247", print_hash_value);
    transparent_crc(p_780->g_252, "p_780->g_252", print_hash_value);
    transparent_crc(p_780->g_255, "p_780->g_255", print_hash_value);
    transparent_crc(p_780->g_258, "p_780->g_258", print_hash_value);
    transparent_crc(p_780->g_262, "p_780->g_262", print_hash_value);
    transparent_crc(p_780->g_270, "p_780->g_270", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_780->g_317[i][j], "p_780->g_317[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_780->g_339, "p_780->g_339", print_hash_value);
    transparent_crc(p_780->g_392, "p_780->g_392", print_hash_value);
    transparent_crc(p_780->g_514, "p_780->g_514", print_hash_value);
    transparent_crc(p_780->g_524.x, "p_780->g_524.x", print_hash_value);
    transparent_crc(p_780->g_524.y, "p_780->g_524.y", print_hash_value);
    transparent_crc(p_780->g_524.z, "p_780->g_524.z", print_hash_value);
    transparent_crc(p_780->g_524.w, "p_780->g_524.w", print_hash_value);
    transparent_crc(p_780->g_534, "p_780->g_534", print_hash_value);
    transparent_crc(p_780->g_633.s0, "p_780->g_633.s0", print_hash_value);
    transparent_crc(p_780->g_633.s1, "p_780->g_633.s1", print_hash_value);
    transparent_crc(p_780->g_633.s2, "p_780->g_633.s2", print_hash_value);
    transparent_crc(p_780->g_633.s3, "p_780->g_633.s3", print_hash_value);
    transparent_crc(p_780->g_633.s4, "p_780->g_633.s4", print_hash_value);
    transparent_crc(p_780->g_633.s5, "p_780->g_633.s5", print_hash_value);
    transparent_crc(p_780->g_633.s6, "p_780->g_633.s6", print_hash_value);
    transparent_crc(p_780->g_633.s7, "p_780->g_633.s7", print_hash_value);
    transparent_crc(p_780->g_633.s8, "p_780->g_633.s8", print_hash_value);
    transparent_crc(p_780->g_633.s9, "p_780->g_633.s9", print_hash_value);
    transparent_crc(p_780->g_633.sa, "p_780->g_633.sa", print_hash_value);
    transparent_crc(p_780->g_633.sb, "p_780->g_633.sb", print_hash_value);
    transparent_crc(p_780->g_633.sc, "p_780->g_633.sc", print_hash_value);
    transparent_crc(p_780->g_633.sd, "p_780->g_633.sd", print_hash_value);
    transparent_crc(p_780->g_633.se, "p_780->g_633.se", print_hash_value);
    transparent_crc(p_780->g_633.sf, "p_780->g_633.sf", print_hash_value);
    transparent_crc(p_780->g_642, "p_780->g_642", print_hash_value);
    transparent_crc(p_780->g_644, "p_780->g_644", print_hash_value);
    transparent_crc(p_780->g_675.x, "p_780->g_675.x", print_hash_value);
    transparent_crc(p_780->g_675.y, "p_780->g_675.y", print_hash_value);
    transparent_crc(p_780->g_675.z, "p_780->g_675.z", print_hash_value);
    transparent_crc(p_780->g_675.w, "p_780->g_675.w", print_hash_value);
    transparent_crc(p_780->g_683, "p_780->g_683", print_hash_value);
    transparent_crc(p_780->g_697.s0, "p_780->g_697.s0", print_hash_value);
    transparent_crc(p_780->g_697.s1, "p_780->g_697.s1", print_hash_value);
    transparent_crc(p_780->g_697.s2, "p_780->g_697.s2", print_hash_value);
    transparent_crc(p_780->g_697.s3, "p_780->g_697.s3", print_hash_value);
    transparent_crc(p_780->g_697.s4, "p_780->g_697.s4", print_hash_value);
    transparent_crc(p_780->g_697.s5, "p_780->g_697.s5", print_hash_value);
    transparent_crc(p_780->g_697.s6, "p_780->g_697.s6", print_hash_value);
    transparent_crc(p_780->g_697.s7, "p_780->g_697.s7", print_hash_value);
    transparent_crc(p_780->g_698.s0, "p_780->g_698.s0", print_hash_value);
    transparent_crc(p_780->g_698.s1, "p_780->g_698.s1", print_hash_value);
    transparent_crc(p_780->g_698.s2, "p_780->g_698.s2", print_hash_value);
    transparent_crc(p_780->g_698.s3, "p_780->g_698.s3", print_hash_value);
    transparent_crc(p_780->g_698.s4, "p_780->g_698.s4", print_hash_value);
    transparent_crc(p_780->g_698.s5, "p_780->g_698.s5", print_hash_value);
    transparent_crc(p_780->g_698.s6, "p_780->g_698.s6", print_hash_value);
    transparent_crc(p_780->g_698.s7, "p_780->g_698.s7", print_hash_value);
    transparent_crc(p_780->g_698.s8, "p_780->g_698.s8", print_hash_value);
    transparent_crc(p_780->g_698.s9, "p_780->g_698.s9", print_hash_value);
    transparent_crc(p_780->g_698.sa, "p_780->g_698.sa", print_hash_value);
    transparent_crc(p_780->g_698.sb, "p_780->g_698.sb", print_hash_value);
    transparent_crc(p_780->g_698.sc, "p_780->g_698.sc", print_hash_value);
    transparent_crc(p_780->g_698.sd, "p_780->g_698.sd", print_hash_value);
    transparent_crc(p_780->g_698.se, "p_780->g_698.se", print_hash_value);
    transparent_crc(p_780->g_698.sf, "p_780->g_698.sf", print_hash_value);
    transparent_crc(p_780->g_700.s0, "p_780->g_700.s0", print_hash_value);
    transparent_crc(p_780->g_700.s1, "p_780->g_700.s1", print_hash_value);
    transparent_crc(p_780->g_700.s2, "p_780->g_700.s2", print_hash_value);
    transparent_crc(p_780->g_700.s3, "p_780->g_700.s3", print_hash_value);
    transparent_crc(p_780->g_700.s4, "p_780->g_700.s4", print_hash_value);
    transparent_crc(p_780->g_700.s5, "p_780->g_700.s5", print_hash_value);
    transparent_crc(p_780->g_700.s6, "p_780->g_700.s6", print_hash_value);
    transparent_crc(p_780->g_700.s7, "p_780->g_700.s7", print_hash_value);
    transparent_crc(p_780->g_700.s8, "p_780->g_700.s8", print_hash_value);
    transparent_crc(p_780->g_700.s9, "p_780->g_700.s9", print_hash_value);
    transparent_crc(p_780->g_700.sa, "p_780->g_700.sa", print_hash_value);
    transparent_crc(p_780->g_700.sb, "p_780->g_700.sb", print_hash_value);
    transparent_crc(p_780->g_700.sc, "p_780->g_700.sc", print_hash_value);
    transparent_crc(p_780->g_700.sd, "p_780->g_700.sd", print_hash_value);
    transparent_crc(p_780->g_700.se, "p_780->g_700.se", print_hash_value);
    transparent_crc(p_780->g_700.sf, "p_780->g_700.sf", print_hash_value);
    transparent_crc(p_780->g_731.s0, "p_780->g_731.s0", print_hash_value);
    transparent_crc(p_780->g_731.s1, "p_780->g_731.s1", print_hash_value);
    transparent_crc(p_780->g_731.s2, "p_780->g_731.s2", print_hash_value);
    transparent_crc(p_780->g_731.s3, "p_780->g_731.s3", print_hash_value);
    transparent_crc(p_780->g_731.s4, "p_780->g_731.s4", print_hash_value);
    transparent_crc(p_780->g_731.s5, "p_780->g_731.s5", print_hash_value);
    transparent_crc(p_780->g_731.s6, "p_780->g_731.s6", print_hash_value);
    transparent_crc(p_780->g_731.s7, "p_780->g_731.s7", print_hash_value);
    transparent_crc(p_780->g_733, "p_780->g_733", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_780->g_734[i][j], "p_780->g_734[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_780->g_757.s0, "p_780->g_757.s0", print_hash_value);
    transparent_crc(p_780->g_757.s1, "p_780->g_757.s1", print_hash_value);
    transparent_crc(p_780->g_757.s2, "p_780->g_757.s2", print_hash_value);
    transparent_crc(p_780->g_757.s3, "p_780->g_757.s3", print_hash_value);
    transparent_crc(p_780->g_757.s4, "p_780->g_757.s4", print_hash_value);
    transparent_crc(p_780->g_757.s5, "p_780->g_757.s5", print_hash_value);
    transparent_crc(p_780->g_757.s6, "p_780->g_757.s6", print_hash_value);
    transparent_crc(p_780->g_757.s7, "p_780->g_757.s7", print_hash_value);
    transparent_crc(p_780->g_758.x, "p_780->g_758.x", print_hash_value);
    transparent_crc(p_780->g_758.y, "p_780->g_758.y", print_hash_value);
    transparent_crc(p_780->g_758.z, "p_780->g_758.z", print_hash_value);
    transparent_crc(p_780->g_758.w, "p_780->g_758.w", print_hash_value);
    transparent_crc(p_780->g_759.s0, "p_780->g_759.s0", print_hash_value);
    transparent_crc(p_780->g_759.s1, "p_780->g_759.s1", print_hash_value);
    transparent_crc(p_780->g_759.s2, "p_780->g_759.s2", print_hash_value);
    transparent_crc(p_780->g_759.s3, "p_780->g_759.s3", print_hash_value);
    transparent_crc(p_780->g_759.s4, "p_780->g_759.s4", print_hash_value);
    transparent_crc(p_780->g_759.s5, "p_780->g_759.s5", print_hash_value);
    transparent_crc(p_780->g_759.s6, "p_780->g_759.s6", print_hash_value);
    transparent_crc(p_780->g_759.s7, "p_780->g_759.s7", print_hash_value);
    transparent_crc(p_780->g_759.s8, "p_780->g_759.s8", print_hash_value);
    transparent_crc(p_780->g_759.s9, "p_780->g_759.s9", print_hash_value);
    transparent_crc(p_780->g_759.sa, "p_780->g_759.sa", print_hash_value);
    transparent_crc(p_780->g_759.sb, "p_780->g_759.sb", print_hash_value);
    transparent_crc(p_780->g_759.sc, "p_780->g_759.sc", print_hash_value);
    transparent_crc(p_780->g_759.sd, "p_780->g_759.sd", print_hash_value);
    transparent_crc(p_780->g_759.se, "p_780->g_759.se", print_hash_value);
    transparent_crc(p_780->g_759.sf, "p_780->g_759.sf", print_hash_value);
    transparent_crc(p_780->g_760.x, "p_780->g_760.x", print_hash_value);
    transparent_crc(p_780->g_760.y, "p_780->g_760.y", print_hash_value);
    transparent_crc(p_780->g_760.z, "p_780->g_760.z", print_hash_value);
    transparent_crc(p_780->g_760.w, "p_780->g_760.w", print_hash_value);
    transparent_crc(p_780->g_767.s0, "p_780->g_767.s0", print_hash_value);
    transparent_crc(p_780->g_767.s1, "p_780->g_767.s1", print_hash_value);
    transparent_crc(p_780->g_767.s2, "p_780->g_767.s2", print_hash_value);
    transparent_crc(p_780->g_767.s3, "p_780->g_767.s3", print_hash_value);
    transparent_crc(p_780->g_767.s4, "p_780->g_767.s4", print_hash_value);
    transparent_crc(p_780->g_767.s5, "p_780->g_767.s5", print_hash_value);
    transparent_crc(p_780->g_767.s6, "p_780->g_767.s6", print_hash_value);
    transparent_crc(p_780->g_767.s7, "p_780->g_767.s7", print_hash_value);
    transparent_crc(p_780->v_collective, "p_780->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 85; i++)
            transparent_crc(p_780->g_special_values[i + 85 * get_linear_group_id()], "p_780->g_special_values[i + 85 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 85; i++)
            transparent_crc(p_780->l_special_values[i], "p_780->l_special_values[i]", print_hash_value);
    transparent_crc(p_780->l_comm_values[get_linear_local_id()], "p_780->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_780->g_comm_values[get_linear_group_id() * 10 + get_linear_local_id()], "p_780->g_comm_values[get_linear_group_id() * 10 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
