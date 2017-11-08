// --atomics 94 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 48,29,6 -l 4,1,2
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

__constant uint32_t permutations[10][8] = {
{1,5,2,0,4,7,3,6}, // permutation 0
{7,0,1,6,5,3,2,4}, // permutation 1
{3,4,7,6,5,0,1,2}, // permutation 2
{2,4,6,1,5,0,7,3}, // permutation 3
{1,6,3,0,2,7,4,5}, // permutation 4
{1,4,0,5,7,2,3,6}, // permutation 5
{6,0,1,3,7,5,4,2}, // permutation 6
{5,0,2,7,6,3,1,4}, // permutation 7
{5,3,0,6,7,4,2,1}, // permutation 8
{7,0,2,4,1,5,6,3} // permutation 9
};

// Seed: 4152954295

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   uint32_t  f1;
};

struct S2 {
    int32_t g_5;
    int32_t * volatile g_4;
    volatile int32_t g_8;
    volatile int32_t g_9;
    int32_t g_10;
    volatile int32_t g_13;
    volatile int32_t g_14;
    int32_t g_15[9][8];
    int32_t g_30;
    volatile int64_t g_42;
    int16_t g_43;
    int16_t g_44[2][6][6];
    uint32_t g_45;
    uint32_t g_72;
    uint32_t g_80;
    uint32_t *g_79;
    int32_t *g_97;
    int32_t **g_96[2][8];
    VECTOR(int32_t, 16) g_109;
    VECTOR(int32_t, 16) g_110;
    VECTOR(int32_t, 4) g_117;
    int64_t g_124;
    int32_t g_129;
    volatile int64_t g_132;
    volatile int64_t *g_131;
    VECTOR(uint16_t, 2) g_147;
    uint32_t g_156;
    uint8_t g_158;
    VECTOR(uint8_t, 2) g_171;
    int64_t *g_205;
    VECTOR(uint8_t, 2) g_212;
    int8_t g_221;
    int32_t **g_235;
    VECTOR(int16_t, 4) g_240;
    int8_t g_257;
    VECTOR(uint16_t, 16) g_276;
    uint16_t *g_291;
    int32_t g_298;
    VECTOR(int16_t, 4) g_317;
    VECTOR(uint32_t, 8) g_328;
    int16_t * volatile g_332[5][10];
    int16_t * volatile *g_331;
    VECTOR(uint16_t, 8) g_338;
    VECTOR(uint8_t, 2) g_372;
    VECTOR(uint8_t, 4) g_373;
    VECTOR(uint16_t, 16) g_375;
    uint64_t g_394;
    volatile uint8_t g_445;
    volatile uint8_t *g_444;
    volatile uint8_t **g_443;
    int64_t * volatile *g_472;
    int64_t * volatile * volatile *g_471[2];
    VECTOR(uint32_t, 8) g_477;
    VECTOR(int64_t, 2) g_487;
    VECTOR(int64_t, 8) g_488;
    VECTOR(int64_t, 2) g_489;
    VECTOR(int32_t, 16) g_493;
    int64_t **g_520;
    VECTOR(int8_t, 16) g_565;
    int32_t *g_573[8][5];
    int32_t **g_572;
    union U0 g_621;
    volatile int32_t * volatile g_630;
    VECTOR(int32_t, 2) g_634;
    union U0 *g_658;
    union U0 ** volatile g_657[10];
    VECTOR(uint64_t, 2) g_700;
    volatile VECTOR(uint64_t, 16) g_711;
    volatile VECTOR(uint16_t, 8) g_719;
    int32_t ***g_734[9];
    volatile int32_t g_737;
    volatile uint16_t g_741[9];
    volatile int32_t g_751;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S2 * p_756);
int32_t  func_18(int32_t * p_19, int32_t * p_20, int8_t  p_21, uint64_t  p_22, int8_t  p_23, struct S2 * p_756);
int32_t * func_24(int32_t  p_25, struct S2 * p_756);
int32_t * func_60(int8_t  p_61, int32_t  p_62, int16_t  p_63, int32_t  p_64, int16_t * p_65, struct S2 * p_756);
int8_t  func_66(uint32_t  p_67, struct S2 * p_756);
int32_t * func_68(int32_t ** p_69, int16_t  p_70, struct S2 * p_756);
uint16_t  func_73(uint16_t  p_74, int16_t * p_75, uint32_t * p_76, struct S2 * p_756);
uint8_t  func_83(int64_t * p_84, int16_t * p_85, int16_t * p_86, struct S2 * p_756);
int16_t * func_89(int32_t  p_90, int32_t  p_91, struct S2 * p_756);
int32_t  func_92(uint32_t * p_93, uint64_t  p_94, int64_t ** p_95, struct S2 * p_756);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_756->g_4 p_756->g_5 p_756->g_630 p_756->g_97 p_756->g_10 p_756->g_15 p_756->g_235 p_756->g_394 p_756->g_79 p_756->g_80 p_756->g_156 p_756->g_741 p_756->g_13 p_756->g_14
 * writes: p_756->g_5 p_756->g_10 p_756->g_15 p_756->g_45 p_756->g_30 p_756->g_658 p_756->g_13 p_756->g_298 p_756->g_97 p_756->g_43 p_756->g_394 p_756->g_737 p_756->g_741
 */
uint32_t  func_1(struct S2 * p_756)
{ /* block id: 4 */
    uint32_t l_295[10][10] = {{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL},{0x6E46E8BFL,0xBBCBA3CBL,0xF53F63F4L,4294967295UL,1UL,4294967292UL,9UL,1UL,0xFFCEDC22L,0x6E46E8BFL}};
    int32_t l_299 = 0x395E212DL;
    volatile int32_t * volatile l_631 = &p_756->g_14;/* VOLATILE GLOBAL l_631 */
    uint8_t l_637 = 246UL;
    int32_t l_675 = (-4L);
    VECTOR(uint16_t, 2) l_718 = (VECTOR(uint16_t, 2))(0UL, 65534UL);
    int32_t ***l_731 = &p_756->g_235;
    int32_t *l_744 = &p_756->g_10;
    int8_t l_745 = 0x63L;
    int32_t *l_746 = (void*)0;
    int32_t *l_747 = &p_756->g_15[0][1];
    int32_t *l_748 = &p_756->g_15[5][0];
    int32_t *l_749[8][8][4] = {{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}},{{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]},{&p_756->g_15[5][3],(void*)0,&p_756->g_30,&p_756->g_15[1][5]}}};
    int16_t l_750 = 0x0F2EL;
    int8_t l_752 = (-2L);
    uint32_t l_753[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    int i, j, k;
    (*p_756->g_4) = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x0069L, 0x1323L)).yyyx)).z == (safe_lshift_func_int16_t_s_s(0x5CBCL, 15)));
    for (p_756->g_5 = 0; (p_756->g_5 != (-2)); p_756->g_5 = safe_sub_func_int64_t_s_s(p_756->g_5, 4))
    { /* block id: 8 */
        uint16_t l_576[3];
        uint32_t l_654 = 0x46E529D3L;
        VECTOR(uint8_t, 8) l_699 = (VECTOR(uint8_t, 8))(0x03L, (VECTOR(uint8_t, 4))(0x03L, (VECTOR(uint8_t, 2))(0x03L, 255UL), 255UL), 255UL, 0x03L, 255UL);
        int32_t l_703 = 0L;
        VECTOR(uint64_t, 16) l_736 = (VECTOR(uint64_t, 16))(0xBB5230AD0722DAE3L, (VECTOR(uint64_t, 4))(0xBB5230AD0722DAE3L, (VECTOR(uint64_t, 2))(0xBB5230AD0722DAE3L, 0UL), 0UL), 0UL, 0xBB5230AD0722DAE3L, 0UL, (VECTOR(uint64_t, 2))(0xBB5230AD0722DAE3L, 0UL), (VECTOR(uint64_t, 2))(0xBB5230AD0722DAE3L, 0UL), 0xBB5230AD0722DAE3L, 0UL, 0xBB5230AD0722DAE3L, 0UL);
        int i;
        for (i = 0; i < 3; i++)
            l_576[i] = 1UL;
        for (p_756->g_10 = 12; (p_756->g_10 >= 25); p_756->g_10 = safe_add_func_uint16_t_u_u(p_756->g_10, 1))
        { /* block id: 11 */
            VECTOR(int64_t, 16) l_27 = (VECTOR(int64_t, 16))(0x1938D10FBF2B8319L, (VECTOR(int64_t, 4))(0x1938D10FBF2B8319L, (VECTOR(int64_t, 2))(0x1938D10FBF2B8319L, 1L), 1L), 1L, 0x1938D10FBF2B8319L, 1L, (VECTOR(int64_t, 2))(0x1938D10FBF2B8319L, 1L), (VECTOR(int64_t, 2))(0x1938D10FBF2B8319L, 1L), 0x1938D10FBF2B8319L, 1L, 0x1938D10FBF2B8319L, 1L);
            int32_t *l_620 = (void*)0;
            union U0 *l_629 = &p_756->g_621;
            union U0 **l_628 = &l_629;
            int i;
            for (p_756->g_15[0][1] = (-28); (p_756->g_15[0][1] >= 16); p_756->g_15[0][1] = safe_add_func_int8_t_s_s(p_756->g_15[0][1], 5))
            { /* block id: 14 */
                VECTOR(int64_t, 4) l_26 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2F9EB11DE2A90786L), 0x2F9EB11DE2A90786L);
                int64_t *l_28[8][1];
                int32_t **l_57 = (void*)0;
                int32_t *l_59 = (void*)0;
                int32_t **l_58 = &l_59;
                int32_t *l_296 = (void*)0;
                int32_t *l_297[2];
                int16_t *l_300[3][2][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t *l_622 = &l_299;
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_28[i][j] = (void*)0;
                }
                for (i = 0; i < 2; i++)
                    l_297[i] = &p_756->g_298;
                (1 + 1);
            }
            for (p_756->g_45 = (-24); (p_756->g_45 >= 4); p_756->g_45++)
            { /* block id: 232 */
                uint32_t l_625 = 4294967295UL;
                l_625--;
            }
            (*l_628) = (void*)0;
        }
        l_631 = p_756->g_630;
        for (l_299 = 12; (l_299 > 11); l_299 = safe_sub_func_int8_t_s_s(l_299, 5))
        { /* block id: 240 */
            uint16_t l_642 = 65534UL;
            int64_t *l_645 = (void*)0;
            int64_t *l_646[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_647 = 0L;
            int i;
            (*p_756->g_97) &= ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(p_756->g_634.yxxyxyxy)).s4335674503732120, ((VECTOR(int32_t, 16))(1L, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(0x3089624BL, (safe_rshift_func_uint16_t_u_u(((((l_637 , &p_756->g_79) == (void*)0) < (safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0L, 1UL)) > (0UL != l_642)), (safe_mul_func_int16_t_s_s(((l_647 ^= 0x027BEB73F7D22982L) , (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(l_576[2], (*l_631))), 6)), l_654))), 0x4A6FL))))) && (*p_756->g_79)), l_642)), 0x700276DDL, 0x05C1A6CCL)).xzzyzzxw, (int32_t)0L, (int32_t)l_647))).lo)), ((VECTOR(int32_t, 4))(0x4EE7589EL))))), ((VECTOR(int32_t, 4))(0x47AEFC08L))))), (-4L), ((VECTOR(int32_t, 4))(0x74EE163BL)), (*p_756->g_4), (-1L), 1L, 0x2487ED32L, 0x1B45D8C8L, 8L)), ((VECTOR(int32_t, 16))(0x07C39CBEL))))).sb;
            for (p_756->g_30 = 0; (p_756->g_30 < (-14)); p_756->g_30 = safe_sub_func_int64_t_s_s(p_756->g_30, 6))
            { /* block id: 245 */
                union U0 **l_659 = &p_756->g_658;
                (*l_659) = &p_756->g_621;
                if ((atomic_inc(&p_756->g_atomic_input[94 * get_linear_group_id() + 72]) == 5))
                { /* block id: 248 */
                    uint32_t l_660 = 0xB246F3BDL;
                    int32_t l_661 = 0x5709D868L;
                    uint32_t l_662 = 0xBBBA6B2BL;
                    l_662 = (l_660 , l_661);
                    unsigned int result = 0;
                    result += l_660;
                    result += l_661;
                    result += l_662;
                    atomic_add(&p_756->g_special_values[94 * get_linear_group_id() + 72], result);
                }
                else
                { /* block id: 250 */
                    (1 + 1);
                }
                (*l_631) = ((0x5099L || ((VECTOR(int16_t, 2))(0x0FBDL, (-1L))).lo) >= 5L);
            }
            (*l_631) = (**p_756->g_235);
            for (l_654 = 0; (l_654 == 39); l_654 = safe_add_func_uint8_t_u_u(l_654, 1))
            { /* block id: 258 */
                uint64_t l_667 = 0x7C12143E7053605AL;
                uint8_t l_705 = 6UL;
                int32_t l_706 = 0x170B8098L;
                VECTOR(uint16_t, 8) l_720 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x9F5BL), 0x9F5BL), 0x9F5BL, 65534UL, 0x9F5BL);
                VECTOR(uint16_t, 2) l_721 = (VECTOR(uint16_t, 2))(0xA704L, 0x6AE7L);
                int i;
                for (p_756->g_298 = 8; (p_756->g_298 > (-24)); --p_756->g_298)
                { /* block id: 261 */
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_756->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 8)), permutations[(safe_mod_func_uint32_t_u_u(l_667, 10))][(safe_mod_func_uint32_t_u_u(p_756->tid, 8))]));
                    (*p_756->g_235) = (*p_756->g_235);
                }
                for (p_756->g_43 = 17; (p_756->g_43 == 16); p_756->g_43 = safe_sub_func_int64_t_s_s(p_756->g_43, 6))
                { /* block id: 269 */
                    uint64_t l_704 = 0x250FFD158DCCE8F8L;
                    for (p_756->g_30 = 0; (p_756->g_30 < (-14)); p_756->g_30--)
                    { /* block id: 272 */
                        uint64_t *l_674[10][6][4] = {{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}},{{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667},{&p_756->g_394,&l_667,&p_756->g_394,&l_667}}};
                        int32_t l_688 = 0L;
                        uint16_t *l_689 = (void*)0;
                        uint16_t *l_690 = (void*)0;
                        uint16_t *l_691 = (void*)0;
                        uint16_t *l_692 = &l_576[2];
                        int i, j, k;
                        (*p_756->g_97) = (safe_mod_func_uint32_t_u_u(((p_756->g_394++) ^ ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(0x5FBE06B6BF62F952L, (safe_lshift_func_uint16_t_u_u((p_756->g_477.s7 ^ p_756->g_373.z), ((*l_692)--))))) > (p_756->g_338.s0 || (254UL <= 255UL))), (l_703 = ((*l_631) > ((((safe_sub_func_uint8_t_u_u((~((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(l_699.s6530)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((!(((VECTOR(uint64_t, 8))(p_756->g_700.yyxyxxyy)).s1 == l_654)) ^ (safe_sub_func_int8_t_s_s(p_756->g_477.s3, p_756->g_129))), l_642, FAKE_DIVERGE(p_756->local_2_offset, get_local_id(2), 10), 0xBEL, 0x71L, 0x0CL, 0xE4L, ((VECTOR(uint8_t, 4))(255UL)), 1UL, ((VECTOR(uint8_t, 4))(0xD2L)))).s95)).yyxy))), ((VECTOR(uint8_t, 4))(255UL))))))).w), FAKE_DIVERGE(p_756->global_2_offset, get_global_id(2), 10))) != 0x2C5A8430E660C84FL) < l_688) > 2UL))))), 8)), p_756->g_171.x)), p_756->g_487.x, 1UL, 0UL)), GROUP_DIVERGE(1, 1), ((VECTOR(uint64_t, 2))(0x95F6693284278B6FL)), p_756->g_375.sf, ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xA08D99642095380AL, 0x2D85773336980DE6L)).s7), (*p_756->g_79)));
                        return l_704;
                    }
                    if (l_705)
                        break;
                }
                (*p_756->g_97) = (l_706 |= (**p_756->g_235));
                for (p_756->g_298 = 11; (p_756->g_298 > 15); ++p_756->g_298)
                { /* block id: 285 */
                    int32_t ****l_732 = (void*)0;
                    int32_t ****l_733[1];
                    int32_t ***l_735 = &p_756->g_235;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_733[i] = &l_731;
                    p_756->g_737 = ((safe_add_func_int8_t_s_s(((((VECTOR(uint64_t, 16))(p_756->g_711.s5ed68122539591fc)).sd || (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((((safe_add_func_int32_t_s_s((((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(4294967295UL, 0UL, 1UL, 0UL, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(l_718.xx)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(p_756->g_719.s05123163)).s33, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(0xAFEBL, 1UL)).xyxy, ((VECTOR(uint16_t, 8))(l_720.s71522431)).even, ((VECTOR(uint16_t, 8))(l_721.xyxxyyyx)).hi))).lo))).xyyxyxyxyyyxxxyy)).sb0))).xyyyyxxxxyyxxyyx, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((safe_add_func_int64_t_s_s((((safe_unary_minus_func_uint16_t_u(0xF20AL)) | ((&l_703 != &l_703) , ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((*l_631) | (((((p_756->g_734[1] = l_731) != (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(l_699.s5, (-7L), 0L, (-8L))), ((VECTOR(int64_t, 2))(0L, 0x2C786F506220D86DL)).yyyy))).yxzwwxxxyyzzxxyy)).s1 , l_735)) > ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_736.s4028)).zzwzwzyy)), 18446744073709551615UL, 0x8C3E09E7B257E012L, GROUP_DIVERGE(0, 1), 0x7BD1A30BBC0E9208L, 0UL, p_756->g_317.x, 0x6F449ED7E04CB419L, 0xA481556DBA848146L)).sf) >= FAKE_DIVERGE(p_756->group_1_offset, get_group_id(1), 10)) >= l_720.s0)), 0x00BFL)), 0x376F267BL)) & l_647))) , l_642), 0x1286851D42B124DFL)), p_756->g_711.s3, ((VECTOR(uint16_t, 2))(8UL)), 0xE7C6L, 0UL, 0x1A9DL, 65535UL)).s5561121235531077)), ((VECTOR(uint16_t, 16))(0UL))))), (uint16_t)l_721.x))), ((VECTOR(uint16_t, 16))(65533UL)))))))).se37f, ((VECTOR(uint32_t, 4))(7UL))))), 0x883CB384L, ((VECTOR(uint32_t, 4))(1UL)), 4294967294UL, 0x9A935F68L, 0xF666F697L)), ((VECTOR(uint32_t, 16))(9UL))))).s9 == l_706), (*p_756->g_97))) == p_756->g_15[1][3]) || (***l_731)) ^ p_756->g_156), l_720.s2)), l_647))) == (***l_735)), 0xB0L)) , 0x4837A212L);
                    for (l_667 = 0; (l_667 < 10); l_667++)
                    { /* block id: 290 */
                        int16_t l_740 = 0x0C4CL;
                        if (l_740)
                            break;
                        p_756->g_741[5]--;
                        if ((**p_756->g_235))
                            continue;
                        (*p_756->g_235) = l_744;
                    }
                }
            }
        }
    }
    (***l_731) = (*l_631);
    l_753[1]++;
    return (*l_747);
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_444 p_756->g_445 p_756->g_338 p_756->g_212 p_756->g_276
 * writes: p_756->g_372 p_756->g_44 p_756->g_373
 */
int32_t  func_18(int32_t * p_19, int32_t * p_20, int8_t  p_21, uint64_t  p_22, int8_t  p_23, struct S2 * p_756)
{ /* block id: 218 */
    VECTOR(int16_t, 2) l_577 = (VECTOR(int16_t, 2))(0x50A6L, 0x4581L);
    int32_t *l_578 = (void*)0;
    int32_t *l_579 = (void*)0;
    int32_t *l_580 = (void*)0;
    int32_t l_581 = 0x3E3BA359L;
    int32_t *l_582[8][10][3] = {{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}},{{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0},{&p_756->g_10,&p_756->g_15[8][1],(void*)0}}};
    int32_t l_583 = 0x65CC941BL;
    int64_t l_584 = 0x111BBC12F5A0B3E6L;
    uint32_t l_585 = 4294967295UL;
    VECTOR(uint16_t, 2) l_590 = (VECTOR(uint16_t, 2))(65535UL, 0xF799L);
    uint64_t l_595 = 0x5273911DA1C16ED3L;
    uint8_t *l_596 = (void*)0;
    uint8_t *l_597[8][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint8_t, 2) l_598 = (VECTOR(uint8_t, 2))(248UL, 1UL);
    int16_t *l_608 = &p_756->g_44[1][0][1];
    int16_t **l_607[1][9] = {{&l_608,&l_608,&l_608,&l_608,&l_608,&l_608,&l_608,&l_608,&l_608}};
    uint16_t l_617 = 9UL;
    int32_t l_618 = 0x07EBCA3BL;
    int8_t l_619[10];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_619[i] = 1L;
    l_585--;
    l_617 = ((safe_add_func_int16_t_s_s(((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_590.xxyx)).yxxxzyyw)).s2 == ((p_756->g_372.x = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_595, 0)), (*p_756->g_444)))) != ((VECTOR(uint8_t, 4))(l_598.yyxy)).z)) > (safe_mod_func_uint8_t_u_u(p_22, ((safe_mul_func_uint16_t_u_u(p_22, (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((l_607[0][8] == &l_608), (p_756->g_373.z = (safe_mul_func_int16_t_s_s((p_23 == 0L), ((*l_608) = (safe_mod_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(p_756->g_338.s0, p_756->g_212.y)) >= p_756->g_276.s9) <= p_22), 1L)))))))) ^ 0x7667F308L), FAKE_DIVERGE(p_756->group_2_offset, get_group_id(2), 10))))) | p_23)))), p_23)) || p_23);
    l_619[4] ^= (p_23 , l_618);
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_45 p_756->g_30 p_756->g_42
 * writes: p_756->g_30 p_756->g_45 p_756->g_44
 */
int32_t * func_24(int32_t  p_25, struct S2 * p_756)
{ /* block id: 16 */
    int32_t *l_29 = &p_756->g_30;
    int32_t l_40 = (-5L);
    int32_t l_41[5][6] = {{0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L},{0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L},{0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L},{0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L},{0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L,0x0F0C8679L}};
    int32_t *l_53 = &l_41[1][0];
    int16_t *l_56 = &p_756->g_44[0][4][3];
    int i, j;
    if (((*l_29) = p_25))
    { /* block id: 18 */
        int32_t *l_31 = (void*)0;
        int32_t *l_32 = &p_756->g_30;
        int32_t *l_33 = (void*)0;
        int32_t *l_34 = &p_756->g_30;
        int32_t *l_35 = (void*)0;
        int32_t *l_36 = &p_756->g_30;
        int32_t *l_37 = &p_756->g_30;
        int32_t *l_38 = &p_756->g_30;
        int32_t *l_39[7][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
        int i, j, k;
        p_756->g_45++;
    }
    else
    { /* block id: 20 */
        int32_t *l_48 = &l_41[0][3];
        int32_t *l_49[6][6] = {{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]},{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]},{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]},{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]},{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]},{&l_41[0][3],&p_756->g_10,&l_41[0][3],&l_41[0][3],&p_756->g_10,&l_41[0][3]}};
        uint32_t l_50 = 0UL;
        int i, j;
        (*l_29) = 0x532083B0L;
        ++l_50;
        (*l_29) = (*l_29);
        return &p_756->g_10;
    }
    (*l_53) &= ((*l_29) = (-7L));
    (*l_53) |= (safe_lshift_func_int16_t_s_s(((*l_56) = p_25), p_756->g_42));
    return &p_756->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_221 p_756->g_15 p_756->g_109 p_756->g_79 p_756->g_10 p_756->g_317 p_756->g_328 p_756->g_331 p_756->g_80 p_756->l_comm_values p_756->g_338 p_756->g_43 p_756->g_394 p_756->g_117 p_756->g_373 p_756->g_240 p_756->g_212 p_756->g_276 p_756->g_171 p_756->g_375 p_756->g_147 p_756->g_235 p_756->g_97 p_756->g_443 p_756->g_471 p_756->g_477 p_756->g_487 p_756->g_488 p_756->g_489 p_756->g_493 p_756->g_565
 * writes: p_756->g_221 p_756->g_80 p_756->g_43 p_756->g_394 p_756->g_240 p_756->g_520 p_756->g_572
 */
int32_t * func_60(int8_t  p_61, int32_t  p_62, int16_t  p_63, int32_t  p_64, int16_t * p_65, struct S2 * p_756)
{ /* block id: 111 */
    int32_t *l_303 = &p_756->g_10;
    uint32_t l_309 = 4294967286UL;
    int32_t l_352 = 6L;
    int32_t l_354 = 0x678C5342L;
    int32_t l_355 = (-5L);
    int32_t l_356 = 0x46E3FFF8L;
    int32_t l_357[9] = {(-1L),0x0139886DL,(-1L),(-1L),0x0139886DL,(-1L),(-1L),0x0139886DL,(-1L)};
    VECTOR(int16_t, 16) l_365 = (VECTOR(int16_t, 16))(0x2DFAL, (VECTOR(int16_t, 4))(0x2DFAL, (VECTOR(int16_t, 2))(0x2DFAL, 0x1B15L), 0x1B15L), 0x1B15L, 0x2DFAL, 0x1B15L, (VECTOR(int16_t, 2))(0x2DFAL, 0x1B15L), (VECTOR(int16_t, 2))(0x2DFAL, 0x1B15L), 0x2DFAL, 0x1B15L, 0x2DFAL, 0x1B15L);
    uint16_t **l_414 = (void*)0;
    uint64_t l_415 = 0xC21F0B54B9A13D91L;
    uint8_t l_467 = 252UL;
    int32_t *l_492 = (void*)0;
    int64_t **l_517[4][2] = {{&p_756->g_205,&p_756->g_205},{&p_756->g_205,&p_756->g_205},{&p_756->g_205,&p_756->g_205},{&p_756->g_205,&p_756->g_205}};
    int16_t l_554 = 0x3C04L;
    uint64_t l_562 = 0UL;
    int32_t **l_570 = (void*)0;
    int32_t ***l_571[5][4][9] = {{{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570}},{{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570}},{{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570}},{{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570}},{{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570},{&l_570,&l_570,(void*)0,&l_570,&l_570,&l_570,(void*)0,&l_570,&l_570}}};
    uint16_t *l_574 = (void*)0;
    uint16_t l_575 = 0x16EBL;
    int i, j, k;
    for (p_756->g_221 = 0; (p_756->g_221 <= 11); p_756->g_221 = safe_add_func_int8_t_s_s(p_756->g_221, 1))
    { /* block id: 114 */
        uint32_t *l_304 = &p_756->g_156;
        int32_t l_310 = (-1L);
        int32_t l_311 = 4L;
        int32_t l_353[1][1][3];
        int8_t l_358 = 0x57L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 3; k++)
                    l_353[i][j][k] = 0x683E8645L;
            }
        }
        l_303 = l_303;
        if ((l_304 != (void*)0))
        { /* block id: 116 */
            int32_t *l_312 = &l_310;
            (*l_312) = (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5BC9244FL, (-6L))).yxyy)).z, ((-5L) && ((safe_mul_func_int8_t_s_s(((0L != p_63) || ((p_756->g_15[0][1] <= p_756->g_109.se) > (((*p_756->g_79) = 0x6D9E01EEL) <= l_309))), ((l_311 ^= (l_310 && (((void*)0 == &p_756->g_124) ^ p_63))) & (*l_303)))) ^ p_64))));
        }
        else
        { /* block id: 120 */
            uint16_t l_333 = 0x8393L;
            int32_t l_335[1];
            int32_t *l_339 = &l_335[0];
            int32_t *l_340 = (void*)0;
            int32_t *l_341 = &l_310;
            int32_t *l_342 = &l_335[0];
            int32_t *l_343 = &l_311;
            int32_t *l_344 = (void*)0;
            int32_t *l_345 = &p_756->g_129;
            int32_t *l_346 = &p_756->g_129;
            int32_t *l_347 = &l_335[0];
            int32_t *l_348 = (void*)0;
            int32_t *l_349 = &l_310;
            int32_t *l_350 = &l_310;
            int32_t *l_351[10] = {(void*)0,&l_310,&l_335[0],&l_310,(void*)0,(void*)0,&l_310,&l_335[0],&l_310,(void*)0};
            uint16_t l_359 = 0xB678L;
            int i;
            for (i = 0; i < 1; i++)
                l_335[i] = 1L;
            for (p_63 = 0; (p_63 == (-7)); --p_63)
            { /* block id: 123 */
                int8_t *l_319[6][6] = {{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257},{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257},{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257},{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257},{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257},{&p_756->g_257,&p_756->g_257,&p_756->g_257,&p_756->g_221,(void*)0,&p_756->g_257}};
                int8_t **l_318 = &l_319[0][4];
                uint64_t l_322 = 18446744073709551615UL;
                int32_t *l_334[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_334[i] = (void*)0;
                l_335[0] = (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_756->g_317.zzxwyyzw)).s5066076257314640)).s37)).odd, ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-7L), 0x6FL)).yxxy)).x != (((*l_318) = &p_61) != &p_756->g_221)) != (((((safe_mul_func_int8_t_s_s((l_322 < (safe_rshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(p_756->g_109.s4, (safe_unary_minus_func_uint8_t_u(((void*)0 != l_303))))) ^ ((VECTOR(uint32_t, 16))(p_756->g_328.s3362053012477007)).s5) > ((+p_756->g_109.s2) <= (safe_mod_func_int32_t_s_s((l_311 | (p_756->g_331 != (void*)0)), (*p_756->g_79))))), 1))), 1UL)) || p_756->l_comm_values[(safe_mod_func_uint32_t_u_u(p_756->tid, 8))]) == l_333) <= GROUP_DIVERGE(0, 1)) | p_63))));
            }
            l_310 = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_756->g_338.s7750035231473272)))).s9, p_61));
            atomic_sub(&p_756->g_atomic_reduction[get_linear_group_id()], 8L + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_756->v_collective += p_756->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_359++;
        }
    }
    for (p_756->g_43 = 0; (p_756->g_43 <= (-22)); p_756->g_43 = safe_sub_func_int64_t_s_s(p_756->g_43, 1))
    { /* block id: 134 */
        VECTOR(int32_t, 8) l_364 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x370260D5L), 0x370260D5L), 0x370260D5L, 5L, 0x370260D5L);
        VECTOR(int16_t, 16) l_366 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x456DL), 0x456DL), 0x456DL, 1L, 0x456DL, (VECTOR(int16_t, 2))(1L, 0x456DL), (VECTOR(int16_t, 2))(1L, 0x456DL), 1L, 0x456DL, 1L, 0x456DL);
        uint16_t *l_367 = (void*)0;
        uint16_t *l_368 = (void*)0;
        uint16_t *l_369[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t l_370 = 0x14F6126AL;
        VECTOR(uint16_t, 2) l_371 = (VECTOR(uint16_t, 2))(2UL, 0xFEC0L);
        VECTOR(uint16_t, 8) l_374 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF7A1L), 0xF7A1L), 0xF7A1L, 65535UL, 0xF7A1L);
        VECTOR(uint16_t, 16) l_376 = (VECTOR(uint16_t, 16))(0x4BBBL, (VECTOR(uint16_t, 4))(0x4BBBL, (VECTOR(uint16_t, 2))(0x4BBBL, 0xE47CL), 0xE47CL), 0xE47CL, 0x4BBBL, 0xE47CL, (VECTOR(uint16_t, 2))(0x4BBBL, 0xE47CL), (VECTOR(uint16_t, 2))(0x4BBBL, 0xE47CL), 0x4BBBL, 0xE47CL, 0x4BBBL, 0xE47CL);
        int32_t **l_389 = &l_303;
        uint32_t *l_392 = &l_309;
        uint64_t *l_393 = &p_756->g_394;
        uint8_t *l_401[7] = {&p_756->g_158,&p_756->g_158,&p_756->g_158,&p_756->g_158,&p_756->g_158,&p_756->g_158,&p_756->g_158};
        uint8_t **l_402 = &l_401[1];
        uint8_t *l_403[1][1];
        int16_t *l_410 = (void*)0;
        int16_t *l_411 = (void*)0;
        int16_t *l_412 = (void*)0;
        int16_t *l_413[1];
        uint32_t l_416[8] = {0x8CB8060EL,0x6A3C6BE6L,0x8CB8060EL,0x8CB8060EL,0x6A3C6BE6L,0x8CB8060EL,0x8CB8060EL,0x6A3C6BE6L};
        uint16_t l_453 = 1UL;
        VECTOR(uint16_t, 2) l_532 = (VECTOR(uint16_t, 2))(0x1298L, 0xA83EL);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_403[i][j] = &p_756->g_158;
        }
        for (i = 0; i < 1; i++)
            l_413[i] = (void*)0;
        l_356 |= (((VECTOR(uint32_t, 8))(1UL, 0xA3AFE27CL, (p_756->g_171.y != 0x74L), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_364.s35)).xyyxyxyy)).odd)))))))))), 4294967295UL)).s5 ^ (!((((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(l_365.sa70c7964)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_366.sb8cd359603be6c95)).s16)).xxxyyxyx))).s1767505662151320)).s14, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(0UL, 0x4C93L)).yyxx, (uint16_t)(l_370 = p_61)))).xyxxxxwxzwzwxyzy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_364.s2, 0x57B8L, 0xDBBEL, 0x7A04L)).odd)).xxyxxyxyyyyxyyxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_371.xy)).yxyyyxxxyxyxxyyx)).s0f)), ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(p_756->g_372.yxxy)).odd, ((VECTOR(uint8_t, 2))(p_756->g_373.xy))))), ((VECTOR(uint16_t, 4))(l_374.s6414)))).s4547235357346173)).lo, ((VECTOR(uint16_t, 4))(p_756->g_375.s8042)).wxywxxyw, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 16))(l_376.sc65f7a293b2f03d2)).s05b9, (uint16_t)(*l_303), (uint16_t)(safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_int64_t_s_s(((((*l_389) = func_68(&l_303, ((safe_mod_func_uint32_t_u_u((--(*p_756->g_79)), l_366.s7)) != (safe_rshift_func_int16_t_s_s(0x4CA2L, p_756->g_129))), p_756)) != &l_356) , p_756->g_110.s0), p_756->g_10)), p_756->g_171.x)), l_352))))).xwzxyzwwzwwxwwzw)).sf346, ((VECTOR(uint16_t, 4))(65535UL))))).wxzxyxww))))).s1667476427753602))).hi)))).s4762223672543006))).sb8))).xyxyyyyxyxyyyxyx)))))).sf1, ((VECTOR(int32_t, 2))(0x349022FFL))))), 0x799E3412L)).y != p_61) && 3L)));
        if ((safe_lshift_func_int8_t_s_s(((((((l_392 == (void*)0) > ((*l_393)++)) , (((safe_sub_func_int16_t_s_s((p_756->g_240.w &= ((((safe_lshift_func_uint16_t_u_s(p_63, 12)) | (((((((*l_402) = l_401[1]) != l_403[0][0]) | (p_63 || (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_756->g_117.z && p_756->g_373.w), (l_356 |= (safe_lshift_func_uint16_t_u_u(p_62, 15))))) <= (-1L)), p_61)))) ^ 0xDABF6F475C936784L) , 0x6DF4L) , 65535UL)) , (void*)0) != l_414)), p_756->g_212.y)) && 0x3C575A4691EF411BL) , GROUP_DIVERGE(2, 1))) > l_415) > 0UL) && 1L), p_756->g_276.s6)))
        { /* block id: 143 */
            int64_t **l_418[2][5] = {{(void*)0,&p_756->g_205,(void*)0,&p_756->g_205,(void*)0},{(void*)0,&p_756->g_205,(void*)0,&p_756->g_205,(void*)0}};
            int64_t ***l_417 = &l_418[0][4];
            VECTOR(uint16_t, 4) l_421 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x8C86L), 0x8C86L);
            int64_t *l_430 = (void*)0;
            int64_t *l_431[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_432 = 0L;
            int32_t *l_433 = (void*)0;
            int32_t *l_434[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t **l_441 = &l_392;
            int i, j;
            if (l_416[1])
                break;
            l_355 = (((*p_756->g_79) = ((((p_63 ^ (&p_756->g_158 != ((((*l_417) = (void*)0) != ((p_756->g_373.y & ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_421.xzzyzwwwyxxywzwz)).s201c)).yyzyzyyz))).even)), 1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xE6FCL, 1UL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65534UL, 65528UL)).xyyxyxxxxyyxyyxx)).sfe))).xxyy)), 0xB5BBL, 0x01A2L)).s62)), 65535UL)).s61)).odd <= (0x69348F48L < ((VECTOR(uint32_t, 2))(0x70DB94C9L, 0xE3F4EC29L)).hi)) >= ((p_61 , (l_370 = (safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_756->local_2_offset, get_local_id(2), 10), ((-1L) | (l_354 = (safe_sub_func_int64_t_s_s((p_756->g_338.s2 >= (((l_432 = ((l_364.s4 = ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(0x7778L, p_64)) <= 0x3B862748L), 15)) || p_63)) <= p_64)) <= p_64) == p_62)), FAKE_DIVERGE(p_756->global_1_offset, get_global_id(1), 10))))))))) >= p_62))) , (void*)0)) , (void*)0))) != p_61) && l_357[6]) , 4294967287UL)) > 0x44DBB93AL);
            l_364.s2 = ((*p_756->g_79) | (((safe_add_func_int16_t_s_s(0x42AFL, (GROUP_DIVERGE(0, 1) <= (((p_756->g_171.y == l_357[0]) == 18446744073709551615UL) <= (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((((((*l_441) = &p_756->g_72) != &l_309) != ((((((p_756->g_375.s8 , 248UL) || 0x59L) | FAKE_DIVERGE(p_756->global_0_offset, get_global_id(0), 10)) , 4294967292UL) != p_64) >= (*p_756->g_79))) & p_756->g_147.x), FAKE_DIVERGE(p_756->global_0_offset, get_global_id(0), 10))), p_61)) , (void*)0) != &p_756->g_156))))) >= p_61) || 0x2DEBL));
        }
        else
        { /* block id: 154 */
            int32_t *l_442 = &l_357[8];
            return (*p_756->g_235);
        }
        (*l_389) = &l_352;
        if ((p_756->g_443 != (void*)0))
        { /* block id: 158 */
            int32_t *l_446 = &l_355;
            int32_t *l_447 = (void*)0;
            int32_t l_448[7][1] = {{5L},{5L},{5L},{5L},{5L},{5L},{5L}};
            int32_t *l_449 = &l_448[6][0];
            int32_t *l_450 = &l_352;
            int32_t *l_451 = &l_355;
            int32_t *l_452[4] = {&p_756->g_129,&p_756->g_129,&p_756->g_129,&p_756->g_129};
            VECTOR(int64_t, 8) l_490 = (VECTOR(int64_t, 8))(0x1D8C3C65C335E029L, (VECTOR(int64_t, 4))(0x1D8C3C65C335E029L, (VECTOR(int64_t, 2))(0x1D8C3C65C335E029L, (-1L)), (-1L)), (-1L), 0x1D8C3C65C335E029L, (-1L));
            int i, j;
            ++l_453;
            if ((atomic_inc(&p_756->g_atomic_input[94 * get_linear_group_id() + 34]) == 4))
            { /* block id: 161 */
                uint32_t l_456 = 4UL;
                int32_t l_457 = 0x259EECD2L;
                int16_t l_458 = (-1L);
                uint64_t l_459 = 0xADBFB00C059EC040L;
                int32_t l_460[6][10] = {{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L},{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L},{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L},{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L},{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L},{0x3C47B753L,0x38FAE56CL,0x38FAE56CL,0x3C47B753L,(-1L),0x4BF4A577L,0x6D02EADEL,0x55C410A0L,0x18221674L,0x114C7832L}};
                int32_t *l_461 = &l_457;
                uint64_t l_462 = 0x1000032F84F184A2L;
                int i, j;
                l_458 ^= (l_457 = l_456);
                l_460[4][5] ^= (l_459 , 0x32C0550EL);
                l_461 = (void*)0;
                l_462--;
                unsigned int result = 0;
                result += l_456;
                result += l_457;
                result += l_458;
                result += l_459;
                int l_460_i0, l_460_i1;
                for (l_460_i0 = 0; l_460_i0 < 6; l_460_i0++) {
                    for (l_460_i1 = 0; l_460_i1 < 10; l_460_i1++) {
                        result += l_460[l_460_i0][l_460_i1];
                    }
                }
                result += l_462;
                atomic_add(&p_756->g_special_values[94 * get_linear_group_id() + 34], result);
            }
            else
            { /* block id: 167 */
                (1 + 1);
            }
            for (l_415 = 14; (l_415 != 38); l_415++)
            { /* block id: 172 */
                VECTOR(int16_t, 8) l_470 = (VECTOR(int16_t, 8))(0x09AAL, (VECTOR(int16_t, 4))(0x09AAL, (VECTOR(int16_t, 2))(0x09AAL, 0x729CL), 0x729CL), 0x729CL, 0x09AAL, 0x729CL);
                int32_t **l_484 = &p_756->g_97;
                int32_t l_485 = 1L;
                VECTOR(int64_t, 8) l_486 = (VECTOR(int64_t, 8))(0x0488E48183799C4FL, (VECTOR(int64_t, 4))(0x0488E48183799C4FL, (VECTOR(int64_t, 2))(0x0488E48183799C4FL, 0L), 0L), 0L, 0x0488E48183799C4FL, 0L);
                VECTOR(int64_t, 4) l_491 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x41E04819389255E9L), 0x41E04819389255E9L);
                int i;
                l_467--;
                l_485 ^= ((*l_450) = ((p_756->g_147.y <= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((**l_389), ((VECTOR(int16_t, 2))(l_470.s45)), 1L)))).w) | (((p_64 || (p_756->g_471[0] != (void*)0)) , (safe_sub_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_63, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_756->g_477.s44230702)).hi)), 0xBF0A4660L, 9UL, 1UL)).s5, ((safe_mul_func_uint16_t_u_u(((*l_446) ^= ((((0x338CL | p_64) >= (safe_div_func_uint64_t_u_u(((*l_393) = ((safe_lshift_func_uint8_t_u_u((l_484 == (void*)0), 0)) , p_756->g_15[0][1])), p_62))) <= 1UL) && FAKE_DIVERGE(p_756->local_2_offset, get_local_id(2), 10))), 0xDED2L)) || (*p_756->g_79)))) > 4L), p_64))) & p_63)));
                (*l_303) = ((*l_451) = ((*l_451) <= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(l_486.s32)), ((VECTOR(int64_t, 16))(p_756->g_487.xyyxxxxyyyxxyyxy)).s37, ((VECTOR(int64_t, 16))(p_756->g_488.s3523211136445530)).s56))), 0x77D274C05E1239B8L, (-1L))), ((VECTOR(int64_t, 8))(p_756->g_489.yxyyyyxx)).hi, ((VECTOR(int64_t, 4))(l_490.s0037))))).zzwywwxyzzxywwyw)).s0b, ((VECTOR(int64_t, 16))(l_491.wzyywxyywwxyxzyz)).se8))), 0x565B715398528BD3L, 0x24CD956A9CA3B6CEL)).y));
                return l_492;
            }
            (*l_303) ^= ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))((-2L), (-1L))), ((VECTOR(int32_t, 16))(p_756->g_493.sda3e611257352c35)).s2f))).odd;
        }
        else
        { /* block id: 183 */
            uint32_t l_508 = 4294967295UL;
            int32_t l_534 = 0L;
            for (l_453 = (-28); (l_453 != 2); l_453++)
            { /* block id: 186 */
                uint16_t l_535[9] = {65535UL,4UL,65535UL,65535UL,4UL,65535UL,65535UL,4UL,65535UL};
                int32_t *l_539 = &p_756->g_15[0][1];
                int i;
                for (l_355 = (-14); (l_355 > (-22)); l_355 = safe_sub_func_uint16_t_u_u(l_355, 2))
                { /* block id: 189 */
                    int32_t **l_500 = (void*)0;
                    int32_t *l_502 = &p_756->g_298;
                    int32_t **l_501 = &l_502;
                    int32_t l_503 = 0x38C84F87L;
                    uint32_t l_509 = 0x7FA3F4ACL;
                    int64_t ***l_514 = (void*)0;
                    int64_t **l_516 = (void*)0;
                    int64_t ***l_515 = &l_516;
                    int64_t **l_519 = &p_756->g_205;
                    int64_t ***l_518 = &l_519;
                    int16_t *l_525 = (void*)0;
                    int64_t *l_533[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_533[i] = &p_756->g_124;
                    (**l_389) = ((FAKE_DIVERGE(p_756->local_1_offset, get_local_id(1), 10) && (((p_63 = (safe_mul_func_uint8_t_u_u((((*l_501) = &p_62) != (void*)0), p_62))) < l_503) | (l_413[0] != &p_756->g_43))) < (((safe_add_func_uint16_t_u_u(((((*l_393) = (safe_rshift_func_uint8_t_u_u(9UL, GROUP_DIVERGE(1, 1)))) && (l_508 || l_503)) <= l_508), l_509)) || 0xA738L) | p_62));
                    l_535[8] = ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(0x3081L, (l_534 |= (p_756->g_15[3][4] , ((((*l_518) = (l_517[2][0] = ((*l_515) = &p_756->g_205))) != (p_756->g_520 = &p_756->g_205)) && ((safe_mul_func_uint64_t_u_u(0x6978B1BD36C6CC7AL, (l_509 , ((safe_add_func_int64_t_s_s(((l_525 != (void*)0) != ((l_503 = ((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((((VECTOR(uint16_t, 2))(l_532.xy)).lo , (1UL > FAKE_DIVERGE(p_756->group_0_offset, get_group_id(0), 10))) < 0x8A3540F9L) ^ p_61), p_756->g_240.z)) <= 0x16A01CD6BA936FD0L), p_62)), p_63)) , p_62)) , (*p_756->g_79))), l_508)) < l_508)))) >= p_64)))))) , (-1L)), l_509)) , p_63);
                    atomic_sub(&p_756->g_atomic_reduction[get_linear_group_id()], 0x36CF08B3L + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_756->v_collective += p_756->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    for (p_756->g_80 = 12; (p_756->g_80 > 14); p_756->g_80 = safe_add_func_uint8_t_u_u(p_756->g_80, 3))
                    { /* block id: 204 */
                        uint64_t l_538 = 18446744073709551611UL;
                        (**l_389) |= l_538;
                        (*l_303) |= l_538;
                    }
                }
                return l_539;
            }
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_756->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 8)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((!((((safe_mul_func_int8_t_s_s((!(((p_62 && (*l_303)) != ((((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(p_63, l_554)) > ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(0x00B7A3634B9D3EE5L, ((VECTOR(int64_t, 2))((-6L), 0x42037072AB6398BDL)), 0x4D014919F160D277L)).wyyzxxzz, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 1L)), ((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((0x3375L < p_64), (safe_unary_minus_func_int16_t_s(l_562)))) & ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_756->g_565.s06)).lo, (((VECTOR(int64_t, 8))((((safe_lshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s(((p_756->g_572 = ((*l_303) , l_570)) != (void*)0), p_62)) , (void*)0) != l_574), 0)) && 1L) < p_64), l_575, 1L, ((VECTOR(int64_t, 4))(0x3803AFBF9BBC24C3L)), (-1L))).s7 != (*l_303)))) < 0x6ED6L)), 0x1547L)) , 0x3071E8BADFCC1C30L), p_61, (-3L), (-1L), 0x037F68B15A2948E1L, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))(5L)), p_62, 2L, (-9L), (-2L), (-8L))))), ((VECTOR(int64_t, 16))(6L))))).scf13, ((VECTOR(int64_t, 4))(1L))))).wzyxzxwy))).lo)).y, p_63)) ^ 0x4CL)), 10)), (*l_303))) >= 1L) , p_61) , (void*)0) == (void*)0) ^ (*l_303))) == p_63)), p_756->g_147.y)) , &p_756->g_573[4][1]) != &p_756->g_573[0][0]) >= p_756->g_117.x)) && 0x64L), (*l_303))) == 0UL) | p_61), p_63)), 10))][(safe_mod_func_uint32_t_u_u(p_756->tid, 8))]));
    return (*p_756->g_235);
}


/* ------------------------------------------ */
/* 
 * reads : p_756->l_comm_values p_756->g_72 p_756->g_79 p_756->g_96 p_756->g_80 p_756->g_97 p_756->g_15 p_756->g_43 p_756->g_109 p_756->g_110 p_756->g_117 p_756->g_131 p_756->g_129 p_756->g_5 p_756->g_147 p_756->g_171 p_756->g_10 p_756->g_205 p_756->g_212 p_756->g_221 p_756->g_240 p_756->g_276 p_756->g_291
 * writes: p_756->g_72 p_756->g_96 p_756->g_80 p_756->g_97 p_756->g_43 p_756->g_124 p_756->g_156 p_756->g_158 p_756->g_129 p_756->g_171 p_756->g_205 p_756->g_147 p_756->g_221 p_756->g_235
 */
int8_t  func_66(uint32_t  p_67, struct S2 * p_756)
{ /* block id: 32 */
    uint32_t *l_71 = &p_756->g_72;
    int64_t *l_87[5][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int64_t **l_88 = &l_87[4][4][0];
    int32_t ***l_98 = &p_756->g_96[0][3];
    int32_t l_101[10];
    int16_t *l_134 = &p_756->g_43;
    int16_t **l_133 = &l_134;
    int32_t **l_265 = &p_756->g_97;
    VECTOR(uint16_t, 2) l_270 = (VECTOR(uint16_t, 2))(1UL, 0UL);
    VECTOR(uint16_t, 16) l_271 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    VECTOR(uint16_t, 4) l_272 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL);
    VECTOR(uint16_t, 4) l_273 = (VECTOR(uint16_t, 4))(0x4C26L, (VECTOR(uint16_t, 2))(0x4C26L, 65531UL), 65531UL);
    VECTOR(int16_t, 4) l_274 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L);
    VECTOR(int16_t, 16) l_275 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2C17L), 0x2C17L), 0x2C17L, 0L, 0x2C17L, (VECTOR(int16_t, 2))(0L, 0x2C17L), (VECTOR(int16_t, 2))(0L, 0x2C17L), 0L, 0x2C17L, 0L, 0x2C17L);
    uint32_t l_277 = 3UL;
    uint16_t **l_288 = (void*)0;
    uint16_t *l_290 = (void*)0;
    uint16_t **l_289 = &l_290;
    VECTOR(int32_t, 4) l_292 = (VECTOR(int32_t, 4))(0x26CDCC86L, (VECTOR(int32_t, 2))(0x26CDCC86L, (-4L)), (-4L));
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_101[i] = (-9L);
    (*l_265) = func_68(((((*l_71) &= p_756->l_comm_values[(safe_mod_func_uint32_t_u_u(p_756->tid, 8))]) ^ (func_73((safe_lshift_func_uint16_t_u_s(0x68EAL, ((void*)0 == p_756->g_79))), ((*l_133) = (((((((p_67 , 0x5706802AL) <= ((safe_lshift_func_int8_t_s_s((func_83(((*l_88) = l_87[4][4][0]), func_89(func_92(l_71, ((((*l_98) = p_756->g_96[0][3]) != (void*)0) > 18446744073709551611UL), l_88, p_756), l_101[4], p_756), &p_756->g_43, p_756) < FAKE_DIVERGE(p_756->local_0_offset, get_local_id(0), 10)), 4)) >= 18446744073709551615UL)) != 1L) , FAKE_DIVERGE(p_756->group_1_offset, get_group_id(1), 10)) , (*l_88)) == p_756->g_131) , &p_756->g_43)), l_71, p_756) > p_756->g_110.sc)) , (*l_98)), p_756->g_10, p_756);
    if (((VECTOR(int32_t, 4))(0x43AA443DL, (l_101[4] = (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((!(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_270.yx)), 0xAF77L, 0x3CE0L, ((VECTOR(uint16_t, 2))(l_271.sa8)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_272.zwxxzyzzzzzzxwwy)).lo)).even)).wxzzyzyywzyzxwzx)).s13, ((VECTOR(uint16_t, 2))(0x321AL, 0xBD10L))))), 4UL, 65535UL))))))).xzwzwwxwzxyxxzwx, ((VECTOR(uint16_t, 2))(l_273.zy)).yxyxxyxxxyyxyxyy))).s87)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(65530UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 16))(l_274.zywwwwwwyxyzxwyy)), ((VECTOR(int16_t, 16))(l_275.s71510854aa61c218))))).s7e)), 0x9212L)), ((VECTOR(uint16_t, 2))(p_756->g_276.s4c)).yxxx))).lo)))), 65533UL, 65535UL)), 65534UL, 0x59D9L)), 65535UL, 0x6746L)).hi)).s0 >= ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(0xFAD1L, 65531UL)).yxxy, ((VECTOR(uint16_t, 16))(0xA751L, ((l_277 == (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((l_71 == l_71), 2)) == p_756->g_109.s1), (safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((((*l_289) = func_89((l_87[4][4][0] == l_87[4][4][0]), p_67, p_756)) == p_756->g_291), p_67)) >= p_67) | p_756->g_171.y), p_756->g_5)) , (void*)0) == (void*)0), p_67))))) == 0x2E9A9C805CA05D6CL), ((VECTOR(uint16_t, 4))(0xB4F3L)), 0x0CC3L, 65535UL, p_67, ((VECTOR(uint16_t, 2))(0x4E23L)), 0xDDB9L, ((VECTOR(uint16_t, 2))(0xAB06L)), 0x6AF9L, 0xA57AL)).s7edd))).z)) | p_67) || p_67) >= l_292.x), 11)), 1)) , &l_134) == (void*)0)), 0L, 0x43B7B013L)).x)
    { /* block id: 105 */
        return p_756->g_240.x;
    }
    else
    { /* block id: 107 */
        return p_756->g_117.x;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_205 p_756->g_212 p_756->g_171 p_756->g_221 p_756->g_43 p_756->g_97 p_756->g_79 p_756->g_80 p_756->g_240 p_756->g_117 p_756->g_10 p_756->g_129
 * writes: p_756->g_205 p_756->g_147 p_756->g_156 p_756->g_221 p_756->g_129 p_756->g_97 p_756->g_96 p_756->g_235 p_756->g_80
 */
int32_t * func_68(int32_t ** p_69, int16_t  p_70, struct S2 * p_756)
{ /* block id: 74 */
    VECTOR(uint8_t, 8) l_213 = (VECTOR(uint8_t, 8))(0xEFL, (VECTOR(uint8_t, 4))(0xEFL, (VECTOR(uint8_t, 2))(0xEFL, 0x46L), 0x46L), 0x46L, 0xEFL, 0x46L);
    uint16_t *l_222[3][4][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int16_t *l_242 = (void*)0;
    int16_t **l_241 = &l_242;
    int16_t **l_244 = &l_242;
    VECTOR(int32_t, 8) l_249 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x2C07549FL), 0x2C07549FL), 0x2C07549FL, 3L, 0x2C07549FL);
    uint8_t l_261 = 1UL;
    int32_t *l_264 = (void*)0;
    int i, j, k;
    if ((safe_div_func_uint64_t_u_u(0x9805EA662F1453EFL, 0xCDCE5CD6D2EC17A5L)))
    { /* block id: 75 */
        VECTOR(uint8_t, 4) l_199 = (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 246UL), 246UL);
        int64_t *l_204 = (void*)0;
        int64_t **l_206 = &p_756->g_205;
        uint16_t *l_209[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_220[1];
        int32_t *l_223 = (void*)0;
        int32_t *l_224 = (void*)0;
        int32_t *l_225 = (void*)0;
        int32_t *l_226 = &p_756->g_129;
        int i;
        for (i = 0; i < 1; i++)
            l_220[i] = (void*)0;
        (*l_226) = (safe_rshift_func_int16_t_s_s(((l_199.x > p_70) > (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0x68L)).yxxx)))).xxyxwxxwyyxwyxwz, (int8_t)((l_204 != ((*l_206) = p_756->g_205)) ^ (safe_sub_func_uint16_t_u_u((l_209[5] == ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(p_756->g_212.xxxy)).yzwyxxyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_756->g_171.y, ((VECTOR(uint8_t, 2))(7UL, 0x4FL)), 251UL)).hi)).xyyyyxxx))).s2467444127166753)).s93, ((VECTOR(uint8_t, 16))(l_213.s2252376333171051)).s2e))).yyxxyxxyxxxyxxyx)).sf, 1)) , ((safe_sub_func_int64_t_s_s(((((p_756->g_221 |= (p_756->g_156 = (safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((&p_756->g_97 != (void*)0), (p_756->g_147.y = ((0x16A7A60AL != 4294967295UL) >= l_213.s0)))) != GROUP_DIVERGE(0, 1)), p_70)))) , p_70) ^ p_756->g_212.y) , l_199.w), FAKE_DIVERGE(p_756->group_2_offset, get_group_id(2), 10))) , l_222[0][1][2]))), p_70)))))).s6, 5)), l_199.x))), p_756->g_43));
        (*p_69) = (*p_69);
        (*l_226) = 0x739CEC11L;
    }
    else
    { /* block id: 83 */
        int32_t **l_229 = &p_756->g_97;
        int32_t ***l_230 = (void*)0;
        int32_t ***l_231 = &p_756->g_96[1][5];
        int32_t ***l_232 = (void*)0;
        int32_t **l_234 = &p_756->g_97;
        int32_t ***l_233[1];
        int16_t **l_243 = &l_242;
        int64_t *l_250 = (void*)0;
        int8_t *l_251[5];
        int8_t l_256 = (-9L);
        int64_t l_258 = 1L;
        int16_t l_259[5][3][5] = {{{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L}},{{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L}},{{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L}},{{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L}},{{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L},{9L,1L,9L,9L,1L}}};
        int16_t l_260 = 0x1FC5L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_233[i] = &l_234;
        for (i = 0; i < 5; i++)
            l_251[i] = (void*)0;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_756->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 8)), permutations[(safe_mod_func_uint32_t_u_u((((((((safe_add_func_uint32_t_u_u(((*p_756->g_79) |= (((*l_231) = l_229) != (p_756->g_235 = p_69))), (safe_lshift_func_int8_t_s_s(p_70, (p_756->g_221 = (safe_mod_func_int16_t_s_s((((VECTOR(int16_t, 16))(p_756->g_240.yyyxxzxxzxyxwwzz)).s0 == (p_70 ^ (+(l_241 != (l_244 = l_243))))), ((safe_add_func_int64_t_s_s((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_249.s43)).yxxyxxxx)))).s4, 1UL)) , l_250) != l_250), 0x9A92ECBBEFF508ABL)) , p_70)))))))) , &p_70) == &p_70) && p_70) != p_756->g_117.z) > p_756->g_10) < p_756->g_240.x), 10))][(safe_mod_func_uint32_t_u_u(p_756->tid, 8))]));
        for (p_756->g_129 = 0; (p_756->g_129 == (-1)); p_756->g_129 = safe_sub_func_uint64_t_u_u(p_756->g_129, 7))
        { /* block id: 94 */
            uint32_t l_254 = 1UL;
            int8_t l_255 = 0x3DL;
            l_255 |= l_254;
        }
        l_261++;
    }
    (*p_69) = l_264;
    (*p_69) = (*p_69);
    return l_264;
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_43 p_756->g_129 p_756->g_110 p_756->g_5 p_756->g_147 p_756->g_117 p_756->g_15 p_756->l_comm_values p_756->g_171 p_756->g_97 p_756->g_10 p_756->g_80
 * writes: p_756->g_156 p_756->g_158 p_756->g_129 p_756->g_171 p_756->g_43
 */
uint16_t  func_73(uint16_t  p_74, int16_t * p_75, uint32_t * p_76, struct S2 * p_756)
{ /* block id: 60 */
    VECTOR(int16_t, 2) l_141 = (VECTOR(int16_t, 2))(0x66ADL, (-3L));
    VECTOR(uint16_t, 16) l_142 = (VECTOR(uint16_t, 16))(0x514DL, (VECTOR(uint16_t, 4))(0x514DL, (VECTOR(uint16_t, 2))(0x514DL, 0x71E7L), 0x71E7L), 0x71E7L, 0x514DL, 0x71E7L, (VECTOR(uint16_t, 2))(0x514DL, 0x71E7L), (VECTOR(uint16_t, 2))(0x514DL, 0x71E7L), 0x514DL, 0x71E7L, 0x514DL, 0x71E7L);
    uint16_t *l_154 = (void*)0;
    uint64_t l_155 = 18446744073709551615UL;
    uint8_t *l_157 = &p_756->g_158;
    int32_t *l_159 = (void*)0;
    int32_t *l_160 = (void*)0;
    int32_t *l_161 = (void*)0;
    int32_t *l_162 = (void*)0;
    int32_t *l_163 = (void*)0;
    int32_t *l_164[1][4][9] = {{{&p_756->g_5,&p_756->g_129,&p_756->g_129,&p_756->g_5,&p_756->g_15[0][1],(void*)0,(void*)0,&p_756->g_15[0][1],&p_756->g_5},{&p_756->g_5,&p_756->g_129,&p_756->g_129,&p_756->g_5,&p_756->g_15[0][1],(void*)0,(void*)0,&p_756->g_15[0][1],&p_756->g_5},{&p_756->g_5,&p_756->g_129,&p_756->g_129,&p_756->g_5,&p_756->g_15[0][1],(void*)0,(void*)0,&p_756->g_15[0][1],&p_756->g_5},{&p_756->g_5,&p_756->g_129,&p_756->g_129,&p_756->g_5,&p_756->g_15[0][1],(void*)0,(void*)0,&p_756->g_15[0][1],&p_756->g_5}}};
    uint8_t l_165 = 0xD8L;
    int64_t l_170 = 6L;
    int16_t l_194 = 0x51AAL;
    int i, j, k;
    l_165 = (((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((*p_75), ((((VECTOR(int16_t, 16))(l_141.xyyxxyxyyyyxxyxy)).se , (l_141.y , ((VECTOR(uint16_t, 8))(l_142.se6f1747e)).s3)) <= (((p_756->g_129 , (((*l_157) = ((p_756->g_156 = (((0x7E17L < (p_74 = 65535UL)) != ((~(safe_add_func_uint16_t_u_u(p_756->g_110.s9, (l_155 = ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_756->g_5, ((VECTOR(uint16_t, 2))(0x7184L, 9UL)), ((VECTOR(uint16_t, 4))(p_756->g_147.yyxx)), 0x5F6EL)), (!(((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), ((((safe_lshift_func_uint16_t_u_u((l_142.s6 || (safe_div_func_int8_t_s_s(((((18446744073709551610UL >= l_142.s5) , l_141.y) || p_756->g_117.z) != p_756->g_15[4][0]), 255UL))), 4)) & l_142.s7) || l_141.x) == 1L))) , l_141.y) && p_756->l_comm_values[(safe_mod_func_uint32_t_u_u(p_756->tid, 8))])), ((VECTOR(uint16_t, 4))(0UL)), p_756->g_147.y, 1UL, 1UL)).hi))).s31, ((VECTOR(uint16_t, 2))(0xE59FL))))).yxyxyxxx)).s0, 4UL)) >= l_141.y))))) ^ FAKE_DIVERGE(p_756->global_0_offset, get_global_id(0), 10))) <= 5L)) != l_142.s6)) == l_142.sb)) > l_141.x) <= 0L)))), 1)), l_141.x)) , p_74) , l_141.y);
    for (p_756->g_129 = 0; (p_756->g_129 <= 10); p_756->g_129 = safe_add_func_uint16_t_u_u(p_756->g_129, 9))
    { /* block id: 68 */
        int16_t l_168 = 8L;
        int32_t l_169[5][6][8] = {{{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL}},{{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL}},{{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL}},{{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL}},{{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL},{5L,1L,(-8L),5L,0x71066C91L,0x7C12618DL,(-5L),0x661FE9FDL}}};
        int i, j, k;
        p_756->g_171.x--;
    }
    l_194 ^= ((p_74 > (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_756->g_43 = p_756->g_5), 0x7638L)), 5)), (p_74 && GROUP_DIVERGE(2, 1))))) || (((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (*p_756->g_97))), 13)) | ((safe_div_func_uint8_t_u_u(((*p_756->g_97) , p_756->g_171.x), (safe_sub_func_uint16_t_u_u(p_756->g_117.y, (safe_mod_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_74, 2)), (*p_75))) == FAKE_DIVERGE(p_756->global_1_offset, get_global_id(1), 10)), 4294967295UL)))))) || p_74)) || 255UL));
    return p_756->g_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_43 p_756->g_109 p_756->g_110 p_756->g_97 p_756->g_80 p_756->g_117 p_756->g_79
 * writes: p_756->g_97 p_756->g_43 p_756->g_124
 */
uint8_t  func_83(int64_t * p_84, int16_t * p_85, int16_t * p_86, struct S2 * p_756)
{ /* block id: 46 */
    uint32_t *l_103 = &p_756->g_80;
    int32_t **l_104 = &p_756->g_97;
    uint8_t l_108 = 0x30L;
    VECTOR(int32_t, 2) l_111 = (VECTOR(int32_t, 2))(0x1D446CA2L, 6L);
    VECTOR(int64_t, 16) l_114 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x3343C832F20CC15FL), 0x3343C832F20CC15FL), 0x3343C832F20CC15FL, 1L, 0x3343C832F20CC15FL, (VECTOR(int64_t, 2))(1L, 0x3343C832F20CC15FL), (VECTOR(int64_t, 2))(1L, 0x3343C832F20CC15FL), 1L, 0x3343C832F20CC15FL, 1L, 0x3343C832F20CC15FL);
    VECTOR(int32_t, 4) l_115 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x3F436BBBL), 0x3F436BBBL);
    VECTOR(int32_t, 2) l_116 = (VECTOR(int32_t, 2))(0x3F616C20L, 0L);
    int16_t *l_119 = &p_756->g_43;
    int16_t **l_118 = &l_119;
    int64_t *l_122 = (void*)0;
    int64_t *l_123 = &p_756->g_124;
    int16_t *l_126 = (void*)0;
    int16_t **l_125 = &l_126;
    int32_t *l_127 = (void*)0;
    int32_t *l_128[9][8] = {{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0},{(void*)0,&p_756->g_15[2][0],(void*)0,&p_756->g_15[7][6],(void*)0,&p_756->g_15[2][0],(void*)0,(void*)0}};
    int32_t l_130[10] = {0x1AB53173L,(-4L),0x1AB53173L,0x1AB53173L,(-4L),0x1AB53173L,0x1AB53173L,(-4L),0x1AB53173L,0x1AB53173L};
    int i, j;
    (*l_104) = ((&p_756->g_80 != l_103) , l_103);
    for (p_756->g_43 = 10; (p_756->g_43 > 15); p_756->g_43++)
    { /* block id: 50 */
        int32_t *l_107 = &p_756->g_10;
        (*l_104) = l_107;
        return l_108;
    }
    l_130[4] |= ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(p_756->g_109.s59)).xxyy, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0L)), (-1L), (-5L))).zyxwyxxzzwxzwywy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(0x7765441CL, 0L)).xxyxyyyyyyxyyxxy, ((VECTOR(int32_t, 2))(p_756->g_110.s76)).xxxxyxyxxxyyyyxx))).s7ff6, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_111.xyxy)).yzyyyzyy, (int32_t)(safe_mod_func_uint32_t_u_u(1UL, (((VECTOR(int64_t, 4))(l_114.s2e48)).w , (**l_104))))))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_115.xz)).yxyxyyxx)), ((VECTOR(int32_t, 16))(l_116.xxyxyxxxyxxxyyyx)).even))).hi))))).even, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(p_756->g_117.wz)).yxyy, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((**l_104) && (((*l_118) = p_86) != ((*l_125) = func_89((**l_104), ((((*l_123) = (((GROUP_DIVERGE(2, 1) , ((**l_104) < p_756->g_109.sb)) ^ (*p_756->g_79)) , (safe_mul_func_int16_t_s_s(((*p_86) , p_756->g_109.se), (*p_85))))) , (**l_104)) , (**l_104)), p_756)))), (**l_104), ((VECTOR(int32_t, 8))(0x02F86C40L)), (-7L), (**l_104), ((VECTOR(int32_t, 2))(0L)), (-2L), 0x012F185FL)).s0a)).yyyyyyxy)).odd, ((VECTOR(int32_t, 4))(0x462104B1L))))), (int32_t)0x3C6725D5L)))))).lo))))).yxyyyyyyyxxxyxxy))).s18a7))).odd, ((VECTOR(int32_t, 2))((-5L))), ((VECTOR(int32_t, 2))(1L))))).lo;
    return p_756->g_43;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_89(int32_t  p_90, int32_t  p_91, struct S2 * p_756)
{ /* block id: 44 */
    int16_t *l_102 = &p_756->g_43;
    return l_102;
}


/* ------------------------------------------ */
/* 
 * reads : p_756->g_80 p_756->g_97 p_756->g_15
 * writes: p_756->g_80
 */
int32_t  func_92(uint32_t * p_93, uint64_t  p_94, int64_t ** p_95, struct S2 * p_756)
{ /* block id: 36 */
    for (p_756->g_80 = 0; (p_756->g_80 > 2); p_756->g_80 = safe_add_func_int16_t_s_s(p_756->g_80, 2))
    { /* block id: 39 */
        if (p_94)
            break;
        return p_94;
    }
    return (*p_756->g_97);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_comm_values[i] = 1;
    struct S2 c_757;
    struct S2* p_756 = &c_757;
    struct S2 c_758 = {
        6L, // p_756->g_5
        &p_756->g_5, // p_756->g_4
        0x393DDA37L, // p_756->g_8
        0x0868BB4AL, // p_756->g_9
        (-9L), // p_756->g_10
        0L, // p_756->g_13
        (-6L), // p_756->g_14
        {{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)},{(-1L),(-1L),1L,0x5B0E82CAL,0x5378470EL,0x5B0E82CAL,1L,(-1L)}}, // p_756->g_15
        (-7L), // p_756->g_30
        0x3F6A420A61B3E233L, // p_756->g_42
        0L, // p_756->g_43
        {{{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL}},{{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL},{0x357CL,(-1L),0x357CL,0x357CL,(-1L),0x357CL}}}, // p_756->g_44
        0x122BF4B2L, // p_756->g_45
        1UL, // p_756->g_72
        0xFBEB5A7EL, // p_756->g_80
        &p_756->g_80, // p_756->g_79
        &p_756->g_15[0][1], // p_756->g_97
        {{&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97},{&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97,&p_756->g_97}}, // p_756->g_96
        (VECTOR(int32_t, 16))(0x1A06BD8DL, (VECTOR(int32_t, 4))(0x1A06BD8DL, (VECTOR(int32_t, 2))(0x1A06BD8DL, 0x0DA77971L), 0x0DA77971L), 0x0DA77971L, 0x1A06BD8DL, 0x0DA77971L, (VECTOR(int32_t, 2))(0x1A06BD8DL, 0x0DA77971L), (VECTOR(int32_t, 2))(0x1A06BD8DL, 0x0DA77971L), 0x1A06BD8DL, 0x0DA77971L, 0x1A06BD8DL, 0x0DA77971L), // p_756->g_109
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_756->g_110
        (VECTOR(int32_t, 4))(0x6818DDB1L, (VECTOR(int32_t, 2))(0x6818DDB1L, (-6L)), (-6L)), // p_756->g_117
        (-1L), // p_756->g_124
        0x2DB51A9EL, // p_756->g_129
        0x5F98057AD140F5BEL, // p_756->g_132
        &p_756->g_132, // p_756->g_131
        (VECTOR(uint16_t, 2))(1UL, 1UL), // p_756->g_147
        4294967291UL, // p_756->g_156
        0UL, // p_756->g_158
        (VECTOR(uint8_t, 2))(0x04L, 0UL), // p_756->g_171
        (void*)0, // p_756->g_205
        (VECTOR(uint8_t, 2))(0xDAL, 1UL), // p_756->g_212
        0x62L, // p_756->g_221
        &p_756->g_97, // p_756->g_235
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6852L), 0x6852L), // p_756->g_240
        5L, // p_756->g_257
        (VECTOR(uint16_t, 16))(0xA4C5L, (VECTOR(uint16_t, 4))(0xA4C5L, (VECTOR(uint16_t, 2))(0xA4C5L, 65528UL), 65528UL), 65528UL, 0xA4C5L, 65528UL, (VECTOR(uint16_t, 2))(0xA4C5L, 65528UL), (VECTOR(uint16_t, 2))(0xA4C5L, 65528UL), 0xA4C5L, 65528UL, 0xA4C5L, 65528UL), // p_756->g_276
        (void*)0, // p_756->g_291
        0x6D988472L, // p_756->g_298
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1F0CL), 0x1F0CL), // p_756->g_317
        (VECTOR(uint32_t, 8))(0xB87569FBL, (VECTOR(uint32_t, 4))(0xB87569FBL, (VECTOR(uint32_t, 2))(0xB87569FBL, 0x8CEB55DCL), 0x8CEB55DCL), 0x8CEB55DCL, 0xB87569FBL, 0x8CEB55DCL), // p_756->g_328
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_756->g_332
        &p_756->g_332[3][7], // p_756->g_331
        (VECTOR(uint16_t, 8))(0xCF1FL, (VECTOR(uint16_t, 4))(0xCF1FL, (VECTOR(uint16_t, 2))(0xCF1FL, 65535UL), 65535UL), 65535UL, 0xCF1FL, 65535UL), // p_756->g_338
        (VECTOR(uint8_t, 2))(0x75L, 0x2FL), // p_756->g_372
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x19L), 0x19L), // p_756->g_373
        (VECTOR(uint16_t, 16))(0x2967L, (VECTOR(uint16_t, 4))(0x2967L, (VECTOR(uint16_t, 2))(0x2967L, 6UL), 6UL), 6UL, 0x2967L, 6UL, (VECTOR(uint16_t, 2))(0x2967L, 6UL), (VECTOR(uint16_t, 2))(0x2967L, 6UL), 0x2967L, 6UL, 0x2967L, 6UL), // p_756->g_375
        0x4F818B770644123FL, // p_756->g_394
        252UL, // p_756->g_445
        &p_756->g_445, // p_756->g_444
        &p_756->g_444, // p_756->g_443
        &p_756->g_205, // p_756->g_472
        {&p_756->g_472,&p_756->g_472}, // p_756->g_471
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x830B90B5L), 0x830B90B5L), 0x830B90B5L, 4294967295UL, 0x830B90B5L), // p_756->g_477
        (VECTOR(int64_t, 2))(0x6F33DC561DC1F036L, 3L), // p_756->g_487
        (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-2L)), (-2L)), (-2L), (-5L), (-2L)), // p_756->g_488
        (VECTOR(int64_t, 2))((-9L), 0x71E7FF3AD6C9055AL), // p_756->g_489
        (VECTOR(int32_t, 16))(0x2F7AF3A9L, (VECTOR(int32_t, 4))(0x2F7AF3A9L, (VECTOR(int32_t, 2))(0x2F7AF3A9L, 0x4C8AD50CL), 0x4C8AD50CL), 0x4C8AD50CL, 0x2F7AF3A9L, 0x4C8AD50CL, (VECTOR(int32_t, 2))(0x2F7AF3A9L, 0x4C8AD50CL), (VECTOR(int32_t, 2))(0x2F7AF3A9L, 0x4C8AD50CL), 0x2F7AF3A9L, 0x4C8AD50CL, 0x2F7AF3A9L, 0x4C8AD50CL), // p_756->g_493
        &p_756->g_205, // p_756->g_520
        (VECTOR(int8_t, 16))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, (-7L)), (-7L)), (-7L), 0x5FL, (-7L), (VECTOR(int8_t, 2))(0x5FL, (-7L)), (VECTOR(int8_t, 2))(0x5FL, (-7L)), 0x5FL, (-7L), 0x5FL, (-7L)), // p_756->g_565
        {{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298},{&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298,&p_756->g_298}}, // p_756->g_573
        &p_756->g_573[0][0], // p_756->g_572
        {-1L}, // p_756->g_621
        &p_756->g_13, // p_756->g_630
        (VECTOR(int32_t, 2))(0x2DF02E97L, 0x42DE5508L), // p_756->g_634
        (void*)0, // p_756->g_658
        {&p_756->g_658,&p_756->g_658,(void*)0,&p_756->g_658,&p_756->g_658,&p_756->g_658,&p_756->g_658,(void*)0,&p_756->g_658,&p_756->g_658}, // p_756->g_657
        (VECTOR(uint64_t, 2))(2UL, 0x57E2D88F33F61931L), // p_756->g_700
        (VECTOR(uint64_t, 16))(0xA23CACB1C8DCFEBAL, (VECTOR(uint64_t, 4))(0xA23CACB1C8DCFEBAL, (VECTOR(uint64_t, 2))(0xA23CACB1C8DCFEBAL, 1UL), 1UL), 1UL, 0xA23CACB1C8DCFEBAL, 1UL, (VECTOR(uint64_t, 2))(0xA23CACB1C8DCFEBAL, 1UL), (VECTOR(uint64_t, 2))(0xA23CACB1C8DCFEBAL, 1UL), 0xA23CACB1C8DCFEBAL, 1UL, 0xA23CACB1C8DCFEBAL, 1UL), // p_756->g_711
        (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65534UL), 65534UL), 65534UL, 65526UL, 65534UL), // p_756->g_719
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_756->g_734
        4L, // p_756->g_737
        {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}, // p_756->g_741
        0x66306B30L, // p_756->g_751
        0, // p_756->v_collective
        sequence_input[get_global_id(0)], // p_756->global_0_offset
        sequence_input[get_global_id(1)], // p_756->global_1_offset
        sequence_input[get_global_id(2)], // p_756->global_2_offset
        sequence_input[get_local_id(0)], // p_756->local_0_offset
        sequence_input[get_local_id(1)], // p_756->local_1_offset
        sequence_input[get_local_id(2)], // p_756->local_2_offset
        sequence_input[get_group_id(0)], // p_756->group_0_offset
        sequence_input[get_group_id(1)], // p_756->group_1_offset
        sequence_input[get_group_id(2)], // p_756->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 8)), permutations[0][get_linear_local_id()])), // p_756->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_757 = c_758;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_756);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_756->g_5, "p_756->g_5", print_hash_value);
    transparent_crc(p_756->g_8, "p_756->g_8", print_hash_value);
    transparent_crc(p_756->g_9, "p_756->g_9", print_hash_value);
    transparent_crc(p_756->g_10, "p_756->g_10", print_hash_value);
    transparent_crc(p_756->g_13, "p_756->g_13", print_hash_value);
    transparent_crc(p_756->g_14, "p_756->g_14", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_756->g_15[i][j], "p_756->g_15[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_756->g_30, "p_756->g_30", print_hash_value);
    transparent_crc(p_756->g_42, "p_756->g_42", print_hash_value);
    transparent_crc(p_756->g_43, "p_756->g_43", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_756->g_44[i][j][k], "p_756->g_44[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_756->g_45, "p_756->g_45", print_hash_value);
    transparent_crc(p_756->g_72, "p_756->g_72", print_hash_value);
    transparent_crc(p_756->g_80, "p_756->g_80", print_hash_value);
    transparent_crc(p_756->g_109.s0, "p_756->g_109.s0", print_hash_value);
    transparent_crc(p_756->g_109.s1, "p_756->g_109.s1", print_hash_value);
    transparent_crc(p_756->g_109.s2, "p_756->g_109.s2", print_hash_value);
    transparent_crc(p_756->g_109.s3, "p_756->g_109.s3", print_hash_value);
    transparent_crc(p_756->g_109.s4, "p_756->g_109.s4", print_hash_value);
    transparent_crc(p_756->g_109.s5, "p_756->g_109.s5", print_hash_value);
    transparent_crc(p_756->g_109.s6, "p_756->g_109.s6", print_hash_value);
    transparent_crc(p_756->g_109.s7, "p_756->g_109.s7", print_hash_value);
    transparent_crc(p_756->g_109.s8, "p_756->g_109.s8", print_hash_value);
    transparent_crc(p_756->g_109.s9, "p_756->g_109.s9", print_hash_value);
    transparent_crc(p_756->g_109.sa, "p_756->g_109.sa", print_hash_value);
    transparent_crc(p_756->g_109.sb, "p_756->g_109.sb", print_hash_value);
    transparent_crc(p_756->g_109.sc, "p_756->g_109.sc", print_hash_value);
    transparent_crc(p_756->g_109.sd, "p_756->g_109.sd", print_hash_value);
    transparent_crc(p_756->g_109.se, "p_756->g_109.se", print_hash_value);
    transparent_crc(p_756->g_109.sf, "p_756->g_109.sf", print_hash_value);
    transparent_crc(p_756->g_110.s0, "p_756->g_110.s0", print_hash_value);
    transparent_crc(p_756->g_110.s1, "p_756->g_110.s1", print_hash_value);
    transparent_crc(p_756->g_110.s2, "p_756->g_110.s2", print_hash_value);
    transparent_crc(p_756->g_110.s3, "p_756->g_110.s3", print_hash_value);
    transparent_crc(p_756->g_110.s4, "p_756->g_110.s4", print_hash_value);
    transparent_crc(p_756->g_110.s5, "p_756->g_110.s5", print_hash_value);
    transparent_crc(p_756->g_110.s6, "p_756->g_110.s6", print_hash_value);
    transparent_crc(p_756->g_110.s7, "p_756->g_110.s7", print_hash_value);
    transparent_crc(p_756->g_110.s8, "p_756->g_110.s8", print_hash_value);
    transparent_crc(p_756->g_110.s9, "p_756->g_110.s9", print_hash_value);
    transparent_crc(p_756->g_110.sa, "p_756->g_110.sa", print_hash_value);
    transparent_crc(p_756->g_110.sb, "p_756->g_110.sb", print_hash_value);
    transparent_crc(p_756->g_110.sc, "p_756->g_110.sc", print_hash_value);
    transparent_crc(p_756->g_110.sd, "p_756->g_110.sd", print_hash_value);
    transparent_crc(p_756->g_110.se, "p_756->g_110.se", print_hash_value);
    transparent_crc(p_756->g_110.sf, "p_756->g_110.sf", print_hash_value);
    transparent_crc(p_756->g_117.x, "p_756->g_117.x", print_hash_value);
    transparent_crc(p_756->g_117.y, "p_756->g_117.y", print_hash_value);
    transparent_crc(p_756->g_117.z, "p_756->g_117.z", print_hash_value);
    transparent_crc(p_756->g_117.w, "p_756->g_117.w", print_hash_value);
    transparent_crc(p_756->g_124, "p_756->g_124", print_hash_value);
    transparent_crc(p_756->g_129, "p_756->g_129", print_hash_value);
    transparent_crc(p_756->g_132, "p_756->g_132", print_hash_value);
    transparent_crc(p_756->g_147.x, "p_756->g_147.x", print_hash_value);
    transparent_crc(p_756->g_147.y, "p_756->g_147.y", print_hash_value);
    transparent_crc(p_756->g_156, "p_756->g_156", print_hash_value);
    transparent_crc(p_756->g_158, "p_756->g_158", print_hash_value);
    transparent_crc(p_756->g_171.x, "p_756->g_171.x", print_hash_value);
    transparent_crc(p_756->g_171.y, "p_756->g_171.y", print_hash_value);
    transparent_crc(p_756->g_212.x, "p_756->g_212.x", print_hash_value);
    transparent_crc(p_756->g_212.y, "p_756->g_212.y", print_hash_value);
    transparent_crc(p_756->g_221, "p_756->g_221", print_hash_value);
    transparent_crc(p_756->g_240.x, "p_756->g_240.x", print_hash_value);
    transparent_crc(p_756->g_240.y, "p_756->g_240.y", print_hash_value);
    transparent_crc(p_756->g_240.z, "p_756->g_240.z", print_hash_value);
    transparent_crc(p_756->g_240.w, "p_756->g_240.w", print_hash_value);
    transparent_crc(p_756->g_257, "p_756->g_257", print_hash_value);
    transparent_crc(p_756->g_276.s0, "p_756->g_276.s0", print_hash_value);
    transparent_crc(p_756->g_276.s1, "p_756->g_276.s1", print_hash_value);
    transparent_crc(p_756->g_276.s2, "p_756->g_276.s2", print_hash_value);
    transparent_crc(p_756->g_276.s3, "p_756->g_276.s3", print_hash_value);
    transparent_crc(p_756->g_276.s4, "p_756->g_276.s4", print_hash_value);
    transparent_crc(p_756->g_276.s5, "p_756->g_276.s5", print_hash_value);
    transparent_crc(p_756->g_276.s6, "p_756->g_276.s6", print_hash_value);
    transparent_crc(p_756->g_276.s7, "p_756->g_276.s7", print_hash_value);
    transparent_crc(p_756->g_276.s8, "p_756->g_276.s8", print_hash_value);
    transparent_crc(p_756->g_276.s9, "p_756->g_276.s9", print_hash_value);
    transparent_crc(p_756->g_276.sa, "p_756->g_276.sa", print_hash_value);
    transparent_crc(p_756->g_276.sb, "p_756->g_276.sb", print_hash_value);
    transparent_crc(p_756->g_276.sc, "p_756->g_276.sc", print_hash_value);
    transparent_crc(p_756->g_276.sd, "p_756->g_276.sd", print_hash_value);
    transparent_crc(p_756->g_276.se, "p_756->g_276.se", print_hash_value);
    transparent_crc(p_756->g_276.sf, "p_756->g_276.sf", print_hash_value);
    transparent_crc(p_756->g_298, "p_756->g_298", print_hash_value);
    transparent_crc(p_756->g_317.x, "p_756->g_317.x", print_hash_value);
    transparent_crc(p_756->g_317.y, "p_756->g_317.y", print_hash_value);
    transparent_crc(p_756->g_317.z, "p_756->g_317.z", print_hash_value);
    transparent_crc(p_756->g_317.w, "p_756->g_317.w", print_hash_value);
    transparent_crc(p_756->g_328.s0, "p_756->g_328.s0", print_hash_value);
    transparent_crc(p_756->g_328.s1, "p_756->g_328.s1", print_hash_value);
    transparent_crc(p_756->g_328.s2, "p_756->g_328.s2", print_hash_value);
    transparent_crc(p_756->g_328.s3, "p_756->g_328.s3", print_hash_value);
    transparent_crc(p_756->g_328.s4, "p_756->g_328.s4", print_hash_value);
    transparent_crc(p_756->g_328.s5, "p_756->g_328.s5", print_hash_value);
    transparent_crc(p_756->g_328.s6, "p_756->g_328.s6", print_hash_value);
    transparent_crc(p_756->g_328.s7, "p_756->g_328.s7", print_hash_value);
    transparent_crc(p_756->g_338.s0, "p_756->g_338.s0", print_hash_value);
    transparent_crc(p_756->g_338.s1, "p_756->g_338.s1", print_hash_value);
    transparent_crc(p_756->g_338.s2, "p_756->g_338.s2", print_hash_value);
    transparent_crc(p_756->g_338.s3, "p_756->g_338.s3", print_hash_value);
    transparent_crc(p_756->g_338.s4, "p_756->g_338.s4", print_hash_value);
    transparent_crc(p_756->g_338.s5, "p_756->g_338.s5", print_hash_value);
    transparent_crc(p_756->g_338.s6, "p_756->g_338.s6", print_hash_value);
    transparent_crc(p_756->g_338.s7, "p_756->g_338.s7", print_hash_value);
    transparent_crc(p_756->g_372.x, "p_756->g_372.x", print_hash_value);
    transparent_crc(p_756->g_372.y, "p_756->g_372.y", print_hash_value);
    transparent_crc(p_756->g_373.x, "p_756->g_373.x", print_hash_value);
    transparent_crc(p_756->g_373.y, "p_756->g_373.y", print_hash_value);
    transparent_crc(p_756->g_373.z, "p_756->g_373.z", print_hash_value);
    transparent_crc(p_756->g_373.w, "p_756->g_373.w", print_hash_value);
    transparent_crc(p_756->g_375.s0, "p_756->g_375.s0", print_hash_value);
    transparent_crc(p_756->g_375.s1, "p_756->g_375.s1", print_hash_value);
    transparent_crc(p_756->g_375.s2, "p_756->g_375.s2", print_hash_value);
    transparent_crc(p_756->g_375.s3, "p_756->g_375.s3", print_hash_value);
    transparent_crc(p_756->g_375.s4, "p_756->g_375.s4", print_hash_value);
    transparent_crc(p_756->g_375.s5, "p_756->g_375.s5", print_hash_value);
    transparent_crc(p_756->g_375.s6, "p_756->g_375.s6", print_hash_value);
    transparent_crc(p_756->g_375.s7, "p_756->g_375.s7", print_hash_value);
    transparent_crc(p_756->g_375.s8, "p_756->g_375.s8", print_hash_value);
    transparent_crc(p_756->g_375.s9, "p_756->g_375.s9", print_hash_value);
    transparent_crc(p_756->g_375.sa, "p_756->g_375.sa", print_hash_value);
    transparent_crc(p_756->g_375.sb, "p_756->g_375.sb", print_hash_value);
    transparent_crc(p_756->g_375.sc, "p_756->g_375.sc", print_hash_value);
    transparent_crc(p_756->g_375.sd, "p_756->g_375.sd", print_hash_value);
    transparent_crc(p_756->g_375.se, "p_756->g_375.se", print_hash_value);
    transparent_crc(p_756->g_375.sf, "p_756->g_375.sf", print_hash_value);
    transparent_crc(p_756->g_394, "p_756->g_394", print_hash_value);
    transparent_crc(p_756->g_445, "p_756->g_445", print_hash_value);
    transparent_crc(p_756->g_477.s0, "p_756->g_477.s0", print_hash_value);
    transparent_crc(p_756->g_477.s1, "p_756->g_477.s1", print_hash_value);
    transparent_crc(p_756->g_477.s2, "p_756->g_477.s2", print_hash_value);
    transparent_crc(p_756->g_477.s3, "p_756->g_477.s3", print_hash_value);
    transparent_crc(p_756->g_477.s4, "p_756->g_477.s4", print_hash_value);
    transparent_crc(p_756->g_477.s5, "p_756->g_477.s5", print_hash_value);
    transparent_crc(p_756->g_477.s6, "p_756->g_477.s6", print_hash_value);
    transparent_crc(p_756->g_477.s7, "p_756->g_477.s7", print_hash_value);
    transparent_crc(p_756->g_487.x, "p_756->g_487.x", print_hash_value);
    transparent_crc(p_756->g_487.y, "p_756->g_487.y", print_hash_value);
    transparent_crc(p_756->g_488.s0, "p_756->g_488.s0", print_hash_value);
    transparent_crc(p_756->g_488.s1, "p_756->g_488.s1", print_hash_value);
    transparent_crc(p_756->g_488.s2, "p_756->g_488.s2", print_hash_value);
    transparent_crc(p_756->g_488.s3, "p_756->g_488.s3", print_hash_value);
    transparent_crc(p_756->g_488.s4, "p_756->g_488.s4", print_hash_value);
    transparent_crc(p_756->g_488.s5, "p_756->g_488.s5", print_hash_value);
    transparent_crc(p_756->g_488.s6, "p_756->g_488.s6", print_hash_value);
    transparent_crc(p_756->g_488.s7, "p_756->g_488.s7", print_hash_value);
    transparent_crc(p_756->g_489.x, "p_756->g_489.x", print_hash_value);
    transparent_crc(p_756->g_489.y, "p_756->g_489.y", print_hash_value);
    transparent_crc(p_756->g_493.s0, "p_756->g_493.s0", print_hash_value);
    transparent_crc(p_756->g_493.s1, "p_756->g_493.s1", print_hash_value);
    transparent_crc(p_756->g_493.s2, "p_756->g_493.s2", print_hash_value);
    transparent_crc(p_756->g_493.s3, "p_756->g_493.s3", print_hash_value);
    transparent_crc(p_756->g_493.s4, "p_756->g_493.s4", print_hash_value);
    transparent_crc(p_756->g_493.s5, "p_756->g_493.s5", print_hash_value);
    transparent_crc(p_756->g_493.s6, "p_756->g_493.s6", print_hash_value);
    transparent_crc(p_756->g_493.s7, "p_756->g_493.s7", print_hash_value);
    transparent_crc(p_756->g_493.s8, "p_756->g_493.s8", print_hash_value);
    transparent_crc(p_756->g_493.s9, "p_756->g_493.s9", print_hash_value);
    transparent_crc(p_756->g_493.sa, "p_756->g_493.sa", print_hash_value);
    transparent_crc(p_756->g_493.sb, "p_756->g_493.sb", print_hash_value);
    transparent_crc(p_756->g_493.sc, "p_756->g_493.sc", print_hash_value);
    transparent_crc(p_756->g_493.sd, "p_756->g_493.sd", print_hash_value);
    transparent_crc(p_756->g_493.se, "p_756->g_493.se", print_hash_value);
    transparent_crc(p_756->g_493.sf, "p_756->g_493.sf", print_hash_value);
    transparent_crc(p_756->g_565.s0, "p_756->g_565.s0", print_hash_value);
    transparent_crc(p_756->g_565.s1, "p_756->g_565.s1", print_hash_value);
    transparent_crc(p_756->g_565.s2, "p_756->g_565.s2", print_hash_value);
    transparent_crc(p_756->g_565.s3, "p_756->g_565.s3", print_hash_value);
    transparent_crc(p_756->g_565.s4, "p_756->g_565.s4", print_hash_value);
    transparent_crc(p_756->g_565.s5, "p_756->g_565.s5", print_hash_value);
    transparent_crc(p_756->g_565.s6, "p_756->g_565.s6", print_hash_value);
    transparent_crc(p_756->g_565.s7, "p_756->g_565.s7", print_hash_value);
    transparent_crc(p_756->g_565.s8, "p_756->g_565.s8", print_hash_value);
    transparent_crc(p_756->g_565.s9, "p_756->g_565.s9", print_hash_value);
    transparent_crc(p_756->g_565.sa, "p_756->g_565.sa", print_hash_value);
    transparent_crc(p_756->g_565.sb, "p_756->g_565.sb", print_hash_value);
    transparent_crc(p_756->g_565.sc, "p_756->g_565.sc", print_hash_value);
    transparent_crc(p_756->g_565.sd, "p_756->g_565.sd", print_hash_value);
    transparent_crc(p_756->g_565.se, "p_756->g_565.se", print_hash_value);
    transparent_crc(p_756->g_565.sf, "p_756->g_565.sf", print_hash_value);
    transparent_crc(p_756->g_621.f0, "p_756->g_621.f0", print_hash_value);
    transparent_crc(p_756->g_634.x, "p_756->g_634.x", print_hash_value);
    transparent_crc(p_756->g_634.y, "p_756->g_634.y", print_hash_value);
    transparent_crc(p_756->g_700.x, "p_756->g_700.x", print_hash_value);
    transparent_crc(p_756->g_700.y, "p_756->g_700.y", print_hash_value);
    transparent_crc(p_756->g_711.s0, "p_756->g_711.s0", print_hash_value);
    transparent_crc(p_756->g_711.s1, "p_756->g_711.s1", print_hash_value);
    transparent_crc(p_756->g_711.s2, "p_756->g_711.s2", print_hash_value);
    transparent_crc(p_756->g_711.s3, "p_756->g_711.s3", print_hash_value);
    transparent_crc(p_756->g_711.s4, "p_756->g_711.s4", print_hash_value);
    transparent_crc(p_756->g_711.s5, "p_756->g_711.s5", print_hash_value);
    transparent_crc(p_756->g_711.s6, "p_756->g_711.s6", print_hash_value);
    transparent_crc(p_756->g_711.s7, "p_756->g_711.s7", print_hash_value);
    transparent_crc(p_756->g_711.s8, "p_756->g_711.s8", print_hash_value);
    transparent_crc(p_756->g_711.s9, "p_756->g_711.s9", print_hash_value);
    transparent_crc(p_756->g_711.sa, "p_756->g_711.sa", print_hash_value);
    transparent_crc(p_756->g_711.sb, "p_756->g_711.sb", print_hash_value);
    transparent_crc(p_756->g_711.sc, "p_756->g_711.sc", print_hash_value);
    transparent_crc(p_756->g_711.sd, "p_756->g_711.sd", print_hash_value);
    transparent_crc(p_756->g_711.se, "p_756->g_711.se", print_hash_value);
    transparent_crc(p_756->g_711.sf, "p_756->g_711.sf", print_hash_value);
    transparent_crc(p_756->g_719.s0, "p_756->g_719.s0", print_hash_value);
    transparent_crc(p_756->g_719.s1, "p_756->g_719.s1", print_hash_value);
    transparent_crc(p_756->g_719.s2, "p_756->g_719.s2", print_hash_value);
    transparent_crc(p_756->g_719.s3, "p_756->g_719.s3", print_hash_value);
    transparent_crc(p_756->g_719.s4, "p_756->g_719.s4", print_hash_value);
    transparent_crc(p_756->g_719.s5, "p_756->g_719.s5", print_hash_value);
    transparent_crc(p_756->g_719.s6, "p_756->g_719.s6", print_hash_value);
    transparent_crc(p_756->g_719.s7, "p_756->g_719.s7", print_hash_value);
    transparent_crc(p_756->g_737, "p_756->g_737", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_756->g_741[i], "p_756->g_741[i]", print_hash_value);

    }
    transparent_crc(p_756->g_751, "p_756->g_751", print_hash_value);
    transparent_crc(p_756->v_collective, "p_756->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 94; i++)
            transparent_crc(p_756->g_special_values[i + 94 * get_linear_group_id()], "p_756->g_special_values[i + 94 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_756->l_comm_values[get_linear_local_id()], "p_756->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_756->g_comm_values[get_linear_group_id() * 8 + get_linear_local_id()], "p_756->g_comm_values[get_linear_group_id() * 8 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
