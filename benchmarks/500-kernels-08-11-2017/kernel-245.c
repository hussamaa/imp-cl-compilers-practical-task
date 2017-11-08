// --atomics 65 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 40,10,15 -l 2,10,5
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

__constant uint32_t permutations[10][100] = {
{24,52,12,34,97,65,74,62,82,3,37,32,19,88,96,47,21,25,95,48,77,89,91,93,8,75,83,50,16,57,20,70,29,59,6,7,92,33,40,64,85,23,22,81,79,2,98,10,35,66,27,80,67,5,1,39,87,86,51,9,94,72,58,90,42,46,18,43,61,4,41,26,17,56,68,73,49,28,63,99,54,13,14,30,31,38,44,78,69,60,36,84,11,45,0,55,76,53,15,71}, // permutation 0
{14,45,72,78,91,89,42,15,63,90,12,65,4,9,21,25,13,80,24,85,57,71,23,50,7,16,44,66,8,67,33,34,17,84,18,39,37,40,28,86,20,96,95,2,54,88,19,56,53,1,79,68,58,49,94,75,22,11,73,3,69,30,83,70,51,43,41,5,77,32,27,55,6,74,59,93,98,26,76,64,10,81,47,48,31,92,46,52,60,97,82,87,35,38,0,99,62,61,36,29}, // permutation 1
{90,98,11,47,61,25,69,42,67,93,97,7,16,59,76,19,70,85,30,71,88,48,20,39,29,21,52,84,89,82,27,44,53,81,24,56,40,73,86,31,34,74,91,37,26,75,83,41,57,46,23,28,17,65,87,22,2,12,33,60,95,77,0,49,43,35,64,78,54,51,58,5,50,14,36,92,79,96,66,15,18,63,1,38,4,13,80,62,9,68,55,8,3,32,72,10,94,45,6,99}, // permutation 2
{32,99,21,72,10,25,29,85,64,58,86,11,37,77,3,92,90,63,89,41,48,7,43,34,87,95,2,97,8,35,94,83,22,1,6,68,80,44,74,69,40,66,28,46,33,4,13,73,53,26,84,81,88,19,23,52,96,57,24,65,79,39,5,59,17,93,30,56,82,27,31,91,9,14,0,55,51,20,54,71,67,98,38,70,45,18,76,16,75,36,61,15,12,42,50,78,60,62,49,47}, // permutation 3
{28,19,17,42,1,50,33,65,68,24,73,44,49,88,27,23,45,14,67,71,70,54,52,96,91,48,64,10,82,66,6,75,77,4,99,26,78,3,83,0,94,53,2,39,40,43,25,55,61,84,36,72,89,63,57,90,5,18,93,8,80,98,56,7,11,74,85,58,47,92,97,79,59,16,81,87,86,62,31,15,76,13,12,46,21,20,41,9,69,29,22,60,35,51,38,30,37,95,32,34}, // permutation 4
{59,54,73,10,91,19,99,6,7,82,30,13,93,56,88,2,29,0,96,37,17,35,76,97,22,49,64,50,84,3,4,71,1,42,14,34,52,40,67,44,63,12,48,98,45,80,72,27,83,60,78,66,21,16,39,31,53,79,5,94,69,18,25,58,65,75,86,57,46,51,89,95,87,55,62,74,77,61,38,15,68,85,26,47,36,24,70,28,90,92,23,32,81,33,41,11,9,8,20,43}, // permutation 5
{59,49,0,43,19,99,54,5,30,27,98,1,63,65,96,35,85,32,51,22,52,47,78,15,95,76,93,37,64,74,7,90,60,26,34,55,56,83,68,25,57,3,71,45,84,16,48,46,10,9,73,88,17,50,33,8,31,39,72,18,77,28,58,66,36,11,21,38,13,62,6,23,61,69,41,14,87,4,2,86,89,40,44,82,53,81,79,67,29,80,12,97,24,75,92,94,91,42,70,20}, // permutation 6
{48,62,82,75,93,22,41,16,12,46,9,38,14,34,30,70,26,71,20,4,31,77,39,29,36,17,60,56,8,28,97,0,3,44,10,50,25,67,85,57,65,27,81,73,92,79,66,72,90,47,7,98,74,51,84,53,69,83,19,68,78,52,64,13,99,11,23,1,94,21,63,91,88,6,59,61,55,42,45,86,49,58,89,33,35,2,37,24,80,87,54,32,18,43,95,15,40,5,76,96}, // permutation 7
{52,61,57,56,46,83,86,69,49,25,19,42,32,45,4,21,51,53,30,66,91,74,95,37,33,23,26,17,71,96,77,99,10,68,75,20,12,54,24,39,97,98,14,7,1,9,87,13,16,31,81,60,90,18,15,58,3,80,28,94,59,67,0,47,11,62,85,65,70,43,78,36,50,40,48,6,55,88,73,82,76,29,22,64,35,89,27,72,38,63,5,2,93,34,79,92,41,84,8,44}, // permutation 8
{43,69,73,18,59,25,38,67,61,7,11,50,93,23,36,39,75,85,10,70,6,56,91,47,24,71,27,94,9,57,19,20,52,86,96,95,33,29,3,81,63,21,79,32,55,49,15,5,46,76,30,83,22,72,45,48,13,53,31,62,89,16,74,2,12,51,97,77,66,68,98,34,84,35,78,4,80,64,42,58,17,0,99,60,26,28,41,1,87,92,88,90,82,44,8,54,37,40,14,65} // permutation 9
};

// Seed: 1405551186

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint32_t g_10;
    uint32_t g_12;
    volatile uint32_t g_16;
    volatile uint32_t * volatile g_15;
    int32_t g_25;
    uint64_t g_26;
    uint32_t g_30;
    VECTOR(int32_t, 4) g_65;
    uint16_t g_69;
    int16_t g_84;
    uint8_t g_93;
    uint64_t g_102[5];
    int8_t g_107;
    int32_t * volatile g_117;
    int32_t * volatile g_118;
    int32_t * volatile g_119[2];
    int32_t * volatile g_120;
    int32_t * volatile g_121;
    int32_t * volatile g_122[5];
    int32_t *g_127;
    int32_t ** volatile g_126;
    int32_t * volatile g_131[4][10];
    int32_t * volatile g_132;
    uint32_t g_135[3][8][1];
    int32_t ** volatile g_142;
    int32_t ** volatile g_143;
    uint8_t g_167;
    volatile int16_t * volatile *g_170;
    int32_t **g_216;
    VECTOR(uint16_t, 8) g_238;
    int16_t **g_288;
    int64_t g_330;
    volatile VECTOR(uint8_t, 4) g_343;
    volatile int64_t g_355;
    volatile int64_t *g_354;
    volatile int64_t **g_353;
    VECTOR(uint8_t, 16) g_365;
    volatile VECTOR(int16_t, 8) g_406;
    VECTOR(uint8_t, 16) g_420;
    volatile VECTOR(int16_t, 2) g_423;
    VECTOR(uint16_t, 4) g_428;
    uint32_t *g_456;
    uint32_t **g_455[3];
    uint32_t *** volatile g_454[4][7];
    int64_t g_470[6][7][6];
    VECTOR(uint8_t, 16) g_538;
    VECTOR(uint8_t, 8) g_539;
    VECTOR(int16_t, 16) g_561;
    VECTOR(int16_t, 16) g_564;
    uint16_t *g_575;
    volatile VECTOR(int32_t, 4) g_581;
    VECTOR(int16_t, 2) g_596;
    volatile VECTOR(int16_t, 16) g_597;
    int16_t *g_625;
    VECTOR(uint64_t, 16) g_628;
    volatile int16_t g_635;
    int32_t g_637;
    volatile VECTOR(int32_t, 4) g_647;
    VECTOR(int64_t, 4) g_653;
    VECTOR(int64_t, 4) g_654;
    VECTOR(int64_t, 8) g_655;
    uint16_t g_665;
    VECTOR(uint16_t, 2) g_679;
    VECTOR(uint16_t, 8) g_681;
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
int64_t  func_1(struct S0 * p_688);
int32_t  func_2(uint32_t  p_3, uint32_t  p_4, uint8_t  p_5, uint16_t  p_6, uint8_t  p_7, struct S0 * p_688);
uint8_t  func_21(uint16_t  p_22, int32_t  p_23, struct S0 * p_688);
uint32_t  func_40(uint64_t  p_41, uint32_t * p_42, uint8_t * p_43, struct S0 * p_688);
int64_t  func_47(uint32_t * p_48, uint32_t  p_49, struct S0 * p_688);
int32_t  func_62(uint64_t  p_63, struct S0 * p_688);
int32_t * func_72(uint8_t  p_73, struct S0 * p_688);
int32_t * func_77(uint32_t  p_78, uint32_t * p_79, int32_t * p_80, struct S0 * p_688);
uint32_t  func_81(int32_t  p_82, struct S0 * p_688);
int16_t * func_87(uint8_t * p_88, int64_t  p_89, int64_t * p_90, uint16_t  p_91, struct S0 * p_688);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_688->g_10 p_688->g_12 p_688->g_comm_values p_688->g_15 p_688->l_comm_values p_688->g_26 p_688->g_30 p_688->g_25 p_688->g_69 p_688->g_16 p_688->g_102 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_135 p_688->g_142 p_688->g_143 p_688->g_93 p_688->g_167 p_688->g_170 p_688->g_127 p_688->g_216 p_688->g_288 p_688->g_353 p_688->g_238 p_688->g_420 p_688->g_423 p_688->g_539 p_688->g_365 p_688->g_470 p_688->g_635 p_688->g_637 p_688->g_647 p_688->g_428 p_688->g_653 p_688->g_654 p_688->g_655 p_688->g_354 p_688->g_538 p_688->g_628 p_688->g_665 p_688->g_575 p_688->g_330 p_688->g_679 p_688->g_681 p_688->g_84 p_688->g_564
 * writes: p_688->g_10 p_688->g_12 p_688->g_26 p_688->g_30 p_688->g_69 p_688->g_84 p_688->g_102 p_688->g_127 p_688->g_135 p_688->g_167 p_688->l_comm_values p_688->g_25 p_688->g_107 p_688->g_comm_values p_688->g_288 p_688->g_455 p_688->g_575 p_688->g_637 p_688->g_665 p_688->g_65
 */
int64_t  func_1(struct S0 * p_688)
{ /* block id: 4 */
    uint32_t *l_9 = &p_688->g_10;
    uint32_t *l_11 = &p_688->g_12;
    int32_t l_19 = 0x3969161DL;
    VECTOR(uint8_t, 2) l_20 = (VECTOR(uint8_t, 2))(1UL, 246UL);
    uint32_t l_33 = 0x891F433CL;
    uint8_t *l_34 = (void*)0;
    int32_t l_35[5];
    int32_t *l_636[9] = {&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637,&p_688->g_637};
    VECTOR(int32_t, 8) l_646 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
    VECTOR(int64_t, 16) l_650 = (VECTOR(int64_t, 16))(0x0127A55AD2FD7798L, (VECTOR(int64_t, 4))(0x0127A55AD2FD7798L, (VECTOR(int64_t, 2))(0x0127A55AD2FD7798L, 0x04E0737809246783L), 0x04E0737809246783L), 0x04E0737809246783L, 0x0127A55AD2FD7798L, 0x04E0737809246783L, (VECTOR(int64_t, 2))(0x0127A55AD2FD7798L, 0x04E0737809246783L), (VECTOR(int64_t, 2))(0x0127A55AD2FD7798L, 0x04E0737809246783L), 0x0127A55AD2FD7798L, 0x04E0737809246783L, 0x0127A55AD2FD7798L, 0x04E0737809246783L);
    VECTOR(int64_t, 2) l_651 = (VECTOR(int64_t, 2))(0x5C464374CE518677L, 0x5D089834F0C68D43L);
    VECTOR(int64_t, 2) l_652 = (VECTOR(int64_t, 2))(0L, 6L);
    int8_t *l_656[3][8][7] = {{{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107}},{{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107}},{{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107},{&p_688->g_107,(void*)0,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107,&p_688->g_107}}};
    VECTOR(int16_t, 16) l_659 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-3L)), (-3L)), (-3L), 5L, (-3L), (VECTOR(int16_t, 2))(5L, (-3L)), (VECTOR(int16_t, 2))(5L, (-3L)), 5L, (-3L), 5L, (-3L));
    int64_t *l_660 = &p_688->g_470[2][0][4];
    uint64_t *l_661 = &p_688->g_26;
    uint16_t *l_664 = &p_688->g_665;
    int8_t l_666 = (-1L);
    VECTOR(int8_t, 16) l_669 = (VECTOR(int8_t, 16))(0x65L, (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, (-7L)), (-7L)), (-7L), 0x65L, (-7L), (VECTOR(int8_t, 2))(0x65L, (-7L)), (VECTOR(int8_t, 2))(0x65L, (-7L)), 0x65L, (-7L), 0x65L, (-7L));
    int16_t l_674 = 0x6C6DL;
    VECTOR(uint16_t, 4) l_680 = (VECTOR(uint16_t, 4))(0x3764L, (VECTOR(uint16_t, 2))(0x3764L, 6UL), 6UL);
    int16_t *l_684 = (void*)0;
    int16_t *l_685 = &p_688->g_84;
    int32_t l_686 = 0L;
    uint32_t l_687 = 0xB277CB17L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_35[i] = 0x03DE7690L;
    p_688->g_637 |= func_2(((*l_9) |= (safe_unary_minus_func_uint64_t_u(0x2FF40FC0272A7275L))), ((*l_11)++), p_688->g_comm_values[p_688->tid], ((void*)0 != p_688->g_15), (safe_div_func_uint8_t_u_u(l_19, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(l_20.xy)).yxyxxxyy, ((VECTOR(uint8_t, 4))(0xC2L, 0x21L, 251UL, 0xE5L)).zyxyxwxy))).even, ((VECTOR(uint8_t, 2))(255UL, 1UL)).yxxy))).lo, ((VECTOR(uint8_t, 8))(255UL, 255UL, func_21(p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))], p_688->g_comm_values[p_688->tid], p_688), (l_35[4] &= (l_33 && l_20.x)), 0x37L, ((VECTOR(uint8_t, 2))(0xACL)), 0x4CL)).s12, ((VECTOR(uint8_t, 2))(0x69L))))).odd)), p_688);
    l_666 = (safe_sub_func_int32_t_s_s((((*l_664) ^= (safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(((*l_661) = ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_646.s64666034)))).lo)).y || ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_688->g_647.wwxxxzxzxzwyxwwx)).sd6ef)).w) <= (((0x5DF0B8E778D85B1EL < (p_688->g_428.x && ((safe_sub_func_uint64_t_u_u((p_688->g_25 > ((((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(l_650.s28f6)), (int64_t)((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 16))(l_651.xyxyxyxxyxxyyyxy)), ((VECTOR(int64_t, 2))(l_652.xx)).yyxxyxxyxyxyyxyy))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(p_688->g_653.yyxxyyzz)))).s7032473115666646))))).odd, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(p_688->g_654.ywyxywyx)).hi, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0L, 0x1AB1EA7584D64483L)))).yxxx))).xzwxyzxw, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_688->g_655.s1722)).xxyzwzyyyzwzyyxx)).even))).s5))).y != p_688->g_470[2][0][4]) && (p_688->g_107 = p_688->g_420.se))), p_688->g_30)) & ((*l_9) |= (safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_688->local_0_offset, get_local_id(0), 10), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_659.se105)).zzwxxxwyxzzwywzw)).s1)))))) , l_660) == (*p_688->g_353)))), (((((safe_sub_func_int8_t_s_s((-1L), 0x70L)) == p_688->g_238.s4) | p_688->g_538.s7) > p_688->g_628.sf) == p_688->g_65.w))), p_688->g_69)), p_688->g_653.w))) & (*p_688->g_575)), p_688->g_330));
    p_688->g_65.w &= (safe_mul_func_uint8_t_u_u(((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_669.s684d95e584a27ff5)))).s8 | p_688->g_330) != ((safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((*p_688->g_15), (1L >= l_674))), (GROUP_DIVERGE(2, 1) , (safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(p_688->g_679.yy)).yyyyyxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_680.wz)).xxxy)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_688->g_681.s11510667)).hi))))))).s3341645731141204))).s7 > ((*l_685) &= (p_688->g_330 | ((p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))] , (-1L)) ^ ((*p_688->g_575)++))))), l_686)) , GROUP_DIVERGE(2, 1)), p_688->g_564.sd))))) < p_688->g_653.z)), p_688->g_135[0][4][0]));
    return l_687;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_26 p_688->g_30 p_688->g_25 p_688->g_10 p_688->g_69 p_688->g_16 p_688->g_102 p_688->g_12 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_15 p_688->g_135 p_688->g_142 p_688->g_143 p_688->g_93 p_688->g_167 p_688->g_170 p_688->g_comm_values p_688->g_127 p_688->g_216 p_688->g_288 p_688->g_353 p_688->g_238 p_688->g_420 p_688->g_423 p_688->g_539 p_688->g_365 p_688->g_470 p_688->g_635
 * writes: p_688->g_26 p_688->g_30 p_688->g_10 p_688->g_69 p_688->g_12 p_688->g_84 p_688->g_102 p_688->g_127 p_688->g_135 p_688->g_167 p_688->l_comm_values p_688->g_25 p_688->g_107 p_688->g_comm_values p_688->g_288 p_688->g_455 p_688->g_575
 */
int32_t  func_2(uint32_t  p_3, uint32_t  p_4, uint8_t  p_5, uint16_t  p_6, uint8_t  p_7, struct S0 * p_688)
{ /* block id: 12 */
    int16_t l_46 = 5L;
    int32_t l_59[10][6][4] = {{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}},{{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L},{(-5L),0x65386951L,1L,1L}}};
    int32_t l_257 = 7L;
    int8_t l_304 = 0L;
    VECTOR(uint16_t, 4) l_361 = (VECTOR(uint16_t, 4))(0xCB47L, (VECTOR(uint16_t, 2))(0xCB47L, 1UL), 1UL);
    VECTOR(uint16_t, 8) l_362 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(uint8_t, 2) l_427 = (VECTOR(uint8_t, 2))(0xB1L, 0UL);
    int16_t *l_443 = &p_688->g_84;
    int16_t **l_442 = &l_443;
    uint8_t l_516 = 0x73L;
    uint32_t **l_529 = (void*)0;
    VECTOR(int16_t, 8) l_535 = (VECTOR(int16_t, 8))(0x6AFEL, (VECTOR(int16_t, 4))(0x6AFEL, (VECTOR(int16_t, 2))(0x6AFEL, 0x6F77L), 0x6F77L), 0x6F77L, 0x6AFEL, 0x6F77L);
    uint32_t l_542 = 0UL;
    VECTOR(uint16_t, 2) l_546 = (VECTOR(uint16_t, 2))(65535UL, 0x42E2L);
    int64_t *l_556 = &p_688->g_330;
    uint32_t *l_570 = &p_688->g_12;
    uint32_t *l_605 = &p_688->g_30;
    int i, j, k;
    for (p_4 = (-21); (p_4 < 28); p_4++)
    { /* block id: 15 */
        int16_t l_44 = (-5L);
        int32_t *l_45 = &p_688->g_25;
        int64_t *l_58 = (void*)0;
        int16_t *l_291[7][5][2] = {{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}},{{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84},{&l_44,&p_688->g_84}}};
        int16_t **l_290[9][4][7] = {{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}},{{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]},{&l_291[5][3][0],(void*)0,&l_291[5][3][0],&l_291[5][3][0],&l_291[5][3][0],(void*)0,&l_291[5][3][0]}}};
        int32_t l_302 = 0x33F045B8L;
        int32_t l_305 = (-1L);
        int32_t l_308 = 0L;
        VECTOR(int32_t, 16) l_309 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int32_t, 2))(1L, (-2L)), (VECTOR(int32_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L));
        uint32_t l_313 = 0x8335E80BL;
        VECTOR(int64_t, 4) l_327 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x0A1C8D3CF32B178EL), 0x0A1C8D3CF32B178EL);
        VECTOR(uint8_t, 2) l_363 = (VECTOR(uint8_t, 2))(0xEFL, 0UL);
        VECTOR(int16_t, 4) l_375 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0L), 0L);
        VECTOR(uint8_t, 16) l_387 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 246UL), 246UL), 246UL, 6UL, 246UL, (VECTOR(uint8_t, 2))(6UL, 246UL), (VECTOR(uint8_t, 2))(6UL, 246UL), 6UL, 246UL, 6UL, 246UL);
        int64_t *l_390 = (void*)0;
        int64_t *l_391 = (void*)0;
        int64_t *l_392 = (void*)0;
        int64_t *l_393 = (void*)0;
        int64_t *l_394 = (void*)0;
        int64_t *l_395 = (void*)0;
        int64_t *l_396 = (void*)0;
        int64_t *l_397 = (void*)0;
        int64_t *l_398 = (void*)0;
        int64_t *l_399[3];
        VECTOR(int32_t, 2) l_402 = (VECTOR(int32_t, 2))((-2L), 1L);
        VECTOR(uint32_t, 2) l_403 = (VECTOR(uint32_t, 2))(0xA501A820L, 1UL);
        uint64_t *l_407 = (void*)0;
        uint64_t *l_408[3][9] = {{&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26},{&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26},{&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26,&p_688->g_26}};
        uint32_t *l_409 = &p_688->g_10;
        int32_t *l_410 = &l_302;
        VECTOR(int64_t, 4) l_413 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1C8F25B84F4EA6EFL), 0x1C8F25B84F4EA6EFL);
        VECTOR(uint8_t, 16) l_426 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x87L), 0x87L), 0x87L, 9UL, 0x87L, (VECTOR(uint8_t, 2))(9UL, 0x87L), (VECTOR(uint8_t, 2))(9UL, 0x87L), 9UL, 0x87L, 9UL, 0x87L);
        uint16_t *l_429 = (void*)0;
        VECTOR(int32_t, 2) l_436 = (VECTOR(int32_t, 2))((-1L), 1L);
        int32_t ***l_437 = &p_688->g_216;
        uint8_t l_438 = 0xA5L;
        int32_t l_439 = (-3L);
        uint64_t l_472 = 18446744073709551610UL;
        VECTOR(int16_t, 8) l_479 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1553L), 0x1553L), 0x1553L, (-1L), 0x1553L);
        VECTOR(uint32_t, 16) l_530 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 4294967293UL), 4294967293UL, 1UL, 4294967293UL, (VECTOR(uint32_t, 2))(1UL, 4294967293UL), (VECTOR(uint32_t, 2))(1UL, 4294967293UL), 1UL, 4294967293UL, 1UL, 4294967293UL);
        uint32_t **l_567 = (void*)0;
        VECTOR(int16_t, 8) l_595 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_399[i] = (void*)0;
        if ((((p_688->g_26 , (safe_sub_func_int64_t_s_s(p_3, ((l_257 = (func_40(func_21(l_44, (((void*)0 == l_45) ^ l_46), p_688), (func_47(&p_688->g_12, (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))((safe_lshift_func_int8_t_s_s((((VECTOR(uint64_t, 16))(0xF74462D17F4926A6L, (safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((l_59[2][3][3] ^= ((((((+(safe_add_func_int16_t_s_s(p_688->g_12, l_46))) <= l_46) , p_688->g_16) & p_688->g_25) , l_46) , p_688->g_10)) <= p_688->g_12), p_5)) == p_688->g_12) == p_688->g_25), p_5)), 0x86BE7BEB33E2D464L, ((VECTOR(uint64_t, 8))(1UL)), GROUP_DIVERGE(2, 1), (*l_45), l_59[2][3][3], 0xB28538E7D4845EB5L, 0xD78F30ED53B0E2D3L)).s0 != 0x0A455C58EAAB991CL), p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))])), 7UL, 0x5DA103C1L, 0x237583F0L)).zyyxwxzxzxzzxwxy, ((VECTOR(uint32_t, 16))(0x9F44AA84L))))).s5225)).x == 0x63695F89L), p_688) , &p_3), &p_688->g_93, p_688) < p_3)) , 0x9BF1DC84013ACE50L)))) | 4294967295UL) == 0x52L))
        { /* block id: 118 */
            int16_t l_263 = 0x710AL;
            int32_t l_296 = (-1L);
            int32_t l_301 = (-2L);
            int32_t l_303 = 0x1B014DF7L;
            int32_t l_306 = (-10L);
            int32_t l_307 = 6L;
            int32_t l_310 = 0x20719BDAL;
            int32_t l_311 = 7L;
            VECTOR(uint16_t, 4) l_360 = (VECTOR(uint16_t, 4))(0x43A5L, (VECTOR(uint16_t, 2))(0x43A5L, 0x163DL), 0x163DL);
            int i;
            for (p_688->g_167 = 0; (p_688->g_167 == 31); p_688->g_167++)
            { /* block id: 121 */
                uint8_t l_262 = 0UL;
                int32_t l_297 = 0x2D172BB0L;
                int32_t l_298 = 0x0DE7A2E8L;
                int32_t l_299 = 0x61758EF8L;
                int32_t l_300[7][7] = {{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)},{0x4A1B1FD5L,0x7AAC522FL,0x7A5466D1L,(-1L),0x4E734453L,0x4A1B1FD5L,(-1L)}};
                VECTOR(int8_t, 16) l_312 = (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x6DL), 0x6DL), 0x6DL, 0x4DL, 0x6DL, (VECTOR(int8_t, 2))(0x4DL, 0x6DL), (VECTOR(int8_t, 2))(0x4DL, 0x6DL), 0x4DL, 0x6DL, 0x4DL, 0x6DL);
                uint64_t *l_319 = (void*)0;
                uint32_t l_331 = 0xF4989546L;
                int64_t l_352 = 0x1389EBB0C670EF22L;
                VECTOR(uint8_t, 16) l_364 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x99L), 0x99L), 0x99L, 0UL, 0x99L, (VECTOR(uint8_t, 2))(0UL, 0x99L), (VECTOR(uint8_t, 2))(0UL, 0x99L), 0UL, 0x99L, 0UL, 0x99L);
                int8_t l_376 = (-1L);
                VECTOR(int64_t, 2) l_377 = (VECTOR(int64_t, 2))(0x5A4B82A37BEC88CBL, 1L);
                int i, j;
                for (p_7 = 6; (p_7 >= 19); p_7 = safe_add_func_int16_t_s_s(p_7, 1))
                { /* block id: 124 */
                    (*p_688->g_216) = func_72(l_262, p_688);
                    (*p_688->g_127) = l_263;
                }
                if ((atomic_inc(&p_688->g_atomic_input[65 * get_linear_group_id() + 59]) == 1))
                { /* block id: 129 */
                    VECTOR(uint64_t, 16) l_264 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0xE6516B4FDA9A762BL), 0xE6516B4FDA9A762BL), 0xE6516B4FDA9A762BL, 6UL, 0xE6516B4FDA9A762BL, (VECTOR(uint64_t, 2))(6UL, 0xE6516B4FDA9A762BL), (VECTOR(uint64_t, 2))(6UL, 0xE6516B4FDA9A762BL), 6UL, 0xE6516B4FDA9A762BL, 6UL, 0xE6516B4FDA9A762BL);
                    uint32_t l_265 = 0x6B4E3119L;
                    int8_t l_266[3];
                    int64_t l_267 = (-7L);
                    VECTOR(int32_t, 16) l_268 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int32_t, 2))((-7L), (-1L)), (VECTOR(int32_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
                    int8_t l_269 = 0L;
                    uint32_t l_270 = 0UL;
                    VECTOR(uint64_t, 4) l_283 = (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xF993C56AF30037DBL), 0xF993C56AF30037DBL);
                    uint64_t l_284[7][10] = {{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL},{0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL,0xFFF82B4B9AB1E80AL}};
                    uint8_t l_285 = 0UL;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_266[i] = 7L;
                    l_266[2] &= (l_265 = l_264.sc);
                    l_270 |= (l_269 = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_267, (-1L), (-1L), 0L)), ((VECTOR(int32_t, 8))(l_268.s56451bf5)).odd))).y);
                    for (l_268.s4 = 13; (l_268.s4 > 29); ++l_268.s4)
                    { /* block id: 136 */
                        uint32_t l_273 = 4294967294UL;
                        uint32_t l_274 = 0x9CC66D77L;
                        int32_t l_275 = 0L;
                        int8_t l_276 = 1L;
                        uint32_t l_277[6];
                        VECTOR(uint32_t, 8) l_278 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967288UL), 4294967288UL), 4294967288UL, 0UL, 4294967288UL);
                        uint32_t l_279 = 0UL;
                        int32_t l_280 = (-3L);
                        uint16_t l_281 = 8UL;
                        int16_t l_282 = 0x1FF8L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_277[i] = 0x8859DBF2L;
                        l_280 &= ((l_273 , ((l_274 , (l_276 = l_275)) , ((l_277[1] |= 0L) , ((VECTOR(uint32_t, 2))(l_278.s55)).odd))) , (l_279 = ((VECTOR(int32_t, 2))(0x5E0B6282L, 0L)).hi));
                        l_281 = ((VECTOR(int32_t, 2))(0x7F0A3790L, 0x32F4127EL)).hi;
                        l_282 = 1L;
                    }
                    l_268.s5 ^= (l_285 &= (l_283.x , l_284[1][1]));
                    unsigned int result = 0;
                    result += l_264.sf;
                    result += l_264.se;
                    result += l_264.sd;
                    result += l_264.sc;
                    result += l_264.sb;
                    result += l_264.sa;
                    result += l_264.s9;
                    result += l_264.s8;
                    result += l_264.s7;
                    result += l_264.s6;
                    result += l_264.s5;
                    result += l_264.s4;
                    result += l_264.s3;
                    result += l_264.s2;
                    result += l_264.s1;
                    result += l_264.s0;
                    result += l_265;
                    int l_266_i0;
                    for (l_266_i0 = 0; l_266_i0 < 3; l_266_i0++) {
                        result += l_266[l_266_i0];
                    }
                    result += l_267;
                    result += l_268.sf;
                    result += l_268.se;
                    result += l_268.sd;
                    result += l_268.sc;
                    result += l_268.sb;
                    result += l_268.sa;
                    result += l_268.s9;
                    result += l_268.s8;
                    result += l_268.s7;
                    result += l_268.s6;
                    result += l_268.s5;
                    result += l_268.s4;
                    result += l_268.s3;
                    result += l_268.s2;
                    result += l_268.s1;
                    result += l_268.s0;
                    result += l_269;
                    result += l_270;
                    result += l_283.w;
                    result += l_283.z;
                    result += l_283.y;
                    result += l_283.x;
                    int l_284_i0, l_284_i1;
                    for (l_284_i0 = 0; l_284_i0 < 7; l_284_i0++) {
                        for (l_284_i1 = 0; l_284_i1 < 10; l_284_i1++) {
                            result += l_284[l_284_i0][l_284_i1];
                        }
                    }
                    result += l_285;
                    atomic_add(&p_688->g_special_values[65 * get_linear_group_id() + 59], result);
                }
                else
                { /* block id: 146 */
                    (1 + 1);
                }
                for (p_688->g_107 = 0; (p_688->g_107 < 23); p_688->g_107 = safe_add_func_uint16_t_u_u(p_688->g_107, 3))
                { /* block id: 151 */
                    int16_t ***l_289[9][5][5] = {{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}},{{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288},{&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288,&p_688->g_288}}};
                    int32_t l_293[10][1][10] = {{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}},{{1L,7L,1L,0x00EB62A1L,1L,7L,1L,(-8L),0L,0L}}};
                    VECTOR(int64_t, 4) l_326 = (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-10L)), (-10L));
                    int64_t **l_350[7][3][9] = {{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}},{{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58},{&l_58,&l_58,(void*)0,&l_58,&l_58,&l_58,&l_58,&l_58,&l_58}}};
                    int i, j, k;
                    if (((l_290[1][1][6] = p_688->g_288) != (void*)0))
                    { /* block id: 153 */
                        uint32_t *l_292 = (void*)0;
                        int32_t *l_294 = &l_293[6][0][9];
                        int32_t *l_295[1][6];
                        int64_t l_316 = 0x26E8E74EF5AFA5C4L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_295[i][j] = &l_257;
                        }
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_688->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[(safe_mod_func_uint32_t_u_u((l_293[2][0][4] = GROUP_DIVERGE(2, 1)), 10))][(safe_mod_func_uint32_t_u_u(p_688->tid, 100))]));
                        ++l_313;
                        (*p_688->g_216) = l_295[0][5];
                        return l_316;
                    }
                    else
                    { /* block id: 161 */
                        VECTOR(int64_t, 4) l_328 = (VECTOR(int64_t, 4))(0x0BCC4756F381B8B4L, (VECTOR(int64_t, 2))(0x0BCC4756F381B8B4L, 5L), 5L);
                        int64_t *l_329 = &p_688->g_330;
                        int64_t *l_332 = (void*)0;
                        int64_t *l_333 = (void*)0;
                        int64_t *l_334 = (void*)0;
                        int64_t *l_335 = (void*)0;
                        int64_t *l_336 = (void*)0;
                        int64_t *l_337 = (void*)0;
                        int64_t *l_338 = (void*)0;
                        int64_t *l_339 = (void*)0;
                        int32_t *l_340 = &l_305;
                        uint8_t *l_366 = (void*)0;
                        uint8_t *l_373 = (void*)0;
                        uint8_t *l_374[5][2];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_374[i][j] = &l_262;
                        }
                        (*l_340) |= ((safe_rshift_func_int16_t_s_s(p_6, 14)) == ((l_319 == &p_688->g_102[2]) <= ((p_4 < ((65535UL <= ((VECTOR(int16_t, 8))(0x5D0EL, (((l_300[5][4] = (((**p_688->g_216) = ((~((safe_lshift_func_int8_t_s_u(4L, (safe_div_func_int8_t_s_s(((&l_291[5][3][0] != ((safe_mul_func_int8_t_s_s((((0L >= (((*l_329) = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_326.zyzwxyzz)).s25)), (-6L), 9L)).even, ((VECTOR(int64_t, 8))(l_327.wwyxyzwz)).s35))).even, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_328.wz)))), ((p_688->g_135[0][2][0] ^= ((p_5 <= 8UL) != p_688->g_30)) == p_3), ((VECTOR(int64_t, 4))(0L)))).lo)).lo, ((VECTOR(int64_t, 2))(0x16DDCFA3B222DCC6L)), ((VECTOR(int64_t, 2))((-1L)))))).yxyx, ((VECTOR(int64_t, 4))(0L))))))))).y) , 7UL)) | (-1L)) != 18446744073709551613UL), 0xC5L)) , (void*)0)) != 0x63D6987798425376L), 255UL)))) & l_331)) & p_7)) == p_5)) != p_7) < p_7), 1L, 0x6901L, 0x5B3FL, 0L, 0L, (-1L))).s0) == l_263)) == l_263)));
                        (*l_45) = ((0x35L > ((((VECTOR(uint8_t, 8))(p_688->g_343.zwywwzzw)).s6 == ((~(*p_688->g_127)) | (safe_mod_func_int32_t_s_s((*p_688->g_127), ((VECTOR(uint32_t, 2))(6UL, 0xBA4CB459L)).lo)))) & p_3)) || (((safe_sub_func_uint8_t_u_u(((0x6BF8L > p_7) | (l_350[3][1][8] == ((safe_unary_minus_func_int8_t_s(l_352)) , p_688->g_353))), (-1L))) >= 0x3160L) >= p_688->g_comm_values[p_688->tid]));
                        (*p_688->g_127) = ((*l_340) = (safe_sub_func_uint8_t_u_u(p_3, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x60L, 1L, p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))], (!((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(l_360.yxww)).wxwywyyw, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0UL, 65526UL, 0x9A80L, 65527UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_361.ww)).xxyy)))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(65526UL, 0x3D0FL, 0xB31EL, 5UL)).yxwywwyywxwxwwxw)).even))))).s3273442166407117)).se6)).xxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(l_362.s43077366)), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(l_363.yyyyxyxxxyxyyyxy)), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(1UL, 0xA7L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(l_364.sf15e6d43)), ((VECTOR(uint8_t, 16))(p_688->g_365.s59f06d6da98d16f1)).lo))).s4712012744640625, (uint8_t)((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x82L, 0xCCL)), 255UL, 8UL)).even, ((VECTOR(uint8_t, 8))(((l_366 == &p_688->g_167) | ((safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((p_688->g_365.s4 ^= (safe_rshift_func_int8_t_s_u(p_688->g_330, 1))) , (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_375.yzxz)))).w >= l_376)), 4294967295UL)) == p_5) && (((((VECTOR(int64_t, 4))(l_377.yyxx)).z >= p_6) , &p_688->g_107) == &p_688->g_107)), p_5)) & 0UL)), l_331, 249UL, 0x7AL, ((VECTOR(uint8_t, 4))(249UL)))).s13))).hi))), ((VECTOR(uint8_t, 16))(0x97L))))).s28)))), p_6, l_299, 255UL, 0x7FL)).s17, ((VECTOR(uint8_t, 2))(0x96L))))).xxxxyyyyyyxxxxyx))).even))), ((VECTOR(uint16_t, 8))(0x1A69L))))).s35, ((VECTOR(uint16_t, 2))(1UL))))), 0x0E5BL, 65532UL)).even, ((VECTOR(uint16_t, 2))(0x2AFEL)), ((VECTOR(uint16_t, 2))(0x8A76L))))))).xyxxyyyyyxxyyxxx, ((VECTOR(uint16_t, 16))(0x97A7L))))).s24f0)), ((VECTOR(uint16_t, 4))(0xA8B3L))))).y, l_262)) > l_310)), 0x2DL, ((VECTOR(int8_t, 2))(7L)), 0x2EL)).s5631754451547003)))).se)));
                    }
                }
            }
        }
        else
        { /* block id: 174 */
            uint32_t l_378 = 0x79F5BF23L;
            l_257 = ((**p_688->g_216) ^= (1L >= l_361.y));
            l_378 |= (&l_59[2][3][3] == &l_305);
            return p_4;
        }
        (*l_410) &= (safe_mul_func_int16_t_s_s(p_4, (!((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((((*l_409) = (safe_rshift_func_int8_t_s_u(((p_5 && ((((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_387.sa0)).yyyyyyxy)).even)).z , ((safe_div_func_int16_t_s_s((((p_688->g_comm_values[p_688->tid] = ((*l_45) | p_4)) && (l_257 = ((*l_45) & (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(0x3AE30058L, (-1L))).yxyx, ((VECTOR(int32_t, 16))(l_402.xyxxxyxxyyxxyyxy)).sf99b))).y, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_403.yyyx)), 2UL, (*p_688->g_15), (p_5 == (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(p_688->g_406.s11403746)).s3, FAKE_DIVERGE(p_688->group_1_offset, get_group_id(1), 10)))), ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_46, 0x0B8A0C6FL, 0x77D67678L, (-9L))).yzxwxzyzwyywwwwy)).hi, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(9L, ((VECTOR(int32_t, 2))((-1L))), 5L, p_7, p_6, 0L, 0L)).s01)).yyyxxxyxyyyyyxyy))).even))), 6UL)), ((VECTOR(uint32_t, 16))(9UL))))).s65)).yxyxxxyx, ((VECTOR(uint32_t, 8))(9UL))))).s0))))) , 0x4BBAL), p_6)) == 0x686DL)) , p_6) & p_3) == p_688->g_238.s5) , p_4) ^ p_688->g_102[4])) == p_5), (*l_45)))) || (**p_688->g_216)), 5)) , p_5), l_361.x)) != 0L))));
        l_439 = ((&l_46 != (void*)0) >= ((safe_div_func_uint16_t_u_u((5UL && ((VECTOR(int64_t, 16))(l_413.yyxywyxyxyxxxwwy)).sd), (((*l_409) = (safe_add_func_int32_t_s_s((l_59[2][3][3] |= (safe_lshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_688->g_420.s751e2a2b)).s0760774310631664)).sc, (safe_mod_func_int16_t_s_s(p_4, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(p_688->g_423.xxxxyxyx)).s50, ((VECTOR(int16_t, 2))(4L, 0x49A8L))))).yxyxxxxx)).s77)).yxyyxyxx)).s0)))) == (safe_mul_func_uint16_t_u_u((((*l_410) ^ 9L) == (((VECTOR(uint8_t, 16))(l_426.sdb51e6ffa7bbcc71)).sc > ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(252UL, 0UL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_427.yxxyxyxy)).hi)).hi))).lo)), FAKE_DIVERGE(p_688->local_1_offset, get_local_id(1), 10)))) >= (((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_688->g_428.ywyx)))).yxywyzwy, (uint16_t)(p_688->g_428.y &= FAKE_DIVERGE(p_688->group_0_offset, get_group_id(0), 10)), (uint16_t)(0x52496DDCL || (((p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))] = (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((VECTOR(int32_t, 8))(l_436.yxxyxyyy)).s4 < p_3), (l_437 != (void*)0))), l_438)), l_46))) && l_362.s5) , p_3))))).s1 | p_3)), 1))), p_5))) | p_688->g_102[0]))) || p_5));
        if ((safe_mod_func_uint64_t_u_u((l_59[2][3][3] = ((&p_688->g_102[0] == (void*)0) && (((p_688->g_288 = l_442) == (void*)0) <= FAKE_DIVERGE(p_688->local_0_offset, get_local_id(0), 10)))), p_4)))
        { /* block id: 191 */
            uint32_t **l_453 = (void*)0;
            int32_t l_468 = 0L;
            int32_t l_469[6][9][4] = {{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}},{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}},{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}},{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}},{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}},{{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L},{0x6625EC16L,0L,(-6L),0x7366FD57L}}};
            int32_t l_471 = 0x134D6537L;
            VECTOR(uint8_t, 4) l_476 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 255UL), 255UL);
            uint32_t *l_492 = &p_688->g_135[0][4][0];
            int64_t *l_540 = &p_688->g_330;
            int16_t *l_624 = &p_688->g_84;
            int i, j, k;
            for (l_308 = 8; (l_308 == 3); l_308 = safe_sub_func_int32_t_s_s(l_308, 1))
            { /* block id: 194 */
                uint32_t l_450 = 0x3CC8F09DL;
                uint32_t ***l_457 = &p_688->g_455[1];
                for (p_688->g_107 = 6; (p_688->g_107 <= (-2)); p_688->g_107 = safe_sub_func_int64_t_s_s(p_688->g_107, 4))
                { /* block id: 197 */
                    int32_t *l_448 = (void*)0;
                    int32_t *l_449[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_449[i] = &l_59[2][3][3];
                    l_450--;
                }
                (*l_457) = l_453;
            }
            for (p_7 = 0; (p_7 <= 13); p_7 = safe_add_func_int16_t_s_s(p_7, 4))
            { /* block id: 204 */
                int32_t *l_460 = &p_688->g_25;
                int32_t *l_461 = &l_439;
                int32_t *l_462 = (void*)0;
                int32_t *l_463 = &l_257;
                int32_t *l_464 = &l_257;
                int32_t *l_465 = &p_688->g_25;
                int32_t *l_466 = &l_59[9][3][1];
                int32_t *l_467[4][7][5] = {{{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257}},{{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257}},{{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257}},{{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257},{&l_257,&l_305,&l_308,&l_305,&l_257}}};
                VECTOR(uint8_t, 8) l_475 = (VECTOR(uint8_t, 8))(0x39L, (VECTOR(uint8_t, 4))(0x39L, (VECTOR(uint8_t, 2))(0x39L, 255UL), 255UL), 255UL, 0x39L, 255UL);
                uint8_t *l_477[6];
                uint8_t l_478 = 1UL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_477[i] = &p_688->g_167;
                ++l_472;
                (*p_688->g_216) = func_72((l_478 ^= ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(1UL, 0xD3L)).yxxxxxxy, ((VECTOR(uint8_t, 16))(l_475.s4276145005317104)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_476.zzzwzyyz)).hi)).yzyxzzzx))).s7), p_688);
                if (p_6)
                    break;
            }
            if (((~(p_7 > (*l_410))) && ((**l_442) = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_479.s5044)).lo)).lo)))
            { /* block id: 211 */
                int64_t l_507 = 1L;
                int32_t l_509 = 9L;
                int32_t l_510 = 0x28234684L;
                int32_t l_512 = 7L;
                int32_t l_515 = 0x7492855CL;
                uint32_t *l_543[3];
                uint64_t *l_565 = &l_472;
                uint32_t **l_569 = &p_688->g_456;
                int i;
                for (i = 0; i < 3; i++)
                    l_543[i] = (void*)0;
                for (p_3 = 20; (p_3 != 43); ++p_3)
                { /* block id: 214 */
                    int32_t *l_484 = &l_308;
                    int8_t l_487 = (-1L);
                    int32_t l_505 = 0x0F56725CL;
                    int32_t l_508 = 4L;
                    int32_t l_511 = 0x4E2653A7L;
                    int32_t l_513 = 0L;
                    int32_t l_514 = (-1L);
                    for (l_439 = 0; (l_439 != 27); l_439++)
                    { /* block id: 217 */
                        (*p_688->g_216) = l_484;
                    }
                    for (l_257 = 0; (l_257 < (-5)); l_257--)
                    { /* block id: 222 */
                        uint8_t *l_495[2][4] = {{&l_438,&l_438,&l_438,&l_438},{&l_438,&l_438,&l_438,&l_438}};
                        int32_t *l_498 = &l_302;
                        int32_t *l_499 = &l_469[4][6][2];
                        int32_t *l_500 = &l_439;
                        int32_t *l_501 = (void*)0;
                        int32_t *l_502 = (void*)0;
                        int32_t *l_503 = (void*)0;
                        int32_t *l_504 = &l_302;
                        int32_t *l_506[5][10];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_506[i][j] = &l_59[2][0][1];
                        }
                        (*l_45) |= ((*l_410) = l_487);
                        l_59[2][3][3] = (1UL ^ ((((safe_lshift_func_int16_t_s_s((~p_7), 15)) > (safe_lshift_func_uint16_t_u_u(((void*)0 != l_492), 5))) , (safe_sub_func_int64_t_s_s(p_5, 0x5B626F459E65582EL))) > (++p_688->g_167)));
                        ++l_516;
                    }
                    if (p_7)
                        break;
                }
                if ((safe_lshift_func_int8_t_s_u(p_688->g_420.s3, l_361.x)))
                { /* block id: 231 */
                    int32_t *l_531 = &l_510;
                    int64_t **l_541 = &l_540;
                    VECTOR(int16_t, 2) l_545 = (VECTOR(int16_t, 2))(0L, 0x28FFL);
                    int i;
                    if ((atomic_inc(&p_688->g_atomic_input[65 * get_linear_group_id() + 19]) == 8))
                    { /* block id: 233 */
                        int32_t l_521 = 8L;
                        uint16_t l_522 = 1UL;
                        int32_t *l_525 = (void*)0;
                        int32_t *l_526 = &l_521;
                        --l_522;
                        l_525 = (void*)0;
                        l_526 = (void*)0;
                        unsigned int result = 0;
                        result += l_521;
                        result += l_522;
                        atomic_add(&p_688->g_special_values[65 * get_linear_group_id() + 19], result);
                    }
                    else
                    { /* block id: 237 */
                        (1 + 1);
                    }
                    (*l_45) |= (safe_rshift_func_uint16_t_u_u(((p_5 , 0x21L) | 0UL), (l_529 != (((VECTOR(uint32_t, 2))(l_530.s85)).lo , l_529))));
                    l_531 = func_72(p_688->g_423.x, p_688);
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))((safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s((l_471 &= ((VECTOR(int16_t, 8))(l_535.s20742743)).s1), ((safe_sub_func_int64_t_s_s(((((((&p_688->g_330 != ((*l_541) = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_688->g_538.sea3bd537))))))), 2UL, (65535UL >= (*l_410)), ((VECTOR(uint8_t, 2))(p_688->g_539.s63)), (*l_531), ((VECTOR(uint8_t, 2))(255UL, 0UL)), 0xA7L)).sb , ((!l_512) , l_540)))) , l_492) != l_492) | ((void*)0 != &p_688->g_288)) >= p_4) == l_507), p_688->g_330)) | l_469[2][4][0]))))), 0x1CB97A2EL, 0x548837E4L, ((VECTOR(int32_t, 2))(0x455C0D69L)), ((VECTOR(int32_t, 2))((-2L))), 0x58F79787L)), ((VECTOR(int32_t, 8))(7L))))).odd, ((VECTOR(int32_t, 4))(0x52EB7908L))))).yyyyywwzxwxxyxyx)).sc)
                    { /* block id: 244 */
                        if (l_542)
                            break;
                        if (p_4)
                            break;
                        (*l_45) = ((void*)0 == l_543[0]);
                    }
                    else
                    { /* block id: 248 */
                        int64_t ***l_544 = &l_541;
                        (*l_544) = &l_540;
                        (**l_437) = l_531;
                        (*p_688->g_127) |= (((**l_442) = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_545.yxxxyxxxyxyxyxyx)).sd7)).even) && ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xBBA5L, 65535UL)), 0x1EBFL, 3UL)))).lo)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_546.xyxy)).yxzzzxxzwwyyyxwx)).sbf))))).even);
                    }
                }
                else
                { /* block id: 254 */
                    int16_t l_566 = 0x758CL;
                    int64_t **l_576 = (void*)0;
                    int32_t *l_630 = &l_515;
                    for (l_471 = 0; (l_471 != 13); l_471 = safe_add_func_uint32_t_u_u(l_471, 1))
                    { /* block id: 257 */
                        uint64_t l_553 = 18446744073709551611UL;
                        uint32_t ***l_568[6][8][5] = {{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}},{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}},{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}},{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}},{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}},{{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567},{&p_688->g_455[1],&l_567,&p_688->g_455[2],&p_688->g_455[2],&l_567}}};
                        int8_t *l_571 = &l_304;
                        uint16_t **l_574[9] = {&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429,&l_429};
                        uint32_t *l_592 = &p_688->g_30;
                        uint64_t **l_598 = (void*)0;
                        uint64_t **l_599 = &l_408[2][6];
                        int32_t l_604 = 1L;
                        int i, j, k;
                        (**l_437) = &l_512;
                        (*l_45) = (((*l_571) ^= p_688->g_539.s2) <= ((l_257 = ((((*l_410) &= ((VECTOR(int32_t, 2))(0x509B3893L, 1L)).odd) >= ((safe_add_func_uint16_t_u_u(((p_688->g_575 = &p_688->g_69) != &p_688->g_69), (l_576 == ((((0L && p_688->g_365.s7) < ((p_688->g_470[2][0][4] , (((((safe_rshift_func_uint16_t_u_s((((((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0L, 9L)).xyyyxxyy, ((VECTOR(int32_t, 2))(p_688->g_581.zw)).xxyyyyxx))).s7 & ((p_3 , ((**p_688->g_216) & p_688->g_167)) <= 0L)) , l_510) , l_515), 7)) <= 0x412EL) , 9L) <= 0x31E9AEBFL) || FAKE_DIVERGE(p_688->global_0_offset, get_global_id(0), 10))) < p_5)) ^ 0L) , (void*)0)))) != p_3)) > p_4)) && 1UL));
                        (*p_688->g_127) = (((*l_599) = (((+l_507) & (safe_mod_func_uint64_t_u_u((((p_688->g_135[1][4][0] , p_4) && (p_4 && ((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((++p_7), (((((((safe_mul_func_uint16_t_u_u((((*l_592) |= 0x90AD60A9L) , ((*l_410) <= ((safe_lshift_func_int16_t_s_s((l_566 == l_553), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 16))(0x26B5L, ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(l_595.s1170)), ((VECTOR(int16_t, 16))(0x6002L, 0x48B8L, ((VECTOR(int16_t, 2))(p_688->g_596.yy)), ((VECTOR(int16_t, 4))(p_688->g_597.sa1a5)), 0x0B8AL, 7L, 1L, p_3, 0x1D45L, 8L, 0x6B38L, 0x42CEL)).s8a07)))))).xwwxwyyy)), ((VECTOR(int16_t, 8))(0x0B2CL))))), ((VECTOR(int16_t, 2))(0x216FL)), p_3, ((VECTOR(int16_t, 4))((-10L))))).even, (int16_t)0x13EFL, (int16_t)l_553))).s23, ((VECTOR(int16_t, 2))(7L))))).yxyyyxyy)).s7)) <= (**p_688->g_216)))), l_566)) , (**p_688->g_143)) , 0xE1L) & FAKE_DIVERGE(p_688->global_0_offset, get_global_id(0), 10)) == GROUP_DIVERGE(2, 1)) >= l_566) || p_4))) ^ p_688->g_65.w), p_5)) | p_3))) || 0x46L), p_3))) , &p_688->g_26)) == (void*)0);
                        (*p_688->g_127) = (safe_add_func_uint8_t_u_u(((l_571 == (l_507 , &p_688->g_107)) >= ((l_604 = (++(*l_492))) < (*p_688->g_15))), ((void*)0 == l_605)));
                    }
                    for (l_510 = (-27); (l_510 == (-14)); l_510 = safe_add_func_int32_t_s_s(l_510, 4))
                    { /* block id: 275 */
                        uint64_t l_629 = 6UL;
                        int32_t **l_631 = &l_410;
                        (*p_688->g_216) = (*p_688->g_142);
                    }
                }
                return p_5;
            }
            else
            { /* block id: 288 */
                uint32_t l_632 = 4294967288UL;
                if (l_476.z)
                    break;
                (**p_688->g_216) &= l_632;
            }
            if ((*l_410))
                continue;
        }
        else
        { /* block id: 293 */
            (***l_437) = (safe_add_func_int32_t_s_s(p_688->g_635, ((*l_410) = 0x7DFC5A02L)));
        }
    }
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_26 p_688->g_30 p_688->g_25
 * writes: p_688->g_26 p_688->g_30
 */
uint8_t  func_21(uint16_t  p_22, int32_t  p_23, struct S0 * p_688)
{ /* block id: 7 */
    int32_t *l_24[4];
    int16_t l_29 = 6L;
    int i;
    for (i = 0; i < 4; i++)
        l_24[i] = &p_688->g_25;
    ++p_688->g_26;
    p_688->g_30--;
    return p_688->g_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_216 p_688->g_126 p_688->g_127
 * writes: p_688->g_127
 */
uint32_t  func_40(uint64_t  p_41, uint32_t * p_42, uint8_t * p_43, struct S0 * p_688)
{ /* block id: 101 */
    (*p_688->g_216) = p_42;
    if ((atomic_inc(&p_688->l_atomic_input[31]) == 4))
    { /* block id: 104 */
        VECTOR(int32_t, 4) l_249 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x6C4FDCA3L), 0x6C4FDCA3L);
        uint64_t l_250 = 1UL;
        int64_t l_253 = 7L;
        int64_t *l_252 = &l_253;
        int64_t **l_251 = &l_252;
        int i;
        l_250 &= (((VECTOR(int32_t, 4))(l_249.wwyw)).x , 1L);
        l_251 = (void*)0;
        for (l_249.x = 23; (l_249.x <= (-26)); l_249.x = safe_sub_func_uint16_t_u_u(l_249.x, 1))
        { /* block id: 109 */
            int64_t l_256 = 0x21759A175C95F3D1L;
            l_256 = 0L;
        }
        unsigned int result = 0;
        result += l_249.w;
        result += l_249.z;
        result += l_249.y;
        result += l_249.x;
        result += l_250;
        result += l_253;
        atomic_add(&p_688->l_special_values[31], result);
    }
    else
    { /* block id: 112 */
        (1 + 1);
    }
    (*p_688->g_216) = (*p_688->g_126);
    return (*p_42);
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_10 p_688->g_69 p_688->g_25 p_688->g_16 p_688->g_102 p_688->g_12 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_15 p_688->g_135 p_688->g_142 p_688->g_143 p_688->g_93 p_688->g_167 p_688->g_170 p_688->g_comm_values p_688->g_127 p_688->g_238 p_688->g_84 p_688->g_216
 * writes: p_688->g_10 p_688->g_69 p_688->g_12 p_688->g_84 p_688->g_102 p_688->g_127 p_688->g_135 p_688->g_167 p_688->l_comm_values
 */
int64_t  func_47(uint32_t * p_48, uint32_t  p_49, struct S0 * p_688)
{ /* block id: 17 */
    int16_t l_188[7] = {0x49E1L,0x49E1L,0x49E1L,0x49E1L,0x49E1L,0x49E1L,0x49E1L};
    int32_t l_190 = 0L;
    int32_t l_191 = 0L;
    int32_t l_193 = 0x0EC81A7DL;
    int32_t l_194 = 0x5061E88AL;
    uint16_t l_197[3];
    int32_t **l_211 = &p_688->g_127;
    int64_t *l_220[9][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_248 = (void*)0;
    int32_t **l_247 = &l_248;
    int i, j;
    for (i = 0; i < 3; i++)
        l_197[i] = 7UL;
    for (p_688->g_10 = 7; (p_688->g_10 != 25); ++p_688->g_10)
    { /* block id: 20 */
        VECTOR(uint32_t, 2) l_176 = (VECTOR(uint32_t, 2))(0xE18C4BA0L, 0x665395D1L);
        int32_t l_189 = (-1L);
        int32_t l_192 = 0x6859488BL;
        int32_t l_195 = 0x215FA5D2L;
        int32_t l_196 = 0x086D6786L;
        int32_t **l_215[2][9][10] = {{{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127}},{{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127},{(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127,(void*)0,&p_688->g_127,(void*)0,&p_688->g_127,&p_688->g_127,&p_688->g_127}}};
        VECTOR(int64_t, 16) l_219 = (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x125FBF1FA647FE29L), 0x125FBF1FA647FE29L), 0x125FBF1FA647FE29L, (-9L), 0x125FBF1FA647FE29L, (VECTOR(int64_t, 2))((-9L), 0x125FBF1FA647FE29L), (VECTOR(int64_t, 2))((-9L), 0x125FBF1FA647FE29L), (-9L), 0x125FBF1FA647FE29L, (-9L), 0x125FBF1FA647FE29L);
        int64_t *l_232 = (void*)0;
        int64_t **l_233 = &l_232;
        int16_t *l_245 = &p_688->g_84;
        uint16_t *l_246 = &p_688->g_69;
        int i, j, k;
        if (func_62(p_688->g_10, p_688))
        { /* block id: 71 */
            int32_t *l_174 = (void*)0;
            int32_t *l_175 = (void*)0;
            int32_t *l_177 = (void*)0;
            int32_t *l_178 = (void*)0;
            int32_t *l_179 = (void*)0;
            int32_t *l_180 = (void*)0;
            int32_t *l_181 = (void*)0;
            int32_t l_182 = 3L;
            int32_t *l_183 = &l_182;
            int32_t *l_184 = &l_182;
            int32_t *l_185 = &l_182;
            int32_t *l_186 = (void*)0;
            int32_t *l_187[10] = {&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182,&l_182};
            int i;
            l_176.y = 0L;
            l_182 |= 1L;
            if (l_176.x)
                continue;
            ++l_197[1];
        }
        else
        { /* block id: 76 */
            int64_t *l_208 = (void*)0;
            int32_t ***l_212 = (void*)0;
            int32_t ***l_213 = (void*)0;
            int32_t ***l_214[1][7][8] = {{{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211},{&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211,&l_211}}};
            int64_t *l_217 = (void*)0;
            int64_t *l_218[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j, k;
            (*l_211) = (*p_688->g_142);
            for (l_196 = 21; (l_196 < 10); --l_196)
            { /* block id: 86 */
                VECTOR(int32_t, 16) l_223 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
                int i;
                if (l_223.se)
                    break;
            }
            if (p_49)
                break;
            return p_49;
        }
        l_191 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((!p_49) & p_49), 5)), (safe_div_func_int16_t_s_s((+(safe_mul_func_uint16_t_u_u(0xB9EDL, ((*l_246) = ((l_220[8][0] == ((*l_233) = l_232)) || (((safe_div_func_uint8_t_u_u(p_688->g_16, FAKE_DIVERGE(p_688->group_1_offset, get_group_id(1), 10))) < (safe_mod_func_uint32_t_u_u(((((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(p_688->g_238.s34)), ((VECTOR(uint16_t, 8))(0x0B66L, (((safe_lshift_func_int16_t_s_u((~((safe_lshift_func_int16_t_s_u(((*l_245) |= ((~(&p_688->g_10 == ((safe_mod_func_int64_t_s_s(((p_688->g_10 >= (p_49 , p_688->g_135[0][4][0])) == p_688->g_93), 1UL)) , &p_688->g_135[0][4][0]))) || p_49)), p_688->g_135[1][6][0])) ^ p_49)), p_688->g_93)) | p_49) || 0x1FL), ((VECTOR(uint16_t, 4))(0x7B99L)), 0xF3DAL, 0xFC5AL)).s07))).even > p_688->g_135[0][4][0]) , 0x6B503DA0L), p_49))) | p_49)))))), p_688->g_102[3]))));
        if (p_49)
            break;
    }
    (*l_247) = ((*p_688->g_216) = (*l_211));
    return p_688->g_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_69 p_688->g_10 p_688->g_12 p_688->g_25 p_688->g_16 p_688->g_102 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_15 p_688->g_84 p_688->g_135 p_688->g_142 p_688->g_143 p_688->g_93 p_688->g_167 p_688->g_170 p_688->g_comm_values p_688->g_127
 * writes: p_688->g_69 p_688->g_12 p_688->g_84 p_688->g_102 p_688->g_127 p_688->g_135 p_688->g_167 p_688->l_comm_values
 */
int32_t  func_62(uint64_t  p_63, struct S0 * p_688)
{ /* block id: 21 */
    int32_t *l_64 = (void*)0;
    int32_t *l_66 = (void*)0;
    int32_t *l_67[7];
    int8_t l_68 = 0x32L;
    int32_t **l_153 = &l_64;
    VECTOR(int16_t, 16) l_154 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
    uint32_t *l_157 = &p_688->g_12;
    uint8_t *l_166 = &p_688->g_167;
    int64_t *l_171 = (void*)0;
    int64_t *l_172[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_173 = 0xF0C7D882661FF626L;
    int i, j;
    for (i = 0; i < 7; i++)
        l_67[i] = (void*)0;
    p_688->g_69--;
    (*l_153) = func_72(p_688->g_10, p_688);
    l_173 = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_154.s65d65041d7accda1)).s3051)).w , ((*l_64) && ((safe_mod_func_int64_t_s_s((p_688->l_comm_values[(safe_mod_func_uint32_t_u_u(p_688->tid, 100))] = ((((l_157 = &p_688->g_12) != ((p_63 , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(p_688->g_107, 12)), 6))) , l_66)) && ((p_688->g_93 ^ (safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((&p_688->g_102[0] != &p_63) <= (((*l_166)--) && ((((((&p_688->g_102[0] != &p_63) , p_63) | 0xCCBAE7F3L) , 0x0EL) , p_688->g_170) == (void*)0))), 65528UL)) != 0x6482B05BCD613677L), p_688->g_comm_values[p_688->tid]))) , p_688->g_12)) > (*p_688->g_15))), p_688->g_102[1])) <= p_688->g_10)));
    (*p_688->g_142) = ((*l_153) = (*p_688->g_143));
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_12 p_688->g_25 p_688->g_16 p_688->g_102 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_15 p_688->g_84 p_688->g_135 p_688->g_142 p_688->g_143
 * writes: p_688->g_12 p_688->g_84 p_688->g_102 p_688->g_127 p_688->g_135
 */
int32_t * func_72(uint8_t  p_73, struct S0 * p_688)
{ /* block id: 23 */
    int32_t *l_76 = &p_688->g_25;
    int16_t *l_83 = &p_688->g_84;
    uint32_t *l_134 = &p_688->g_135[0][4][0];
    int32_t *l_144 = (void*)0;
    int32_t *l_145 = (void*)0;
    int32_t *l_146 = (void*)0;
    int32_t l_147 = (-7L);
    int32_t *l_148[3];
    uint8_t l_149 = 247UL;
    int32_t *l_152 = &p_688->g_25;
    int i;
    for (i = 0; i < 3; i++)
        l_148[i] = &l_147;
    for (p_688->g_12 = (-12); (p_688->g_12 < 37); ++p_688->g_12)
    { /* block id: 26 */
        return l_76;
    }
    (*p_688->g_143) = func_77(((*l_134) = func_81(((*l_76) == ((*l_83) = p_688->g_16)), p_688)), l_134, l_134, p_688);
    l_149++;
    return l_152;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_12 p_688->g_84 p_688->g_135 p_688->g_142
 * writes: p_688->g_12 p_688->g_84 p_688->g_135 p_688->g_127
 */
int32_t * func_77(uint32_t  p_78, uint32_t * p_79, int32_t * p_80, struct S0 * p_688)
{ /* block id: 47 */
    uint32_t l_138 = 1UL;
    int32_t *l_141 = (void*)0;
    for (p_688->g_12 = 0; (p_688->g_12 >= 35); p_688->g_12 = safe_add_func_uint64_t_u_u(p_688->g_12, 9))
    { /* block id: 50 */
        atomic_or(&p_688->g_atomic_reduction[get_linear_group_id()], l_138 + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_688->v_collective += p_688->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    for (p_688->g_84 = (-6); (p_688->g_84 >= 26); p_688->g_84 = safe_add_func_int32_t_s_s(p_688->g_84, 1))
    { /* block id: 55 */
        (*p_80) |= 0x317EE62AL;
        (*p_688->g_142) = l_141;
    }
    return l_141;
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_102 p_688->g_12 p_688->g_16 p_688->g_107 p_688->g_65 p_688->g_126 p_688->g_15
 * writes: p_688->g_102 p_688->g_127
 */
uint32_t  func_81(int32_t  p_82, struct S0 * p_688)
{ /* block id: 30 */
    int16_t *l_86 = &p_688->g_84;
    int16_t **l_85 = &l_86;
    uint8_t *l_92 = &p_688->g_93;
    int32_t l_100 = (-1L);
    uint64_t *l_101 = &p_688->g_102[0];
    int64_t *l_105 = (void*)0;
    int8_t *l_106[4][1][4];
    int32_t l_108 = 0x597B2851L;
    int32_t *l_111 = (void*)0;
    int32_t *l_112 = (void*)0;
    int32_t *l_113 = (void*)0;
    uint32_t l_114 = 0xC852239BL;
    uint16_t l_115 = 1UL;
    int16_t *l_130 = &p_688->g_84;
    int16_t **l_129 = &l_130;
    int32_t *l_133 = &l_100;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_106[i][j][k] = &p_688->g_107;
        }
    }
    (*l_133) = (((*l_85) = (void*)0) == ((*l_129) = func_87(l_92, (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_115 = ((safe_sub_func_uint8_t_u_u(((++(*l_101)) , (((l_108 = ((l_100 |= p_688->g_12) , 0x01L)) | (((safe_unary_minus_func_uint8_t_u(((safe_unary_minus_func_uint64_t_u(3UL)) == p_82))) > (l_114 = (-1L))) >= p_688->g_16)) <= ((void*)0 == l_105))), 0xF8L)) , 0x45L)), p_688->g_107)), p_688->g_65.x)), l_105, p_688->g_65.x, p_688)));
    return (*p_688->g_15);
}


/* ------------------------------------------ */
/* 
 * reads : p_688->g_126
 * writes: p_688->g_127
 */
int16_t * func_87(uint8_t * p_88, int64_t  p_89, int64_t * p_90, uint16_t  p_91, struct S0 * p_688)
{ /* block id: 37 */
    uint32_t l_116 = 0x14EDB9FEL;
    int32_t l_123 = 0x0FF4D6F5L;
    int32_t *l_124 = &l_123;
    int32_t **l_125 = (void*)0;
    int16_t *l_128 = &p_688->g_84;
    l_123 |= (l_116 &= p_89);
    (*p_688->g_126) = (l_124 = &l_123);
    return l_128;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[65];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 65; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[100];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 100; i++)
            l_comm_values[i] = 1;
    struct S0 c_689;
    struct S0* p_688 = &c_689;
    struct S0 c_690 = {
        0xA66E58D0L, // p_688->g_10
        0x60E704F3L, // p_688->g_12
        4294967295UL, // p_688->g_16
        &p_688->g_16, // p_688->g_15
        3L, // p_688->g_25
        0x578CCA69919C44D4L, // p_688->g_26
        0xBE67E784L, // p_688->g_30
        (VECTOR(int32_t, 4))(0x6CE8F170L, (VECTOR(int32_t, 2))(0x6CE8F170L, 0x63F81597L), 0x63F81597L), // p_688->g_65
        0x0AF0L, // p_688->g_69
        0x30A8L, // p_688->g_84
        1UL, // p_688->g_93
        {0x776ED3A1DB9036F6L,0x776ED3A1DB9036F6L,0x776ED3A1DB9036F6L,0x776ED3A1DB9036F6L,0x776ED3A1DB9036F6L}, // p_688->g_102
        (-1L), // p_688->g_107
        (void*)0, // p_688->g_117
        (void*)0, // p_688->g_118
        {(void*)0,(void*)0}, // p_688->g_119
        (void*)0, // p_688->g_120
        (void*)0, // p_688->g_121
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_688->g_122
        &p_688->g_25, // p_688->g_127
        &p_688->g_127, // p_688->g_126
        {{&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,(void*)0,(void*)0,(void*)0},{&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,(void*)0,(void*)0,(void*)0},{&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,(void*)0,(void*)0,(void*)0},{&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,&p_688->g_25,(void*)0,(void*)0,(void*)0}}, // p_688->g_131
        (void*)0, // p_688->g_132
        {{{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L}},{{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L}},{{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L},{0x9A722961L}}}, // p_688->g_135
        &p_688->g_127, // p_688->g_142
        &p_688->g_127, // p_688->g_143
        0x3BL, // p_688->g_167
        (void*)0, // p_688->g_170
        &p_688->g_127, // p_688->g_216
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x9793L), 0x9793L), 0x9793L, 65535UL, 0x9793L), // p_688->g_238
        (void*)0, // p_688->g_288
        (-2L), // p_688->g_330
        (VECTOR(uint8_t, 4))(0x17L, (VECTOR(uint8_t, 2))(0x17L, 0xD3L), 0xD3L), // p_688->g_343
        1L, // p_688->g_355
        &p_688->g_355, // p_688->g_354
        &p_688->g_354, // p_688->g_353
        (VECTOR(uint8_t, 16))(0x95L, (VECTOR(uint8_t, 4))(0x95L, (VECTOR(uint8_t, 2))(0x95L, 255UL), 255UL), 255UL, 0x95L, 255UL, (VECTOR(uint8_t, 2))(0x95L, 255UL), (VECTOR(uint8_t, 2))(0x95L, 255UL), 0x95L, 255UL, 0x95L, 255UL), // p_688->g_365
        (VECTOR(int16_t, 8))(0x3151L, (VECTOR(int16_t, 4))(0x3151L, (VECTOR(int16_t, 2))(0x3151L, (-2L)), (-2L)), (-2L), 0x3151L, (-2L)), // p_688->g_406
        (VECTOR(uint8_t, 16))(0xB2L, (VECTOR(uint8_t, 4))(0xB2L, (VECTOR(uint8_t, 2))(0xB2L, 255UL), 255UL), 255UL, 0xB2L, 255UL, (VECTOR(uint8_t, 2))(0xB2L, 255UL), (VECTOR(uint8_t, 2))(0xB2L, 255UL), 0xB2L, 255UL, 0xB2L, 255UL), // p_688->g_420
        (VECTOR(int16_t, 2))(0x42CEL, 0x5B1EL), // p_688->g_423
        (VECTOR(uint16_t, 4))(0xE5D1L, (VECTOR(uint16_t, 2))(0xE5D1L, 0xA330L), 0xA330L), // p_688->g_428
        &p_688->g_12, // p_688->g_456
        {&p_688->g_456,&p_688->g_456,&p_688->g_456}, // p_688->g_455
        {{&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0]},{&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0]},{&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0]},{&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0],&p_688->g_455[1],&p_688->g_455[0],&p_688->g_455[0]}}, // p_688->g_454
        {{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}},{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}},{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}},{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}},{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}},{{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL},{0x496F211CF366366DL,(-1L),0x5C5E1D0384186096L,(-1L),0x496F211CF366366DL,0x496F211CF366366DL}}}, // p_688->g_470
        (VECTOR(uint8_t, 16))(0x4BL, (VECTOR(uint8_t, 4))(0x4BL, (VECTOR(uint8_t, 2))(0x4BL, 0xA0L), 0xA0L), 0xA0L, 0x4BL, 0xA0L, (VECTOR(uint8_t, 2))(0x4BL, 0xA0L), (VECTOR(uint8_t, 2))(0x4BL, 0xA0L), 0x4BL, 0xA0L, 0x4BL, 0xA0L), // p_688->g_538
        (VECTOR(uint8_t, 8))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0x55L), 0x55L), 0x55L, 0xDEL, 0x55L), // p_688->g_539
        (VECTOR(int16_t, 16))(0x7A21L, (VECTOR(int16_t, 4))(0x7A21L, (VECTOR(int16_t, 2))(0x7A21L, 0x7B89L), 0x7B89L), 0x7B89L, 0x7A21L, 0x7B89L, (VECTOR(int16_t, 2))(0x7A21L, 0x7B89L), (VECTOR(int16_t, 2))(0x7A21L, 0x7B89L), 0x7A21L, 0x7B89L, 0x7A21L, 0x7B89L), // p_688->g_561
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L), (VECTOR(int16_t, 2))(1L, (-5L)), (VECTOR(int16_t, 2))(1L, (-5L)), 1L, (-5L), 1L, (-5L)), // p_688->g_564
        &p_688->g_69, // p_688->g_575
        (VECTOR(int32_t, 4))(0x390356A0L, (VECTOR(int32_t, 2))(0x390356A0L, (-7L)), (-7L)), // p_688->g_581
        (VECTOR(int16_t, 2))(0x7406L, 0x58DCL), // p_688->g_596
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_688->g_597
        (void*)0, // p_688->g_625
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_688->g_628
        (-1L), // p_688->g_635
        (-9L), // p_688->g_637
        (VECTOR(int32_t, 4))(0x6C02DB9BL, (VECTOR(int32_t, 2))(0x6C02DB9BL, 0x3193CC09L), 0x3193CC09L), // p_688->g_647
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 9L), 9L), // p_688->g_653
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1D08B33D944EFB4FL), 0x1D08B33D944EFB4FL), // p_688->g_654
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_688->g_655
        0x1B97L, // p_688->g_665
        (VECTOR(uint16_t, 2))(0xFC7CL, 0x7586L), // p_688->g_679
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL), // p_688->g_681
        0, // p_688->v_collective
        sequence_input[get_global_id(0)], // p_688->global_0_offset
        sequence_input[get_global_id(1)], // p_688->global_1_offset
        sequence_input[get_global_id(2)], // p_688->global_2_offset
        sequence_input[get_local_id(0)], // p_688->local_0_offset
        sequence_input[get_local_id(1)], // p_688->local_1_offset
        sequence_input[get_local_id(2)], // p_688->local_2_offset
        sequence_input[get_group_id(0)], // p_688->group_0_offset
        sequence_input[get_group_id(1)], // p_688->group_1_offset
        sequence_input[get_group_id(2)], // p_688->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 100)), permutations[0][get_linear_local_id()])), // p_688->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_689 = c_690;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_688);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_688->g_10, "p_688->g_10", print_hash_value);
    transparent_crc(p_688->g_12, "p_688->g_12", print_hash_value);
    transparent_crc(p_688->g_16, "p_688->g_16", print_hash_value);
    transparent_crc(p_688->g_25, "p_688->g_25", print_hash_value);
    transparent_crc(p_688->g_26, "p_688->g_26", print_hash_value);
    transparent_crc(p_688->g_30, "p_688->g_30", print_hash_value);
    transparent_crc(p_688->g_65.x, "p_688->g_65.x", print_hash_value);
    transparent_crc(p_688->g_65.y, "p_688->g_65.y", print_hash_value);
    transparent_crc(p_688->g_65.z, "p_688->g_65.z", print_hash_value);
    transparent_crc(p_688->g_65.w, "p_688->g_65.w", print_hash_value);
    transparent_crc(p_688->g_69, "p_688->g_69", print_hash_value);
    transparent_crc(p_688->g_84, "p_688->g_84", print_hash_value);
    transparent_crc(p_688->g_93, "p_688->g_93", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_688->g_102[i], "p_688->g_102[i]", print_hash_value);

    }
    transparent_crc(p_688->g_107, "p_688->g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_688->g_135[i][j][k], "p_688->g_135[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_688->g_167, "p_688->g_167", print_hash_value);
    transparent_crc(p_688->g_238.s0, "p_688->g_238.s0", print_hash_value);
    transparent_crc(p_688->g_238.s1, "p_688->g_238.s1", print_hash_value);
    transparent_crc(p_688->g_238.s2, "p_688->g_238.s2", print_hash_value);
    transparent_crc(p_688->g_238.s3, "p_688->g_238.s3", print_hash_value);
    transparent_crc(p_688->g_238.s4, "p_688->g_238.s4", print_hash_value);
    transparent_crc(p_688->g_238.s5, "p_688->g_238.s5", print_hash_value);
    transparent_crc(p_688->g_238.s6, "p_688->g_238.s6", print_hash_value);
    transparent_crc(p_688->g_238.s7, "p_688->g_238.s7", print_hash_value);
    transparent_crc(p_688->g_330, "p_688->g_330", print_hash_value);
    transparent_crc(p_688->g_343.x, "p_688->g_343.x", print_hash_value);
    transparent_crc(p_688->g_343.y, "p_688->g_343.y", print_hash_value);
    transparent_crc(p_688->g_343.z, "p_688->g_343.z", print_hash_value);
    transparent_crc(p_688->g_343.w, "p_688->g_343.w", print_hash_value);
    transparent_crc(p_688->g_355, "p_688->g_355", print_hash_value);
    transparent_crc(p_688->g_365.s0, "p_688->g_365.s0", print_hash_value);
    transparent_crc(p_688->g_365.s1, "p_688->g_365.s1", print_hash_value);
    transparent_crc(p_688->g_365.s2, "p_688->g_365.s2", print_hash_value);
    transparent_crc(p_688->g_365.s3, "p_688->g_365.s3", print_hash_value);
    transparent_crc(p_688->g_365.s4, "p_688->g_365.s4", print_hash_value);
    transparent_crc(p_688->g_365.s5, "p_688->g_365.s5", print_hash_value);
    transparent_crc(p_688->g_365.s6, "p_688->g_365.s6", print_hash_value);
    transparent_crc(p_688->g_365.s7, "p_688->g_365.s7", print_hash_value);
    transparent_crc(p_688->g_365.s8, "p_688->g_365.s8", print_hash_value);
    transparent_crc(p_688->g_365.s9, "p_688->g_365.s9", print_hash_value);
    transparent_crc(p_688->g_365.sa, "p_688->g_365.sa", print_hash_value);
    transparent_crc(p_688->g_365.sb, "p_688->g_365.sb", print_hash_value);
    transparent_crc(p_688->g_365.sc, "p_688->g_365.sc", print_hash_value);
    transparent_crc(p_688->g_365.sd, "p_688->g_365.sd", print_hash_value);
    transparent_crc(p_688->g_365.se, "p_688->g_365.se", print_hash_value);
    transparent_crc(p_688->g_365.sf, "p_688->g_365.sf", print_hash_value);
    transparent_crc(p_688->g_406.s0, "p_688->g_406.s0", print_hash_value);
    transparent_crc(p_688->g_406.s1, "p_688->g_406.s1", print_hash_value);
    transparent_crc(p_688->g_406.s2, "p_688->g_406.s2", print_hash_value);
    transparent_crc(p_688->g_406.s3, "p_688->g_406.s3", print_hash_value);
    transparent_crc(p_688->g_406.s4, "p_688->g_406.s4", print_hash_value);
    transparent_crc(p_688->g_406.s5, "p_688->g_406.s5", print_hash_value);
    transparent_crc(p_688->g_406.s6, "p_688->g_406.s6", print_hash_value);
    transparent_crc(p_688->g_406.s7, "p_688->g_406.s7", print_hash_value);
    transparent_crc(p_688->g_420.s0, "p_688->g_420.s0", print_hash_value);
    transparent_crc(p_688->g_420.s1, "p_688->g_420.s1", print_hash_value);
    transparent_crc(p_688->g_420.s2, "p_688->g_420.s2", print_hash_value);
    transparent_crc(p_688->g_420.s3, "p_688->g_420.s3", print_hash_value);
    transparent_crc(p_688->g_420.s4, "p_688->g_420.s4", print_hash_value);
    transparent_crc(p_688->g_420.s5, "p_688->g_420.s5", print_hash_value);
    transparent_crc(p_688->g_420.s6, "p_688->g_420.s6", print_hash_value);
    transparent_crc(p_688->g_420.s7, "p_688->g_420.s7", print_hash_value);
    transparent_crc(p_688->g_420.s8, "p_688->g_420.s8", print_hash_value);
    transparent_crc(p_688->g_420.s9, "p_688->g_420.s9", print_hash_value);
    transparent_crc(p_688->g_420.sa, "p_688->g_420.sa", print_hash_value);
    transparent_crc(p_688->g_420.sb, "p_688->g_420.sb", print_hash_value);
    transparent_crc(p_688->g_420.sc, "p_688->g_420.sc", print_hash_value);
    transparent_crc(p_688->g_420.sd, "p_688->g_420.sd", print_hash_value);
    transparent_crc(p_688->g_420.se, "p_688->g_420.se", print_hash_value);
    transparent_crc(p_688->g_420.sf, "p_688->g_420.sf", print_hash_value);
    transparent_crc(p_688->g_423.x, "p_688->g_423.x", print_hash_value);
    transparent_crc(p_688->g_423.y, "p_688->g_423.y", print_hash_value);
    transparent_crc(p_688->g_428.x, "p_688->g_428.x", print_hash_value);
    transparent_crc(p_688->g_428.y, "p_688->g_428.y", print_hash_value);
    transparent_crc(p_688->g_428.z, "p_688->g_428.z", print_hash_value);
    transparent_crc(p_688->g_428.w, "p_688->g_428.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_688->g_470[i][j][k], "p_688->g_470[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_688->g_538.s0, "p_688->g_538.s0", print_hash_value);
    transparent_crc(p_688->g_538.s1, "p_688->g_538.s1", print_hash_value);
    transparent_crc(p_688->g_538.s2, "p_688->g_538.s2", print_hash_value);
    transparent_crc(p_688->g_538.s3, "p_688->g_538.s3", print_hash_value);
    transparent_crc(p_688->g_538.s4, "p_688->g_538.s4", print_hash_value);
    transparent_crc(p_688->g_538.s5, "p_688->g_538.s5", print_hash_value);
    transparent_crc(p_688->g_538.s6, "p_688->g_538.s6", print_hash_value);
    transparent_crc(p_688->g_538.s7, "p_688->g_538.s7", print_hash_value);
    transparent_crc(p_688->g_538.s8, "p_688->g_538.s8", print_hash_value);
    transparent_crc(p_688->g_538.s9, "p_688->g_538.s9", print_hash_value);
    transparent_crc(p_688->g_538.sa, "p_688->g_538.sa", print_hash_value);
    transparent_crc(p_688->g_538.sb, "p_688->g_538.sb", print_hash_value);
    transparent_crc(p_688->g_538.sc, "p_688->g_538.sc", print_hash_value);
    transparent_crc(p_688->g_538.sd, "p_688->g_538.sd", print_hash_value);
    transparent_crc(p_688->g_538.se, "p_688->g_538.se", print_hash_value);
    transparent_crc(p_688->g_538.sf, "p_688->g_538.sf", print_hash_value);
    transparent_crc(p_688->g_539.s0, "p_688->g_539.s0", print_hash_value);
    transparent_crc(p_688->g_539.s1, "p_688->g_539.s1", print_hash_value);
    transparent_crc(p_688->g_539.s2, "p_688->g_539.s2", print_hash_value);
    transparent_crc(p_688->g_539.s3, "p_688->g_539.s3", print_hash_value);
    transparent_crc(p_688->g_539.s4, "p_688->g_539.s4", print_hash_value);
    transparent_crc(p_688->g_539.s5, "p_688->g_539.s5", print_hash_value);
    transparent_crc(p_688->g_539.s6, "p_688->g_539.s6", print_hash_value);
    transparent_crc(p_688->g_539.s7, "p_688->g_539.s7", print_hash_value);
    transparent_crc(p_688->g_561.s0, "p_688->g_561.s0", print_hash_value);
    transparent_crc(p_688->g_561.s1, "p_688->g_561.s1", print_hash_value);
    transparent_crc(p_688->g_561.s2, "p_688->g_561.s2", print_hash_value);
    transparent_crc(p_688->g_561.s3, "p_688->g_561.s3", print_hash_value);
    transparent_crc(p_688->g_561.s4, "p_688->g_561.s4", print_hash_value);
    transparent_crc(p_688->g_561.s5, "p_688->g_561.s5", print_hash_value);
    transparent_crc(p_688->g_561.s6, "p_688->g_561.s6", print_hash_value);
    transparent_crc(p_688->g_561.s7, "p_688->g_561.s7", print_hash_value);
    transparent_crc(p_688->g_561.s8, "p_688->g_561.s8", print_hash_value);
    transparent_crc(p_688->g_561.s9, "p_688->g_561.s9", print_hash_value);
    transparent_crc(p_688->g_561.sa, "p_688->g_561.sa", print_hash_value);
    transparent_crc(p_688->g_561.sb, "p_688->g_561.sb", print_hash_value);
    transparent_crc(p_688->g_561.sc, "p_688->g_561.sc", print_hash_value);
    transparent_crc(p_688->g_561.sd, "p_688->g_561.sd", print_hash_value);
    transparent_crc(p_688->g_561.se, "p_688->g_561.se", print_hash_value);
    transparent_crc(p_688->g_561.sf, "p_688->g_561.sf", print_hash_value);
    transparent_crc(p_688->g_564.s0, "p_688->g_564.s0", print_hash_value);
    transparent_crc(p_688->g_564.s1, "p_688->g_564.s1", print_hash_value);
    transparent_crc(p_688->g_564.s2, "p_688->g_564.s2", print_hash_value);
    transparent_crc(p_688->g_564.s3, "p_688->g_564.s3", print_hash_value);
    transparent_crc(p_688->g_564.s4, "p_688->g_564.s4", print_hash_value);
    transparent_crc(p_688->g_564.s5, "p_688->g_564.s5", print_hash_value);
    transparent_crc(p_688->g_564.s6, "p_688->g_564.s6", print_hash_value);
    transparent_crc(p_688->g_564.s7, "p_688->g_564.s7", print_hash_value);
    transparent_crc(p_688->g_564.s8, "p_688->g_564.s8", print_hash_value);
    transparent_crc(p_688->g_564.s9, "p_688->g_564.s9", print_hash_value);
    transparent_crc(p_688->g_564.sa, "p_688->g_564.sa", print_hash_value);
    transparent_crc(p_688->g_564.sb, "p_688->g_564.sb", print_hash_value);
    transparent_crc(p_688->g_564.sc, "p_688->g_564.sc", print_hash_value);
    transparent_crc(p_688->g_564.sd, "p_688->g_564.sd", print_hash_value);
    transparent_crc(p_688->g_564.se, "p_688->g_564.se", print_hash_value);
    transparent_crc(p_688->g_564.sf, "p_688->g_564.sf", print_hash_value);
    transparent_crc(p_688->g_581.x, "p_688->g_581.x", print_hash_value);
    transparent_crc(p_688->g_581.y, "p_688->g_581.y", print_hash_value);
    transparent_crc(p_688->g_581.z, "p_688->g_581.z", print_hash_value);
    transparent_crc(p_688->g_581.w, "p_688->g_581.w", print_hash_value);
    transparent_crc(p_688->g_596.x, "p_688->g_596.x", print_hash_value);
    transparent_crc(p_688->g_596.y, "p_688->g_596.y", print_hash_value);
    transparent_crc(p_688->g_597.s0, "p_688->g_597.s0", print_hash_value);
    transparent_crc(p_688->g_597.s1, "p_688->g_597.s1", print_hash_value);
    transparent_crc(p_688->g_597.s2, "p_688->g_597.s2", print_hash_value);
    transparent_crc(p_688->g_597.s3, "p_688->g_597.s3", print_hash_value);
    transparent_crc(p_688->g_597.s4, "p_688->g_597.s4", print_hash_value);
    transparent_crc(p_688->g_597.s5, "p_688->g_597.s5", print_hash_value);
    transparent_crc(p_688->g_597.s6, "p_688->g_597.s6", print_hash_value);
    transparent_crc(p_688->g_597.s7, "p_688->g_597.s7", print_hash_value);
    transparent_crc(p_688->g_597.s8, "p_688->g_597.s8", print_hash_value);
    transparent_crc(p_688->g_597.s9, "p_688->g_597.s9", print_hash_value);
    transparent_crc(p_688->g_597.sa, "p_688->g_597.sa", print_hash_value);
    transparent_crc(p_688->g_597.sb, "p_688->g_597.sb", print_hash_value);
    transparent_crc(p_688->g_597.sc, "p_688->g_597.sc", print_hash_value);
    transparent_crc(p_688->g_597.sd, "p_688->g_597.sd", print_hash_value);
    transparent_crc(p_688->g_597.se, "p_688->g_597.se", print_hash_value);
    transparent_crc(p_688->g_597.sf, "p_688->g_597.sf", print_hash_value);
    transparent_crc(p_688->g_628.s0, "p_688->g_628.s0", print_hash_value);
    transparent_crc(p_688->g_628.s1, "p_688->g_628.s1", print_hash_value);
    transparent_crc(p_688->g_628.s2, "p_688->g_628.s2", print_hash_value);
    transparent_crc(p_688->g_628.s3, "p_688->g_628.s3", print_hash_value);
    transparent_crc(p_688->g_628.s4, "p_688->g_628.s4", print_hash_value);
    transparent_crc(p_688->g_628.s5, "p_688->g_628.s5", print_hash_value);
    transparent_crc(p_688->g_628.s6, "p_688->g_628.s6", print_hash_value);
    transparent_crc(p_688->g_628.s7, "p_688->g_628.s7", print_hash_value);
    transparent_crc(p_688->g_628.s8, "p_688->g_628.s8", print_hash_value);
    transparent_crc(p_688->g_628.s9, "p_688->g_628.s9", print_hash_value);
    transparent_crc(p_688->g_628.sa, "p_688->g_628.sa", print_hash_value);
    transparent_crc(p_688->g_628.sb, "p_688->g_628.sb", print_hash_value);
    transparent_crc(p_688->g_628.sc, "p_688->g_628.sc", print_hash_value);
    transparent_crc(p_688->g_628.sd, "p_688->g_628.sd", print_hash_value);
    transparent_crc(p_688->g_628.se, "p_688->g_628.se", print_hash_value);
    transparent_crc(p_688->g_628.sf, "p_688->g_628.sf", print_hash_value);
    transparent_crc(p_688->g_635, "p_688->g_635", print_hash_value);
    transparent_crc(p_688->g_637, "p_688->g_637", print_hash_value);
    transparent_crc(p_688->g_647.x, "p_688->g_647.x", print_hash_value);
    transparent_crc(p_688->g_647.y, "p_688->g_647.y", print_hash_value);
    transparent_crc(p_688->g_647.z, "p_688->g_647.z", print_hash_value);
    transparent_crc(p_688->g_647.w, "p_688->g_647.w", print_hash_value);
    transparent_crc(p_688->g_653.x, "p_688->g_653.x", print_hash_value);
    transparent_crc(p_688->g_653.y, "p_688->g_653.y", print_hash_value);
    transparent_crc(p_688->g_653.z, "p_688->g_653.z", print_hash_value);
    transparent_crc(p_688->g_653.w, "p_688->g_653.w", print_hash_value);
    transparent_crc(p_688->g_654.x, "p_688->g_654.x", print_hash_value);
    transparent_crc(p_688->g_654.y, "p_688->g_654.y", print_hash_value);
    transparent_crc(p_688->g_654.z, "p_688->g_654.z", print_hash_value);
    transparent_crc(p_688->g_654.w, "p_688->g_654.w", print_hash_value);
    transparent_crc(p_688->g_655.s0, "p_688->g_655.s0", print_hash_value);
    transparent_crc(p_688->g_655.s1, "p_688->g_655.s1", print_hash_value);
    transparent_crc(p_688->g_655.s2, "p_688->g_655.s2", print_hash_value);
    transparent_crc(p_688->g_655.s3, "p_688->g_655.s3", print_hash_value);
    transparent_crc(p_688->g_655.s4, "p_688->g_655.s4", print_hash_value);
    transparent_crc(p_688->g_655.s5, "p_688->g_655.s5", print_hash_value);
    transparent_crc(p_688->g_655.s6, "p_688->g_655.s6", print_hash_value);
    transparent_crc(p_688->g_655.s7, "p_688->g_655.s7", print_hash_value);
    transparent_crc(p_688->g_665, "p_688->g_665", print_hash_value);
    transparent_crc(p_688->g_679.x, "p_688->g_679.x", print_hash_value);
    transparent_crc(p_688->g_679.y, "p_688->g_679.y", print_hash_value);
    transparent_crc(p_688->g_681.s0, "p_688->g_681.s0", print_hash_value);
    transparent_crc(p_688->g_681.s1, "p_688->g_681.s1", print_hash_value);
    transparent_crc(p_688->g_681.s2, "p_688->g_681.s2", print_hash_value);
    transparent_crc(p_688->g_681.s3, "p_688->g_681.s3", print_hash_value);
    transparent_crc(p_688->g_681.s4, "p_688->g_681.s4", print_hash_value);
    transparent_crc(p_688->g_681.s5, "p_688->g_681.s5", print_hash_value);
    transparent_crc(p_688->g_681.s6, "p_688->g_681.s6", print_hash_value);
    transparent_crc(p_688->g_681.s7, "p_688->g_681.s7", print_hash_value);
    transparent_crc(p_688->v_collective, "p_688->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 65; i++)
            transparent_crc(p_688->g_special_values[i + 65 * get_linear_group_id()], "p_688->g_special_values[i + 65 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 65; i++)
            transparent_crc(p_688->l_special_values[i], "p_688->l_special_values[i]", print_hash_value);
    transparent_crc(p_688->l_comm_values[get_linear_local_id()], "p_688->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_688->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()], "p_688->g_comm_values[get_linear_group_id() * 100 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
