// --atomics 8 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 52,5,37 -l 4,1,1
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

__constant uint32_t permutations[10][4] = {
{2,0,3,1}, // permutation 0
{2,0,1,3}, // permutation 1
{1,3,0,2}, // permutation 2
{1,3,2,0}, // permutation 3
{2,0,1,3}, // permutation 4
{3,0,2,1}, // permutation 5
{2,0,3,1}, // permutation 6
{3,0,1,2}, // permutation 7
{2,0,1,3}, // permutation 8
{1,0,3,2} // permutation 9
};

// Seed: 3320593071

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   volatile int16_t  f1;
   int16_t  f2;
   int32_t  f3;
   int64_t  f4;
   int64_t  f5;
   volatile int32_t  f6;
};

struct S1 {
   volatile uint16_t  f0;
   uint8_t  f1;
};

union U2 {
   struct S0  f0;
   int8_t * f1;
   volatile int32_t  f2;
   volatile int8_t  f3;
};

union U3 {
   volatile uint32_t  f0;
   volatile int64_t  f1;
   int64_t  f2;
   int64_t  f3;
   volatile uint32_t  f4;
};

struct S4 {
    int8_t g_5;
    int32_t g_7;
    int8_t *g_11;
    uint8_t g_26[3][1][4];
    struct S1 g_33;
    struct S1 g_34;
    struct S0 g_35[1][2][8];
    volatile struct S1 g_58;
    volatile struct S1 * volatile g_59;
    int32_t g_61;
    int32_t *g_64[6][8];
    int32_t ** volatile g_63;
    int32_t ** volatile g_67;
    uint32_t g_74;
    VECTOR(uint16_t, 2) g_77;
    uint32_t g_88;
    struct S1 g_101;
    struct S1 * volatile g_102;
    struct S1 g_122[1][7];
    struct S1 *g_121;
    uint32_t g_129;
    VECTOR(uint32_t, 16) g_178;
    uint8_t * volatile g_188;
    uint8_t * volatile *g_187;
    uint8_t * volatile * volatile *g_186;
    uint32_t *g_189;
    uint32_t *g_190;
    uint16_t g_220;
    struct S1 g_223;
    struct S1 *g_222[7];
    uint32_t g_246;
    uint32_t g_247;
    volatile uint64_t g_275[2][10][2];
    volatile uint64_t * volatile g_274;
    VECTOR(int16_t, 2) g_290;
    uint8_t g_304;
    uint8_t *g_303;
    int8_t g_310[4];
    union U2 g_341;
    int32_t ** volatile g_347;
    int32_t * volatile g_350;
    VECTOR(uint64_t, 2) g_392;
    uint8_t **g_397[2][2][2];
    volatile VECTOR(uint16_t, 4) g_407;
    uint64_t g_409;
    struct S0 * volatile g_413;
    struct S1 g_428;
    volatile VECTOR(uint8_t, 2) g_467;
    int32_t * volatile g_472;
    int8_t **g_473[1];
    VECTOR(int32_t, 8) g_490;
    VECTOR(int32_t, 8) g_507;
    volatile VECTOR(int32_t, 4) g_510;
    volatile VECTOR(int8_t, 8) g_523;
    VECTOR(int8_t, 16) g_524;
    int64_t g_537;
    volatile struct S0 g_556;
    volatile struct S0 * volatile g_557;
    volatile struct S0 g_560;
    struct S1 g_562;
    VECTOR(uint64_t, 16) g_563;
    struct S1 * volatile *g_565;
    struct S1 * volatile **g_564;
    int8_t g_587[10];
    union U3 g_589[2];
    union U3 g_590;
    uint8_t g_623;
    volatile uint32_t g_624;
    struct S1 g_633;
    volatile VECTOR(uint32_t, 16) g_636;
    volatile int16_t * volatile g_645[2][2];
    union U2 g_657;
    struct S0 g_658;
    struct S0 * volatile g_661;
    volatile uint32_t g_692[1][8];
    int32_t ** volatile g_696[9];
    volatile VECTOR(uint8_t, 2) g_702;
    uint64_t *g_710[7][1];
    uint64_t **g_709;
    int32_t ** volatile g_723;
    VECTOR(uint8_t, 16) g_735;
    VECTOR(uint8_t, 2) g_737;
    VECTOR(uint8_t, 8) g_738;
    struct S1 g_761[10];
    struct S1 g_762;
    struct S1 g_763;
    struct S1 g_764[1][2][4];
    struct S1 g_765[10][10];
    struct S1 g_766[9];
    struct S1 g_767;
    struct S1 g_768[2];
    struct S1 g_769;
    struct S1 g_770;
    struct S1 g_771;
    struct S1 g_772;
    volatile VECTOR(int32_t, 2) g_798;
    volatile VECTOR(int32_t, 2) g_799;
    VECTOR(int32_t, 4) g_802;
    VECTOR(int32_t, 4) g_804;
    uint8_t ***g_812;
    union U3 g_814;
    volatile VECTOR(int8_t, 8) g_842;
    int16_t g_845;
    VECTOR(int32_t, 16) g_855;
    VECTOR(int16_t, 2) g_856;
    VECTOR(int16_t, 16) g_857;
    volatile int32_t g_866;
    struct S1 **g_880;
    struct S1 ***g_879[2];
    VECTOR(int32_t, 16) g_900;
    VECTOR(int16_t, 16) g_907;
    uint32_t **g_914;
    uint32_t **g_915;
    volatile VECTOR(uint16_t, 4) g_921;
    union U3 g_923;
    volatile struct S0 g_926[4];
    union U3 g_927[8][6];
    VECTOR(int16_t, 2) g_934;
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
union U3  func_1(struct S4 * p_937);
int8_t ** func_8(int8_t * p_9, struct S4 * p_937);
int32_t * func_12(uint16_t  p_13, int32_t * p_14, int8_t  p_15, struct S4 * p_937);
uint32_t  func_19(uint8_t  p_20, uint16_t  p_21, int32_t  p_22, int64_t  p_23, int8_t ** p_24, struct S4 * p_937);
struct S0  func_29(int8_t * p_30, int64_t  p_31, struct S4 * p_937);
int16_t  func_36(int32_t  p_37, uint8_t * p_38, uint8_t * p_39, int32_t * p_40, struct S4 * p_937);
uint8_t * func_41(uint32_t  p_42, int32_t * p_43, int64_t  p_44, struct S4 * p_937);
int32_t * func_49(uint16_t  p_50, struct S4 * p_937);
int32_t * func_52(int8_t ** p_53, struct S4 * p_937);
int32_t * func_55(int64_t  p_56, struct S4 * p_937);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_937->g_5 p_937->g_7 p_937->g_26 p_937->g_comm_values p_937->l_comm_values p_937->g_33 p_937->g_35 p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_64 p_937->g_67 p_937->g_74 p_937->g_61 p_937->g_77 p_937->g_11 p_937->g_101 p_937->g_102 p_937->g_121 p_937->g_122.f1 p_937->g_186 p_937->g_187 p_937->g_188 p_937->g_222 p_937->g_88 p_937->g_129 p_937->g_220 p_937->g_246 p_937->g_274 p_937->g_303 p_937->g_347 p_937->g_350 p_937->g_392 p_937->g_397 p_937->g_407 p_937->g_409 p_937->g_341.f0 p_937->g_413 p_937->g_428 p_937->g_310 p_937->g_34.f1 p_937->g_122.f0 p_937->g_275 p_937->g_467 p_937->g_472 p_937->g_189 p_937->g_247 p_937->g_490 p_937->g_304 p_937->g_507 p_937->g_510 p_937->g_523 p_937->g_524 p_937->g_537 p_937->g_556 p_937->g_557 p_937->g_560 p_937->g_587 p_937->g_223.f1 p_937->g_589 p_937->g_590 p_937->g_623 p_937->g_624 p_937->g_633 p_937->g_636 p_937->g_645 p_937->g_657 p_937->g_658 p_937->g_661 p_937->g_223.f0 p_937->g_692 p_937->g_702 p_937->g_709 p_937->g_562.f1 p_937->g_735 p_937->g_737 p_937->g_738 p_937->g_590.f2 p_937->g_798 p_937->g_799 p_937->g_802 p_937->g_804 p_937->g_814 p_937->g_762.f1 p_937->g_814.f2 p_937->g_842 p_937->g_845 p_937->g_812 p_937->g_855 p_937->g_856 p_937->g_857 p_937->g_563 p_937->g_866 p_937->g_879 p_937->g_900 p_937->g_907 p_937->g_921 p_937->g_923 p_937->g_926 p_937->g_927 p_937->g_934 p_937->g_880
 * writes: p_937->g_7 p_937->g_11 p_937->g_26 p_937->g_34 p_937->g_58 p_937->g_64 p_937->g_61 p_937->g_74 p_937->g_88 p_937->g_33.f1 p_937->g_5 p_937->g_35 p_937->g_189 p_937->g_190 p_937->g_122.f1 p_937->g_77 p_937->g_121 p_937->g_222 p_937->g_129 p_937->g_223.f1 p_937->g_247 p_937->g_101.f1 p_937->g_397 p_937->g_310 p_937->g_409 p_937->g_341.f0.f3 p_937->g_122 p_937->g_304 p_937->g_473 p_937->g_556 p_937->l_comm_values p_937->g_587 p_937->g_589.f2 p_937->g_220 p_937->g_692 p_937->g_590.f2 p_937->g_562.f1 p_937->g_812 p_937->g_762.f1 p_937->g_814.f2 p_937->g_845 p_937->g_879 p_937->g_537 p_937->g_914 p_937->g_915
 */
union U3  func_1(struct S4 * p_937)
{ /* block id: 4 */
    int8_t *l_4 = &p_937->g_5;
    int32_t *l_6 = &p_937->g_7;
    struct S1 **l_492 = &p_937->g_222[5];
    uint32_t l_496 = 0x0C0D1A64L;
    VECTOR(int32_t, 4) l_508 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L);
    struct S1 ***l_567 = &l_492;
    VECTOR(int8_t, 8) l_610 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x78L), 0x78L), 0x78L, (-1L), 0x78L);
    uint16_t l_626 = 65535UL;
    uint16_t l_686[10][9][2] = {{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}},{{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L},{0xA69BL,0x4313L}}};
    int32_t *l_698 = (void*)0;
    VECTOR(uint8_t, 4) l_701 = (VECTOR(uint8_t, 4))(0xE1L, (VECTOR(uint8_t, 2))(0xE1L, 0xB6L), 0xB6L);
    VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(0x37788612L, 0x1127851FL);
    uint16_t l_722 = 0UL;
    VECTOR(uint32_t, 4) l_774 = (VECTOR(uint32_t, 4))(0x336F56B3L, (VECTOR(uint32_t, 2))(0x336F56B3L, 0x13858DBBL), 0x13858DBBL);
    uint32_t l_827 = 0x23F9B3A0L;
    uint32_t l_836 = 0x55FFA25DL;
    VECTOR(uint8_t, 16) l_849 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x32L), 0x32L), 0x32L, 1UL, 0x32L, (VECTOR(uint8_t, 2))(1UL, 0x32L), (VECTOR(uint8_t, 2))(1UL, 0x32L), 1UL, 0x32L, 1UL, 0x32L);
    int32_t **l_893 = &l_698;
    VECTOR(int32_t, 16) l_901 = (VECTOR(int32_t, 16))(0x2EFF9D7CL, (VECTOR(int32_t, 4))(0x2EFF9D7CL, (VECTOR(int32_t, 2))(0x2EFF9D7CL, 0L), 0L), 0L, 0x2EFF9D7CL, 0L, (VECTOR(int32_t, 2))(0x2EFF9D7CL, 0L), (VECTOR(int32_t, 2))(0x2EFF9D7CL, 0L), 0x2EFF9D7CL, 0L, 0x2EFF9D7CL, 0L);
    VECTOR(int32_t, 4) l_903 = (VECTOR(int32_t, 4))(0x0BF3DE77L, (VECTOR(int32_t, 2))(0x0BF3DE77L, 1L), 1L);
    VECTOR(int32_t, 2) l_904 = (VECTOR(int32_t, 2))((-1L), 0x457D84F2L);
    uint64_t l_916 = 0UL;
    VECTOR(uint16_t, 4) l_918 = (VECTOR(uint16_t, 4))(0xF2A5L, (VECTOR(uint16_t, 2))(0xF2A5L, 0x8D7BL), 0x8D7BL);
    VECTOR(uint16_t, 4) l_919 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x44FFL), 0x44FFL);
    int i, j, k;
    if (((*l_6) = (safe_rshift_func_uint16_t_u_u((l_4 != (void*)0), 7))))
    { /* block id: 6 */
        int8_t **l_10[7][2][3] = {{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}},{{&l_4,&l_4,&l_4},{&l_4,&l_4,&l_4}}};
        uint32_t *l_482 = &p_937->g_129;
        struct S1 **l_495[10][10][2];
        int32_t l_497 = 1L;
        int32_t *l_506 = &p_937->g_61;
        VECTOR(int32_t, 8) l_509 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x31457425L), 0x31457425L), 0x31457425L, 9L, 0x31457425L);
        VECTOR(int16_t, 8) l_536 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
        uint32_t l_538[5];
        uint16_t l_568[3];
        uint64_t *l_593 = &p_937->g_409;
        int8_t ***l_601 = &p_937->g_473[0];
        int8_t **l_603 = &l_4;
        int8_t ***l_602 = &l_603;
        VECTOR(uint8_t, 2) l_617 = (VECTOR(uint8_t, 2))(0x03L, 252UL);
        VECTOR(int32_t, 4) l_622 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x45AAF585L), 0x45AAF585L);
        uint8_t l_625[8] = {0xB7L,0xB7L,0xB7L,0xB7L,0xB7L,0xB7L,0xB7L,0xB7L};
        int32_t l_667 = 5L;
        VECTOR(int16_t, 2) l_688 = (VECTOR(int16_t, 2))(7L, 0x4762L);
        uint64_t **l_712[3];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 2; k++)
                    l_495[i][j][k] = &p_937->g_222[5];
            }
        }
        for (i = 0; i < 5; i++)
            l_538[i] = 6UL;
        for (i = 0; i < 3; i++)
            l_568[i] = 0UL;
        for (i = 0; i < 3; i++)
            l_712[i] = (void*)0;
        p_937->g_473[0] = func_8((p_937->g_11 = l_4), p_937);
        (*p_937->g_121) = (*p_937->g_59);
        if ((*l_6))
        { /* block id: 205 */
            struct S1 *l_476 = &p_937->g_428;
            int32_t l_481 = 5L;
            int16_t *l_483 = (void*)0;
            int16_t *l_484 = &p_937->g_35[0][0][0].f2;
            int32_t l_485 = 0L;
            struct S1 **l_494 = &p_937->g_121;
            struct S1 ***l_493[5][6] = {{(void*)0,&l_492,(void*)0,(void*)0,&l_492,(void*)0},{(void*)0,&l_492,(void*)0,(void*)0,&l_492,(void*)0},{(void*)0,&l_492,(void*)0,(void*)0,&l_492,(void*)0},{(void*)0,&l_492,(void*)0,(void*)0,&l_492,(void*)0},{(void*)0,&l_492,(void*)0,(void*)0,&l_492,(void*)0}};
            uint8_t l_511 = 1UL;
            int i, j;
            (*l_6) = (((*p_937->g_303) = (safe_mul_func_int16_t_s_s((((void*)0 != l_476) ^ ((void*)0 == p_937->g_189)), (l_485 &= (((void*)0 == &p_937->g_341) < ((((safe_div_func_int8_t_s_s(1L, (safe_mod_func_uint16_t_u_u(l_481, ((*l_484) = ((&p_937->g_88 != l_482) | 0x12805F61E0350850L)))))) ^ 8UL) & 0x45D9L) | FAKE_DIVERGE(p_937->group_0_offset, get_group_id(0), 10))))))) == 253UL);
            for (p_937->g_247 = 4; (p_937->g_247 == 27); p_937->g_247 = safe_add_func_uint8_t_u_u(p_937->g_247, 8))
            { /* block id: 212 */
                for (p_937->g_7 = (-26); (p_937->g_7 >= 5); ++p_937->g_7)
                { /* block id: 215 */
                    uint32_t l_491 = 0x967C72D0L;
                    l_491 = ((VECTOR(int32_t, 4))(p_937->g_490.s3127)).y;
                }
            }
            l_506 = func_49(((l_492 == (l_495[0][8][0] = &p_937->g_121)) < ((~((((l_496 , l_492) != &p_937->g_222[6]) & (p_937->g_275[1][8][0] == l_497)) != (((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_937->g_304, ((safe_rshift_func_int8_t_s_u(0x61L, 3)) < p_937->g_77.y))), 2)), 2)) , 0x5F43L) & (-5L)))) >= (-2L))), p_937);
            l_511 = ((*l_6) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0L, (-1L))).yyyxxyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_937->g_507.s3320213543662233)))), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_508.yx)).yxyyyxyxxyxyxyxy, ((VECTOR(int32_t, 2))(0x4E3D883AL, 0L)).xyyyyxyyyyxxyxyy, ((VECTOR(int32_t, 16))(l_509.s4732257671102756)))))))))).hi, ((VECTOR(int32_t, 8))(p_937->g_510.wwxyywyy))))).odd)).w);
        }
        else
        { /* block id: 223 */
            int8_t l_514 = 0x5FL;
            int64_t *l_515 = (void*)0;
            int32_t l_516[9] = {7L,0x6BBD948FL,7L,7L,0x6BBD948FL,7L,7L,0x6BBD948FL,7L};
            int8_t l_533 = 1L;
            int32_t *l_539 = &l_497;
            int32_t *l_540 = &p_937->g_7;
            int32_t *l_541 = (void*)0;
            int32_t *l_542 = &l_516[0];
            int32_t *l_543 = &l_516[7];
            int32_t *l_544 = (void*)0;
            int32_t *l_545 = &p_937->g_7;
            int32_t *l_546 = (void*)0;
            int32_t *l_547[2];
            int16_t l_548 = 0x6750L;
            uint32_t l_549 = 4294967292UL;
            struct S1 ***l_566[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 2; i++)
                l_547[i] = &l_516[0];
            (*l_539) = (safe_sub_func_int32_t_s_s(((p_937->g_88 = l_514) && (l_538[1] &= (((l_516[0] = p_937->g_comm_values[p_937->tid]) > (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((*l_4) = ((void*)0 != l_515)), 7)), (((*l_6) = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(p_937->g_523.s5126)).yxzwwzxzyxzzxwzw, ((VECTOR(int8_t, 16))(p_937->g_524.s02ce9c009e736036))))).lo)).s36)).even) > (FAKE_DIVERGE(p_937->local_0_offset, get_local_id(0), 10) ^ (safe_mod_func_int8_t_s_s((l_514 , (safe_div_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((!((*l_506) = (*l_506))), (((VECTOR(uint32_t, 4))(((((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x6A83L, ((safe_mod_func_int8_t_s_s((l_533 == (0x15BC1E5AD07C9735L && (safe_lshift_func_int8_t_s_u(l_536.s3, 3)))), l_533)) <= p_937->g_537), 0x6372L, 0x1FEDL)).even)).even <= p_937->g_507.s3) <= p_937->g_comm_values[p_937->tid]) || l_514) , 9UL), 4294967295UL, 0xA2149D44L, 4294967291UL)).w , 0UL))) != l_508.x), l_514))), 0x40L)))))), (*p_937->g_303)))) ^ p_937->g_88))), l_496));
            --l_549;
            (*l_543) = (*l_6);
            for (p_937->g_61 = 0; (p_937->g_61 <= 19); p_937->g_61 = safe_add_func_uint8_t_u_u(p_937->g_61, 8))
            { /* block id: 235 */
                VECTOR(int32_t, 8) l_569 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x16D5972EL), 0x16D5972EL), 0x16D5972EL, 1L, 0x16D5972EL);
                uint16_t *l_583 = &p_937->g_220;
                int i;
                if (((p_937->g_35[0][0][0].f1 , p_937->g_7) == (safe_rshift_func_int16_t_s_s(0x5F2BL, 12))))
                { /* block id: 236 */
                    int32_t **l_570[7][8][4] = {{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}},{{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541},{&l_546,&p_937->g_64[0][4],(void*)0,&l_541}}};
                    int i, j, k;
                    (*p_937->g_557) = p_937->g_556;
                    l_568[1] ^= ((safe_mod_func_uint8_t_u_u((*p_937->g_303), FAKE_DIVERGE(p_937->local_2_offset, get_local_id(2), 10))) != (p_937->g_560 , (safe_unary_minus_func_int32_t_s(((*l_542) = (((VECTOR(int8_t, 8))((0L || (p_937->g_562 , (((*l_539) &= ((p_937->g_523.s1 , ((VECTOR(uint64_t, 4))(p_937->g_563.sf867)).y) && (((*l_6) <= (((*p_937->g_413) , p_937->g_564) == (l_567 = l_566[1]))) < (*l_6)))) & 0x6CF3C3E6L))), (-5L), ((VECTOR(int8_t, 4))((-9L))), (-9L), 0x55L)).s3 & 5L))))));
                    if (l_569.s2)
                        continue;
                    (*p_937->g_63) = func_55(p_937->g_comm_values[p_937->tid], p_937);
                }
                else
                { /* block id: 244 */
                    int32_t *l_586 = &p_937->g_35[0][0][0].f3;
                    int32_t l_588 = (-1L);
                    if ((((safe_mul_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(0xB483C1E7CEDBE4D6L, 1UL, 0xCED3AB5ED4C5B050L, 0x6AEEF8DE43008068L)).even)).lo >= (safe_rshift_func_int8_t_s_u(((((l_569.s0 != (safe_rshift_func_uint16_t_u_u(((l_6 == l_547[1]) | ((((+(p_937->g_587[2] ^= (((safe_mul_func_int8_t_s_s(((((*l_586) = (((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((l_583 != l_583), 1)), (p_937->l_comm_values[(safe_mod_func_uint32_t_u_u(p_937->tid, 4))] |= ((***p_937->g_186) > ((*p_937->g_303) &= FAKE_DIVERGE(p_937->global_1_offset, get_global_id(1), 10)))))) != (0UL < (((*l_482) = ((safe_add_func_uint64_t_u_u(0UL, (*l_542))) , p_937->g_507.s7)) >= 0x08CF6F20L))) == 249UL)) , (void*)0) != (void*)0), FAKE_DIVERGE(p_937->global_1_offset, get_global_id(1), 10))) != (*l_506)) <= p_937->g_77.x))) ^ FAKE_DIVERGE(p_937->group_1_offset, get_group_id(1), 10)) >= p_937->g_223.f1) >= l_588)), 2))) , (void*)0) == &p_937->g_189) , 0L), 0))), 0xF1L)) , l_4) != l_4))
                    { /* block id: 250 */
                        return p_937->g_589[1];
                    }
                    else
                    { /* block id: 252 */
                        return p_937->g_590;
                    }
                }
                for (p_937->g_247 = 0; (p_937->g_247 == 49); ++p_937->g_247)
                { /* block id: 258 */
                    uint64_t **l_594 = (void*)0;
                    uint64_t **l_595 = (void*)0;
                    uint64_t *l_597 = &p_937->g_409;
                    uint64_t **l_596 = &l_597;
                    struct S0 *l_598[10][10] = {{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]},{&p_937->g_35[0][0][0],&p_937->g_341.f0,&p_937->g_341.f0,(void*)0,&p_937->g_35[0][0][7],&p_937->g_35[0][0][0],(void*)0,&p_937->g_35[0][0][2],(void*)0,&p_937->g_35[0][0][0]}};
                    int i, j;
                    (*l_545) = (l_593 != ((*l_596) = &p_937->g_409));
                    (*p_937->g_413) = ((*p_937->g_274) , (*p_937->g_413));
                    (*l_543) ^= (-7L);
                    if ((*p_937->g_350))
                        break;
                }
            }
        }
        if (((p_937->g_490.s4 && (((*l_601) = l_10[5][1][0]) != ((*l_602) = (void*)0))) , (safe_lshift_func_int16_t_s_s(4L, (safe_mul_func_int8_t_s_s(((+(safe_mod_func_int8_t_s_s((&p_937->g_11 == &l_4), ((VECTOR(int8_t, 4))(l_610.s6507)).x))) ^ (safe_sub_func_uint8_t_u_u(((((VECTOR(int32_t, 2))(0x31987846L, 1L)).hi > (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((**p_937->g_187) = ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(l_617.yxyxxyyy)).s76, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(249UL, 246UL)).xxxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x57L, 0xB0L)).yyxy))))))), (p_937->g_122[0][5].f0 | (safe_rshift_func_int8_t_s_u(l_536.s3, 6))), (safe_mod_func_uint8_t_u_u(((((VECTOR(int32_t, 8))(0x0CF1183BL, 0x1012084FL, 0x5672EC61L, ((VECTOR(int32_t, 2))(l_622.zy)), (p_937->g_392.y , (*p_937->g_472)), 1L, 1L)).s0 , (*l_6)) == l_509.s6), 0xDAL)), 0xCFL, ((VECTOR(uint8_t, 8))(255UL)), 1UL)).lo)).s15, ((VECTOR(uint8_t, 2))(0x17L))))), ((VECTOR(uint8_t, 2))(0xCDL))))).hi), p_937->g_623)) == 0UL), l_497))) , p_937->g_624), l_625[0]))), l_626))))))
        { /* block id: 270 */
            uint64_t l_648 = 0x29AC246EAA77010DL;
            int32_t l_666[1];
            uint32_t l_668 = 4294967295UL;
            int64_t *l_673 = &p_937->g_589[1].f2;
            VECTOR(int8_t, 2) l_676 = (VECTOR(int8_t, 2))((-1L), 0x32L);
            int8_t ***l_677[10][1][6] = {{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}},{{&p_937->g_473[0],&p_937->g_473[0],&l_603,&p_937->g_473[0],&l_10[1][0][0],&l_10[1][0][0]}}};
            uint16_t *l_684 = (void*)0;
            uint16_t *l_685 = &p_937->g_220;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_666[i] = 0x387847E3L;
            for (p_937->g_247 = 0; (p_937->g_247 == 31); p_937->g_247++)
            { /* block id: 273 */
                uint32_t l_653 = 4294967291UL;
                uint64_t l_654 = 0x7D7595F99E7DB060L;
                union U2 *l_663 = &p_937->g_341;
                union U2 *l_664 = &p_937->g_341;
                int32_t *l_665[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_665[i] = &p_937->g_61;
                if (((safe_lshift_func_int8_t_s_s((((*p_937->g_303)--) , (l_654 = ((*l_4) ^= (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xAEF862AE277B6D6DL, 18446744073709551615UL)).xxyxyyxxxyyyxyyy)).sc , p_937->g_633) , 2UL) , (safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(p_937->g_636.se4)), (uint32_t)(((*l_6) |= ((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((FAKE_DIVERGE(p_937->group_1_offset, get_group_id(1), 10) , (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((void*)0 == p_937->g_645[0][1]), ((((*l_482) = ((safe_lshift_func_int16_t_s_s(p_937->g_524.s7, 4)) || ((*p_937->g_303) = l_648))) <= ((safe_lshift_func_uint8_t_u_u(l_648, 3)) >= l_648)) , (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_937->g_26[1][0][1]))))), l_648))), 0x14L)) ^ GROUP_DIVERGE(1, 1)), l_653)) | 1UL)) < p_937->g_633.f1), (uint32_t)l_648))).even , (*l_6)), 0xDA1AL)))))), 5)) , 0x29811205L))
                { /* block id: 280 */
                    int32_t l_660 = (-1L);
                    for (p_937->g_129 = 0; (p_937->g_129 > 41); p_937->g_129 = safe_add_func_uint32_t_u_u(p_937->g_129, 8))
                    { /* block id: 283 */
                        struct S0 *l_659 = &p_937->g_35[0][1][2];
                        (*l_659) = (p_937->g_657 , p_937->g_658);
                    }
                    if (l_660)
                        continue;
                }
                else
                { /* block id: 287 */
                    VECTOR(uint32_t, 2) l_662 = (VECTOR(uint32_t, 2))(4294967288UL, 0x5EF2995AL);
                    int i;
                    (*p_937->g_661) = (*p_937->g_413);
                    if (l_662.y)
                        continue;
                    return p_937->g_590;
                }
                l_664 = l_663;
                ++l_668;
            }
            if (((*l_6) != ((safe_mul_func_uint16_t_u_u(p_937->g_223.f0, l_668)) || (((*l_685) = (((((*l_673) = (0x64L && ((*p_937->g_303) = l_666[0]))) > (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_676.xyyyyyxyxxyyyxxx)).s1, ((void*)0 == l_677[7][0][1]), 8L, 0x79L)))), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((*l_6), 6)), ((safe_div_func_int16_t_s_s(0x5AB5L, 1UL)) , 0x7861L))) < l_676.x), 0x3AL, l_668, 8L, ((VECTOR(int8_t, 4))(0x25L)), (*l_6), ((VECTOR(int8_t, 4))((-1L))), 0x1DL, 0x24L, 1L)).s14, ((VECTOR(int8_t, 2))(0L))))), 0x67L, (*l_6), 0L, l_666[0], ((VECTOR(int8_t, 4))((-1L))), 0x2CL)).se, 8UL))) , 4294967292UL) < 0UL)) == l_686[1][0][0]))))
            { /* block id: 298 */
                int32_t *l_687[4];
                uint16_t l_689 = 65532UL;
                int32_t **l_695 = &p_937->g_64[0][3];
                int i;
                for (i = 0; i < 4; i++)
                    l_687[i] = &l_666[0];
                l_689++;
                ++p_937->g_692[0][0];
                (*l_695) = &l_666[0];
            }
            else
            { /* block id: 302 */
                int32_t **l_697[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_697[i] = &l_6;
                l_698 = &l_666[0];
            }
        }
        else
        { /* block id: 305 */
            uint64_t ***l_711[6][7];
            uint8_t *l_716 = (void*)0;
            int32_t l_721 = 0x541BE7A6L;
            int32_t **l_724 = &p_937->g_64[0][3];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 7; j++)
                    l_711[i][j] = &p_937->g_709;
            }
            (*l_724) = ((((p_937->g_407.y , (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x63L, (-3L))))).xxyyxxxx))).s7241145353144513)))).s47be, ((VECTOR(uint8_t, 16))(l_701.yyyyyyxxwzxwxyzz)).sdd58))), ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_937->g_702.yyxy)).zyxxxzwy)), (uint8_t)(safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((l_712[0] = p_937->g_709) == ((safe_add_func_int64_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((((*p_937->g_63) == &l_497) , (((l_716 = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_715.yxyxxxyx)).s6043016361740007)).s9c10)).ywwxwwyzxzxwwwww)).s4 , &l_625[0])) != (void*)0) != (*l_6))), (((VECTOR(int32_t, 16))(0x7B39EE54L, 5L, (*l_6), 0L, 0x6120C707L, 0x6289006CL, ((VECTOR(int32_t, 2))((-3L), 0L)), 0x2C26D513L, ((safe_lshift_func_int16_t_s_u(((safe_add_func_int64_t_s_s(9L, (-1L))) , l_721), p_937->g_587[1])) != p_937->g_562.f1), 0L, (-5L), 0x0B7FB7A7L, p_937->g_692[0][7], 0x73010222L, 0x50224D02L)).se , l_721), 0x6329928C18D62884L, 1L)).lo)), (-4L), 0x7BC8AA3145A2836AL, 0L, ((VECTOR(int64_t, 2))(0x6D3030AAD2F7AEAAL)), 0x6339FE0AF9D033FCL)).s6 & l_721), l_722)) , &l_593)) < l_721), 9)) > (*l_6)), GROUP_DIVERGE(2, 1))), (*p_937->g_303))), (uint8_t)255UL))).odd, ((VECTOR(uint8_t, 4))(0UL))))).z, (*l_6))) <= l_721) , p_937->g_122[0][5].f1)) , l_721) <= l_721) , l_698);
        }
    }
    else
    { /* block id: 310 */
        int32_t *l_731[10][8] = {{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61},{&p_937->g_7,(void*)0,&p_937->g_61,(void*)0,&p_937->g_7,&p_937->g_7,(void*)0,&p_937->g_61}};
        VECTOR(uint8_t, 8) l_736 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xB2L), 0xB2L), 0xB2L, 5UL, 0xB2L);
        int32_t l_743[4];
        int32_t l_775 = 0x0E0A8D2BL;
        int32_t l_777 = 0L;
        int16_t l_786[3];
        uint32_t l_790 = 9UL;
        uint8_t ***l_811 = &p_937->g_397[0][1][0];
        int16_t l_839 = 0x263EL;
        uint8_t l_894 = 2UL;
        VECTOR(int32_t, 8) l_899 = (VECTOR(int32_t, 8))(0x6725109FL, (VECTOR(int32_t, 4))(0x6725109FL, (VECTOR(int32_t, 2))(0x6725109FL, 0x7C1747ACL), 0x7C1747ACL), 0x7C1747ACL, 0x6725109FL, 0x7C1747ACL);
        VECTOR(uint16_t, 16) l_920 = (VECTOR(uint16_t, 16))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), 1UL), 1UL, 65532UL, 1UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), (VECTOR(uint16_t, 2))(65532UL, 1UL), 65532UL, 1UL, 65532UL, 1UL);
        int i, j;
        for (i = 0; i < 4; i++)
            l_743[i] = 0x2B9DBCFEL;
        for (i = 0; i < 3; i++)
            l_786[i] = 0x3048L;
        if ((GROUP_DIVERGE(1, 1) ^ (*l_6)))
        { /* block id: 311 */
            uint64_t *l_732 = &p_937->g_409;
            int32_t l_741 = 0x1D3436BFL;
            uint32_t *l_742 = &p_937->g_129;
            int16_t l_773 = 0x0E08L;
            int32_t l_782 = 0x01F4A691L;
            int32_t l_784[6][9][1] = {{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}},{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}},{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}},{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}},{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}},{{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL},{0x0AA461EEL}}};
            uint64_t l_787[9] = {0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L,0x890235F36739C1B0L};
            struct S1 ***l_801 = &l_492;
            uint64_t l_818 = 0x7D527BFFC1895CE5L;
            int32_t l_846[1][6][3] = {{{0x53E49642L,0x12D66F6AL,0x53E49642L},{0x53E49642L,0x12D66F6AL,0x53E49642L},{0x53E49642L,0x12D66F6AL,0x53E49642L},{0x53E49642L,0x12D66F6AL,0x53E49642L},{0x53E49642L,0x12D66F6AL,0x53E49642L},{0x53E49642L,0x12D66F6AL,0x53E49642L}}};
            VECTOR(int16_t, 16) l_863 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int16_t, 2))((-9L), 0L), (VECTOR(int16_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L);
            uint8_t *l_898[2];
            VECTOR(uint16_t, 2) l_902 = (VECTOR(uint16_t, 2))(0UL, 0x7DCEL);
            uint32_t **l_910 = &p_937->g_189;
            uint32_t ***l_909 = &l_910;
            uint32_t ***l_911 = (void*)0;
            uint32_t **l_913 = &p_937->g_189;
            uint32_t ***l_912[5][4] = {{&l_913,&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913,&l_913},{&l_913,&l_913,&l_913,&l_913}};
            VECTOR(uint16_t, 4) l_917 = (VECTOR(uint16_t, 4))(0x6A70L, (VECTOR(uint16_t, 2))(0x6A70L, 0xDD84L), 0xDD84L);
            int16_t *l_922 = &l_773;
            int16_t l_928 = 1L;
            uint64_t l_929 = 18446744073709551607UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_898[i] = &p_937->g_223.f1;
            if ((((safe_lshift_func_uint16_t_u_u(((p_937->g_556.f4 | (safe_div_func_int16_t_s_s(((((((safe_add_func_uint64_t_u_u(((*l_732) = (l_731[0][5] == &p_937->g_61)), (safe_sub_func_uint32_t_u_u(4294967295UL, 0UL)))) != GROUP_DIVERGE(2, 1)) && 0x7BEDL) <= (((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_937->g_735.s17)), ((VECTOR(uint8_t, 2))(l_736.s63)), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(p_937->g_737.yxyyyyxxyyxxxyxx)).s1d, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(253UL, 247UL)), 251UL, ((VECTOR(uint8_t, 8))(p_937->g_738.s02030072)).s4, 0xC1L, (((safe_add_func_uint8_t_u_u((((*l_742) = l_741) || (l_741 && (*l_6))), FAKE_DIVERGE(p_937->global_1_offset, get_global_id(1), 10))) < (*l_6)) ^ l_743[1]), 0x7BL, 0xA5L, 8UL, ((VECTOR(uint8_t, 4))(2UL)), ((VECTOR(uint8_t, 2))(0x6DL)), 1UL)).s62))), ((VECTOR(uint8_t, 4))(247UL)), ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(0x44L)), 255UL, 0x5FL)).hi, ((VECTOR(uint8_t, 8))(0x7CL))))).s1 ^ (*l_6))) <= l_741) || (*l_6)), (*l_6)))) , p_937->g_624), 4)) != 0x47C3L) ^ l_741))
            { /* block id: 314 */
                int16_t l_759[6][9] = {{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L},{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L},{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L},{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L},{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L},{0x4723L,0x4723L,(-1L),0L,0L,0L,(-1L),0x4723L,0x4723L}};
                struct S1 *l_760[1][9][3] = {{{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770},{&p_937->g_771,&p_937->g_771,&p_937->g_770}}};
                int32_t l_776 = 0x0EC88AF3L;
                int32_t l_778 = 0x3D4147BDL;
                VECTOR(int32_t, 16) l_779 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                struct S1 ***l_800 = (void*)0;
                VECTOR(int32_t, 4) l_803 = (VECTOR(int32_t, 4))(0x7B0F874EL, (VECTOR(int32_t, 2))(0x7B0F874EL, 0x0478D832L), 0x0478D832L);
                int i, j, k;
                for (p_937->g_590.f2 = 0; (p_937->g_590.f2 < (-20)); p_937->g_590.f2--)
                { /* block id: 317 */
                    VECTOR(int64_t, 8) l_746 = (VECTOR(int64_t, 8))(0x236352DDDACE4EC1L, (VECTOR(int64_t, 4))(0x236352DDDACE4EC1L, (VECTOR(int64_t, 2))(0x236352DDDACE4EC1L, 9L), 9L), 9L, 0x236352DDDACE4EC1L, 9L);
                    int32_t l_780 = 0x2DD413AEL;
                    int32_t l_781[1][10][4] = {{{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L},{0L,0x0AC80D40L,6L,0x0AC80D40L}}};
                    int64_t l_783[4][6][2] = {{{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L}},{{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L}},{{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L}},{{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L},{0x10BD433F2EBEFD5BL,0x10FC75870B80BE22L}}};
                    int64_t l_785 = 0x22C88408BCE4E13AL;
                    int i, j, k;
                    (*p_937->g_121) = ((l_775 ^= ((*l_6) = (((VECTOR(int64_t, 8))(l_746.s64053175)).s1 < (((safe_mod_func_int16_t_s_s((FAKE_DIVERGE(p_937->global_1_offset, get_global_id(1), 10) || ((safe_sub_func_uint8_t_u_u((0x254C9A231C86D91DL != p_937->g_26[1][0][1]), ((safe_mul_func_uint16_t_u_u((0x5862L > (safe_lshift_func_uint8_t_u_u(((~(***p_937->g_186)) < (0x454DF36EDD686790L | 1UL)), 4))), (safe_mul_func_uint16_t_u_u(((((*l_6) || ((((safe_mul_func_int16_t_s_s((l_759[0][6] || l_759[2][2]), 0x403CL)) , 0x07L) , l_760[0][6][1]) != (void*)0)) & l_759[1][1]) <= l_759[5][3]), (-5L))))) <= l_773))) | 0L)), l_759[1][1])) <= p_937->g_587[9]) && l_774.y)))) , (*p_937->g_59));
                    if (l_741)
                        break;
                    l_787[4]++;
                }
                l_790--;
                for (p_937->g_562.f1 = 0; (p_937->g_562.f1 >= 2); p_937->g_562.f1 = safe_add_func_int64_t_s_s(p_937->g_562.f1, 7))
                { /* block id: 327 */
                    int16_t l_797 = 0x6779L;
                    uint8_t ***l_808[10][7] = {{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]},{&p_937->g_397[0][1][1],&p_937->g_397[0][1][1],&p_937->g_397[0][0][1],&p_937->g_397[1][1][1],&p_937->g_397[0][1][1],&p_937->g_397[1][1][1],&p_937->g_397[0][0][1]}};
                    uint8_t ****l_807 = &l_808[7][6];
                    uint8_t ***l_810[3];
                    uint8_t ****l_809 = &l_810[0];
                    int32_t **l_813 = &l_731[6][3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_810[i] = &p_937->g_397[0][1][1];
                    if ((*p_937->g_350))
                        break;
                    (*l_6) ^= ((l_797 & (((((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(0x52C9D7F9L, 0L))))).yxxy, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))((-10L), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_937->g_798.yxxy)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_937->g_799.yxxxyyxy)))).s35, ((VECTOR(int32_t, 4))((-8L), (l_800 != l_801), 0x2830AFF5L, 0x347F78B7L)).hi))), 0x54090067L)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(4L, 0x4D59DAFDL)).xyyxyxxxyyxyxxyx))).s3e99, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x4BF9C64EL, 0x3DEEE670L)))).xyxx))).hi, ((VECTOR(int32_t, 2))(0x44DBBC01L, 6L)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_937->g_802.yxyxyyxy)).lo, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))((-9L), 0x5E66015EL)).xxxxyyxxyyxxyyyx, ((VECTOR(int32_t, 16))(l_803.zwywzxwwxyzxzyyx)), ((VECTOR(int32_t, 8))(p_937->g_804.xyyxxzxz)).s1577372423777355))).s9445))).yyxywwxzxzzyzyyx)).even, (int32_t)l_797))).s71, ((VECTOR(int32_t, 8))(0x765DC57AL, 0x0A4E3FD3L, 0x29C1148AL, 0x16734A8BL, 1L, (-10L), 0x2862B4B8L, 0x03A3C996L)).s55)))))).yyyx))).w , l_800) != (void*)0) >= 65535UL)) < (((safe_lshift_func_uint16_t_u_s((((p_937->g_88 < ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(250UL, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(255UL, 4UL, (((*l_742) = (~7UL)) , l_803.y), ((VECTOR(uint8_t, 4))(0xC9L)), 1UL)).s15)).xyxx, ((VECTOR(uint8_t, 4))(0xA0L)), ((VECTOR(uint8_t, 4))(255UL))))).wyzxwzzw, ((VECTOR(uint8_t, 8))(0x23L))))), 0x71L, ((VECTOR(uint8_t, 2))(0UL)), 0UL, 0x3BL, 0x81L, 0x73L)), ((VECTOR(uint8_t, 16))(3UL))))).s25, ((VECTOR(uint16_t, 2))(65535UL))))), 0UL, ((VECTOR(uint16_t, 2))(1UL)), 0UL, 0xE024L, 0x4E36L)).s7) >= p_937->g_658.f0) | p_937->g_341.f0.f5), l_784[5][4][0])) >= (*p_937->g_303)) == GROUP_DIVERGE(2, 1)));
                    (*l_813) = func_55((l_779.s1 , (((*l_809) = ((*l_807) = &p_937->g_397[0][0][1])) != (p_937->g_812 = l_811))), p_937);
                    return p_937->g_814;
                }
                for (p_937->g_101.f1 = 18; (p_937->g_101.f1 != 36); p_937->g_101.f1 = safe_add_func_uint16_t_u_u(p_937->g_101.f1, 3))
                { /* block id: 339 */
                    int8_t l_817 = 0L;
                    l_818++;
                }
            }
            else
            { /* block id: 342 */
                int8_t l_825 = 7L;
                int32_t l_831[2];
                int16_t *l_864[1][8] = {{&l_786[2],&l_786[2],&l_786[2],&l_786[2],&l_786[2],&l_786[2],&l_786[2],&l_786[2]}};
                VECTOR(int16_t, 2) l_865 = (VECTOR(int16_t, 2))(0x03A6L, (-1L));
                VECTOR(int16_t, 16) l_867 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int16_t, 2))(0L, (-3L)), (VECTOR(int16_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L));
                VECTOR(uint8_t, 2) l_868 = (VECTOR(uint8_t, 2))(0x4DL, 1UL);
                struct S1 ****l_878 = &l_567;
                struct S1 ****l_881 = &p_937->g_879[0];
                int64_t *l_882 = (void*)0;
                int64_t *l_883 = &p_937->g_590.f2;
                int64_t *l_884 = &p_937->g_537;
                VECTOR(uint32_t, 8) l_885 = (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 6UL), 6UL), 6UL, 4294967286UL, 6UL);
                int32_t **l_892[6] = {(void*)0,&p_937->g_64[0][4],(void*)0,(void*)0,&p_937->g_64[0][4],(void*)0};
                uint16_t *l_897[4][5];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_831[i] = 3L;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_897[i][j] = &p_937->g_220;
                }
                for (p_937->g_762.f1 = 25; (p_937->g_762.f1 <= 18); p_937->g_762.f1 = safe_sub_func_int64_t_s_s(p_937->g_762.f1, 6))
                { /* block id: 345 */
                    int64_t l_830 = 0x7ED99F29C621C3A3L;
                    int32_t l_832 = (-1L);
                    int32_t l_833 = (-1L);
                    int32_t l_834[1];
                    VECTOR(uint8_t, 4) l_854 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0xB4L), 0xB4L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_834[i] = 0x64429DB8L;
                    for (p_937->g_814.f2 = 0; (p_937->g_814.f2 == 5); p_937->g_814.f2 = safe_add_func_uint64_t_u_u(p_937->g_814.f2, 2))
                    { /* block id: 348 */
                        int8_t l_826 = (-8L);
                        int32_t l_835[6];
                        int64_t *l_858[6] = {&p_937->g_589[1].f3,&p_937->g_589[1].f3,&p_937->g_589[1].f3,&p_937->g_589[1].f3,&p_937->g_589[1].f3,&p_937->g_589[1].f3};
                        int i;
                        for (i = 0; i < 6; i++)
                            l_835[i] = 0L;
                        l_827--;
                        --l_836;
                        if (l_835[3])
                            break;
                        (*l_6) ^= (l_839 > ((***p_937->g_186) = (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_937->g_842.s7675433665402402)).s5, (safe_sub_func_int64_t_s_s((p_937->g_845 , (l_835[3] = (l_846[0][0][0] < (((--(*l_742)) == (((VECTOR(uint8_t, 4))(l_849.s6a2d)).w & (safe_sub_func_uint8_t_u_u(((l_834[0] <= l_832) & (((VECTOR(uint8_t, 8))(l_854.zxzywxxy)).s4 >= (***p_937->g_812))), (l_833 |= (p_937->g_392.x > (!((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_937->g_855.sfe)).xxyxyxxyyyyxyxyy)).sd))))))) || ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(p_937->g_856.xyxxxyxyyyxyxyxx)), ((VECTOR(int16_t, 2))(p_937->g_857.s53)).yxyyyyyyxyyyyyxx))).s28)).yxxxyxyyxyyxyxxy, ((VECTOR(int16_t, 2))(0x0A7BL, 0x6070L)).yyxyyyxyxxyxyyyx))).s0)))), (l_826 || ((0x6864ACE7L == l_834[0]) == p_937->g_563.s9))))))));
                    }
                }
                (*p_937->g_63) = func_55((safe_mod_func_int16_t_s_s((p_937->g_845 = ((VECTOR(int16_t, 8))(l_863.s33f9edb5)).s2), ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(l_865.xx)).xxxyxyxyyyxxxyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))((-1L), p_937->g_866, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_867.s6f)).yyxx)))), ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))((-3L), ((VECTOR(int16_t, 16))((GROUP_DIVERGE(0, 1) == (((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(l_868.yyxyxyxxxyxxyyxy)).s42b6, ((VECTOR(uint8_t, 16))((safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((4294967295UL < ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4UL, 0UL)).yxxxxxxxyxxxyyxx)).s8e, (uint32_t)p_937->g_842.s6))))), 1UL, 1UL)).xxzwzyzz, ((VECTOR(uint32_t, 2))(4294967291UL, 0xF508BAF8L)).yxyxxxxx))).lo)).zyxxyxxz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((safe_mod_func_uint64_t_u_u(((*l_732) = (safe_mod_func_uint32_t_u_u(((*l_742) = l_741), (GROUP_DIVERGE(1, 1) , (safe_unary_minus_func_uint32_t_u(l_787[4])))))), (0x73518A471D128203L ^ ((*l_884) ^= (((*l_878) = (void*)0) == ((*l_881) = p_937->g_879[0])))))), ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(l_885.s23107624)).s12, (uint32_t)l_784[1][2][0]))), 0x2F37D40BL)).wzxwwxzw)), 0x838B76A1L, p_937->g_34.f1, ((VECTOR(uint32_t, 2))(0x2D809FB8L)), ((VECTOR(uint32_t, 4))(1UL)))).lo))))).s31, ((VECTOR(uint32_t, 2))(0x93440D62L))))).even) , FAKE_DIVERGE(p_937->group_2_offset, get_group_id(2), 10)), 4294967295UL)) > l_885.s7), 0x8036L)), ((VECTOR(uint8_t, 4))(0x0DL)), (*p_937->g_303), 255UL, ((VECTOR(uint8_t, 4))(0x04L)), 0x10L, ((VECTOR(uint8_t, 2))(0x56L)), 0x05L, 255UL)).s7b36))), ((VECTOR(uint8_t, 4))(253UL)))).s54)).xyxxyyxyxxxyyxyx)).odd)), ((VECTOR(uint8_t, 8))(0UL)), ((VECTOR(uint8_t, 8))(1UL))))).lo)).even, ((VECTOR(uint8_t, 2))(0x62L))))).yxyxxxxyyxxyxyxx)).sc > (*p_937->g_303)) ^ p_937->g_802.y) < p_937->g_524.s2)), ((VECTOR(int16_t, 8))((-7L))), 9L, ((VECTOR(int16_t, 4))(0x62E7L)), 0x3018L, (-1L))).s1, 0x1965L, l_784[4][8][0], (-3L), 0x1F25L, (-10L), (-8L), 0x3175L, l_784[0][4][0], ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x1F47L)), 1L, 0x3570L)).hi, ((VECTOR(int16_t, 8))((-1L)))))), ((VECTOR(int16_t, 4))(0x279BL)), ((VECTOR(int16_t, 2))(0x76F0L)), 0x7F3CL, 0x78A4L)))), ((VECTOR(int16_t, 16))(0x3D5DL)), ((VECTOR(int16_t, 16))(0x648DL))))).sa1d8, ((VECTOR(int16_t, 4))(0x24F1L))))).even, (int16_t)l_741, (int16_t)0x1817L))).yyyy)).zzxzxxwx)), l_868.y, ((VECTOR(int16_t, 4))(1L)), (-1L))).s9c, (int16_t)1L))).yyxxxyyxyxyyxyyy)), ((VECTOR(int16_t, 16))((-1L)))))).s3)), p_937);
                l_782 &= (safe_sub_func_int64_t_s_s(l_868.y, (safe_div_func_int8_t_s_s(((*l_4) &= (((((safe_div_func_int64_t_s_s(((*l_884) = l_825), (*l_6))) < ((&p_937->g_350 != (l_893 = l_892[4])) < l_894)) ^ (((l_715.x = (!((safe_lshift_func_uint16_t_u_u((p_937->g_77.y |= l_846[0][5][2]), 8)) | p_937->g_624))) , (**p_937->g_186)) == l_898[1])) & l_863.s5) , l_863.s2)), l_784[5][4][0]))));
            }
            if ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_899.s5365)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(p_937->g_900.s7f239e3ffba63d10)).se5, ((VECTOR(int32_t, 2))(l_901.s51))))), (*l_6), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x0511L, 0x4ADBL, 0x1B7AL, 0x16B2L)).wwxxwzxx)).s32, ((VECTOR(uint16_t, 8))(l_902.xyyxyxyy)).s75))).even, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_903.xxzxxxxyzwyzwzxz)))).s09)).xyyxxyyy, ((VECTOR(int32_t, 16))(l_904.xyyxxxyyyxyxxxxy)).odd))))).s6 , (safe_mul_func_uint8_t_u_u((*l_6), (((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_937->g_907.s29a2)).hi)).odd , (l_741 , ((((((*l_909) = ((l_782 = (safe_unary_minus_func_uint64_t_u(0x9BF7DE6BC550C573L))) , (void*)0)) != (p_937->g_915 = (p_937->g_914 = &p_937->g_189))) , ((l_916 <= ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(l_917.zxyzwxxy)).odd, ((VECTOR(uint16_t, 16))(l_918.zzwyxzwzwxwwxxyx)).s8d91))).zzyxyyzyzwzzzyyz, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_919.zy)), 0x601CL, 0x6997L)).zwyxyyzxyzywwyyx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_920.sf8e1da89)).odd)).zzwyxxwxyzwyywxw))).hi)).s24, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_937->g_921.wx)).xyxyyyxxyyyxyyxy)).s74))).yyxyyyyyyyyyxxxx))).odd))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x6891L, (((*l_922) = l_902.y) != (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((void*)0 == &p_937->g_472), p_937->g_35[0][0][0].f2, 0x07E6L, FAKE_DIVERGE(p_937->local_0_offset, get_local_id(0), 10), 0UL, 65532UL, 1UL, 0x167FL)).lo)).w != 0x5B4EL)), ((VECTOR(uint16_t, 4))(0xEF9BL)), 0x738AL, 2UL)).s76)).xyyxyxyyxxxyxxyx)).odd, ((VECTOR(uint16_t, 8))(1UL))))).s6) , p_937->g_524.s3)) , l_741) != 0x40L))) , p_937->g_658.f4) , (***p_937->g_812))))))
            { /* block id: 378 */
                return p_937->g_923;
            }
            else
            { /* block id: 380 */
                for (l_626 = 0; (l_626 < 35); l_626 = safe_add_func_uint8_t_u_u(l_626, 6))
                { /* block id: 383 */
                    (*p_937->g_661) = p_937->g_926[0];
                    return p_937->g_927[7][0];
                }
            }
            l_929--;
            (*p_937->g_350) ^= ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(p_937->g_934.xyxx)).y, 10)) >= (safe_rshift_func_int16_t_s_u((*l_6), 12)));
        }
        else
        { /* block id: 390 */
            return p_937->g_927[7][0];
        }
        (*p_937->g_880) = (*l_492);
    }
    return p_937->g_590;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_5 p_937->g_7 p_937->g_26 p_937->g_comm_values p_937->l_comm_values p_937->g_33 p_937->g_35 p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_64 p_937->g_67 p_937->g_74 p_937->g_61 p_937->g_77 p_937->g_11 p_937->g_101 p_937->g_102 p_937->g_121 p_937->g_122.f1 p_937->g_186 p_937->g_187 p_937->g_188 p_937->g_222 p_937->g_88 p_937->g_129 p_937->g_220 p_937->g_246 p_937->g_274 p_937->g_303 p_937->g_347 p_937->g_350 p_937->g_392 p_937->g_397 p_937->g_407 p_937->g_409 p_937->g_341.f0 p_937->g_413 p_937->g_428 p_937->g_310 p_937->g_34.f1 p_937->g_122.f0 p_937->g_275 p_937->g_467 p_937->g_472
 * writes: p_937->g_7 p_937->g_26 p_937->g_34 p_937->g_58 p_937->g_64 p_937->g_61 p_937->g_11 p_937->g_74 p_937->g_88 p_937->g_33.f1 p_937->g_5 p_937->g_35 p_937->g_189 p_937->g_190 p_937->g_122.f1 p_937->g_77 p_937->g_121 p_937->g_222 p_937->g_129 p_937->g_223.f1 p_937->g_247 p_937->g_101.f1 p_937->g_397 p_937->g_310 p_937->g_409 p_937->g_341.f0.f3 p_937->g_122 p_937->g_304
 */
int8_t ** func_8(int8_t * p_9, struct S4 * p_937)
{ /* block id: 8 */
    int32_t l_16[5][2][8] = {{{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L},{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L}},{{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L},{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L}},{{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L},{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L}},{{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L},{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L}},{{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L},{0x54EC7E31L,1L,0x6F37911BL,(-10L),1L,(-10L),0x6F37911BL,1L}}};
    int32_t **l_457 = &p_937->g_64[2][0];
    uint64_t *l_462 = (void*)0;
    uint64_t *l_463 = (void*)0;
    VECTOR(int8_t, 4) l_466 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6CL), 0x6CL);
    uint16_t *l_470 = (void*)0;
    uint16_t *l_471 = (void*)0;
    int i, j, k;
    (*l_457) = func_12(l_16[4][0][4], &p_937->g_7, (*p_9), p_937);
    (*p_937->g_121) = (*p_937->g_59);
    for (p_937->g_88 = 0; (p_937->g_88 >= 16); p_937->g_88 = safe_add_func_int16_t_s_s(p_937->g_88, 7))
    { /* block id: 195 */
        if ((*p_937->g_350))
            break;
    }
    (*p_937->g_472) = ((((safe_mul_func_uint16_t_u_u((p_937->g_77.y = ((((VECTOR(int8_t, 2))(0x30L, 0x31L)).hi && ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((*p_937->g_303) = l_16[0][1][5]), 9UL, ((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(((l_16[3][0][3] = (*p_937->g_274)) >= (safe_rshift_func_int8_t_s_u((*p_9), 3))), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_466.xzxyywywxxwwyyxz)).s3054)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0x63L)), 0x62L, 0x6BL)).odd))), 0x78L)), ((VECTOR(uint8_t, 2))(p_937->g_467.xy)), 1UL)), 5UL, (+((p_937->g_35[0][0][0].f2 , &p_937->g_220) != (void*)0)), (**p_937->g_187), 0UL, 6UL, 0x5CL)).s8492))).xzwxxzxzzwyxywxx)))).s6) ^ (safe_div_func_uint64_t_u_u((((void*)0 == &p_937->g_88) , l_466.z), l_466.w)))), GROUP_DIVERGE(0, 1))) == 3UL) , l_466.y) | 0x2B0A51C3L);
    return &p_937->g_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_7 p_937->g_26 p_937->g_comm_values p_937->l_comm_values p_937->g_33 p_937->g_35 p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_64 p_937->g_67 p_937->g_74 p_937->g_5 p_937->g_61 p_937->g_77 p_937->g_11 p_937->g_101 p_937->g_102 p_937->g_121 p_937->g_122.f1 p_937->g_186 p_937->g_187 p_937->g_188 p_937->g_222 p_937->g_88 p_937->g_129 p_937->g_220 p_937->g_246 p_937->g_274 p_937->g_303 p_937->g_347 p_937->g_350 p_937->g_392 p_937->g_397 p_937->g_407 p_937->g_409 p_937->g_341.f0 p_937->g_413 p_937->g_428 p_937->g_310 p_937->g_34.f1 p_937->g_122.f0
 * writes: p_937->g_7 p_937->g_26 p_937->g_34 p_937->g_58 p_937->g_64 p_937->g_61 p_937->g_11 p_937->g_74 p_937->g_88 p_937->g_33.f1 p_937->g_5 p_937->g_35 p_937->g_189 p_937->g_190 p_937->g_122.f1 p_937->g_77 p_937->g_121 p_937->g_222 p_937->g_129 p_937->g_223.f1 p_937->g_247 p_937->g_101.f1 p_937->g_397 p_937->g_310 p_937->g_409 p_937->g_341.f0.f3
 */
int32_t * func_12(uint16_t  p_13, int32_t * p_14, int8_t  p_15, struct S4 * p_937)
{ /* block id: 9 */
    uint8_t *l_300 = (void*)0;
    int32_t l_302 = 0x5FE482D0L;
    uint8_t *l_305 = (void*)0;
    int32_t l_307 = (-4L);
    int32_t l_433 = 5L;
    int32_t l_435 = 0x021B36E5L;
    int32_t l_436 = 1L;
    VECTOR(int32_t, 4) l_437 = (VECTOR(int32_t, 4))(0x0BF84F8FL, (VECTOR(int32_t, 2))(0x0BF84F8FL, 1L), 1L);
    int64_t l_439[9][7] = {{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L},{0x30781316025DAB0DL,9L,0x43C4541B8A28164AL,9L,0x30781316025DAB0DL,0x30781316025DAB0DL,9L}};
    int32_t l_440 = 0x119511C7L;
    int32_t l_441 = 0x75D4CFE8L;
    uint64_t l_442 = 0x594564CCF9BC4E99L;
    int32_t *l_445 = &l_302;
    int32_t *l_446 = &l_307;
    int32_t *l_447 = (void*)0;
    int32_t *l_448 = &l_435;
    int32_t *l_449 = &l_435;
    int32_t *l_450 = &l_307;
    int32_t *l_451 = &l_433;
    int32_t *l_452 = &l_435;
    int32_t *l_453 = &l_440;
    uint8_t l_454 = 255UL;
    int i, j;
    for (p_15 = 0; (p_15 <= (-5)); p_15--)
    { /* block id: 12 */
        uint8_t *l_25 = &p_937->g_26[0][0][0];
        VECTOR(int16_t, 16) l_45 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 9L), 9L), 9L, (-3L), 9L, (VECTOR(int16_t, 2))((-3L), 9L), (VECTOR(int16_t, 2))((-3L), 9L), (-3L), 9L, (-3L), 9L);
        int16_t *l_48 = &p_937->g_35[0][0][0].f2;
        uint8_t **l_297 = (void*)0;
        uint8_t *l_299 = &p_937->g_223.f1;
        uint8_t **l_298 = &l_299;
        int32_t *l_301[9];
        int8_t *l_309 = &p_937->g_310[0];
        int8_t **l_308 = &l_309;
        int32_t l_434 = 0x2FEDC053L;
        int32_t l_438 = 0x0967B2B0L;
        int i;
        for (i = 0; i < 9; i++)
            l_301[i] = &p_937->g_61;
        (*p_937->g_59) = ((((*p_14) &= (-4L)) >= func_19((--(*l_25)), p_13, ((func_29(&p_937->g_5, p_937->g_comm_values[p_937->tid], p_937) , (-6L)) , (func_36(((l_302 = (l_25 != (l_300 = ((*l_298) = func_41(((((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_45.s24405c6dfa21eb82)).sdd)).xyyyxyyyxyxyyxyx)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((0x4391DAA6L | ((safe_mul_func_int16_t_s_s(((*l_48) = 0x14E4L), p_15)) , FAKE_DIVERGE(p_937->local_1_offset, get_local_id(1), 10))), 5L, 0x27EAL, ((VECTOR(int16_t, 2))(7L)), (-1L), 0L, 0x3E66L)).s3776023025226214)).even))).s5 , 0x502FCEF8L) == (-7L)), p_14, l_45.s7, p_937))))) == 1L), p_937->g_303, l_305, p_14, p_937) || 0x217BL)), l_307, l_308, p_937)) , (*p_937->g_59));
        ++l_442;
    }
    l_454++;
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_5 p_937->g_33.f1 p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_347 p_937->g_88 p_937->g_350 p_937->g_61 p_937->g_74 p_937->g_35 p_937->g_392 p_937->g_397 p_937->g_407 p_937->g_409 p_937->g_341.f0 p_937->g_413 p_937->g_428 p_937->g_310 p_937->g_77 p_937->g_122.f1 p_937->g_34.f1 p_937->g_122.f0
 * writes: p_937->g_5 p_937->g_33.f1 p_937->g_58 p_937->g_64 p_937->g_88 p_937->g_61 p_937->g_74 p_937->g_35 p_937->g_397 p_937->g_310 p_937->g_409 p_937->g_341.f0.f3
 */
uint32_t  func_19(uint8_t  p_20, uint16_t  p_21, int32_t  p_22, int64_t  p_23, int8_t ** p_24, struct S4 * p_937)
{ /* block id: 117 */
    union U2 *l_343 = &p_937->g_341;
    int8_t **l_346 = &p_937->g_11;
    int32_t l_357 = 0x266918ABL;
    int32_t l_358 = 6L;
    int32_t l_369 = 0x222FC003L;
    int32_t l_371 = 0x54242EEAL;
    int32_t l_372[9][5][5] = {{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}},{{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L},{0L,0x212778C0L,0x0D2A02A4L,(-5L),0x0D2A02A4L}}};
    int32_t l_411[5];
    int64_t l_423 = (-9L);
    int64_t l_429 = 0x51DA20224874AF0EL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_411[i] = 0L;
    for (p_937->g_5 = 0; (p_937->g_5 != (-7)); p_937->g_5--)
    { /* block id: 120 */
        union U2 *l_340[8] = {&p_937->g_341,&p_937->g_341,&p_937->g_341,&p_937->g_341,&p_937->g_341,&p_937->g_341,&p_937->g_341,&p_937->g_341};
        union U2 **l_342[1];
        int i;
        for (i = 0; i < 1; i++)
            l_342[i] = (void*)0;
        if ((atomic_inc(&p_937->g_atomic_input[8 * get_linear_group_id() + 1]) == 2))
        { /* block id: 122 */
            uint8_t l_313 = 0x8FL;
            VECTOR(int64_t, 2) l_314 = (VECTOR(int64_t, 2))(0x4DF2F93B74952DC8L, (-1L));
            VECTOR(int64_t, 16) l_315 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3658798CC1B15179L), 0x3658798CC1B15179L), 0x3658798CC1B15179L, 0L, 0x3658798CC1B15179L, (VECTOR(int64_t, 2))(0L, 0x3658798CC1B15179L), (VECTOR(int64_t, 2))(0L, 0x3658798CC1B15179L), 0L, 0x3658798CC1B15179L, 0L, 0x3658798CC1B15179L);
            union U2 l_316 = {{0x2EA7CCC55746121AL,-3L,0x4980L,-1L,0x633F18DFF73FE5DDL,0x4D90FE9BA69A8903L,-8L}};/* VOLATILE GLOBAL l_316 */
            union U2 l_317 = {{0x7DA33C6EA5808736L,0x3284L,0x5A01L,9L,0x2C0F7C6CBDAD3AD9L,0x2B5CDF32F65BBFF3L,0x3B3D6549L}};/* VOLATILE GLOBAL l_317 */
            int64_t l_318[5][7] = {{0L,0x0EBD85918FF0B397L,0L,0L,0x0EBD85918FF0B397L,0L,0L},{0L,0x0EBD85918FF0B397L,0L,0L,0x0EBD85918FF0B397L,0L,0L},{0L,0x0EBD85918FF0B397L,0L,0L,0x0EBD85918FF0B397L,0L,0L},{0L,0x0EBD85918FF0B397L,0L,0L,0x0EBD85918FF0B397L,0L,0L},{0L,0x0EBD85918FF0B397L,0L,0L,0x0EBD85918FF0B397L,0L,0L}};
            VECTOR(int8_t, 8) l_319 = (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L);
            uint64_t l_320 = 0x892E7B89689C4531L;
            VECTOR(int8_t, 4) l_321 = (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, (-5L)), (-5L));
            VECTOR(int8_t, 2) l_322 = (VECTOR(int8_t, 2))(0x72L, 4L);
            VECTOR(int8_t, 8) l_323 = (VECTOR(int8_t, 8))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, (-5L)), (-5L)), (-5L), 0x16L, (-5L));
            VECTOR(int8_t, 2) l_324 = (VECTOR(int8_t, 2))((-1L), 0x67L);
            VECTOR(int8_t, 4) l_325 = (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 2L), 2L);
            VECTOR(int8_t, 2) l_326 = (VECTOR(int8_t, 2))((-1L), 3L);
            VECTOR(int8_t, 16) l_327 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5AL), 0x5AL), 0x5AL, 0L, 0x5AL, (VECTOR(int8_t, 2))(0L, 0x5AL), (VECTOR(int8_t, 2))(0L, 0x5AL), 0L, 0x5AL, 0L, 0x5AL);
            uint64_t l_328 = 4UL;
            uint32_t l_329 = 0x934032C8L;
            uint64_t l_330 = 5UL;
            uint64_t l_331 = 0UL;
            int32_t l_332 = 0x4C903916L;
            uint16_t l_333 = 1UL;
            struct S1 l_334[4] = {{0x2C0BL,0xC9L},{0x2C0BL,0xC9L},{0x2C0BL,0xC9L},{0x2C0BL,0xC9L}};
            union U2 l_335 = {{-2L,0x314AL,0x31B0L,6L,0x07859915F8ECFF05L,0x1FBBD50D57B6DC8CL,0x333A5F8AL}};/* VOLATILE GLOBAL l_335 */
            int32_t *l_336 = (void*)0;
            int32_t l_338 = 1L;
            int32_t *l_337 = &l_338;
            int32_t l_339 = (-1L);
            int i, j;
            l_314.x &= (l_313 = 0x2DA9AE9DL);
            l_334[0] = ((((VECTOR(int64_t, 4))(l_315.s1587)).w , (l_316 , (GROUP_DIVERGE(0, 1) , 0x39DDL))) , (l_317 , ((((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x07L, 0x10L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_318[0][2], 0x55L, 5L, 0L, 0L, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_319.s3712)).hi, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7BL, 0x58L)), 0L, 0x78L)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(l_320, 0x61L, 0x37L, (-1L))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_321.yw)).xxxyyxxyxyxxxxxx)).sd73e))).hi))))), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(l_322.yxxxyxxyxyyxyxyy)).odd, ((VECTOR(int8_t, 2))(0x42L, 0x3BL)).yyyxyyxx))).s17, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_323.s7372342077652643)))).s83)))))).yyxy))), ((VECTOR(int8_t, 2))(l_324.yy)), ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_325.zzzy)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_326.yx)).yxyxyyyy)))).even)), ((VECTOR(int8_t, 4))(l_327.se9df))))), 1L)))).sd6)), (-10L), (-1L))), 3L, (-2L))), l_328, ((l_331 = (l_330 = l_329)) , l_332), l_333, ((VECTOR(int8_t, 2))((-6L))), 1L, 1L, (-1L))))).hi, ((VECTOR(int8_t, 8))(0x04L)), ((VECTOR(int8_t, 8))(0x18L))))).s7 , 1L) , l_334[0])));
            l_337 = (l_335 , l_336);
            l_339 ^= (-1L);
            unsigned int result = 0;
            result += l_313;
            result += l_314.y;
            result += l_314.x;
            result += l_315.sf;
            result += l_315.se;
            result += l_315.sd;
            result += l_315.sc;
            result += l_315.sb;
            result += l_315.sa;
            result += l_315.s9;
            result += l_315.s8;
            result += l_315.s7;
            result += l_315.s6;
            result += l_315.s5;
            result += l_315.s4;
            result += l_315.s3;
            result += l_315.s2;
            result += l_315.s1;
            result += l_315.s0;
            result += l_316.f0.f0;
            result += l_316.f0.f1;
            result += l_316.f0.f2;
            result += l_316.f0.f3;
            result += l_316.f0.f4;
            result += l_316.f0.f5;
            result += l_316.f0.f6;
            result += l_316.f1;
            result += l_316.f2;
            result += l_316.f3;
            result += l_317.f0.f0;
            result += l_317.f0.f1;
            result += l_317.f0.f2;
            result += l_317.f0.f3;
            result += l_317.f0.f4;
            result += l_317.f0.f5;
            result += l_317.f0.f6;
            result += l_317.f1;
            result += l_317.f2;
            result += l_317.f3;
            int l_318_i0, l_318_i1;
            for (l_318_i0 = 0; l_318_i0 < 5; l_318_i0++) {
                for (l_318_i1 = 0; l_318_i1 < 7; l_318_i1++) {
                    result += l_318[l_318_i0][l_318_i1];
                }
            }
            result += l_319.s7;
            result += l_319.s6;
            result += l_319.s5;
            result += l_319.s4;
            result += l_319.s3;
            result += l_319.s2;
            result += l_319.s1;
            result += l_319.s0;
            result += l_320;
            result += l_321.w;
            result += l_321.z;
            result += l_321.y;
            result += l_321.x;
            result += l_322.y;
            result += l_322.x;
            result += l_323.s7;
            result += l_323.s6;
            result += l_323.s5;
            result += l_323.s4;
            result += l_323.s3;
            result += l_323.s2;
            result += l_323.s1;
            result += l_323.s0;
            result += l_324.y;
            result += l_324.x;
            result += l_325.w;
            result += l_325.z;
            result += l_325.y;
            result += l_325.x;
            result += l_326.y;
            result += l_326.x;
            result += l_327.sf;
            result += l_327.se;
            result += l_327.sd;
            result += l_327.sc;
            result += l_327.sb;
            result += l_327.sa;
            result += l_327.s9;
            result += l_327.s8;
            result += l_327.s7;
            result += l_327.s6;
            result += l_327.s5;
            result += l_327.s4;
            result += l_327.s3;
            result += l_327.s2;
            result += l_327.s1;
            result += l_327.s0;
            result += l_328;
            result += l_329;
            result += l_330;
            result += l_331;
            result += l_332;
            result += l_333;
            int l_334_i0;
            for (l_334_i0 = 0; l_334_i0 < 4; l_334_i0++) {
                result += l_334[l_334_i0].f0;
                result += l_334[l_334_i0].f1;
            }
            result += l_335.f0.f0;
            result += l_335.f0.f1;
            result += l_335.f0.f2;
            result += l_335.f0.f3;
            result += l_335.f0.f4;
            result += l_335.f0.f5;
            result += l_335.f0.f6;
            result += l_335.f1;
            result += l_335.f2;
            result += l_335.f3;
            result += l_338;
            result += l_339;
            atomic_add(&p_937->g_special_values[8 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 130 */
            (1 + 1);
        }
        l_343 = l_340[0];
    }
    for (p_937->g_33.f1 = (-7); (p_937->g_33.f1 > 5); p_937->g_33.f1++)
    { /* block id: 137 */
        (*p_937->g_347) = func_52(l_346, p_937);
        if (p_23)
            continue;
    }
    for (p_937->g_88 = (-7); (p_937->g_88 <= 36); p_937->g_88 = safe_add_func_int64_t_s_s(p_937->g_88, 7))
    { /* block id: 143 */
        uint16_t l_359 = 0xD466L;
        int32_t *l_364[3];
        int16_t l_374 = 0L;
        uint64_t l_375 = 18446744073709551615UL;
        uint32_t l_430 = 1UL;
        uint8_t l_432 = 0x6CL;
        int i;
        for (i = 0; i < 3; i++)
            l_364[i] = &p_937->g_61;
        (*p_937->g_350) ^= (0x76DFL <= 0xBFD0L);
        for (p_937->g_74 = 0; (p_937->g_74 >= 32); ++p_937->g_74)
        { /* block id: 147 */
            int32_t *l_353 = &p_937->g_61;
            int32_t *l_354 = &p_937->g_61;
            int32_t *l_355 = &p_937->g_61;
            int32_t *l_356[8][6] = {{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61},{&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61,&p_937->g_61}};
            int i, j;
            l_359--;
            (*l_353) &= l_357;
        }
        for (p_23 = 0; (p_23 != 24); p_23 = safe_add_func_int8_t_s_s(p_23, 7))
        { /* block id: 153 */
            int32_t **l_365 = (void*)0;
            int32_t **l_366 = &p_937->g_64[4][3];
            int32_t l_367 = 0x286BF70BL;
            int32_t l_368 = 0x77FE9932L;
            int32_t l_370[3];
            int32_t l_373 = 0x4B66D989L;
            uint8_t **l_395[9];
            uint64_t *l_418 = (void*)0;
            uint64_t *l_419[5];
            int32_t *l_422 = &p_937->g_341.f0.f3;
            int8_t *l_431 = &p_937->g_5;
            int i;
            for (i = 0; i < 3; i++)
                l_370[i] = 0x6E3BB3ABL;
            for (i = 0; i < 9; i++)
                l_395[i] = &p_937->g_303;
            for (i = 0; i < 5; i++)
                l_419[i] = &p_937->g_409;
            (*l_366) = l_364[1];
            l_375++;
            for (l_373 = (-26); (l_373 >= (-18)); l_373++)
            { /* block id: 158 */
                uint16_t l_408 = 65535UL;
                if (p_23)
                    break;
                if ((atomic_inc(&p_937->l_atomic_input[7]) == 3))
                { /* block id: 161 */
                    int32_t l_380 = 1L;
                    uint64_t l_381 = 0x559F8177A7EEA5C9L;
                    l_381 |= ((l_380 = (-1L)) , 0x67694CC1L);
                    unsigned int result = 0;
                    result += l_380;
                    result += l_381;
                    atomic_add(&p_937->l_special_values[7], result);
                }
                else
                { /* block id: 164 */
                    (1 + 1);
                }
                p_937->g_35[0][1][1] = p_937->g_35[0][0][5];
                for (l_357 = 4; (l_357 == (-8)); --l_357)
                { /* block id: 170 */
                    uint8_t ***l_396 = &l_395[4];
                    uint8_t ***l_398 = &p_937->g_397[0][1][1];
                    int32_t l_410 = 5L;
                    int32_t *l_412 = &p_937->g_61;
                    l_412 = func_55((safe_rshift_func_int8_t_s_u(((GROUP_DIVERGE(1, 1) > (safe_div_func_uint32_t_u_u((0x33EBL != (+(0x0FL == (safe_rshift_func_int8_t_s_u(((**p_24) = (safe_add_func_uint64_t_u_u(0x734C24D7582D03FFL, (((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 4))(((void*)0 == &p_937->g_11), ((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 4))(p_937->g_392.yyxy)).even, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(0xF01A904E50B78FBFL, (safe_add_func_int64_t_s_s(((((*l_396) = l_395[7]) == ((*l_398) = p_937->g_397[0][1][1])) ^ ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((p_937->g_35[0][1][4] , ((safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(65526UL, 0x0353L)).yyxxxyxxyxxyyyyy, ((VECTOR(uint16_t, 8))(p_937->g_407.xyxyxwyy)).s6060564113073560, ((VECTOR(uint16_t, 2))(0x099EL, 65530UL)).yxyxyxxxxyxyxxxx))).s4, (l_408 , p_22))), p_21)) , 0x38L)), p_937->g_409)), l_410)) > 1L)), 0xA878E1EB56D4231FL)), 0UL, ((VECTOR(uint64_t, 8))(0x44A02A54E571CB56L)), 0x4A494A3481F0E779L, 0x450D95D24656725EL, p_23, 1UL, 18446744073709551615UL)))).s67))), 0x06D7C374A7284F1CL)).xxwzxwzz, ((VECTOR(uint64_t, 8))(0UL)), ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s4 | l_410)))), l_411[4]))))), 4294967294UL))) >= p_20), 2)), p_937);
                    (*p_937->g_413) = p_937->g_341.f0;
                }
            }
            l_432 |= ((safe_add_func_uint64_t_u_u(p_22, (p_937->g_409 |= (safe_rshift_func_int8_t_s_s(((void*)0 != &p_937->g_102), 7))))) || ((*l_431) = ((**p_24) = (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((((*l_422) = 1L) , p_21) != (((l_423 == (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 16))(p_20, 0x592B33DF54FF36FDL, (((((p_937->g_428 , (-5L)) != (**p_24)) && l_429) , p_22) <= p_937->g_77.x), p_22, ((VECTOR(int64_t, 2))(0x09BD20A343F9D9CBL)), 0x73CE2C9171E5D4F4L, 0x3B35694B5A915D7BL, p_937->g_77.x, l_430, 0L, ((VECTOR(int64_t, 2))(0x7C69B6B5D7D163C8L)), p_23, 0x6A3B01297489F152L, 0x7A2851D284EB7232L)).hi, ((VECTOR(int64_t, 8))(0x23941A26595764D0L))))).s3255764473656630, ((VECTOR(int64_t, 16))(0L))))).sb < p_937->g_88), p_20)), p_937->g_122[0][5].f1))) , 6L) != p_937->g_34.f1)), 0x7B95L, 0x9F02L, 0x1491L)).z, p_20)))));
        }
    }
    return p_937->g_122[0][5].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->l_comm_values p_937->g_33 p_937->g_35
 * writes: p_937->g_34
 */
struct S0  func_29(int8_t * p_30, int64_t  p_31, struct S4 * p_937)
{ /* block id: 15 */
    int32_t *l_32[7];
    int i;
    for (i = 0; i < 7; i++)
        l_32[i] = (void*)0;
    p_937->g_34 = (((!((void*)0 != l_32[1])) > p_937->l_comm_values[(safe_mod_func_uint32_t_u_u(p_937->tid, 4))]) , p_937->g_33);
    return p_937->g_35[0][0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_74
 * writes:
 */
int16_t  func_36(int32_t  p_37, uint8_t * p_38, uint8_t * p_39, int32_t * p_40, struct S4 * p_937)
{ /* block id: 114 */
    VECTOR(int32_t, 16) l_306 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x38130341L), 0x38130341L), 0x38130341L, 0L, 0x38130341L, (VECTOR(int32_t, 2))(0L, 0x38130341L), (VECTOR(int32_t, 2))(0L, 0x38130341L), 0L, 0x38130341L, 0L, 0x38130341L);
    int i;
    l_306.s1 = ((VECTOR(int32_t, 2))(l_306.s1c)).odd;
    return p_937->g_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_64 p_937->g_67 p_937->g_61 p_937->g_74 p_937->g_5 p_937->g_35.f6 p_937->g_77 p_937->g_11 p_937->g_101 p_937->g_102 p_937->g_33.f1 p_937->g_121 p_937->g_35.f0 p_937->g_comm_values p_937->g_35.f2 p_937->g_122.f1 p_937->l_comm_values p_937->g_33 p_937->g_35 p_937->g_186 p_937->g_187 p_937->g_188 p_937->g_222 p_937->g_88 p_937->g_129 p_937->g_220 p_937->g_246 p_937->g_274 p_937->g_290
 * writes: p_937->g_58 p_937->g_64 p_937->g_61 p_937->g_11 p_937->g_74 p_937->g_88 p_937->g_34 p_937->g_33.f1 p_937->g_5 p_937->g_35 p_937->g_189 p_937->g_190 p_937->g_122.f1 p_937->g_77 p_937->g_121 p_937->g_222 p_937->g_129 p_937->g_223.f1 p_937->g_247 p_937->g_101.f1 p_937->g_comm_values
 */
uint8_t * func_41(uint32_t  p_42, int32_t * p_43, int64_t  p_44, struct S4 * p_937)
{ /* block id: 19 */
    int16_t l_51 = (-1L);
    int8_t *l_72 = &p_937->g_5;
    uint32_t *l_82 = &p_937->g_74;
    uint8_t *l_99 = (void*)0;
    VECTOR(uint8_t, 4) l_127 = (VECTOR(uint8_t, 4))(0x65L, (VECTOR(uint8_t, 2))(0x65L, 1UL), 1UL);
    int32_t l_148 = 8L;
    int32_t l_150 = 0x34652B22L;
    int32_t l_152[10] = {0x46CF5502L,0x35325306L,0x46CF5502L,0x46CF5502L,0x35325306L,0x46CF5502L,0x46CF5502L,0x35325306L,0x46CF5502L,0x46CF5502L};
    int32_t l_156 = 0x1EDB2723L;
    VECTOR(uint64_t, 8) l_179 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x019E2E3184226F6AL), 0x019E2E3184226F6AL), 0x019E2E3184226F6AL, 18446744073709551609UL, 0x019E2E3184226F6AL);
    uint16_t l_245 = 5UL;
    struct S1 **l_250 = &p_937->g_121;
    int16_t l_255 = 9L;
    uint64_t *l_276 = (void*)0;
    VECTOR(uint16_t, 4) l_281 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x680DL), 0x680DL);
    VECTOR(int16_t, 2) l_291 = (VECTOR(int16_t, 2))(0x7BAEL, 2L);
    int64_t *l_292[1][9][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t *l_293[1][7] = {{&l_150,&p_937->g_61,&l_150,&l_150,&p_937->g_61,&l_150,&l_150}};
    int16_t l_294 = 0x0453L;
    struct S0 *l_295[7] = {&p_937->g_35[0][1][6],&p_937->g_35[0][1][6],&p_937->g_35[0][1][6],&p_937->g_35[0][1][6],&p_937->g_35[0][1][6],&p_937->g_35[0][1][6],&p_937->g_35[0][1][6]};
    uint8_t l_296 = 0x18L;
    int i, j, k;
    (*p_937->g_67) = func_49(l_51, p_937);
    for (p_937->g_61 = 0; (p_937->g_61 <= (-23)); p_937->g_61 = safe_sub_func_int32_t_s_s(p_937->g_61, 4))
    { /* block id: 32 */
        int8_t *l_70[1][6][10] = {{{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5},{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5},{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5},{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5},{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5},{&p_937->g_5,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,(void*)0,&p_937->g_5,&p_937->g_5,&p_937->g_5}}};
        int8_t **l_71 = &p_937->g_11;
        uint32_t *l_73 = &p_937->g_74;
        uint32_t **l_83 = &l_73;
        uint32_t *l_85 = (void*)0;
        uint32_t **l_84 = &l_85;
        int32_t l_86 = 0x32EE097EL;
        uint32_t *l_87 = &p_937->g_88;
        int32_t *l_89 = &l_86;
        int32_t l_149 = (-5L);
        int32_t l_151 = 9L;
        int32_t l_153 = 0x5ABC1D56L;
        int32_t l_155 = 0x6058B558L;
        VECTOR(int64_t, 4) l_166 = (VECTOR(int64_t, 4))(0x10CA2A5FB302614CL, (VECTOR(int64_t, 2))(0x10CA2A5FB302614CL, 0x535BF5C7731CCDA1L), 0x535BF5C7731CCDA1L);
        VECTOR(uint64_t, 2) l_177 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xC17C50ED043E5B95L);
        int64_t l_244 = 0x132F4C1B1E60F4A2L;
        int32_t *l_259[3][8][9] = {{{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149}},{{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149}},{{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149},{&l_149,&l_149,&l_148,&l_149,&l_156,(void*)0,&l_151,&l_155,&l_149}}};
        int i, j, k;
        (*l_89) = (((*l_73) ^= (((*l_71) = l_70[0][3][8]) == l_72)) , (safe_mod_func_int16_t_s_s((((VECTOR(uint16_t, 16))(p_937->g_77.yxxyxxyxxxxxyyyy)).s5 != (((((p_42 , (safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((l_82 = p_43) != ((*l_84) = ((*l_83) = func_52(&p_937->g_11, p_937)))), (~4UL))), p_937->g_5))) >= ((*l_87) = ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(0xD401126FL, 0x016CB793L)).xxxy, ((VECTOR(uint32_t, 2))(0x123D7E63L, 4294967295UL)).xyxy, ((VECTOR(uint32_t, 8))(((void*)0 == p_937->g_11), l_86, 0x885461A8L, 0x64EC0B5BL, p_937->g_77.x, 0UL, 0xCED03213L, 0UL)).lo))).y)) >= FAKE_DIVERGE(p_937->local_2_offset, get_local_id(2), 10)) | GROUP_DIVERGE(1, 1)) , p_937->g_35[0][0][0].f6)), p_42)));
        for (p_937->g_88 = 0; (p_937->g_88 != 41); p_937->g_88 = safe_add_func_uint16_t_u_u(p_937->g_88, 8))
        { /* block id: 42 */
            uint64_t l_94 = 0x4396DDFF55CBB879L;
            uint8_t **l_100 = &l_99;
            int32_t l_105 = (-5L);
            int32_t l_131 = 0x4B4AC7E9L;
            int32_t l_154 = 0x202D44F0L;
            uint64_t l_157 = 18446744073709551615UL;
            int64_t *l_160 = (void*)0;
            int16_t *l_163 = &l_51;
            int64_t *l_165 = (void*)0;
            struct S0 *l_174 = &p_937->g_35[0][1][3];
            int64_t *l_191 = (void*)0;
            int64_t *l_192 = (void*)0;
            int64_t *l_193[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_196 = 0x2E0FEB04L;
            uint64_t *l_199 = &l_157;
            uint32_t *l_208 = &p_937->g_74;
            uint16_t *l_219[1][1];
            VECTOR(uint16_t, 8) l_221 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x4FFDL), 0x4FFDL), 0x4FFDL, 5UL, 0x4FFDL);
            struct S1 **l_224[4][4] = {{(void*)0,(void*)0,(void*)0,&p_937->g_222[5]},{(void*)0,(void*)0,(void*)0,&p_937->g_222[5]},{(void*)0,(void*)0,(void*)0,&p_937->g_222[5]},{(void*)0,(void*)0,(void*)0,&p_937->g_222[5]}};
            VECTOR(int8_t, 8) l_233 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1BL), 0x1BL), 0x1BL, (-1L), 0x1BL);
            int16_t l_234 = 0x2DFAL;
            VECTOR(int8_t, 8) l_239 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 9L), 9L), 9L, 1L, 9L);
            uint32_t *l_242[8][9];
            uint32_t l_243[7][1][9] = {{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}},{{4294967288UL,4UL,9UL,0UL,9UL,4UL,4294967288UL,3UL,0xC6F9AE73L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_219[i][j] = &p_937->g_220;
            }
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 9; j++)
                    l_242[i][j] = &p_937->g_129;
            }
            if ((((0xE8L > ((void*)0 != l_85)) , (1L ^ ((p_937->g_61 , l_94) , p_937->g_77.x))) & (p_44 != (safe_mul_func_uint8_t_u_u((((*l_100) = (((safe_sub_func_uint64_t_u_u((*l_89), p_937->g_74)) < 0x1A6A6FFDE101195FL) , l_99)) != p_937->g_11), p_42)))))
            { /* block id: 44 */
                (*p_937->g_102) = p_937->g_101;
                l_105 &= (&p_937->g_74 != ((safe_sub_func_uint8_t_u_u(p_937->g_35[0][0][0].f6, 0x4BL)) , p_43));
            }
            else
            { /* block id: 47 */
                uint8_t *l_114[1];
                uint32_t *l_128 = &p_937->g_129;
                VECTOR(int32_t, 8) l_130 = (VECTOR(int32_t, 8))(0x3A9CC650L, (VECTOR(int32_t, 4))(0x3A9CC650L, (VECTOR(int32_t, 2))(0x3A9CC650L, 0x4280C29DL), 0x4280C29DL), 0x4280C29DL, 0x3A9CC650L, 0x4280C29DL);
                int32_t l_132 = 0x762CD2BEL;
                int i;
                for (i = 0; i < 1; i++)
                    l_114[i] = &p_937->g_34.f1;
                if ((*l_89))
                    break;
                if (((((safe_mul_func_int16_t_s_s((p_42 & ((((((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), p_44)) == (safe_rshift_func_uint8_t_u_s((p_937->g_33.f1++), (l_132 ^= ((p_937->g_101.f0 , &l_70[0][3][8]) != (((l_131 &= (safe_add_func_int8_t_s_s(0x13L, (((*l_72) = (safe_sub_func_int64_t_s_s(((void*)0 == p_937->g_121), (safe_lshift_func_uint16_t_u_s((((((VECTOR(int64_t, 16))(1L, 0x5B78BF6E46630374L, (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(l_127.xyxyyxyx)), ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(255UL, 0x05L)).xxxy, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(0x38L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(8UL, ((((((~((*l_128) = (l_105 == l_94))) < 0UL) | l_130.s7) , p_937->g_34.f1) , 8L) | (*l_89)), p_937->g_74, ((VECTOR(uint8_t, 2))(0xEDL)), 0x7DL, 0x7FL, 1UL)).even)), ((VECTOR(uint8_t, 4))(9UL)), GROUP_DIVERGE(2, 1), GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 2))(0x91L)), ((VECTOR(uint8_t, 2))(0UL)), 0xB7L)).lo, ((VECTOR(uint8_t, 8))(0x6EL))))).hi))).xxwyxzwz))).s0, 0x42L)), p_44, ((VECTOR(int64_t, 4))(0L)), 0L, p_42, ((VECTOR(int64_t, 4))(0x403D8830F4877578L)), 0x5B77992E5D78F825L, 0x418936BB2FC288D6L)).sf | (*l_89)) < p_44) & l_105), l_94))))) || 0x4FL)))) && 7L) , (void*)0)))))) >= p_937->g_35[0][0][0].f0), (*l_89))) > (*l_89)) > p_937->g_comm_values[p_937->tid]) & 0x28926566451E17A1L) >= 250UL) <= 0L)), l_105)) , p_937->g_35[0][0][0].f0) <= (-3L)) ^ GROUP_DIVERGE(1, 1)))
                { /* block id: 54 */
                    int8_t **l_135 = &l_70[0][3][8];
                    uint8_t ***l_136 = &l_100;
                    int16_t *l_137 = &l_51;
                    (*l_89) ^= (p_937->g_35[0][0][0].f2 || (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(0x805CL, ((l_127.w , &l_70[0][1][9]) == l_135), 0x5EEBL, 65535UL)).zxwwzxwywzzyywyw))).s1, (p_937->g_122[0][5].f1 != ((*l_137) = (((*l_136) = &l_99) != (void*)0))))));
                    if (l_105)
                        break;
                }
                else
                { /* block id: 59 */
                    int32_t *l_138 = &l_105;
                    int32_t *l_139 = (void*)0;
                    int32_t *l_140 = &l_132;
                    int32_t *l_141 = (void*)0;
                    int32_t *l_142 = &l_86;
                    int32_t *l_143 = (void*)0;
                    int32_t *l_144 = &l_86;
                    int32_t *l_145 = (void*)0;
                    int32_t *l_146 = &l_86;
                    int32_t *l_147[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_147[i] = (void*)0;
                    l_157--;
                }
                (*l_89) ^= 2L;
            }
            (*l_174) = func_29((*l_71), ((p_44 &= 0x3C88BFD10A0710ADL) > (safe_lshift_func_uint8_t_u_s(((((((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))((-1L), (l_150 ^= (((*l_163) = ((void*)0 == &p_937->g_11)) == ((safe_unary_minus_func_int64_t_s(p_42)) > p_937->g_58.f1))), 0x493C28935D499BF4L, 1L)).wzxwxyzyzyzwxwxx, ((VECTOR(int64_t, 8))(l_166.yzxwxxxy)).s0637024532145235))).sc | (p_937->l_comm_values[(safe_mod_func_uint32_t_u_u(p_937->tid, 4))] , (safe_unary_minus_func_uint64_t_u((((safe_mul_func_uint16_t_u_u((l_156 & ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((*l_72) |= p_937->g_101.f1) , l_127.w), p_42)) != p_937->g_101.f1), 1)) <= p_937->g_33.f1)), p_937->g_101.f1)) != l_94) , p_42))))) && l_152[2]) , 1L) || p_42), 0))), p_937);
            l_196 &= ((safe_add_func_int8_t_s_s(p_44, (((l_105 |= (((((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(l_177.yxyy)).yzzyyyzxywywwwyy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 8))(p_937->g_178.s93243408)).s5217750541603452, ((VECTOR(uint32_t, 2))(0xF97DC129L, 0UL)).yyxxxyyxyxxyxyxy))).s6e)).xyxxyyxxyxyxxxyx))).sacb4, ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_179.s2667533351526110)).s99)), 0x599D9CE8B853B961L, 0xA363AFEA6F2518C5L)).yywzyxwyxyzxzwyw))).s58aa))).x , ((safe_lshift_func_int8_t_s_s(p_42, ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_937->g_186 == &p_937->g_187), p_42)), ((l_154 = ((p_937->g_189 = l_82) != (p_937->g_190 = ((*l_83) = func_49(p_42, p_937))))) | ((safe_lshift_func_int16_t_s_u(1L, 14)) && l_157)))) >= (*l_89)))) > l_179.s1)) > 1UL) < GROUP_DIVERGE(1, 1))) > (*l_89)) >= 0x2AL))) | FAKE_DIVERGE(p_937->local_0_offset, get_local_id(0), 10));
            (*l_89) = (safe_add_func_uint64_t_u_u(((*l_199) = (((**p_937->g_187) ^= l_196) ^ (*l_89))), (p_937->g_247 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((++(*l_208)) , (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((++p_937->g_77.x), ((((((safe_rshift_func_int8_t_s_u((p_937->g_35[0][0][0].f0 || (l_150 ^= p_42)), (((VECTOR(uint16_t, 16))(l_221.s4311263252103071)).s9 != ((p_937->g_121 = p_937->g_121) == (p_937->g_222[3] = p_937->g_222[5]))))) >= (safe_add_func_uint64_t_u_u((((safe_mod_func_int16_t_s_s(((p_937->g_223.f1 = ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_937->g_101.f1, 2)) || ((VECTOR(int8_t, 16))(l_233.s6154552013710205)).s8), ((*l_72) &= ((l_234 | ((((((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((p_937->g_129 &= (l_148 = ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(l_239.s03073072)), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))((safe_sub_func_int32_t_s_s(0x04A42141L, (*l_89))), 6L, 0x43L, 0L))))).xxzywzwy))), ((VECTOR(int8_t, 8))(0x71L))))))).s1, l_154, 0L, p_44, (*l_89), 0x71L, ((VECTOR(int8_t, 4))(8L)), ((VECTOR(int8_t, 2))((-5L))), ((VECTOR(int8_t, 2))((-3L))), 0x09L, (-7L))).sf && l_234) , p_937->g_88))), l_179.s1)) > p_937->g_35[0][0][0].f3), p_44)) > 2UL) & p_937->g_35[0][0][0].f2) <= (-5L)) ^ 0x42L) | p_44)) ^ 3UL)))) , p_42)) ^ (-1L)), l_243[4][0][2])) , l_244) & (-5L)), p_42))) < l_152[4]) > p_44) , 4UL) & (-2L)))), p_937->g_220))), l_245)), p_937->g_246)), p_42)), p_937->g_220)))));
        }
        if (p_42)
            break;
        l_156 = ((0x9DA0C82F17672787L & (((safe_sub_func_int32_t_s_s(((void*)0 == l_250), ((VECTOR(int32_t, 4))(0x176321C2L, (((safe_mod_func_int8_t_s_s(((((*l_89) = (safe_sub_func_int16_t_s_s((p_937->g_35[0][0][0].f2 &= ((VECTOR(int16_t, 4))(0x2299L, 0x26D3L, (-4L), 0x0BEBL)).x), p_44))) & l_255) , (safe_unary_minus_func_uint64_t_u(((*l_89) == l_156)))), ((((safe_div_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), p_42)) > 0x7315DB4AL) >= l_177.y) || p_937->g_35[0][0][0].f4))) | p_937->g_35[0][0][0].f0) ^ p_44), 1L, (-3L))).w)) <= p_44) , p_42)) >= l_179.s0);
    }
    for (p_937->g_101.f1 = 0; (p_937->g_101.f1 > 53); p_937->g_101.f1++)
    { /* block id: 96 */
        int32_t *l_262 = &l_148;
        int16_t *l_265 = (void*)0;
        int16_t *l_266 = &p_937->g_35[0][0][0].f2;
        l_262 = func_52(&l_72, p_937);
        if ((p_42 <= (safe_add_func_int16_t_s_s(((*l_266) = p_937->g_33.f0), 65526UL))))
        { /* block id: 99 */
            return l_72;
        }
        else
        { /* block id: 101 */
            int32_t *l_267 = &l_148;
            l_150 = ((*l_267) = (-10L));
            return p_937->g_11;
        }
    }
    l_296 |= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_937->group_1_offset, get_group_id(1), 10), (((safe_add_func_int64_t_s_s(((p_937->g_274 != l_276) < ((safe_mul_func_int16_t_s_s((l_127.y , l_245), (FAKE_DIVERGE(p_937->local_1_offset, get_local_id(1), 10) , ((l_294 &= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(1UL, 0x94C5C5D7L)), 0xC9280EBAL, (p_937->g_33.f1 == p_937->g_77.y), ((VECTOR(uint32_t, 8))(0x0B517CF0L, (((!GROUP_DIVERGE(0, 1)) || l_255) <= (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(1L, 0x29L)).even, (((p_937->g_comm_values[p_937->tid] = (((VECTOR(uint16_t, 16))(l_281.zzywzywzxyyxxywx)).s8 || ((((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s((((VECTOR(int16_t, 2))(p_937->g_290.yy)).even || ((VECTOR(int16_t, 2))(l_291.xy)).odd), p_937->g_88)) | l_291.x), l_127.y)) > 0L) <= 0x3E51L), 7)), 65535UL)) <= p_937->g_101.f1) , l_281.y) , (void*)0) == &p_937->g_11) , p_42))) ^ 0x080CFF04916E8AA6L) >= GROUP_DIVERGE(1, 1))))), l_291.x, ((VECTOR(uint32_t, 4))(0x7D5CF267L)), 4294967295UL)), ((VECTOR(uint32_t, 4))(0x8663B4D1L)))).lo)).s3 | l_291.x)) , (-1L))))) , p_44)), 6UL)) , l_295[2]) == (void*)0))), p_937->l_comm_values[(safe_mod_func_uint32_t_u_u(p_937->tid, 4))]));
    return p_937->g_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_58 p_937->g_59 p_937->g_63 p_937->g_64
 * writes: p_937->g_58 p_937->g_64
 */
int32_t * func_49(uint16_t  p_50, struct S4 * p_937)
{ /* block id: 20 */
    int8_t **l_54 = (void*)0;
    int32_t **l_66 = &p_937->g_64[0][3];
    (*l_66) = func_52(l_54, p_937);
    return (*p_937->g_63);
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_58 p_937->g_59 p_937->g_63
 * writes: p_937->g_58 p_937->g_64
 */
int32_t * func_52(int8_t ** p_53, struct S4 * p_937)
{ /* block id: 21 */
    uint8_t l_57 = 0xB9L;
    int32_t **l_62 = (void*)0;
    int32_t *l_65[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*p_937->g_63) = func_55(l_57, p_937);
    return l_65[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_937->g_58 p_937->g_59
 * writes: p_937->g_58
 */
int32_t * func_55(int64_t  p_56, struct S4 * p_937)
{ /* block id: 22 */
    int32_t *l_60 = &p_937->g_61;
    (*p_937->g_59) = p_937->g_58;
    return l_60;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S4 c_938;
    struct S4* p_937 = &c_938;
    struct S4 c_939 = {
        (-10L), // p_937->g_5
        0x198AB545L, // p_937->g_7
        (void*)0, // p_937->g_11
        {{{250UL,250UL,250UL,250UL}},{{250UL,250UL,250UL,250UL}},{{250UL,250UL,250UL,250UL}}}, // p_937->g_26
        {1UL,5UL}, // p_937->g_33
        {0x2124L,0UL}, // p_937->g_34
        {{{{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL}},{{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x003F8612730C4096L,-2L,0x4946L,-6L,0x7E44AADAB70C6870L,0x422F2FDD0459084CL,2L},{0x0E0D3184BAFC8D67L,1L,-1L,3L,0x31AB372C247AFAE8L,0L,0x0F96066EL}}}}, // p_937->g_35
        {0UL,0xF5L}, // p_937->g_58
        &p_937->g_58, // p_937->g_59
        0x6BE7A02FL, // p_937->g_61
        {{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0},{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0},{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0},{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0},{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0},{&p_937->g_61,(void*)0,(void*)0,&p_937->g_61,(void*)0,&p_937->g_61,(void*)0,(void*)0}}, // p_937->g_64
        &p_937->g_64[0][3], // p_937->g_63
        &p_937->g_64[0][3], // p_937->g_67
        0x5ED1F7F3L, // p_937->g_74
        (VECTOR(uint16_t, 2))(0xA332L, 0xBD82L), // p_937->g_77
        0xD1870219L, // p_937->g_88
        {0x5596L,251UL}, // p_937->g_101
        &p_937->g_34, // p_937->g_102
        {{{65535UL,1UL},{0x59FDL,247UL},{65535UL,1UL},{65535UL,1UL},{0x59FDL,247UL},{65535UL,1UL},{65535UL,1UL}}}, // p_937->g_122
        &p_937->g_122[0][5], // p_937->g_121
        0x7BBAC150L, // p_937->g_129
        (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x178ACB9FL), 0x178ACB9FL), 0x178ACB9FL, 4294967291UL, 0x178ACB9FL, (VECTOR(uint32_t, 2))(4294967291UL, 0x178ACB9FL), (VECTOR(uint32_t, 2))(4294967291UL, 0x178ACB9FL), 4294967291UL, 0x178ACB9FL, 4294967291UL, 0x178ACB9FL), // p_937->g_178
        &p_937->g_122[0][5].f1, // p_937->g_188
        &p_937->g_188, // p_937->g_187
        &p_937->g_187, // p_937->g_186
        &p_937->g_74, // p_937->g_189
        &p_937->g_74, // p_937->g_190
        2UL, // p_937->g_220
        {0xD748L,0xD7L}, // p_937->g_223
        {&p_937->g_223,&p_937->g_223,&p_937->g_223,&p_937->g_223,&p_937->g_223,&p_937->g_223,&p_937->g_223}, // p_937->g_222
        0x57885118L, // p_937->g_246
        0UL, // p_937->g_247
        {{{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL}},{{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL},{18446744073709551614UL,18446744073709551614UL}}}, // p_937->g_275
        &p_937->g_275[1][5][0], // p_937->g_274
        (VECTOR(int16_t, 2))(0x45E2L, (-5L)), // p_937->g_290
        0x9CL, // p_937->g_304
        &p_937->g_304, // p_937->g_303
        {0x7FL,0x7FL,0x7FL,0x7FL}, // p_937->g_310
        {{0x22D110966B84EDE6L,0x226CL,0x35BEL,0x4E2D2513L,0x5A87A4DF89FAFED6L,0L,6L}}, // p_937->g_341
        &p_937->g_64[3][5], // p_937->g_347
        &p_937->g_61, // p_937->g_350
        (VECTOR(uint64_t, 2))(4UL, 1UL), // p_937->g_392
        {{{&p_937->g_303,&p_937->g_303},{&p_937->g_303,&p_937->g_303}},{{&p_937->g_303,&p_937->g_303},{&p_937->g_303,&p_937->g_303}}}, // p_937->g_397
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), // p_937->g_407
        0UL, // p_937->g_409
        &p_937->g_35[0][0][0], // p_937->g_413
        {0xEEC2L,255UL}, // p_937->g_428
        (VECTOR(uint8_t, 2))(0x6AL, 253UL), // p_937->g_467
        &p_937->g_7, // p_937->g_472
        {&p_937->g_11}, // p_937->g_473
        (VECTOR(int32_t, 8))(0x1590B15AL, (VECTOR(int32_t, 4))(0x1590B15AL, (VECTOR(int32_t, 2))(0x1590B15AL, 0x6DC83E4CL), 0x6DC83E4CL), 0x6DC83E4CL, 0x1590B15AL, 0x6DC83E4CL), // p_937->g_490
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_937->g_507
        (VECTOR(int32_t, 4))(0x4CA6ECCDL, (VECTOR(int32_t, 2))(0x4CA6ECCDL, (-1L)), (-1L)), // p_937->g_510
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 7L), 7L), 7L, (-4L), 7L), // p_937->g_523
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int8_t, 2))(1L, 0L), (VECTOR(int8_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_937->g_524
        7L, // p_937->g_537
        {0x752EA2DE08940D19L,-1L,0L,-1L,0x2A7718CFC35F7DA0L,0x3564A1ACF2230FFEL,0x22FB0BA6L}, // p_937->g_556
        &p_937->g_556, // p_937->g_557
        {0x0E62694D39F45008L,-4L,-10L,-1L,1L,7L,0x557A09CEL}, // p_937->g_560
        {0x8044L,252UL}, // p_937->g_562
        (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0x7EC7AE60F221EA9CL), 0x7EC7AE60F221EA9CL), 0x7EC7AE60F221EA9CL, 6UL, 0x7EC7AE60F221EA9CL, (VECTOR(uint64_t, 2))(6UL, 0x7EC7AE60F221EA9CL), (VECTOR(uint64_t, 2))(6UL, 0x7EC7AE60F221EA9CL), 6UL, 0x7EC7AE60F221EA9CL, 6UL, 0x7EC7AE60F221EA9CL), // p_937->g_563
        &p_937->g_121, // p_937->g_565
        &p_937->g_565, // p_937->g_564
        {0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL,0x4DL}, // p_937->g_587
        {{2UL},{2UL}}, // p_937->g_589
        {9UL}, // p_937->g_590
        0x49L, // p_937->g_623
        4294967295UL, // p_937->g_624
        {0xF416L,250UL}, // p_937->g_633
        (VECTOR(uint32_t, 16))(0x10AC40F1L, (VECTOR(uint32_t, 4))(0x10AC40F1L, (VECTOR(uint32_t, 2))(0x10AC40F1L, 0x4B2A4249L), 0x4B2A4249L), 0x4B2A4249L, 0x10AC40F1L, 0x4B2A4249L, (VECTOR(uint32_t, 2))(0x10AC40F1L, 0x4B2A4249L), (VECTOR(uint32_t, 2))(0x10AC40F1L, 0x4B2A4249L), 0x10AC40F1L, 0x4B2A4249L, 0x10AC40F1L, 0x4B2A4249L), // p_937->g_636
        {{&p_937->g_560.f2,&p_937->g_560.f2},{&p_937->g_560.f2,&p_937->g_560.f2}}, // p_937->g_645
        {{1L,0x5583L,-4L,1L,3L,0x5C69C6585868DC89L,0x42847103L}}, // p_937->g_657
        {0x497C1AA5D362850AL,-3L,7L,0L,9L,0x0F73DF3B2FD9C772L,0x3070D6BDL}, // p_937->g_658
        &p_937->g_35[0][0][0], // p_937->g_661
        {{0x255CA850L,0x255CA850L,0x255CA850L,0x255CA850L,0x255CA850L,0x255CA850L,0x255CA850L,0x255CA850L}}, // p_937->g_692
        {&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1],&p_937->g_64[0][1]}, // p_937->g_696
        (VECTOR(uint8_t, 2))(0xFDL, 253UL), // p_937->g_702
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_937->g_710
        &p_937->g_710[1][0], // p_937->g_709
        (void*)0, // p_937->g_723
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x16L), 0x16L), 0x16L, 1UL, 0x16L, (VECTOR(uint8_t, 2))(1UL, 0x16L), (VECTOR(uint8_t, 2))(1UL, 0x16L), 1UL, 0x16L, 1UL, 0x16L), // p_937->g_735
        (VECTOR(uint8_t, 2))(0x9AL, 7UL), // p_937->g_737
        (VECTOR(uint8_t, 8))(0x8EL, (VECTOR(uint8_t, 4))(0x8EL, (VECTOR(uint8_t, 2))(0x8EL, 0x23L), 0x23L), 0x23L, 0x8EL, 0x23L), // p_937->g_738
        {{1UL,0x02L},{0xF5B1L,0UL},{8UL,0xF5L},{0xF5B1L,0UL},{1UL,0x02L},{1UL,0x02L},{0xF5B1L,0UL},{8UL,0xF5L},{0xF5B1L,0UL},{1UL,0x02L}}, // p_937->g_761
        {0x2115L,0xDFL}, // p_937->g_762
        {1UL,0x35L}, // p_937->g_763
        {{{{0x8A5FL,0xC1L},{0x8A5FL,0xC1L},{0x8A5FL,0xC1L},{0x8A5FL,0xC1L}},{{0x8A5FL,0xC1L},{0x8A5FL,0xC1L},{0x8A5FL,0xC1L},{0x8A5FL,0xC1L}}}}, // p_937->g_764
        {{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}},{{6UL,0xA2L},{0x3139L,0xA3L},{65535UL,251UL},{6UL,0xA2L},{0x6EF8L,251UL},{0xC69CL,0UL},{0xC69CL,0UL},{0x6EF8L,251UL},{6UL,0xA2L},{65535UL,251UL}}}, // p_937->g_765
        {{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL},{0UL,1UL}}, // p_937->g_766
        {6UL,0x58L}, // p_937->g_767
        {{0x7640L,1UL},{0x7640L,1UL}}, // p_937->g_768
        {1UL,0xB5L}, // p_937->g_769
        {65535UL,1UL}, // p_937->g_770
        {1UL,255UL}, // p_937->g_771
        {0x4EBAL,0x7AL}, // p_937->g_772
        (VECTOR(int32_t, 2))(0x04E1376FL, 0x12246829L), // p_937->g_798
        (VECTOR(int32_t, 2))(0x12DD3A5BL, 0x6368E0A5L), // p_937->g_799
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x0F0A7566L), 0x0F0A7566L), // p_937->g_802
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2ADB2719L), 0x2ADB2719L), // p_937->g_804
        &p_937->g_397[1][0][1], // p_937->g_812
        {4294967292UL}, // p_937->g_814
        (VECTOR(int8_t, 8))(0x5DL, (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0x61L), 0x61L), 0x61L, 0x5DL, 0x61L), // p_937->g_842
        0x4F09L, // p_937->g_845
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_937->g_855
        (VECTOR(int16_t, 2))(0x5F70L, 0x0137L), // p_937->g_856
        (VECTOR(int16_t, 16))(0x016EL, (VECTOR(int16_t, 4))(0x016EL, (VECTOR(int16_t, 2))(0x016EL, (-7L)), (-7L)), (-7L), 0x016EL, (-7L), (VECTOR(int16_t, 2))(0x016EL, (-7L)), (VECTOR(int16_t, 2))(0x016EL, (-7L)), 0x016EL, (-7L), 0x016EL, (-7L)), // p_937->g_857
        0x6A97F0F2L, // p_937->g_866
        &p_937->g_222[5], // p_937->g_880
        {&p_937->g_880,&p_937->g_880}, // p_937->g_879
        (VECTOR(int32_t, 16))(0x5A985E08L, (VECTOR(int32_t, 4))(0x5A985E08L, (VECTOR(int32_t, 2))(0x5A985E08L, 0L), 0L), 0L, 0x5A985E08L, 0L, (VECTOR(int32_t, 2))(0x5A985E08L, 0L), (VECTOR(int32_t, 2))(0x5A985E08L, 0L), 0x5A985E08L, 0L, 0x5A985E08L, 0L), // p_937->g_900
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2DE8L), 0x2DE8L), 0x2DE8L, 0L, 0x2DE8L, (VECTOR(int16_t, 2))(0L, 0x2DE8L), (VECTOR(int16_t, 2))(0L, 0x2DE8L), 0L, 0x2DE8L, 0L, 0x2DE8L), // p_937->g_907
        &p_937->g_190, // p_937->g_914
        &p_937->g_189, // p_937->g_915
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65532UL), 65532UL), // p_937->g_921
        {0xE5F076D2L}, // p_937->g_923
        {{0x145EB472FBEC90A8L,1L,-10L,-10L,0x2D56E3A8115B63F6L,0x4B4DE0FB0475A3F6L,-1L},{0x145EB472FBEC90A8L,1L,-10L,-10L,0x2D56E3A8115B63F6L,0x4B4DE0FB0475A3F6L,-1L},{0x145EB472FBEC90A8L,1L,-10L,-10L,0x2D56E3A8115B63F6L,0x4B4DE0FB0475A3F6L,-1L},{0x145EB472FBEC90A8L,1L,-10L,-10L,0x2D56E3A8115B63F6L,0x4B4DE0FB0475A3F6L,-1L}}, // p_937->g_926
        {{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}},{{0UL},{9UL},{0UL},{0UL},{9UL},{0UL}}}, // p_937->g_927
        (VECTOR(int16_t, 2))(6L, 0L), // p_937->g_934
        0, // p_937->v_collective
        sequence_input[get_global_id(0)], // p_937->global_0_offset
        sequence_input[get_global_id(1)], // p_937->global_1_offset
        sequence_input[get_global_id(2)], // p_937->global_2_offset
        sequence_input[get_local_id(0)], // p_937->local_0_offset
        sequence_input[get_local_id(1)], // p_937->local_1_offset
        sequence_input[get_local_id(2)], // p_937->local_2_offset
        sequence_input[get_group_id(0)], // p_937->group_0_offset
        sequence_input[get_group_id(1)], // p_937->group_1_offset
        sequence_input[get_group_id(2)], // p_937->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_937->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_938 = c_939;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_937);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_937->g_5, "p_937->g_5", print_hash_value);
    transparent_crc(p_937->g_7, "p_937->g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_937->g_26[i][j][k], "p_937->g_26[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_937->g_33.f0, "p_937->g_33.f0", print_hash_value);
    transparent_crc(p_937->g_33.f1, "p_937->g_33.f1", print_hash_value);
    transparent_crc(p_937->g_34.f0, "p_937->g_34.f0", print_hash_value);
    transparent_crc(p_937->g_34.f1, "p_937->g_34.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_937->g_35[i][j][k].f0, "p_937->g_35[i][j][k].f0", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f1, "p_937->g_35[i][j][k].f1", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f2, "p_937->g_35[i][j][k].f2", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f3, "p_937->g_35[i][j][k].f3", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f4, "p_937->g_35[i][j][k].f4", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f5, "p_937->g_35[i][j][k].f5", print_hash_value);
                transparent_crc(p_937->g_35[i][j][k].f6, "p_937->g_35[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_937->g_58.f0, "p_937->g_58.f0", print_hash_value);
    transparent_crc(p_937->g_58.f1, "p_937->g_58.f1", print_hash_value);
    transparent_crc(p_937->g_61, "p_937->g_61", print_hash_value);
    transparent_crc(p_937->g_74, "p_937->g_74", print_hash_value);
    transparent_crc(p_937->g_77.x, "p_937->g_77.x", print_hash_value);
    transparent_crc(p_937->g_77.y, "p_937->g_77.y", print_hash_value);
    transparent_crc(p_937->g_88, "p_937->g_88", print_hash_value);
    transparent_crc(p_937->g_101.f0, "p_937->g_101.f0", print_hash_value);
    transparent_crc(p_937->g_101.f1, "p_937->g_101.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_937->g_122[i][j].f0, "p_937->g_122[i][j].f0", print_hash_value);
            transparent_crc(p_937->g_122[i][j].f1, "p_937->g_122[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(p_937->g_129, "p_937->g_129", print_hash_value);
    transparent_crc(p_937->g_178.s0, "p_937->g_178.s0", print_hash_value);
    transparent_crc(p_937->g_178.s1, "p_937->g_178.s1", print_hash_value);
    transparent_crc(p_937->g_178.s2, "p_937->g_178.s2", print_hash_value);
    transparent_crc(p_937->g_178.s3, "p_937->g_178.s3", print_hash_value);
    transparent_crc(p_937->g_178.s4, "p_937->g_178.s4", print_hash_value);
    transparent_crc(p_937->g_178.s5, "p_937->g_178.s5", print_hash_value);
    transparent_crc(p_937->g_178.s6, "p_937->g_178.s6", print_hash_value);
    transparent_crc(p_937->g_178.s7, "p_937->g_178.s7", print_hash_value);
    transparent_crc(p_937->g_178.s8, "p_937->g_178.s8", print_hash_value);
    transparent_crc(p_937->g_178.s9, "p_937->g_178.s9", print_hash_value);
    transparent_crc(p_937->g_178.sa, "p_937->g_178.sa", print_hash_value);
    transparent_crc(p_937->g_178.sb, "p_937->g_178.sb", print_hash_value);
    transparent_crc(p_937->g_178.sc, "p_937->g_178.sc", print_hash_value);
    transparent_crc(p_937->g_178.sd, "p_937->g_178.sd", print_hash_value);
    transparent_crc(p_937->g_178.se, "p_937->g_178.se", print_hash_value);
    transparent_crc(p_937->g_178.sf, "p_937->g_178.sf", print_hash_value);
    transparent_crc(p_937->g_220, "p_937->g_220", print_hash_value);
    transparent_crc(p_937->g_223.f0, "p_937->g_223.f0", print_hash_value);
    transparent_crc(p_937->g_223.f1, "p_937->g_223.f1", print_hash_value);
    transparent_crc(p_937->g_246, "p_937->g_246", print_hash_value);
    transparent_crc(p_937->g_247, "p_937->g_247", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_937->g_275[i][j][k], "p_937->g_275[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_937->g_290.x, "p_937->g_290.x", print_hash_value);
    transparent_crc(p_937->g_290.y, "p_937->g_290.y", print_hash_value);
    transparent_crc(p_937->g_304, "p_937->g_304", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_937->g_310[i], "p_937->g_310[i]", print_hash_value);

    }
    transparent_crc(p_937->g_341.f0.f0, "p_937->g_341.f0.f0", print_hash_value);
    transparent_crc(p_937->g_341.f0.f1, "p_937->g_341.f0.f1", print_hash_value);
    transparent_crc(p_937->g_341.f0.f2, "p_937->g_341.f0.f2", print_hash_value);
    transparent_crc(p_937->g_341.f0.f3, "p_937->g_341.f0.f3", print_hash_value);
    transparent_crc(p_937->g_341.f0.f4, "p_937->g_341.f0.f4", print_hash_value);
    transparent_crc(p_937->g_341.f0.f5, "p_937->g_341.f0.f5", print_hash_value);
    transparent_crc(p_937->g_341.f0.f6, "p_937->g_341.f0.f6", print_hash_value);
    transparent_crc(p_937->g_392.x, "p_937->g_392.x", print_hash_value);
    transparent_crc(p_937->g_392.y, "p_937->g_392.y", print_hash_value);
    transparent_crc(p_937->g_407.x, "p_937->g_407.x", print_hash_value);
    transparent_crc(p_937->g_407.y, "p_937->g_407.y", print_hash_value);
    transparent_crc(p_937->g_407.z, "p_937->g_407.z", print_hash_value);
    transparent_crc(p_937->g_407.w, "p_937->g_407.w", print_hash_value);
    transparent_crc(p_937->g_409, "p_937->g_409", print_hash_value);
    transparent_crc(p_937->g_428.f0, "p_937->g_428.f0", print_hash_value);
    transparent_crc(p_937->g_428.f1, "p_937->g_428.f1", print_hash_value);
    transparent_crc(p_937->g_467.x, "p_937->g_467.x", print_hash_value);
    transparent_crc(p_937->g_467.y, "p_937->g_467.y", print_hash_value);
    transparent_crc(p_937->g_490.s0, "p_937->g_490.s0", print_hash_value);
    transparent_crc(p_937->g_490.s1, "p_937->g_490.s1", print_hash_value);
    transparent_crc(p_937->g_490.s2, "p_937->g_490.s2", print_hash_value);
    transparent_crc(p_937->g_490.s3, "p_937->g_490.s3", print_hash_value);
    transparent_crc(p_937->g_490.s4, "p_937->g_490.s4", print_hash_value);
    transparent_crc(p_937->g_490.s5, "p_937->g_490.s5", print_hash_value);
    transparent_crc(p_937->g_490.s6, "p_937->g_490.s6", print_hash_value);
    transparent_crc(p_937->g_490.s7, "p_937->g_490.s7", print_hash_value);
    transparent_crc(p_937->g_507.s0, "p_937->g_507.s0", print_hash_value);
    transparent_crc(p_937->g_507.s1, "p_937->g_507.s1", print_hash_value);
    transparent_crc(p_937->g_507.s2, "p_937->g_507.s2", print_hash_value);
    transparent_crc(p_937->g_507.s3, "p_937->g_507.s3", print_hash_value);
    transparent_crc(p_937->g_507.s4, "p_937->g_507.s4", print_hash_value);
    transparent_crc(p_937->g_507.s5, "p_937->g_507.s5", print_hash_value);
    transparent_crc(p_937->g_507.s6, "p_937->g_507.s6", print_hash_value);
    transparent_crc(p_937->g_507.s7, "p_937->g_507.s7", print_hash_value);
    transparent_crc(p_937->g_510.x, "p_937->g_510.x", print_hash_value);
    transparent_crc(p_937->g_510.y, "p_937->g_510.y", print_hash_value);
    transparent_crc(p_937->g_510.z, "p_937->g_510.z", print_hash_value);
    transparent_crc(p_937->g_510.w, "p_937->g_510.w", print_hash_value);
    transparent_crc(p_937->g_523.s0, "p_937->g_523.s0", print_hash_value);
    transparent_crc(p_937->g_523.s1, "p_937->g_523.s1", print_hash_value);
    transparent_crc(p_937->g_523.s2, "p_937->g_523.s2", print_hash_value);
    transparent_crc(p_937->g_523.s3, "p_937->g_523.s3", print_hash_value);
    transparent_crc(p_937->g_523.s4, "p_937->g_523.s4", print_hash_value);
    transparent_crc(p_937->g_523.s5, "p_937->g_523.s5", print_hash_value);
    transparent_crc(p_937->g_523.s6, "p_937->g_523.s6", print_hash_value);
    transparent_crc(p_937->g_523.s7, "p_937->g_523.s7", print_hash_value);
    transparent_crc(p_937->g_524.s0, "p_937->g_524.s0", print_hash_value);
    transparent_crc(p_937->g_524.s1, "p_937->g_524.s1", print_hash_value);
    transparent_crc(p_937->g_524.s2, "p_937->g_524.s2", print_hash_value);
    transparent_crc(p_937->g_524.s3, "p_937->g_524.s3", print_hash_value);
    transparent_crc(p_937->g_524.s4, "p_937->g_524.s4", print_hash_value);
    transparent_crc(p_937->g_524.s5, "p_937->g_524.s5", print_hash_value);
    transparent_crc(p_937->g_524.s6, "p_937->g_524.s6", print_hash_value);
    transparent_crc(p_937->g_524.s7, "p_937->g_524.s7", print_hash_value);
    transparent_crc(p_937->g_524.s8, "p_937->g_524.s8", print_hash_value);
    transparent_crc(p_937->g_524.s9, "p_937->g_524.s9", print_hash_value);
    transparent_crc(p_937->g_524.sa, "p_937->g_524.sa", print_hash_value);
    transparent_crc(p_937->g_524.sb, "p_937->g_524.sb", print_hash_value);
    transparent_crc(p_937->g_524.sc, "p_937->g_524.sc", print_hash_value);
    transparent_crc(p_937->g_524.sd, "p_937->g_524.sd", print_hash_value);
    transparent_crc(p_937->g_524.se, "p_937->g_524.se", print_hash_value);
    transparent_crc(p_937->g_524.sf, "p_937->g_524.sf", print_hash_value);
    transparent_crc(p_937->g_537, "p_937->g_537", print_hash_value);
    transparent_crc(p_937->g_556.f0, "p_937->g_556.f0", print_hash_value);
    transparent_crc(p_937->g_556.f1, "p_937->g_556.f1", print_hash_value);
    transparent_crc(p_937->g_556.f2, "p_937->g_556.f2", print_hash_value);
    transparent_crc(p_937->g_556.f3, "p_937->g_556.f3", print_hash_value);
    transparent_crc(p_937->g_556.f4, "p_937->g_556.f4", print_hash_value);
    transparent_crc(p_937->g_556.f5, "p_937->g_556.f5", print_hash_value);
    transparent_crc(p_937->g_556.f6, "p_937->g_556.f6", print_hash_value);
    transparent_crc(p_937->g_560.f0, "p_937->g_560.f0", print_hash_value);
    transparent_crc(p_937->g_560.f1, "p_937->g_560.f1", print_hash_value);
    transparent_crc(p_937->g_560.f2, "p_937->g_560.f2", print_hash_value);
    transparent_crc(p_937->g_560.f3, "p_937->g_560.f3", print_hash_value);
    transparent_crc(p_937->g_560.f4, "p_937->g_560.f4", print_hash_value);
    transparent_crc(p_937->g_560.f5, "p_937->g_560.f5", print_hash_value);
    transparent_crc(p_937->g_560.f6, "p_937->g_560.f6", print_hash_value);
    transparent_crc(p_937->g_562.f0, "p_937->g_562.f0", print_hash_value);
    transparent_crc(p_937->g_562.f1, "p_937->g_562.f1", print_hash_value);
    transparent_crc(p_937->g_563.s0, "p_937->g_563.s0", print_hash_value);
    transparent_crc(p_937->g_563.s1, "p_937->g_563.s1", print_hash_value);
    transparent_crc(p_937->g_563.s2, "p_937->g_563.s2", print_hash_value);
    transparent_crc(p_937->g_563.s3, "p_937->g_563.s3", print_hash_value);
    transparent_crc(p_937->g_563.s4, "p_937->g_563.s4", print_hash_value);
    transparent_crc(p_937->g_563.s5, "p_937->g_563.s5", print_hash_value);
    transparent_crc(p_937->g_563.s6, "p_937->g_563.s6", print_hash_value);
    transparent_crc(p_937->g_563.s7, "p_937->g_563.s7", print_hash_value);
    transparent_crc(p_937->g_563.s8, "p_937->g_563.s8", print_hash_value);
    transparent_crc(p_937->g_563.s9, "p_937->g_563.s9", print_hash_value);
    transparent_crc(p_937->g_563.sa, "p_937->g_563.sa", print_hash_value);
    transparent_crc(p_937->g_563.sb, "p_937->g_563.sb", print_hash_value);
    transparent_crc(p_937->g_563.sc, "p_937->g_563.sc", print_hash_value);
    transparent_crc(p_937->g_563.sd, "p_937->g_563.sd", print_hash_value);
    transparent_crc(p_937->g_563.se, "p_937->g_563.se", print_hash_value);
    transparent_crc(p_937->g_563.sf, "p_937->g_563.sf", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_937->g_587[i], "p_937->g_587[i]", print_hash_value);

    }
    transparent_crc(p_937->g_590.f0, "p_937->g_590.f0", print_hash_value);
    transparent_crc(p_937->g_623, "p_937->g_623", print_hash_value);
    transparent_crc(p_937->g_624, "p_937->g_624", print_hash_value);
    transparent_crc(p_937->g_633.f0, "p_937->g_633.f0", print_hash_value);
    transparent_crc(p_937->g_633.f1, "p_937->g_633.f1", print_hash_value);
    transparent_crc(p_937->g_636.s0, "p_937->g_636.s0", print_hash_value);
    transparent_crc(p_937->g_636.s1, "p_937->g_636.s1", print_hash_value);
    transparent_crc(p_937->g_636.s2, "p_937->g_636.s2", print_hash_value);
    transparent_crc(p_937->g_636.s3, "p_937->g_636.s3", print_hash_value);
    transparent_crc(p_937->g_636.s4, "p_937->g_636.s4", print_hash_value);
    transparent_crc(p_937->g_636.s5, "p_937->g_636.s5", print_hash_value);
    transparent_crc(p_937->g_636.s6, "p_937->g_636.s6", print_hash_value);
    transparent_crc(p_937->g_636.s7, "p_937->g_636.s7", print_hash_value);
    transparent_crc(p_937->g_636.s8, "p_937->g_636.s8", print_hash_value);
    transparent_crc(p_937->g_636.s9, "p_937->g_636.s9", print_hash_value);
    transparent_crc(p_937->g_636.sa, "p_937->g_636.sa", print_hash_value);
    transparent_crc(p_937->g_636.sb, "p_937->g_636.sb", print_hash_value);
    transparent_crc(p_937->g_636.sc, "p_937->g_636.sc", print_hash_value);
    transparent_crc(p_937->g_636.sd, "p_937->g_636.sd", print_hash_value);
    transparent_crc(p_937->g_636.se, "p_937->g_636.se", print_hash_value);
    transparent_crc(p_937->g_636.sf, "p_937->g_636.sf", print_hash_value);
    transparent_crc(p_937->g_657.f0.f0, "p_937->g_657.f0.f0", print_hash_value);
    transparent_crc(p_937->g_657.f0.f1, "p_937->g_657.f0.f1", print_hash_value);
    transparent_crc(p_937->g_657.f0.f2, "p_937->g_657.f0.f2", print_hash_value);
    transparent_crc(p_937->g_657.f0.f3, "p_937->g_657.f0.f3", print_hash_value);
    transparent_crc(p_937->g_657.f0.f4, "p_937->g_657.f0.f4", print_hash_value);
    transparent_crc(p_937->g_657.f0.f5, "p_937->g_657.f0.f5", print_hash_value);
    transparent_crc(p_937->g_657.f0.f6, "p_937->g_657.f0.f6", print_hash_value);
    transparent_crc(p_937->g_658.f0, "p_937->g_658.f0", print_hash_value);
    transparent_crc(p_937->g_658.f1, "p_937->g_658.f1", print_hash_value);
    transparent_crc(p_937->g_658.f2, "p_937->g_658.f2", print_hash_value);
    transparent_crc(p_937->g_658.f3, "p_937->g_658.f3", print_hash_value);
    transparent_crc(p_937->g_658.f4, "p_937->g_658.f4", print_hash_value);
    transparent_crc(p_937->g_658.f5, "p_937->g_658.f5", print_hash_value);
    transparent_crc(p_937->g_658.f6, "p_937->g_658.f6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_937->g_692[i][j], "p_937->g_692[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_937->g_702.x, "p_937->g_702.x", print_hash_value);
    transparent_crc(p_937->g_702.y, "p_937->g_702.y", print_hash_value);
    transparent_crc(p_937->g_735.s0, "p_937->g_735.s0", print_hash_value);
    transparent_crc(p_937->g_735.s1, "p_937->g_735.s1", print_hash_value);
    transparent_crc(p_937->g_735.s2, "p_937->g_735.s2", print_hash_value);
    transparent_crc(p_937->g_735.s3, "p_937->g_735.s3", print_hash_value);
    transparent_crc(p_937->g_735.s4, "p_937->g_735.s4", print_hash_value);
    transparent_crc(p_937->g_735.s5, "p_937->g_735.s5", print_hash_value);
    transparent_crc(p_937->g_735.s6, "p_937->g_735.s6", print_hash_value);
    transparent_crc(p_937->g_735.s7, "p_937->g_735.s7", print_hash_value);
    transparent_crc(p_937->g_735.s8, "p_937->g_735.s8", print_hash_value);
    transparent_crc(p_937->g_735.s9, "p_937->g_735.s9", print_hash_value);
    transparent_crc(p_937->g_735.sa, "p_937->g_735.sa", print_hash_value);
    transparent_crc(p_937->g_735.sb, "p_937->g_735.sb", print_hash_value);
    transparent_crc(p_937->g_735.sc, "p_937->g_735.sc", print_hash_value);
    transparent_crc(p_937->g_735.sd, "p_937->g_735.sd", print_hash_value);
    transparent_crc(p_937->g_735.se, "p_937->g_735.se", print_hash_value);
    transparent_crc(p_937->g_735.sf, "p_937->g_735.sf", print_hash_value);
    transparent_crc(p_937->g_737.x, "p_937->g_737.x", print_hash_value);
    transparent_crc(p_937->g_737.y, "p_937->g_737.y", print_hash_value);
    transparent_crc(p_937->g_738.s0, "p_937->g_738.s0", print_hash_value);
    transparent_crc(p_937->g_738.s1, "p_937->g_738.s1", print_hash_value);
    transparent_crc(p_937->g_738.s2, "p_937->g_738.s2", print_hash_value);
    transparent_crc(p_937->g_738.s3, "p_937->g_738.s3", print_hash_value);
    transparent_crc(p_937->g_738.s4, "p_937->g_738.s4", print_hash_value);
    transparent_crc(p_937->g_738.s5, "p_937->g_738.s5", print_hash_value);
    transparent_crc(p_937->g_738.s6, "p_937->g_738.s6", print_hash_value);
    transparent_crc(p_937->g_738.s7, "p_937->g_738.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_937->g_761[i].f0, "p_937->g_761[i].f0", print_hash_value);
        transparent_crc(p_937->g_761[i].f1, "p_937->g_761[i].f1", print_hash_value);

    }
    transparent_crc(p_937->g_762.f0, "p_937->g_762.f0", print_hash_value);
    transparent_crc(p_937->g_762.f1, "p_937->g_762.f1", print_hash_value);
    transparent_crc(p_937->g_763.f0, "p_937->g_763.f0", print_hash_value);
    transparent_crc(p_937->g_763.f1, "p_937->g_763.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_937->g_764[i][j][k].f0, "p_937->g_764[i][j][k].f0", print_hash_value);
                transparent_crc(p_937->g_764[i][j][k].f1, "p_937->g_764[i][j][k].f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_937->g_765[i][j].f0, "p_937->g_765[i][j].f0", print_hash_value);
            transparent_crc(p_937->g_765[i][j].f1, "p_937->g_765[i][j].f1", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_937->g_766[i].f0, "p_937->g_766[i].f0", print_hash_value);
        transparent_crc(p_937->g_766[i].f1, "p_937->g_766[i].f1", print_hash_value);

    }
    transparent_crc(p_937->g_767.f0, "p_937->g_767.f0", print_hash_value);
    transparent_crc(p_937->g_767.f1, "p_937->g_767.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_937->g_768[i].f0, "p_937->g_768[i].f0", print_hash_value);
        transparent_crc(p_937->g_768[i].f1, "p_937->g_768[i].f1", print_hash_value);

    }
    transparent_crc(p_937->g_769.f0, "p_937->g_769.f0", print_hash_value);
    transparent_crc(p_937->g_769.f1, "p_937->g_769.f1", print_hash_value);
    transparent_crc(p_937->g_770.f0, "p_937->g_770.f0", print_hash_value);
    transparent_crc(p_937->g_770.f1, "p_937->g_770.f1", print_hash_value);
    transparent_crc(p_937->g_771.f0, "p_937->g_771.f0", print_hash_value);
    transparent_crc(p_937->g_771.f1, "p_937->g_771.f1", print_hash_value);
    transparent_crc(p_937->g_772.f0, "p_937->g_772.f0", print_hash_value);
    transparent_crc(p_937->g_772.f1, "p_937->g_772.f1", print_hash_value);
    transparent_crc(p_937->g_798.x, "p_937->g_798.x", print_hash_value);
    transparent_crc(p_937->g_798.y, "p_937->g_798.y", print_hash_value);
    transparent_crc(p_937->g_799.x, "p_937->g_799.x", print_hash_value);
    transparent_crc(p_937->g_799.y, "p_937->g_799.y", print_hash_value);
    transparent_crc(p_937->g_802.x, "p_937->g_802.x", print_hash_value);
    transparent_crc(p_937->g_802.y, "p_937->g_802.y", print_hash_value);
    transparent_crc(p_937->g_802.z, "p_937->g_802.z", print_hash_value);
    transparent_crc(p_937->g_802.w, "p_937->g_802.w", print_hash_value);
    transparent_crc(p_937->g_804.x, "p_937->g_804.x", print_hash_value);
    transparent_crc(p_937->g_804.y, "p_937->g_804.y", print_hash_value);
    transparent_crc(p_937->g_804.z, "p_937->g_804.z", print_hash_value);
    transparent_crc(p_937->g_804.w, "p_937->g_804.w", print_hash_value);
    transparent_crc(p_937->g_814.f0, "p_937->g_814.f0", print_hash_value);
    transparent_crc(p_937->g_842.s0, "p_937->g_842.s0", print_hash_value);
    transparent_crc(p_937->g_842.s1, "p_937->g_842.s1", print_hash_value);
    transparent_crc(p_937->g_842.s2, "p_937->g_842.s2", print_hash_value);
    transparent_crc(p_937->g_842.s3, "p_937->g_842.s3", print_hash_value);
    transparent_crc(p_937->g_842.s4, "p_937->g_842.s4", print_hash_value);
    transparent_crc(p_937->g_842.s5, "p_937->g_842.s5", print_hash_value);
    transparent_crc(p_937->g_842.s6, "p_937->g_842.s6", print_hash_value);
    transparent_crc(p_937->g_842.s7, "p_937->g_842.s7", print_hash_value);
    transparent_crc(p_937->g_845, "p_937->g_845", print_hash_value);
    transparent_crc(p_937->g_855.s0, "p_937->g_855.s0", print_hash_value);
    transparent_crc(p_937->g_855.s1, "p_937->g_855.s1", print_hash_value);
    transparent_crc(p_937->g_855.s2, "p_937->g_855.s2", print_hash_value);
    transparent_crc(p_937->g_855.s3, "p_937->g_855.s3", print_hash_value);
    transparent_crc(p_937->g_855.s4, "p_937->g_855.s4", print_hash_value);
    transparent_crc(p_937->g_855.s5, "p_937->g_855.s5", print_hash_value);
    transparent_crc(p_937->g_855.s6, "p_937->g_855.s6", print_hash_value);
    transparent_crc(p_937->g_855.s7, "p_937->g_855.s7", print_hash_value);
    transparent_crc(p_937->g_855.s8, "p_937->g_855.s8", print_hash_value);
    transparent_crc(p_937->g_855.s9, "p_937->g_855.s9", print_hash_value);
    transparent_crc(p_937->g_855.sa, "p_937->g_855.sa", print_hash_value);
    transparent_crc(p_937->g_855.sb, "p_937->g_855.sb", print_hash_value);
    transparent_crc(p_937->g_855.sc, "p_937->g_855.sc", print_hash_value);
    transparent_crc(p_937->g_855.sd, "p_937->g_855.sd", print_hash_value);
    transparent_crc(p_937->g_855.se, "p_937->g_855.se", print_hash_value);
    transparent_crc(p_937->g_855.sf, "p_937->g_855.sf", print_hash_value);
    transparent_crc(p_937->g_856.x, "p_937->g_856.x", print_hash_value);
    transparent_crc(p_937->g_856.y, "p_937->g_856.y", print_hash_value);
    transparent_crc(p_937->g_857.s0, "p_937->g_857.s0", print_hash_value);
    transparent_crc(p_937->g_857.s1, "p_937->g_857.s1", print_hash_value);
    transparent_crc(p_937->g_857.s2, "p_937->g_857.s2", print_hash_value);
    transparent_crc(p_937->g_857.s3, "p_937->g_857.s3", print_hash_value);
    transparent_crc(p_937->g_857.s4, "p_937->g_857.s4", print_hash_value);
    transparent_crc(p_937->g_857.s5, "p_937->g_857.s5", print_hash_value);
    transparent_crc(p_937->g_857.s6, "p_937->g_857.s6", print_hash_value);
    transparent_crc(p_937->g_857.s7, "p_937->g_857.s7", print_hash_value);
    transparent_crc(p_937->g_857.s8, "p_937->g_857.s8", print_hash_value);
    transparent_crc(p_937->g_857.s9, "p_937->g_857.s9", print_hash_value);
    transparent_crc(p_937->g_857.sa, "p_937->g_857.sa", print_hash_value);
    transparent_crc(p_937->g_857.sb, "p_937->g_857.sb", print_hash_value);
    transparent_crc(p_937->g_857.sc, "p_937->g_857.sc", print_hash_value);
    transparent_crc(p_937->g_857.sd, "p_937->g_857.sd", print_hash_value);
    transparent_crc(p_937->g_857.se, "p_937->g_857.se", print_hash_value);
    transparent_crc(p_937->g_857.sf, "p_937->g_857.sf", print_hash_value);
    transparent_crc(p_937->g_866, "p_937->g_866", print_hash_value);
    transparent_crc(p_937->g_900.s0, "p_937->g_900.s0", print_hash_value);
    transparent_crc(p_937->g_900.s1, "p_937->g_900.s1", print_hash_value);
    transparent_crc(p_937->g_900.s2, "p_937->g_900.s2", print_hash_value);
    transparent_crc(p_937->g_900.s3, "p_937->g_900.s3", print_hash_value);
    transparent_crc(p_937->g_900.s4, "p_937->g_900.s4", print_hash_value);
    transparent_crc(p_937->g_900.s5, "p_937->g_900.s5", print_hash_value);
    transparent_crc(p_937->g_900.s6, "p_937->g_900.s6", print_hash_value);
    transparent_crc(p_937->g_900.s7, "p_937->g_900.s7", print_hash_value);
    transparent_crc(p_937->g_900.s8, "p_937->g_900.s8", print_hash_value);
    transparent_crc(p_937->g_900.s9, "p_937->g_900.s9", print_hash_value);
    transparent_crc(p_937->g_900.sa, "p_937->g_900.sa", print_hash_value);
    transparent_crc(p_937->g_900.sb, "p_937->g_900.sb", print_hash_value);
    transparent_crc(p_937->g_900.sc, "p_937->g_900.sc", print_hash_value);
    transparent_crc(p_937->g_900.sd, "p_937->g_900.sd", print_hash_value);
    transparent_crc(p_937->g_900.se, "p_937->g_900.se", print_hash_value);
    transparent_crc(p_937->g_900.sf, "p_937->g_900.sf", print_hash_value);
    transparent_crc(p_937->g_907.s0, "p_937->g_907.s0", print_hash_value);
    transparent_crc(p_937->g_907.s1, "p_937->g_907.s1", print_hash_value);
    transparent_crc(p_937->g_907.s2, "p_937->g_907.s2", print_hash_value);
    transparent_crc(p_937->g_907.s3, "p_937->g_907.s3", print_hash_value);
    transparent_crc(p_937->g_907.s4, "p_937->g_907.s4", print_hash_value);
    transparent_crc(p_937->g_907.s5, "p_937->g_907.s5", print_hash_value);
    transparent_crc(p_937->g_907.s6, "p_937->g_907.s6", print_hash_value);
    transparent_crc(p_937->g_907.s7, "p_937->g_907.s7", print_hash_value);
    transparent_crc(p_937->g_907.s8, "p_937->g_907.s8", print_hash_value);
    transparent_crc(p_937->g_907.s9, "p_937->g_907.s9", print_hash_value);
    transparent_crc(p_937->g_907.sa, "p_937->g_907.sa", print_hash_value);
    transparent_crc(p_937->g_907.sb, "p_937->g_907.sb", print_hash_value);
    transparent_crc(p_937->g_907.sc, "p_937->g_907.sc", print_hash_value);
    transparent_crc(p_937->g_907.sd, "p_937->g_907.sd", print_hash_value);
    transparent_crc(p_937->g_907.se, "p_937->g_907.se", print_hash_value);
    transparent_crc(p_937->g_907.sf, "p_937->g_907.sf", print_hash_value);
    transparent_crc(p_937->g_921.x, "p_937->g_921.x", print_hash_value);
    transparent_crc(p_937->g_921.y, "p_937->g_921.y", print_hash_value);
    transparent_crc(p_937->g_921.z, "p_937->g_921.z", print_hash_value);
    transparent_crc(p_937->g_921.w, "p_937->g_921.w", print_hash_value);
    transparent_crc(p_937->g_923.f0, "p_937->g_923.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_937->g_926[i].f0, "p_937->g_926[i].f0", print_hash_value);
        transparent_crc(p_937->g_926[i].f1, "p_937->g_926[i].f1", print_hash_value);
        transparent_crc(p_937->g_926[i].f2, "p_937->g_926[i].f2", print_hash_value);
        transparent_crc(p_937->g_926[i].f3, "p_937->g_926[i].f3", print_hash_value);
        transparent_crc(p_937->g_926[i].f4, "p_937->g_926[i].f4", print_hash_value);
        transparent_crc(p_937->g_926[i].f5, "p_937->g_926[i].f5", print_hash_value);
        transparent_crc(p_937->g_926[i].f6, "p_937->g_926[i].f6", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_937->g_927[i][j].f0, "p_937->g_927[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_937->g_934.x, "p_937->g_934.x", print_hash_value);
    transparent_crc(p_937->g_934.y, "p_937->g_934.y", print_hash_value);
    transparent_crc(p_937->v_collective, "p_937->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 8; i++)
            transparent_crc(p_937->g_special_values[i + 8 * get_linear_group_id()], "p_937->g_special_values[i + 8 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 8; i++)
            transparent_crc(p_937->l_special_values[i], "p_937->l_special_values[i]", print_hash_value);
    transparent_crc(p_937->l_comm_values[get_linear_local_id()], "p_937->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_937->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_937->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
