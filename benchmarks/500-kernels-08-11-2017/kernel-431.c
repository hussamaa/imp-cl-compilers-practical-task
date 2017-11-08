// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 23,37,4 -l 23,1,1
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

__constant uint32_t permutations[10][23] = {
{1,20,17,6,10,13,21,19,9,11,2,8,0,5,18,4,14,22,15,12,16,7,3}, // permutation 0
{6,22,8,16,5,10,14,4,11,9,13,15,19,18,17,1,3,20,0,12,2,7,21}, // permutation 1
{14,10,12,13,11,6,22,3,20,1,7,5,0,4,21,19,18,16,17,15,8,2,9}, // permutation 2
{22,3,6,7,20,4,14,12,21,10,11,5,8,16,19,9,13,17,1,18,15,0,2}, // permutation 3
{6,2,15,18,16,10,19,3,17,20,14,21,7,12,1,9,22,8,4,5,11,0,13}, // permutation 4
{7,21,9,11,13,1,10,20,2,16,22,18,4,3,17,19,14,5,12,15,8,6,0}, // permutation 5
{21,22,19,16,2,20,0,15,18,7,1,13,3,8,11,17,5,9,14,4,6,10,12}, // permutation 6
{14,0,7,19,22,5,2,8,11,21,15,1,9,18,17,13,20,10,6,12,4,3,16}, // permutation 7
{1,18,17,7,22,14,20,16,13,2,10,9,5,15,12,0,11,3,4,19,8,6,21}, // permutation 8
{19,20,4,11,14,15,9,5,0,13,10,3,22,7,2,18,12,1,17,21,16,6,8} // permutation 9
};

// Seed: 2406304336

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint32_t  f1;
   int16_t  f2;
};

union U1 {
   uint64_t  f0;
   volatile uint8_t  f1;
   int32_t  f2;
   int32_t  f3;
   int8_t  f4;
};

union U2 {
   volatile uint64_t  f0;
   volatile struct S0  f1;
};

union U3 {
   struct S0  f0;
   int8_t * volatile  f1;
   int8_t * f2;
   struct S0  f3;
   int32_t  f4;
};

union U4 {
   uint32_t  f0;
};

struct S5 {
    volatile int8_t g_9;
    volatile int8_t * volatile g_8;
    uint8_t g_36;
    int32_t g_42;
    int32_t *g_41;
    int16_t g_53;
    uint32_t g_54;
    union U4 g_65;
    VECTOR(uint64_t, 4) g_66;
    uint16_t *g_78;
    int32_t *g_79;
    uint64_t g_97;
    int32_t g_102;
    union U2 g_390;
    union U2 g_393;
    union U2 *g_392;
    int8_t g_399;
    int64_t g_425;
    uint8_t g_426;
    int64_t g_429;
    VECTOR(int32_t, 16) g_443;
    union U2 g_450;
    int16_t **g_459;
    VECTOR(int8_t, 4) g_537;
    VECTOR(int8_t, 4) g_538;
    union U2 g_544;
    uint64_t g_548;
    VECTOR(uint8_t, 4) g_565;
    union U1 g_574;
    union U1 g_578;
    VECTOR(uint8_t, 2) g_579;
    int8_t *g_584;
    int32_t g_588;
    VECTOR(uint16_t, 16) g_639;
    VECTOR(int8_t, 8) g_665;
    union U1 g_670;
    union U1 g_672[7][8];
    union U1 g_676;
    union U1 g_687[9][6];
    union U1 *g_686[1][4];
    int32_t g_689;
    uint32_t g_694;
    uint16_t **g_719[9];
    uint16_t ***g_718;
    int32_t g_737;
    volatile uint64_t g_744;
    volatile uint64_t *g_743;
    volatile uint64_t * volatile *g_742;
    union U4 g_746[4][9][1];
    VECTOR(int64_t, 4) g_764;
    VECTOR(int64_t, 2) g_766;
    VECTOR(int64_t, 4) g_767;
    VECTOR(int64_t, 16) g_768;
    int64_t g_770;
    int32_t **g_783;
    uint64_t *g_817;
    uint64_t **g_816;
    union U1 g_834;
    int32_t ** volatile g_843;
    volatile struct S0 g_848[3];
    struct S0 g_853;
    volatile VECTOR(int64_t, 8) g_861;
    VECTOR(int32_t, 8) g_877;
    uint16_t g_888;
    VECTOR(uint8_t, 16) g_900;
    VECTOR(int16_t, 8) g_910;
    union U3 g_911;
    volatile VECTOR(int16_t, 2) g_915;
    volatile VECTOR(uint8_t, 2) g_919;
    volatile union U1 g_924;
    struct S0 * volatile g_930;
    struct S0 * volatile g_931[9];
    struct S0 g_933;
    volatile union U3 g_940;
    struct S0 g_943;
    struct S0 *g_942;
    VECTOR(uint32_t, 4) g_948;
    union U1 g_1021;
    int64_t g_1037;
    VECTOR(uint8_t, 16) g_1053;
    VECTOR(uint8_t, 2) g_1054;
    VECTOR(uint8_t, 16) g_1055;
    struct S0 ** volatile g_1062;
    struct S0 g_1077;
    volatile int64_t g_1084;
    volatile int64_t *g_1083;
    volatile int64_t * volatile *g_1082;
    volatile int64_t * volatile ** volatile g_1085;
    union U1 g_1086[3][5];
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
union U1  func_1(struct S5 * p_1087);
int8_t * func_2(uint32_t  p_3, int8_t * p_4, int64_t  p_5, int8_t * p_6, int8_t * p_7, struct S5 * p_1087);
int8_t * func_10(uint32_t  p_11, union U4  p_12, union U4  p_13, int64_t  p_14, int32_t  p_15, struct S5 * p_1087);
union U4  func_16(int16_t  p_17, int64_t  p_18, union U4  p_19, struct S5 * p_1087);
int16_t  func_25(int8_t * p_26, uint16_t * p_27, int64_t  p_28, uint64_t  p_29, int8_t * p_30, struct S5 * p_1087);
int8_t * func_31(int32_t  p_32, struct S5 * p_1087);
int32_t * func_38(int32_t * p_39, int8_t * p_40, struct S5 * p_1087);
int8_t * func_43(uint16_t  p_44, int32_t * p_45, uint16_t * p_46, int32_t * p_47, struct S5 * p_1087);
uint16_t * func_49(int64_t  p_50, int32_t * p_51, struct S5 * p_1087);
uint32_t  func_60(int32_t  p_61, union U4  p_62, int64_t  p_63, uint16_t * p_64, struct S5 * p_1087);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1087->g_8 p_1087->g_comm_values p_1087->l_comm_values p_1087->g_41 p_1087->g_65 p_1087->g_66 p_1087->g_53 p_1087->g_65.f0 p_1087->g_78 p_1087->g_36 p_1087->g_79 p_1087->g_42 p_1087->g_54 p_1087->g_102 p_1087->g_392 p_1087->g_399 p_1087->g_425 p_1087->g_426 p_1087->g_97 p_1087->g_443 p_1087->g_459 p_1087->g_429 p_1087->g_537 p_1087->g_538 p_1087->g_548 p_1087->g_574.f0 p_1087->g_578.f0 p_1087->g_579 p_1087->g_584 p_1087->g_639 p_1087->g_665 p_1087->g_676.f0 p_1087->g_670.f0 p_1087->g_686 p_1087->g_689 p_1087->g_565 p_1087->g_718 p_1087->g_742 p_1087->g_746 p_1087->g_764 p_1087->g_766 p_1087->g_767 p_1087->g_768 p_1087->g_770 p_1087->g_694 p_1087->g_588 p_1087->g_574.f3 p_1087->g_843 p_1087->g_848 p_1087->g_853 p_1087->g_672.f0 p_1087->g_940 p_1087->g_942 p_1087->g_737 p_1087->g_817 p_1087->g_1021 p_1087->g_861 p_1087->g_9 p_1087->g_1082 p_1087->g_1085 p_1087->g_1086
 * writes: p_1087->g_36 p_1087->g_54 p_1087->g_79 p_1087->g_102 p_1087->g_392 p_1087->g_65.f0 p_1087->g_425 p_1087->g_426 p_1087->g_429 p_1087->g_97 p_1087->g_459 p_1087->g_42 p_1087->g_53 p_1087->g_66 p_1087->g_548 p_1087->g_399 p_1087->g_41 p_1087->g_578.f0 p_1087->g_574.f0 p_1087->g_689 p_1087->g_694 p_1087->g_565 p_1087->g_770 p_1087->g_588 p_1087->g_746 p_1087->g_783 p_1087->g_574.f3 p_1087->g_816 p_1087->g_390.f1 p_1087->g_853 p_1087->g_578.f4 p_1087->g_933 p_1087->g_584 p_1087->g_1082
 */
union U1  func_1(struct S5 * p_1087)
{ /* block id: 4 */
    uint32_t l_20 = 0x27A4129BL;
    uint16_t *l_23[3];
    int32_t l_24 = 0x1D44F4CCL;
    uint8_t *l_35[6][6][4] = {{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}},{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}},{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}},{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}},{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}},{{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36},{(void*)0,&p_1087->g_36,&p_1087->g_36,&p_1087->g_36}}};
    union U4 *l_779 = &p_1087->g_746[1][4][0];
    union U4 l_780 = {8UL};
    int8_t **l_1080[6] = {&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584};
    int32_t *l_1081 = &l_24;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_23[i] = (void*)0;
    (*l_1081) = ((VECTOR(int32_t, 4))(((p_1087->g_584 = func_2(((void*)0 != p_1087->g_8), func_10(p_1087->g_comm_values[p_1087->tid], ((*l_779) = func_16(l_20, ((safe_sub_func_uint8_t_u_u(0x1CL, (((l_24 = p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]) >= func_25(func_31((l_20 & (safe_lshift_func_uint8_t_u_s((p_1087->g_36 = GROUP_DIVERGE(0, 1)), 5))), p_1087), p_1087->g_78, p_1087->g_537.y, l_20, p_1087->g_584, p_1087)) != 0x38L))) ^ l_20), p_1087->g_746[1][4][0], p_1087)), l_780, l_20, p_1087->g_766.y, p_1087), p_1087->g_764.z, p_1087->g_584, l_35[2][3][1], p_1087)) == (void*)0), 4L, 0x1CA386A9L, (-1L))).w;
    (*p_1087->g_1085) = (((*p_1087->g_584) &= (~(*l_1081))) , p_1087->g_1082);
    return p_1087->g_1086[2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_548 p_1087->g_79 p_1087->g_102 p_1087->g_42 p_1087->g_574.f3 p_1087->g_41 p_1087->g_578.f0 p_1087->g_843 p_1087->g_848 p_1087->g_853 p_1087->g_672.f0 p_1087->g_36 p_1087->g_940 p_1087->g_942 p_1087->g_737 p_1087->g_817 p_1087->g_97 p_1087->g_1021 p_1087->g_861 p_1087->g_8 p_1087->g_9
 * writes: p_1087->g_548 p_1087->g_102 p_1087->g_42 p_1087->g_574.f3 p_1087->g_816 p_1087->g_578.f0 p_1087->g_41 p_1087->g_390.f1 p_1087->g_36 p_1087->g_853 p_1087->g_578.f4 p_1087->g_933 p_1087->g_399
 */
int8_t * func_2(uint32_t  p_3, int8_t * p_4, int64_t  p_5, int8_t * p_6, int8_t * p_7, struct S5 * p_1087)
{ /* block id: 348 */
    uint8_t l_812 = 6UL;
    uint64_t *l_814 = &p_1087->g_97;
    uint64_t **l_813 = &l_814;
    uint64_t ***l_815[8][4][8] = {{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}},{{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813},{&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813}}};
    int32_t l_822 = (-9L);
    VECTOR(uint8_t, 8) l_831 = (VECTOR(uint8_t, 8))(0x8BL, (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 0xE3L), 0xE3L), 0xE3L, 0x8BL, 0xE3L);
    VECTOR(uint8_t, 2) l_832 = (VECTOR(uint8_t, 2))(0x95L, 0x21L);
    VECTOR(int8_t, 8) l_838 = (VECTOR(int8_t, 8))(0x62L, (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, (-5L)), (-5L)), (-5L), 0x62L, (-5L));
    VECTOR(uint16_t, 16) l_858 = (VECTOR(uint16_t, 16))(0x9D17L, (VECTOR(uint16_t, 4))(0x9D17L, (VECTOR(uint16_t, 2))(0x9D17L, 0xCD1AL), 0xCD1AL), 0xCD1AL, 0x9D17L, 0xCD1AL, (VECTOR(uint16_t, 2))(0x9D17L, 0xCD1AL), (VECTOR(uint16_t, 2))(0x9D17L, 0xCD1AL), 0x9D17L, 0xCD1AL, 0x9D17L, 0xCD1AL);
    VECTOR(uint8_t, 8) l_898 = (VECTOR(uint8_t, 8))(0x7EL, (VECTOR(uint8_t, 4))(0x7EL, (VECTOR(uint8_t, 2))(0x7EL, 249UL), 249UL), 249UL, 0x7EL, 249UL);
    VECTOR(uint8_t, 16) l_899 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 6UL), 6UL), 6UL, 7UL, 6UL, (VECTOR(uint8_t, 2))(7UL, 6UL), (VECTOR(uint8_t, 2))(7UL, 6UL), 7UL, 6UL, 7UL, 6UL);
    uint32_t l_925 = 0x768E11BCL;
    int32_t l_973 = (-1L);
    int32_t l_974 = 1L;
    int32_t l_975 = 0x1B478B4FL;
    int32_t l_976 = 0x018D22D6L;
    int32_t l_978 = 0x61141D67L;
    int32_t l_980 = 0x625B6C6FL;
    int32_t l_988[2][6] = {{0L,0x73788C65L,0L,0L,0x73788C65L,0L},{0L,0x73788C65L,0L,0L,0x73788C65L,0L}};
    uint16_t l_1038 = 65528UL;
    uint8_t l_1065 = 255UL;
    uint64_t l_1068[2];
    int16_t *l_1075 = &p_1087->g_853.f2;
    int16_t **l_1074[5][5][5] = {{{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0}},{{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0}},{{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0}},{{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0}},{{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0},{&l_1075,&l_1075,&l_1075,&l_1075,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1068[i] = 0x21691AC4633230D1L;
    for (p_1087->g_548 = (-15); (p_1087->g_548 >= 50); ++p_1087->g_548)
    { /* block id: 351 */
        VECTOR(int32_t, 16) l_795 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x15075DEBL), 0x15075DEBL), 0x15075DEBL, 1L, 0x15075DEBL, (VECTOR(int32_t, 2))(1L, 0x15075DEBL), (VECTOR(int32_t, 2))(1L, 0x15075DEBL), 1L, 0x15075DEBL, 1L, 0x15075DEBL);
        int i;
        if ((*p_1087->g_79))
            break;
        if (p_5)
            continue;
        if (((*p_1087->g_79) = ((VECTOR(int32_t, 8))(l_795.sa4abe44f)).s2))
        { /* block id: 355 */
            for (p_1087->g_574.f3 = 0; (p_1087->g_574.f3 > (-9)); p_1087->g_574.f3--)
            { /* block id: 358 */
                (*p_1087->g_41) &= p_3;
            }
        }
        else
        { /* block id: 361 */
            int8_t l_798 = 0x6AL;
            int32_t *l_799 = &p_1087->g_578.f3;
            int32_t *l_800 = (void*)0;
            int32_t *l_801 = (void*)0;
            int32_t *l_802 = &p_1087->g_588;
            int32_t *l_803 = &p_1087->g_672[5][5].f3;
            int32_t *l_804 = &p_1087->g_676.f3;
            int32_t *l_805 = &p_1087->g_102;
            int32_t *l_806 = &p_1087->g_672[5][5].f3;
            int32_t *l_807 = (void*)0;
            int32_t *l_808[5] = {&p_1087->g_574.f3,&p_1087->g_574.f3,&p_1087->g_574.f3,&p_1087->g_574.f3,&p_1087->g_574.f3};
            uint16_t l_809 = 1UL;
            int i;
            l_809++;
        }
        if (l_812)
            break;
    }
    l_822 = (((FAKE_DIVERGE(p_1087->group_0_offset, get_group_id(0), 10) , &p_1087->g_743) == (p_1087->g_816 = l_813)) , ((*p_1087->g_41) = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0x78ACL, 12)), ((l_812 <= l_812) == l_812)))));
    for (p_1087->g_574.f3 = 16; (p_1087->g_574.f3 == 13); p_1087->g_574.f3--)
    { /* block id: 371 */
        VECTOR(uint64_t, 4) l_825 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x5DB7B7CD50A196ADL), 0x5DB7B7CD50A196ADL);
        VECTOR(uint8_t, 16) l_830 = (VECTOR(uint8_t, 16))(0xAFL, (VECTOR(uint8_t, 4))(0xAFL, (VECTOR(uint8_t, 2))(0xAFL, 249UL), 249UL), 249UL, 0xAFL, 249UL, (VECTOR(uint8_t, 2))(0xAFL, 249UL), (VECTOR(uint8_t, 2))(0xAFL, 249UL), 0xAFL, 249UL, 0xAFL, 249UL);
        VECTOR(uint32_t, 2) l_833 = (VECTOR(uint32_t, 2))(4294967286UL, 0UL);
        int64_t *l_835 = (void*)0;
        int64_t *l_836[8][5][3] = {{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}},{{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0},{&p_1087->g_425,&p_1087->g_425,(void*)0}}};
        VECTOR(int8_t, 16) l_837 = (VECTOR(int8_t, 16))(0x3DL, (VECTOR(int8_t, 4))(0x3DL, (VECTOR(int8_t, 2))(0x3DL, 4L), 4L), 4L, 0x3DL, 4L, (VECTOR(int8_t, 2))(0x3DL, 4L), (VECTOR(int8_t, 2))(0x3DL, 4L), 0x3DL, 4L, 0x3DL, 4L);
        uint64_t *l_839 = &p_1087->g_578.f0;
        int32_t *l_842 = &p_1087->g_102;
        VECTOR(int32_t, 2) l_844 = (VECTOR(int32_t, 2))(0x24C1AB0EL, 9L);
        int32_t l_926[6] = {0x132DD43BL,0x32BBEEC0L,0x132DD43BL,0x132DD43BL,0x32BBEEC0L,0x132DD43BL};
        int32_t l_996 = 0x5813A186L;
        uint64_t l_1014[6][6][3] = {{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}},{{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,1UL,18446744073709551615UL}}};
        union U4 l_1022 = {0x79B512D8L};
        int32_t *l_1060 = &l_996;
        int16_t **l_1076[5] = {&l_1075,&l_1075,&l_1075,&l_1075,&l_1075};
        int i, j, k;
        if ((((*l_839) &= (((VECTOR(uint64_t, 2))(l_825.zz)).lo <= (0UL && (((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_830.s16bad72d)).s3, (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(253UL, 0xE6L)).yyyxxyyx, ((VECTOR(uint8_t, 8))(l_831.s31703652)), ((VECTOR(uint8_t, 16))(l_832.xyxxxxyxyyxyyyyx)).even))).s1327307272412410)).sd || ((((((VECTOR(uint32_t, 16))(p_5, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(l_833.xxyxxxxy))))))), ((((p_5 && ((p_1087->g_834 , (p_5 = 0x2538894A31017BADL)) && (((*p_4) = (*p_1087->g_8)) ^ 0UL))) , (((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_837.sfc)))).xxyyyyxxyxxyxxyx)).sfd78, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_838.s2440)).hi)).xyxx, ((VECTOR(int8_t, 8))(0x1CL, ((((*l_813) = l_836[2][3][2]) != (void*)0) == l_831.s1), ((VECTOR(int8_t, 4))((-1L))), 1L, 0x33L)).lo))).z == p_1087->g_764.x)) || 0x214FL) && l_830.s8), p_1087->g_574.f0, ((VECTOR(uint32_t, 4))(0UL)), 7UL)).sc , (void*)0) != (void*)0) > l_812) >= 0x06L)))), (-1L))) <= p_3) == FAKE_DIVERGE(p_1087->group_0_offset, get_group_id(0), 10)) , 0x30F4B9ADB5B76176L) || (-3L))))) , (*p_1087->g_79)))
        { /* block id: 376 */
            uint64_t l_862 = 18446744073709551611UL;
            int32_t l_867 = (-5L);
            uint64_t l_885 = 0xA491B5B2DCA0DA6DL;
            VECTOR(uint8_t, 4) l_918 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0xE8L), 0xE8L);
            VECTOR(uint8_t, 2) l_941 = (VECTOR(uint8_t, 2))(0x42L, 0x82L);
            int32_t l_983 = 0x1FF78E71L;
            int32_t l_984 = 1L;
            int32_t l_986 = 0x72D4D5D9L;
            int32_t l_987 = 7L;
            int32_t l_991[6];
            int i;
            for (i = 0; i < 6; i++)
                l_991[i] = 0x2ED88CF1L;
            for (p_5 = 0; (p_5 == (-15)); p_5--)
            { /* block id: 379 */
                VECTOR(uint64_t, 2) l_845 = (VECTOR(uint64_t, 2))(0xAA5A5E96D49CC389L, 18446744073709551613UL);
                uint8_t *l_849 = &p_1087->g_36;
                int32_t **l_852 = &l_842;
                int32_t l_889[10][2][4] = {{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}},{{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)},{0x366E2EAFL,0x7BD80A86L,0x4326C427L,(-1L)}}};
                int i, j, k;
                if ((p_3 | p_5))
                { /* block id: 380 */
                    (*p_1087->g_843) = l_842;
                    (*l_842) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_844.xyxyyyxxyyxxxxxy)).saf)).hi;
                }
                else
                { /* block id: 383 */
                    ++l_845.x;
                    p_1087->g_390.f1 = p_1087->g_848[2];
                }
                if ((l_838.s5 < (((*l_849) = GROUP_DIVERGE(1, 1)) < p_5)))
                { /* block id: 388 */
                    int32_t **l_850 = (void*)0;
                    int32_t ***l_851[5][5][5] = {{{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783}},{{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783}},{{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783}},{{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783}},{{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783},{&l_850,&p_1087->g_783,&l_850,&l_850,&p_1087->g_783}}};
                    VECTOR(uint16_t, 16) l_857 = (VECTOR(uint16_t, 16))(0x7A87L, (VECTOR(uint16_t, 4))(0x7A87L, (VECTOR(uint16_t, 2))(0x7A87L, 0x7F6CL), 0x7F6CL), 0x7F6CL, 0x7A87L, 0x7F6CL, (VECTOR(uint16_t, 2))(0x7A87L, 0x7F6CL), (VECTOR(uint16_t, 2))(0x7A87L, 0x7F6CL), 0x7A87L, 0x7F6CL, 0x7A87L, 0x7F6CL);
                    uint32_t l_884[4][10][6] = {{{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L}},{{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L}},{{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L}},{{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L},{0xABAF94BFL,1UL,0xF56352E4L,0xAFDA1D65L,7UL,0xAFDA1D65L}}};
                    union U2 *l_904 = (void*)0;
                    uint16_t ***l_921 = &p_1087->g_719[4];
                    volatile struct S0 *l_927 = &p_1087->g_390.f1;
                    int i, j, k;
                    if (((l_852 = l_850) == &p_1087->g_79))
                    { /* block id: 390 */
                        struct S0 *l_854 = &p_1087->g_853;
                        (*l_854) = p_1087->g_853;
                    }
                    else
                    { /* block id: 392 */
                        uint16_t *l_865 = (void*)0;
                        uint16_t *l_866[3];
                        union U4 l_876[9][1] = {{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}},{{1UL}}};
                        union U2 **l_903 = &p_1087->g_392;
                        union U2 **l_905 = (void*)0;
                        union U2 *l_907 = &p_1087->g_390;
                        union U2 **l_906 = &l_907;
                        int8_t **l_920[9][5] = {{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584},{&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584,&p_1087->g_584}};
                        uint16_t ****l_922 = (void*)0;
                        uint16_t ****l_923 = &l_921;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_866[i] = (void*)0;
                        l_889[9][1][3] = (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_857.sff565c2b)), 0xA5E2L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_858.sbe4df9c3)).s04)), (safe_div_func_uint64_t_u_u((((*p_1087->g_41) ^= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, 0L)), (-1L), 0x729459C4AFC21B21L)))).hi)).hi || ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1087->g_861.s4335411600200260)).s2c)).hi)) <= (l_862 <= ((safe_mod_func_uint16_t_u_u(((l_867 = FAKE_DIVERGE(p_1087->global_1_offset, get_global_id(1), 10)) && (p_1087->g_853.f2 ^= ((safe_mul_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(p_1087->g_548, (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((l_876[4][0] , (((VECTOR(int32_t, 2))(p_1087->g_877.s70)).even >= (l_867 , ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_884[2][2][3] & l_885), (*p_4))), 1)), 7)) ^ (safe_sub_func_int32_t_s_s(((p_5 ^ p_5) & l_838.s0), l_876[4][0].f0))) < p_1087->g_54) ^ l_862)))), 0L)), 0xFEL)))) | p_5) , 0x226CC6FB03825E4DL) > p_1087->g_687[0][2].f0), p_1087->g_888)) < 0x52C0EEFCL))), (-1L))) , 0L))), 0x3D35FE9C4D33FCFBL)), p_3, 0x3FB1L, 0x7590L, 1UL)).hi)), ((VECTOR(uint16_t, 8))(65535UL)), ((VECTOR(uint16_t, 8))(65535UL))))).s5, p_3));
                        l_889[5][0][3] |= (((safe_add_func_uint32_t_u_u(0xF9C40A52L, (safe_add_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((0x7BL < ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(9UL, 249UL, ((VECTOR(uint8_t, 2))(l_898.s05)), 0xE4L, ((VECTOR(uint8_t, 2))(l_899.s63)), 0UL)).even, ((VECTOR(uint8_t, 16))(p_1087->g_900.s3dc9a4ec469154ed)).s964d))).y), (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),uint64_t,((VECTOR(uint64_t, 4))(((((*l_906) = (l_904 = ((*l_903) = &p_1087->g_393))) != ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1087->g_910.s62104212)).s17)).odd, (p_1087->g_911 , (((*l_839)++) , (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(p_1087->g_915.xyyx)).wwwywywy, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(1L, 0x4452L, (((safe_mul_func_int8_t_s_s(0x3DL, (((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(l_918.yyxw)).ywywwzxxwyxzwzzx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_1087->g_919.yx)).yxxxxyxx)))).s1530701370000452))).s6 & ((&p_6 == (l_920[8][3] = &p_1087->g_584)) & (1L > ((((*l_923) = l_921) == (void*)0) > p_3)))))) , p_1087->g_924) , p_3), ((VECTOR(int16_t, 4))(0x3BF7L)), (-9L))), 0x05B9L, 0L, 0x575AL, (-1L), ((VECTOR(int16_t, 2))(1L)), 6L)).sbe03, ((VECTOR(int16_t, 4))(0x0E9CL))))).yyxywzwz))).s3)))))) , &p_1087->g_390)) | p_3), 0x805DCC15825FAB75L, 0x26D16F029653A3DDL, 3UL)).even, (uint64_t)18446744073709551615UL, (uint64_t)l_925))).hi, (*l_842))))) < l_876[4][0].f0), 0xE5883CB5L)) >= p_3) <= 3UL) == 1UL) , l_926[4]), (-6L))))) >= GROUP_DIVERGE(0, 1)) <= 18446744073709551615UL);
                    }
                    (*l_927) = p_1087->g_848[1];
                    (*l_842) = (!0L);
                }
                else
                { /* block id: 407 */
                    int16_t l_936 = 0x7D49L;
                    int32_t l_947 = (-1L);
                    int32_t l_966 = 0x72222BE0L;
                    int32_t l_977 = 0x7269F1BEL;
                    int32_t l_979 = (-2L);
                    int32_t l_981 = 4L;
                    int32_t l_982 = (-8L);
                    int32_t l_985 = 1L;
                    int32_t l_989 = 0x29A30B07L;
                    int32_t l_990 = 0x4CAC1F30L;
                    int32_t l_992 = 0x66366129L;
                    int32_t l_993 = 0L;
                    int32_t l_994 = 0x026FFD35L;
                    int32_t l_995 = (-6L);
                    uint32_t l_997 = 4294967295UL;
                    for (p_1087->g_578.f4 = 28; (p_1087->g_578.f4 > (-18)); p_1087->g_578.f4--)
                    { /* block id: 410 */
                        struct S0 *l_932[2];
                        uint32_t *l_937[3];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_932[i] = &p_1087->g_911.f0;
                        for (i = 0; i < 3; i++)
                            l_937[i] = &p_1087->g_911.f0.f1;
                        p_1087->g_933 = p_1087->g_853;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1087->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((*p_4) = (l_936 < (p_3 = (p_1087->g_672[5][5].f0 & p_5)))), ((**l_852) ^= (--(*l_849))))), 10))][(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]));
                        (*l_842) = 0x1ADBAF05L;
                        if ((*p_1087->g_41))
                            break;
                    }
                    if (((p_1087->g_940 , ((VECTOR(uint8_t, 8))(l_941.xyyyxyxy)).s5) <= (p_1087->g_942 != (void*)0)))
                    { /* block id: 422 */
                        uint32_t *l_946[7];
                        uint16_t *l_965 = (void*)0;
                        int32_t l_967 = 0x55B21EDDL;
                        int64_t ***l_968 = (void*)0;
                        int64_t *l_971 = &p_1087->g_770;
                        int64_t **l_970 = &l_971;
                        int64_t ***l_969 = &l_970;
                        int32_t *l_972[7][3][6] = {{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}},{{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867},{&l_947,&l_822,&l_822,&l_889[7][1][2],&l_967,&l_867}}};
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_946[i] = &p_1087->g_911.f0.f1;
                        (*l_969) = (((safe_sub_func_uint32_t_u_u((l_947 = 4294967287UL), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(p_1087->g_948.wyxw)).hi))).xyyyyyxy)).s3)) == (((*l_842) || (p_3 , ((p_1087->g_737 != (safe_lshift_func_int8_t_s_s(((*l_842) & l_822), (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_div_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u((p_5 >= (p_3 && GROUP_DIVERGE(1, 1))), ((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((l_966 = FAKE_DIVERGE(p_1087->local_2_offset, get_local_id(2), 10)) | ((*p_1087->g_817) & 5UL)), 65527UL)), l_832.y)) || (-1L)))) <= p_5) && (-1L)) < FAKE_DIVERGE(p_1087->group_2_offset, get_group_id(2), 10)), p_5)) && 0UL) != l_967), 5)) != p_3), p_5))))) != 0UL))) < 0x9B34D5F1CE9C6B82L)) , (void*)0);
                        (*l_842) = p_5;
                        if (l_812)
                            break;
                        --l_997;
                    }
                    else
                    { /* block id: 429 */
                        int32_t *l_1000 = &l_991[4];
                        int32_t *l_1001 = &l_889[1][1][2];
                        int32_t *l_1002 = &l_822;
                        int32_t *l_1003 = &l_983;
                        int32_t *l_1004 = &l_889[8][0][2];
                        int32_t *l_1005 = &l_991[5];
                        int32_t *l_1006 = &l_966;
                        int32_t *l_1007 = (void*)0;
                        int32_t *l_1008 = &l_992;
                        int32_t *l_1009 = &l_980;
                        int32_t *l_1010 = &l_822;
                        int32_t *l_1011 = (void*)0;
                        int32_t *l_1012 = &l_987;
                        int32_t *l_1013[6] = {&l_947,&l_947,&l_947,&l_947,&l_947,&l_947};
                        int i;
                        ++l_1014[5][1][0];
                        l_983 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((*l_842), 11)), 8));
                        (*l_1006) |= (p_1087->g_1021 , (((*p_1087->g_79) >= (~(l_975 &= (l_1022 , (safe_lshift_func_int16_t_s_s((*l_1009), 0)))))) , (safe_mul_func_uint8_t_u_u(((p_1087->g_861.s4 ^ (+l_977)) , l_989), l_992))));
                    }
                }
            }
            return &p_1087->g_399;
        }
        else
        { /* block id: 438 */
            int64_t l_1033 = 6L;
            uint16_t *l_1034[3];
            int32_t l_1035 = 0x3FEAE517L;
            int32_t l_1036 = 0L;
            int32_t l_1041 = 6L;
            VECTOR(int16_t, 16) l_1048 = (VECTOR(int16_t, 16))(0x39C8L, (VECTOR(int16_t, 4))(0x39C8L, (VECTOR(int16_t, 2))(0x39C8L, 0x2A0DL), 0x2A0DL), 0x2A0DL, 0x39C8L, 0x2A0DL, (VECTOR(int16_t, 2))(0x39C8L, 0x2A0DL), (VECTOR(int16_t, 2))(0x39C8L, 0x2A0DL), 0x39C8L, 0x2A0DL, 0x39C8L, 0x2A0DL);
            VECTOR(uint8_t, 8) l_1051 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 246UL), 246UL), 246UL, 247UL, 246UL);
            VECTOR(uint8_t, 2) l_1052 = (VECTOR(uint8_t, 2))(0UL, 246UL);
            int16_t *l_1058[9][9][3] = {{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}},{{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2},{&p_1087->g_933.f2,&p_1087->g_933.f2,&p_1087->g_943.f2}}};
            int32_t *l_1059 = &l_980;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1034[i] = (void*)0;
            (*l_1059) &= (safe_mod_func_uint32_t_u_u(((GROUP_DIVERGE(0, 1) <= (((l_1035 = (((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((++l_1038) | (-1L)) <= l_1041), (safe_rshift_func_int8_t_s_s((*p_1087->g_8), 0)))), 6)) <= ((VECTOR(int32_t, 8))(0x1699FEBAL, 0L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(((*l_842) = ((((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), l_988[0][1])) , p_3) , ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65533UL, 65535UL)).odd, ((VECTOR(int16_t, 2))(l_1048.s31)).lo)) == (p_1087->g_767.z && (((VECTOR(int8_t, 2))(0x18L, 1L)).hi & (((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1051.s57)))).xyyy, (uint8_t)((VECTOR(uint8_t, 4))((*l_842), ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(l_1052.xxxyxxyyxxxyxyyx)).sb42e, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(p_1087->g_1053.sc248e2cf530a5ba5)).hi, ((VECTOR(uint8_t, 4))(GROUP_DIVERGE(1, 1), 0xD4L, 248UL, 0x4EL)).xxzyxzxx))).odd))).hi, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 4))(p_1087->g_1054.yyxy)).xyyyzxxz, ((VECTOR(uint8_t, 4))(p_1087->g_1055.s5711)).yxwwyzzy))).s44))), 0x9CL)).w))).y >= (&l_974 != (((safe_add_func_uint16_t_u_u(((1UL && 0xD8L) & 0x32L), l_1048.sa)) >= p_5) , (void*)0))))))) != 9L)), ((VECTOR(int16_t, 4))(0L)), l_1036, (-3L), 0x7E7BL)).s00))).yxyxyyxy, ((VECTOR(uint16_t, 8))(65535UL))))).s44)), 0x2A9DAFB4L, (-1L), 6L)).s5) && 0x65B2C759C8FF73F3L)) & l_925) ^ 4294967295UL)) > l_1051.s4), l_1052.y));
        }
        if ((*p_1087->g_41))
            break;
    }
    (*p_1087->g_79) ^= p_5;
    return &p_1087->g_399;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_36 p_1087->g_459 p_1087->g_548 p_1087->g_79
 * writes: p_1087->g_783 p_1087->g_36 p_1087->g_102 p_1087->g_42
 */
int8_t * func_10(uint32_t  p_11, union U4  p_12, union U4  p_13, int64_t  p_14, int32_t  p_15, struct S5 * p_1087)
{ /* block id: 340 */
    int32_t **l_784 = (void*)0;
    uint8_t *l_785 = &p_1087->g_36;
    int32_t l_788[2][6] = {{0x53004AFDL,(-6L),0x53004AFDL,0x53004AFDL,(-6L),0x53004AFDL},{0x53004AFDL,(-6L),0x53004AFDL,0x53004AFDL,(-6L),0x53004AFDL}};
    uint16_t ***l_789 = (void*)0;
    VECTOR(uint64_t, 16) l_790 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL), 1UL, 18446744073709551615UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 18446744073709551615UL, 1UL, 18446744073709551615UL, 1UL);
    int16_t l_791 = 0x1A13L;
    uint32_t *l_792 = &p_1087->g_746[1][4][0].f0;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1087->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((*l_785) |= ((-9L) >= (!((p_1087->g_783 = (void*)0) == ((!p_15) , l_784))))), ((safe_mod_func_int32_t_s_s((-1L), (((VECTOR(int32_t, 2))(0x68CEBCDFL, 0x5EAC925DL)).hi & ((p_1087->g_459 == (void*)0) == ((7UL != p_12.f0) != l_788[1][5]))))) ^ p_12.f0))) < 4UL), 10))][(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]));
    (*p_1087->g_79) = ((-10L) != ((p_12.f0 ^ ((p_1087->g_548 && ((p_15 , 2L) , ((void*)0 != l_789))) | ((((VECTOR(uint64_t, 16))(l_790.s65a9c4df9659ab32)).sd >= l_791) | (l_792 == (void*)0)))) || (-8L)));
    return &p_1087->g_399;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_764 p_1087->g_766 p_1087->g_767 p_1087->g_768 p_1087->g_770 p_1087->g_694 p_1087->g_41 p_1087->g_65.f0 p_1087->g_36 p_1087->g_54 p_1087->g_42 p_1087->g_102 p_1087->g_97 p_1087->g_399 p_1087->g_79 p_1087->g_443 p_1087->g_588 p_1087->g_392 p_1087->g_53 p_1087->g_459 p_1087->g_comm_values p_1087->g_66 p_1087->g_429 p_1087->g_548 p_1087->g_574.f0 p_1087->g_578.f0 p_1087->g_579
 * writes: p_1087->g_770 p_1087->g_694 p_1087->g_42 p_1087->g_102 p_1087->g_65.f0 p_1087->g_36 p_1087->g_97 p_1087->g_459 p_1087->g_53 p_1087->g_426 p_1087->g_548 p_1087->g_588 p_1087->g_399 p_1087->g_79
 */
union U4  func_16(int16_t  p_17, int64_t  p_18, union U4  p_19, struct S5 * p_1087)
{ /* block id: 332 */
    uint16_t l_749 = 0UL;
    uint64_t *l_753 = (void*)0;
    uint64_t **l_752 = &l_753;
    VECTOR(int32_t, 4) l_754 = (VECTOR(int32_t, 4))(0x2577A8ABL, (VECTOR(int32_t, 2))(0x2577A8ABL, 0x3D36499BL), 0x3D36499BL);
    VECTOR(int16_t, 2) l_757 = (VECTOR(int16_t, 2))(0x0A8AL, 1L);
    int32_t *l_761 = &p_1087->g_588;
    int32_t **l_762 = (void*)0;
    VECTOR(int64_t, 16) l_763 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    VECTOR(int64_t, 8) l_765 = (VECTOR(int64_t, 8))(0x31B6DAD982124C7CL, (VECTOR(int64_t, 4))(0x31B6DAD982124C7CL, (VECTOR(int64_t, 2))(0x31B6DAD982124C7CL, (-1L)), (-1L)), (-1L), 0x31B6DAD982124C7CL, (-1L));
    int64_t *l_769 = &p_1087->g_770;
    uint32_t *l_775 = &p_1087->g_694;
    int32_t **l_778 = &p_1087->g_79;
    int i;
    (*p_1087->g_41) = (safe_div_func_uint32_t_u_u(l_749, (safe_lshift_func_int8_t_s_u((((((void*)0 == l_752) == 0x9758L) , ((VECTOR(int32_t, 16))(l_754.xxzxwzyyxyyxyxxz)).s7) & ((((VECTOR(int16_t, 16))(l_757.xxxyxxyxxyyxxyxy)).s1 <= 0L) , (((safe_rshift_func_int8_t_s_s((-1L), 7)) > (((*l_769) |= ((safe_unary_minus_func_uint32_t_u(((l_761 = l_761) != &p_1087->g_42))) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_763.s7d)).yxyx)).zwzxxxzw))), ((VECTOR(int64_t, 2))(0L, 0L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1087->g_764.xyxx)).even)), ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_765.s64)), (-7L), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1087->g_766.xyxyxyyxyxxxxxxx)).even)).s56, ((VECTOR(int64_t, 4))(p_1087->g_767.wzxx)).hi))), ((VECTOR(int64_t, 2))(p_1087->g_768.scf)), (-4L))).s17))).yxyy))))).s1)) , (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((~((++(*l_775)) <= 0L)), p_17)), 3)))) & p_1087->g_764.x))), p_17))));
    (*l_778) = func_38(l_761, &p_1087->g_399, p_1087);
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_578.f0 p_1087->g_548 p_1087->g_102 p_1087->g_639 p_1087->g_579 p_1087->g_538 p_1087->g_53 p_1087->g_665 p_1087->g_79 p_1087->g_42 p_1087->g_676.f0 p_1087->g_399 p_1087->g_65.f0 p_1087->g_670.f0 p_1087->g_41 p_1087->g_574.f0 p_1087->g_686 p_1087->g_689 p_1087->g_565 p_1087->g_718 p_1087->l_comm_values p_1087->g_537 p_1087->g_54 p_1087->g_425 p_1087->g_742
 * writes: p_1087->g_578.f0 p_1087->g_548 p_1087->g_102 p_1087->g_42 p_1087->g_65.f0 p_1087->g_574.f0 p_1087->g_689 p_1087->g_694 p_1087->g_565 p_1087->g_425
 */
int16_t  func_25(int8_t * p_26, uint16_t * p_27, int64_t  p_28, uint64_t  p_29, int8_t * p_30, struct S5 * p_1087)
{ /* block id: 275 */
    uint32_t l_638 = 0UL;
    int8_t l_649 = 0x21L;
    VECTOR(uint64_t, 16) l_650 = (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL);
    int32_t l_651 = 0L;
    VECTOR(uint64_t, 16) l_654 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x6616DDB9F021196FL), 0x6616DDB9F021196FL), 0x6616DDB9F021196FL, 18446744073709551615UL, 0x6616DDB9F021196FL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x6616DDB9F021196FL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x6616DDB9F021196FL), 18446744073709551615UL, 0x6616DDB9F021196FL, 18446744073709551615UL, 0x6616DDB9F021196FL);
    union U1 *l_669 = &p_1087->g_670;
    int32_t l_679 = 6L;
    int16_t *l_700 = &p_1087->g_53;
    int16_t **l_699 = &l_700;
    VECTOR(int32_t, 8) l_735 = (VECTOR(int32_t, 8))(0x5B5578C9L, (VECTOR(int32_t, 4))(0x5B5578C9L, (VECTOR(int32_t, 2))(0x5B5578C9L, 0x2797CB0BL), 0x2797CB0BL), 0x2797CB0BL, 0x5B5578C9L, 0x2797CB0BL);
    int i;
    for (p_1087->g_578.f0 = 0; (p_1087->g_578.f0 >= 37); p_1087->g_578.f0++)
    { /* block id: 278 */
        union U1 *l_675 = &p_1087->g_676;
        int32_t l_678 = 0x5229F37DL;
        int32_t l_681 = 0x2B4C9C16L;
        int32_t l_701 = 0x24948B9CL;
        uint16_t ***l_720[5];
        int32_t l_734 = 0x0EA38629L;
        int32_t l_736 = 8L;
        int32_t l_738 = 0x520F6808L;
        int i;
        for (i = 0; i < 5; i++)
            l_720[i] = &p_1087->g_719[2];
        for (p_29 = 0; (p_29 < 27); ++p_29)
        { /* block id: 281 */
            VECTOR(uint64_t, 8) l_655 = (VECTOR(uint64_t, 8))(0x3B8C0ECA768F9A02L, (VECTOR(uint64_t, 4))(0x3B8C0ECA768F9A02L, (VECTOR(uint64_t, 2))(0x3B8C0ECA768F9A02L, 0x0157E949A19C7460L), 0x0157E949A19C7460L), 0x0157E949A19C7460L, 0x3B8C0ECA768F9A02L, 0x0157E949A19C7460L);
            VECTOR(uint64_t, 2) l_664 = (VECTOR(uint64_t, 2))(1UL, 0x85B914502E30E472L);
            VECTOR(int8_t, 8) l_666 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
            union U1 *l_671[10];
            union U1 **l_677 = &l_675;
            uint32_t *l_680 = &p_1087->g_65.f0;
            VECTOR(uint16_t, 16) l_702 = (VECTOR(uint16_t, 16))(0x339DL, (VECTOR(uint16_t, 4))(0x339DL, (VECTOR(uint16_t, 2))(0x339DL, 65528UL), 65528UL), 65528UL, 0x339DL, 65528UL, (VECTOR(uint16_t, 2))(0x339DL, 65528UL), (VECTOR(uint16_t, 2))(0x339DL, 65528UL), 0x339DL, 65528UL, 0x339DL, 65528UL);
            int32_t l_729 = 0x13523C97L;
            int32_t l_732 = 0x6B9326AAL;
            int32_t l_733[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            uint8_t l_739[9][9] = {{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L},{0xDAL,6UL,7UL,0x46L,255UL,0x2EL,0x2EL,255UL,0x46L}};
            volatile uint64_t * volatile *l_745 = &p_1087->g_743;
            int i, j;
            for (i = 0; i < 10; i++)
                l_671[i] = &p_1087->g_672[5][5];
            if (p_29)
                break;
            for (p_1087->g_548 = 0; (p_1087->g_548 > 23); p_1087->g_548 = safe_add_func_uint16_t_u_u(p_1087->g_548, 7))
            { /* block id: 285 */
                for (p_1087->g_102 = 0; (p_1087->g_102 < (-5)); p_1087->g_102 = safe_sub_func_uint8_t_u_u(p_1087->g_102, 9))
                { /* block id: 288 */
                    int32_t l_642 = 0x17F36240L;
                    atomic_max(&p_1087->g_atomic_reduction[get_linear_group_id()], (((!l_638) | ((VECTOR(uint16_t, 2))(p_1087->g_639.s6d)).odd) > ((p_1087->g_579.y <= (safe_lshift_func_uint8_t_u_s((l_638 <= l_642), 1))) < (safe_div_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_29, (safe_rshift_func_int8_t_s_u(p_1087->g_538.y, (l_651 ^= (0x4F5BL >= (l_649 | ((VECTOR(uint64_t, 2))(l_650.sf2)).even))))))) || (-1L)), 0xADL)))));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1087->v_collective += p_1087->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                }
            }
            if ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((*l_680) ^= (((l_679 = ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 16))(l_654.s4c5148fdd999e7da)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_655.s31)), ((safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(0x5424L, (safe_add_func_int64_t_s_s(p_1087->g_53, (p_1087->g_53 < ((VECTOR(uint64_t, 8))(l_664.xyxyxyxy)).s0))))) , ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(p_1087->g_665.s44014352)).s31, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((((*p_1087->g_79) = (l_651 = (*p_1087->g_79))) < 7L), 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_666.s71236410)))).s24)), (-1L), ((~(safe_div_func_int8_t_s_s(((l_669 != l_671[4]) & ((((safe_lshift_func_int8_t_s_s((l_669 == ((*l_677) = l_675)), p_1087->g_676.f0)) ^ l_678) & 0x45L) | 0x5FD74B8D48153ED3L)), (*p_26)))) && l_678), 1L, 0x3AL)))), ((VECTOR(int8_t, 8))(0L))))).hi)).zzzzxwyw)).s7310061641244527, (int8_t)l_678, (int8_t)l_678))).s19))).xyyyyxyx)).s2374605530433422, ((VECTOR(uint8_t, 16))(255UL))))).lo, (int16_t)l_678))))).s2), l_650.s6)) & p_1087->g_665.s1), 0x61FC71C8L)) > l_654.s5), ((VECTOR(uint64_t, 2))(0xC465FEAE0427BB11L)), ((VECTOR(uint64_t, 2))(0xA86BF4C2CF8AE629L)), 0x8B55643623E444D9L)).s2247262011641336)).hi, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).odd)).yzyzwzxxxwwyxzzx))).s9) | FAKE_DIVERGE(p_1087->local_2_offset, get_local_id(2), 10)) || 1L)), p_1087->g_670.f0, 4294967287UL, ((VECTOR(uint32_t, 2))(0xEF69FF30L)), ((VECTOR(uint32_t, 2))(0xF95587ADL)), 0x416F9382L)).s57)).yxyy, ((VECTOR(uint32_t, 4))(0x102B196EL))))).y, l_678)))
            { /* block id: 298 */
                VECTOR(int32_t, 16) l_692 = (VECTOR(int32_t, 16))(0x5E0A60AFL, (VECTOR(int32_t, 4))(0x5E0A60AFL, (VECTOR(int32_t, 2))(0x5E0A60AFL, 5L), 5L), 5L, 0x5E0A60AFL, 5L, (VECTOR(int32_t, 2))(0x5E0A60AFL, 5L), (VECTOR(int32_t, 2))(0x5E0A60AFL, 5L), 0x5E0A60AFL, 5L, 0x5E0A60AFL, 5L);
                int i;
                (*p_1087->g_41) = (0L & l_681);
                l_678 |= (p_29 == 0x975EL);
                for (l_681 = 0; (l_681 <= (-18)); --l_681)
                { /* block id: 303 */
                    int8_t **l_690 = &p_1087->g_584;
                    int32_t l_691 = (-2L);
                    for (p_1087->g_574.f0 = (-22); (p_1087->g_574.f0 <= 2); ++p_1087->g_574.f0)
                    { /* block id: 306 */
                        int32_t *l_688 = &p_1087->g_689;
                        atomic_add(&p_1087->l_atomic_reduction[0], (((p_1087->g_579.y , (~(-1L))) >= (p_29 , 0x5FFEE459L)) && ((((*l_688) &= (((*l_677) = (void*)0) == p_1087->g_686[0][2])) , l_690) != &p_1087->g_584)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1087->v_collective += p_1087->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*p_1087->g_41) ^= (~(-9L));
                        if (l_691)
                            continue;
                        (*p_1087->g_41) &= ((VECTOR(int32_t, 8))(l_692.s3d2e2303)).s6;
                    }
                    return p_28;
                }
            }
            else
            { /* block id: 316 */
                uint32_t *l_693 = &p_1087->g_694;
                uint64_t *l_695 = (void*)0;
                uint64_t *l_696[2];
                VECTOR(int16_t, 16) l_715 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                int64_t *l_721 = (void*)0;
                int64_t *l_722 = (void*)0;
                int64_t *l_723[5][9] = {{&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_425,&p_1087->g_429,&p_1087->g_425,(void*)0,&p_1087->g_425},{&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_425,&p_1087->g_429,&p_1087->g_425,(void*)0,&p_1087->g_425},{&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_425,&p_1087->g_429,&p_1087->g_425,(void*)0,&p_1087->g_425},{&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_425,&p_1087->g_429,&p_1087->g_425,(void*)0,&p_1087->g_425},{&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_429,&p_1087->g_425,&p_1087->g_429,&p_1087->g_425,(void*)0,&p_1087->g_425}};
                int32_t *l_724 = &l_701;
                int32_t *l_725 = &l_679;
                int32_t *l_726 = &p_1087->g_670.f3;
                int32_t *l_727 = &p_1087->g_42;
                int32_t *l_728 = &p_1087->g_42;
                int32_t *l_730 = &p_1087->g_102;
                int32_t *l_731[8] = {&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3,&p_1087->g_687[0][2].f3};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_696[i] = (void*)0;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1087->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[(safe_mod_func_uint32_t_u_u((((*p_1087->g_41) < ((*l_693) = 4294967295UL)) && ((((l_681 |= p_28) != ((safe_div_func_int64_t_s_s((p_1087->g_425 &= (((void*)0 == l_699) & (l_701 != ((((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_702.s663a8a2575f79f04)).sa4b7)), ((VECTOR(uint16_t, 4))((~(safe_rshift_func_uint8_t_u_s((l_702.s6 != ((((safe_lshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((--p_1087->g_565.x) && (safe_add_func_int16_t_s_s((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 16))(l_715.sf3643ea027add40b))))).even, ((VECTOR(int16_t, 4))(((((l_678 >= ((p_1087->g_718 != l_720[4]) <= 0x09L)) ^ p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]) ^ 0x533F255FD87F193EL) < 0xF4L), 0x542CL, 0L, 0x3D70L)).xwxxzywz))).s6261041616701223)).s6 , 0x3D71L), l_715.sd))), p_1087->g_537.y)) | p_1087->g_54), 0)) != p_1087->g_42) , l_680) != &p_1087->g_102)), p_1087->g_578.f0))), 0x3CC9L, 0UL, 3UL)), ((VECTOR(uint16_t, 4))(1UL))))).hi, ((VECTOR(uint16_t, 2))(65533UL)), ((VECTOR(uint16_t, 2))(0UL))))).xxyx))).y & GROUP_DIVERGE(2, 1)) < l_655.s1)))), p_28)) == p_29)) , p_1087->g_579.y) & 0x85144B0F25CA2D5CL)), 10))][(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]));
                l_739[3][6]++;
            }
            l_745 = (((0xA6L <= 255UL) & 0x1340B51FL) , p_1087->g_742);
        }
        (*p_1087->g_41) = l_734;
        if (p_29)
            continue;
    }
    return l_679;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_41 p_1087->g_comm_values p_1087->l_comm_values p_1087->g_65 p_1087->g_66 p_1087->g_53 p_1087->g_65.f0 p_1087->g_78 p_1087->g_36 p_1087->g_79 p_1087->g_42 p_1087->g_54 p_1087->g_102 p_1087->g_392 p_1087->g_399 p_1087->g_425 p_1087->g_426 p_1087->g_97 p_1087->g_443 p_1087->g_459 p_1087->g_429 p_1087->g_537 p_1087->g_538 p_1087->g_548 p_1087->g_574.f0 p_1087->g_578.f0 p_1087->g_579
 * writes: p_1087->g_54 p_1087->g_79 p_1087->g_102 p_1087->g_392 p_1087->g_65.f0 p_1087->g_36 p_1087->g_425 p_1087->g_426 p_1087->g_429 p_1087->g_97 p_1087->g_459 p_1087->g_42 p_1087->g_53 p_1087->g_66 p_1087->g_548 p_1087->g_399 p_1087->g_41
 */
int8_t * func_31(int32_t  p_32, struct S5 * p_1087)
{ /* block id: 7 */
    VECTOR(int8_t, 8) l_37 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x61L), 0x61L), 0x61L, 0x36L, 0x61L);
    int32_t *l_48[7][9] = {{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0},{&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,(void*)0,&p_1087->g_42,&p_1087->g_42,(void*)0,(void*)0,(void*)0}};
    int16_t *l_52[8] = {&p_1087->g_53,&p_1087->g_53,&p_1087->g_53,&p_1087->g_53,&p_1087->g_53,&p_1087->g_53,&p_1087->g_53,&p_1087->g_53};
    VECTOR(int32_t, 2) l_57 = (VECTOR(int32_t, 2))((-1L), 8L);
    uint8_t l_76 = 254UL;
    uint32_t l_77 = 0xC2D96A12L;
    int8_t l_80 = 0x05L;
    int8_t *l_81 = &l_80;
    int32_t **l_629[5][2] = {{&p_1087->g_41,&l_48[2][5]},{&p_1087->g_41,&l_48[2][5]},{&p_1087->g_41,&l_48[2][5]},{&p_1087->g_41,&l_48[2][5]},{&p_1087->g_41,&l_48[2][5]}};
    int i, j;
    p_1087->g_41 = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_37.s1771370561057450)).s4edb)).y , func_38(p_1087->g_41, func_43(p_32, l_48[2][5], func_49(((p_1087->g_54 = p_1087->g_comm_values[p_1087->tid]) <= (safe_rshift_func_int16_t_s_u((((VECTOR(int32_t, 4))(l_57.yyyy)).x == (65535UL >= p_32)), ((safe_mul_func_int8_t_s_s(((*l_81) = ((((func_60(p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))], p_1087->g_65, ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(p_1087->g_66.wwwxyyxyxzyzxzyw)).even)).s53)), 0x03AC46406CCCE42BL, ((safe_sub_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s((((safe_add_func_int16_t_s_s(((safe_add_func_int16_t_s_s((((p_1087->g_53 , 0x0C99D02BD444C677L) > p_32) == p_32), 1L)) && p_1087->g_comm_values[p_1087->tid]), 0xE1B4L)) ^ l_76) >= 0x4F543A9BL))) & p_1087->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1087->tid, 23))]), 0x2C79L)) == p_1087->g_comm_values[p_1087->tid]) ^ 0x5CA5B7F440AFAA93L), p_32)) || 0x4746BA86L), l_77, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), 0UL, ((VECTOR(uint64_t, 8))(0x89E4E2CD5B9AADFEL)))).sd , p_32) ^ p_1087->g_65.f0), p_1087->g_78, p_1087) | l_80) , p_1087->g_36) >= 0xB5BC1773L) , p_32)), p_1087->g_66.z)) , p_1087->g_36)))), l_48[0][2], p_1087), l_48[2][5], p_1087), p_1087));
    return &p_1087->g_399;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_65.f0 p_1087->g_36 p_1087->g_54 p_1087->g_392 p_1087->g_comm_values p_1087->g_399 p_1087->g_425 p_1087->g_426 p_1087->g_41 p_1087->g_42 p_1087->g_97 p_1087->g_79 p_1087->g_443 p_1087->g_53 p_1087->g_102 p_1087->g_459 p_1087->g_429 p_1087->g_66 p_1087->g_537 p_1087->g_538 p_1087->g_548 p_1087->g_574.f0 p_1087->g_578.f0 p_1087->g_579 p_1087->g_588
 * writes: p_1087->g_65.f0 p_1087->g_36 p_1087->g_425 p_1087->g_426 p_1087->g_429 p_1087->g_97 p_1087->g_459 p_1087->g_42 p_1087->g_53 p_1087->g_66 p_1087->g_548 p_1087->g_399 p_1087->g_588
 */
int32_t * func_38(int32_t * p_39, int8_t * p_40, struct S5 * p_1087)
{ /* block id: 180 */
    uint32_t *l_402 = &p_1087->g_65.f0;
    uint8_t *l_407 = &p_1087->g_36;
    int32_t l_412 = 0x680AA86FL;
    VECTOR(int8_t, 4) l_413 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x3EL), 0x3EL);
    int16_t l_414 = 7L;
    VECTOR(int16_t, 2) l_420 = (VECTOR(int16_t, 2))((-1L), (-6L));
    int64_t *l_427 = (void*)0;
    int64_t *l_428[7][2][2] = {{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}},{{&p_1087->g_429,&p_1087->g_429},{&p_1087->g_429,&p_1087->g_429}}};
    uint32_t l_430 = 0xA0D642B2L;
    uint64_t *l_431 = (void*)0;
    uint64_t *l_432 = &p_1087->g_97;
    int32_t l_433 = 0x49A1689FL;
    int8_t *l_452[10] = {&p_1087->g_399,(void*)0,&p_1087->g_399,(void*)0,&p_1087->g_399,&p_1087->g_399,(void*)0,&p_1087->g_399,(void*)0,&p_1087->g_399};
    int8_t **l_451 = &l_452[6];
    uint32_t l_453 = 0x12740678L;
    int32_t l_457[3][1];
    VECTOR(int32_t, 16) l_458 = (VECTOR(int32_t, 16))(0x40F7E67DL, (VECTOR(int32_t, 4))(0x40F7E67DL, (VECTOR(int32_t, 2))(0x40F7E67DL, 0x14AA5DA6L), 0x14AA5DA6L), 0x14AA5DA6L, 0x40F7E67DL, 0x14AA5DA6L, (VECTOR(int32_t, 2))(0x40F7E67DL, 0x14AA5DA6L), (VECTOR(int32_t, 2))(0x40F7E67DL, 0x14AA5DA6L), 0x40F7E67DL, 0x14AA5DA6L, 0x40F7E67DL, 0x14AA5DA6L);
    VECTOR(int8_t, 4) l_489 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, (-1L)), (-1L));
    VECTOR(int8_t, 2) l_490 = (VECTOR(int8_t, 2))(0x00L, 0x23L);
    uint32_t l_491 = 0x08C20A73L;
    VECTOR(uint8_t, 2) l_493 = (VECTOR(uint8_t, 2))(6UL, 1UL);
    union U2 *l_543 = &p_1087->g_544;
    uint16_t l_554 = 65526UL;
    uint16_t **l_557 = &p_1087->g_78;
    VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 0x64L), 0x64L);
    VECTOR(uint8_t, 2) l_581 = (VECTOR(uint8_t, 2))(247UL, 0x80L);
    int32_t l_590 = 0x36E9C2E0L;
    int8_t l_591 = 0x67L;
    uint32_t l_593 = 4294967287UL;
    uint64_t l_626 = 18446744073709551613UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_457[i][j] = 0L;
    }
    l_433 ^= (safe_lshift_func_uint8_t_u_u((((++(*l_402)) , ((safe_sub_func_uint8_t_u_u(((*l_407)--), GROUP_DIVERGE(1, 1))) >= (safe_lshift_func_int8_t_s_u(l_412, 5)))) , ((((VECTOR(int8_t, 2))(l_413.xx)).hi , ((l_412 = (l_414 , (((*l_432) ^= (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(p_1087->g_54, ((VECTOR(int16_t, 16))(l_412, 0x36BAL, 1L, (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 2))((-7L), 0x7CE4598BL))))).lo)), ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(4L, ((VECTOR(int16_t, 2))(0x5BB6L, 0x41F9L)), 0x3D74L)), 9L, 0x4AE8L, (-5L), 0x4F2FL)).s6406126750416620, ((VECTOR(int16_t, 4))(l_420.yxxx)).ywyzzxwzxzzxxzwz))).hi, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(0L, 1L, (-4L), 7L)).ywwzzxwz, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(7L, ((void*)0 != p_1087->g_392), (safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_1087->g_comm_values[p_1087->tid], ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x23L, 255UL)), (((p_1087->g_429 = (((*p_40) | (p_1087->g_426 = (p_1087->g_425 ^= l_414))) >= l_413.y)) , 0x0E7C4979L) & 0x350552F2L), 0UL, p_1087->g_426, 0xAAL, 0x05L, 1UL, 0x3AL, l_412, ((VECTOR(uint8_t, 4))(0x25L)), 0UL, 0xE5L)).s7d9a, (uint8_t)l_420.y, (uint8_t)l_430))).hi, ((VECTOR(uint8_t, 2))(0xB2L))))).yyxy)).y)), l_414)), ((VECTOR(int16_t, 2))(0x4B44L)), 0x49F5L, 0x0EE0L, 2L)), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))((-10L)))))), ((VECTOR(int16_t, 4))(0x1B19L)), 0x6900L, ((VECTOR(int16_t, 2))(0x36BCL)), 0x608EL)).lo, ((VECTOR(int16_t, 8))(0x0854L)), ((VECTOR(int16_t, 8))(0x40CDL))))))))))), ((VECTOR(int16_t, 2))(0x51E6L)), (-7L), 0x6FF8L)).sa)) , (*p_1087->g_41)), l_430))) & 1UL))) , (void*)0)) == p_39)), 1));
    if (l_413.y)
    { /* block id: 189 */
        int32_t l_440 = 0L;
        VECTOR(int32_t, 4) l_444 = (VECTOR(int32_t, 4))(0x3D997242L, (VECTOR(int32_t, 2))(0x3D997242L, 1L), 1L);
        union U2 *l_449 = &p_1087->g_450;
        int16_t *l_454 = (void*)0;
        int16_t *l_455 = (void*)0;
        int32_t l_456 = 0x37B242BAL;
        VECTOR(int32_t, 8) l_462 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        int i;
        l_457[2][0] ^= (!(safe_sub_func_uint32_t_u_u(p_1087->g_399, (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((*l_407) = ((l_456 &= ((l_440 && (safe_mod_func_int32_t_s_s(((l_433 &= (((((*p_1087->g_79) & ((*p_40) <= ((FAKE_DIVERGE(p_1087->local_2_offset, get_local_id(2), 10) != ((+((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1087->g_443.sb804)), ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_444.zx)), 1L, 0x072D6C60L)).even)), 0L)))).s1) || (safe_rshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((l_449 == ((((((l_444.w , l_451) == ((((+GROUP_DIVERGE(2, 1)) ^ FAKE_DIVERGE(p_1087->global_2_offset, get_global_id(2), 10)) && p_1087->g_54) , &l_452[6])) && GROUP_DIVERGE(1, 1)) && p_1087->g_443.s9) ^ (*p_39)) , p_1087->g_392)) , 1UL), 65530UL)) , &p_40) == &l_452[6]), l_412)))) || l_440))) | 0xF426L) , 8L) , l_453)) & 1UL), FAKE_DIVERGE(p_1087->group_2_offset, get_group_id(2), 10)))) | 0x3CEAL)) & l_414)) == p_1087->g_399) , l_413.x), 0xE8E1L)) ^ p_1087->g_53), p_1087->g_102)))));
        atomic_and(&p_1087->l_atomic_reduction[0], l_458.sb);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1087->v_collective += p_1087->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1087->g_459 = p_1087->g_459;
        for (p_1087->g_36 = (-29); (p_1087->g_36 <= 11); p_1087->g_36 = safe_add_func_uint64_t_u_u(p_1087->g_36, 3))
        { /* block id: 198 */
            (*p_1087->g_79) = ((VECTOR(int32_t, 2))(l_462.s75)).hi;
            return &p_1087->g_42;
        }
    }
    else
    { /* block id: 202 */
        int16_t l_481 = 8L;
        int16_t *l_482 = &p_1087->g_53;
        uint64_t l_487 = 0x608005D3B2996DBAL;
        VECTOR(uint16_t, 4) l_488 = (VECTOR(uint16_t, 4))(0x128CL, (VECTOR(uint16_t, 2))(0x128CL, 65532UL), 65532UL);
        VECTOR(int32_t, 8) l_492 = (VECTOR(int32_t, 8))(0x1F9B49B6L, (VECTOR(int32_t, 4))(0x1F9B49B6L, (VECTOR(int32_t, 2))(0x1F9B49B6L, 0x33D56AE9L), 0x33D56AE9L), 0x33D56AE9L, 0x1F9B49B6L, 0x33D56AE9L);
        VECTOR(uint32_t, 8) l_507 = (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xD91D2207L), 0xD91D2207L), 0xD91D2207L, 4294967291UL, 0xD91D2207L);
        VECTOR(int8_t, 2) l_539 = (VECTOR(int8_t, 2))((-1L), (-1L));
        int i;
        if ((atomic_inc(&p_1087->g_atomic_input[19 * get_linear_group_id() + 4]) == 0))
        { /* block id: 204 */
            int16_t l_463 = 0x2ECCL;
            uint8_t l_464 = 0x15L;
            int32_t l_467 = 0x276B72FCL;
            uint32_t l_468 = 6UL;
            union U2 l_472 = {18446744073709551615UL};/* VOLATILE GLOBAL l_472 */
            union U2 *l_471 = &l_472;
            l_464++;
            --l_468;
            l_471 = (void*)0;
            for (l_467 = 0; (l_467 < (-26)); l_467 = safe_sub_func_int32_t_s_s(l_467, 8))
            { /* block id: 210 */
                int16_t l_475 = 1L;
                int32_t l_476 = (-1L);
                int32_t *l_477 = (void*)0;
                int32_t *l_478 = &l_476;
                uint32_t l_479 = 0xCF83B5D3L;
                uint32_t l_480 = 4294967291UL;
                l_476 = l_475;
                l_478 = l_477;
                l_480 = l_479;
            }
            unsigned int result = 0;
            result += l_463;
            result += l_464;
            result += l_467;
            result += l_468;
            result += l_472.f0;
            result += l_472.f1.f0;
            result += l_472.f1.f1;
            result += l_472.f1.f2;
            atomic_add(&p_1087->g_special_values[19 * get_linear_group_id() + 4], result);
        }
        else
        { /* block id: 215 */
            (1 + 1);
        }
        if (((0x1CF2L < ((*l_482) = l_481)) > (l_492.s3 = ((VECTOR(int8_t, 16))(((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(0L, (0L != (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_487 != ((VECTOR(uint16_t, 16))(l_488.xwzzywwxyyzwyyxz)).sc), 4L)), p_1087->g_comm_values[p_1087->tid]))), 0x2AL, 0L)).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_489.wwzyxzww)).s6755516407420347)).scf, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_490.xxxx)), l_487, 0x29L, (l_491 < (((*p_1087->g_41) == l_458.sb) > l_453)), ((VECTOR(int8_t, 8))(1L)), 0L)).s49))).yxyx))))).zxywwzywwxyyxyzy)).s0 , l_457[2][0]) >= l_492.s0), 0x4BL, ((VECTOR(int8_t, 4))(0x31L)), 0x0EL, p_1087->g_429, ((VECTOR(int8_t, 4))(0x59L)), ((VECTOR(int8_t, 4))(0x58L)))).s6)))
        { /* block id: 220 */
            uint32_t l_518 = 0x8CA4A355L;
            int16_t *l_533[3][4] = {{&l_414,&l_481,&l_414,&l_414},{&l_414,&l_481,&l_414,&l_414},{&l_414,&l_481,&l_414,&l_414}};
            int32_t l_534 = 0x546E0F80L;
            uint8_t *l_542 = (void*)0;
            union U2 **l_545 = &l_543;
            int i, j;
            if ((5UL <= ((VECTOR(uint8_t, 8))(l_493.xyxxxyyx)).s4))
            { /* block id: 221 */
                int32_t *l_494 = &l_433;
                return &p_1087->g_42;
            }
            else
            { /* block id: 223 */
                uint8_t *l_497[9] = {&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426,&p_1087->g_426};
                int32_t l_498 = 0x1698AE2DL;
                int32_t *l_508 = (void*)0;
                int32_t *l_509 = &l_457[2][0];
                int32_t l_510[3][7] = {{0x304A1884L,0L,0x304A1884L,0x304A1884L,0L,0x304A1884L,0x304A1884L},{0x304A1884L,0L,0x304A1884L,0x304A1884L,0L,0x304A1884L,0x304A1884L},{0x304A1884L,0L,0x304A1884L,0x304A1884L,0L,0x304A1884L,0x304A1884L}};
                int32_t *l_511 = &p_1087->g_102;
                int32_t *l_512 = (void*)0;
                int32_t *l_513 = &p_1087->g_42;
                int32_t *l_514 = (void*)0;
                int32_t *l_515 = (void*)0;
                int32_t *l_516 = (void*)0;
                int32_t *l_517[7] = {(void*)0,&p_1087->g_42,(void*)0,(void*)0,&p_1087->g_42,(void*)0,(void*)0};
                int i, j;
                (*p_1087->g_79) = (safe_rshift_func_uint8_t_u_s((l_457[0][0] = ((*l_407) = p_1087->g_comm_values[p_1087->tid])), (0x68CB4E7816420FF1L != (p_1087->g_66.x == (l_498 < (safe_lshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s(p_1087->g_429, 0x53CAD7BDBE7A0350L)) >= ((l_488.x >= (((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x2BC61480L, 0L, ((VECTOR(int32_t, 4))((((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))(4294967295UL, 0x5286CE0EL, 8UL, ((safe_div_func_uint64_t_u_u(((((safe_add_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(l_507.s2754066456574710)).s8 , ((void*)0 == p_40)), 65535UL)) && l_489.z) & 0x38BCL) != l_498), l_498)) || l_492.s3), 2UL, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(7UL)), ((VECTOR(uint32_t, 2))(0x9B8C05A2L)), 0x9C5C101BL)).s4301))).x || 0x639A2CFEL), 0x1D0FB1B7L, 0x7C043797L, 0x3A9792B7L)), 0x0B81520BL, 3L)).s04, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L)))))).xyxxyxxy, ((VECTOR(int32_t, 8))(0x666ED2F3L))))).s3 < 0x0800115FL)) == p_1087->g_54)), 8)))))));
                ++l_518;
            }
            (*l_545) = (((safe_sub_func_int32_t_s_s((((*l_407) |= 0xADL) <= (p_1087->g_426 = (safe_rshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((p_1087->g_53 = (l_533[1][2] != &p_1087->g_53)), 1)), p_1087->g_42)) < ((l_412 ^= (l_534 |= p_1087->g_65.f0)) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(p_1087->g_537.zyxyyzzw)).s73, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(p_1087->g_538.wy)).xyxy))).odd, ((VECTOR(int8_t, 4))(l_489.z, 0L, 0x1AL, 0L)).odd))).yyxyxyyyyyxxyxyx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_539.xy)).xyxyyyyy)).s5003551200472155)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))((~(safe_add_func_int8_t_s_s(((4294967295UL != (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551607UL, 1UL)).yxxxyyxyxxxxxxyy)).hi)).s6 & (p_1087->g_66.z = l_539.y))) , l_413.y), l_487))), 0x73L, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))((-6L))))).s4054204534361775, ((VECTOR(int8_t, 16))(0x74L)), ((VECTOR(int8_t, 16))(0x33L))))).s95)).yxyyxxxyxxxyxyyy))).s77, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))((-1L))))))))).hi, l_518)))) >= (-4L)), 3)) , p_1087->g_comm_values[p_1087->tid]), l_488.z)) != 0L), 6)))), l_489.w)) > l_433) , l_543);
            return &p_1087->g_42;
        }
        else
        { /* block id: 237 */
            int32_t *l_546 = &l_412;
            int32_t *l_547[9] = {&l_433,&l_433,&l_433,&l_433,&l_433,&l_433,&l_433,&l_433,&l_433};
            int32_t **l_551 = &l_547[4];
            int i;
            p_1087->g_548++;
            (*l_551) = &p_1087->g_102;
            return &p_1087->g_102;
        }
    }
    for (p_1087->g_53 = 9; (p_1087->g_53 < (-21)); p_1087->g_53--)
    { /* block id: 245 */
        VECTOR(uint8_t, 8) l_564 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0xEDL), 0xEDL), 0xEDL, 248UL, 0xEDL);
        VECTOR(uint8_t, 16) l_566 = (VECTOR(uint8_t, 16))(0x64L, (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 9UL), 9UL), 9UL, 0x64L, 9UL, (VECTOR(uint8_t, 2))(0x64L, 9UL), (VECTOR(uint8_t, 2))(0x64L, 9UL), 0x64L, 9UL, 0x64L, 9UL);
        VECTOR(uint8_t, 4) l_567 = (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0x09L), 0x09L);
        union U1 *l_575[2];
        union U1 *l_577 = &p_1087->g_578;
        int32_t l_587 = 0x0E3891B8L;
        int32_t l_589[8][9] = {{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL},{(-8L),0x5475F90AL,(-2L),0x0E7965FAL,0x4231891BL,1L,1L,0x4231891BL,0x0E7965FAL}};
        uint64_t l_609 = 0x079BF27AC9861F1EL;
        VECTOR(uint32_t, 2) l_611 = (VECTOR(uint32_t, 2))(0x17B16D7DL, 4294967295UL);
        int i, j;
        for (i = 0; i < 2; i++)
            l_575[i] = (void*)0;
        if (l_554)
        { /* block id: 246 */
            uint16_t **l_556[10][8] = {{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0},{&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0,&p_1087->g_78,&p_1087->g_78,(void*)0,(void*)0}};
            uint16_t ***l_555[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            l_557 = &p_1087->g_78;
            return &p_1087->g_42;
        }
        else
        { /* block id: 249 */
            uint8_t l_560[10][7] = {{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L},{0x16L,0x3CL,0x3CL,0x16L,0xBEL,0x02L,0x89L}};
            uint16_t *l_568 = &l_554;
            union U1 *l_573[1];
            union U1 **l_576 = &l_575[0];
            int32_t *l_585 = (void*)0;
            int32_t *l_586[8] = {&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,&p_1087->g_42,&p_1087->g_42};
            int8_t l_592 = 0x2AL;
            VECTOR(uint16_t, 8) l_600 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
            VECTOR(uint64_t, 2) l_610 = (VECTOR(uint64_t, 2))(0UL, 0x8DE0DD6F4839A828L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_573[i] = &p_1087->g_574;
            (*p_39) = (safe_sub_func_int32_t_s_s(l_560[0][1], ((safe_mod_func_uint8_t_u_u((((*p_40) >= ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_563.zwxx)), 0x5EL, ((VECTOR(uint8_t, 2))(l_564.s00)), 255UL)).odd)).xzzxywxw)).odd, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(p_1087->g_565.zyzzywzy)).odd)), ((VECTOR(uint8_t, 4))(l_566.s5174))))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(l_567.wxzy)).lo, (uint8_t)(((*l_568)--) > (((*l_432) = p_1087->g_97) ^ ((safe_rshift_func_int8_t_s_u((l_573[0] != (l_577 = ((*l_576) = l_575[0]))), 4)) , 0x412388EAA094FC90L)))))).xyxyyxyyyxyyyxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0xD1L, ((VECTOR(uint8_t, 4))(p_1087->g_579.yxxx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x9FL, 1UL)), 0x6DL, 0x81L)).odd)), 9UL)).s6, (safe_unary_minus_func_uint32_t_u(GROUP_DIVERGE(2, 1))), 1UL, 9UL)).xxzzyzzwwyxzxywx))).sc667, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_581.yyyyyxxy)))).lo)), ((VECTOR(uint8_t, 16))(l_566.sb, 0xDDL, (safe_sub_func_uint64_t_u_u(((p_40 == (p_1087->g_584 = (void*)0)) > 3UL), l_458.sa)), 247UL, 2UL, 0xC8L, p_1087->g_399, l_567.y, GROUP_DIVERGE(1, 1), l_414, 9UL, 0xD1L, ((VECTOR(uint8_t, 4))(0x5FL)))).s0d63))).wzzwxyxx)).lo)))))))).ywzxyyyywywyyxzx, ((VECTOR(uint8_t, 16))(255UL))))).s8) <= p_1087->g_574.f0), l_420.y)) , p_1087->g_102)));
            if ((*p_1087->g_41))
                continue;
            l_593--;
            (*p_1087->g_79) = ((l_433 ^= p_1087->g_578.f0) | ((p_1087->g_548 , (((safe_mul_func_uint16_t_u_u((--(*l_568)), ((VECTOR(uint16_t, 2))(l_600.s37)).even)) ^ (safe_lshift_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(0x24E13E8EL, p_1087->g_54)) < p_1087->g_579.x) ^ (safe_add_func_int8_t_s_s(((*p_40) = ((safe_mul_func_int8_t_s_s((*p_40), (l_609 = (*p_40)))) , (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(0xE87B050DCE35199CL, ((VECTOR(uint64_t, 2))(l_610.yx)), 1UL)).yzzzwxzwzzwywyyx, (uint64_t)(((VECTOR(uint32_t, 2))(l_611.yx)).odd , ((*l_432) = 0xBF471A1A6A3FE8E3L))))).s07)).lo == (safe_add_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 0UL)).yyyyyyxy)).s56, ((VECTOR(uint16_t, 4))(65535UL, 65526UL, 0UL, 0xCBECL)).lo))).odd, l_453)) | 0x136FB003DE8CD0D2L) || l_458.s7), (-1L)))))), p_1087->g_102))) == l_493.x), 11))) != l_564.s1)) && l_581.y));
        }
        if ((*p_1087->g_79))
            continue;
        for (l_491 = (-25); (l_491 != 47); l_491++)
        { /* block id: 268 */
            int32_t *l_618 = (void*)0;
            int32_t *l_619 = &p_1087->g_588;
            int32_t *l_620 = &l_433;
            int32_t *l_621 = &l_457[2][0];
            int32_t *l_622 = &l_589[3][1];
            int32_t *l_623 = (void*)0;
            int32_t *l_624 = (void*)0;
            int32_t *l_625[7][10][3] = {{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}},{{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]},{&l_412,&l_433,&l_589[3][1]}}};
            int i, j, k;
            ++l_626;
        }
    }
    return &p_1087->g_102;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_66 p_1087->g_comm_values p_1087->g_79 p_1087->g_42 p_1087->g_54 p_1087->g_41 p_1087->g_102 p_1087->g_65.f0
 * writes: p_1087->g_102 p_1087->g_392
 */
int8_t * func_43(uint16_t  p_44, int32_t * p_45, uint16_t * p_46, int32_t * p_47, struct S5 * p_1087)
{ /* block id: 16 */
    uint32_t l_89 = 4294967295UL;
    uint64_t *l_96[9];
    int32_t l_98 = 0x2BD0CEA3L;
    int16_t l_99 = 0x7EE3L;
    int32_t *l_100 = (void*)0;
    int32_t *l_101 = &p_1087->g_102;
    union U2 *l_389 = &p_1087->g_390;
    union U2 **l_391 = (void*)0;
    int8_t *l_398 = &p_1087->g_399;
    int i;
    for (i = 0; i < 9; i++)
        l_96[i] = &p_1087->g_97;
    (*l_101) &= (((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1087->global_2_offset, get_global_id(2), 10), ((p_1087->g_66.z >= (+p_1087->g_66.y)) , 1L))) | ((l_89 != (((((safe_div_func_uint64_t_u_u(p_1087->g_66.x, (p_1087->g_comm_values[p_1087->tid] & (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), l_89)) < (l_98 = ((p_46 != p_46) >= 4294967290UL))), 13))))) , (*p_1087->g_79)) | 0UL) > l_89) == l_99)) == p_1087->g_comm_values[p_1087->tid])), l_89)) <= p_1087->g_54) && p_44) , l_89) , (*p_1087->g_41));
    if ((atomic_inc(&p_1087->l_atomic_input[7]) == 3))
    { /* block id: 20 */
        VECTOR(int64_t, 8) l_103 = (VECTOR(int64_t, 8))(0x5B6C63C429AA74C4L, (VECTOR(int64_t, 4))(0x5B6C63C429AA74C4L, (VECTOR(int64_t, 2))(0x5B6C63C429AA74C4L, 0x711252BC438EE533L), 0x711252BC438EE533L), 0x711252BC438EE533L, 0x5B6C63C429AA74C4L, 0x711252BC438EE533L);
        int8_t l_104 = (-9L);
        int8_t l_105 = 6L;
        VECTOR(int16_t, 16) l_106 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int16_t, 2))((-6L), (-1L)), (VECTOR(int16_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
        VECTOR(int16_t, 16) l_107 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        VECTOR(int16_t, 4) l_108 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-9L)), (-9L));
        int64_t l_109 = 0L;
        uint16_t l_110 = 0x8330L;
        uint32_t l_111[6][9] = {{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L},{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L},{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L},{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L},{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L},{0xE863DC2CL,0xE863DC2CL,0x28A2DDD9L,4294967295UL,0x9732EC2CL,0x7B992054L,0x10542879L,1UL,0x10542879L}};
        uint8_t l_112 = 0x9FL;
        VECTOR(int16_t, 16) l_113 = (VECTOR(int16_t, 16))(0x27E5L, (VECTOR(int16_t, 4))(0x27E5L, (VECTOR(int16_t, 2))(0x27E5L, 0x355DL), 0x355DL), 0x355DL, 0x27E5L, 0x355DL, (VECTOR(int16_t, 2))(0x27E5L, 0x355DL), (VECTOR(int16_t, 2))(0x27E5L, 0x355DL), 0x27E5L, 0x355DL, 0x27E5L, 0x355DL);
        VECTOR(int16_t, 4) l_114 = (VECTOR(int16_t, 4))(0x5720L, (VECTOR(int16_t, 2))(0x5720L, 0x1F6CL), 0x1F6CL);
        VECTOR(int16_t, 16) l_115 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L), (VECTOR(int16_t, 2))((-1L), (-10L)), (VECTOR(int16_t, 2))((-1L), (-10L)), (-1L), (-10L), (-1L), (-10L));
        VECTOR(int16_t, 2) l_116 = (VECTOR(int16_t, 2))(0x42F3L, 1L);
        VECTOR(int16_t, 8) l_117 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x23BFL), 0x23BFL), 0x23BFL, 0L, 0x23BFL);
        uint64_t l_118 = 0UL;
        VECTOR(int16_t, 16) l_119 = (VECTOR(int16_t, 16))(0x0C00L, (VECTOR(int16_t, 4))(0x0C00L, (VECTOR(int16_t, 2))(0x0C00L, 1L), 1L), 1L, 0x0C00L, 1L, (VECTOR(int16_t, 2))(0x0C00L, 1L), (VECTOR(int16_t, 2))(0x0C00L, 1L), 0x0C00L, 1L, 0x0C00L, 1L);
        VECTOR(int16_t, 8) l_120 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x1956L), 0x1956L), 0x1956L, (-9L), 0x1956L);
        VECTOR(int16_t, 16) l_121 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0E48L), 0x0E48L), 0x0E48L, 1L, 0x0E48L, (VECTOR(int16_t, 2))(1L, 0x0E48L), (VECTOR(int16_t, 2))(1L, 0x0E48L), 1L, 0x0E48L, 1L, 0x0E48L);
        uint8_t l_122[3];
        VECTOR(int16_t, 16) l_123 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0E28L), 0x0E28L), 0x0E28L, 0L, 0x0E28L, (VECTOR(int16_t, 2))(0L, 0x0E28L), (VECTOR(int16_t, 2))(0L, 0x0E28L), 0L, 0x0E28L, 0L, 0x0E28L);
        VECTOR(int16_t, 2) l_124 = (VECTOR(int16_t, 2))((-1L), 1L);
        int16_t l_125 = 6L;
        int8_t l_126 = 9L;
        int64_t l_127 = 0x76335B14A6E1C48DL;
        int64_t l_128 = 9L;
        VECTOR(int32_t, 8) l_129 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 4L), 4L), 4L, (-3L), 4L);
        int64_t l_130 = 8L;
        VECTOR(uint64_t, 2) l_131 = (VECTOR(uint64_t, 2))(0x5E66551692F62A81L, 0x54CA82F664288929L);
        int16_t l_132 = 0x6C7EL;
        uint64_t l_387 = 1UL;
        uint8_t l_388 = 0xA9L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_122[i] = 0x31L;
        l_104 = (((VECTOR(int64_t, 8))(l_103.s31622241)).s7 , (-5L));
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(l_105, 3L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(l_106.s5e04)).hi, ((VECTOR(int16_t, 4))(l_107.se3ce)).hi))), 5L)).hi, ((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_108.zxyyxzzw)).s62)), ((l_110 = (l_109 , 0L)) , l_111[0][4]), l_112, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_113.s27dbbc66)).odd)).zxywwzwyxxxyyxzw, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_114.wx)).yyxyxxyxxxxyyxyy)).s366b)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(l_115.s1f99661a)), ((VECTOR(int16_t, 4))(3L, 0L, (-1L), 0x583EL)).ywyzyzwy))).s65, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_116.xxyy)).xwxywwwz)).s05)))))))).yxxxxyyxxyxxyyxy))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_117.s62743561)).s5252644757461525)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(0x702EL, ((VECTOR(int16_t, 2))((-2L), 0x3730L)), (l_115.sc &= 0x2C7DL), (l_118 , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_119.sa3d1)).odd)).lo), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x4A99L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_120.s30)).xxyxxxxx)).s54, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0L, (-1L), 3L, (-1L))))).odd, ((VECTOR(int16_t, 2))((-10L), 0x038BL))))), 1L, (-1L))), ((VECTOR(int16_t, 2))(6L, 0x12D4L)), 0x3B59L)))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x4481L, (-1L))).yyxyxyyyyxyxxxxy)).s7, 0x1D37L, 0x3A76L)).se4, ((VECTOR(int16_t, 4))(l_121.s9e7f)).hi))).lo, l_122[0], (-3L), (-1L))).xxyzxzzyzwyxwzzw))).s6704, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(l_123.s95)), ((VECTOR(int16_t, 4))(l_124.yyxx)).even))).xyyy))).yzwxxxzw, ((VECTOR(int16_t, 8))((l_126 = l_125), 1L, l_127, l_128, ((VECTOR(int16_t, 2))(0x41E9L)), 0x4419L, 1L))))).s11)), 3L)).s44, ((VECTOR(int16_t, 2))(0L))))), 9L, (-2L), 0L, ((VECTOR(int16_t, 2))(9L)), 0x4269L, ((VECTOR(int16_t, 4))(0x1D4DL)), 0x058CL, 0x7D11L)).hi, ((VECTOR(uint16_t, 8))(65532UL))))).s25, ((VECTOR(int32_t, 2))(6L))))).xyxyxyxy)).even)), l_129.s7, ((VECTOR(int32_t, 4))(5L)), l_130, 1L, l_131.y, l_132, ((VECTOR(int32_t, 2))(0x71602343L)), 0x11B318C5L)).s88)), ((VECTOR(int32_t, 8))(0x29FBB944L)), ((VECTOR(int32_t, 4))(0x7AFBAD67L)), 0L, 0L)).s6)
        { /* block id: 25 */
            int32_t l_133 = 1L;
            uint16_t l_309 = 0x14CAL;
            for (l_133 = 8; (l_133 != 13); l_133 = safe_add_func_int64_t_s_s(l_133, 7))
            { /* block id: 28 */
                int32_t l_136 = 0x7A3BE208L;
                int64_t l_215 = 1L;
                VECTOR(uint32_t, 2) l_216 = (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL);
                int i;
                for (l_136 = (-24); (l_136 > 11); l_136 = safe_add_func_uint16_t_u_u(l_136, 3))
                { /* block id: 31 */
                    uint32_t l_139 = 6UL;
                    uint8_t l_140 = 0UL;
                    uint32_t l_141 = 0xD098C665L;
                    union U4 l_142 = {1UL};
                    int64_t l_143 = 9L;
                    int32_t l_144 = (-7L);
                    uint16_t l_191 = 0x9F50L;
                    union U2 l_210[7][1][10] = {{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}},{{{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL},{18446744073709551614UL}}}};
                    union U2 *l_209 = &l_210[2][0][0];
                    union U2 l_212 = {0xCCA2613CCD52C48CL};/* VOLATILE GLOBAL l_212 */
                    union U2 *l_211 = &l_212;
                    union U2 l_214 = {18446744073709551611UL};/* VOLATILE GLOBAL l_214 */
                    union U2 *l_213 = &l_214;
                    int i, j, k;
                    l_144 &= (((l_141 = (l_140 = l_139)) , l_142) , ((VECTOR(int32_t, 8))(0x69DE83E9L, 0x1E5EACDDL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x750C62AAL, l_143, 0x7B4805B9L, 0L)).xyzxwzzzwywxwyyz)).sac1a)), (-1L), 0x7FCBD7A9L)).s1);
                    for (l_140 = 29; (l_140 >= 5); l_140 = safe_sub_func_uint8_t_u_u(l_140, 2))
                    { /* block id: 37 */
                        VECTOR(int32_t, 4) l_147 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L));
                        VECTOR(int32_t, 2) l_148 = (VECTOR(int32_t, 2))(0x2B824888L, 0x774BF00CL);
                        int64_t l_149 = 0x637CC862B96CBFF4L;
                        VECTOR(int32_t, 4) l_150 = (VECTOR(int32_t, 4))(0x08100F81L, (VECTOR(int32_t, 2))(0x08100F81L, 0L), 0L);
                        VECTOR(int32_t, 8) l_151 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x39EE8E04L), 0x39EE8E04L), 0x39EE8E04L, (-1L), 0x39EE8E04L);
                        VECTOR(int32_t, 4) l_152 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7B090339L), 0x7B090339L);
                        int32_t l_153[3][5][7] = {{{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L}},{{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L}},{{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L},{7L,0x260FA43BL,0x056DCA7DL,0x545E75F0L,(-1L),2L,0x134F9474L}}};
                        VECTOR(int32_t, 4) l_154 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x14BD295DL), 0x14BD295DL);
                        VECTOR(int32_t, 8) l_155 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5A53668AL), 0x5A53668AL), 0x5A53668AL, (-1L), 0x5A53668AL);
                        VECTOR(int32_t, 4) l_156 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L);
                        VECTOR(int16_t, 8) l_157 = (VECTOR(int16_t, 8))(0x136EL, (VECTOR(int16_t, 4))(0x136EL, (VECTOR(int16_t, 2))(0x136EL, 0x3087L), 0x3087L), 0x3087L, 0x136EL, 0x3087L);
                        int32_t l_158 = 0L;
                        int16_t l_159[5][4] = {{(-8L),1L,(-8L),(-8L)},{(-8L),1L,(-8L),(-8L)},{(-8L),1L,(-8L),(-8L)},{(-8L),1L,(-8L),(-8L)},{(-8L),1L,(-8L),(-8L)}};
                        VECTOR(int16_t, 4) l_160 = (VECTOR(int16_t, 4))(0x5058L, (VECTOR(int16_t, 2))(0x5058L, (-1L)), (-1L));
                        VECTOR(int16_t, 8) l_161 = (VECTOR(int16_t, 8))(0x3CF0L, (VECTOR(int16_t, 4))(0x3CF0L, (VECTOR(int16_t, 2))(0x3CF0L, (-1L)), (-1L)), (-1L), 0x3CF0L, (-1L));
                        VECTOR(int16_t, 16) l_162 = (VECTOR(int16_t, 16))(0x4D5EL, (VECTOR(int16_t, 4))(0x4D5EL, (VECTOR(int16_t, 2))(0x4D5EL, 0x3AC6L), 0x3AC6L), 0x3AC6L, 0x4D5EL, 0x3AC6L, (VECTOR(int16_t, 2))(0x4D5EL, 0x3AC6L), (VECTOR(int16_t, 2))(0x4D5EL, 0x3AC6L), 0x4D5EL, 0x3AC6L, 0x4D5EL, 0x3AC6L);
                        VECTOR(int16_t, 8) l_163 = (VECTOR(int16_t, 8))(0x1BF0L, (VECTOR(int16_t, 4))(0x1BF0L, (VECTOR(int16_t, 2))(0x1BF0L, 0L), 0L), 0L, 0x1BF0L, 0L);
                        uint32_t l_164 = 4294967290UL;
                        VECTOR(int16_t, 8) l_165 = (VECTOR(int16_t, 8))(0x3E9AL, (VECTOR(int16_t, 4))(0x3E9AL, (VECTOR(int16_t, 2))(0x3E9AL, 0x0F20L), 0x0F20L), 0x0F20L, 0x3E9AL, 0x0F20L);
                        VECTOR(int8_t, 4) l_166 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
                        VECTOR(int8_t, 8) l_167 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L));
                        uint32_t l_168 = 0UL;
                        VECTOR(int8_t, 4) l_169 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-3L)), (-3L));
                        uint16_t l_170 = 0x2DEFL;
                        VECTOR(int8_t, 8) l_171 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x25L), 0x25L), 0x25L, (-5L), 0x25L);
                        int64_t l_172 = 0x0D399AF9C28862E0L;
                        int32_t l_173 = (-4L);
                        int64_t l_174 = 0L;
                        int16_t l_175 = 0x736FL;
                        int16_t l_176 = 0x7572L;
                        int32_t l_177[6][10][4] = {{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}},{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}},{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}},{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}},{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}},{{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L},{1L,(-8L),1L,1L}}};
                        uint32_t l_178 = 0x08D8BCF4L;
                        int32_t l_179 = 0x6B0BCA76L;
                        uint32_t l_180 = 0x1218535FL;
                        uint8_t l_181[1];
                        int32_t l_182 = 0x49CB3442L;
                        int32_t l_183 = (-1L);
                        int64_t l_184 = 0L;
                        uint16_t l_185 = 0UL;
                        uint16_t l_186 = 0x63D9L;
                        int64_t l_187 = (-4L);
                        uint8_t l_188 = 7UL;
                        uint8_t l_189 = 3UL;
                        int64_t l_190 = (-1L);
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_181[i] = 1UL;
                        l_188 = (l_187 ^= (l_144 &= (((VECTOR(int32_t, 8))((l_129.s4 ^= ((VECTOR(int32_t, 2))(l_147.yw)).odd), 1L, 0x731C3D10L, 0x11EF432EL, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(l_148.yx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_149, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_150.yyxz)).yxxzxwzyzyxywywx)).s8e, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_151.s1043)), (l_129.s3 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_152.zy)).xxyxxyyxyyxyxyyy)).s5), l_153[1][0][2], 3L, 3L)))).lo, (int32_t)(-10L)))).even, ((VECTOR(int32_t, 4))(l_154.yzxw)).hi))), ((VECTOR(int32_t, 4))(0L, 0x6FB34F4DL, 0x4442B78BL, 0x5595372CL)), 0x29EB16ADL)), ((VECTOR(int32_t, 2))(l_155.s13)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_156.zyyxzwzz)).even, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_157.s26)), 0x1E8BL, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x0829L, (l_159[4][2] = l_158), 0x7591L, 2L)).xxyxzxww)).s2620003465344767, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x136BL, (-2L))).yxxxxxyxyxxxyyyx)), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(0x18EEL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_160.xyxx)), ((VECTOR(int16_t, 16))(l_161.s6363201435246130)).s141a))), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-4L), 0x627AL)).yxxx)).wwwzywzw)).s40, ((VECTOR(int16_t, 4))(l_162.s1511)).odd, ((VECTOR(int16_t, 16))(l_163.s6174636537354001)).s8b))), l_164, (-5L), ((VECTOR(int16_t, 4))(0x237CL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_165.s60)))).xyyy, ((VECTOR(int16_t, 2))(0x255FL, 0x1590L)).yxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))((-1L), 0L, 0x47F7L, (l_106.s9 = ((VECTOR(int16_t, 2))((-5L), (-1L))).odd), ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_166.yyxx)).y, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(l_167.s3675))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((l_168 = 0L) , 6L), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(l_169.wyzywyxy)).s3606625552621136, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(l_170, 0x71L, 0x58L, 1L))))).zyzxyyyywyxyzyyw))).s3f7c, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_171.s5062)).even)))), 0L, (-3L)))))), l_172, (-10L), 0L)).s07, ((VECTOR(int8_t, 2))(5L)), ((VECTOR(int8_t, 2))((-1L)))))).odd, 0x31L, 0L, 0x05L)), (-1L), l_173, 3L, (-1L), 1L, 3L, 0x74L)).sc , l_174) , l_175), l_176, ((VECTOR(int16_t, 2))(0x7161L)), 0x2DE5L, (-8L), (-5L), l_177[1][1][0], (-9L), l_178, (-1L), 7L)), ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))((-1L)))))).s765f))))), ((VECTOR(int16_t, 4))((-1L))))).s21, (int16_t)l_179))), 0x2E97L)), ((VECTOR(int16_t, 2))((-2L))), 0x4368L, 0x2BFCL)).s40)).yxxx)), 0L, l_180, 0x2EE9L, ((VECTOR(int16_t, 8))(0x42DAL)))).odd, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0x1048L))))).s5623163671215466))).hi, ((VECTOR(int16_t, 8))(0L))))).s0577241721031162)).scef5, ((VECTOR(int16_t, 4))(0x2AF0L))))), l_181[0], l_182, 1L, l_183, l_184, ((VECTOR(int16_t, 4))(1L)))).sf7)).xyxyyyyyyxxxyxxx)).s74)))).xxyyxyxx, ((VECTOR(uint16_t, 8))(0xDF28L))))).odd))), 0L, (-9L))))).sbf))))).yyyxxxyyxxyxyyyy)), ((VECTOR(int32_t, 16))(0L))))), ((VECTOR(int32_t, 16))(0x3BF90D25L))))).odd, (int32_t)0x0B080ABBL, (int32_t)l_185))).s4405337661110160)).s33)).xyxyyyxxyxxyxyxy)).s22, ((VECTOR(int32_t, 2))((-1L)))))), (-1L), (-1L))).s4 , l_186)));
                        l_129.s6 = l_189;
                        l_177[1][1][0] |= l_190;
                    }
                    if (((l_191 , 4294967290UL) , 0x19B3750EL))
                    { /* block id: 49 */
                        int32_t l_193 = 0L;
                        int32_t *l_192 = &l_193;
                        int32_t *l_194 = &l_193;
                        l_194 = l_192;
                    }
                    else
                    { /* block id: 51 */
                        union U2 l_196[10] = {{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL},{0x9F67F97CAD44DE8CL}};
                        union U2 *l_195 = &l_196[3];
                        union U2 *l_197 = (void*)0;
                        int8_t *l_199[1][5];
                        int8_t **l_198 = &l_199[0][1];
                        int8_t **l_200 = &l_199[0][1];
                        int32_t l_202 = (-2L);
                        int32_t *l_201[5];
                        int8_t l_203 = 0x77L;
                        int32_t l_204 = 5L;
                        int32_t l_205 = 0x34F88857L;
                        uint32_t l_206[6];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_199[i][j] = (void*)0;
                        }
                        for (i = 0; i < 5; i++)
                            l_201[i] = &l_202;
                        for (i = 0; i < 6; i++)
                            l_206[i] = 0x3068DE9FL;
                        l_197 = l_195;
                        l_200 = l_198;
                        l_201[1] = (void*)0;
                        l_206[5]--;
                    }
                    l_213 = (l_211 = l_209);
                }
                l_136 = l_215;
                if ((l_129.s4 = l_216.x))
                { /* block id: 62 */
                    union U2 l_218 = {0xF140DDB9D46EC3D0L};/* VOLATILE GLOBAL l_218 */
                    union U2 *l_217 = &l_218;
                    int32_t l_219 = (-5L);
                    l_217 = l_217;
                    for (l_219 = 0; (l_219 <= 7); l_219++)
                    { /* block id: 66 */
                        uint32_t l_222 = 0x5EE9B9BCL;
                        l_129.s4 ^= (l_136 &= 1L);
                        l_222--;
                    }
                }
                else
                { /* block id: 71 */
                    int32_t l_225 = 0x7623B8A3L;
                    for (l_225 = 0; (l_225 <= 1); l_225 = safe_add_func_int16_t_s_s(l_225, 1))
                    { /* block id: 74 */
                        int16_t l_228 = (-4L);
                        int32_t l_230[5][5][2] = {{{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)}},{{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)}},{{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)}},{{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)}},{{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)},{0x7C32685EL,(-4L)}}};
                        int32_t *l_229 = &l_230[0][2][0];
                        int32_t *l_231[6] = {&l_230[1][3][0],&l_230[1][3][0],&l_230[1][3][0],&l_230[1][3][0],&l_230[1][3][0],&l_230[1][3][0]};
                        int i, j, k;
                        l_129.s6 = l_228;
                        l_231[4] = l_229;
                    }
                    for (l_225 = 0; (l_225 <= 1); ++l_225)
                    { /* block id: 80 */
                        int8_t l_234[8] = {(-1L),(-6L),(-1L),(-1L),(-6L),(-1L),(-1L),(-6L)};
                        int32_t l_235 = 1L;
                        VECTOR(int16_t, 16) l_236 = (VECTOR(int16_t, 16))(0x49F4L, (VECTOR(int16_t, 4))(0x49F4L, (VECTOR(int16_t, 2))(0x49F4L, (-6L)), (-6L)), (-6L), 0x49F4L, (-6L), (VECTOR(int16_t, 2))(0x49F4L, (-6L)), (VECTOR(int16_t, 2))(0x49F4L, (-6L)), 0x49F4L, (-6L), 0x49F4L, (-6L));
                        uint8_t l_237 = 251UL;
                        VECTOR(int16_t, 4) l_238 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L);
                        uint8_t l_239 = 252UL;
                        int32_t l_240 = (-1L);
                        VECTOR(int16_t, 8) l_241 = (VECTOR(int16_t, 8))(0x3CCCL, (VECTOR(int16_t, 4))(0x3CCCL, (VECTOR(int16_t, 2))(0x3CCCL, 0x11AEL), 0x11AEL), 0x11AEL, 0x3CCCL, 0x11AEL);
                        VECTOR(int16_t, 8) l_242 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, (-4L)), (-4L)), (-4L), 6L, (-4L));
                        uint8_t l_243 = 0x4BL;
                        int64_t l_244 = 0L;
                        int16_t l_245 = 3L;
                        uint16_t l_246[3];
                        int16_t l_247 = (-2L);
                        uint8_t l_248 = 0x4AL;
                        int32_t l_249 = 0x1196AC04L;
                        int8_t l_250 = 1L;
                        int32_t l_251[2][7][1] = {{{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L}},{{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L},{0x74B0CF76L}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_246[i] = 0x5AEFL;
                        l_129.s0 = ((VECTOR(int32_t, 4))((l_136 = l_234[2]), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((l_235 , ((((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_236.s96)), ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(0x43L, 0x01L)).yxyyxyxy, (int8_t)l_237))).s55)).yyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(0x87L, 0UL, 1UL, 0x1BL)), 0xD9L, 0x32L, 255UL)).s5102611174136336))).s6, 0x37L, 248UL, 0x75L))))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_238.xyzyxzxx)))), 0x4FD7L, (-1L))).hi, ((VECTOR(int16_t, 16))(l_239, l_240, (-2L), 0x4E88L, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(l_241.s62)).yyxyxyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_242.s1666)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x692AL, 0x17A7L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((l_243 , (l_244 , 0x7F3BL)), ((VECTOR(int16_t, 2))(1L)), 0x45CEL, 0x05ECL, ((VECTOR(int16_t, 8))((-1L))), 0x7F8AL, 0x0716L, (-8L))).sd, l_245, 0x18A5L, 0x1F70L)))), 1L, 0x5662L, 0x5EE3L, (-1L), l_246[2], l_247, (-6L), l_248, (-1L), (-1L))).sfa19))))))), 0x5DA7L, ((VECTOR(int16_t, 2))(0x709AL)), 0x2DB1L)).odd, ((VECTOR(int16_t, 8))(0x04E0L))))).s1 , 0x3CD9F6087561C719L) , l_249)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x5CBB0ED4L)), 0x5413634BL, 0x60764ED3L, ((VECTOR(int32_t, 8))(0L)), 0x23A33DE2L)).hi)).odd))).odd, ((VECTOR(int32_t, 2))(0x3812A125L)), ((VECTOR(int32_t, 2))(3L))))), ((VECTOR(int32_t, 2))((-1L)))))), 0x5E44C6F2L)).y;
                        l_129.s3 ^= l_250;
                        l_136 &= l_251[1][6][0];
                    }
                    for (l_225 = 25; (l_225 != 11); --l_225)
                    { /* block id: 88 */
                        VECTOR(uint8_t, 2) l_254 = (VECTOR(uint8_t, 2))(0xC5L, 9UL);
                        VECTOR(int32_t, 8) l_255 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-4L)), (-4L)), (-4L), (-1L), (-4L));
                        VECTOR(int32_t, 2) l_256 = (VECTOR(int32_t, 2))(0x5F5B507FL, (-1L));
                        VECTOR(int32_t, 4) l_257 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
                        int32_t l_258 = 8L;
                        VECTOR(int32_t, 2) l_259 = (VECTOR(int32_t, 2))(0L, 0x498F07CFL);
                        VECTOR(int32_t, 16) l_260 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7435C911L), 0x7435C911L), 0x7435C911L, (-1L), 0x7435C911L, (VECTOR(int32_t, 2))((-1L), 0x7435C911L), (VECTOR(int32_t, 2))((-1L), 0x7435C911L), (-1L), 0x7435C911L, (-1L), 0x7435C911L);
                        uint64_t l_261 = 18446744073709551615UL;
                        uint16_t l_262 = 1UL;
                        uint16_t l_263 = 0x46B8L;
                        VECTOR(uint8_t, 16) l_264 = (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint8_t, 2))(6UL, 0UL), (VECTOR(uint8_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL);
                        int64_t l_265 = (-3L);
                        VECTOR(int32_t, 4) l_266 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x6A2F6E2AL), 0x6A2F6E2AL);
                        VECTOR(int32_t, 4) l_267 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-7L)), (-7L));
                        VECTOR(int32_t, 16) l_268 = (VECTOR(int32_t, 16))(0x158C2794L, (VECTOR(int32_t, 4))(0x158C2794L, (VECTOR(int32_t, 2))(0x158C2794L, (-3L)), (-3L)), (-3L), 0x158C2794L, (-3L), (VECTOR(int32_t, 2))(0x158C2794L, (-3L)), (VECTOR(int32_t, 2))(0x158C2794L, (-3L)), 0x158C2794L, (-3L), 0x158C2794L, (-3L));
                        VECTOR(int32_t, 8) l_269 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x69E6BECDL), 0x69E6BECDL), 0x69E6BECDL, 5L, 0x69E6BECDL);
                        int8_t l_270 = 0x5CL;
                        int32_t l_271 = 0x0CA1BCADL;
                        uint8_t l_272 = 0xFAL;
                        VECTOR(int32_t, 2) l_273 = (VECTOR(int32_t, 2))(8L, (-9L));
                        int8_t l_274 = 0x53L;
                        VECTOR(int32_t, 2) l_275 = (VECTOR(int32_t, 2))(4L, (-7L));
                        int32_t l_276 = 6L;
                        uint8_t l_277 = 0x79L;
                        uint8_t l_278 = 0x87L;
                        uint32_t l_279 = 0x12836B3AL;
                        int32_t l_280 = 0L;
                        int32_t l_281 = 0x10910357L;
                        int32_t l_282[8] = {1L,0x41395B51L,1L,1L,0x41395B51L,1L,1L,0x41395B51L};
                        int i;
                        l_261 = ((((VECTOR(uint8_t, 4))(l_254.xyyx)).y , (((VECTOR(int64_t, 2))(0x593E933A933DB243L, (-2L))).lo , (l_110 = ((VECTOR(uint16_t, 2))(0x1086L, 0x35C1L)).even))) , (FAKE_DIVERGE(p_1087->global_2_offset, get_global_id(2), 10) , ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_255.s5075)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_256.yy)), ((VECTOR(int32_t, 2))(l_257.zy)), (l_258 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_259.xy)).xxyxxxyx)).s3), 0x49355559L, 0x1A0D15A3L, 1L)).lo))).lo, ((VECTOR(int32_t, 8))(l_260.sf6c4fa19)).s57))).hi));
                        l_129.s0 ^= l_262;
                        l_282[0] &= ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x13CF3447L, 0x3ABFCD6EL, (l_263 &= (l_129.s7 = 0L)), 5L, 0x6EE753C9L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x21822A15L, 9L)).xxxyyyxxxxyyyyyx)).sdbd0, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_264.sd = ((VECTOR(int32_t, 2))(1L, (-1L))).hi), 0x2EB5FE0EL, ((VECTOR(int32_t, 4))(l_265, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(0x4D057464L, 0x21E4A718L)).xyyyxxyy, ((VECTOR(int32_t, 2))(0x1B950C5EL, 0x77FC4C11L)).yxxyxyxx))).s5, ((VECTOR(int32_t, 2))(l_266.ww)), 0L)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(2L, 2L)).xyyy, (int32_t)((VECTOR(int32_t, 8))(l_267.yyzzxywx)).s2))), ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_268.s7379a049)).s1170256746021274, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_269.s3670726333536552)))).s2a97)).zwxxzwxyxzzzxzyy))).s3a69))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-4L), l_270, l_271, 1L, l_272, 0x534664D1L, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_273.xy)))), ((VECTOR(int32_t, 2))(1L, 0x7C2083D5L)), l_274, ((VECTOR(int32_t, 2))(l_275.xy)), (-7L), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4ED98FD7L, (-1L))), 0x42F7F7D6L, 0x468337E1L)), ((VECTOR(int32_t, 2))(7L, (-1L))).xxxy, ((VECTOR(int32_t, 8))(l_276, 8L, 1L, 0x22C610D8L, (-1L), (-1L), 1L, 0x7E432794L)).odd))), (-5L), l_277, (-9L), 0x514B2B6DL)).s1779)).wwyxwxxy)).even, ((VECTOR(int32_t, 4))(8L))))), ((VECTOR(int32_t, 2))(1L)), 0x5D117037L, 0x1B8707CBL, 4L, 0x63FC0619L)).sc7))))), 0x0615C79EL)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x69FFF4F0L)), 1L, 0x66D9B8B5L)))), ((VECTOR(int32_t, 16))((-4L)))))).hi, (int32_t)l_278))).s6515676625703763)).s4ce5))).lo)).xyxy)), (-3L), l_279, l_280, 0x752A0C19L, l_281, 1L, 0x15290CF3L)).se1)))).xyxx, ((VECTOR(int32_t, 4))(0L))))).z;
                    }
                    for (l_225 = 0; (l_225 > (-29)); l_225--)
                    { /* block id: 99 */
                        int32_t l_286[10];
                        int32_t *l_285 = &l_286[2];
                        int32_t *l_287 = &l_286[2];
                        VECTOR(int8_t, 2) l_288 = (VECTOR(int8_t, 2))(1L, (-10L));
                        int32_t *l_289 = &l_286[8];
                        int32_t *l_290 = &l_286[2];
                        int32_t *l_291 = &l_286[0];
                        uint32_t l_292 = 0xDF232AE4L;
                        int32_t l_293 = 5L;
                        union U4 l_294 = {1UL};
                        uint16_t l_295 = 0x1359L;
                        uint32_t l_296 = 9UL;
                        VECTOR(uint64_t, 8) l_297 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x959EE6ECA718A48EL), 0x959EE6ECA718A48EL), 0x959EE6ECA718A48EL, 18446744073709551609UL, 0x959EE6ECA718A48EL);
                        uint32_t l_298 = 0xE74566C2L;
                        VECTOR(uint32_t, 4) l_299 = (VECTOR(uint32_t, 4))(0x3741E1EAL, (VECTOR(uint32_t, 2))(0x3741E1EAL, 1UL), 1UL);
                        VECTOR(uint32_t, 2) l_300 = (VECTOR(uint32_t, 2))(0x6E9846EEL, 4294967286UL);
                        VECTOR(int32_t, 16) l_301 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        int16_t l_302 = 0x15FAL;
                        uint16_t l_303 = 0x3A9FL;
                        uint32_t l_304[8][3] = {{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL},{0x152FD2FEL,4294967295UL,4294967295UL}};
                        uint32_t l_305 = 0xF2213736L;
                        uint32_t l_306 = 0x4E08D824L;
                        uint8_t l_307 = 0x8FL;
                        int8_t l_308 = 0x7CL;
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_286[i] = 1L;
                        l_287 = (l_285 = (void*)0);
                        l_291 = (l_290 = (l_288.x , l_289));
                        l_129.s5 = (((l_293 ^= l_292) , l_294) , (((l_296 = l_295) , ((((VECTOR(uint64_t, 2))(l_297.s03)).hi , 0x0E76739539541A7BL) , (((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(0x7B580818L, l_298, (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(l_299.xy)).yyxyyxyx, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(4294967292UL, 0UL)).xyyxxyxxyyyxxyxy, ((VECTOR(uint32_t, 4))(l_300.xyxx)).zxyyyzwxywzxwwxz))).hi))).even)).w , ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((((l_103.s1 = (l_215 = l_301.s0)) , l_302) , 0x3669B761L) , l_303), l_304[2][0], ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x5839F482L)), l_305, ((VECTOR(int32_t, 2))(0x6CCBE0E9L)), 0x60352624L, 0x151D1CFEL, 0x3442E5E9L)), ((VECTOR(int32_t, 16))(0x46BA4E8CL))))).s0178, ((VECTOR(int32_t, 4))(0L))))).x), (-1L), 0x4CA479C7L, (-1L), 0L, (-4L), l_306, ((VECTOR(int32_t, 2))(1L)), l_307, 0x669EFEEBL, 0x368788BCL, 0L, 1L)).odd, ((VECTOR(int32_t, 8))(0x7C2D3943L))))).s5 , 2L))) , l_308));
                        l_129.s5 ^= (-9L);
                    }
                }
            }
            l_133 = l_309;
            for (l_133 = (-25); (l_133 < (-27)); l_133--)
            { /* block id: 116 */
                int32_t l_312 = 0L;
                int8_t l_313 = 0x3AL;
                uint32_t l_314 = 9UL;
                uint8_t l_317 = 0x11L;
                VECTOR(int32_t, 16) l_318 = (VECTOR(int32_t, 16))(0x0E29903CL, (VECTOR(int32_t, 4))(0x0E29903CL, (VECTOR(int32_t, 2))(0x0E29903CL, 0x5B5EF81EL), 0x5B5EF81EL), 0x5B5EF81EL, 0x0E29903CL, 0x5B5EF81EL, (VECTOR(int32_t, 2))(0x0E29903CL, 0x5B5EF81EL), (VECTOR(int32_t, 2))(0x0E29903CL, 0x5B5EF81EL), 0x0E29903CL, 0x5B5EF81EL, 0x0E29903CL, 0x5B5EF81EL);
                uint16_t l_319 = 65533UL;
                int8_t l_320 = 0x7DL;
                uint32_t l_321 = 0x8DBC3759L;
                int64_t l_322 = 0x28DDE3FCD2866269L;
                VECTOR(int32_t, 16) l_323 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
                int16_t l_324[10][6][4] = {{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}},{{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)},{(-8L),(-1L),0L,(-1L)}}};
                VECTOR(int32_t, 8) l_325 = (VECTOR(int32_t, 8))(0x27C776CFL, (VECTOR(int32_t, 4))(0x27C776CFL, (VECTOR(int32_t, 2))(0x27C776CFL, 0x3BEE10AEL), 0x3BEE10AEL), 0x3BEE10AEL, 0x27C776CFL, 0x3BEE10AEL);
                VECTOR(int32_t, 4) l_326 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x139D9ACDL), 0x139D9ACDL);
                uint32_t l_327 = 0xE72941B8L;
                int32_t l_328 = 0x6BBF000EL;
                VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x261A78C1L), 0x261A78C1L), 0x261A78C1L, 8L, 0x261A78C1L, (VECTOR(int32_t, 2))(8L, 0x261A78C1L), (VECTOR(int32_t, 2))(8L, 0x261A78C1L), 8L, 0x261A78C1L, 8L, 0x261A78C1L);
                uint64_t l_330 = 0x1211D8B410406FBDL;
                uint8_t l_331[3][5] = {{0xAAL,0xAAL,0xAAL,0xAAL,0xAAL},{0xAAL,0xAAL,0xAAL,0xAAL,0xAAL},{0xAAL,0xAAL,0xAAL,0xAAL,0xAAL}};
                VECTOR(int32_t, 4) l_332 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                VECTOR(int32_t, 8) l_333 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x33D65060L), 0x33D65060L), 0x33D65060L, 0L, 0x33D65060L);
                uint32_t l_334 = 0x7A49A58FL;
                int i, j, k;
                l_314++;
                l_317 = ((VECTOR(int32_t, 2))(0L, 0x02A305BEL)).lo;
                l_129.s5 = ((l_103.s2 = ((l_321 = (l_320 = (l_319 &= ((VECTOR(int32_t, 16))(l_318.s7eb0d783281d47b4)).s7))) , (l_130 &= l_322))) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_323.sce6d024c)))), 0L, 0x6BDD09BCL, l_324[1][3][2], ((VECTOR(int32_t, 2))(l_325.s30)), 0x5C96C0E5L, 0x390DDF73L)).sc832, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_326.zwyzyzxxwzzxzxzx)).se6)), 0x28723A0CL, 0x59A08F3BL)))), 0x67ACB506L, 0x5400C037L, 9L, ((VECTOR(int32_t, 8))(l_327, 1L, ((VECTOR(int32_t, 4))(l_328, 0x231D85C0L, 0x6E6B571FL, (-1L))), 0x1F375FB8L, (-1L))), 0x29A36103L)).s506c, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_329.s0ef6)).xyxyywzz, ((VECTOR(int32_t, 4))(l_330, l_331[1][3], (-1L), 0x64DF6DF1L)).yzywwzxy, ((VECTOR(int32_t, 8))(l_332.zwwyyxwy))))).s34, ((VECTOR(int32_t, 8))(l_333.s34201243)).s46))).hi, (-3L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0L, 2L)), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(0x5223A280L, 0L)), ((VECTOR(int32_t, 8))((-5L), 0x668845FDL, (-1L), l_334, ((VECTOR(int32_t, 2))(0x779899B8L)), 0x5FBD1668L, (-8L))).s03))).xyyxyxyy, ((VECTOR(int32_t, 8))(0x3E43CFA8L))))).s56))), ((VECTOR(int32_t, 2))(0x6B5C68F9L))))).xyyy))).wyxyywzyxzywxyzy)).even, ((VECTOR(int32_t, 8))(9L)), ((VECTOR(int32_t, 8))(0L))))), ((VECTOR(int32_t, 8))(1L))))))), 0x2C41DA84L, 0x11D4C092L, 1L, 0x5A229D30L, 0x658D500BL)).even)).s6471424604444546)).s519d)))))).lo)), 0L, 0x6ECA2CE9L)).lo, ((VECTOR(int32_t, 2))(1L))))).yyyxxxyxxyyyxyxy, ((VECTOR(int32_t, 16))(0x47D63294L))))).see)).even);
            }
            l_133 &= 0x2F824D97L;
        }
        else
        { /* block id: 127 */
            int8_t l_335 = 0L;
            int8_t *l_385 = &l_335;
            int8_t **l_384 = &l_385;
            int8_t **l_386 = &l_385;
            if (l_335)
            { /* block id: 128 */
                int32_t l_336 = 1L;
                int32_t *l_344 = &l_336;
                int32_t *l_345 = &l_336;
                int32_t l_346 = 0x279286D6L;
                int64_t l_347 = 0x104D1C60CBB4FA76L;
                uint32_t l_348 = 0x83BFA716L;
                for (l_336 = 0; (l_336 != 0); l_336++)
                { /* block id: 131 */
                    int8_t l_339 = 0x48L;
                    uint8_t l_340 = 255UL;
                    int32_t l_342 = 0x4DD51217L;
                    int32_t *l_341 = &l_342;
                    int32_t *l_343 = &l_342;
                    l_340 = l_339;
                    l_343 = l_341;
                }
                l_345 = l_344;
                l_348--;
            }
            else
            { /* block id: 137 */
                VECTOR(int32_t, 4) l_351 = (VECTOR(int32_t, 4))(0x565544F0L, (VECTOR(int32_t, 2))(0x565544F0L, 1L), 1L);
                VECTOR(int32_t, 2) l_352 = (VECTOR(int32_t, 2))(0x33288B0BL, 2L);
                int16_t l_353 = (-2L);
                int8_t l_354 = 0x7EL;
                VECTOR(int16_t, 16) l_355 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x018DL), 0x018DL), 0x018DL, 0L, 0x018DL, (VECTOR(int16_t, 2))(0L, 0x018DL), (VECTOR(int16_t, 2))(0L, 0x018DL), 0L, 0x018DL, 0L, 0x018DL);
                VECTOR(int16_t, 16) l_356 = (VECTOR(int16_t, 16))(0x4731L, (VECTOR(int16_t, 4))(0x4731L, (VECTOR(int16_t, 2))(0x4731L, 0x7C94L), 0x7C94L), 0x7C94L, 0x4731L, 0x7C94L, (VECTOR(int16_t, 2))(0x4731L, 0x7C94L), (VECTOR(int16_t, 2))(0x4731L, 0x7C94L), 0x4731L, 0x7C94L, 0x4731L, 0x7C94L);
                VECTOR(int16_t, 8) l_357 = (VECTOR(int16_t, 8))(0x3DFAL, (VECTOR(int16_t, 4))(0x3DFAL, (VECTOR(int16_t, 2))(0x3DFAL, 0x04E2L), 0x04E2L), 0x04E2L, 0x3DFAL, 0x04E2L);
                uint64_t l_358 = 0xE190DD1E963A6868L;
                VECTOR(int16_t, 2) l_359 = (VECTOR(int16_t, 2))(0x4B2FL, (-1L));
                VECTOR(int16_t, 2) l_360 = (VECTOR(int16_t, 2))(1L, 0x6682L);
                VECTOR(int16_t, 4) l_361 = (VECTOR(int16_t, 4))(0x3233L, (VECTOR(int16_t, 2))(0x3233L, 0x2C11L), 0x2C11L);
                uint32_t l_362 = 0x88892DB6L;
                uint16_t l_363[10][8][3] = {{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}},{{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL},{0x9760L,0xE693L,0x4B1FL}}};
                VECTOR(int32_t, 16) l_364 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x354BD615L), 0x354BD615L), 0x354BD615L, 1L, 0x354BD615L, (VECTOR(int32_t, 2))(1L, 0x354BD615L), (VECTOR(int32_t, 2))(1L, 0x354BD615L), 1L, 0x354BD615L, 1L, 0x354BD615L);
                int32_t l_365 = 0x29FEDD1DL;
                VECTOR(int32_t, 8) l_366 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x161DEDF9L), 0x161DEDF9L), 0x161DEDF9L, (-1L), 0x161DEDF9L);
                uint16_t l_367 = 0x0209L;
                int i, j, k;
                l_364.s2 = ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_351.zyyyzzxz)).s04)).yyxyxxxx, ((VECTOR(int32_t, 8))(0x23E07861L, (l_353 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_352.xyyxyxxyyyxxyxyx)))).s7), (l_354 , (((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 2))(0x5BL, 0x23L)).xxxxxyxyyxxxyyxy))).s3 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_355.sc631)).even)), 0x2732L, 5L)), ((VECTOR(int16_t, 2))(l_356.s43)), (-1L), 1L)).s37, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_357.s73)), l_358, 0x1C98L, (-10L), 0x78C4L, 1L, 0x2BDFL, (l_120.s0 = (l_121.s2 = ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_359.yxxyxyxxxxxyyxxx)).odd)).s1716057772304044, ((VECTOR(int16_t, 16))(l_360.yyxxyxyyyxxyxxyy))))).s7e70, ((VECTOR(int16_t, 16))(l_361.xwzxxwwzwyzyxyyx)).s5f57))).zxxzxyzz, (int16_t)7L, (int16_t)l_362))).s0)), (GROUP_DIVERGE(0, 1) , l_363[6][1][0]), (((((VECTOR(int32_t, 4))(l_364.s5307)).y , l_365) , l_366.s5) , l_367), ((VECTOR(int16_t, 2))(0x0FC3L)), 0L, 1L, 0x398DL)).s45, ((VECTOR(int16_t, 2))(0x22AFL))))).xyxxxxyx)).s55, ((VECTOR(uint16_t, 2))(0x71EFL))))).yxxyxyxyyyxyyxxx)).sa, ((VECTOR(int32_t, 2))(0L)), (-7L))).z)), 0x781EF61DL, 0x597F0CCFL, ((VECTOR(int32_t, 2))((-1L))), 4L))))).s4621356376520057)).s0 , 1UL) , 0x254722D6L);
                for (l_360.y = 0; (l_360.y > 4); ++l_360.y)
                { /* block id: 144 */
                    uint16_t l_370[5][6][4] = {{{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL}},{{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL}},{{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL}},{{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL}},{{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL},{65534UL,65534UL,1UL,0UL}}};
                    uint32_t l_371[1][1][7] = {{{0x9A928C25L,7UL,0x9A928C25L,0x9A928C25L,7UL,0x9A928C25L,0x9A928C25L}}};
                    int i, j, k;
                    if ((l_371[0][0][5] = l_370[0][2][2]))
                    { /* block id: 146 */
                        union U1 l_373 = {0xBE3853B71CA113D6L};/* VOLATILE GLOBAL l_373 */
                        union U1 *l_372 = &l_373;
                        union U1 *l_374 = (void*)0;
                        uint8_t l_375 = 254UL;
                        l_364.s0 |= 0L;
                        l_366.s2 = 0x4AA5A9EBL;
                        l_374 = l_372;
                        ++l_375;
                    }
                    else
                    { /* block id: 151 */
                        VECTOR(int32_t, 2) l_378 = (VECTOR(int32_t, 2))(0x03FEE8AAL, 0x1E1F3618L);
                        VECTOR(int32_t, 16) l_379 = (VECTOR(int32_t, 16))(0x7F18A256L, (VECTOR(int32_t, 4))(0x7F18A256L, (VECTOR(int32_t, 2))(0x7F18A256L, (-3L)), (-3L)), (-3L), 0x7F18A256L, (-3L), (VECTOR(int32_t, 2))(0x7F18A256L, (-3L)), (VECTOR(int32_t, 2))(0x7F18A256L, (-3L)), 0x7F18A256L, (-3L), 0x7F18A256L, (-3L));
                        int i;
                        l_364.s6 = (l_129.s5 = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, 5L, 0x6A805355L, 0x3D58B3E9L)))).wwxwzxzy)).s72, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_378.yxxyxxyyxxyyxyyx)).hi)).s54, ((VECTOR(int32_t, 16))(l_379.s8153b8fed2d8a2c2)).s04))).odd);
                    }
                }
                for (l_360.y = (-10); (l_360.y <= 5); l_360.y++)
                { /* block id: 158 */
                    VECTOR(int8_t, 8) l_382 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x5CL), 0x5CL), 0x5CL, (-1L), 0x5CL);
                    int32_t l_383[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_383[i] = 4L;
                    l_129.s7 = (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_382.s16236063)))).s2 , l_383[0]);
                }
            }
            l_386 = l_384;
        }
        l_388 |= l_387;
        unsigned int result = 0;
        result += l_103.s7;
        result += l_103.s6;
        result += l_103.s5;
        result += l_103.s4;
        result += l_103.s3;
        result += l_103.s2;
        result += l_103.s1;
        result += l_103.s0;
        result += l_104;
        result += l_105;
        result += l_106.sf;
        result += l_106.se;
        result += l_106.sd;
        result += l_106.sc;
        result += l_106.sb;
        result += l_106.sa;
        result += l_106.s9;
        result += l_106.s8;
        result += l_106.s7;
        result += l_106.s6;
        result += l_106.s5;
        result += l_106.s4;
        result += l_106.s3;
        result += l_106.s2;
        result += l_106.s1;
        result += l_106.s0;
        result += l_107.sf;
        result += l_107.se;
        result += l_107.sd;
        result += l_107.sc;
        result += l_107.sb;
        result += l_107.sa;
        result += l_107.s9;
        result += l_107.s8;
        result += l_107.s7;
        result += l_107.s6;
        result += l_107.s5;
        result += l_107.s4;
        result += l_107.s3;
        result += l_107.s2;
        result += l_107.s1;
        result += l_107.s0;
        result += l_108.w;
        result += l_108.z;
        result += l_108.y;
        result += l_108.x;
        result += l_109;
        result += l_110;
        int l_111_i0, l_111_i1;
        for (l_111_i0 = 0; l_111_i0 < 6; l_111_i0++) {
            for (l_111_i1 = 0; l_111_i1 < 9; l_111_i1++) {
                result += l_111[l_111_i0][l_111_i1];
            }
        }
        result += l_112;
        result += l_113.sf;
        result += l_113.se;
        result += l_113.sd;
        result += l_113.sc;
        result += l_113.sb;
        result += l_113.sa;
        result += l_113.s9;
        result += l_113.s8;
        result += l_113.s7;
        result += l_113.s6;
        result += l_113.s5;
        result += l_113.s4;
        result += l_113.s3;
        result += l_113.s2;
        result += l_113.s1;
        result += l_113.s0;
        result += l_114.w;
        result += l_114.z;
        result += l_114.y;
        result += l_114.x;
        result += l_115.sf;
        result += l_115.se;
        result += l_115.sd;
        result += l_115.sc;
        result += l_115.sb;
        result += l_115.sa;
        result += l_115.s9;
        result += l_115.s8;
        result += l_115.s7;
        result += l_115.s6;
        result += l_115.s5;
        result += l_115.s4;
        result += l_115.s3;
        result += l_115.s2;
        result += l_115.s1;
        result += l_115.s0;
        result += l_116.y;
        result += l_116.x;
        result += l_117.s7;
        result += l_117.s6;
        result += l_117.s5;
        result += l_117.s4;
        result += l_117.s3;
        result += l_117.s2;
        result += l_117.s1;
        result += l_117.s0;
        result += l_118;
        result += l_119.sf;
        result += l_119.se;
        result += l_119.sd;
        result += l_119.sc;
        result += l_119.sb;
        result += l_119.sa;
        result += l_119.s9;
        result += l_119.s8;
        result += l_119.s7;
        result += l_119.s6;
        result += l_119.s5;
        result += l_119.s4;
        result += l_119.s3;
        result += l_119.s2;
        result += l_119.s1;
        result += l_119.s0;
        result += l_120.s7;
        result += l_120.s6;
        result += l_120.s5;
        result += l_120.s4;
        result += l_120.s3;
        result += l_120.s2;
        result += l_120.s1;
        result += l_120.s0;
        result += l_121.sf;
        result += l_121.se;
        result += l_121.sd;
        result += l_121.sc;
        result += l_121.sb;
        result += l_121.sa;
        result += l_121.s9;
        result += l_121.s8;
        result += l_121.s7;
        result += l_121.s6;
        result += l_121.s5;
        result += l_121.s4;
        result += l_121.s3;
        result += l_121.s2;
        result += l_121.s1;
        result += l_121.s0;
        int l_122_i0;
        for (l_122_i0 = 0; l_122_i0 < 3; l_122_i0++) {
            result += l_122[l_122_i0];
        }
        result += l_123.sf;
        result += l_123.se;
        result += l_123.sd;
        result += l_123.sc;
        result += l_123.sb;
        result += l_123.sa;
        result += l_123.s9;
        result += l_123.s8;
        result += l_123.s7;
        result += l_123.s6;
        result += l_123.s5;
        result += l_123.s4;
        result += l_123.s3;
        result += l_123.s2;
        result += l_123.s1;
        result += l_123.s0;
        result += l_124.y;
        result += l_124.x;
        result += l_125;
        result += l_126;
        result += l_127;
        result += l_128;
        result += l_129.s7;
        result += l_129.s6;
        result += l_129.s5;
        result += l_129.s4;
        result += l_129.s3;
        result += l_129.s2;
        result += l_129.s1;
        result += l_129.s0;
        result += l_130;
        result += l_131.y;
        result += l_131.x;
        result += l_132;
        result += l_387;
        result += l_388;
        atomic_add(&p_1087->l_special_values[7], result);
    }
    else
    { /* block id: 165 */
        (1 + 1);
    }
    p_1087->g_392 = ((p_1087->g_66.y | p_1087->g_65.f0) , l_389);
    for (l_99 = 0; (l_99 <= 0); l_99 = safe_add_func_uint64_t_u_u(l_99, 5))
    { /* block id: 171 */
        if ((atomic_inc(&p_1087->g_atomic_input[19 * get_linear_group_id() + 14]) == 4))
        { /* block id: 173 */
            int32_t l_397[9][10] = {{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L},{0x5E9E254CL,(-3L),0L,0x50252880L,(-1L),0x552DF604L,0x1CDB3798L,0x4B3E79E4L,(-3L),0x4259D565L}};
            int32_t *l_396 = &l_397[8][6];
            int i, j;
            l_396 = (void*)0;
            unsigned int result = 0;
            int l_397_i0, l_397_i1;
            for (l_397_i0 = 0; l_397_i0 < 9; l_397_i0++) {
                for (l_397_i1 = 0; l_397_i1 < 10; l_397_i1++) {
                    result += l_397[l_397_i0][l_397_i1];
                }
            }
            atomic_add(&p_1087->g_special_values[19 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 175 */
            (1 + 1);
        }
    }
    return l_398;
}


/* ------------------------------------------ */
/* 
 * reads : p_1087->g_78
 * writes:
 */
uint16_t * func_49(int64_t  p_50, int32_t * p_51, struct S5 * p_1087)
{ /* block id: 13 */
    uint8_t l_82 = 255UL;
    --l_82;
    return p_1087->g_78;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1087->g_79
 */
uint32_t  func_60(int32_t  p_61, union U4  p_62, int64_t  p_63, uint16_t * p_64, struct S5 * p_1087)
{ /* block id: 9 */
    p_1087->g_79 = &p_1087->g_42;
    return p_62.f0;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[23];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 23; i++)
            l_comm_values[i] = 1;
    struct S5 c_1088;
    struct S5* p_1087 = &c_1088;
    struct S5 c_1089 = {
        8L, // p_1087->g_9
        &p_1087->g_9, // p_1087->g_8
        5UL, // p_1087->g_36
        7L, // p_1087->g_42
        &p_1087->g_42, // p_1087->g_41
        0x0B14L, // p_1087->g_53
        0xA47399D0L, // p_1087->g_54
        {4294967286UL}, // p_1087->g_65
        (VECTOR(uint64_t, 4))(0x69674B172ABF7713L, (VECTOR(uint64_t, 2))(0x69674B172ABF7713L, 8UL), 8UL), // p_1087->g_66
        (void*)0, // p_1087->g_78
        (void*)0, // p_1087->g_79
        0x30DA5F02B52C7FF4L, // p_1087->g_97
        0L, // p_1087->g_102
        {1UL}, // p_1087->g_390
        {18446744073709551615UL}, // p_1087->g_393
        &p_1087->g_393, // p_1087->g_392
        0x74L, // p_1087->g_399
        (-10L), // p_1087->g_425
        2UL, // p_1087->g_426
        0x7D7F1105FF6A7CA8L, // p_1087->g_429
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L), 0L, 8L, 0L, (VECTOR(int32_t, 2))(8L, 0L), (VECTOR(int32_t, 2))(8L, 0L), 8L, 0L, 8L, 0L), // p_1087->g_443
        {0x4D2A164DE1DA6DF8L}, // p_1087->g_450
        (void*)0, // p_1087->g_459
        (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, 0x49L), 0x49L), // p_1087->g_537
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-9L)), (-9L)), // p_1087->g_538
        {0x30D862036B83B547L}, // p_1087->g_544
        1UL, // p_1087->g_548
        (VECTOR(uint8_t, 4))(0x97L, (VECTOR(uint8_t, 2))(0x97L, 0UL), 0UL), // p_1087->g_565
        {0UL}, // p_1087->g_574
        {18446744073709551615UL}, // p_1087->g_578
        (VECTOR(uint8_t, 2))(9UL, 1UL), // p_1087->g_579
        &p_1087->g_578.f4, // p_1087->g_584
        0x6897A3F5L, // p_1087->g_588
        (VECTOR(uint16_t, 16))(0xCCC6L, (VECTOR(uint16_t, 4))(0xCCC6L, (VECTOR(uint16_t, 2))(0xCCC6L, 65533UL), 65533UL), 65533UL, 0xCCC6L, 65533UL, (VECTOR(uint16_t, 2))(0xCCC6L, 65533UL), (VECTOR(uint16_t, 2))(0xCCC6L, 65533UL), 0xCCC6L, 65533UL, 0xCCC6L, 65533UL), // p_1087->g_639
        (VECTOR(int8_t, 8))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 9L), 9L), 9L, 0x67L, 9L), // p_1087->g_665
        {0UL}, // p_1087->g_670
        {{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}},{{0x21AE2946C63BC0BFL},{0x71808C47986C8E0CL},{0x71808C47986C8E0CL},{0x21AE2946C63BC0BFL},{5UL},{0UL},{18446744073709551615UL},{0xF329313236D8C90AL}}}, // p_1087->g_672
        {0xF4D73DF70B666268L}, // p_1087->g_676
        {{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}},{{0x55E725C5BC90E9CBL},{6UL},{18446744073709551615UL},{6UL},{0x55E725C5BC90E9CBL},{0x55E725C5BC90E9CBL}}}, // p_1087->g_687
        {{&p_1087->g_687[0][2],&p_1087->g_687[0][2],&p_1087->g_687[0][2],&p_1087->g_687[0][2]}}, // p_1087->g_686
        (-1L), // p_1087->g_689
        4294967291UL, // p_1087->g_694
        {&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78,&p_1087->g_78}, // p_1087->g_719
        &p_1087->g_719[2], // p_1087->g_718
        0L, // p_1087->g_737
        18446744073709551615UL, // p_1087->g_744
        &p_1087->g_744, // p_1087->g_743
        &p_1087->g_743, // p_1087->g_742
        {{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}},{{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}},{{4294967295UL}}}}, // p_1087->g_746
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), // p_1087->g_764
        (VECTOR(int64_t, 2))(0x3E9C707C3D5CFE65L, 0x379E75D73D403135L), // p_1087->g_766
        (VECTOR(int64_t, 4))(0x5F8C3757AC33DF96L, (VECTOR(int64_t, 2))(0x5F8C3757AC33DF96L, 1L), 1L), // p_1087->g_767
        (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x3A5473F3F5201E7EL), 0x3A5473F3F5201E7EL), 0x3A5473F3F5201E7EL, 7L, 0x3A5473F3F5201E7EL, (VECTOR(int64_t, 2))(7L, 0x3A5473F3F5201E7EL), (VECTOR(int64_t, 2))(7L, 0x3A5473F3F5201E7EL), 7L, 0x3A5473F3F5201E7EL, 7L, 0x3A5473F3F5201E7EL), // p_1087->g_768
        0x59906BCEFDEBEF41L, // p_1087->g_770
        (void*)0, // p_1087->g_783
        &p_1087->g_97, // p_1087->g_817
        &p_1087->g_817, // p_1087->g_816
        {0x8A9D3F85E504C16DL}, // p_1087->g_834
        &p_1087->g_41, // p_1087->g_843
        {{4294967294UL,0x47D7D0D8L,0x4C04L},{4294967294UL,0x47D7D0D8L,0x4C04L},{4294967294UL,0x47D7D0D8L,0x4C04L}}, // p_1087->g_848
        {3UL,4294967288UL,0L}, // p_1087->g_853
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-9L)), (-9L)), (-9L), 1L, (-9L)), // p_1087->g_861
        (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-7L)), (-7L)), (-7L), 9L, (-7L)), // p_1087->g_877
        0UL, // p_1087->g_888
        (VECTOR(uint8_t, 16))(0xF9L, (VECTOR(uint8_t, 4))(0xF9L, (VECTOR(uint8_t, 2))(0xF9L, 1UL), 1UL), 1UL, 0xF9L, 1UL, (VECTOR(uint8_t, 2))(0xF9L, 1UL), (VECTOR(uint8_t, 2))(0xF9L, 1UL), 0xF9L, 1UL, 0xF9L, 1UL), // p_1087->g_900
        (VECTOR(int16_t, 8))(0x41F9L, (VECTOR(int16_t, 4))(0x41F9L, (VECTOR(int16_t, 2))(0x41F9L, 0L), 0L), 0L, 0x41F9L, 0L), // p_1087->g_910
        {{4294967293UL,0xF6E599BAL,0x70EDL}}, // p_1087->g_911
        (VECTOR(int16_t, 2))(0x0F21L, 0x7E3EL), // p_1087->g_915
        (VECTOR(uint8_t, 2))(4UL, 0xD8L), // p_1087->g_919
        {0xEC7E34AECB0390F8L}, // p_1087->g_924
        (void*)0, // p_1087->g_930
        {&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0,&p_1087->g_911.f0}, // p_1087->g_931
        {4294967291UL,0x20094796L,0L}, // p_1087->g_933
        {{4294967292UL,0UL,0x08D3L}}, // p_1087->g_940
        {0x8504BEB7L,0x8A95B6C7L,-1L}, // p_1087->g_943
        &p_1087->g_943, // p_1087->g_942
        (VECTOR(uint32_t, 4))(0xCC400F33L, (VECTOR(uint32_t, 2))(0xCC400F33L, 4UL), 4UL), // p_1087->g_948
        {0x33C494FE50A11FEEL}, // p_1087->g_1021
        0x2163802E44168F90L, // p_1087->g_1037
        (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL, (VECTOR(uint8_t, 2))(4UL, 1UL), (VECTOR(uint8_t, 2))(4UL, 1UL), 4UL, 1UL, 4UL, 1UL), // p_1087->g_1053
        (VECTOR(uint8_t, 2))(0x01L, 0x56L), // p_1087->g_1054
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 6UL), 6UL), 6UL, 9UL, 6UL, (VECTOR(uint8_t, 2))(9UL, 6UL), (VECTOR(uint8_t, 2))(9UL, 6UL), 9UL, 6UL, 9UL, 6UL), // p_1087->g_1055
        (void*)0, // p_1087->g_1062
        {0x443A48AEL,0UL,1L}, // p_1087->g_1077
        1L, // p_1087->g_1084
        &p_1087->g_1084, // p_1087->g_1083
        &p_1087->g_1083, // p_1087->g_1082
        &p_1087->g_1082, // p_1087->g_1085
        {{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}}}, // p_1087->g_1086
        0, // p_1087->v_collective
        sequence_input[get_global_id(0)], // p_1087->global_0_offset
        sequence_input[get_global_id(1)], // p_1087->global_1_offset
        sequence_input[get_global_id(2)], // p_1087->global_2_offset
        sequence_input[get_local_id(0)], // p_1087->local_0_offset
        sequence_input[get_local_id(1)], // p_1087->local_1_offset
        sequence_input[get_local_id(2)], // p_1087->local_2_offset
        sequence_input[get_group_id(0)], // p_1087->group_0_offset
        sequence_input[get_group_id(1)], // p_1087->group_1_offset
        sequence_input[get_group_id(2)], // p_1087->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 23)), permutations[0][get_linear_local_id()])), // p_1087->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1088 = c_1089;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1087);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1087->g_9, "p_1087->g_9", print_hash_value);
    transparent_crc(p_1087->g_36, "p_1087->g_36", print_hash_value);
    transparent_crc(p_1087->g_42, "p_1087->g_42", print_hash_value);
    transparent_crc(p_1087->g_53, "p_1087->g_53", print_hash_value);
    transparent_crc(p_1087->g_54, "p_1087->g_54", print_hash_value);
    transparent_crc(p_1087->g_65.f0, "p_1087->g_65.f0", print_hash_value);
    transparent_crc(p_1087->g_66.x, "p_1087->g_66.x", print_hash_value);
    transparent_crc(p_1087->g_66.y, "p_1087->g_66.y", print_hash_value);
    transparent_crc(p_1087->g_66.z, "p_1087->g_66.z", print_hash_value);
    transparent_crc(p_1087->g_66.w, "p_1087->g_66.w", print_hash_value);
    transparent_crc(p_1087->g_97, "p_1087->g_97", print_hash_value);
    transparent_crc(p_1087->g_102, "p_1087->g_102", print_hash_value);
    transparent_crc(p_1087->g_393.f0, "p_1087->g_393.f0", print_hash_value);
    transparent_crc(p_1087->g_399, "p_1087->g_399", print_hash_value);
    transparent_crc(p_1087->g_425, "p_1087->g_425", print_hash_value);
    transparent_crc(p_1087->g_426, "p_1087->g_426", print_hash_value);
    transparent_crc(p_1087->g_429, "p_1087->g_429", print_hash_value);
    transparent_crc(p_1087->g_443.s0, "p_1087->g_443.s0", print_hash_value);
    transparent_crc(p_1087->g_443.s1, "p_1087->g_443.s1", print_hash_value);
    transparent_crc(p_1087->g_443.s2, "p_1087->g_443.s2", print_hash_value);
    transparent_crc(p_1087->g_443.s3, "p_1087->g_443.s3", print_hash_value);
    transparent_crc(p_1087->g_443.s4, "p_1087->g_443.s4", print_hash_value);
    transparent_crc(p_1087->g_443.s5, "p_1087->g_443.s5", print_hash_value);
    transparent_crc(p_1087->g_443.s6, "p_1087->g_443.s6", print_hash_value);
    transparent_crc(p_1087->g_443.s7, "p_1087->g_443.s7", print_hash_value);
    transparent_crc(p_1087->g_443.s8, "p_1087->g_443.s8", print_hash_value);
    transparent_crc(p_1087->g_443.s9, "p_1087->g_443.s9", print_hash_value);
    transparent_crc(p_1087->g_443.sa, "p_1087->g_443.sa", print_hash_value);
    transparent_crc(p_1087->g_443.sb, "p_1087->g_443.sb", print_hash_value);
    transparent_crc(p_1087->g_443.sc, "p_1087->g_443.sc", print_hash_value);
    transparent_crc(p_1087->g_443.sd, "p_1087->g_443.sd", print_hash_value);
    transparent_crc(p_1087->g_443.se, "p_1087->g_443.se", print_hash_value);
    transparent_crc(p_1087->g_443.sf, "p_1087->g_443.sf", print_hash_value);
    transparent_crc(p_1087->g_450.f0, "p_1087->g_450.f0", print_hash_value);
    transparent_crc(p_1087->g_537.x, "p_1087->g_537.x", print_hash_value);
    transparent_crc(p_1087->g_537.y, "p_1087->g_537.y", print_hash_value);
    transparent_crc(p_1087->g_537.z, "p_1087->g_537.z", print_hash_value);
    transparent_crc(p_1087->g_537.w, "p_1087->g_537.w", print_hash_value);
    transparent_crc(p_1087->g_538.x, "p_1087->g_538.x", print_hash_value);
    transparent_crc(p_1087->g_538.y, "p_1087->g_538.y", print_hash_value);
    transparent_crc(p_1087->g_538.z, "p_1087->g_538.z", print_hash_value);
    transparent_crc(p_1087->g_538.w, "p_1087->g_538.w", print_hash_value);
    transparent_crc(p_1087->g_544.f0, "p_1087->g_544.f0", print_hash_value);
    transparent_crc(p_1087->g_548, "p_1087->g_548", print_hash_value);
    transparent_crc(p_1087->g_565.x, "p_1087->g_565.x", print_hash_value);
    transparent_crc(p_1087->g_565.y, "p_1087->g_565.y", print_hash_value);
    transparent_crc(p_1087->g_565.z, "p_1087->g_565.z", print_hash_value);
    transparent_crc(p_1087->g_565.w, "p_1087->g_565.w", print_hash_value);
    transparent_crc(p_1087->g_574.f0, "p_1087->g_574.f0", print_hash_value);
    transparent_crc(p_1087->g_579.x, "p_1087->g_579.x", print_hash_value);
    transparent_crc(p_1087->g_579.y, "p_1087->g_579.y", print_hash_value);
    transparent_crc(p_1087->g_588, "p_1087->g_588", print_hash_value);
    transparent_crc(p_1087->g_639.s0, "p_1087->g_639.s0", print_hash_value);
    transparent_crc(p_1087->g_639.s1, "p_1087->g_639.s1", print_hash_value);
    transparent_crc(p_1087->g_639.s2, "p_1087->g_639.s2", print_hash_value);
    transparent_crc(p_1087->g_639.s3, "p_1087->g_639.s3", print_hash_value);
    transparent_crc(p_1087->g_639.s4, "p_1087->g_639.s4", print_hash_value);
    transparent_crc(p_1087->g_639.s5, "p_1087->g_639.s5", print_hash_value);
    transparent_crc(p_1087->g_639.s6, "p_1087->g_639.s6", print_hash_value);
    transparent_crc(p_1087->g_639.s7, "p_1087->g_639.s7", print_hash_value);
    transparent_crc(p_1087->g_639.s8, "p_1087->g_639.s8", print_hash_value);
    transparent_crc(p_1087->g_639.s9, "p_1087->g_639.s9", print_hash_value);
    transparent_crc(p_1087->g_639.sa, "p_1087->g_639.sa", print_hash_value);
    transparent_crc(p_1087->g_639.sb, "p_1087->g_639.sb", print_hash_value);
    transparent_crc(p_1087->g_639.sc, "p_1087->g_639.sc", print_hash_value);
    transparent_crc(p_1087->g_639.sd, "p_1087->g_639.sd", print_hash_value);
    transparent_crc(p_1087->g_639.se, "p_1087->g_639.se", print_hash_value);
    transparent_crc(p_1087->g_639.sf, "p_1087->g_639.sf", print_hash_value);
    transparent_crc(p_1087->g_665.s0, "p_1087->g_665.s0", print_hash_value);
    transparent_crc(p_1087->g_665.s1, "p_1087->g_665.s1", print_hash_value);
    transparent_crc(p_1087->g_665.s2, "p_1087->g_665.s2", print_hash_value);
    transparent_crc(p_1087->g_665.s3, "p_1087->g_665.s3", print_hash_value);
    transparent_crc(p_1087->g_665.s4, "p_1087->g_665.s4", print_hash_value);
    transparent_crc(p_1087->g_665.s5, "p_1087->g_665.s5", print_hash_value);
    transparent_crc(p_1087->g_665.s6, "p_1087->g_665.s6", print_hash_value);
    transparent_crc(p_1087->g_665.s7, "p_1087->g_665.s7", print_hash_value);
    transparent_crc(p_1087->g_670.f0, "p_1087->g_670.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1087->g_672[i][j].f0, "p_1087->g_672[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1087->g_676.f0, "p_1087->g_676.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1087->g_687[i][j].f0, "p_1087->g_687[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1087->g_689, "p_1087->g_689", print_hash_value);
    transparent_crc(p_1087->g_694, "p_1087->g_694", print_hash_value);
    transparent_crc(p_1087->g_737, "p_1087->g_737", print_hash_value);
    transparent_crc(p_1087->g_744, "p_1087->g_744", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1087->g_746[i][j][k].f0, "p_1087->g_746[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1087->g_764.x, "p_1087->g_764.x", print_hash_value);
    transparent_crc(p_1087->g_764.y, "p_1087->g_764.y", print_hash_value);
    transparent_crc(p_1087->g_764.z, "p_1087->g_764.z", print_hash_value);
    transparent_crc(p_1087->g_764.w, "p_1087->g_764.w", print_hash_value);
    transparent_crc(p_1087->g_766.x, "p_1087->g_766.x", print_hash_value);
    transparent_crc(p_1087->g_766.y, "p_1087->g_766.y", print_hash_value);
    transparent_crc(p_1087->g_767.x, "p_1087->g_767.x", print_hash_value);
    transparent_crc(p_1087->g_767.y, "p_1087->g_767.y", print_hash_value);
    transparent_crc(p_1087->g_767.z, "p_1087->g_767.z", print_hash_value);
    transparent_crc(p_1087->g_767.w, "p_1087->g_767.w", print_hash_value);
    transparent_crc(p_1087->g_768.s0, "p_1087->g_768.s0", print_hash_value);
    transparent_crc(p_1087->g_768.s1, "p_1087->g_768.s1", print_hash_value);
    transparent_crc(p_1087->g_768.s2, "p_1087->g_768.s2", print_hash_value);
    transparent_crc(p_1087->g_768.s3, "p_1087->g_768.s3", print_hash_value);
    transparent_crc(p_1087->g_768.s4, "p_1087->g_768.s4", print_hash_value);
    transparent_crc(p_1087->g_768.s5, "p_1087->g_768.s5", print_hash_value);
    transparent_crc(p_1087->g_768.s6, "p_1087->g_768.s6", print_hash_value);
    transparent_crc(p_1087->g_768.s7, "p_1087->g_768.s7", print_hash_value);
    transparent_crc(p_1087->g_768.s8, "p_1087->g_768.s8", print_hash_value);
    transparent_crc(p_1087->g_768.s9, "p_1087->g_768.s9", print_hash_value);
    transparent_crc(p_1087->g_768.sa, "p_1087->g_768.sa", print_hash_value);
    transparent_crc(p_1087->g_768.sb, "p_1087->g_768.sb", print_hash_value);
    transparent_crc(p_1087->g_768.sc, "p_1087->g_768.sc", print_hash_value);
    transparent_crc(p_1087->g_768.sd, "p_1087->g_768.sd", print_hash_value);
    transparent_crc(p_1087->g_768.se, "p_1087->g_768.se", print_hash_value);
    transparent_crc(p_1087->g_768.sf, "p_1087->g_768.sf", print_hash_value);
    transparent_crc(p_1087->g_770, "p_1087->g_770", print_hash_value);
    transparent_crc(p_1087->g_834.f0, "p_1087->g_834.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1087->g_848[i].f0, "p_1087->g_848[i].f0", print_hash_value);
        transparent_crc(p_1087->g_848[i].f1, "p_1087->g_848[i].f1", print_hash_value);
        transparent_crc(p_1087->g_848[i].f2, "p_1087->g_848[i].f2", print_hash_value);

    }
    transparent_crc(p_1087->g_853.f0, "p_1087->g_853.f0", print_hash_value);
    transparent_crc(p_1087->g_853.f1, "p_1087->g_853.f1", print_hash_value);
    transparent_crc(p_1087->g_853.f2, "p_1087->g_853.f2", print_hash_value);
    transparent_crc(p_1087->g_861.s0, "p_1087->g_861.s0", print_hash_value);
    transparent_crc(p_1087->g_861.s1, "p_1087->g_861.s1", print_hash_value);
    transparent_crc(p_1087->g_861.s2, "p_1087->g_861.s2", print_hash_value);
    transparent_crc(p_1087->g_861.s3, "p_1087->g_861.s3", print_hash_value);
    transparent_crc(p_1087->g_861.s4, "p_1087->g_861.s4", print_hash_value);
    transparent_crc(p_1087->g_861.s5, "p_1087->g_861.s5", print_hash_value);
    transparent_crc(p_1087->g_861.s6, "p_1087->g_861.s6", print_hash_value);
    transparent_crc(p_1087->g_861.s7, "p_1087->g_861.s7", print_hash_value);
    transparent_crc(p_1087->g_877.s0, "p_1087->g_877.s0", print_hash_value);
    transparent_crc(p_1087->g_877.s1, "p_1087->g_877.s1", print_hash_value);
    transparent_crc(p_1087->g_877.s2, "p_1087->g_877.s2", print_hash_value);
    transparent_crc(p_1087->g_877.s3, "p_1087->g_877.s3", print_hash_value);
    transparent_crc(p_1087->g_877.s4, "p_1087->g_877.s4", print_hash_value);
    transparent_crc(p_1087->g_877.s5, "p_1087->g_877.s5", print_hash_value);
    transparent_crc(p_1087->g_877.s6, "p_1087->g_877.s6", print_hash_value);
    transparent_crc(p_1087->g_877.s7, "p_1087->g_877.s7", print_hash_value);
    transparent_crc(p_1087->g_888, "p_1087->g_888", print_hash_value);
    transparent_crc(p_1087->g_900.s0, "p_1087->g_900.s0", print_hash_value);
    transparent_crc(p_1087->g_900.s1, "p_1087->g_900.s1", print_hash_value);
    transparent_crc(p_1087->g_900.s2, "p_1087->g_900.s2", print_hash_value);
    transparent_crc(p_1087->g_900.s3, "p_1087->g_900.s3", print_hash_value);
    transparent_crc(p_1087->g_900.s4, "p_1087->g_900.s4", print_hash_value);
    transparent_crc(p_1087->g_900.s5, "p_1087->g_900.s5", print_hash_value);
    transparent_crc(p_1087->g_900.s6, "p_1087->g_900.s6", print_hash_value);
    transparent_crc(p_1087->g_900.s7, "p_1087->g_900.s7", print_hash_value);
    transparent_crc(p_1087->g_900.s8, "p_1087->g_900.s8", print_hash_value);
    transparent_crc(p_1087->g_900.s9, "p_1087->g_900.s9", print_hash_value);
    transparent_crc(p_1087->g_900.sa, "p_1087->g_900.sa", print_hash_value);
    transparent_crc(p_1087->g_900.sb, "p_1087->g_900.sb", print_hash_value);
    transparent_crc(p_1087->g_900.sc, "p_1087->g_900.sc", print_hash_value);
    transparent_crc(p_1087->g_900.sd, "p_1087->g_900.sd", print_hash_value);
    transparent_crc(p_1087->g_900.se, "p_1087->g_900.se", print_hash_value);
    transparent_crc(p_1087->g_900.sf, "p_1087->g_900.sf", print_hash_value);
    transparent_crc(p_1087->g_910.s0, "p_1087->g_910.s0", print_hash_value);
    transparent_crc(p_1087->g_910.s1, "p_1087->g_910.s1", print_hash_value);
    transparent_crc(p_1087->g_910.s2, "p_1087->g_910.s2", print_hash_value);
    transparent_crc(p_1087->g_910.s3, "p_1087->g_910.s3", print_hash_value);
    transparent_crc(p_1087->g_910.s4, "p_1087->g_910.s4", print_hash_value);
    transparent_crc(p_1087->g_910.s5, "p_1087->g_910.s5", print_hash_value);
    transparent_crc(p_1087->g_910.s6, "p_1087->g_910.s6", print_hash_value);
    transparent_crc(p_1087->g_910.s7, "p_1087->g_910.s7", print_hash_value);
    transparent_crc(p_1087->g_911.f0.f0, "p_1087->g_911.f0.f0", print_hash_value);
    transparent_crc(p_1087->g_911.f0.f1, "p_1087->g_911.f0.f1", print_hash_value);
    transparent_crc(p_1087->g_911.f0.f2, "p_1087->g_911.f0.f2", print_hash_value);
    transparent_crc(p_1087->g_915.x, "p_1087->g_915.x", print_hash_value);
    transparent_crc(p_1087->g_915.y, "p_1087->g_915.y", print_hash_value);
    transparent_crc(p_1087->g_919.x, "p_1087->g_919.x", print_hash_value);
    transparent_crc(p_1087->g_919.y, "p_1087->g_919.y", print_hash_value);
    transparent_crc(p_1087->g_924.f0, "p_1087->g_924.f0", print_hash_value);
    transparent_crc(p_1087->g_933.f0, "p_1087->g_933.f0", print_hash_value);
    transparent_crc(p_1087->g_933.f1, "p_1087->g_933.f1", print_hash_value);
    transparent_crc(p_1087->g_933.f2, "p_1087->g_933.f2", print_hash_value);
    transparent_crc(p_1087->g_940.f0.f0, "p_1087->g_940.f0.f0", print_hash_value);
    transparent_crc(p_1087->g_940.f0.f1, "p_1087->g_940.f0.f1", print_hash_value);
    transparent_crc(p_1087->g_940.f0.f2, "p_1087->g_940.f0.f2", print_hash_value);
    transparent_crc(p_1087->g_943.f0, "p_1087->g_943.f0", print_hash_value);
    transparent_crc(p_1087->g_943.f1, "p_1087->g_943.f1", print_hash_value);
    transparent_crc(p_1087->g_943.f2, "p_1087->g_943.f2", print_hash_value);
    transparent_crc(p_1087->g_948.x, "p_1087->g_948.x", print_hash_value);
    transparent_crc(p_1087->g_948.y, "p_1087->g_948.y", print_hash_value);
    transparent_crc(p_1087->g_948.z, "p_1087->g_948.z", print_hash_value);
    transparent_crc(p_1087->g_948.w, "p_1087->g_948.w", print_hash_value);
    transparent_crc(p_1087->g_1021.f0, "p_1087->g_1021.f0", print_hash_value);
    transparent_crc(p_1087->g_1037, "p_1087->g_1037", print_hash_value);
    transparent_crc(p_1087->g_1053.s0, "p_1087->g_1053.s0", print_hash_value);
    transparent_crc(p_1087->g_1053.s1, "p_1087->g_1053.s1", print_hash_value);
    transparent_crc(p_1087->g_1053.s2, "p_1087->g_1053.s2", print_hash_value);
    transparent_crc(p_1087->g_1053.s3, "p_1087->g_1053.s3", print_hash_value);
    transparent_crc(p_1087->g_1053.s4, "p_1087->g_1053.s4", print_hash_value);
    transparent_crc(p_1087->g_1053.s5, "p_1087->g_1053.s5", print_hash_value);
    transparent_crc(p_1087->g_1053.s6, "p_1087->g_1053.s6", print_hash_value);
    transparent_crc(p_1087->g_1053.s7, "p_1087->g_1053.s7", print_hash_value);
    transparent_crc(p_1087->g_1053.s8, "p_1087->g_1053.s8", print_hash_value);
    transparent_crc(p_1087->g_1053.s9, "p_1087->g_1053.s9", print_hash_value);
    transparent_crc(p_1087->g_1053.sa, "p_1087->g_1053.sa", print_hash_value);
    transparent_crc(p_1087->g_1053.sb, "p_1087->g_1053.sb", print_hash_value);
    transparent_crc(p_1087->g_1053.sc, "p_1087->g_1053.sc", print_hash_value);
    transparent_crc(p_1087->g_1053.sd, "p_1087->g_1053.sd", print_hash_value);
    transparent_crc(p_1087->g_1053.se, "p_1087->g_1053.se", print_hash_value);
    transparent_crc(p_1087->g_1053.sf, "p_1087->g_1053.sf", print_hash_value);
    transparent_crc(p_1087->g_1054.x, "p_1087->g_1054.x", print_hash_value);
    transparent_crc(p_1087->g_1054.y, "p_1087->g_1054.y", print_hash_value);
    transparent_crc(p_1087->g_1055.s0, "p_1087->g_1055.s0", print_hash_value);
    transparent_crc(p_1087->g_1055.s1, "p_1087->g_1055.s1", print_hash_value);
    transparent_crc(p_1087->g_1055.s2, "p_1087->g_1055.s2", print_hash_value);
    transparent_crc(p_1087->g_1055.s3, "p_1087->g_1055.s3", print_hash_value);
    transparent_crc(p_1087->g_1055.s4, "p_1087->g_1055.s4", print_hash_value);
    transparent_crc(p_1087->g_1055.s5, "p_1087->g_1055.s5", print_hash_value);
    transparent_crc(p_1087->g_1055.s6, "p_1087->g_1055.s6", print_hash_value);
    transparent_crc(p_1087->g_1055.s7, "p_1087->g_1055.s7", print_hash_value);
    transparent_crc(p_1087->g_1055.s8, "p_1087->g_1055.s8", print_hash_value);
    transparent_crc(p_1087->g_1055.s9, "p_1087->g_1055.s9", print_hash_value);
    transparent_crc(p_1087->g_1055.sa, "p_1087->g_1055.sa", print_hash_value);
    transparent_crc(p_1087->g_1055.sb, "p_1087->g_1055.sb", print_hash_value);
    transparent_crc(p_1087->g_1055.sc, "p_1087->g_1055.sc", print_hash_value);
    transparent_crc(p_1087->g_1055.sd, "p_1087->g_1055.sd", print_hash_value);
    transparent_crc(p_1087->g_1055.se, "p_1087->g_1055.se", print_hash_value);
    transparent_crc(p_1087->g_1055.sf, "p_1087->g_1055.sf", print_hash_value);
    transparent_crc(p_1087->g_1077.f0, "p_1087->g_1077.f0", print_hash_value);
    transparent_crc(p_1087->g_1077.f1, "p_1087->g_1077.f1", print_hash_value);
    transparent_crc(p_1087->g_1077.f2, "p_1087->g_1077.f2", print_hash_value);
    transparent_crc(p_1087->g_1084, "p_1087->g_1084", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1087->g_1086[i][j].f0, "p_1087->g_1086[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1087->v_collective, "p_1087->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 19; i++)
            transparent_crc(p_1087->g_special_values[i + 19 * get_linear_group_id()], "p_1087->g_special_values[i + 19 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 19; i++)
            transparent_crc(p_1087->l_special_values[i], "p_1087->l_special_values[i]", print_hash_value);
    transparent_crc(p_1087->l_comm_values[get_linear_local_id()], "p_1087->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1087->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()], "p_1087->g_comm_values[get_linear_group_id() * 23 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
