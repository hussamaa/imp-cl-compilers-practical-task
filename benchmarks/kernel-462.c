// --atomics 12 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,1,63 -l 19,1,7
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

__constant uint32_t permutations[10][133] = {
{95,64,11,12,23,19,118,113,30,86,131,55,65,27,22,0,38,44,16,99,13,79,127,129,62,106,42,20,124,93,3,63,4,84,59,40,28,116,6,92,77,60,98,53,21,34,105,87,31,126,125,130,68,36,5,1,103,101,49,104,66,102,33,90,83,9,7,14,58,74,26,76,91,78,39,32,50,121,128,2,111,54,94,24,109,8,107,82,25,15,71,81,51,114,43,117,37,48,45,47,56,67,29,97,119,57,72,89,85,46,112,69,122,110,75,41,120,115,80,35,18,70,88,73,132,100,52,96,61,108,123,17,10}, // permutation 0
{130,102,1,11,3,48,131,21,76,105,20,88,17,89,104,127,119,10,81,85,45,51,116,23,106,8,126,28,34,110,15,36,52,47,18,132,7,129,115,4,79,77,80,5,40,2,74,112,87,31,59,41,16,66,14,33,32,90,35,53,100,121,99,54,107,124,22,95,12,94,75,68,123,24,91,29,26,19,108,83,64,125,109,128,86,72,78,44,25,93,49,63,30,103,71,120,118,61,37,98,69,58,39,46,97,82,122,111,50,6,73,113,114,43,0,56,27,96,70,67,92,65,62,42,60,55,9,101,57,117,13,84,38}, // permutation 1
{62,42,84,100,70,5,31,128,80,102,71,50,7,92,17,0,18,93,43,38,94,37,96,25,114,40,48,76,24,77,117,58,121,75,39,73,88,15,103,9,33,86,21,66,63,32,108,22,45,53,115,124,116,67,111,65,51,57,78,79,30,107,81,126,98,36,4,101,97,49,13,56,28,122,10,131,113,54,20,12,52,85,105,110,59,60,26,129,29,119,64,87,68,6,35,109,91,83,90,46,95,3,14,19,11,41,72,125,2,120,44,127,106,69,47,55,89,104,1,82,132,61,23,34,99,27,8,118,130,16,74,123,112}, // permutation 2
{96,48,37,68,19,22,128,75,112,41,56,124,99,131,6,91,34,118,69,21,30,32,29,98,9,1,108,57,94,72,93,5,36,13,53,120,11,14,61,38,89,115,58,46,2,126,103,40,63,85,47,24,77,42,116,67,110,105,90,121,86,39,100,0,60,80,4,132,51,104,130,17,119,43,78,7,97,81,28,127,15,74,66,117,20,50,8,114,12,23,25,73,88,55,59,65,45,16,27,71,101,82,83,54,125,76,113,52,122,106,64,129,18,62,70,31,102,49,111,10,87,123,84,44,92,33,79,107,95,26,109,3,35}, // permutation 3
{100,85,93,60,84,80,23,107,36,30,13,88,114,98,29,20,0,2,118,102,46,131,76,11,99,89,86,103,67,66,34,123,108,116,130,106,129,78,92,64,82,10,113,15,1,121,42,75,4,33,58,47,39,8,17,110,62,53,40,41,57,27,91,132,56,79,19,71,70,128,26,16,51,95,96,45,94,31,44,81,6,127,77,28,24,111,69,14,21,83,65,22,117,9,25,104,74,61,5,32,97,119,124,101,73,115,35,68,122,126,63,3,90,109,48,59,112,72,120,37,105,54,43,50,38,125,18,52,12,7,49,87,55}, // permutation 4
{19,23,70,28,95,20,4,51,42,22,76,84,39,36,55,109,114,79,49,96,11,74,47,106,16,44,99,53,115,86,122,57,129,17,45,71,111,78,35,58,75,46,40,94,69,52,132,125,38,124,91,56,29,65,33,118,5,112,128,62,32,10,26,117,8,64,126,88,2,48,61,97,63,1,0,107,81,60,77,80,123,92,103,108,127,68,93,37,7,43,6,87,24,100,21,54,25,82,98,119,15,120,110,50,66,89,121,116,73,9,34,113,67,90,102,59,101,130,27,14,12,105,83,72,30,31,41,13,85,18,3,131,104}, // permutation 5
{10,33,27,119,57,95,83,71,93,103,4,59,19,38,65,120,8,53,106,34,51,125,24,35,81,112,75,85,78,13,94,31,128,54,63,55,101,84,130,47,129,97,21,60,107,88,108,22,25,110,118,12,14,36,20,102,123,132,7,43,124,122,49,115,113,86,77,74,41,56,52,2,48,62,16,68,91,116,46,30,66,100,111,117,15,105,82,28,98,23,67,3,17,6,1,126,26,109,96,37,131,11,92,73,45,44,32,61,87,50,64,114,70,104,0,42,90,80,76,121,18,5,89,99,58,127,69,29,79,9,72,40,39}, // permutation 6
{86,9,109,7,29,114,25,108,94,6,14,81,126,28,99,66,43,75,118,59,88,84,19,16,72,20,57,83,131,47,35,37,30,104,92,33,130,100,56,123,128,103,46,55,39,11,90,111,129,87,22,115,3,48,95,127,32,63,116,36,38,60,2,12,26,80,107,98,85,71,120,79,77,40,45,112,124,61,23,54,73,117,105,10,113,27,18,91,67,8,110,51,82,0,122,119,125,31,17,65,62,5,76,121,93,97,74,42,50,52,24,70,64,21,69,106,78,102,41,1,132,96,68,44,89,58,34,101,15,4,49,53,13}, // permutation 7
{6,48,56,22,91,37,3,88,90,39,130,43,63,31,95,67,49,71,33,36,46,83,44,8,114,58,14,119,38,52,123,92,65,16,0,109,124,113,129,62,104,74,35,105,19,11,18,69,5,60,23,55,12,29,61,64,107,24,32,121,89,111,98,82,86,4,120,45,7,20,59,106,131,132,78,47,41,103,75,34,87,70,25,99,66,1,125,110,108,10,94,126,50,80,54,84,57,51,115,21,81,40,26,17,53,96,101,77,42,72,100,97,102,122,9,79,2,73,13,116,93,117,27,30,118,85,127,28,68,128,15,76,112}, // permutation 8
{51,74,59,121,125,49,44,84,47,20,68,114,43,36,119,45,54,85,96,63,67,62,69,27,18,118,100,83,65,28,120,112,30,99,130,82,33,89,80,41,88,107,58,98,61,91,24,52,70,10,81,66,46,3,79,34,110,113,13,31,73,64,0,77,75,131,6,127,126,38,103,124,116,8,115,109,117,32,40,90,29,21,57,72,7,26,2,22,97,17,14,71,123,94,92,9,86,23,42,101,55,37,5,15,39,1,11,108,76,56,16,102,48,25,129,132,4,128,60,93,53,19,78,87,105,50,122,106,95,12,104,35,111} // permutation 9
};

// Seed: 863552472

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
};

union U1 {
   int32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   int8_t * f3;
};

struct S2 {
    int32_t g_3;
    int32_t g_6;
    int8_t g_16;
    union U1 g_32[7][7][5];
    VECTOR(int32_t, 8) g_42;
    volatile int32_t g_48;
    int32_t g_65;
    int32_t g_68;
    volatile int32_t g_71;
    volatile int32_t g_72;
    volatile int32_t g_73;
    int32_t g_74;
    volatile int32_t g_77;
    int32_t g_78[4];
    int32_t *g_92[8][5][1];
    int32_t ** volatile g_91;
    int8_t g_94;
    uint32_t g_96[8][7];
    uint64_t g_114;
    int32_t g_118;
    uint8_t g_154;
    VECTOR(int32_t, 8) g_165;
    int32_t g_180;
    int16_t g_202;
    VECTOR(uint16_t, 8) g_213;
    volatile VECTOR(int8_t, 16) g_301;
    VECTOR(int8_t, 2) g_304;
    VECTOR(int64_t, 4) g_322;
    VECTOR(int64_t, 16) g_323;
    VECTOR(int64_t, 4) g_325;
    volatile VECTOR(uint16_t, 8) g_336;
    volatile VECTOR(int64_t, 2) g_337;
    VECTOR(uint8_t, 16) g_339;
    volatile VECTOR(uint8_t, 2) g_340;
    volatile VECTOR(int64_t, 8) g_349;
    union U0 g_373[1][9][6];
    volatile VECTOR(int32_t, 8) g_376;
    int8_t *g_378;
    VECTOR(uint8_t, 4) g_411;
    volatile VECTOR(uint8_t, 16) g_419;
    int32_t g_468;
    VECTOR(uint8_t, 4) g_472;
    int32_t ** volatile g_549;
    uint64_t g_675;
    volatile VECTOR(uint64_t, 2) g_678;
    int32_t ** volatile g_688;
    volatile uint32_t g_700;
    int16_t g_707;
    VECTOR(int8_t, 4) g_736;
    volatile VECTOR(int32_t, 8) g_797;
    uint32_t *g_803;
    volatile uint16_t *g_819;
    volatile uint16_t * volatile * volatile g_818[4];
    union U1 *g_822;
    uint32_t g_830;
    int64_t *g_843;
    VECTOR(int64_t, 8) g_850;
    uint16_t g_864;
    union U1 ** volatile g_894;
    union U1 ** volatile g_895[9];
    int16_t g_899[6];
    volatile VECTOR(int32_t, 16) g_1032;
    volatile VECTOR(int32_t, 16) g_1108;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
union U0  func_1(struct S2 * p_1110);
int32_t * func_9(int8_t * p_10, int8_t  p_11, int64_t  p_12, int8_t  p_13, uint32_t  p_14, struct S2 * p_1110);
int64_t  func_18(uint64_t  p_19, uint64_t  p_20, int32_t * p_21, struct S2 * p_1110);
union U0  func_29(int32_t * p_30, union U1  p_31, struct S2 * p_1110);
int32_t * func_33(int64_t  p_34, int64_t  p_35, int32_t * p_36, int32_t ** p_37, struct S2 * p_1110);
int32_t * func_39(uint16_t  p_40, uint64_t  p_41, struct S2 * p_1110);
int32_t  func_44(uint8_t  p_45, uint32_t  p_46, int16_t  p_47, struct S2 * p_1110);
int32_t * func_52(int64_t  p_53, int8_t * p_54, struct S2 * p_1110);
int64_t  func_55(uint32_t  p_56, int16_t  p_57, int64_t  p_58, uint64_t  p_59, int32_t  p_60, struct S2 * p_1110);
uint32_t  func_61(int32_t ** p_62, struct S2 * p_1110);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1110->l_comm_values p_1110->g_3 p_1110->g_1108
 * writes: p_1110->g_3 p_1110->g_6
 */
union U0  func_1(struct S2 * p_1110)
{ /* block id: 4 */
    int32_t *l_2 = &p_1110->g_3;
    int8_t *l_15 = &p_1110->g_16;
    int64_t l_1045 = (-1L);
    uint16_t *l_1061 = &p_1110->g_864;
    union U0 l_1109 = {1L};
    (*l_2) = p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))];
    for (p_1110->g_3 = 0; (p_1110->g_3 < 8); ++p_1110->g_3)
    { /* block id: 8 */
        int32_t *l_22 = (void*)0;
        int32_t l_1034[9][2][10] = {{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}},{{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L},{8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L,0x22EDE74FL,8L,8L}}};
        uint32_t l_1050[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        uint16_t *l_1051 = &p_1110->g_864;
        int16_t l_1062 = 0x31D8L;
        int i, j, k;
        for (p_1110->g_6 = 0; (p_1110->g_6 > 25); p_1110->g_6 = safe_add_func_int16_t_s_s(p_1110->g_6, 5))
        { /* block id: 11 */
            int32_t **l_17 = &l_2;
            (1 + 1);
        }
    }
    (*l_2) |= ((VECTOR(int32_t, 4))(p_1110->g_1108.sb25a)).z;
    return l_1109;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_6 p_1110->g_32 p_1110->g_comm_values p_1110->g_42 p_1110->g_48 p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_91 p_1110->g_96 p_1110->g_71 p_1110->g_114 p_1110->g_94 p_1110->g_154 p_1110->g_165 p_1110->g_92 p_1110->g_3 p_1110->g_73 p_1110->g_213 p_1110->g_118 p_1110->g_202 p_1110->g_301 p_1110->g_304 p_1110->g_322 p_1110->g_323 p_1110->g_325 p_1110->g_336 p_1110->g_337 p_1110->g_339 p_1110->g_340 p_1110->g_349 p_1110->g_376 p_1110->g_411 p_1110->g_419 p_1110->l_comm_values p_1110->g_180 p_1110->g_373.f0 p_1110->g_468 p_1110->g_72 p_1110->g_549 p_1110->g_675 p_1110->g_678 p_1110->g_688 p_1110->g_700 p_1110->g_707 p_1110->g_373 p_1110->g_736 p_1110->g_818 p_1110->g_830 p_1110->g_843 p_1110->g_803 p_1110->g_472
 * writes: p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_94 p_1110->g_96 p_1110->l_comm_values p_1110->g_114 p_1110->g_118 p_1110->g_154 p_1110->g_32 p_1110->g_180 p_1110->g_202 p_1110->g_213 p_1110->g_323 p_1110->g_92 p_1110->g_378 p_1110->g_675 p_1110->g_411 p_1110->g_707 p_1110->g_468 p_1110->g_373.f0 p_1110->g_803 p_1110->g_822 p_1110->g_322 p_1110->g_899
 */
int32_t * func_9(int8_t * p_10, int8_t  p_11, int64_t  p_12, int8_t  p_13, uint32_t  p_14, struct S2 * p_1110)
{ /* block id: 16 */
    int32_t *l_26 = (void*)0;
    int32_t **l_25 = &l_26;
    int32_t **l_27 = &l_26;
    VECTOR(uint64_t, 4) l_28 = (VECTOR(uint64_t, 4))(0xEC151D1A932DA3BBL, (VECTOR(uint64_t, 2))(0xEC151D1A932DA3BBL, 0x4416DA84B505D01CL), 0x4416DA84B505D01CL);
    uint64_t *l_952 = (void*)0;
    uint64_t *l_953 = &p_1110->g_114;
    uint32_t *l_954 = &p_1110->g_96[4][3];
    VECTOR(int8_t, 4) l_1024 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x31L), 0x31L);
    uint16_t l_1025 = 0xD245L;
    int32_t *l_1026 = (void*)0;
    int i;
    if ((func_18((l_25 != l_27), ((0x5C7E4DDBL >= p_1110->g_6) && ((*l_954) = ((p_1110->g_6 && ((((VECTOR(uint64_t, 2))(l_28.yx)).lo , (func_29((*l_25), p_1110->g_32[2][0][4], p_1110) , (safe_lshift_func_uint8_t_u_u((((*l_953) &= (p_1110->g_301.s6 , p_14)) && p_11), 4)))) , p_13)) && 2UL))), (*l_27), p_1110) ^ p_1110->g_472.z))
    { /* block id: 434 */
        if ((atomic_inc(&p_1110->l_atomic_input[4]) == 5))
        { /* block id: 436 */
            int32_t l_955 = 0x42C885DBL;
            uint64_t l_962 = 0UL;
            uint32_t l_963 = 0xEC327082L;
            for (l_955 = 0; (l_955 == (-22)); --l_955)
            { /* block id: 439 */
                uint8_t l_958 = 0xA7L;
                uint16_t l_959 = 9UL;
                uint64_t l_960 = 0xB5D439437C88A017L;
                int32_t l_961 = 0x1E7F93E5L;
                l_961 = (l_960 = ((VECTOR(int32_t, 4))(((l_959 = (l_958 = ((VECTOR(uint16_t, 2))(0x8EECL, 9UL)).hi)) , ((VECTOR(int32_t, 2))((-1L), (-3L))).even), 1L, 0x7FE2B121L, 0x37FE2210L)).x);
            }
            l_963 &= l_962;
            for (l_955 = (-25); (l_955 <= 8); ++l_955)
            { /* block id: 448 */
                int32_t l_966 = (-5L);
                uint64_t l_967 = 0xED1B3CD0229EE8E2L;
                uint16_t l_970 = 9UL;
                --l_967;
                --l_970;
                for (l_970 = 0; (l_970 != 3); l_970 = safe_add_func_int8_t_s_s(l_970, 1))
                { /* block id: 453 */
                    union U1 l_975[1] = {{-1L}};
                    union U1 l_976 = {0x58C5C166L};
                    uint16_t l_977 = 0xF5F8L;
                    uint8_t l_978 = 0x71L;
                    uint16_t l_999 = 0x81F6L;
                    int8_t l_1000[1][8][5] = {{{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL},{0x13L,0x13L,0x4BL,2L,0x2CL}}};
                    int64_t l_1010 = 0x112A98470FAC3A85L;
                    uint64_t l_1011 = 0x0D9067E1A7DDE7ECL;
                    int i, j, k;
                    if ((l_978 &= ((l_976 = l_975[0]) , l_977)))
                    { /* block id: 456 */
                        int32_t *l_979 = (void*)0;
                        int32_t l_981 = 0x3B6AD35FL;
                        int32_t *l_980 = &l_981;
                        uint32_t l_982 = 0xA99E39E2L;
                        uint8_t l_983 = 0x87L;
                        l_980 = (l_979 = (void*)0);
                        l_983 &= l_982;
                    }
                    else
                    { /* block id: 460 */
                        uint8_t l_984 = 247UL;
                        uint8_t l_985 = 0x3AL;
                        int64_t l_986[2];
                        uint16_t l_987 = 0x4EBFL;
                        uint32_t l_988 = 8UL;
                        uint8_t l_989 = 0x0AL;
                        int8_t l_990[6][5][7] = {{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}},{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}},{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}},{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}},{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}},{{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L},{0x49L,0L,0L,0x13L,0x09L,0x33L,0L}}};
                        uint8_t l_991 = 0xAAL;
                        int64_t l_992 = 0x5244EFFD9C0797C1L;
                        int8_t l_993 = (-4L);
                        int64_t **l_994 = (void*)0;
                        int64_t *l_996 = &l_986[0];
                        int64_t **l_995 = &l_996;
                        int64_t l_997 = 1L;
                        int32_t l_998 = 0x078CAC5DL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_986[i] = (-5L);
                        l_986[0] = (l_984 , l_985);
                        l_993 &= (l_992 &= (l_991 = (l_990[4][4][4] ^= (l_989 = (l_988 = l_987)))));
                        l_995 = l_994;
                        l_998 = l_997;
                    }
                    l_1000[0][0][4] |= l_999;
                    for (l_978 = 0; (l_978 < 19); l_978++)
                    { /* block id: 474 */
                        uint16_t l_1003 = 0x06B3L;
                        VECTOR(int16_t, 4) l_1006 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x70B6L), 0x70B6L);
                        uint8_t l_1007 = 9UL;
                        int i;
                        l_1003++;
                        l_1007--;
                    }
                    l_1011 = l_1010;
                }
            }
            unsigned int result = 0;
            result += l_955;
            result += l_962;
            result += l_963;
            atomic_add(&p_1110->l_special_values[4], result);
        }
        else
        { /* block id: 481 */
            (1 + 1);
        }
    }
    else
    { /* block id: 484 */
        uint32_t l_1012 = 0x33BC2B51L;
        int32_t *l_1013 = &p_1110->g_78[1];
        int32_t l_1014 = 0x1683190BL;
        int16_t *l_1021 = &p_1110->g_899[1];
        l_1014 ^= ((*l_1013) = l_1012);
        (*l_25) = ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((p_14 <= (-5L)), ((p_13 || 0x8C53E47BL) == (safe_lshift_func_int16_t_s_s(((*l_1021) = 0x5F43L), ((*l_1013) && ((*l_1013) = (safe_mul_func_int8_t_s_s((1UL | (*l_1013)), ((((((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1024.yzzx)).odd)), 0x33L, 0x67L, ((VECTOR(int8_t, 4))(0x12L)), 0L, 1L, l_1025, 0L, 0x52L, 0x1BL, (-1L))).s0 , 0x47DEL) > (*l_1013)) && p_11) & p_14)))))))))), 4)) , (void*)0);
        return l_1026;
    }
    return &p_1110->g_65;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_18(uint64_t  p_19, uint64_t  p_20, int32_t * p_21, struct S2 * p_1110)
{ /* block id: 13 */
    VECTOR(int32_t, 4) l_23 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x08380095L), 0x08380095L);
    uint64_t l_24 = 0xE26B5CFDA6C2E3A4L;
    int i;
    l_24 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_23.yzxywxxxzwyywxzw)))).sa;
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_comm_values p_1110->g_42 p_1110->g_48 p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_91 p_1110->g_96 p_1110->g_6 p_1110->g_71 p_1110->g_114 p_1110->g_94 p_1110->g_154 p_1110->g_165 p_1110->g_32 p_1110->g_92 p_1110->g_3 p_1110->g_73 p_1110->g_213 p_1110->g_118 p_1110->g_202 p_1110->g_301 p_1110->g_304 p_1110->g_322 p_1110->g_323 p_1110->g_325 p_1110->g_336 p_1110->g_337 p_1110->g_339 p_1110->g_340 p_1110->g_349 p_1110->g_376 p_1110->g_411 p_1110->g_419 p_1110->l_comm_values p_1110->g_180 p_1110->g_373.f0 p_1110->g_468 p_1110->g_72 p_1110->g_549 p_1110->g_675 p_1110->g_678 p_1110->g_688 p_1110->g_700 p_1110->g_707 p_1110->g_373 p_1110->g_736 p_1110->g_818 p_1110->g_830 p_1110->g_843 p_1110->g_803
 * writes: p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_94 p_1110->g_96 p_1110->l_comm_values p_1110->g_114 p_1110->g_118 p_1110->g_154 p_1110->g_32 p_1110->g_180 p_1110->g_202 p_1110->g_213 p_1110->g_323 p_1110->g_92 p_1110->g_378 p_1110->g_675 p_1110->g_411 p_1110->g_707 p_1110->g_468 p_1110->g_373.f0 p_1110->g_803 p_1110->g_822 p_1110->g_322 p_1110->g_899
 */
union U0  func_29(int32_t * p_30, union U1  p_31, struct S2 * p_1110)
{ /* block id: 17 */
    uint32_t l_38[2][10][7] = {{{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL}},{{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL},{0x4CEB0392L,0x4CEB0392L,4294967295UL,0xF402E839L,4294967295UL,0x47E08A84L,1UL}}};
    VECTOR(int32_t, 8) l_43 = (VECTOR(int32_t, 8))(0x5AE56B76L, (VECTOR(int32_t, 4))(0x5AE56B76L, (VECTOR(int32_t, 2))(0x5AE56B76L, 0x746A6ECCL), 0x746A6ECCL), 0x746A6ECCL, 0x5AE56B76L, 0x746A6ECCL);
    int8_t *l_508 = (void*)0;
    int32_t **l_681 = (void*)0;
    int32_t *l_682[6];
    int32_t **l_683 = (void*)0;
    int32_t **l_684[4];
    int32_t *l_685 = (void*)0;
    uint32_t *l_686 = &p_1110->g_96[0][2];
    int8_t *l_764 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_682[i] = &p_1110->g_65;
    for (i = 0; i < 4; i++)
        l_684[i] = &p_1110->g_92[5][2][0];
    (*p_1110->g_688) = func_33(l_38[0][4][5], p_1110->g_comm_values[p_1110->tid], func_39(((((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(p_1110->g_42.s42000075)).s46, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(l_43.s52)).xxxxyyyyxxyyxyxy, (int32_t)(((p_1110->g_42.s3 < (func_44(l_43.s0, ((*l_686) = (p_1110->g_48 && (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint8_t_u(func_18(func_18(p_31.f0, p_1110->g_42.s4, (l_685 = (l_682[0] = func_52(func_55(func_61(&p_30, p_1110), p_31.f0, p_1110->g_42.s6, l_38[0][5][5], l_43.s3, p_1110), l_508, p_1110))), p_1110), p_1110->g_373[0][2][0].f0, &p_1110->g_3, p_1110))) & p_31.f0), 1)))), p_1110->g_322.w, p_1110) | p_31.f0)) , (void*)0) == &p_1110->g_6)))).s86)), ((VECTOR(int32_t, 2))(0x6353A9D5L))))).lo , p_31.f0) || (-10L)), p_31.f0, p_1110), l_684[3], p_1110);
    for (p_1110->g_68 = (-16); (p_1110->g_68 != 28); p_1110->g_68 = safe_add_func_uint8_t_u_u(p_1110->g_68, 4))
    { /* block id: 320 */
        int32_t l_774 = 0x3617D1D5L;
        int32_t l_791 = 0x23ED93E2L;
        uint32_t l_798 = 0x9B138B5BL;
        int32_t *l_805 = &p_1110->g_78[1];
        int32_t l_831 = 0x528174F4L;
        int32_t l_866 = 0x6A6DC8EDL;
        uint64_t *l_881 = &p_1110->g_114;
        int16_t *l_885 = &p_1110->g_707;
        int32_t l_892 = 0x7F776FF2L;
        union U1 *l_893 = &p_1110->g_32[1][6][3];
        union U1 **l_896 = &l_893;
        for (p_1110->g_114 = 0; (p_1110->g_114 != 15); ++p_1110->g_114)
        { /* block id: 323 */
            int8_t **l_763[5];
            int32_t l_769 = 0L;
            int32_t *l_772 = (void*)0;
            int32_t *l_773[5];
            int i;
            for (i = 0; i < 5; i++)
                l_763[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_773[i] = &p_1110->g_118;
            l_774 |= ((18446744073709551606UL >= ((p_31.f0 | 0x2414L) >= p_31.f0)) | ((safe_lshift_func_uint8_t_u_s(p_31.f0, 2)) < ((p_1110->g_468 ^= (((l_508 = &p_1110->g_16) == l_764) , (safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_1110->local_2_offset, get_local_id(2), 10), l_769)) | (safe_rshift_func_int16_t_s_s(p_31.f0, 11))), p_1110->g_42.s4)))) , 0xBADA2AC0L)));
            if (p_31.f0)
                break;
            if (l_774)
                continue;
        }
        for (p_1110->g_118 = 29; (p_1110->g_118 < (-27)); --p_1110->g_118)
        { /* block id: 332 */
            uint64_t *l_785 = (void*)0;
            uint64_t *l_786 = &p_1110->g_114;
            int32_t l_789 = (-10L);
            VECTOR(int8_t, 8) l_790 = (VECTOR(int8_t, 8))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x1BL), 0x1BL), 0x1BL, 0x71L, 0x1BL);
            int16_t *l_792 = &p_1110->g_373[0][2][0].f0;
            int32_t *l_801 = &p_1110->g_180;
            uint8_t l_865 = 0x81L;
            int i;
            if ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(0x0BL, 6)) < (-1L)), FAKE_DIVERGE(p_1110->global_2_offset, get_global_id(2), 10))))), ((((*l_786) = (~(p_31 , (p_1110->g_71 | p_31.f0)))) , ((safe_lshift_func_uint16_t_u_s(p_31.f0, ((l_789 && p_1110->g_42.s4) , ((*l_792) = (((VECTOR(int8_t, 8))(l_790.s41276175)).s3 && ((((l_791 = (!p_31.f0)) > l_774) >= l_790.s1) ^ p_31.f0)))))) != p_31.f0)) && p_1110->g_165.s2))))
            { /* block id: 336 */
                uint8_t l_793 = 0UL;
                uint16_t l_796 = 8UL;
                l_793 = 0x2CFE2679L;
                for (p_1110->g_468 = 11; (p_1110->g_468 >= 11); ++p_1110->g_468)
                { /* block id: 340 */
                    l_791 = l_793;
                    l_789 = l_796;
                    l_798 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1110->g_797.s1033)).odd)).even;
                }
            }
            else
            { /* block id: 345 */
                uint32_t **l_802[1][8] = {{&l_686,&l_686,&l_686,&l_686,&l_686,&l_686,&l_686,&l_686}};
                int32_t l_804 = 5L;
                int i, j;
                l_804 |= ((safe_sub_func_int16_t_s_s(((*l_792) |= ((void*)0 == &p_1110->g_154)), (l_801 != p_30))) && ((p_1110->g_803 = &p_1110->g_96[6][1]) != &l_798));
            }
            (*p_1110->g_549) = (l_805 = p_30);
            for (l_791 = 0; (l_791 <= (-2)); l_791--)
            { /* block id: 354 */
                uint64_t l_832 = 0x32D08177303FDB52L;
                int64_t *l_851 = (void*)0;
                int64_t *l_852 = (void*)0;
                int64_t *l_853 = (void*)0;
                int64_t *l_854 = (void*)0;
                uint16_t *l_863[1];
                VECTOR(int32_t, 16) l_891 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x6DEDD6D8L), 0x6DEDD6D8L), 0x6DEDD6D8L, (-4L), 0x6DEDD6D8L, (VECTOR(int32_t, 2))((-4L), 0x6DEDD6D8L), (VECTOR(int32_t, 2))((-4L), 0x6DEDD6D8L), (-4L), 0x6DEDD6D8L, (-4L), 0x6DEDD6D8L);
                int i;
                for (i = 0; i < 1; i++)
                    l_863[i] = &p_1110->g_864;
                for (p_1110->g_114 = (-10); (p_1110->g_114 > 29); p_1110->g_114++)
                { /* block id: 357 */
                    uint16_t l_825 = 0x173EL;
                    uint16_t *l_829[10];
                    int8_t *l_845 = (void*)0;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_829[i] = &l_825;
                    for (p_1110->g_180 = 29; (p_1110->g_180 == (-9)); --p_1110->g_180)
                    { /* block id: 360 */
                        union U1 *l_820 = (void*)0;
                        union U1 **l_821[2][10][10] = {{{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820}},{{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820},{&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820,&l_820}}};
                        int8_t *l_826 = (void*)0;
                        int8_t *l_827 = (void*)0;
                        int8_t *l_828[9] = {&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94,&p_1110->g_94};
                        int32_t l_839 = (-5L);
                        int32_t l_840 = 0x400DFFC6L;
                        int64_t *l_844[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_844[i] = (void*)0;
                        l_831 = ((p_1110->g_65 == (safe_div_func_int16_t_s_s(((l_792 == (l_829[0] = (((-7L) | (safe_lshift_func_int8_t_s_s((l_789 = (safe_div_func_uint8_t_u_u((((1L ^ ((((p_1110->g_818[2] == &p_1110->g_819) | ((l_820 != (p_1110->g_822 = &p_31)) >= ((safe_mul_func_uint8_t_u_u((((((((-1L) ^ p_31.f0) || l_825) && l_791) != p_1110->g_154) == p_1110->g_675) , GROUP_DIVERGE(2, 1)), (-4L))) && l_790.s2))) , p_31.f0) || 0x3EAD9283FFE677E7L)) <= p_1110->g_411.y) ^ p_31.f0), l_825))), 6))) , l_792))) , 0x5F62L), (-4L)))) , p_1110->g_830);
                        l_832 = l_789;
                        l_840 ^= (!((p_31.f0 || (safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(p_31.f0, ((*l_686)--))), l_839))) >= ((void*)0 == &p_1110->g_819)));
                        (*p_1110->g_688) = func_52((safe_sub_func_uint32_t_u_u(0UL, (p_1110->g_843 != l_844[0]))), l_845, p_1110);
                    }
                    return p_1110->g_373[0][2][0];
                }
                l_866 = (((((*p_1110->g_803) = 0x0FF7EFBBL) & (l_832 >= p_1110->g_678.x)) && ((safe_sub_func_int64_t_s_s(((p_1110->g_322.x = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1110->g_850.s66)).xxxy)).x) >= (safe_add_func_uint16_t_u_u((l_865 &= (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(0x44L, (l_786 != p_1110->g_843))) && (p_1110->g_373[0][2][4] , p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))])), ((safe_div_func_int16_t_s_s((l_786 == l_854), p_1110->g_213.s6)) , l_789)))), p_31.f0))), p_31.f0)) > 0x630DBAF6C31F60C0L)) , l_832);
                for (p_1110->g_94 = 12; (p_1110->g_94 != 23); p_1110->g_94++)
                { /* block id: 378 */
                    for (p_1110->g_16 = (-16); (p_1110->g_16 != (-28)); p_1110->g_16--)
                    { /* block id: 381 */
                        int16_t **l_890 = &l_792;
                        p_30 = ((p_1110->g_843 == p_1110->g_843) , (void*)0);
                        l_891.se = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((*l_786) |= (safe_div_func_int64_t_s_s((p_1110->g_78[3] ^ (~(safe_add_func_int32_t_s_s(0L, (l_785 == l_881))))), (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(1UL, 247UL, 0xC4L, ((VECTOR(uint8_t, 2))(0xA3L, 0x88L)), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(251UL, 0x13L, 0xCAL, 0x8DL)), (uint8_t)(safe_sub_func_int64_t_s_s(((p_31.f0 || ((safe_unary_minus_func_int8_t_s(((l_885 == ((*l_890) = (((((safe_rshift_func_uint8_t_u_u(((p_1110->g_376.s2 == ((safe_mod_func_uint8_t_u_u(p_31.f0, FAKE_DIVERGE(p_1110->local_1_offset, get_local_id(1), 10))) & (((*l_885) &= p_1110->g_118) || 0x39E8L))) & 0x1E60L), 2)) || p_31.f0) > p_31.f0) > 0x5ADDC491L) , l_885))) <= p_1110->g_304.x))) < p_1110->g_96[2][2])) , p_1110->g_304.y), 0x340885A65EA6BAC2L))))), ((VECTOR(uint8_t, 4))(0x0BL)), 255UL, 1UL, 0xFDL)).lo)).s4 , p_31.f0)))), p_31.f0)), 2)), p_31.f0));
                    }
                }
            }
        }
        if (l_892)
            continue;
        (*l_896) = l_893;
    }
    p_1110->g_899[0] = (p_31.f0 ^ (safe_rshift_func_uint16_t_u_u(p_31.f0, p_31.f0)));
    if ((atomic_inc(&p_1110->l_atomic_input[11]) == 6))
    { /* block id: 396 */
        uint8_t l_900 = 0x2DL;
        VECTOR(int16_t, 2) l_901 = (VECTOR(int16_t, 2))(0x53D6L, 0x778CL);
        uint8_t l_947[1];
        int16_t l_948 = 0x17EFL;
        int16_t l_949 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_947[i] = 0x7AL;
        l_900 = 0x599BFE46L;
        if (l_901.x)
        { /* block id: 398 */
            uint64_t l_904 = 1UL;
            uint64_t *l_903 = &l_904;
            uint64_t **l_902 = &l_903;
            l_902 = l_902;
            for (l_904 = 6; (l_904 != 23); ++l_904)
            { /* block id: 402 */
                int32_t l_908 = (-5L);
                int32_t *l_907[10][8][3] = {{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}},{{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908},{&l_908,&l_908,&l_908}}};
                union U0 l_909[9] = {{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL},{0x4E0DL}};
                int32_t l_910 = (-1L);
                int16_t l_911 = 0x61FEL;
                VECTOR(int32_t, 4) l_923 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x25F4C632L), 0x25F4C632L);
                VECTOR(int32_t, 8) l_924 = (VECTOR(int32_t, 8))(0x71A14914L, (VECTOR(int32_t, 4))(0x71A14914L, (VECTOR(int32_t, 2))(0x71A14914L, (-2L)), (-2L)), (-2L), 0x71A14914L, (-2L));
                int16_t l_925 = 0x4F51L;
                int16_t l_926 = (-4L);
                uint32_t l_927 = 3UL;
                VECTOR(uint32_t, 16) l_928 = (VECTOR(uint32_t, 16))(0x65CD2042L, (VECTOR(uint32_t, 4))(0x65CD2042L, (VECTOR(uint32_t, 2))(0x65CD2042L, 0x06EC6CE9L), 0x06EC6CE9L), 0x06EC6CE9L, 0x65CD2042L, 0x06EC6CE9L, (VECTOR(uint32_t, 2))(0x65CD2042L, 0x06EC6CE9L), (VECTOR(uint32_t, 2))(0x65CD2042L, 0x06EC6CE9L), 0x65CD2042L, 0x06EC6CE9L, 0x65CD2042L, 0x06EC6CE9L);
                uint64_t l_929 = 18446744073709551614UL;
                VECTOR(int32_t, 2) l_930 = (VECTOR(int32_t, 2))(0x277EFA1CL, 0x2362B5DEL);
                int32_t l_931[1];
                int32_t l_932 = 0x54994B98L;
                VECTOR(int32_t, 2) l_933 = (VECTOR(int32_t, 2))(0x1CF1995CL, 0x3138517BL);
                VECTOR(int32_t, 16) l_934 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                VECTOR(int32_t, 2) l_935 = (VECTOR(int32_t, 2))(0x03887B70L, 6L);
                VECTOR(int32_t, 16) l_936 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int32_t, 2))(0L, 2L), (VECTOR(int32_t, 2))(0L, 2L), 0L, 2L, 0L, 2L);
                uint16_t l_937 = 3UL;
                int32_t l_938 = 0x2D60F69FL;
                uint32_t l_939 = 8UL;
                uint16_t l_940 = 0UL;
                int16_t l_941 = 0x05ECL;
                VECTOR(uint64_t, 2) l_942 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551609UL);
                int32_t l_943 = 2L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_931[i] = 0x1C837D0BL;
                l_907[6][1][1] = (void*)0;
                l_911 = (l_909[1] , l_910);
                for (l_908 = 5; (l_908 < (-14)); l_908 = safe_sub_func_int64_t_s_s(l_908, 6))
                { /* block id: 407 */
                    int16_t l_914[1];
                    int32_t l_916 = 1L;
                    int32_t *l_915 = &l_916;
                    uint64_t l_917[6][3] = {{5UL,0UL,0UL},{5UL,0UL,0UL},{5UL,0UL,0UL},{5UL,0UL,0UL},{5UL,0UL,0UL},{5UL,0UL,0UL}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_914[i] = 0x69EBL;
                    l_907[6][1][1] = (l_914[0] , l_915);
                    if (l_917[5][1])
                    { /* block id: 409 */
                        l_915 = (void*)0;
                    }
                    else
                    { /* block id: 411 */
                        int32_t l_919 = (-1L);
                        int32_t *l_918 = &l_919;
                        uint64_t *l_921[2];
                        uint64_t **l_920 = &l_921[1];
                        uint64_t **l_922 = &l_921[1];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_921[i] = (void*)0;
                        l_918 = (void*)0;
                        l_922 = (l_920 = (l_902 = l_920));
                    }
                }
                l_943 = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 8L)).lo, ((VECTOR(int32_t, 2))(l_923.xz)), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_924.s1041340552271205)).s1b, ((VECTOR(int32_t, 16))((-7L), (-1L), (((l_925 &= (l_900 = FAKE_DIVERGE(p_1110->local_2_offset, get_local_id(2), 10))) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_926, l_927, 0x71A18595L, ((VECTOR(int32_t, 4))(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x9F8890FFL, 0x101E3364L)), 0x98495FF6L, 0x6F65B104L, 0xDA125EF5L, 0x9B967345L, ((VECTOR(uint32_t, 4))(l_928.sb666)), 1UL, 0UL, 1UL, 0x3AB21D30L, 9UL, 0x135E6120L)).s5 , ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(0x3D196B00L, 0UL, 4294967286UL, 4294967295UL)), FAKE_DIVERGE(p_1110->local_0_offset, get_local_id(0), 10), 0x46D24B1CL, 8UL))))).s5) , l_929), ((VECTOR(int32_t, 8))(l_930.yxyyyxyx)).s7, (-1L), 0x6F9E99F6L)), 0x11D95710L)).lo)).w) , ((VECTOR(int32_t, 16))(l_931[0], (-5L), (-6L), 0x502D0AFCL, (l_932 = 0x6AB12226L), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_933.xy)).xxyy, (int32_t)((VECTOR(int32_t, 8))(0x4A57AD55L, 0L, 0x03B04BFFL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_934.sec109180f041ff0b)).hi, ((VECTOR(int32_t, 16))(l_935.yxxxxyxyyxyyyyxy)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1C968132L, 0x188B946CL)).yxxyxyxy)).s1247001275013666)))).s50aa)).wzwwyyyw))).lo)), 0L)).s1))).lo)).xxyxyyyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_936.s571f)), (l_937 , l_938), (-1L), ((VECTOR(int32_t, 4))(0x7CEC7D2FL)), 1L, 0x68E954B2L, ((VECTOR(int32_t, 2))(0L)), 2L, 0x36C682A7L)).odd))).s1, l_939, ((VECTOR(int32_t, 2))(0x522C8E63L)), ((VECTOR(int32_t, 2))(0x51264719L)), 0x794473F8L, 0x5956A38AL, l_940, 0x4212CD17L, 0x6CAB9D35L)).sc), (-7L), l_941, 8L, 1L, 0x1B2AD553L, 0x5BC0A7D7L, l_942.x, ((VECTOR(int32_t, 4))((-7L))), 0x7F4B8B5DL, 0x19C8AE7BL)).sc1))).yxyy, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x29F32614L))))), 0x1314CEF1L)).odd, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x7F510519L))))).w;
            }
        }
        else
        { /* block id: 423 */
            union U0 l_944 = {0L};
            uint64_t l_945 = 0x916AC00D206D550DL;
            uint32_t l_946 = 4294967291UL;
            l_946 = (l_944 , (l_945 = ((VECTOR(int32_t, 4))(0x351F60DDL, ((VECTOR(int32_t, 2))(0x34D26BA2L, 0x73F307A6L)), 0x71A87FA7L)).x));
        }
        l_949 = (l_947[0] , l_948);
        unsigned int result = 0;
        result += l_900;
        result += l_901.y;
        result += l_901.x;
        int l_947_i0;
        for (l_947_i0 = 0; l_947_i0 < 1; l_947_i0++) {
            result += l_947[l_947_i0];
        }
        result += l_948;
        result += l_949;
        atomic_add(&p_1110->l_special_values[11], result);
    }
    else
    { /* block id: 428 */
        (1 + 1);
    }
    return p_1110->g_373[0][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_707 p_1110->g_65 p_1110->g_675 p_1110->g_373 p_1110->g_736 p_1110->g_322 p_1110->l_comm_values p_1110->g_202
 * writes: p_1110->g_707 p_1110->g_65 p_1110->g_675
 */
int32_t * func_33(int64_t  p_34, int64_t  p_35, int32_t * p_36, int32_t ** p_37, struct S2 * p_1110)
{ /* block id: 296 */
    union U0 l_715 = {-1L};
    int32_t l_725 = 0x447D18EAL;
    int32_t l_726 = 1L;
    int32_t l_727 = (-1L);
    int8_t l_743 = 0x3AL;
    int32_t *l_746 = &p_1110->g_65;
    int32_t *l_747 = &p_1110->g_78[3];
    int32_t l_748[7];
    int32_t *l_749[2][4] = {{&l_748[6],&l_748[6],&l_748[6],&l_748[6]},{&l_748[6],&l_748[6],&l_748[6],&l_748[6]}};
    VECTOR(uint16_t, 16) l_750 = (VECTOR(uint16_t, 16))(0x5C61L, (VECTOR(uint16_t, 4))(0x5C61L, (VECTOR(uint16_t, 2))(0x5C61L, 0xD3BEL), 0xD3BEL), 0xD3BEL, 0x5C61L, 0xD3BEL, (VECTOR(uint16_t, 2))(0x5C61L, 0xD3BEL), (VECTOR(uint16_t, 2))(0x5C61L, 0xD3BEL), 0x5C61L, 0xD3BEL, 0x5C61L, 0xD3BEL);
    int32_t l_753 = 0x36AE4CEBL;
    uint16_t l_754 = 0x8C8AL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_748[i] = 6L;
    for (p_1110->g_707 = (-14); (p_1110->g_707 < 6); p_1110->g_707++)
    { /* block id: 299 */
        uint16_t l_728 = 0x149DL;
        int32_t l_731 = 0x180B4F5AL;
        int32_t l_739 = 0L;
        int32_t l_744 = (-3L);
        (*p_36) |= (-1L);
        if ((*p_36))
            continue;
        for (p_1110->g_675 = 8; (p_1110->g_675 == 30); p_1110->g_675 = safe_add_func_uint16_t_u_u(p_1110->g_675, 8))
        { /* block id: 304 */
            int32_t l_716 = (-1L);
            uint8_t *l_723[2];
            int32_t l_724 = 0x67DC6381L;
            uint64_t l_742 = 3UL;
            VECTOR(int32_t, 8) l_745 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5C42524FL), 0x5C42524FL), 0x5C42524FL, (-7L), 0x5C42524FL);
            int i;
            for (i = 0; i < 2; i++)
                l_723[i] = (void*)0;
            l_724 = ((VECTOR(int32_t, 4))(0x3DE412BAL, (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1110->group_2_offset, get_group_id(2), 10), (((l_739 = (l_715 , (l_744 &= (((l_716 <= (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))((((l_731 = ((((safe_sub_func_uint64_t_u_u(18446744073709551606UL, (safe_lshift_func_uint8_t_u_u(p_35, (l_728++))))) , p_1110->g_373[0][8][0]) , &p_34) != &p_34)) , FAKE_DIVERGE(p_1110->global_0_offset, get_global_id(0), 10)) <= (((safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((((VECTOR(int8_t, 16))(p_1110->g_736.zxzyyxyxwwxwwzwy)).sc > ((safe_add_func_uint32_t_u_u((l_739 ^ (safe_rshift_func_int8_t_s_s(l_715.f0, l_742))), 0L)) | p_1110->g_322.x)), l_724)), p_35)) ^ l_725) , p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))])), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))(0x3F2D0B4BL)), 0x19032A9CL)).s0, FAKE_DIVERGE(p_1110->global_2_offset, get_global_id(2), 10)))) , l_743) >= l_724)))) < p_34) > p_1110->g_202))), 1L, 0x5C564B2FL)).y;
            (*p_36) = ((VECTOR(int32_t, 4))(l_745.s7463)).x;
            return p_36;
        }
    }
    ++l_750.s3;
    l_754++;
    return &p_1110->g_3;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_39(uint16_t  p_40, uint64_t  p_41, struct S2 * p_1110)
{ /* block id: 294 */
    int32_t *l_708 = &p_1110->g_65;
    return l_708;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_688 p_1110->g_180 p_1110->g_78 p_1110->g_700 p_1110->g_42 p_1110->g_323 p_1110->g_707
 * writes: p_1110->g_92 p_1110->g_180 p_1110->g_78 p_1110->g_411 p_1110->g_74
 */
int32_t  func_44(uint8_t  p_45, uint32_t  p_46, int16_t  p_47, struct S2 * p_1110)
{ /* block id: 281 */
    int32_t *l_687 = &p_1110->g_78[3];
    uint64_t *l_699 = &p_1110->g_675;
    int32_t l_701 = 0x51AA6BDBL;
    uint8_t *l_702 = (void*)0;
    uint16_t *l_703 = (void*)0;
    uint16_t *l_704[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_705 = 0x10BAA3D0L;
    int32_t *l_706 = &p_1110->g_74;
    int i;
    (*p_1110->g_688) = l_687;
    for (p_1110->g_180 = 0; (p_1110->g_180 <= (-1)); p_1110->g_180 = safe_sub_func_uint8_t_u_u(p_1110->g_180, 9))
    { /* block id: 285 */
        if ((*l_687))
            break;
    }
    (*l_687) |= (0x2A1FL > p_46);
    (*l_706) = ((l_705 |= (safe_lshift_func_int16_t_s_s(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 8))(6UL, p_47, 4294967295UL, (safe_sub_func_int8_t_s_s((((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))((l_687 != l_687), (GROUP_DIVERGE(0, 1) == (safe_mul_func_uint8_t_u_u((p_1110->g_411.z = ((safe_rshift_func_uint8_t_u_s((((*l_687) = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 1L)))).yxxyxyyx)).s4 || 0x0FF899E3L) & ((*l_687) != 0x70L))) , ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(1L, (p_46 | (!(l_699 != l_699))), 0x790AE65B5AD33E85L, 0x60DBC773C18E3A30L)).odd, ((VECTOR(int64_t, 2))(0x461E471EF8DECC51L)), ((VECTOR(int64_t, 2))(6L))))).yxyx)).hi)), ((VECTOR(int64_t, 2))(0L))))))))))).lo > p_1110->g_700) | p_47)), l_701)) && 5UL)), 255UL))), (-9L), (-9L))).hi, ((VECTOR(int8_t, 2))(1L))))).odd && GROUP_DIVERGE(0, 1)), p_1110->g_42.s7)), p_45, 4294967295UL, 0xCF938AD5L, 0x356672A9L)).s2741434640636522, ((VECTOR(uint32_t, 16))(4294967289UL))))).even)).s7 , GROUP_DIVERGE(0, 1)) > l_701), p_1110->g_323.s6))) != 0xAEBCL);
    return p_1110->g_707;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_65 p_1110->g_202 p_1110->g_72 p_1110->l_comm_values p_1110->g_549 p_1110->g_675 p_1110->g_678
 * writes: p_1110->g_65 p_1110->g_202 p_1110->g_92 p_1110->g_675
 */
int32_t * func_52(int64_t  p_53, int8_t * p_54, struct S2 * p_1110)
{ /* block id: 193 */
    int32_t *l_509 = &p_1110->g_65;
    union U0 l_514[7][1][8] = {{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}},{{{0L},{-1L},{1L},{0x7974L},{1L},{-1L},{0L},{0x567CL}}}};
    int32_t l_529 = (-1L);
    VECTOR(int8_t, 16) l_539 = (VECTOR(int8_t, 16))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 1L), 1L), 1L, 0x06L, 1L, (VECTOR(int8_t, 2))(0x06L, 1L), (VECTOR(int8_t, 2))(0x06L, 1L), 0x06L, 1L, 0x06L, 1L);
    VECTOR(uint32_t, 2) l_542 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967293UL);
    int32_t l_662 = 0x5EA39E6CL;
    int32_t l_663 = 8L;
    int32_t l_664 = 3L;
    int32_t l_665 = (-3L);
    int32_t l_666 = 0x3A4ACB7EL;
    int32_t l_667 = 0x00B3B499L;
    int32_t l_668 = 0L;
    int32_t l_669 = 0x7B1553AAL;
    int32_t l_670 = (-1L);
    int32_t l_671 = (-1L);
    int32_t l_672 = 0x642C4ABCL;
    int32_t l_673 = 0x26C11CE6L;
    int32_t l_674 = 0x0AB88F8DL;
    VECTOR(uint64_t, 8) l_679 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
    VECTOR(uint64_t, 16) l_680 = (VECTOR(uint64_t, 16))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), 1UL), 1UL, 18446744073709551609UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551609UL, 1UL), 18446744073709551609UL, 1UL, 18446744073709551609UL, 1UL);
    int i, j, k;
    (*l_509) &= 0x0271138AL;
    for (p_1110->g_202 = (-29); (p_1110->g_202 != 16); p_1110->g_202++)
    { /* block id: 197 */
        int64_t l_515 = 5L;
        uint8_t *l_526 = &p_1110->g_154;
        uint8_t *l_527 = (void*)0;
        uint8_t *l_528[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_530 = 0x5703F79FL;
        int32_t *l_659 = &l_529;
        int32_t *l_660 = (void*)0;
        int32_t *l_661[3][9][6] = {{{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6}},{{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6}},{{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6},{(void*)0,(void*)0,&p_1110->g_65,&p_1110->g_68,&p_1110->g_78[1],&p_1110->g_6}}};
        int i, j, k;
        l_530 &= (safe_sub_func_uint32_t_u_u(((l_514[2][0][4] , l_515) ^ ((l_515 >= ((VECTOR(uint8_t, 4))((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1110->global_0_offset, get_global_id(0), 10), 0)), ((p_1110->g_340.x > (*l_509)) , (safe_rshift_func_int8_t_s_u((p_1110->g_325.z , ((l_529 &= ((*l_526) = (l_515 ^ (safe_rshift_func_uint16_t_u_s(65533UL, (((*l_509) &= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((5L ^ 0x2897FD8CF97AEB4FL), p_53)) < p_53), l_515))) && l_515)))))) == p_53)), 5))), 5UL, 250UL)).y) || 255UL)), p_53));
        (*p_1110->g_549) = (((((*l_509) |= 0L) > FAKE_DIVERGE(p_1110->local_1_offset, get_local_id(1), 10)) && ((safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_1110->g_72, (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(0x0BL, (-10L))).xyyyxyyyyyyyxyyy, ((VECTOR(int8_t, 16))(l_539.s5f73380ad8338b6c))))).s8, ((*l_509) = p_53))) , (safe_rshift_func_int8_t_s_u(((((VECTOR(uint32_t, 2))(l_542.yy)).odd , GROUP_DIVERGE(2, 1)) < (safe_mul_func_int16_t_s_s(((l_528[0][9] == &p_1110->g_154) != ((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(1UL, 5UL)))).yyxxxxxyxxyyyxyx))).s4), (p_53 || (((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(1UL, l_530, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))((((GROUP_DIVERGE(0, 1) == (((-1L) & (safe_mul_func_int16_t_s_s(p_53, p_1110->g_304.x))) & 0UL)) | p_1110->g_304.y) > p_1110->g_165.s1), p_1110->g_6, 8UL, 0xBE1CL)).odd, ((VECTOR(uint16_t, 2))(0xDB25L))))).even, 0x5F5FL, p_53, p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))], 0x02A2L, 0x8E5DL)).s2035642372076402, ((VECTOR(uint16_t, 16))(0xBD69L))))).sf <= 1L))))), (*l_509)))), p_53)))), p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))])) >= p_53)) , &l_530);
        if ((atomic_inc(&p_1110->l_atomic_input[10]) == 6))
        { /* block id: 206 */
            int32_t l_550[7][4][2] = {{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}},{{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L},{0x4F8F3C00L,0x4F8F3C00L}}};
            int16_t l_657 = 2L;
            int32_t l_658 = (-1L);
            int i, j, k;
            for (l_550[6][1][0] = (-9); (l_550[6][1][0] != (-26)); l_550[6][1][0] = safe_sub_func_uint8_t_u_u(l_550[6][1][0], 1))
            { /* block id: 209 */
                int32_t l_553 = 0x4A28B797L;
                union U0 l_559 = {0x2071L};
                uint32_t l_560 = 0xB9A48A82L;
                int8_t l_561[6] = {(-2L),(-5L),(-2L),(-2L),(-5L),(-2L)};
                int i;
                for (l_553 = 0; (l_553 <= 29); ++l_553)
                { /* block id: 212 */
                    VECTOR(int32_t, 4) l_556 = (VECTOR(int32_t, 4))(0x2C0F94F1L, (VECTOR(int32_t, 2))(0x2C0F94F1L, 0x18D3937BL), 0x18D3937BL);
                    VECTOR(int32_t, 2) l_557 = (VECTOR(int32_t, 2))(2L, 1L);
                    uint32_t l_558 = 0xDEBAAA9CL;
                    int i;
                    l_558 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x7FF76138L, (-8L), (-5L), 0x242E59F9L)).odd, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_556.wywyyzyxzwxywwzw)).sacc7, ((VECTOR(int32_t, 8))(l_557.yyyyxxyy)).hi))).even, ((VECTOR(int32_t, 2))((-1L), 0L))))).yxyxyxxy)).s4;
                }
                if ((l_559 , (l_560 , l_561[5])))
                { /* block id: 215 */
                    int32_t l_562[10][9] = {{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL},{0x1CEBCFBEL,0x5304BACFL,1L,0x2545CF32L,0x5304BACFL,0x2545CF32L,1L,0x5304BACFL,0x1CEBCFBEL}};
                    uint32_t l_563 = 4294967293UL;
                    int32_t l_564 = 0x33993A93L;
                    uint32_t l_565 = 4294967295UL;
                    union U1 l_566 = {0x4E8ABD7DL};
                    int32_t l_567 = 2L;
                    int16_t l_568 = 0L;
                    int i, j;
                    l_553 = l_562[9][0];
                    l_553 |= ((l_564 = l_563) , l_565);
                    if (((l_568 = (l_566 , l_567)) , 0x2BDA1F29L))
                    { /* block id: 220 */
                        int32_t l_570 = 0x07C257D5L;
                        int32_t *l_569 = &l_570;
                        int32_t *l_571 = &l_570;
                        int32_t l_572[6];
                        uint8_t l_573[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int16_t l_576[4][1][5] = {{{0x71A3L,0x79BAL,2L,0x7585L,0x79BAL}},{{0x71A3L,0x79BAL,2L,0x7585L,0x79BAL}},{{0x71A3L,0x79BAL,2L,0x7585L,0x79BAL}},{{0x71A3L,0x79BAL,2L,0x7585L,0x79BAL}}};
                        uint8_t l_577 = 0xE7L;
                        union U0 l_578 = {0L};
                        int32_t *l_579 = &l_572[4];
                        int32_t *l_580 = &l_570;
                        int32_t *l_581 = &l_570;
                        int16_t l_582[2][6][1];
                        VECTOR(uint32_t, 16) l_583 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), 4294967293UL), 4294967293UL, 4294967292UL, 4294967293UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), 4294967292UL, 4294967293UL, 4294967292UL, 4294967293UL);
                        uint8_t l_584 = 1UL;
                        int32_t l_585[2][1];
                        int32_t *l_586 = &l_570;
                        int32_t *l_587[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_572[i] = 0L;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_582[i][j][k] = 0x7CBAL;
                            }
                        }
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_585[i][j] = 3L;
                        }
                        for (i = 0; i < 6; i++)
                            l_587[i] = &l_572[2];
                        l_571 = l_569;
                        --l_573[2];
                        l_581 = (l_580 = ((l_576[3][0][1] , (l_578 = (l_559 = (l_577 , l_578)))) , l_579));
                        l_580 = (l_582[0][4][0] , ((l_584 = (l_566.f2 = ((VECTOR(uint32_t, 2))(l_583.s53)).odd)) , (l_587[3] = (l_585[1][0] , l_586))));
                    }
                    else
                    { /* block id: 231 */
                        int32_t l_588 = 0x33450241L;
                        int8_t l_589 = 0x45L;
                        int8_t l_590 = 0x00L;
                        int32_t l_591 = (-1L);
                        int64_t l_592 = (-4L);
                        uint8_t l_593 = 255UL;
                        VECTOR(int32_t, 2) l_596 = (VECTOR(int32_t, 2))((-10L), (-10L));
                        int32_t *l_597 = (void*)0;
                        int32_t *l_598 = &l_591;
                        int32_t l_599 = 0x0C91F11EL;
                        int64_t l_600[1][10] = {{0x26FB35421889CB33L,(-1L),0x26FB35421889CB33L,0x26FB35421889CB33L,(-1L),0x26FB35421889CB33L,0x26FB35421889CB33L,(-1L),0x26FB35421889CB33L,0x26FB35421889CB33L}};
                        int64_t l_601 = (-3L);
                        int16_t l_602 = (-10L);
                        int32_t l_603 = 0x47C24805L;
                        int8_t l_604 = (-1L);
                        uint32_t l_605 = 4294967295UL;
                        uint32_t l_608 = 5UL;
                        int32_t *l_609 = &l_591;
                        int32_t *l_610 = &l_591;
                        int32_t *l_611[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        ++l_593;
                        l_598 = (l_596.x , l_597);
                        l_605++;
                        l_611[3][3] = (l_610 = (l_608 , l_609));
                    }
                }
                else
                { /* block id: 238 */
                    uint64_t l_612 = 0x2832E17A5EBE5AB9L;
                    int32_t *l_641 = (void*)0;
                    VECTOR(int32_t, 16) l_643 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int32_t, 2))((-6L), (-1L)), (VECTOR(int32_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
                    int32_t *l_642 = (void*)0;
                    VECTOR(int16_t, 4) l_644 = (VECTOR(int16_t, 4))(0x3B1CL, (VECTOR(int16_t, 2))(0x3B1CL, (-5L)), (-5L));
                    VECTOR(uint16_t, 8) l_645 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 65535UL), 65535UL), 65535UL, 65533UL, 65535UL);
                    int i;
                    if ((l_553 = l_612))
                    { /* block id: 240 */
                        int32_t l_613 = 0x71175B05L;
                        int32_t l_614[1];
                        uint64_t l_615[9][9] = {{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L},{0x8393C5DCE4096728L,0x03B44619A2BF86A5L,3UL,0x7F1CECF47C1EE325L,0xCD42815092579D8EL,0xCD42815092579D8EL,0x7F1CECF47C1EE325L,3UL,0x03B44619A2BF86A5L}};
                        VECTOR(uint32_t, 16) l_616 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xD0E40A53L), 0xD0E40A53L), 0xD0E40A53L, 1UL, 0xD0E40A53L, (VECTOR(uint32_t, 2))(1UL, 0xD0E40A53L), (VECTOR(uint32_t, 2))(1UL, 0xD0E40A53L), 1UL, 0xD0E40A53L, 1UL, 0xD0E40A53L);
                        uint16_t l_617 = 0UL;
                        int16_t l_618 = 0x6C83L;
                        VECTOR(uint32_t, 16) l_619 = (VECTOR(uint32_t, 16))(0x304CF8D7L, (VECTOR(uint32_t, 4))(0x304CF8D7L, (VECTOR(uint32_t, 2))(0x304CF8D7L, 4294967295UL), 4294967295UL), 4294967295UL, 0x304CF8D7L, 4294967295UL, (VECTOR(uint32_t, 2))(0x304CF8D7L, 4294967295UL), (VECTOR(uint32_t, 2))(0x304CF8D7L, 4294967295UL), 0x304CF8D7L, 4294967295UL, 0x304CF8D7L, 4294967295UL);
                        VECTOR(uint32_t, 8) l_620 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x29ACF950L), 0x29ACF950L), 0x29ACF950L, 4294967295UL, 0x29ACF950L);
                        uint32_t l_621 = 0x43AE74EAL;
                        VECTOR(uint64_t, 4) l_622 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL);
                        int8_t l_623[1];
                        uint8_t l_624 = 0x7EL;
                        VECTOR(int32_t, 16) l_625 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x0BB417DBL), 0x0BB417DBL), 0x0BB417DBL, (-4L), 0x0BB417DBL, (VECTOR(int32_t, 2))((-4L), 0x0BB417DBL), (VECTOR(int32_t, 2))((-4L), 0x0BB417DBL), (-4L), 0x0BB417DBL, (-4L), 0x0BB417DBL);
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_614[i] = 9L;
                        for (i = 0; i < 1; i++)
                            l_623[i] = 2L;
                        l_553 &= (((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x3A2B153BL, l_613, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(4294967295UL, 0xC8421EDEL, 0x614A8987L, 1UL)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(0xC01416C4L, 0xE3C5DA37L)), (uint32_t)(l_615[1][3] = (l_560 = l_614[0])), (uint32_t)0x481D22C5L))), 4294967295UL, 4UL)), ((VECTOR(uint32_t, 4))(l_616.s262e)), 5UL, 4294967295UL)))).even))).s06, ((VECTOR(uint32_t, 2))(4294967293UL, 0UL))))).even , l_617);
                        l_553 = (l_613 = l_618);
                        l_553 &= ((VECTOR(int32_t, 8))(0x5415B443L, 1L, (((VECTOR(uint32_t, 8))(0xDCFB47E9L, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(l_619.sd0af)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_620.s6044162770636275)).s44f3)).wzxzyywz)).even))), (l_621 = (l_560 ^= FAKE_DIVERGE(p_1110->local_0_offset, get_local_id(0), 10))), 4294967294UL, 1UL)).s2 , (((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xCB7160D7C3EABFDCL, 0UL)).yxxyxxyx)).s74, ((VECTOR(uint64_t, 2))(l_622.yy))))).even , (l_623[0] , l_624))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_625.s93)), 7L, 0x286EF44FL)), 0x7ACE870CL)).s5;
                    }
                    else
                    { /* block id: 249 */
                        int32_t l_626 = 0x47F592B1L;
                        int8_t l_627[10];
                        int32_t l_628 = (-6L);
                        int64_t l_629 = 0x5370B75324DBF30EL;
                        uint32_t l_630 = 4294967288UL;
                        int32_t *l_633 = &l_626;
                        int32_t *l_634 = (void*)0;
                        union U1 l_636 = {0L};
                        union U1 *l_635 = &l_636;
                        union U1 *l_637 = &l_636;
                        uint64_t l_638 = 0x48B81A26038A15E0L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_627[i] = (-1L);
                        l_634 = ((++l_630) , (l_633 = (void*)0));
                        l_637 = l_635;
                        ++l_638;
                    }
                    l_641 = (void*)0;
                    l_642 = (void*)0;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-2L), 0x3BF4D98BL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_644.xzyxxywwwyyzzwyz)).s68c5, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_645.s74)).yxxx))))))).x, ((VECTOR(int32_t, 2))((-1L), 0x49B1F4E7L)), 0x0F0A99BDL, 0x1D2FB238L, 0L)).s0243731772660266)).s0)
                    { /* block id: 258 */
                        VECTOR(uint64_t, 2) l_646 = (VECTOR(uint64_t, 2))(1UL, 0x58850F1D5F24854FL);
                        uint64_t l_647 = 1UL;
                        int32_t l_648 = 1L;
                        uint8_t l_649 = 254UL;
                        int32_t l_650 = (-6L);
                        int8_t l_651 = (-10L);
                        int i;
                        l_649 |= (((l_647 = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_646.yxyxxxxyxyyxxxyx)).s21)).xxyxyyxx)).s0 , 1L)) , FAKE_DIVERGE(p_1110->global_0_offset, get_global_id(0), 10)) , l_648);
                        l_648 = l_650;
                        l_643.s2 = (l_648 = l_651);
                    }
                    else
                    { /* block id: 264 */
                        int16_t l_652[8] = {0x3E34L,0x46FBL,0x3E34L,0x3E34L,0x46FBL,0x3E34L,0x3E34L,0x46FBL};
                        int8_t l_653 = 4L;
                        uint16_t l_654 = 0UL;
                        int i;
                        ++l_654;
                    }
                }
            }
            l_658 = (l_657 |= 0x09EFE1EFL);
            unsigned int result = 0;
            int l_550_i0, l_550_i1, l_550_i2;
            for (l_550_i0 = 0; l_550_i0 < 7; l_550_i0++) {
                for (l_550_i1 = 0; l_550_i1 < 4; l_550_i1++) {
                    for (l_550_i2 = 0; l_550_i2 < 2; l_550_i2++) {
                        result += l_550[l_550_i0][l_550_i1][l_550_i2];
                    }
                }
            }
            result += l_657;
            result += l_658;
            atomic_add(&p_1110->l_special_values[10], result);
        }
        else
        { /* block id: 271 */
            (1 + 1);
        }
        ++p_1110->g_675;
    }
    (*l_509) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(p_1110->g_678.yyxy)), ((VECTOR(uint64_t, 2))(l_679.s20)).yxxx, ((VECTOR(uint64_t, 8))(((~0x408AL) == 0x2BB4L), 0UL, ((VECTOR(uint64_t, 4))(l_680.s0e93)), 1UL, 0x8D5E8238506318CAL)).hi))).wyyyzxzxxwyzxzyx)).s3d52)).z > (-1L));
    return &p_1110->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_3 p_1110->g_96 p_1110->g_91 p_1110->g_92 p_1110->g_78 p_1110->g_74 p_1110->g_65 p_1110->g_68 p_1110->g_165 p_1110->g_202 p_1110->g_42 p_1110->g_301 p_1110->g_213 p_1110->g_304 p_1110->g_114 p_1110->g_48 p_1110->g_154 p_1110->g_322 p_1110->g_323 p_1110->g_325 p_1110->g_336 p_1110->g_337 p_1110->g_339 p_1110->g_340 p_1110->g_73 p_1110->g_349 p_1110->g_16 p_1110->g_376 p_1110->g_411 p_1110->g_419 p_1110->l_comm_values p_1110->g_94 p_1110->g_comm_values p_1110->g_180 p_1110->g_373.f0 p_1110->g_468 p_1110->g_32
 * writes: p_1110->g_16 p_1110->g_68 p_1110->g_213 p_1110->g_154 p_1110->g_114 p_1110->g_65 p_1110->g_74 p_1110->g_323 p_1110->g_92 p_1110->g_378 p_1110->g_94 p_1110->g_202
 */
int64_t  func_55(uint32_t  p_56, int16_t  p_57, int64_t  p_58, uint64_t  p_59, int32_t  p_60, struct S2 * p_1110)
{ /* block id: 104 */
    uint64_t l_242 = 0x675C65715371F8D4L;
    uint16_t *l_243 = (void*)0;
    uint16_t *l_244[4][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
    int32_t l_245 = 3L;
    VECTOR(int32_t, 2) l_246 = (VECTOR(int32_t, 2))(0x49240290L, 0L);
    int8_t *l_247 = &p_1110->g_16;
    uint16_t l_248[1][10] = {{0xE868L,0x116FL,65530UL,0x116FL,0xE868L,0xE868L,0x116FL,65530UL,0x116FL,0xE868L}};
    int32_t *l_249 = &p_1110->g_68;
    VECTOR(uint8_t, 16) l_256 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
    VECTOR(int16_t, 8) l_271 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x3C6AL), 0x3C6AL), 0x3C6AL, (-10L), 0x3C6AL);
    int64_t *l_274 = (void*)0;
    int64_t **l_275 = &l_274;
    uint8_t *l_276 = &p_1110->g_154;
    int64_t *l_277 = (void*)0;
    int64_t *l_278 = (void*)0;
    int64_t *l_279 = (void*)0;
    int16_t *l_292[6] = {(void*)0,&p_1110->g_202,(void*)0,(void*)0,&p_1110->g_202,(void*)0};
    VECTOR(int8_t, 2) l_302 = (VECTOR(int8_t, 2))(0x61L, 0x21L);
    VECTOR(int8_t, 16) l_303 = (VECTOR(int8_t, 16))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 0x64L), 0x64L), 0x64L, 0x0DL, 0x64L, (VECTOR(int8_t, 2))(0x0DL, 0x64L), (VECTOR(int8_t, 2))(0x0DL, 0x64L), 0x0DL, 0x64L, 0x0DL, 0x64L);
    VECTOR(uint64_t, 8) l_321 = (VECTOR(uint64_t, 8))(0x9E783FFCBA9512BAL, (VECTOR(uint64_t, 4))(0x9E783FFCBA9512BAL, (VECTOR(uint64_t, 2))(0x9E783FFCBA9512BAL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x9E783FFCBA9512BAL, 18446744073709551615UL);
    VECTOR(int64_t, 4) l_327 = (VECTOR(int64_t, 4))(0x03D7F307CFA46E64L, (VECTOR(int64_t, 2))(0x03D7F307CFA46E64L, 5L), 5L);
    VECTOR(uint16_t, 16) l_332 = (VECTOR(uint16_t, 16))(0x2C31L, (VECTOR(uint16_t, 4))(0x2C31L, (VECTOR(uint16_t, 2))(0x2C31L, 1UL), 1UL), 1UL, 0x2C31L, 1UL, (VECTOR(uint16_t, 2))(0x2C31L, 1UL), (VECTOR(uint16_t, 2))(0x2C31L, 1UL), 0x2C31L, 1UL, 0x2C31L, 1UL);
    VECTOR(uint16_t, 4) l_334 = (VECTOR(uint16_t, 4))(0x7B47L, (VECTOR(uint16_t, 2))(0x7B47L, 65535UL), 65535UL);
    VECTOR(uint64_t, 16) l_338 = (VECTOR(uint64_t, 16))(0x987AC3E4CD29A4E5L, (VECTOR(uint64_t, 4))(0x987AC3E4CD29A4E5L, (VECTOR(uint64_t, 2))(0x987AC3E4CD29A4E5L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x987AC3E4CD29A4E5L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x987AC3E4CD29A4E5L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x987AC3E4CD29A4E5L, 18446744073709551615UL), 0x987AC3E4CD29A4E5L, 18446744073709551615UL, 0x987AC3E4CD29A4E5L, 18446744073709551615UL);
    union U0 *l_372 = &p_1110->g_373[0][2][0];
    int32_t l_380 = 0x4E6DCCE7L;
    int32_t l_381 = 0x49C8ED14L;
    int32_t l_382 = 0x045C10A7L;
    int32_t l_384 = (-1L);
    int32_t l_387 = 0x0F53EC4FL;
    int32_t l_388 = 0x3A105096L;
    int32_t l_389 = 0x666E3858L;
    int32_t l_390 = 0L;
    int32_t l_391 = 0x7927329EL;
    int32_t l_392 = (-1L);
    int32_t l_393 = 0L;
    int32_t l_394[5] = {0L,0L,0L,0L,0L};
    uint32_t l_397 = 4294967294UL;
    VECTOR(uint8_t, 4) l_412 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL);
    VECTOR(int8_t, 2) l_473 = (VECTOR(int8_t, 2))(0x13L, 0x2DL);
    VECTOR(int32_t, 8) l_506 = (VECTOR(int32_t, 8))(0x612144BAL, (VECTOR(int32_t, 4))(0x612144BAL, (VECTOR(int32_t, 2))(0x612144BAL, 0x14E2C970L), 0x14E2C970L), 0x14E2C970L, 0x612144BAL, 0x14E2C970L);
    VECTOR(int32_t, 16) l_507 = (VECTOR(int32_t, 16))(0x61FADDD6L, (VECTOR(int32_t, 4))(0x61FADDD6L, (VECTOR(int32_t, 2))(0x61FADDD6L, 0x26A8F5E3L), 0x26A8F5E3L), 0x26A8F5E3L, 0x61FADDD6L, 0x26A8F5E3L, (VECTOR(int32_t, 2))(0x61FADDD6L, 0x26A8F5E3L), (VECTOR(int32_t, 2))(0x61FADDD6L, 0x26A8F5E3L), 0x61FADDD6L, 0x26A8F5E3L, 0x61FADDD6L, 0x26A8F5E3L);
    int i, j, k;
    (*l_249) &= (1L && ((((safe_add_func_int16_t_s_s((-1L), p_1110->g_3)) <= (safe_add_func_int64_t_s_s(p_1110->g_96[1][1], (safe_sub_func_int32_t_s_s(((((*l_247) = ((safe_mod_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(p_57, (0x57L || p_60))) <= (((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(0x53CDL, 65526UL)).xyyy, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x18C5L, 0x0C8BL)))).xxxyxxxx, (uint16_t)(0xDDB6L | (l_245 |= (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0xAFL, l_242)), p_58))))))).lo, ((VECTOR(uint16_t, 4))(1UL))))).z || l_246.y)) > 0x088A6FAEL), (**p_1110->g_91))) | (-1L))) <= l_246.y) , p_60), l_248[0][0]))))) ^ 0x057C816288D38B64L) > p_60));
    if ((0xA341L > ((((safe_div_func_uint64_t_u_u(p_1110->g_165.s3, (safe_mul_func_int16_t_s_s(p_60, p_1110->g_3)))) >= ((*l_249) = ((*l_249) == ((*l_276) = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_256.sd4a889a8)).s31)), ((VECTOR(uint8_t, 2))(253UL, 0x67L)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(((safe_div_func_int64_t_s_s(((((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(9UL, 246UL)).odd, 4)) || ((safe_rshift_func_uint16_t_u_s((p_1110->g_213.s0 = ((void*)0 != &p_57)), (safe_rshift_func_int8_t_s_s(p_1110->g_202, (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_271.s56)).odd, (safe_add_func_int64_t_s_s((+(((*l_275) = (p_60 , l_274)) != (void*)0)), p_1110->g_74)))))))) & p_1110->g_42.s3)), p_60)) , (**p_1110->g_91)) , p_1110->g_65) , (*l_249)), (*l_249))) | 0L), 6UL, 3UL, 0x70L)).yxwwwxyy, ((VECTOR(uint8_t, 8))(1UL))))).s04, ((VECTOR(uint8_t, 2))(0x48L))))), 0x5EL, 0UL, ((VECTOR(uint8_t, 2))(0x21L)), 0xA9L, GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 4))(255UL)))).hi, ((VECTOR(uint8_t, 8))(250UL))))).hi)).hi)), 0x80L, 0x17L)).odd)), 0x77L, 0x62L, 1UL, ((VECTOR(uint8_t, 2))(0xE5L)), 0xAFL)).even)).wzwzzyzxxxzwzywx)).s4)))) , p_1110->g_165.s3) != p_1110->g_96[7][3])))
    { /* block id: 112 */
        union U0 l_299 = {0L};
        union U0 *l_300 = &l_299;
        VECTOR(int8_t, 8) l_305 = (VECTOR(int8_t, 8))(0x21L, (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, (-1L)), (-1L)), (-1L), 0x21L, (-1L));
        VECTOR(int8_t, 4) l_306 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x49L), 0x49L);
        int16_t *l_307[7] = {&p_1110->g_202,(void*)0,&p_1110->g_202,&p_1110->g_202,(void*)0,&p_1110->g_202,&p_1110->g_202};
        uint64_t *l_308 = (void*)0;
        uint64_t *l_309[7];
        int32_t l_310 = 1L;
        int32_t *l_311 = &p_1110->g_65;
        int i;
        for (i = 0; i < 7; i++)
            l_309[i] = &p_1110->g_114;
        (*l_311) |= ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((-1L), p_57)) == ((l_310 &= (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((-1L), ((safe_add_func_uint64_t_u_u(((l_243 != l_292[3]) == (p_1110->g_114 ^= ((safe_lshift_func_uint16_t_u_u(((+(((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((VECTOR(uint8_t, 4))(252UL, 1UL, 4UL, 0x89L)).w > (((*l_300) = l_299) , p_60)), 5)), ((*l_247) = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(p_1110->g_301.sa349)).even, (int8_t)p_1110->g_213.s5))), 0L, 0x57L, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(l_302.yyyyxyxx)).s62, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_303.se5)).yyyyxxxxxyxxxxyy)))).sa3, ((VECTOR(int8_t, 2))(p_1110->g_304.yy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x47L, 1L)), 1L, 1L)).hi))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(l_305.s31)).xxyxyxxxyyxxxyxy, ((VECTOR(int8_t, 8))(l_306.xyxxxxxw)).s7622576577026120))))).s6a))).yxyxyyxxxxyxyxxx)).sb5))).xxyyyxxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x14L, 0L)).yyyyxxxyyyxxyxyx)).se1fc)).zzwyzyyz))), ((VECTOR(int8_t, 4))(((l_307[0] != l_244[1][0][0]) > 6L), ((VECTOR(int8_t, 2))((-7L))), 1L)), 0x24L, 7L, 0x47L, 5L)).s7aba, (int8_t)p_1110->g_42.s2, (int8_t)(-1L)))))), ((VECTOR(int8_t, 8))(0L))))).s16)).hi))) <= (*l_249)) == 0x19532293L)) >= l_306.z), 15)) & (*l_249)))), 18446744073709551614UL)) && p_59))), 12))) < 0L)) || p_1110->g_48) < p_56), 7L)), 8)) < 1L);
    }
    else
    { /* block id: 118 */
        uint16_t l_318[8] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
        VECTOR(int64_t, 16) l_324 = (VECTOR(int64_t, 16))(0x7224D034F18C485DL, (VECTOR(int64_t, 4))(0x7224D034F18C485DL, (VECTOR(int64_t, 2))(0x7224D034F18C485DL, 0x6FC845DF1FDC0918L), 0x6FC845DF1FDC0918L), 0x6FC845DF1FDC0918L, 0x7224D034F18C485DL, 0x6FC845DF1FDC0918L, (VECTOR(int64_t, 2))(0x7224D034F18C485DL, 0x6FC845DF1FDC0918L), (VECTOR(int64_t, 2))(0x7224D034F18C485DL, 0x6FC845DF1FDC0918L), 0x7224D034F18C485DL, 0x6FC845DF1FDC0918L, 0x7224D034F18C485DL, 0x6FC845DF1FDC0918L);
        VECTOR(int64_t, 8) l_326 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x0BC6B061BF074DAAL), 0x0BC6B061BF074DAAL), 0x0BC6B061BF074DAAL, (-2L), 0x0BC6B061BF074DAAL);
        VECTOR(uint16_t, 4) l_333 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 2UL), 2UL);
        VECTOR(uint16_t, 8) l_335 = (VECTOR(uint16_t, 8))(0xB049L, (VECTOR(uint16_t, 4))(0xB049L, (VECTOR(uint16_t, 2))(0xB049L, 0UL), 0UL), 0UL, 0xB049L, 0UL);
        VECTOR(uint8_t, 2) l_341 = (VECTOR(uint8_t, 2))(254UL, 1UL);
        int32_t *l_346 = &l_245;
        uint64_t *l_350 = &l_242;
        int16_t *l_367 = (void*)0;
        VECTOR(int32_t, 4) l_374 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x508B1A76L), 0x508B1A76L);
        VECTOR(int32_t, 8) l_375 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int8_t *l_377 = (void*)0;
        VECTOR(int32_t, 2) l_395 = (VECTOR(int32_t, 2))(0x397FC597L, (-1L));
        VECTOR(uint64_t, 8) l_408 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x50F7C5490F310D54L), 0x50F7C5490F310D54L), 0x50F7C5490F310D54L, 18446744073709551615UL, 0x50F7C5490F310D54L);
        VECTOR(uint8_t, 16) l_413 = (VECTOR(uint8_t, 16))(0xF4L, (VECTOR(uint8_t, 4))(0xF4L, (VECTOR(uint8_t, 2))(0xF4L, 0x46L), 0x46L), 0x46L, 0xF4L, 0x46L, (VECTOR(uint8_t, 2))(0xF4L, 0x46L), (VECTOR(uint8_t, 2))(0xF4L, 0x46L), 0xF4L, 0x46L, 0xF4L, 0x46L);
        VECTOR(uint8_t, 4) l_417 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x1DL), 0x1DL);
        int i;
        (*l_346) |= ((*l_249) != ((VECTOR(int32_t, 8))(0x54F21E32L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))((p_1110->g_154 ^ (safe_lshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_318[4], (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(9UL, 0xB27927304A5D0BC7L)).xxyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(0xD3338343486B52A1L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_321.s4732700216256754)).sb7)), ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))(0x7ED305FA5C55A6DBL, (-10L))).xyyyyyxy, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(p_1110->g_322.zy)), ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(p_1110->g_323.s82)).xyyy, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(l_324.s4185)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1110->g_325.zy)))).yxyxxxyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_326.s30)).yxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))(l_327.zzzxwyxw)), ((VECTOR(int64_t, 8))(0L, ((safe_sub_func_uint32_t_u_u((7UL | (safe_sub_func_uint16_t_u_u(((*l_249) , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(l_332.s9d22a20e)).s35, (uint16_t)(p_1110->g_213.s2 = 0x1B42L)))), p_1110->g_323.s9, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x5923L, ((VECTOR(uint16_t, 2))(65530UL, 0x5CBCL)), 0UL)).wywwzwxy)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(l_333.yx)).xyyxyxyx, ((VECTOR(uint16_t, 8))(l_334.wzyxwyzy)), ((VECTOR(uint16_t, 8))(l_335.s16054712)))))))).s1222540222022403)).odd, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0x3E87L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 4))(p_1110->g_336.s7630)).zzzwzwwxyxywwzxz, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(1L, 0x656EBD7AADFBA55DL))))).xyxyxxyxyxxyxyyy)).even, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1110->g_337.yy)).yxxyyyyy))))).s6 ^ ((VECTOR(uint64_t, 8))(l_338.s9d08253e)).s1), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(p_1110->g_339.scc200f242d732479)).s6a68, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(p_1110->g_340.xyyx)).hi, ((VECTOR(uint8_t, 4))(l_341.yyxy)).hi)))))), 9UL)))).xwwyxwzw)).even, ((VECTOR(uint8_t, 8))((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(((safe_mul_func_int8_t_s_s(0x0DL, 1L)) , 7UL), ((VECTOR(uint16_t, 2))(8UL)), 1UL)).z, p_1110->g_337.x)), 0UL, 0xB0L, p_1110->g_65, l_326.s4, l_324.s0, 0x05L, 0xF4L)).hi))).lo)), ((VECTOR(uint8_t, 4))(0xD6L)), p_60, FAKE_DIVERGE(p_1110->global_0_offset, get_global_id(0), 10), 254UL, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 4))(1UL)), 0x21L)).sf, 0xF7L, 0xDBL)))).zwzyzxwy, ((VECTOR(uint8_t, 8))(246UL))))).s6553467427226315))))).sf4, ((VECTOR(uint16_t, 2))(9UL))))).xyyy)).xxyzwzxyxyzyyzwx, ((VECTOR(uint16_t, 16))(0x7ED6L))))).even)).s12)), p_1110->g_73, (*l_249), 0UL, 65535UL, 0x1C60L)).hi)).xxxxzzzy, ((VECTOR(uint16_t, 8))(0x6E74L)))))))), 0UL, 0x8705L, 65534UL, 65535UL, 4UL)).s45)).xyyxyyyxxxxxyxxy)).s7), 0x3DC2L))), p_1110->g_74)) && p_57), (-6L), ((VECTOR(int64_t, 2))(0x518BF8B18059FE58L)), (-1L), 0x4C1F07B9D86AEEF9L, 0x6C11273016CAA6ADL))))).s15)).yyxx, ((VECTOR(int64_t, 4))((-1L)))))).hi)))), 6L, l_326.s1, 0x6048BF0802A14680L, p_1110->g_325.z, 0x14DF09485D0A29ADL, (-1L)))))), 0x37C34580D3211B9BL, (-1L), 0x669C7B3D9533163AL, ((VECTOR(int64_t, 4))(0x2752A0BBEADE78D6L)), 1L)).saa45)))))).even))).xxyxxxxy))).s55)).xyxy, ((VECTOR(uint64_t, 4))(0UL))))).x, ((VECTOR(uint64_t, 8))(0xAEB04C0E27DA52E9L)), ((VECTOR(uint64_t, 4))(18446744073709551608UL)))).s18, (uint64_t)l_333.z))).xxxy)).hi)).yyyx))).y, p_57)))), p_1110->g_114)), (*l_249)))), ((VECTOR(int32_t, 8))(0x17F2254EL)), 0x47A90DA0L, 0x1A4FD411L, ((VECTOR(int32_t, 4))(0x0C76151BL)), 1L)).s15, ((VECTOR(int32_t, 2))(0x42F0F649L))))), ((VECTOR(int32_t, 4))(3L)), 0x601AF9A5L, 0x4FE28A86L)).s02)).xxxxxyxyxxxyyyyx, (int32_t)0x044047B9L, (int32_t)(-5L)))).s2fe9)), ((VECTOR(int32_t, 2))(0L)), (-6L))).s5);
        (*l_249) = (safe_add_func_int64_t_s_s(p_60, ((*l_350) = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(p_1110->g_349.s60770256))))).s20)))).lo)));
        if ((*l_249))
        { /* block id: 123 */
            uint8_t l_353 = 0UL;
            for (p_1110->g_16 = 1; (p_1110->g_16 == 12); p_1110->g_16++)
            { /* block id: 126 */
                ++l_353;
                for (p_1110->g_74 = 0; (p_1110->g_74 == (-6)); p_1110->g_74 = safe_sub_func_uint32_t_u_u(p_1110->g_74, 4))
                { /* block id: 130 */
                    return p_1110->g_340.x;
                }
            }
        }
        else
        { /* block id: 134 */
            VECTOR(uint8_t, 16) l_364 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint8_t, 2))(6UL, 0UL), (VECTOR(uint8_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL);
            int64_t *l_371[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_383 = 7L;
            int32_t l_385 = (-1L);
            int32_t l_386[8][6][2] = {{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}},{{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL},{0x257B2B4FL,0x1B6406CDL}}};
            int32_t l_396 = 0x0AF045A9L;
            VECTOR(uint64_t, 8) l_407 = (VECTOR(uint64_t, 8))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0x5FD14493F02EBE50L), 0x5FD14493F02EBE50L), 0x5FD14493F02EBE50L, 6UL, 0x5FD14493F02EBE50L);
            VECTOR(uint8_t, 2) l_410 = (VECTOR(uint8_t, 2))(6UL, 0x98L);
            VECTOR(uint8_t, 16) l_418 = (VECTOR(uint8_t, 16))(0x3DL, (VECTOR(uint8_t, 4))(0x3DL, (VECTOR(uint8_t, 2))(0x3DL, 0xECL), 0xECL), 0xECL, 0x3DL, 0xECL, (VECTOR(uint8_t, 2))(0x3DL, 0xECL), (VECTOR(uint8_t, 2))(0x3DL, 0xECL), 0x3DL, 0xECL, 0x3DL, 0xECL);
            VECTOR(uint8_t, 2) l_420 = (VECTOR(uint8_t, 2))(0x92L, 0x87L);
            union U1 *l_422 = &p_1110->g_32[0][3][2];
            int32_t **l_424[10][6][1] = {{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}},{{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]},{&p_1110->g_92[6][2][0]}}};
            int32_t *l_479 = &l_385;
            uint16_t **l_486 = &l_244[1][0][0];
            int i, j, k;
            if (((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_59, 1UL)), ((((safe_mul_func_int16_t_s_s((p_1110->g_322.x ^ ((VECTOR(uint8_t, 2))(l_364.s6b)).hi), (safe_rshift_func_int16_t_s_u(((void*)0 == l_367), 9)))) < (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s((((p_1110->g_323.sb |= (-5L)) , l_372) != (void*)0))) > (!((VECTOR(int8_t, 2))(3L, 1L)).even)) >= (((((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_374.yx)).xxyx, ((VECTOR(int32_t, 16))(l_375.s6346015377562156)).sedd2))).w , p_57) || FAKE_DIVERGE(p_1110->group_2_offset, get_group_id(2), 10)) | p_59)), p_57))) ^ (-8L)) , 3L))) != p_57))
            { /* block id: 136 */
                int32_t *l_379[9] = {&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74,&p_1110->g_74};
                int i;
                (*p_1110->g_91) = (void*)0;
                (*l_249) |= ((VECTOR(int32_t, 4))(p_1110->g_376.s4635)).z;
                (*l_346) = (p_59 > (&p_1110->g_94 != (p_1110->g_378 = l_377)));
                l_397++;
            }
            else
            { /* block id: 142 */
                VECTOR(uint8_t, 8) l_404 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                VECTOR(uint8_t, 8) l_414 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x53L), 0x53L), 0x53L, 1UL, 0x53L);
                VECTOR(uint8_t, 2) l_421 = (VECTOR(uint8_t, 2))(0x01L, 0x28L);
                union U0 **l_425[5][10][2] = {{{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372}},{{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372}},{{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372}},{{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372}},{{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372},{&l_372,&l_372}}};
                uint32_t l_426 = 0x4D145099L;
                int i, j, k;
                for (l_393 = 7; (l_393 < 17); l_393 = safe_add_func_int8_t_s_s(l_393, 2))
                { /* block id: 145 */
                    VECTOR(int8_t, 8) l_409 = (VECTOR(int8_t, 8))(0x18L, (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, 0x50L), 0x50L), 0x50L, 0x18L, 0x50L);
                    int i;
                    if (((((((safe_mod_func_int16_t_s_s((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(9UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_404.s21)), 0x36L, 0x03L)).odd, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))((safe_lshift_func_uint16_t_u_s(p_1110->g_376.s0, (((VECTOR(uint64_t, 8))(((*l_350) = 0UL), 2UL, 0x92003D50E7F0903CL, ((VECTOR(uint64_t, 8))(l_407.s61123707)).s3, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_408.s05746506)).s40)), 2UL, 0xACFF27723C1EC72CL)).s2 < 0x3857577B8644AD5CL))), l_404.s5, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 16))(l_409.s0253042024441433)).s843b))))), 0xB1L, 0xADL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_410.xxyxyxyx)).s31)).yyyxyxxx))).s05))).xyxy)), ((VECTOR(uint8_t, 2))(0x0DL, 0xF9L)).xyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(p_1110->g_411.zwzwxwyw)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_412.xzxwxzwz)).s7363032443044651)).sb238))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_413.s14)).xyxyyyxy)).odd))).odd)), 254UL, FAKE_DIVERGE(p_1110->global_1_offset, get_global_id(1), 10), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_414.s33167177)))).even)))))).s75)).yxyx))))), (--(*l_276)), 255UL, 9UL, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(l_417.yyyx)).xzxwzxwy))))))).lo, (uint8_t)p_1110->g_304.x))), 255UL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(p_56, ((VECTOR(uint8_t, 2))(l_418.s78)), 0xE6L, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1110->g_419.s05d0c5032a5c62bf)).even)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_420.xy)), 5UL, 0xB5L)).zzxwyxww, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(1UL, 0xDDL)), p_1110->g_16, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_421.yx)).xyyy)), 1UL))))), (4294967289UL & (((void*)0 == l_422) >= p_58)), p_1110->g_411.z, 0xC4L, 0x3CL)).s48, ((VECTOR(uint8_t, 2))(0xE7L)), ((VECTOR(uint8_t, 2))(0x48L))))), 255UL, p_1110->g_336.s1, 0x64L, 255UL, 0x4BL)).s8 && p_59), p_1110->g_325.w)) , 1L) & p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))]) && p_58) >= l_409.s7) && (-9L)))
                    { /* block id: 148 */
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1110->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 133)), permutations[(safe_mod_func_uint32_t_u_u(p_1110->g_42.s0, 10))][(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))]));
                    }
                    else
                    { /* block id: 152 */
                        int32_t *l_423 = &l_396;
                        l_423 = (*p_1110->g_91);
                        if (p_56)
                            continue;
                        (*l_346) |= p_58;
                    }
                    return p_58;
                }
                (*l_346) = ((&l_346 != l_424[9][3][0]) , p_58);
                l_372 = (void*)0;
                ++l_426;
            }
            l_346 = (*p_1110->g_91);
            for (p_1110->g_94 = (-24); (p_1110->g_94 <= 1); p_1110->g_94++)
            { /* block id: 166 */
                uint32_t l_433 = 1UL;
                union U0 l_462 = {0x3CC8L};
                int32_t *l_463[1][2];
                int32_t l_464 = 0x1B74A193L;
                uint8_t l_465 = 255UL;
                uint32_t l_499 = 4294967295UL;
                VECTOR(uint64_t, 8) l_502 = (VECTOR(uint64_t, 8))(0x43E305F96895D4C6L, (VECTOR(uint64_t, 4))(0x43E305F96895D4C6L, (VECTOR(uint64_t, 2))(0x43E305F96895D4C6L, 1UL), 1UL), 1UL, 0x43E305F96895D4C6L, 1UL);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_463[i][j] = &p_1110->g_118;
                }
                l_433 &= ((GROUP_DIVERGE(0, 1) || ((((safe_add_func_uint8_t_u_u(0UL, 251UL)) , p_1110->g_comm_values[p_1110->tid]) >= p_1110->g_114) && (*l_249))) & p_1110->g_202);
                if ((safe_div_func_int16_t_s_s(1L, ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((p_1110->g_339.sf == (&p_1110->g_202 != ((0x03D8L != (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), 1)) > ((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((-4L), (*l_249))), 0x563285A2L)), ((((l_464 = ((l_462 , &p_60) != &p_1110->g_180)) , (-1L)) , l_465) & p_1110->g_180))) == l_462.f0)) || (-1L)) , p_1110->g_301.s6), p_1110->g_339.sa)), p_1110->g_74))) , (void*)0))), 1)), 1L)), p_1110->g_373[0][2][0].f0)) ^ p_60), 0UL)), p_1110->g_78[3])) || l_464), p_1110->g_411.w)) , p_57))))
                { /* block id: 169 */
                    uint16_t *l_471 = (void*)0;
                    int32_t l_478 = 0L;
                    l_478 &= ((safe_sub_func_uint8_t_u_u(((p_58 > p_1110->g_468) , (safe_div_func_int16_t_s_s((p_1110->g_202 |= (((void*)0 == l_471) || ((p_59 , ((VECTOR(uint8_t, 8))(p_1110->g_472.zwxwwxxx)).s5) <= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_473.xyyxxyyy)).lo)).w))), ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))((-5L), ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1110->g_96[7][1], ((VECTOR(int16_t, 4))((+(safe_sub_func_int32_t_s_s(0x31D9B47EL, (p_60 >= ((safe_div_func_uint16_t_u_u(p_1110->g_419.s7, p_1110->g_325.x)) | p_59))))), (*l_249), 0x48BBL, 4L)), l_433, 0x1CDDL, 0x400DL)).s5634460201542607)).s02)).yyxy, ((VECTOR(int16_t, 4))(0x266AL)), ((VECTOR(int16_t, 4))((-4L)))))), 0x1DACL, (-1L), 5L)).s3436057424041064, ((VECTOR(int16_t, 16))(0x1F07L)), ((VECTOR(int16_t, 16))((-1L)))))).sb))), p_58)) >= 0x39L);
                    if (p_60)
                        continue;
                    l_479 = (*p_1110->g_91);
                    (*l_249) ^= (p_57 == (p_59 && (p_1110->g_65 || (0xDFL ^ (safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1110->group_2_offset, get_group_id(2), 10), 246UL)), (safe_mul_func_int16_t_s_s((&l_471 != l_486), l_462.f0))))))));
                }
                else
                { /* block id: 175 */
                    uint8_t l_489[7][9][4] = {{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}},{{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL},{248UL,0xCEL,252UL,2UL}}};
                    int32_t *l_490 = (void*)0;
                    int i, j, k;
                    for (l_385 = 0; (l_385 <= (-20)); --l_385)
                    { /* block id: 178 */
                        union U0 l_503[3] = {{0x58E1L},{0x58E1L},{0x58E1L}};
                        int i;
                        if (l_489[0][4][2])
                            break;
                        l_490 = (*p_1110->g_91);
                        (*l_249) &= (safe_mul_func_int16_t_s_s(((p_1110->g_32[2][0][4] , p_57) > (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_1110->g_180 & p_1110->g_78[3]) , 0x74L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((safe_lshift_func_uint16_t_u_u(0xE120L, 5)) , ((*l_247) = ((l_499 , ((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_502.s54)).xxyxxxyyyyyxxxxx)).s37)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((p_59 && (l_503[1] , p_1110->g_376.s0)), ((VECTOR(uint64_t, 2))(0xD6AE9E3DE8B0C469L)), 0x789842AB500DC684L)).zzywwxxwxyxxzzwz)).sc3)).yyyx)), 0xC613D382D92A7683L, ((VECTOR(uint64_t, 2))(0UL)), 0xBD452C2C08861422L, p_1110->g_472.x, 4UL, p_1110->g_180, 0x258C0D73B670D85FL, 0xCFA54120BD37EFCDL, 18446744073709551615UL)).s8d15, ((VECTOR(uint64_t, 4))(18446744073709551611UL))))))).yyyzzzwwwwwwyzyz, ((VECTOR(uint64_t, 16))(2UL)), ((VECTOR(uint64_t, 16))(0x824192F102A9893BL))))).hi)).s3, p_58)) && l_503[1].f0)) | l_502.s6))), 0x00L, (-6L), (-3L))).zwzyxwww, ((VECTOR(int8_t, 8))((-1L)))))))).hi)).hi, ((VECTOR(int8_t, 2))(0x04L)), ((VECTOR(int8_t, 2))(7L))))).yxxyyxxy)).s7)), 1))), 0x7068L));
                        return p_1110->g_323.s6;
                    }
                }
                (*p_1110->g_91) = (void*)0;
            }
        }
    }
    (*l_249) = (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(0xA1L, 0x99L)).even, 6));
    (*l_249) = ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_506.s7452263574162167)).lo)).odd)).hi, ((VECTOR(int32_t, 4))(l_507.s95b8)).odd))).lo;
    return p_1110->g_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_91 p_1110->g_96 p_1110->g_6 p_1110->g_42 p_1110->g_71 p_1110->g_114 p_1110->g_48 p_1110->g_94 p_1110->g_154 p_1110->g_165 p_1110->g_32 p_1110->g_92 p_1110->g_3 p_1110->g_73 p_1110->g_213 p_1110->g_118 p_1110->g_comm_values
 * writes: p_1110->g_16 p_1110->g_65 p_1110->g_68 p_1110->g_74 p_1110->g_78 p_1110->g_94 p_1110->g_96 p_1110->l_comm_values p_1110->g_114 p_1110->g_118 p_1110->g_154 p_1110->g_32 p_1110->g_180 p_1110->g_202 p_1110->g_213
 */
uint32_t  func_61(int32_t ** p_62, struct S2 * p_1110)
{ /* block id: 18 */
    int32_t *l_84 = &p_1110->g_78[3];
    uint8_t l_167 = 0x59L;
    int32_t **l_195 = &l_84;
    int16_t *l_201 = &p_1110->g_202;
    union U0 l_207 = {0x4D6AL};
    uint16_t *l_212 = (void*)0;
    uint16_t *l_214 = (void*)0;
    uint16_t *l_215 = (void*)0;
    uint16_t *l_216 = (void*)0;
    uint16_t *l_217[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_218[4][1][9] = {{{0x74C4EFF3L,0x74C4EFF3L,(-9L),1L,(-2L),0x17202116L,1L,5L,1L}},{{0x74C4EFF3L,0x74C4EFF3L,(-9L),1L,(-2L),0x17202116L,1L,5L,1L}},{{0x74C4EFF3L,0x74C4EFF3L,(-9L),1L,(-2L),0x17202116L,1L,5L,1L}},{{0x74C4EFF3L,0x74C4EFF3L,(-9L),1L,(-2L),0x17202116L,1L,5L,1L}}};
    VECTOR(int64_t, 2) l_221 = (VECTOR(int64_t, 2))(0x43345A6AC65B612DL, (-1L));
    uint16_t **l_222 = &l_215;
    uint8_t *l_223 = &p_1110->g_32[2][0][4].f1;
    uint8_t *l_224 = (void*)0;
    uint8_t *l_225 = &l_167;
    int64_t l_226[7];
    int32_t *l_227 = &l_218[0][0][2];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_226[i] = (-3L);
    for (p_1110->g_16 = (-5); (p_1110->g_16 <= 22); p_1110->g_16 = safe_add_func_uint64_t_u_u(p_1110->g_16, 4))
    { /* block id: 21 */
        int32_t l_126 = (-8L);
        int8_t *l_129[10][9][1] = {{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}},{{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94},{&p_1110->g_94}}};
        int32_t l_186 = 0L;
        int32_t l_190 = 0x15242DE1L;
        int i, j, k;
        for (p_1110->g_65 = 4; (p_1110->g_65 > 1); --p_1110->g_65)
        { /* block id: 24 */
            int64_t l_105 = 0x0E731B53E36E8D03L;
            int32_t *l_123 = &p_1110->g_118;
            uint32_t l_138[5];
            uint8_t l_155 = 255UL;
            VECTOR(int32_t, 2) l_171 = (VECTOR(int32_t, 2))(0x20F213F8L, 0L);
            VECTOR(uint64_t, 16) l_172 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
            int i;
            for (i = 0; i < 5; i++)
                l_138[i] = 0x2F1CB2A3L;
            for (p_1110->g_68 = 0; (p_1110->g_68 > 22); p_1110->g_68++)
            { /* block id: 27 */
                int16_t l_86 = (-1L);
                int32_t l_100 = 5L;
                uint64_t *l_113[7][5][7] = {{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}},{{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114},{&p_1110->g_114,&p_1110->g_114,(void*)0,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114,&p_1110->g_114}}};
                int32_t *l_117 = &p_1110->g_118;
                int16_t *l_136 = (void*)0;
                int16_t *l_137 = &l_86;
                int8_t **l_139 = (void*)0;
                int8_t *l_141 = &p_1110->g_94;
                int8_t **l_140 = &l_141;
                uint8_t *l_142 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_143 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_144 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_145 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_146 = (void*)0;
                uint8_t *l_147 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_148 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_149 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_150 = (void*)0;
                uint8_t *l_151 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_152 = &p_1110->g_32[2][0][4].f1;
                uint8_t *l_153[7][7] = {{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154},{&p_1110->g_154,(void*)0,&p_1110->g_154,&p_1110->g_154,&p_1110->g_154,(void*)0,&p_1110->g_154}};
                union U0 l_170 = {0x4445L};
                int32_t l_187 = 1L;
                int32_t l_188 = (-10L);
                int32_t l_189[9][8][3] = {{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}},{{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L},{(-7L),(-4L),7L}}};
                int i, j, k;
                for (p_1110->g_74 = (-1); (p_1110->g_74 >= (-3)); p_1110->g_74 = safe_sub_func_int64_t_s_s(p_1110->g_74, 4))
                { /* block id: 30 */
                    int32_t l_104[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_104[i] = 0L;
                    for (p_1110->g_78[3] = 0; (p_1110->g_78[3] <= 16); p_1110->g_78[3] = safe_add_func_uint32_t_u_u(p_1110->g_78[3], 9))
                    { /* block id: 33 */
                        int8_t *l_93 = &p_1110->g_94;
                        uint32_t *l_95[4];
                        int64_t *l_99 = (void*)0;
                        int32_t l_101 = (-1L);
                        uint16_t l_106 = 4UL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_95[i] = &p_1110->g_96[7][1];
                        l_106 |= ((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((l_84 == (*p_62)))), (safe_unary_minus_func_int32_t_s(l_86)))) == (safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_100 = ((((*l_93) = ((void*)0 != p_1110->g_91)) & (-2L)) , ((p_1110->g_96[5][4]++) | 1L))), (((l_101 ^ ((((p_1110->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1110->tid, 133))] = (safe_add_func_uint16_t_u_u(p_1110->g_74, (-1L)))) < p_1110->g_6) != p_1110->g_78[3]) ^ l_86)) != p_1110->g_42.s6) == (*l_84)))), 0))) | l_104[1]) < l_105);
                        if (l_106)
                            break;
                        l_101 &= (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1110->local_1_offset, get_local_id(1), 10), p_1110->g_42.s5));
                    }
                    for (l_86 = 0; (l_86 > 14); ++l_86)
                    { /* block id: 44 */
                        if (l_100)
                            break;
                    }
                }
                for (p_1110->g_74 = 0; (p_1110->g_74 < (-12)); p_1110->g_74 = safe_sub_func_int32_t_s_s(p_1110->g_74, 1))
                { /* block id: 50 */
                    return (*l_84);
                }
                if ((((*l_117) = (p_1110->g_71 != (++p_1110->g_114))) , (safe_sub_func_int64_t_s_s(0x25E5C784999CA7B6L, (((VECTOR(int16_t, 8))((safe_mod_func_int64_t_s_s(((((l_123 != l_123) && (0x2D1E1EA8L <= (((p_1110->g_154 &= (((l_126 ^ ((safe_mul_func_int16_t_s_s((((l_129[6][2][0] == ((*l_140) = ((~(safe_div_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((*l_137) = p_1110->g_78[3]), ((p_1110->g_48 , (-1L)) | l_100))), (*l_84))) > l_126), l_138[0]))) , l_129[0][8][0]))) || l_105) == (-1L)), 0x0141L)) == p_1110->g_94)) && (*l_84)) , p_1110->g_48)) != l_105) <= GROUP_DIVERGE(1, 1)))) , p_1110->g_48) && l_155), l_138[2])), (-10L), 0x0103L, (-10L), ((VECTOR(int16_t, 2))(0x258DL)), 0x20DBL, 0x245DL)).s3 < p_1110->g_42.s3)))))
                { /* block id: 58 */
                    VECTOR(int32_t, 4) l_164 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3E3FE1ABL), 0x3E3FE1ABL);
                    uint32_t *l_166[6] = {&l_138[0],(void*)0,&l_138[0],&l_138[0],(void*)0,&l_138[0]};
                    union U1 *l_175 = &p_1110->g_32[3][0][3];
                    int64_t *l_176 = &l_105;
                    int64_t *l_177[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int32_t *l_178 = &p_1110->g_74;
                    int32_t *l_179 = &p_1110->g_180;
                    int i, j;
                    for (l_100 = 0; (l_100 >= 1); ++l_100)
                    { /* block id: 61 */
                        (*l_84) ^= (safe_rshift_func_uint8_t_u_u(0UL, 3));
                        return l_126;
                    }
                    (*p_62) = (((*l_179) = ((8L < (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_164.w || (((*l_84) , ((VECTOR(int32_t, 8))(p_1110->g_165.s51242175)).s7) > l_126)) || 1L), (((l_167--) , ((*l_84) , l_170)) , (~(((*l_178) = (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_171.yxyx)).yxyzxwzz)).s2 || l_164.z) && ((((*l_137) &= ((((p_1110->g_118 = ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_172.sbdf83237cef4f583)).odd)))).s5 , ((safe_div_func_int64_t_s_s((l_100 ^= (l_171.y = ((*l_176) = ((((*l_175) = p_1110->g_32[2][0][4]) , l_126) != p_1110->g_48)))), 0x07D8A3BB3813AB97L)) , p_1110->g_16)) , (*l_84))) , l_164.w) ^ (*l_84)) ^ 0x2D08L)) > l_126) , l_138[4])) , l_126)) != (*l_84)))))), p_1110->g_78[3]))) || l_172.se)) , (void*)0);
                }
                else
                { /* block id: 75 */
                    for (l_126 = 25; (l_126 == 2); l_126 = safe_sub_func_int32_t_s_s(l_126, 6))
                    { /* block id: 78 */
                        int32_t *l_183 = &p_1110->g_78[3];
                        int32_t *l_184 = &l_100;
                        int32_t *l_185[1];
                        VECTOR(int8_t, 4) l_191 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x2CL), 0x2CL);
                        uint8_t l_192[4] = {250UL,250UL,250UL,250UL};
                        int i;
                        for (i = 0; i < 1; i++)
                            l_185[i] = (void*)0;
                        (*l_84) = 6L;
                        l_192[0]--;
                    }
                }
            }
            (*p_62) = (*p_1110->g_91);
            return l_138[0];
        }
        if ((**p_1110->g_91))
        { /* block id: 87 */
            if ((*l_84))
                break;
            if (l_186)
                continue;
        }
        else
        { /* block id: 90 */
            (*l_84) = (-7L);
            (*l_84) = 0x25136129L;
        }
    }
    (*l_227) ^= (((l_195 == (void*)0) >= ((safe_unary_minus_func_int32_t_s(8L)) == ((safe_div_func_uint8_t_u_u(p_1110->g_73, (safe_mul_func_uint16_t_u_u(((**l_195) = (((*l_201) = p_1110->g_96[7][1]) , (safe_rshift_func_uint16_t_u_u((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0L, (safe_lshift_func_uint16_t_u_u(65529UL, 10)), 6L, (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))((((l_207 , ((*l_225) &= ((*l_223) = ((((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((p_1110->g_213.s5--) & FAKE_DIVERGE(p_1110->global_0_offset, get_global_id(0), 10)) != (((VECTOR(int64_t, 2))(l_221.xy)).even , ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-3L), 0L, (((*l_222) = l_214) == ((*l_84) , (void*)0)), (-9L), ((VECTOR(int8_t, 2))(0x2FL)), ((VECTOR(int8_t, 8))(7L)), 0x0AL, 0x7AL)).s7b)).hi)), (**l_195))), p_1110->g_165.s0)) || p_1110->g_118) <= 0xD67FAE14L) , (**l_195))))) && (-1L)) , (**l_195)), 65535UL, 0UL, ((VECTOR(uint16_t, 2))(9UL)), ((VECTOR(uint16_t, 2))(0xBB11L)), 65532UL)))).s4 < (**l_195)), (*l_84), 0x5671C78C1057D3ECL, 6L, (-7L))).hi)).w ^ (**l_195)) || (**l_195)) < p_1110->g_78[0]), l_226[5])))), p_1110->g_comm_values[p_1110->tid])))) != FAKE_DIVERGE(p_1110->global_1_offset, get_global_id(1), 10)))) == l_226[5]);
    (*p_62) = (*p_62);
    return (*l_84);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[12];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 12; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[133];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 133; i++)
            l_comm_values[i] = 1;
    struct S2 c_1111;
    struct S2* p_1110 = &c_1111;
    struct S2 c_1112 = {
        1L, // p_1110->g_3
        0x00011151L, // p_1110->g_6
        0L, // p_1110->g_16
        {{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}},{{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}},{{4L},{0x098934ECL},{0L},{-9L},{0L}}}}, // p_1110->g_32
        (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x0C8B8AFEL), 0x0C8B8AFEL), 0x0C8B8AFEL, (-7L), 0x0C8B8AFEL), // p_1110->g_42
        0x1F05BB7EL, // p_1110->g_48
        (-9L), // p_1110->g_65
        (-3L), // p_1110->g_68
        0x07676DC0L, // p_1110->g_71
        0x1BB22B28L, // p_1110->g_72
        0x3082E280L, // p_1110->g_73
        (-1L), // p_1110->g_74
        0x1CDA016EL, // p_1110->g_77
        {1L,1L,1L,1L}, // p_1110->g_78
        {{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}},{{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65},{&p_1110->g_65}}}, // p_1110->g_92
        &p_1110->g_92[4][3][0], // p_1110->g_91
        (-7L), // p_1110->g_94
        {{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL},{0xDEEB808AL,0x96DA1768L,4UL,0x63885E37L,4UL,0x96DA1768L,0xDEEB808AL}}, // p_1110->g_96
        18446744073709551615UL, // p_1110->g_114
        0x7E502840L, // p_1110->g_118
        255UL, // p_1110->g_154
        (VECTOR(int32_t, 8))(0x67F264C0L, (VECTOR(int32_t, 4))(0x67F264C0L, (VECTOR(int32_t, 2))(0x67F264C0L, 4L), 4L), 4L, 0x67F264C0L, 4L), // p_1110->g_165
        0x63D3FF89L, // p_1110->g_180
        0x4D8FL, // p_1110->g_202
        (VECTOR(uint16_t, 8))(0xCFDDL, (VECTOR(uint16_t, 4))(0xCFDDL, (VECTOR(uint16_t, 2))(0xCFDDL, 0UL), 0UL), 0UL, 0xCFDDL, 0UL), // p_1110->g_213
        (VECTOR(int8_t, 16))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, (-4L)), (-4L)), (-4L), 0x77L, (-4L), (VECTOR(int8_t, 2))(0x77L, (-4L)), (VECTOR(int8_t, 2))(0x77L, (-4L)), 0x77L, (-4L), 0x77L, (-4L)), // p_1110->g_301
        (VECTOR(int8_t, 2))(9L, 0x6CL), // p_1110->g_304
        (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0L), 0L), // p_1110->g_322
        (VECTOR(int64_t, 16))(0x700F43A48F00F302L, (VECTOR(int64_t, 4))(0x700F43A48F00F302L, (VECTOR(int64_t, 2))(0x700F43A48F00F302L, 1L), 1L), 1L, 0x700F43A48F00F302L, 1L, (VECTOR(int64_t, 2))(0x700F43A48F00F302L, 1L), (VECTOR(int64_t, 2))(0x700F43A48F00F302L, 1L), 0x700F43A48F00F302L, 1L, 0x700F43A48F00F302L, 1L), // p_1110->g_323
        (VECTOR(int64_t, 4))(0x285B826F6BB8693EL, (VECTOR(int64_t, 2))(0x285B826F6BB8693EL, 1L), 1L), // p_1110->g_325
        (VECTOR(uint16_t, 8))(0x5FABL, (VECTOR(uint16_t, 4))(0x5FABL, (VECTOR(uint16_t, 2))(0x5FABL, 1UL), 1UL), 1UL, 0x5FABL, 1UL), // p_1110->g_336
        (VECTOR(int64_t, 2))(0L, 0x1C9501C377F9DD4EL), // p_1110->g_337
        (VECTOR(uint8_t, 16))(0x57L, (VECTOR(uint8_t, 4))(0x57L, (VECTOR(uint8_t, 2))(0x57L, 0xADL), 0xADL), 0xADL, 0x57L, 0xADL, (VECTOR(uint8_t, 2))(0x57L, 0xADL), (VECTOR(uint8_t, 2))(0x57L, 0xADL), 0x57L, 0xADL, 0x57L, 0xADL), // p_1110->g_339
        (VECTOR(uint8_t, 2))(248UL, 254UL), // p_1110->g_340
        (VECTOR(int64_t, 8))(0x10281E537B93FC86L, (VECTOR(int64_t, 4))(0x10281E537B93FC86L, (VECTOR(int64_t, 2))(0x10281E537B93FC86L, 0x67EDE7A54794A079L), 0x67EDE7A54794A079L), 0x67EDE7A54794A079L, 0x10281E537B93FC86L, 0x67EDE7A54794A079L), // p_1110->g_349
        {{{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}},{{0x39D9L},{0x6BE4L},{0x6BE4L},{0x39D9L},{0x39D9L},{0x6BE4L}}}}, // p_1110->g_373
        (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7C67319CL), 0x7C67319CL), 0x7C67319CL, 4L, 0x7C67319CL), // p_1110->g_376
        (void*)0, // p_1110->g_378
        (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 1UL), 1UL), // p_1110->g_411
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL, (VECTOR(uint8_t, 2))(1UL, 9UL), (VECTOR(uint8_t, 2))(1UL, 9UL), 1UL, 9UL, 1UL, 9UL), // p_1110->g_419
        0L, // p_1110->g_468
        (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x4BL), 0x4BL), // p_1110->g_472
        &p_1110->g_92[5][3][0], // p_1110->g_549
        0xBA91382F9A1716F9L, // p_1110->g_675
        (VECTOR(uint64_t, 2))(0UL, 0xE02955EE0B376E93L), // p_1110->g_678
        &p_1110->g_92[3][3][0], // p_1110->g_688
        0x3E87D0F2L, // p_1110->g_700
        0x205DL, // p_1110->g_707
        (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x10L), 0x10L), // p_1110->g_736
        (VECTOR(int32_t, 8))(0x377015EFL, (VECTOR(int32_t, 4))(0x377015EFL, (VECTOR(int32_t, 2))(0x377015EFL, 0x13D07C8FL), 0x13D07C8FL), 0x13D07C8FL, 0x377015EFL, 0x13D07C8FL), // p_1110->g_797
        &p_1110->g_96[1][4], // p_1110->g_803
        (void*)0, // p_1110->g_819
        {&p_1110->g_819,&p_1110->g_819,&p_1110->g_819,&p_1110->g_819}, // p_1110->g_818
        &p_1110->g_32[2][0][2], // p_1110->g_822
        4294967288UL, // p_1110->g_830
        (void*)0, // p_1110->g_843
        (VECTOR(int64_t, 8))(0x2C0100C56B267AEEL, (VECTOR(int64_t, 4))(0x2C0100C56B267AEEL, (VECTOR(int64_t, 2))(0x2C0100C56B267AEEL, 0x2938019B163F26B8L), 0x2938019B163F26B8L), 0x2938019B163F26B8L, 0x2C0100C56B267AEEL, 0x2938019B163F26B8L), // p_1110->g_850
        0x710DL, // p_1110->g_864
        (void*)0, // p_1110->g_894
        {&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822,&p_1110->g_822}, // p_1110->g_895
        {0L,0L,0L,0L,0L,0L}, // p_1110->g_899
        (VECTOR(int32_t, 16))(0x46536AF3L, (VECTOR(int32_t, 4))(0x46536AF3L, (VECTOR(int32_t, 2))(0x46536AF3L, 0x0D2D7EB6L), 0x0D2D7EB6L), 0x0D2D7EB6L, 0x46536AF3L, 0x0D2D7EB6L, (VECTOR(int32_t, 2))(0x46536AF3L, 0x0D2D7EB6L), (VECTOR(int32_t, 2))(0x46536AF3L, 0x0D2D7EB6L), 0x46536AF3L, 0x0D2D7EB6L, 0x46536AF3L, 0x0D2D7EB6L), // p_1110->g_1032
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int32_t, 2))((-1L), (-2L)), (VECTOR(int32_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L)), // p_1110->g_1108
        0, // p_1110->v_collective
        sequence_input[get_global_id(0)], // p_1110->global_0_offset
        sequence_input[get_global_id(1)], // p_1110->global_1_offset
        sequence_input[get_global_id(2)], // p_1110->global_2_offset
        sequence_input[get_local_id(0)], // p_1110->local_0_offset
        sequence_input[get_local_id(1)], // p_1110->local_1_offset
        sequence_input[get_local_id(2)], // p_1110->local_2_offset
        sequence_input[get_group_id(0)], // p_1110->group_0_offset
        sequence_input[get_group_id(1)], // p_1110->group_1_offset
        sequence_input[get_group_id(2)], // p_1110->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 133)), permutations[0][get_linear_local_id()])), // p_1110->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1111 = c_1112;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1110);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1110->g_3, "p_1110->g_3", print_hash_value);
    transparent_crc(p_1110->g_6, "p_1110->g_6", print_hash_value);
    transparent_crc(p_1110->g_16, "p_1110->g_16", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1110->g_32[i][j][k].f0, "p_1110->g_32[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1110->g_42.s0, "p_1110->g_42.s0", print_hash_value);
    transparent_crc(p_1110->g_42.s1, "p_1110->g_42.s1", print_hash_value);
    transparent_crc(p_1110->g_42.s2, "p_1110->g_42.s2", print_hash_value);
    transparent_crc(p_1110->g_42.s3, "p_1110->g_42.s3", print_hash_value);
    transparent_crc(p_1110->g_42.s4, "p_1110->g_42.s4", print_hash_value);
    transparent_crc(p_1110->g_42.s5, "p_1110->g_42.s5", print_hash_value);
    transparent_crc(p_1110->g_42.s6, "p_1110->g_42.s6", print_hash_value);
    transparent_crc(p_1110->g_42.s7, "p_1110->g_42.s7", print_hash_value);
    transparent_crc(p_1110->g_48, "p_1110->g_48", print_hash_value);
    transparent_crc(p_1110->g_65, "p_1110->g_65", print_hash_value);
    transparent_crc(p_1110->g_68, "p_1110->g_68", print_hash_value);
    transparent_crc(p_1110->g_71, "p_1110->g_71", print_hash_value);
    transparent_crc(p_1110->g_72, "p_1110->g_72", print_hash_value);
    transparent_crc(p_1110->g_73, "p_1110->g_73", print_hash_value);
    transparent_crc(p_1110->g_74, "p_1110->g_74", print_hash_value);
    transparent_crc(p_1110->g_77, "p_1110->g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1110->g_78[i], "p_1110->g_78[i]", print_hash_value);

    }
    transparent_crc(p_1110->g_94, "p_1110->g_94", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1110->g_96[i][j], "p_1110->g_96[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1110->g_114, "p_1110->g_114", print_hash_value);
    transparent_crc(p_1110->g_118, "p_1110->g_118", print_hash_value);
    transparent_crc(p_1110->g_154, "p_1110->g_154", print_hash_value);
    transparent_crc(p_1110->g_165.s0, "p_1110->g_165.s0", print_hash_value);
    transparent_crc(p_1110->g_165.s1, "p_1110->g_165.s1", print_hash_value);
    transparent_crc(p_1110->g_165.s2, "p_1110->g_165.s2", print_hash_value);
    transparent_crc(p_1110->g_165.s3, "p_1110->g_165.s3", print_hash_value);
    transparent_crc(p_1110->g_165.s4, "p_1110->g_165.s4", print_hash_value);
    transparent_crc(p_1110->g_165.s5, "p_1110->g_165.s5", print_hash_value);
    transparent_crc(p_1110->g_165.s6, "p_1110->g_165.s6", print_hash_value);
    transparent_crc(p_1110->g_165.s7, "p_1110->g_165.s7", print_hash_value);
    transparent_crc(p_1110->g_180, "p_1110->g_180", print_hash_value);
    transparent_crc(p_1110->g_202, "p_1110->g_202", print_hash_value);
    transparent_crc(p_1110->g_213.s0, "p_1110->g_213.s0", print_hash_value);
    transparent_crc(p_1110->g_213.s1, "p_1110->g_213.s1", print_hash_value);
    transparent_crc(p_1110->g_213.s2, "p_1110->g_213.s2", print_hash_value);
    transparent_crc(p_1110->g_213.s3, "p_1110->g_213.s3", print_hash_value);
    transparent_crc(p_1110->g_213.s4, "p_1110->g_213.s4", print_hash_value);
    transparent_crc(p_1110->g_213.s5, "p_1110->g_213.s5", print_hash_value);
    transparent_crc(p_1110->g_213.s6, "p_1110->g_213.s6", print_hash_value);
    transparent_crc(p_1110->g_213.s7, "p_1110->g_213.s7", print_hash_value);
    transparent_crc(p_1110->g_301.s0, "p_1110->g_301.s0", print_hash_value);
    transparent_crc(p_1110->g_301.s1, "p_1110->g_301.s1", print_hash_value);
    transparent_crc(p_1110->g_301.s2, "p_1110->g_301.s2", print_hash_value);
    transparent_crc(p_1110->g_301.s3, "p_1110->g_301.s3", print_hash_value);
    transparent_crc(p_1110->g_301.s4, "p_1110->g_301.s4", print_hash_value);
    transparent_crc(p_1110->g_301.s5, "p_1110->g_301.s5", print_hash_value);
    transparent_crc(p_1110->g_301.s6, "p_1110->g_301.s6", print_hash_value);
    transparent_crc(p_1110->g_301.s7, "p_1110->g_301.s7", print_hash_value);
    transparent_crc(p_1110->g_301.s8, "p_1110->g_301.s8", print_hash_value);
    transparent_crc(p_1110->g_301.s9, "p_1110->g_301.s9", print_hash_value);
    transparent_crc(p_1110->g_301.sa, "p_1110->g_301.sa", print_hash_value);
    transparent_crc(p_1110->g_301.sb, "p_1110->g_301.sb", print_hash_value);
    transparent_crc(p_1110->g_301.sc, "p_1110->g_301.sc", print_hash_value);
    transparent_crc(p_1110->g_301.sd, "p_1110->g_301.sd", print_hash_value);
    transparent_crc(p_1110->g_301.se, "p_1110->g_301.se", print_hash_value);
    transparent_crc(p_1110->g_301.sf, "p_1110->g_301.sf", print_hash_value);
    transparent_crc(p_1110->g_304.x, "p_1110->g_304.x", print_hash_value);
    transparent_crc(p_1110->g_304.y, "p_1110->g_304.y", print_hash_value);
    transparent_crc(p_1110->g_322.x, "p_1110->g_322.x", print_hash_value);
    transparent_crc(p_1110->g_322.y, "p_1110->g_322.y", print_hash_value);
    transparent_crc(p_1110->g_322.z, "p_1110->g_322.z", print_hash_value);
    transparent_crc(p_1110->g_322.w, "p_1110->g_322.w", print_hash_value);
    transparent_crc(p_1110->g_323.s0, "p_1110->g_323.s0", print_hash_value);
    transparent_crc(p_1110->g_323.s1, "p_1110->g_323.s1", print_hash_value);
    transparent_crc(p_1110->g_323.s2, "p_1110->g_323.s2", print_hash_value);
    transparent_crc(p_1110->g_323.s3, "p_1110->g_323.s3", print_hash_value);
    transparent_crc(p_1110->g_323.s4, "p_1110->g_323.s4", print_hash_value);
    transparent_crc(p_1110->g_323.s5, "p_1110->g_323.s5", print_hash_value);
    transparent_crc(p_1110->g_323.s6, "p_1110->g_323.s6", print_hash_value);
    transparent_crc(p_1110->g_323.s7, "p_1110->g_323.s7", print_hash_value);
    transparent_crc(p_1110->g_323.s8, "p_1110->g_323.s8", print_hash_value);
    transparent_crc(p_1110->g_323.s9, "p_1110->g_323.s9", print_hash_value);
    transparent_crc(p_1110->g_323.sa, "p_1110->g_323.sa", print_hash_value);
    transparent_crc(p_1110->g_323.sb, "p_1110->g_323.sb", print_hash_value);
    transparent_crc(p_1110->g_323.sc, "p_1110->g_323.sc", print_hash_value);
    transparent_crc(p_1110->g_323.sd, "p_1110->g_323.sd", print_hash_value);
    transparent_crc(p_1110->g_323.se, "p_1110->g_323.se", print_hash_value);
    transparent_crc(p_1110->g_323.sf, "p_1110->g_323.sf", print_hash_value);
    transparent_crc(p_1110->g_325.x, "p_1110->g_325.x", print_hash_value);
    transparent_crc(p_1110->g_325.y, "p_1110->g_325.y", print_hash_value);
    transparent_crc(p_1110->g_325.z, "p_1110->g_325.z", print_hash_value);
    transparent_crc(p_1110->g_325.w, "p_1110->g_325.w", print_hash_value);
    transparent_crc(p_1110->g_336.s0, "p_1110->g_336.s0", print_hash_value);
    transparent_crc(p_1110->g_336.s1, "p_1110->g_336.s1", print_hash_value);
    transparent_crc(p_1110->g_336.s2, "p_1110->g_336.s2", print_hash_value);
    transparent_crc(p_1110->g_336.s3, "p_1110->g_336.s3", print_hash_value);
    transparent_crc(p_1110->g_336.s4, "p_1110->g_336.s4", print_hash_value);
    transparent_crc(p_1110->g_336.s5, "p_1110->g_336.s5", print_hash_value);
    transparent_crc(p_1110->g_336.s6, "p_1110->g_336.s6", print_hash_value);
    transparent_crc(p_1110->g_336.s7, "p_1110->g_336.s7", print_hash_value);
    transparent_crc(p_1110->g_337.x, "p_1110->g_337.x", print_hash_value);
    transparent_crc(p_1110->g_337.y, "p_1110->g_337.y", print_hash_value);
    transparent_crc(p_1110->g_339.s0, "p_1110->g_339.s0", print_hash_value);
    transparent_crc(p_1110->g_339.s1, "p_1110->g_339.s1", print_hash_value);
    transparent_crc(p_1110->g_339.s2, "p_1110->g_339.s2", print_hash_value);
    transparent_crc(p_1110->g_339.s3, "p_1110->g_339.s3", print_hash_value);
    transparent_crc(p_1110->g_339.s4, "p_1110->g_339.s4", print_hash_value);
    transparent_crc(p_1110->g_339.s5, "p_1110->g_339.s5", print_hash_value);
    transparent_crc(p_1110->g_339.s6, "p_1110->g_339.s6", print_hash_value);
    transparent_crc(p_1110->g_339.s7, "p_1110->g_339.s7", print_hash_value);
    transparent_crc(p_1110->g_339.s8, "p_1110->g_339.s8", print_hash_value);
    transparent_crc(p_1110->g_339.s9, "p_1110->g_339.s9", print_hash_value);
    transparent_crc(p_1110->g_339.sa, "p_1110->g_339.sa", print_hash_value);
    transparent_crc(p_1110->g_339.sb, "p_1110->g_339.sb", print_hash_value);
    transparent_crc(p_1110->g_339.sc, "p_1110->g_339.sc", print_hash_value);
    transparent_crc(p_1110->g_339.sd, "p_1110->g_339.sd", print_hash_value);
    transparent_crc(p_1110->g_339.se, "p_1110->g_339.se", print_hash_value);
    transparent_crc(p_1110->g_339.sf, "p_1110->g_339.sf", print_hash_value);
    transparent_crc(p_1110->g_340.x, "p_1110->g_340.x", print_hash_value);
    transparent_crc(p_1110->g_340.y, "p_1110->g_340.y", print_hash_value);
    transparent_crc(p_1110->g_349.s0, "p_1110->g_349.s0", print_hash_value);
    transparent_crc(p_1110->g_349.s1, "p_1110->g_349.s1", print_hash_value);
    transparent_crc(p_1110->g_349.s2, "p_1110->g_349.s2", print_hash_value);
    transparent_crc(p_1110->g_349.s3, "p_1110->g_349.s3", print_hash_value);
    transparent_crc(p_1110->g_349.s4, "p_1110->g_349.s4", print_hash_value);
    transparent_crc(p_1110->g_349.s5, "p_1110->g_349.s5", print_hash_value);
    transparent_crc(p_1110->g_349.s6, "p_1110->g_349.s6", print_hash_value);
    transparent_crc(p_1110->g_349.s7, "p_1110->g_349.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1110->g_373[i][j][k].f0, "p_1110->g_373[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1110->g_376.s0, "p_1110->g_376.s0", print_hash_value);
    transparent_crc(p_1110->g_376.s1, "p_1110->g_376.s1", print_hash_value);
    transparent_crc(p_1110->g_376.s2, "p_1110->g_376.s2", print_hash_value);
    transparent_crc(p_1110->g_376.s3, "p_1110->g_376.s3", print_hash_value);
    transparent_crc(p_1110->g_376.s4, "p_1110->g_376.s4", print_hash_value);
    transparent_crc(p_1110->g_376.s5, "p_1110->g_376.s5", print_hash_value);
    transparent_crc(p_1110->g_376.s6, "p_1110->g_376.s6", print_hash_value);
    transparent_crc(p_1110->g_376.s7, "p_1110->g_376.s7", print_hash_value);
    transparent_crc(p_1110->g_411.x, "p_1110->g_411.x", print_hash_value);
    transparent_crc(p_1110->g_411.y, "p_1110->g_411.y", print_hash_value);
    transparent_crc(p_1110->g_411.z, "p_1110->g_411.z", print_hash_value);
    transparent_crc(p_1110->g_411.w, "p_1110->g_411.w", print_hash_value);
    transparent_crc(p_1110->g_419.s0, "p_1110->g_419.s0", print_hash_value);
    transparent_crc(p_1110->g_419.s1, "p_1110->g_419.s1", print_hash_value);
    transparent_crc(p_1110->g_419.s2, "p_1110->g_419.s2", print_hash_value);
    transparent_crc(p_1110->g_419.s3, "p_1110->g_419.s3", print_hash_value);
    transparent_crc(p_1110->g_419.s4, "p_1110->g_419.s4", print_hash_value);
    transparent_crc(p_1110->g_419.s5, "p_1110->g_419.s5", print_hash_value);
    transparent_crc(p_1110->g_419.s6, "p_1110->g_419.s6", print_hash_value);
    transparent_crc(p_1110->g_419.s7, "p_1110->g_419.s7", print_hash_value);
    transparent_crc(p_1110->g_419.s8, "p_1110->g_419.s8", print_hash_value);
    transparent_crc(p_1110->g_419.s9, "p_1110->g_419.s9", print_hash_value);
    transparent_crc(p_1110->g_419.sa, "p_1110->g_419.sa", print_hash_value);
    transparent_crc(p_1110->g_419.sb, "p_1110->g_419.sb", print_hash_value);
    transparent_crc(p_1110->g_419.sc, "p_1110->g_419.sc", print_hash_value);
    transparent_crc(p_1110->g_419.sd, "p_1110->g_419.sd", print_hash_value);
    transparent_crc(p_1110->g_419.se, "p_1110->g_419.se", print_hash_value);
    transparent_crc(p_1110->g_419.sf, "p_1110->g_419.sf", print_hash_value);
    transparent_crc(p_1110->g_468, "p_1110->g_468", print_hash_value);
    transparent_crc(p_1110->g_472.x, "p_1110->g_472.x", print_hash_value);
    transparent_crc(p_1110->g_472.y, "p_1110->g_472.y", print_hash_value);
    transparent_crc(p_1110->g_472.z, "p_1110->g_472.z", print_hash_value);
    transparent_crc(p_1110->g_472.w, "p_1110->g_472.w", print_hash_value);
    transparent_crc(p_1110->g_675, "p_1110->g_675", print_hash_value);
    transparent_crc(p_1110->g_678.x, "p_1110->g_678.x", print_hash_value);
    transparent_crc(p_1110->g_678.y, "p_1110->g_678.y", print_hash_value);
    transparent_crc(p_1110->g_700, "p_1110->g_700", print_hash_value);
    transparent_crc(p_1110->g_707, "p_1110->g_707", print_hash_value);
    transparent_crc(p_1110->g_736.x, "p_1110->g_736.x", print_hash_value);
    transparent_crc(p_1110->g_736.y, "p_1110->g_736.y", print_hash_value);
    transparent_crc(p_1110->g_736.z, "p_1110->g_736.z", print_hash_value);
    transparent_crc(p_1110->g_736.w, "p_1110->g_736.w", print_hash_value);
    transparent_crc(p_1110->g_797.s0, "p_1110->g_797.s0", print_hash_value);
    transparent_crc(p_1110->g_797.s1, "p_1110->g_797.s1", print_hash_value);
    transparent_crc(p_1110->g_797.s2, "p_1110->g_797.s2", print_hash_value);
    transparent_crc(p_1110->g_797.s3, "p_1110->g_797.s3", print_hash_value);
    transparent_crc(p_1110->g_797.s4, "p_1110->g_797.s4", print_hash_value);
    transparent_crc(p_1110->g_797.s5, "p_1110->g_797.s5", print_hash_value);
    transparent_crc(p_1110->g_797.s6, "p_1110->g_797.s6", print_hash_value);
    transparent_crc(p_1110->g_797.s7, "p_1110->g_797.s7", print_hash_value);
    transparent_crc(p_1110->g_830, "p_1110->g_830", print_hash_value);
    transparent_crc(p_1110->g_850.s0, "p_1110->g_850.s0", print_hash_value);
    transparent_crc(p_1110->g_850.s1, "p_1110->g_850.s1", print_hash_value);
    transparent_crc(p_1110->g_850.s2, "p_1110->g_850.s2", print_hash_value);
    transparent_crc(p_1110->g_850.s3, "p_1110->g_850.s3", print_hash_value);
    transparent_crc(p_1110->g_850.s4, "p_1110->g_850.s4", print_hash_value);
    transparent_crc(p_1110->g_850.s5, "p_1110->g_850.s5", print_hash_value);
    transparent_crc(p_1110->g_850.s6, "p_1110->g_850.s6", print_hash_value);
    transparent_crc(p_1110->g_850.s7, "p_1110->g_850.s7", print_hash_value);
    transparent_crc(p_1110->g_864, "p_1110->g_864", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1110->g_899[i], "p_1110->g_899[i]", print_hash_value);

    }
    transparent_crc(p_1110->g_1032.s0, "p_1110->g_1032.s0", print_hash_value);
    transparent_crc(p_1110->g_1032.s1, "p_1110->g_1032.s1", print_hash_value);
    transparent_crc(p_1110->g_1032.s2, "p_1110->g_1032.s2", print_hash_value);
    transparent_crc(p_1110->g_1032.s3, "p_1110->g_1032.s3", print_hash_value);
    transparent_crc(p_1110->g_1032.s4, "p_1110->g_1032.s4", print_hash_value);
    transparent_crc(p_1110->g_1032.s5, "p_1110->g_1032.s5", print_hash_value);
    transparent_crc(p_1110->g_1032.s6, "p_1110->g_1032.s6", print_hash_value);
    transparent_crc(p_1110->g_1032.s7, "p_1110->g_1032.s7", print_hash_value);
    transparent_crc(p_1110->g_1032.s8, "p_1110->g_1032.s8", print_hash_value);
    transparent_crc(p_1110->g_1032.s9, "p_1110->g_1032.s9", print_hash_value);
    transparent_crc(p_1110->g_1032.sa, "p_1110->g_1032.sa", print_hash_value);
    transparent_crc(p_1110->g_1032.sb, "p_1110->g_1032.sb", print_hash_value);
    transparent_crc(p_1110->g_1032.sc, "p_1110->g_1032.sc", print_hash_value);
    transparent_crc(p_1110->g_1032.sd, "p_1110->g_1032.sd", print_hash_value);
    transparent_crc(p_1110->g_1032.se, "p_1110->g_1032.se", print_hash_value);
    transparent_crc(p_1110->g_1032.sf, "p_1110->g_1032.sf", print_hash_value);
    transparent_crc(p_1110->g_1108.s0, "p_1110->g_1108.s0", print_hash_value);
    transparent_crc(p_1110->g_1108.s1, "p_1110->g_1108.s1", print_hash_value);
    transparent_crc(p_1110->g_1108.s2, "p_1110->g_1108.s2", print_hash_value);
    transparent_crc(p_1110->g_1108.s3, "p_1110->g_1108.s3", print_hash_value);
    transparent_crc(p_1110->g_1108.s4, "p_1110->g_1108.s4", print_hash_value);
    transparent_crc(p_1110->g_1108.s5, "p_1110->g_1108.s5", print_hash_value);
    transparent_crc(p_1110->g_1108.s6, "p_1110->g_1108.s6", print_hash_value);
    transparent_crc(p_1110->g_1108.s7, "p_1110->g_1108.s7", print_hash_value);
    transparent_crc(p_1110->g_1108.s8, "p_1110->g_1108.s8", print_hash_value);
    transparent_crc(p_1110->g_1108.s9, "p_1110->g_1108.s9", print_hash_value);
    transparent_crc(p_1110->g_1108.sa, "p_1110->g_1108.sa", print_hash_value);
    transparent_crc(p_1110->g_1108.sb, "p_1110->g_1108.sb", print_hash_value);
    transparent_crc(p_1110->g_1108.sc, "p_1110->g_1108.sc", print_hash_value);
    transparent_crc(p_1110->g_1108.sd, "p_1110->g_1108.sd", print_hash_value);
    transparent_crc(p_1110->g_1108.se, "p_1110->g_1108.se", print_hash_value);
    transparent_crc(p_1110->g_1108.sf, "p_1110->g_1108.sf", print_hash_value);
    transparent_crc(p_1110->v_collective, "p_1110->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 12; i++)
            transparent_crc(p_1110->l_special_values[i], "p_1110->l_special_values[i]", print_hash_value);
    transparent_crc(p_1110->l_comm_values[get_linear_local_id()], "p_1110->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1110->g_comm_values[get_linear_group_id() * 133 + get_linear_local_id()], "p_1110->g_comm_values[get_linear_group_id() * 133 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
