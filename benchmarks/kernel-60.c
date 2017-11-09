// --atomics 78 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 45,83,1 -l 9,1,1
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

__constant uint32_t permutations[10][9] = {
{3,5,2,8,0,4,6,1,7}, // permutation 0
{1,2,5,4,3,6,7,0,8}, // permutation 1
{2,5,6,8,1,3,4,0,7}, // permutation 2
{4,5,7,8,6,0,1,3,2}, // permutation 3
{4,8,2,6,1,0,3,5,7}, // permutation 4
{8,0,1,3,5,7,4,6,2}, // permutation 5
{6,8,4,1,5,7,3,0,2}, // permutation 6
{2,3,5,7,6,8,1,0,4}, // permutation 7
{2,4,6,3,8,1,5,0,7}, // permutation 8
{1,7,0,6,3,8,2,5,4} // permutation 9
};

// Seed: 2841683316

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t *g_22;
    int16_t g_37[5];
    volatile VECTOR(uint16_t, 4) g_69;
    int16_t g_71;
    uint32_t g_83;
    uint64_t g_88;
    int32_t g_100;
    volatile VECTOR(int64_t, 4) g_105;
    uint8_t g_113;
    int32_t ** volatile g_118;
    int32_t *g_120;
    int32_t ** volatile g_119;
    int8_t g_135;
    int32_t g_145;
    int32_t * volatile g_144;
    int32_t g_156[2];
    VECTOR(int8_t, 4) g_165;
    uint32_t g_167;
    int64_t g_196;
    volatile int8_t g_200;
    volatile int8_t *g_199;
    volatile int8_t * volatile * volatile g_198;
    VECTOR(int16_t, 2) g_209;
    VECTOR(uint32_t, 16) g_221;
    VECTOR(uint32_t, 16) g_241;
    uint64_t g_255;
    VECTOR(uint32_t, 2) g_290;
    int16_t * volatile g_298;
    int16_t * volatile * volatile g_297[5];
    VECTOR(uint16_t, 16) g_300;
    uint32_t g_305;
    int32_t ** volatile g_343;
    int32_t g_350;
    volatile VECTOR(int32_t, 2) g_379;
    VECTOR(uint32_t, 2) g_422;
    VECTOR(int16_t, 4) g_433;
    VECTOR(int8_t, 4) g_434;
    volatile VECTOR(uint8_t, 16) g_441;
    VECTOR(int8_t, 4) g_446;
    int16_t g_452;
    int32_t ** volatile g_453;
    volatile VECTOR(int16_t, 16) g_458;
    VECTOR(int16_t, 4) g_461;
    volatile VECTOR(int16_t, 4) g_462;
    volatile VECTOR(uint16_t, 2) g_464;
    VECTOR(int32_t, 2) g_470;
    volatile VECTOR(int8_t, 4) g_488;
    VECTOR(int8_t, 8) g_502;
    VECTOR(int8_t, 2) g_503;
    VECTOR(int8_t, 16) g_508;
    VECTOR(int8_t, 8) g_512;
    VECTOR(int8_t, 8) g_514;
    VECTOR(int32_t, 16) g_517;
    int32_t g_525[9][8];
    int32_t * volatile g_551;
    int32_t * volatile g_552;
    VECTOR(uint16_t, 4) g_562;
    uint8_t *g_576;
    uint8_t **g_575;
    uint8_t **g_578;
    VECTOR(int8_t, 8) g_589;
    VECTOR(uint8_t, 16) g_591;
    volatile uint32_t *g_610[5];
    volatile uint32_t * volatile * volatile g_609;
    VECTOR(uint8_t, 16) g_612;
    uint64_t *g_614;
    uint64_t * volatile *g_613;
    uint32_t g_616;
    int32_t * volatile g_624;
    VECTOR(uint32_t, 16) g_633;
    volatile int16_t g_664;
    volatile int16_t g_665[4][6][7];
    volatile int16_t g_666;
    volatile int16_t g_667[6][9];
    volatile int16_t g_668;
    volatile int16_t g_669;
    volatile int16_t g_670;
    volatile int16_t g_671[8][1];
    volatile int16_t g_672[5][9][5];
    volatile int16_t g_673;
    volatile int16_t * volatile g_663[8][9];
    volatile int16_t * volatile *g_662;
    volatile int32_t *g_710;
    int32_t *g_713;
    int32_t ** volatile g_721;
    VECTOR(uint32_t, 2) g_728;
    int64_t *g_745[3];
    int64_t **g_744;
    int64_t *** volatile g_743;
    uint8_t ***g_785;
    volatile VECTOR(int8_t, 16) g_823;
    volatile int16_t g_863;
    VECTOR(uint32_t, 4) g_865;
    VECTOR(int64_t, 2) g_882;
    VECTOR(int64_t, 16) g_884;
    VECTOR(int16_t, 4) g_888;
    volatile VECTOR(uint64_t, 4) g_896;
    volatile VECTOR(uint64_t, 2) g_897;
    volatile VECTOR(int8_t, 8) g_898;
    VECTOR(int8_t, 2) g_911;
    volatile VECTOR(uint32_t, 2) g_933;
    uint64_t g_940;
    VECTOR(int8_t, 16) g_965;
    volatile int8_t g_987;
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
uint8_t  func_1(struct S0 * p_991);
int16_t  func_2(int32_t  p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, int16_t  p_7, struct S0 * p_991);
uint8_t  func_10(int32_t  p_11, int8_t  p_12, int32_t * p_13, int32_t * p_14, int32_t * p_15, struct S0 * p_991);
int32_t * func_17(int32_t * p_18, int64_t  p_19, int32_t * p_20, uint16_t  p_21, struct S0 * p_991);
int32_t * func_23(int32_t * p_24, int16_t  p_25, int32_t * p_26, struct S0 * p_991);
int32_t * func_27(int64_t  p_28, int32_t * p_29, int32_t * p_30, uint64_t  p_31, struct S0 * p_991);
int32_t * func_32(uint8_t  p_33, uint32_t  p_34, uint64_t  p_35, int32_t  p_36, struct S0 * p_991);
uint32_t  func_38(int32_t  p_39, uint64_t  p_40, int16_t  p_41, struct S0 * p_991);
int32_t * func_47(int32_t  p_48, int64_t  p_49, int32_t * p_50, int64_t  p_51, int32_t * p_52, struct S0 * p_991);
int16_t  func_59(uint8_t  p_60, struct S0 * p_991);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_991->g_comm_values p_991->l_comm_values p_991->g_22 p_991->g_37 p_991->g_69 p_991->g_83 p_991->g_88 p_991->g_71 p_991->g_105 p_991->g_113 p_991->g_119 p_991->g_120 p_991->g_100 p_991->g_135 p_991->g_144 p_991->g_145 p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_196 p_991->g_209 p_991->g_241 p_991->g_290 p_991->g_297 p_991->g_300 p_991->g_305 p_991->g_156 p_991->g_165 p_991->g_221 p_991->g_343 p_991->g_350 p_991->g_379 p_991->g_458 p_991->g_461 p_991->g_462 p_991->g_464 p_991->g_470 p_991->g_488 p_991->g_433 p_991->g_434 p_991->g_502 p_991->g_503 p_991->g_508 p_991->g_512 p_991->g_514 p_991->g_517 p_991->g_446 p_991->g_552 p_991->g_562 p_991->g_589 p_991->g_591 p_991->g_609 p_991->g_612 p_991->g_613 p_991->g_616 p_991->g_624 p_991->g_633 p_991->g_452 p_991->g_614 p_991->g_662 p_991->g_710 p_991->g_713 p_991->g_743 p_991->g_441 p_991->g_167 p_991->g_865 p_991->g_882 p_991->g_884 p_991->g_888 p_991->g_525 p_991->g_896 p_991->g_897 p_991->g_898 p_991->g_911 p_991->g_933 p_991->g_940 p_991->g_965 p_991->g_422
 * writes: p_991->g_71 p_991->g_83 p_991->g_88 p_991->g_113 p_991->g_100 p_991->g_120 p_991->g_145 p_991->g_167 p_991->g_135 p_991->g_156 p_991->g_305 p_991->g_350 p_991->g_300 p_991->g_165 p_991->g_452 p_991->g_525 p_991->g_575 p_991->g_578 p_991->g_461 p_991->g_22 p_991->g_710 p_991->g_744 p_991->g_728 p_991->g_785 p_991->g_517 p_991->g_616 p_991->g_865 p_991->g_196
 */
uint8_t  func_1(struct S0 * p_991)
{ /* block id: 4 */
    int32_t l_16[7] = {0x6FE23A26L,0x6FE23A26L,0x6FE23A26L,0x6FE23A26L,0x6FE23A26L,0x6FE23A26L,0x6FE23A26L};
    int8_t l_42 = 0x6EL;
    int32_t **l_526 = &p_991->g_120;
    int32_t *l_714 = (void*)0;
    int32_t l_862[6][10][3] = {{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}},{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}},{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}},{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}},{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}},{{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL},{3L,0x4919E3DBL,0x5A74037DL}}};
    int32_t l_864 = 1L;
    int16_t *l_881 = &p_991->g_452;
    int16_t **l_880 = &l_881;
    uint32_t l_883[8] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
    uint8_t l_885 = 0x1CL;
    uint64_t l_909 = 8UL;
    uint8_t l_923 = 0x48L;
    uint8_t l_951 = 247UL;
    uint32_t l_978 = 0xA9F9CC20L;
    uint16_t *l_979 = (void*)0;
    uint16_t *l_980 = (void*)0;
    uint16_t *l_981[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_982 = 0x66234C66A93F4FE8L;
    int32_t l_983[1];
    int32_t *l_984 = &p_991->g_100;
    int32_t *l_985 = (void*)0;
    int32_t *l_986[7];
    uint64_t l_988[7][7] = {{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL},{0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL,0x50C48B0F1EE771FCL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_983[i] = 0x58368B2BL;
    for (i = 0; i < 7; i++)
        l_986[i] = &p_991->g_145;
    (*l_526) = (func_2(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0x7FBFL, 0x21F9L, 65533UL, p_991->g_comm_values[p_991->tid], (safe_sub_func_uint8_t_u_u(func_10(p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))], l_16[6], func_17(p_991->g_22, p_991->g_comm_values[p_991->tid], ((*l_526) = func_23(func_27((p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))] , l_16[6]), ((*p_991->g_119) = func_32(p_991->g_37[2], func_38(p_991->g_comm_values[p_991->tid], l_16[3], l_42, p_991), p_991->g_165.x, p_991->g_290.y, p_991)), p_991->g_22, l_16[3], p_991), l_16[6], p_991->g_22, p_991)), p_991->g_514.s2, p_991), p_991->g_22, p_991->g_22, p_991), p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))])), GROUP_DIVERGE(2, 1), 9UL, 0x8435L)))).s35, ((VECTOR(uint16_t, 2))(2UL))))).xyxyyxxyyyyxxxyy)).s4 ^ l_16[2]) , 0x31012D25L), p_991->g_713, p_991->g_713, l_714, p_991->g_591.sb, p_991) , l_714);
    if ((safe_div_func_int64_t_s_s(0x05BE5230EC682DB0L, (**p_991->g_613))))
    { /* block id: 322 */
        int32_t *l_854 = &p_991->g_156[1];
        int32_t *l_855 = &p_991->g_100;
        int32_t *l_856 = &p_991->g_156[1];
        int32_t l_857 = 0x1C8DB146L;
        int32_t *l_858 = &p_991->g_100;
        int32_t *l_859 = &p_991->g_350;
        int32_t *l_860 = (void*)0;
        int32_t *l_861[6];
        int32_t l_889 = 0x2A7C641EL;
        int16_t **l_890 = &l_881;
        int32_t *l_891 = &l_16[6];
        uint32_t *l_892[9];
        int8_t l_893 = 0x5FL;
        int32_t l_924 = 0x4163DF69L;
        int64_t l_936[7];
        int i;
        for (i = 0; i < 6; i++)
            l_861[i] = &p_991->g_100;
        for (i = 0; i < 9; i++)
            l_892[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_936[i] = 1L;
        for (p_991->g_167 = (-18); (p_991->g_167 > 39); p_991->g_167 = safe_add_func_uint8_t_u_u(p_991->g_167, 8))
        { /* block id: 325 */
            int32_t *l_853[6] = {&p_991->g_100,(void*)0,&p_991->g_100,&p_991->g_100,(void*)0,&p_991->g_100};
            int i;
            (*l_526) = l_853[2];
        }
        (*l_526) = (*p_991->g_343);
        --p_991->g_865.w;
        if (((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((~p_991->g_379.y), GROUP_DIVERGE(2, 1))), ((safe_mod_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((((l_864 == ((*p_991->g_614) &= (((((((*l_858) |= (safe_lshift_func_int16_t_s_u((((*l_891) |= ((safe_mul_func_int16_t_s_s((l_880 != (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_991->g_882.xxxy)), 0x0AE7222FF76D4DE1L, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))((-2L), (-1L))), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(l_883[1], ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(p_991->g_884.s33)), (int64_t)l_885))))), (((safe_sub_func_int32_t_s_s((~(*l_854)), (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_991->g_888.xzyx)).zzyxxyxy)).s0 || ((((l_889 || ((VECTOR(uint16_t, 4))(((void*)0 != &p_991->g_135), 65527UL, 0x7710L, 65533UL)).w) , (void*)0) != (void*)0) , 0x5CFAL)))) , p_991->g_290.x) ^ 1L), 0x39395074B667138FL, ((VECTOR(int64_t, 2))(0x547F3FF3A45F3CB5L)), 0x6DEB71A9E2D7D9D1L)).s4712550660747457, ((VECTOR(int64_t, 16))(0x154038533CC93D37L))))).sf5)))))), (-1L), (-1L))), ((VECTOR(int64_t, 4))((-7L)))))), (-1L), (*l_856), (*l_859), 0x586E1C3CA0B2BD9FL, ((VECTOR(int64_t, 2))(1L)), 0x0352C680B0019AB1L)).s3 , l_890)), 0x730CL)) && GROUP_DIVERGE(2, 1))) , 3L), 7))) , l_893) ^ 0x4D28BB97B4720A81L) == (*l_856)) == p_991->g_508.sc) & p_991->g_446.y))) ^ (*l_854)) == 0x5C7ED291L), p_991->g_comm_values[p_991->tid])) > p_991->g_525[6][0]) , p_991->g_882.x), (-1L))) ^ (*l_854)))) == (*l_856)) == p_991->g_135) <= (-8L)))
        { /* block id: 333 */
            int64_t *l_903 = (void*)0;
            int64_t *l_904 = &p_991->g_196;
            int32_t l_910 = 0x3C4CF51CL;
            int32_t l_916[8][8][4] = {{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}},{{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)},{1L,0x26C95B6EL,0x4B034F11L,(-8L)}}};
            uint32_t l_925[1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_925[i][j] = 0x47478B0FL;
            }
            (*l_855) = ((*l_859) = (safe_mul_func_uint8_t_u_u((((p_991->g_300.s2 &= (((VECTOR(uint64_t, 4))(0xBDF14DD4F364258AL, 2UL, 18446744073709551606UL, 0x1ACE75569215F977L)).y == (((((((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(p_991->g_896.yzwx)).wzzwzwxzxxzyxxyy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_991->g_897.xy)).yyxxyyxxyxxxyyxy))))).sc , ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_991->g_898.s5237664361006476)).sb5e3)).y) & (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(p_991->g_882.x, 0)), p_991->g_446.w)) >= (((*l_904) |= (+((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x21D308D4A4ED6CE1L, 3L)).yyyy)).y)) & (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(l_909, 13)), l_910)))) > (((VECTOR(int8_t, 2))(p_991->g_911.yx)).lo & ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(l_910, (p_991->g_612.se | ((l_916[2][6][2] ^= p_991->g_434.y) != (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0xC2L, ((!(((safe_mul_func_uint8_t_u_u(1UL, l_910)) | p_991->g_165.w) && l_910)) < p_991->g_433.y))), (*l_859))))))), 14)) | p_991->g_comm_values[p_991->tid])))) != l_923) , 9L) , 5L))) > FAKE_DIVERGE(p_991->local_0_offset, get_local_id(0), 10)) <= l_924), l_925[0][0])));
            return (*l_856);
        }
        else
        { /* block id: 340 */
            int32_t *l_926 = &p_991->g_100;
            int64_t *l_937 = (void*)0;
            int64_t *l_938 = (void*)0;
            int64_t *l_939 = &p_991->g_196;
            (*l_526) = l_926;
            (*l_859) = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((6UL || 0x268CL), ((*l_939) = (!((((safe_sub_func_uint64_t_u_u((255UL ^ (((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_991->g_933.yxxyxxyxyxxxyyxy)).lo)).s0 , p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]) < 65527UL) & ((*l_854) & p_991->g_446.z))), ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, 0x5C7249DFL, (-8L), 0x5133775FL)).even)).lo | (65528UL || ((safe_mul_func_uint16_t_u_u(((l_936[6] , 0L) , GROUP_DIVERGE(1, 1)), p_991->g_135)) <= 255UL))) < (**l_526)))) <= (*l_926)) != 1L) > (*l_855)))))), p_991->g_940)) , (*p_991->g_120));
        }
    }
    else
    { /* block id: 345 */
        int16_t *l_947 = &p_991->g_37[0];
        int32_t l_948 = 5L;
        int64_t l_952 = 0x78EB06B7BA052BDAL;
        l_948 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((l_947 != l_947), l_948)) , l_948), (safe_rshift_func_uint16_t_u_s(l_951, l_952)))), 7));
        (*l_526) = (void*)0;
    }
    (*l_984) &= (safe_add_func_uint64_t_u_u(0x3A6C78E84FD87D07L, (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(0xDBE13DBDEFDF5C91L, ((**p_991->g_613)--))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_991->g_965.s8cb4cbb2)), (-4L), ((VECTOR(int8_t, 2))(0x5FL, 0L)), 0x13L, (((**p_991->g_198) && (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s((p_991->g_165.w |= (safe_lshift_func_int16_t_s_u(6L, ((safe_lshift_func_uint8_t_u_u(l_16[6], (safe_add_func_uint16_t_u_u((l_862[4][6][0] = (safe_sub_func_uint32_t_u_u(l_978, l_885))), (9UL < ((0x41971CACL | 0x2366005AL) , 4294967291UL)))))) && 0x3AF03B71L)))), 0x74L)), l_982))) && 0UL), (*p_991->g_199), 0x58L, 0x36L)).sc)) | p_991->g_512.s4) != 1UL), p_991->g_882.y)), l_983[0]))));
    ++l_988[4][5];
    return p_991->g_422.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_350 p_991->g_156 p_991->g_743 p_991->g_441 p_991->g_305 p_991->g_113 p_991->g_517 p_991->g_343 p_991->g_614 p_991->g_88 p_991->g_144 p_991->g_145 p_991->g_461
 * writes: p_991->g_350 p_991->g_100 p_991->g_452 p_991->g_156 p_991->g_145 p_991->g_744 p_991->g_728 p_991->g_785 p_991->g_517 p_991->g_616 p_991->g_120 p_991->g_88
 */
int16_t  func_2(int32_t  p_3, int32_t * p_4, int32_t * p_5, int32_t * p_6, int16_t  p_7, struct S0 * p_991)
{ /* block id: 266 */
    int32_t *l_720 = &p_991->g_156[1];
    uint8_t ***l_727 = &p_991->g_575;
    int32_t l_751 = 1L;
    int32_t l_755 = 0x408C4E5BL;
    int32_t l_791 = 0L;
    int32_t l_792 = 0x199A7F78L;
    int32_t l_793[6][3][8] = {{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}},{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}},{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}},{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}},{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}},{{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)},{0x151FB398L,0x65339679L,1L,0x6AB7D075L,1L,0x65339679L,0x151FB398L,(-7L)}}};
    int16_t *l_805 = &p_991->g_37[2];
    int16_t **l_804[2][4] = {{&l_805,&l_805,&l_805,&l_805},{&l_805,&l_805,&l_805,&l_805}};
    int16_t ***l_803 = &l_804[0][3];
    VECTOR(uint8_t, 2) l_821 = (VECTOR(uint8_t, 2))(0xE7L, 0xC0L);
    VECTOR(int8_t, 4) l_822 = (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 0x1CL), 0x1CL);
    uint64_t **l_832[4][5][7] = {{{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614}},{{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614}},{{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614}},{{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614,&p_991->g_614}}};
    int32_t l_835 = 1L;
    int i, j, k;
    for (p_991->g_350 = 0; (p_991->g_350 != 10); ++p_991->g_350)
    { /* block id: 269 */
        int32_t l_717 = (-7L);
        uint64_t *l_724 = &p_991->g_88;
        VECTOR(uint16_t, 16) l_729 = (VECTOR(uint16_t, 16))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL), 65535UL, 8UL, 65535UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), (VECTOR(uint16_t, 2))(8UL, 65535UL), 8UL, 65535UL, 8UL, 65535UL);
        VECTOR(uint16_t, 16) l_730 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 1UL), 1UL), 1UL, 65528UL, 1UL, (VECTOR(uint16_t, 2))(65528UL, 1UL), (VECTOR(uint16_t, 2))(65528UL, 1UL), 65528UL, 1UL, 65528UL, 1UL);
        VECTOR(uint16_t, 8) l_731 = (VECTOR(uint16_t, 8))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x991AL), 0x991AL), 0x991AL, 5UL, 0x991AL);
        int32_t l_750 = 0x6DB7953EL;
        int32_t l_753[3][4] = {{(-2L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-2L),(-2L)},{(-2L),(-1L),(-2L),(-2L)}};
        uint8_t l_786[8][8] = {{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L},{253UL,0xEEL,0xE5L,0xE6L,0xE5L,0xEEL,253UL,0x77L}};
        uint8_t l_794 = 6UL;
        uint32_t *l_798 = (void*)0;
        uint32_t **l_797 = &l_798;
        int32_t *l_799 = &l_717;
        uint8_t *l_800 = &l_786[2][6];
        int32_t *l_806 = &l_793[1][1][4];
        VECTOR(uint8_t, 8) l_818 = (VECTOR(uint8_t, 8))(0xA9L, (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 4UL), 4UL), 4UL, 0xA9L, 4UL);
        VECTOR(uint8_t, 16) l_819 = (VECTOR(uint8_t, 16))(0xCAL, (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 0x2CL), 0x2CL), 0x2CL, 0xCAL, 0x2CL, (VECTOR(uint8_t, 2))(0xCAL, 0x2CL), (VECTOR(uint8_t, 2))(0xCAL, 0x2CL), 0xCAL, 0x2CL, 0xCAL, 0x2CL);
        VECTOR(uint64_t, 2) l_847 = (VECTOR(uint64_t, 2))(0x51B887D4AD4F470EL, 0x09C00C15FBF2EF23L);
        int i, j;
        if (l_717)
        { /* block id: 270 */
            uint8_t ***l_726[7] = {&p_991->g_578,&p_991->g_578,&p_991->g_578,&p_991->g_578,&p_991->g_578,&p_991->g_578,&p_991->g_578};
            int32_t l_746 = 0x2C2DA52FL;
            int32_t l_754 = (-4L);
            uint64_t l_757 = 0xFCE3521481D3AE23L;
            int i;
            for (p_991->g_100 = 0; (p_991->g_100 == (-16)); p_991->g_100 = safe_sub_func_int8_t_s_s(p_991->g_100, 2))
            { /* block id: 273 */
                VECTOR(int8_t, 16) l_725 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0x6DL), 0x6DL), 0x6DL, 0x64L, 0x6DL, (VECTOR(int8_t, 2))(0x64L, 0x6DL), (VECTOR(int8_t, 2))(0x64L, 0x6DL), 0x64L, 0x6DL, 0x64L, 0x6DL);
                VECTOR(uint16_t, 4) l_732 = (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL);
                VECTOR(uint32_t, 16) l_733 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xF6D8ECBBL), 0xF6D8ECBBL), 0xF6D8ECBBL, 4294967292UL, 0xF6D8ECBBL, (VECTOR(uint32_t, 2))(4294967292UL, 0xF6D8ECBBL), (VECTOR(uint32_t, 2))(4294967292UL, 0xF6D8ECBBL), 4294967292UL, 0xF6D8ECBBL, 4294967292UL, 0xF6D8ECBBL);
                int16_t *l_738 = &p_991->g_452;
                int64_t **l_741 = (void*)0;
                int32_t l_752 = 0x327312A1L;
                int32_t l_756 = 0L;
                int i;
                p_5 = l_720;
                (*p_5) &= ((safe_lshift_func_uint16_t_u_u((((VECTOR(uint32_t, 8))((l_724 == ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_725.s8214)))))).x , ((((!p_7) , l_726[2]) == l_727) & (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(4L, 0x0A66318FL)).yyxyxxyy))))).s4113627036745372)).hi)).s44)).hi < GROUP_DIVERGE(1, 1)))) , l_724)), ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(p_991->g_728.xyyx)), ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(l_729.s85f33b625575a230)).s2d2f, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_730.s9ab0)).xxyzxyxxywywwzww)).s4a, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_731.s3327)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x1343L, 0x4590L, 0xD652L, 0x00E1L)))))), ((VECTOR(uint16_t, 2))(0x0349L, 0x09F9L)).xyyxyyxx))).s11))).yxyy))).wzzxyyxw)).even, ((VECTOR(uint16_t, 4))(l_732.yyzy))))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_733.sae28f4b46447206f)).s6d)).xxyyyxyyxxyyxxxy)))).s2742))), 0x12338958L, 4294967293UL, 1UL)).s0 & l_732.y), (safe_div_func_uint8_t_u_u(l_733.sa, (((*l_738) = (((safe_mul_func_int8_t_s_s(0x70L, p_3)) , 0x3DL) < 254UL)) & p_3))))) ^ p_3);
                if ((*p_5))
                    break;
                for (p_991->g_145 = 18; (p_991->g_145 != (-29)); --p_991->g_145)
                { /* block id: 280 */
                    int64_t ***l_742 = (void*)0;
                    int32_t l_747 = (-10L);
                    int32_t *l_748 = &l_747;
                    int32_t *l_749[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    (*p_991->g_743) = l_741;
                    l_757++;
                }
            }
        }
        else
        { /* block id: 285 */
            VECTOR(int8_t, 8) l_772 = (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x5BL), 0x5BL), 0x5BL, 4L, 0x5BL);
            uint32_t *l_781 = (void*)0;
            uint8_t ***l_784 = (void*)0;
            int8_t *l_787 = (void*)0;
            int8_t *l_788[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_789 = (-1L);
            int32_t *l_790[4][5][8] = {{{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]}},{{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]}},{{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]}},{{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]},{&p_991->g_100,&p_991->g_156[0],&p_991->g_156[1],&l_753[1][0],(void*)0,&p_991->g_156[1],&p_991->g_145,&p_991->g_156[1]}}};
            int i, j, k;
            p_5 = &p_3;
            p_991->g_517.s0 |= (safe_sub_func_uint8_t_u_u(0x2AL, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_7, 15)) == ((((*p_5) = (safe_rshift_func_int8_t_s_u((l_789 = (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_772.s70)))).yyxxyxxxxxyxyyyy)).s9672)).z ^ (safe_sub_func_uint16_t_u_u(((((*l_720) && 0x734645ECC4EE5CB6L) > (l_730.s6 ^ (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(((~((safe_sub_func_uint32_t_u_u((p_991->g_728.y = GROUP_DIVERGE(0, 1)), (*p_5))) , (safe_add_func_int16_t_s_s(((((l_784 == (p_991->g_785 = l_784)) , ((&p_991->g_610[2] != &l_781) <= p_991->g_441.s6)) ^ (*l_720)) ^ l_729.s2), p_991->g_305)))) ^ l_786[2][6]), 0L)) , p_3), 12)))) , 0x835FL), p_991->g_113)))), 7))) < 1L) | 0x2DL)), l_730.s1)) < p_7), l_731.s1)), 0x114BL))));
            ++l_794;
        }
        (*l_720) &= (((*l_800) = ((+((*l_799) = (l_797 != &p_991->g_610[2]))) , p_3)) <= (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_991->global_2_offset, get_global_id(2), 10), (l_803 == &l_804[0][3]))));
        p_3 &= ((*l_806) |= (*l_720));
        if ((6L && (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_3, 3)), (*l_720)))))
        { /* block id: 299 */
            int32_t l_817 = (-8L);
            VECTOR(uint8_t, 16) l_820 = (VECTOR(uint8_t, 16))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 255UL), 255UL), 255UL, 0x91L, 255UL, (VECTOR(uint8_t, 2))(0x91L, 255UL), (VECTOR(uint8_t, 2))(0x91L, 255UL), 0x91L, 255UL, 0x91L, 255UL);
            VECTOR(uint8_t, 8) l_824 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
            uint32_t *l_825[4][8] = {{(void*)0,(void*)0,(void*)0,&p_991->g_167,&p_991->g_83,(void*)0,&p_991->g_167,(void*)0},{(void*)0,(void*)0,(void*)0,&p_991->g_167,&p_991->g_83,(void*)0,&p_991->g_167,(void*)0},{(void*)0,(void*)0,(void*)0,&p_991->g_167,&p_991->g_83,(void*)0,&p_991->g_167,(void*)0},{(void*)0,(void*)0,(void*)0,&p_991->g_167,&p_991->g_83,(void*)0,&p_991->g_167,(void*)0}};
            int i, j;
            (*l_720) = (safe_add_func_int32_t_s_s((((((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))((0x6FE18899L <= (l_750 |= ((safe_sub_func_int16_t_s_s((&p_991->g_613 != (void*)0), (~((*l_806) && (((VECTOR(uint8_t, 8))((safe_div_func_int64_t_s_s(0L, ((l_817 ^ (*l_720)) , (*p_991->g_614)))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_818.s00)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(l_819.sc0)).xxxy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(0xE8L, ((VECTOR(uint8_t, 4))(l_820.sb2e9)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0UL, ((VECTOR(uint8_t, 8))(l_821.xxyyyyyy)), ((VECTOR(uint8_t, 2))(1UL, 0xCDL)), ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 16))(l_822.zzxyyxzwxyxywwzw)).s51, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_991->g_823.s3c)).yxxxyxxyyyxxxyxx)).s06))), ((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(l_824.s20)), 0xF3L)).even, ((VECTOR(uint8_t, 2))(255UL, 1UL))))), 0UL, 0xFEL, 0x97L)).sb1)), 255UL)), ((VECTOR(uint8_t, 4))(0UL, 0x55L, 5UL, 255UL)).xyyxyyww))).lo))).wzwzzwxyyxxxwyww, ((VECTOR(uint8_t, 2))(0UL, 251UL)).yxyxxxxyxxyyxxyx))).s3671)), 0xABL)).s5 , p_7))))) < 0xBF9410AAL))), ((VECTOR(uint8_t, 8))(0UL)), FAKE_DIVERGE(p_991->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 4))(0xBCL)), 255UL, 0UL)).hi, ((VECTOR(uint8_t, 8))(0x0FL))))).s1 < GROUP_DIVERGE(2, 1)) && FAKE_DIVERGE(p_991->global_1_offset, get_global_id(1), 10)) , 0x51AEAEE8L), 4294967295UL));
            for (p_991->g_616 = 9; (p_991->g_616 == 36); ++p_991->g_616)
            { /* block id: 304 */
                (*p_991->g_343) = &p_3;
            }
        }
        else
        { /* block id: 307 */
            uint32_t l_830 = 0x6601E231L;
            int64_t ***l_840 = (void*)0;
            int16_t l_848 = 0x1565L;
            for (l_792 = (-28); (l_792 >= 6); l_792 = safe_add_func_uint8_t_u_u(l_792, 9))
            { /* block id: 310 */
                uint64_t **l_831[2][8][7] = {{{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614}},{{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614},{&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614,&l_724,&p_991->g_614,&p_991->g_614}}};
                int32_t l_833 = 0x77F63DDEL;
                int32_t l_834[7][4] = {{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL},{0x533DF87DL,0x533DF87DL,0x7B41FC0EL,0x5E2326ABL}};
                int i, j, k;
                l_834[5][3] = ((((l_830 & 0x5D1C7F17L) , l_831[1][6][2]) == l_832[0][1][1]) != (l_833 = ((*p_991->g_614) |= FAKE_DIVERGE(p_991->group_0_offset, get_group_id(0), 10))));
                if ((*p_991->g_144))
                    continue;
            }
            (*p_991->g_144) = (l_835 ^ (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(0x2AL, ((l_840 != &p_991->g_744) , ((((safe_sub_func_uint16_t_u_u(p_991->g_461.w, ((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((+((*l_720) ^ 1L)) <= ((VECTOR(uint64_t, 8))(0UL, 0xBC8C1A1AE7FE75DFL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_847.xyyyyyyxxyyxyyxx)).odd)).s45)), 0UL, 18446744073709551614UL)).xwzzzxwz, (uint64_t)6UL))).s2660225303222563))).s9e)), 0x02001B33B5496C58L, 0x81D21EB39A19FC45L, 18446744073709551608UL, 18446744073709551606UL)).s1) ^ p_7) != 0x5D6581C6552848B5L), 0x39L)), p_7)) , (*l_806)))) || 0x90668A23L) || (*l_720)) && p_7)))) == 1UL), l_848)));
            if ((*l_720))
                continue;
        }
    }
    return (*l_720);
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_100 p_991->g_562 p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_144 p_991->g_145 p_991->g_517 p_991->g_300 p_991->g_446 p_991->g_589 p_991->g_508 p_991->g_591 p_991->g_461 p_991->g_135 p_991->g_609 p_991->g_612 p_991->g_613 p_991->g_552 p_991->g_616 p_991->g_624 p_991->g_633 p_991->g_464 p_991->g_434 p_991->g_488 p_991->g_156 p_991->g_433 p_991->g_196 p_991->g_452 p_991->g_614 p_991->g_88 p_991->g_119 p_991->g_120 p_991->g_662 p_991->g_710
 * writes: p_991->g_575 p_991->g_578 p_991->g_461 p_991->g_300 p_991->g_145 p_991->g_22 p_991->g_100 p_991->g_350 p_991->g_156 p_991->g_120 p_991->g_525 p_991->g_88 p_991->g_113 p_991->g_710
 */
uint8_t  func_10(int32_t  p_11, int8_t  p_12, int32_t * p_13, int32_t * p_14, int32_t * p_15, struct S0 * p_991)
{ /* block id: 221 */
    uint32_t l_553 = 4294967295UL;
    VECTOR(int32_t, 8) l_567 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L);
    uint16_t l_570 = 0xAAE3L;
    uint8_t **l_573 = (void*)0;
    uint8_t **l_577 = &p_991->g_576;
    VECTOR(int16_t, 4) l_579 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L);
    VECTOR(int16_t, 8) l_585 = (VECTOR(int16_t, 8))(0x555CL, (VECTOR(int16_t, 4))(0x555CL, (VECTOR(int16_t, 2))(0x555CL, 6L), 6L), 6L, 0x555CL, 6L);
    uint32_t *l_593 = &p_991->g_167;
    uint32_t **l_592 = &l_593;
    uint64_t **l_627 = &p_991->g_614;
    uint8_t *l_638 = (void*)0;
    uint8_t *l_641 = &p_991->g_113;
    int16_t *l_661 = (void*)0;
    int16_t **l_660 = &l_661;
    int32_t l_680 = 0x52B75CD0L;
    int8_t *l_703 = (void*)0;
    int8_t **l_702[8][8] = {{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703},{&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703,&l_703}};
    VECTOR(uint64_t, 8) l_704 = (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL), 1UL), 1UL, 18446744073709551614UL, 1UL);
    VECTOR(int8_t, 4) l_707 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
    VECTOR(int8_t, 2) l_708 = (VECTOR(int8_t, 2))((-1L), 0x7EL);
    uint32_t l_712 = 1UL;
    int i, j;
    if (l_553)
    { /* block id: 222 */
        uint8_t ***l_574[2];
        uint16_t l_584 = 1UL;
        int16_t *l_586[8][7][2] = {{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}},{{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452},{&p_991->g_452,&p_991->g_452}}};
        int32_t l_587 = 0x411EFF5AL;
        int32_t l_588 = 0L;
        uint32_t **l_594 = (void*)0;
        uint8_t l_621 = 255UL;
        int8_t *l_642 = (void*)0;
        int8_t *l_643[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t *l_644 = (void*)0;
        int32_t **l_645 = &p_991->g_22;
        uint16_t *l_674 = &l_584;
        int16_t ***l_679[1];
        int16_t l_681 = 0x24DFL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_574[i] = &l_573;
        for (i = 0; i < 1; i++)
            l_679[i] = &l_660;
        if ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(p_991->g_100, (((-3L) < ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_991->g_562.ywwz)), (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_588 |= ((-1L) && ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_567.s06020066)).lo)).hi)), 0x7E42AC70L, ((p_12 || (safe_mod_func_int16_t_s_s(l_570, ((safe_sub_func_int16_t_s_s(((p_991->g_575 = l_573) == (p_991->g_578 = (l_577 = l_573))), ((((VECTOR(int16_t, 4))(l_579.yyyz)).y > (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((l_584 || (l_587 ^= ((VECTOR(int16_t, 8))(l_585.s41170534)).s4)), ((**p_991->g_198) < 0x08L))), 0x4186B88C5B9237BFL))) , 0x4056L))) , l_585.s1)))) , (*p_991->g_144)), l_553, ((VECTOR(int32_t, 2))((-1L))), 0x3FA70778L)).even)), ((VECTOR(int32_t, 4))(0x66F333E7L)), ((VECTOR(int32_t, 4))(0x4E117AF1L))))).y)), (-7L))), l_584)), p_991->g_517.s3, l_584, 1UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(0x28C7L)), 0UL, 0xF080L, 1UL)).s1, 4)) < p_991->g_300.s5)) <= 0xE1L))) == l_579.x), l_585.s4)) > p_991->g_446.w), l_567.s6)))
        { /* block id: 228 */
            VECTOR(int8_t, 8) l_590 = (VECTOR(int8_t, 8))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 0x78L), 0x78L), 0x78L, 0x02L, 0x78L);
            VECTOR(uint8_t, 2) l_595 = (VECTOR(uint8_t, 2))(7UL, 253UL);
            uint16_t *l_600 = (void*)0;
            uint16_t *l_601 = &l_584;
            uint64_t l_606[5] = {0x9C918694593FD27AL,0x9C918694593FD27AL,0x9C918694593FD27AL,0x9C918694593FD27AL,0x9C918694593FD27AL};
            uint32_t **l_611[4];
            int32_t l_620 = (-1L);
            uint64_t **l_626 = &p_991->g_614;
            uint64_t ***l_625[3][4][6] = {{{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0}},{{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0}},{{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0},{(void*)0,&l_626,(void*)0,&l_626,(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_611[i] = &l_593;
            if (((((*p_991->g_144) > ((((VECTOR(int8_t, 16))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x63L, 0x24L, ((VECTOR(int8_t, 8))(p_991->g_589.s45640715)), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(0x21L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_590.s22142507)))).lo, ((VECTOR(int8_t, 8))((p_991->g_508.s0 <= ((p_12 || ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(1UL, 0x64L, 0x8DL, 251UL)).lo, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_991->g_591.s76a5)), (l_592 == (l_594 = l_594)), 0x58L, 0x18L, 255UL)).odd, ((VECTOR(uint8_t, 2))(l_595.yx)).xyyx))).even, ((VECTOR(uint8_t, 4))(1UL, 0x6EL, 1UL, 255UL)).odd))).odd) > (0x73L ^ ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((--(*l_601)), ((safe_mod_func_int64_t_s_s(((~(p_991->g_461.w &= l_590.s6)) || FAKE_DIVERGE(p_991->global_0_offset, get_global_id(0), 10)), 0x61C5BBF5ABBC3991L)) & p_11))), FAKE_DIVERGE(p_991->group_0_offset, get_group_id(0), 10))) < l_595.y) , l_606[1]) | p_12)))), ((VECTOR(int8_t, 2))(0x7CL)), 0x18L, (-6L), ((VECTOR(int8_t, 2))(1L)), 0x08L)).lo))).yyxzyzzxyyzxyzwx, ((VECTOR(int8_t, 16))(0L)), ((VECTOR(int8_t, 16))(0L))))).s1e)), 0x6DL))))), 0L, 0x55L)).s09)).xxxx, ((VECTOR(int8_t, 4))(0x5BL))))).lo)), 8L, 0x2BL, ((VECTOR(int8_t, 8))((-2L))), 0x30L, 0x7AL, 1L)).sd , p_991->g_135) , 4294967295UL)) >= 0xF269C366E215FC6EL) <= GROUP_DIVERGE(0, 1)))
            { /* block id: 232 */
                int32_t **l_615 = &p_991->g_22;
                (*l_615) = func_17(p_13, l_553, func_32((safe_add_func_int16_t_s_s((p_991->g_609 != ((&l_593 != l_611[0]) , l_594)), FAKE_DIVERGE(p_991->global_2_offset, get_global_id(2), 10))), p_12, p_991->g_589.s1, ((((VECTOR(uint8_t, 2))(p_991->g_612.scb)).even , ((void*)0 != p_991->g_613)) ^ l_584), p_991), p_12, p_991);
            }
            else
            { /* block id: 234 */
                return p_991->g_616;
            }
            for (p_991->g_100 = 0; (p_991->g_100 <= 23); p_991->g_100 = safe_add_func_uint8_t_u_u(p_991->g_100, 2))
            { /* block id: 239 */
                int32_t *l_619[10] = {&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1]};
                int i;
                l_621++;
            }
            (*p_991->g_624) = l_620;
            l_627 = &p_991->g_614;
        }
        else
        { /* block id: 244 */
            int32_t *l_628 = &p_991->g_156[0];
            (*l_628) = 0L;
        }
        (*l_645) = func_17(func_23(&l_588, (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((!FAKE_DIVERGE(p_991->global_1_offset, get_global_id(1), 10)), l_587)), ((VECTOR(uint32_t, 16))(p_991->g_633.s0f21ba38a8a66e47)).s2)), p_15, p_991), p_991->g_452, &l_588, (l_567.s5 = (((((p_12 = (safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_638 == ((++(**p_991->g_613)) , l_641)), l_585.s5)), 11))) < l_585.s7) <= p_11) > (-10L)) , FAKE_DIVERGE(p_991->local_2_offset, get_local_id(2), 10))), p_991);
        atomic_xor(&p_991->g_atomic_reduction[get_linear_group_id()], (p_11 == (safe_mul_func_uint8_t_u_u(p_12, ((p_11 >= (safe_mul_func_int16_t_s_s((((*l_641) = ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((((*p_991->g_119) != p_14) < (safe_lshift_func_int16_t_s_s((l_680 = (l_567.s4 = ((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_991->global_2_offset, get_global_id(2), 10), (((((*l_674) = ((l_660 == p_991->g_662) <= 1UL)) , (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((((void*)0 == l_679[0]) , l_567.s2), p_11)), p_12))) >= l_585.s0) != l_585.s3))) < 0x7DBCFA833D873561L))), 10))), p_12)), 18446744073709551615UL)), 6)) && l_681)) != 1L), p_12))) < (*p_991->g_120))))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_991->v_collective += p_991->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 256 */
        int32_t *l_682 = (void*)0;
        int32_t *l_683 = &p_991->g_350;
        int32_t *l_684 = (void*)0;
        int32_t *l_685 = &p_991->g_100;
        int32_t l_686 = 0x55A6DEDFL;
        int32_t *l_687 = &l_686;
        int32_t *l_688 = &l_680;
        int32_t *l_689[4] = {&l_686,&l_686,&l_686,&l_686};
        uint64_t l_690 = 1UL;
        int32_t *l_693 = (void*)0;
        uint16_t *l_696 = (void*)0;
        VECTOR(int8_t, 4) l_699 = (VECTOR(int8_t, 4))(0x1BL, (VECTOR(int8_t, 2))(0x1BL, 0x2BL), 0x2BL);
        int8_t **l_709 = &l_703;
        volatile int32_t **l_711 = &p_991->g_710;
        int i;
        l_690--;
        l_687 = l_693;
        (*l_711) = p_991->g_710;
    }
    return l_712;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_300 p_991->g_552
 * writes: p_991->g_300 p_991->g_145
 */
int32_t * func_17(int32_t * p_18, int64_t  p_19, int32_t * p_20, uint16_t  p_21, struct S0 * p_991)
{ /* block id: 212 */
    int16_t *l_530 = (void*)0;
    int16_t **l_529 = &l_530;
    int16_t ***l_531 = &l_529;
    int16_t **l_533[3][9][2] = {{{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530}},{{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530}},{{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530},{&l_530,&l_530}}};
    int16_t ***l_532 = &l_533[1][7][0];
    VECTOR(int32_t, 4) l_536 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
    VECTOR(int32_t, 8) l_537 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    VECTOR(int32_t, 4) l_538 = (VECTOR(int32_t, 4))(0x03327D55L, (VECTOR(int32_t, 2))(0x03327D55L, 0L), 0L);
    int32_t l_543 = (-1L);
    VECTOR(uint32_t, 16) l_544 = (VECTOR(uint32_t, 16))(0xA0C086A8L, (VECTOR(uint32_t, 4))(0xA0C086A8L, (VECTOR(uint32_t, 2))(0xA0C086A8L, 0x19F3DCFFL), 0x19F3DCFFL), 0x19F3DCFFL, 0xA0C086A8L, 0x19F3DCFFL, (VECTOR(uint32_t, 2))(0xA0C086A8L, 0x19F3DCFFL), (VECTOR(uint32_t, 2))(0xA0C086A8L, 0x19F3DCFFL), 0xA0C086A8L, 0x19F3DCFFL, 0xA0C086A8L, 0x19F3DCFFL);
    int8_t *l_545[9][7][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_546 = 0x50CD02DFL;
    int64_t *l_549[8][6] = {{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196},{&p_991->g_196,&p_991->g_196,&p_991->g_196,&p_991->g_196,(void*)0,&p_991->g_196}};
    VECTOR(uint64_t, 2) l_550 = (VECTOR(uint64_t, 2))(0xB97A07D52D4DDC6EL, 8UL);
    int i, j, k;
    (*p_991->g_552) = ((safe_rshift_func_int8_t_s_s(((((*l_531) = l_529) == ((*l_532) = &l_530)) < ((safe_rshift_func_int8_t_s_u((**p_991->g_198), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_536.wzzw)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_537.s2550550127425020)).lo)).s32))).yxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_538.wwwz)).xyyxzywzwwzxywzz)).s8b16))).lo)))).odd == (l_543 = (safe_sub_func_uint32_t_u_u(p_19, (((--p_991->g_300.s7) , &p_991->g_37[2]) == &p_991->g_37[2]))))))) >= ((VECTOR(uint32_t, 4))(l_544.sbf41)).y)), (l_546 = 0x12L))) || ((((safe_mod_func_int64_t_s_s((l_537.s0 |= p_21), ((VECTOR(uint64_t, 8))(l_550.xxxyxyyy)).s0)) != l_544.s6) || p_21) , 0x6C3667B1L));
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_458 p_991->g_461 p_991->g_462 p_991->g_464 p_991->g_470 p_991->g_120 p_991->g_488 p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_165 p_991->g_433 p_991->g_comm_values p_991->g_37 p_991->g_434 p_991->g_502 p_991->g_503 p_991->g_508 p_991->g_512 p_991->g_514 p_991->g_517 p_991->g_156 p_991->g_300 p_991->g_196 p_991->g_446 p_991->g_144
 * writes: p_991->g_300 p_991->g_156 p_991->g_135 p_991->g_165 p_991->g_452 p_991->g_120 p_991->g_525 p_991->g_145
 */
int32_t * func_23(int32_t * p_24, int16_t  p_25, int32_t * p_26, struct S0 * p_991)
{ /* block id: 197 */
    int16_t l_457 = 0x3037L;
    VECTOR(int16_t, 8) l_459 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x43DFL), 0x43DFL), 0x43DFL, (-6L), 0x43DFL);
    VECTOR(int16_t, 2) l_460 = (VECTOR(int16_t, 2))(0x7474L, (-1L));
    VECTOR(int16_t, 16) l_463 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2CB3L), 0x2CB3L), 0x2CB3L, (-1L), 0x2CB3L, (VECTOR(int16_t, 2))((-1L), 0x2CB3L), (VECTOR(int16_t, 2))((-1L), 0x2CB3L), (-1L), 0x2CB3L, (-1L), 0x2CB3L);
    int32_t *l_471 = (void*)0;
    int32_t *l_472[10] = {&p_991->g_100,&p_991->g_145,&p_991->g_100,&p_991->g_100,&p_991->g_145,&p_991->g_100,&p_991->g_100,&p_991->g_145,&p_991->g_100,&p_991->g_100};
    uint64_t l_473 = 0x724CF205C796044DL;
    uint8_t *l_480 = &p_991->g_113;
    uint8_t *l_482[8][1] = {{&p_991->g_113},{&p_991->g_113},{&p_991->g_113},{&p_991->g_113},{&p_991->g_113},{&p_991->g_113},{&p_991->g_113},{&p_991->g_113}};
    uint8_t **l_481 = &l_482[2][0];
    VECTOR(int8_t, 2) l_487 = (VECTOR(int8_t, 2))(0L, (-1L));
    int8_t *l_491 = (void*)0;
    int8_t *l_492 = &p_991->g_135;
    int8_t *l_493 = (void*)0;
    int8_t *l_494 = (void*)0;
    int8_t *l_495 = (void*)0;
    int16_t *l_496 = (void*)0;
    int16_t *l_497 = &p_991->g_452;
    int64_t l_498 = 0x127B27DDE4A3F8B8L;
    uint32_t l_499 = 0UL;
    VECTOR(int8_t, 8) l_504 = (VECTOR(int8_t, 8))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x18L), 0x18L), 0x18L, (-8L), 0x18L);
    VECTOR(int8_t, 8) l_505 = (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, (-7L)), (-7L)), (-7L), 0x5AL, (-7L));
    VECTOR(int8_t, 8) l_506 = (VECTOR(int8_t, 8))(0x75L, (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, 4L), 4L), 4L, 0x75L, 4L);
    uint32_t l_507[8][2][1] = {{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}},{{4294967295UL},{4294967295UL}}};
    VECTOR(int8_t, 4) l_509 = (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x1FL), 0x1FL);
    VECTOR(int8_t, 8) l_510 = (VECTOR(int8_t, 8))(0x6DL, (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x0AL), 0x0AL), 0x0AL, 0x6DL, 0x0AL);
    VECTOR(int8_t, 16) l_511 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x05L), 0x05L), 0x05L, 7L, 0x05L, (VECTOR(int8_t, 2))(7L, 0x05L), (VECTOR(int8_t, 2))(7L, 0x05L), 7L, 0x05L, 7L, 0x05L);
    VECTOR(int8_t, 4) l_513 = (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x62L), 0x62L);
    VECTOR(int8_t, 16) l_515 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x31L), 0x31L), 0x31L, (-3L), 0x31L, (VECTOR(int8_t, 2))((-3L), 0x31L), (VECTOR(int8_t, 2))((-3L), 0x31L), (-3L), 0x31L, (-3L), 0x31L);
    VECTOR(int8_t, 8) l_516 = (VECTOR(int8_t, 8))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0L), 0L), 0L, 0x1EL, 0L);
    int32_t **l_520 = &l_472[4];
    int32_t **l_521[5][10] = {{&l_471,&p_991->g_120,&p_991->g_120,&p_991->g_22,(void*)0,&p_991->g_22,(void*)0,&p_991->g_120,&p_991->g_120,&p_991->g_22},{&l_471,&p_991->g_120,&p_991->g_120,&p_991->g_22,(void*)0,&p_991->g_22,(void*)0,&p_991->g_120,&p_991->g_120,&p_991->g_22},{&l_471,&p_991->g_120,&p_991->g_120,&p_991->g_22,(void*)0,&p_991->g_22,(void*)0,&p_991->g_120,&p_991->g_120,&p_991->g_22},{&l_471,&p_991->g_120,&p_991->g_120,&p_991->g_22,(void*)0,&p_991->g_22,(void*)0,&p_991->g_120,&p_991->g_120,&p_991->g_22},{&l_471,&p_991->g_120,&p_991->g_120,&p_991->g_22,(void*)0,&p_991->g_22,(void*)0,&p_991->g_120,&p_991->g_120,&p_991->g_22}};
    int8_t l_522 = 0L;
    int8_t l_523 = 0L;
    int32_t *l_524 = &p_991->g_525[2][7];
    int i, j, k;
    l_499 = (((safe_lshift_func_int16_t_s_s(l_457, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((-1L), 0x4FA4L, (-8L), (-4L))).y, 0x639DL, (-1L), 0x276FL)), 6L, ((VECTOR(int16_t, 2))(0x2C78L, 0x39B0L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-8L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_991->g_458.se0fb11ae)).even)), ((VECTOR(int16_t, 2))(l_459.s05)), 2L)).s22)), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(l_460.xyxx)).wxxywxyzyzxxwwyw, ((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(p_991->g_461.zyzy)), ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(p_991->g_462.xz)).yyxxyxxyyxxyyyyy, ((VECTOR(int16_t, 8))(p_25, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_463.s06)), (((VECTOR(uint16_t, 4))(p_991->g_464.xxxx)).z ^ (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s((p_991->g_300.sf = ((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_991->global_0_offset, get_global_id(0), 10), 9)) & 0xE3L)), 12))))), 0x2DAFL, ((*l_497) = ((l_473 ^= ((*p_991->g_120) = ((VECTOR(int32_t, 16))(p_991->g_470.yyxxyxyyyxxyyyxx)).s5)) | (safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s((p_25 , (((safe_div_func_int16_t_s_s((l_480 != ((*l_481) = l_480)), 0x5907L)) || (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_991->g_165.w &= ((*l_492) = ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(l_487.xxyxyxxyyxxxxyyx)).saa, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(0x7BL, 0x20L)).yxxyyxxx, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_991->g_488.yyxy)), 0x06L, ((safe_rshift_func_uint16_t_u_s(p_25, p_25)) , (**p_991->g_198)), ((VECTOR(int8_t, 2))((-8L))), ((VECTOR(int8_t, 8))((-6L))))), ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(1L))))).lo))).s63))).xxyxxyyx)).s3)), 4)), p_991->g_433.y))) != p_991->g_comm_values[p_991->tid])), p_25)) < 0xAA8EL), p_991->g_37[2])))), ((VECTOR(int16_t, 2))(0L)), (-1L))).s7, (-1L), (-8L), p_25, l_498, 0x6651L, 3L)).s6720671616647107))).sda34, ((VECTOR(int16_t, 4))(0x1854L))))).zzyyyzxzzxzyxywx))).s16ba, (int16_t)p_25))), ((VECTOR(int16_t, 4))(1L)), 7L, 0x39C6L, p_25, 0L, 0x6386L, 0x62F1L)).odd, ((VECTOR(int16_t, 8))(6L)), ((VECTOR(int16_t, 8))(0x2AC4L))))).s20, ((VECTOR(int16_t, 2))(0L))))), 0x5D30L, 5L)), ((VECTOR(int16_t, 4))(1L)), 0x6E88L)).s2)) , p_991->g_464.x) == p_991->g_434.z);
    (*p_991->g_144) = (p_991->g_488.w ^ ((((0UL & (safe_lshift_func_int16_t_s_u(p_25, 0))) || ((FAKE_DIVERGE(p_991->global_1_offset, get_global_id(1), 10) <= p_25) != p_25)) & (((*l_524) = (+(((p_25 == (((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(p_991->g_502.s2066)).zxzzwwzyxxwwyywz, ((VECTOR(int8_t, 8))(p_991->g_503.yxyxyxxy)).s4235427163451711))).sb3, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))((-2L), (-1L))).yyyy, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(l_504.s54)).yyxy, ((VECTOR(int8_t, 16))(l_505.s6064323714115062)).sc8ea, ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x5FL, ((VECTOR(int8_t, 4))(l_506.s0357)), l_507[5][0][0], 1L, (-4L))))).hi)).wwxwzxyw)).s62))).xyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_991->g_508.s83)).yxxyyxyyyyxyxxxx)).scaf0))).hi, ((VECTOR(int8_t, 2))(l_509.yx))))).yxxyyxyx, ((VECTOR(int8_t, 16))(l_510.s6317012002301253)).lo))), ((VECTOR(int8_t, 2))(l_511.s70)).yyyyxyxx))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_991->g_512.s4227)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))((-3L), ((VECTOR(int8_t, 2))((-9L), 1L)), (-6L), ((VECTOR(int8_t, 4))(l_513.wwzy)))).s63, ((VECTOR(int8_t, 4))(p_991->g_514.s2636)).lo, ((VECTOR(int8_t, 16))(l_515.sddc988cea49bcb3e)).s40))), (-1L), 0x34L))))).hi))), ((VECTOR(int8_t, 2))(l_516.s72)).yyyy)))))).zxyyywww)).s44))).yyxyxyxxyxxxxxxx)).s7 , ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_991->g_517.s8ba6)).wwxwxywxwyzwyxxz)).odd)).s4 , 0x2F1FL) , ((safe_add_func_uint8_t_u_u((((p_991->g_120 = ((*l_520) = func_32(p_25, p_991->g_156[1], p_25, p_991->g_300.s2, p_991))) == (void*)0) , p_991->g_433.w), l_522)) & GROUP_DIVERGE(2, 1)))) < p_25) == p_991->g_196)) || l_523) != p_991->g_446.w))) , p_25)) ^ 0UL));
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_37 p_991->g_100 p_991->g_69 p_991->g_105 p_991->g_156 p_991->g_145 p_991->g_119 p_991->g_120
 * writes: p_991->g_71 p_991->g_156 p_991->g_145
 */
int32_t * func_27(int64_t  p_28, int32_t * p_29, int32_t * p_30, uint64_t  p_31, struct S0 * p_991)
{ /* block id: 185 */
    int8_t **l_381 = (void*)0;
    int8_t *l_382[1];
    int8_t *l_383 = &p_991->g_135;
    int32_t l_386 = (-1L);
    int16_t *l_387 = &p_991->g_71;
    int32_t *l_388 = &p_991->g_145;
    uint8_t *l_395 = &p_991->g_113;
    VECTOR(int8_t, 16) l_416 = (VECTOR(int8_t, 16))(0x2EL, (VECTOR(int8_t, 4))(0x2EL, (VECTOR(int8_t, 2))(0x2EL, 0x01L), 0x01L), 0x01L, 0x2EL, 0x01L, (VECTOR(int8_t, 2))(0x2EL, 0x01L), (VECTOR(int8_t, 2))(0x2EL, 0x01L), 0x2EL, 0x01L, 0x2EL, 0x01L);
    VECTOR(int8_t, 16) l_417 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x33L), 0x33L), 0x33L, 3L, 0x33L, (VECTOR(int8_t, 2))(3L, 0x33L), (VECTOR(int8_t, 2))(3L, 0x33L), 3L, 0x33L, 3L, 0x33L);
    VECTOR(int8_t, 2) l_418 = (VECTOR(int8_t, 2))(0x19L, 0x74L);
    VECTOR(int8_t, 2) l_419 = (VECTOR(int8_t, 2))(0x23L, 0L);
    VECTOR(uint8_t, 8) l_435 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL);
    VECTOR(uint8_t, 2) l_436 = (VECTOR(uint8_t, 2))(5UL, 0x9FL);
    VECTOR(uint8_t, 8) l_437 = (VECTOR(uint8_t, 8))(0xC8L, (VECTOR(uint8_t, 4))(0xC8L, (VECTOR(uint8_t, 2))(0xC8L, 249UL), 249UL), 249UL, 0xC8L, 249UL);
    VECTOR(uint8_t, 8) l_438 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 248UL), 248UL), 248UL, 1UL, 248UL);
    VECTOR(uint8_t, 4) l_439 = (VECTOR(uint8_t, 4))(0xD9L, (VECTOR(uint8_t, 2))(0xD9L, 0xADL), 0xADL);
    VECTOR(uint8_t, 8) l_440 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL);
    uint32_t *l_442 = &p_991->g_305;
    VECTOR(int8_t, 4) l_445 = (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x08L), 0x08L);
    uint8_t *l_449 = &p_991->g_113;
    uint8_t *l_450 = (void*)0;
    int64_t *l_451 = &p_991->g_196;
    int32_t **l_454 = &l_388;
    int i;
    for (i = 0; i < 1; i++)
        l_382[i] = (void*)0;
    (*l_388) ^= ((((0x709AL || (((l_382[0] = (void*)0) == l_383) ^ ((safe_lshift_func_int16_t_s_u((p_991->g_37[2] || p_991->g_100), 7)) , l_386))) > ((*p_29) = (6L || ((*l_387) = ((~0UL) & p_991->g_69.z))))) , p_991->g_105.w) , (*p_29));
    (*l_454) = &l_386;
    (*l_454) = (*p_991->g_119);
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_32(uint8_t  p_33, uint32_t  p_34, uint64_t  p_35, int32_t  p_36, struct S0 * p_991)
{ /* block id: 181 */
    int32_t *l_380 = &p_991->g_156[1];
    l_380 = l_380;
    return l_380;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->l_comm_values p_991->g_22 p_991->g_69 p_991->g_37 p_991->g_83 p_991->g_comm_values p_991->g_88 p_991->g_71 p_991->g_105 p_991->g_113 p_991->g_119 p_991->g_120 p_991->g_100 p_991->g_135 p_991->g_144 p_991->g_145 p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_196 p_991->g_209 p_991->g_241 p_991->g_290 p_991->g_297 p_991->g_300 p_991->g_305 p_991->g_156 p_991->g_165 p_991->g_221 p_991->g_343 p_991->g_350 p_991->g_379
 * writes: p_991->g_71 p_991->g_83 p_991->g_88 p_991->g_113 p_991->g_100 p_991->g_120 p_991->g_145 p_991->g_167 p_991->g_135 p_991->g_156 p_991->g_305 p_991->g_350
 */
uint32_t  func_38(int32_t  p_39, uint64_t  p_40, int16_t  p_41, struct S0 * p_991)
{ /* block id: 5 */
    uint32_t l_45 = 0UL;
    int32_t *l_46 = (void*)0;
    uint8_t l_53 = 0UL;
    int32_t *l_344 = &p_991->g_145;
    int32_t **l_345 = (void*)0;
    int32_t **l_346 = (void*)0;
    int32_t **l_347 = (void*)0;
    int32_t **l_348 = &p_991->g_120;
    int32_t *l_349 = &p_991->g_350;
    (*l_349) &= (p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))] <= ((((safe_mod_func_uint8_t_u_u(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).xyyy)).y , p_40) || p_40), l_45)) , (l_46 != ((*l_348) = (l_344 = func_47((p_991->g_22 == (void*)0), l_53, p_991->g_22, l_53, p_991->g_22, p_991))))) || (**p_991->g_198)) >= 0x3701L));
    (*l_348) = &p_39;
    if ((atomic_inc(&p_991->g_atomic_input[78 * get_linear_group_id() + 13]) == 7))
    { /* block id: 147 */
        int32_t l_351 = 0x3D0323B8L;
        for (l_351 = 17; (l_351 <= (-9)); l_351 = safe_sub_func_uint16_t_u_u(l_351, 2))
        { /* block id: 150 */
            int32_t l_354 = 7L;
            uint8_t l_355[3];
            uint64_t l_356 = 0xDA102ED6E516010AL;
            int32_t l_360 = 0x3E925FEAL;
            int32_t *l_359 = &l_360;
            int32_t *l_361 = &l_360;
            int i;
            for (i = 0; i < 3; i++)
                l_355[i] = 255UL;
            l_355[0] &= l_354;
            l_356++;
            l_361 = l_359;
        }
        unsigned int result = 0;
        result += l_351;
        atomic_add(&p_991->g_special_values[78 * get_linear_group_id() + 13], result);
    }
    else
    { /* block id: 155 */
        (1 + 1);
    }
    for (p_39 = (-30); (p_39 < (-13)); p_39 = safe_add_func_uint32_t_u_u(p_39, 8))
    { /* block id: 160 */
        uint64_t l_368 = 0x21D8020723358E23L;
        int32_t l_376[8][5][6] = {{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}},{{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL},{5L,(-1L),0x721D5573L,1L,(-10L),0x2CD6FC0DL}}};
        int32_t *l_378[6] = {&p_991->g_350,&p_991->g_145,&p_991->g_350,&p_991->g_350,&p_991->g_145,&p_991->g_350};
        int i, j, k;
        for (p_991->g_145 = (-11); (p_991->g_145 != (-16)); p_991->g_145 = safe_sub_func_uint32_t_u_u(p_991->g_145, 4))
        { /* block id: 163 */
            int64_t l_375 = 0x38E1D6876606C33CL;
            int32_t **l_377 = &l_349;
            (1 + 1);
        }
        if (p_41)
            continue;
        (*p_991->g_144) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_991->g_379.xyyy)).yxwwxyxwywyyyzzw)).sa;
    }
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->l_comm_values p_991->g_69 p_991->g_37 p_991->g_83 p_991->g_comm_values p_991->g_88 p_991->g_71 p_991->g_105 p_991->g_113 p_991->g_119 p_991->g_120 p_991->g_100 p_991->g_135 p_991->g_144 p_991->g_145 p_991->g_198 p_991->g_199 p_991->g_200 p_991->g_196 p_991->g_209 p_991->g_241 p_991->g_290 p_991->g_297 p_991->g_300 p_991->g_305 p_991->g_156 p_991->g_165 p_991->g_221 p_991->g_343
 * writes: p_991->g_71 p_991->g_83 p_991->g_88 p_991->g_113 p_991->g_100 p_991->g_120 p_991->g_145 p_991->g_167 p_991->g_135 p_991->g_156 p_991->g_305
 */
int32_t * func_47(int32_t  p_48, int64_t  p_49, int32_t * p_50, int64_t  p_51, int32_t * p_52, struct S0 * p_991)
{ /* block id: 6 */
    VECTOR(int32_t, 16) l_54 = (VECTOR(int32_t, 16))(0x3F3F0790L, (VECTOR(int32_t, 4))(0x3F3F0790L, (VECTOR(int32_t, 2))(0x3F3F0790L, 0x191F32AFL), 0x191F32AFL), 0x191F32AFL, 0x3F3F0790L, 0x191F32AFL, (VECTOR(int32_t, 2))(0x3F3F0790L, 0x191F32AFL), (VECTOR(int32_t, 2))(0x3F3F0790L, 0x191F32AFL), 0x3F3F0790L, 0x191F32AFL, 0x3F3F0790L, 0x191F32AFL);
    VECTOR(uint32_t, 2) l_65 = (VECTOR(uint32_t, 2))(4294967288UL, 0x88ED9E8BL);
    int32_t l_80[6][8] = {{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L},{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L},{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L},{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L},{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L},{1L,0x239B7597L,0L,1L,0x26B3FA45L,0L,0L,0x26B3FA45L}};
    int16_t *l_109[9];
    int8_t *l_134 = &p_991->g_135;
    uint32_t *l_142 = &p_991->g_83;
    int32_t *l_232 = &p_991->g_156[1];
    uint64_t l_280[10][8] = {{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL},{0xC7243F07FCD342D4L,0xC7243F07FCD342D4L,1UL,0xD9C95290A3C8533CL,0x29B00B315BCC31C5L,18446744073709551613UL,1UL,0x123F752003131EDFL}};
    int32_t *l_334[1][7] = {{&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1],&p_991->g_156[1]}};
    uint32_t l_335 = 0x30FFB654L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_109[i] = &p_991->g_37[1];
    if (((VECTOR(int32_t, 16))(l_54.scb06a9bebb6f2ba1)).s0)
    { /* block id: 7 */
        int8_t *l_61[6];
        int32_t l_62 = (-7L);
        int32_t l_66 = 0x28F0FC5AL;
        int16_t *l_70 = &p_991->g_71;
        uint32_t *l_81 = (void*)0;
        uint32_t *l_82 = &p_991->g_83;
        uint64_t *l_86 = (void*)0;
        uint64_t *l_87 = &p_991->g_88;
        VECTOR(int32_t, 4) l_104 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
        int i, j;
        for (i = 0; i < 6; i++)
            l_61[i] = (void*)0;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_991->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[(safe_mod_func_uint32_t_u_u(((*l_82) = ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(p_51, (~p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]), 0x2DB6L, (-1L), 0L, 0L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x798BL)).xxyx)), func_59(((l_62 = 0L) <= (safe_sub_func_int16_t_s_s(((*l_70) = ((l_66 = ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_65.yxyx)).hi)).even) , (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_991->g_69.yz)).even, FAKE_DIVERGE(p_991->global_0_offset, get_global_id(0), 10))))), (safe_div_func_int8_t_s_s(p_991->g_37[2], (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(253UL, 2)), ((*l_87) &= (((((*l_82) = l_80[0][5]) , (0x0BAB22BEB855BD1BL < ((safe_rshift_func_int8_t_s_s((((void*)0 == l_61[4]) <= 1UL), p_991->g_83)) < p_991->g_comm_values[p_991->tid]))) , l_61[0]) == (void*)0)))) , p_51), 14))))))), p_991), 1L, p_49, ((VECTOR(int16_t, 2))(0L)), 0x0E41L)).odd, ((VECTOR(int16_t, 8))(0x7706L)))))))).s4, l_65.x)), p_991->g_comm_values[p_991->tid])) == 0x2708L)), 10))][(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]));
        if (l_54.s2)
        { /* block id: 37 */
            l_66 = ((safe_sub_func_int32_t_s_s(0x36C7F149L, (-7L))) , ((VECTOR(int32_t, 16))(l_104.wzwxzywxwwxwwxxy)).s8);
            return &p_991->g_100;
        }
        else
        { /* block id: 40 */
            VECTOR(int64_t, 8) l_106 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
            uint8_t *l_112 = &p_991->g_113;
            int i;
            p_991->g_100 = ((((VECTOR(int16_t, 8))((-3L), (-3L), ((VECTOR(int16_t, 4))(0x010EL, (0x24L || p_991->g_83), 1L, 7L)), 0x1B5BL, 5L)).s0 , ((((*l_70) = p_48) , &p_991->g_22) != ((p_991->g_37[2] || (((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(p_991->g_105.xxwx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_106.s2353233277767502)).s47)).yyxx))), (int64_t)(safe_rshift_func_uint8_t_u_u((l_109[3] != ((safe_mul_func_uint8_t_u_u(((*l_112)--), ((safe_div_func_uint64_t_u_u(((-2L) != (!l_54.sb)), l_80[0][5])) > FAKE_DIVERGE(p_991->group_1_offset, get_group_id(1), 10)))) , &p_991->g_37[4])), l_54.s4))))).yzxwwwyx, ((VECTOR(int64_t, 8))(0x470FE6C1E6BC9521L))))).s4 < 0x75C6BA7167406098L)) , &p_50))) != p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]);
            (*p_991->g_119) = &p_991->g_100;
        }
        for (p_49 = 0; (p_49 == (-17)); p_49--)
        { /* block id: 48 */
            return p_52;
        }
        (*p_991->g_120) = (**p_991->g_119);
    }
    else
    { /* block id: 52 */
        uint32_t l_127 = 9UL;
        int32_t l_138[2];
        int8_t *l_140[8] = {&p_991->g_135,&p_991->g_135,&p_991->g_135,&p_991->g_135,&p_991->g_135,&p_991->g_135,&p_991->g_135,&p_991->g_135};
        int8_t **l_139 = &l_140[7];
        uint8_t *l_141 = &p_991->g_113;
        uint32_t l_157 = 0x28CDBBAEL;
        VECTOR(int8_t, 4) l_230 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x70L), 0x70L);
        VECTOR(uint16_t, 4) l_231 = (VECTOR(uint16_t, 4))(0xFE9EL, (VECTOR(uint16_t, 2))(0xFE9EL, 1UL), 1UL);
        VECTOR(uint32_t, 4) l_240 = (VECTOR(uint32_t, 4))(0x460979C4L, (VECTOR(uint32_t, 2))(0x460979C4L, 4294967287UL), 4294967287UL);
        uint64_t *l_244[5][9][3] = {{{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88}},{{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88}},{{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88}},{{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88}},{{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88},{(void*)0,&p_991->g_88,&p_991->g_88}}};
        VECTOR(uint16_t, 16) l_315 = (VECTOR(uint16_t, 16))(0xD04EL, (VECTOR(uint16_t, 4))(0xD04EL, (VECTOR(uint16_t, 2))(0xD04EL, 6UL), 6UL), 6UL, 0xD04EL, 6UL, (VECTOR(uint16_t, 2))(0xD04EL, 6UL), (VECTOR(uint16_t, 2))(0xD04EL, 6UL), 0xD04EL, 6UL, 0xD04EL, 6UL);
        uint64_t l_330[7] = {0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL,0x5C1FE2523DFDC92DL};
        int32_t *l_333[7] = {&l_138[0],(void*)0,&l_138[0],&l_138[0],(void*)0,&l_138[0],&l_138[0]};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_138[i] = 0x15C65D34L;
        if ((9L & (safe_rshift_func_uint8_t_u_s(((*l_141) = (safe_sub_func_int16_t_s_s((l_127 && (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(1UL, l_127)), (((((safe_add_func_uint32_t_u_u((p_991->g_69.y , p_49), FAKE_DIVERGE(p_991->group_2_offset, get_group_id(2), 10))) , l_134) == ((*l_139) = (((FAKE_DIVERGE(p_991->local_1_offset, get_local_id(1), 10) | p_991->g_37[2]) ^ (l_138[0] = (safe_div_func_int32_t_s_s(6L, (-2L))))) , (void*)0))) > 0xCA1BE135CA447F7BL) , 246UL)))), p_49))), l_65.x))))
        { /* block id: 56 */
            uint32_t **l_143 = &l_142;
            int32_t l_146 = 0x701B87C5L;
            int32_t *l_147 = &l_138[1];
            int32_t *l_148 = &l_138[0];
            int32_t *l_149 = &p_991->g_145;
            int32_t *l_150 = &p_991->g_100;
            int32_t *l_151 = &l_138[0];
            int32_t *l_152 = &p_991->g_145;
            int32_t *l_153 = (void*)0;
            int32_t *l_154 = &l_138[1];
            int32_t *l_155[8] = {&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0]};
            int i;
            (*p_991->g_144) ^= ((*p_991->g_120) = ((p_991->g_135 > (((*l_143) = l_142) == (void*)0)) || p_48));
            (*p_991->g_120) = 7L;
            (*p_991->g_120) = (p_49 > l_146);
            l_157--;
        }
        else
        { /* block id: 63 */
            int32_t l_160[1];
            VECTOR(int16_t, 8) l_175 = (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L);
            VECTOR(uint16_t, 8) l_247 = (VECTOR(uint16_t, 8))(0xD514L, (VECTOR(uint16_t, 4))(0xD514L, (VECTOR(uint16_t, 2))(0xD514L, 0xA9A4L), 0xA9A4L), 0xA9A4L, 0xD514L, 0xA9A4L);
            int16_t *l_283 = (void*)0;
            int32_t **l_331 = &p_991->g_120;
            int32_t *l_332[5];
            int i;
            for (i = 0; i < 1; i++)
                l_160[i] = (-1L);
            for (i = 0; i < 5; i++)
                l_332[i] = &l_160[0];
            (*p_991->g_120) = l_160[0];
            for (p_991->g_113 = 0; (p_991->g_113 > 48); p_991->g_113 = safe_add_func_uint16_t_u_u(p_991->g_113, 2))
            { /* block id: 67 */
                uint8_t *l_166[7] = {(void*)0,&p_991->g_113,(void*)0,(void*)0,&p_991->g_113,(void*)0,(void*)0};
                int8_t **l_176 = &l_140[4];
                VECTOR(uint16_t, 2) l_186 = (VECTOR(uint16_t, 2))(0xF489L, 0x3569L);
                int32_t l_188 = 0x3745A2F1L;
                uint64_t *l_206 = &p_991->g_88;
                VECTOR(int64_t, 4) l_218 = (VECTOR(int64_t, 4))(0x4EC7D9E8CB06A753L, (VECTOR(int64_t, 2))(0x4EC7D9E8CB06A753L, 0x5E94D96B292E38BFL), 0x5E94D96B292E38BFL);
                uint32_t l_222[3];
                int64_t l_227 = 0x3E1ECB5CD2D3AF8AL;
                VECTOR(uint8_t, 4) l_273 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xFCL), 0xFCL);
                int i;
                for (i = 0; i < 3; i++)
                    l_222[i] = 0x76F3828BL;
                if ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(p_991->g_165.yx)).hi, (p_991->g_167 = 2UL))))
                { /* block id: 69 */
                    return p_52;
                }
                else
                { /* block id: 71 */
                    uint8_t l_168 = 0x52L;
                    int32_t *l_201 = (void*)0;
                    --l_168;
                    for (p_991->g_83 = (-2); (p_991->g_83 == 37); p_991->g_83++)
                    { /* block id: 75 */
                        VECTOR(int8_t, 16) l_187 = (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-10L)), (-10L)), (-10L), 0x2CL, (-10L), (VECTOR(int8_t, 2))(0x2CL, (-10L)), (VECTOR(int8_t, 2))(0x2CL, (-10L)), 0x2CL, (-10L), 0x2CL, (-10L));
                        int64_t *l_195 = &p_991->g_196;
                        int32_t l_197 = 3L;
                        int i;
                        l_138[0] = (safe_mod_func_uint16_t_u_u(0x91B5L, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_175.s2153301654002655)).lo)).s4 > (l_176 == (((((safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u(((l_197 = (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((0xBE60ADCB03EBDBDEL != ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(65526UL, 1UL, 65534UL, 65535UL)).y, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_186.yxyxyyyy)).lo)).wyyxxzyyyxzwxwzz)).s88)).yyxxyyyy))).even, (uint16_t)p_991->g_88, (uint16_t)p_51))).z)) && (((p_991->g_83 == (((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(0x40L, ((VECTOR(uint8_t, 2))(0x13L, 0xDEL)), ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x81L, 0UL)).yyxy)).yyzwwxzx))), ((VECTOR(uint8_t, 4))(((l_188 &= ((VECTOR(int8_t, 2))(l_187.sa2)).odd) , ((safe_rshift_func_int8_t_s_u((((*l_195) |= (safe_sub_func_int16_t_s_s(l_175.s3, (safe_div_func_int32_t_s_s((p_991->g_165.x >= l_187.sa), FAKE_DIVERGE(p_991->group_2_offset, get_group_id(2), 10)))))) & (-1L)), 4)) | p_991->g_105.w)), ((VECTOR(uint8_t, 2))(0UL)), 0x92L)).ywwwwwwy))).s14, ((VECTOR(uint8_t, 2))(0x7FL))))), 255UL, 0x4FL, 0x5FL)).odd, ((VECTOR(uint8_t, 4))(0x10L))))).even)).yxyyxxxxyyxyxxxy, ((VECTOR(uint8_t, 16))(0UL))))).s7 , p_49)) < p_991->g_37[2]) | p_991->g_145))) , l_168), GROUP_DIVERGE(2, 1))) , GROUP_DIVERGE(2, 1)), (*p_991->g_120)))) != 4UL), 2L)))) || l_138[0]) , p_48) , p_991->g_69.x) , p_991->g_198))) && l_168)));
                        return l_201;
                    }
                }
                for (p_49 = 0; (p_49 == 0); ++p_49)
                { /* block id: 85 */
                    return p_50;
                }
                (*p_991->g_120) |= (((safe_mul_func_uint8_t_u_u((l_188 = (((*l_206)++) < p_991->g_69.w)), (~l_186.y))) == ((VECTOR(int16_t, 4))(p_991->g_209.xxxx)).y) != l_80[0][5]);
                if (((*p_991->g_120) = ((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_218.wxxzxzyz)).lo)).y, (+((!(*p_991->g_120)) < (+(safe_lshift_func_int8_t_s_u((**p_991->g_198), 5))))))), 0xFCC2L)), 0x0B36999CFFFDCFAAL)), (((*l_134) &= (((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_991->g_221.se271cbbb)), 0UL, ((VECTOR(uint32_t, 2))(0xE2F1326CL, 0xB5D01FECL)), 4294967286UL, 6UL, l_54.s2, 0x535DD0E7L, 0UL)).s8b, (uint32_t)p_991->g_37[2]))).hi ^ ((l_160[0] | ((-4L) && ((((void*)0 != (*l_139)) != p_991->g_196) & (-6L)))) != 0x3FL))) , l_222[0]))) < l_80[5][1])))
                { /* block id: 93 */
                    int32_t l_224 = 0x26ABD6A1L;
                    (*p_991->g_120) &= (safe_unary_minus_func_uint32_t_u(l_224));
                }
                else
                { /* block id: 95 */
                    VECTOR(uint32_t, 2) l_239 = (VECTOR(uint32_t, 2))(0x2EAF8C53L, 0x81BCB760L);
                    int32_t l_258[3];
                    int16_t **l_299 = &l_109[3];
                    int32_t l_309[8][8] = {{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L},{8L,3L,(-4L),0x11D72E1FL,3L,0x11D72E1FL,(-4L),3L}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_258[i] = 0x0524F432L;
                    for (p_991->g_145 = 5; (p_991->g_145 > (-20)); p_991->g_145 = safe_sub_func_int64_t_s_s(p_991->g_145, 2))
                    { /* block id: 98 */
                        uint8_t l_238 = 0x6CL;
                        uint64_t **l_245 = &l_244[0][6][2];
                        uint64_t *l_246[10][2];
                        int32_t l_259 = 0x35558DF0L;
                        int i, j;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_246[i][j] = &p_991->g_88;
                        }
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_991->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[(safe_mod_func_uint32_t_u_u(((*l_142) &= (!l_227)), 10))][(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]));
                        (*p_991->g_120) = (*p_991->g_120);
                        (*p_991->g_120) = ((safe_mod_func_uint8_t_u_u((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_230.wx)).yxxyxxyxyyyxxyyy)).hi)).s5 ^ (l_259 = (((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xF979L, 0xDC01L)), 0x4EE0L, 0x0D3BL)).odd, ((VECTOR(uint16_t, 16))(l_231.yzzxxwxxzxyzzwyy)).s03))).even || (((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))((l_232 == (((safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_238, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x34DABC89L, 0x3C327D79L)).xxxy)).wxxxwzxy, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_239.xy)).xxxxyyyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_240.ww)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_991->g_241.sc1288388)).s47)), 4294967290UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))((((safe_lshift_func_uint8_t_u_u((&p_991->g_71 != (void*)0), 3)) , ((*l_245) = l_244[2][4][0])) == l_246[8][1]), ((((VECTOR(uint16_t, 16))(l_247.s6627551003332302)).s5 <= (1UL && (safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_int64_t_s((safe_mod_func_int32_t_s_s(((*l_232) = (safe_mul_func_uint8_t_u_u((--p_991->g_255), p_991->g_88))), (((~(l_258[2] = l_222[2])) | (**p_991->g_119)) , 0x60FC5051L))))) | p_49) == (-1L)), p_991->g_241.sf)))) && GROUP_DIVERGE(2, 1)), ((VECTOR(uint32_t, 2))(0x7240D87DL)), ((VECTOR(uint32_t, 4))(0x9AC3D867L)))).s0624707117456052, ((VECTOR(uint32_t, 16))(0xECB843A2L))))).s38)), 1UL)))))))).s6)) ^ l_231.y), FAKE_DIVERGE(p_991->local_1_offset, get_local_id(1), 10))))) , 9UL) , p_52)), ((VECTOR(uint8_t, 2))(7UL)), 0x53L, 0x39L, ((VECTOR(uint8_t, 8))(0x88L)), l_239.y, 1UL, 0UL)).s1276)), ((VECTOR(uint8_t, 4))(0x36L)), ((VECTOR(uint8_t, 4))(0x0BL))))).zyxxyzyywxywyxzy, ((VECTOR(uint8_t, 16))(255UL))))).even, ((VECTOR(uint8_t, 8))(5UL))))).s1 == p_991->g_209.x)))) > 0x58L) , p_991->g_241.s1), p_49)) || (*p_991->g_120));
                    }
                    for (p_991->g_83 = 0; (p_991->g_83 > 10); p_991->g_83 = safe_add_func_int64_t_s_s(p_991->g_83, 2))
                    { /* block id: 113 */
                        int16_t l_268 = 0x1778L;
                        int16_t **l_281 = (void*)0;
                        int16_t **l_282 = &l_109[3];
                        VECTOR(int32_t, 16) l_310 = (VECTOR(int32_t, 16))(0x36602E2CL, (VECTOR(int32_t, 4))(0x36602E2CL, (VECTOR(int32_t, 2))(0x36602E2CL, (-6L)), (-6L)), (-6L), 0x36602E2CL, (-6L), (VECTOR(int32_t, 2))(0x36602E2CL, (-6L)), (VECTOR(int32_t, 2))(0x36602E2CL, (-6L)), 0x36602E2CL, (-6L), 0x36602E2CL, (-6L));
                        int i;
                        (*p_991->g_120) ^= ((((void*)0 != l_134) | ((((((safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(0x4DL, 0x2EL)), l_268)) && p_48) && ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(9UL, 1UL)).yxxxxyyxxyxxyyyx)).s4de0)).x) || (safe_sub_func_int16_t_s_s(((((((((*l_232) = p_49) < (safe_mul_func_int8_t_s_s(l_230.w, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(l_273.zwzwzxzwxwwzzwwy)).se2))).odd))) != (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((*l_282) = ((safe_rshift_func_int16_t_s_u(l_280[5][6], l_258[1])) , (void*)0)) != l_283), 0x0377L)), 3))) < p_991->g_145) , p_991->g_69.y) & 1UL) && FAKE_DIVERGE(p_991->group_2_offset, get_group_id(2), 10)), FAKE_DIVERGE(p_991->global_2_offset, get_global_id(2), 10)))) , FAKE_DIVERGE(p_991->group_1_offset, get_group_id(1), 10)) >= l_240.z)) && p_51);
                        l_309[2][0] = (safe_mod_func_int32_t_s_s((safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(0x0FL, 0x58L)), (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_991->g_290.xxyxxxyyxxxxxyyx)).s8043)).w && (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_991->group_1_offset, get_group_id(1), 10), ((p_51 ^ (((safe_mod_func_uint64_t_u_u((++(*l_206)), ((((((p_991->g_297[2] != l_299) > ((((+(0x0576735B96C2F8AEL < p_51)) <= ((VECTOR(uint16_t, 2))(p_991->g_300.s88)).hi) , (l_258[2] = (l_247.s7 <= (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((++p_991->g_305) > (((safe_unary_minus_func_int32_t_s(0L)) != (*p_991->g_120)) > p_991->g_83)), p_991->g_135)), FAKE_DIVERGE(p_991->global_0_offset, get_global_id(0), 10)))))) >= p_49)) <= p_48) , l_175.s4) , p_991->l_comm_values[(safe_mod_func_uint32_t_u_u(p_991->tid, 9))]) & 0x3B54E963L))) & p_51) , 0x95L)) < 1UL)))))), l_268));
                        if ((*l_232))
                            continue;
                        (*l_232) = ((VECTOR(int32_t, 8))(l_310.s77f9d6cc)).s4;
                    }
                }
            }
            l_232 = ((*l_331) = (((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_315.sc48c4edc)).s7, (p_49 , ((p_51 & (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(9UL, (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), 13)))), 0)) & 0xBABC1A27FF796F7AL) , (safe_lshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(p_51, p_991->g_165.z)), 1UL)) ^ 0x711FDCB0L), 12)))) | (safe_mul_func_int8_t_s_s((p_48 == FAKE_DIVERGE(p_991->local_0_offset, get_local_id(0), 10)), p_991->g_209.x)))))), l_138[0])) | l_330[1]) , p_50));
            (*p_991->g_144) = (p_51 <= (p_48 ^ 4294967294UL));
        }
        (*p_991->g_144) = l_138[0];
        (*p_991->g_144) ^= 0L;
    }
    l_335++;
    for (p_991->g_83 = 1; (p_991->g_83 >= 46); p_991->g_83 = safe_add_func_int64_t_s_s(p_991->g_83, 4))
    { /* block id: 136 */
        int32_t **l_340 = &l_232;
        (*l_340) = (p_50 = p_50);
    }
    (*p_991->g_343) = ((safe_sub_func_uint64_t_u_u(p_991->g_221.s2, p_991->g_69.y)) , l_334[0][6]);
    return l_232;
}


/* ------------------------------------------ */
/* 
 * reads : p_991->g_88 p_991->g_71 p_991->g_83
 * writes: p_991->g_88 p_991->g_71 p_991->g_83
 */
int16_t  func_59(uint8_t  p_60, struct S0 * p_991)
{ /* block id: 13 */
    uint16_t l_97 = 1UL;
    int32_t *l_99 = &p_991->g_100;
    int32_t **l_101 = &l_99;
    for (p_991->g_88 = 0; (p_991->g_88 != 19); ++p_991->g_88)
    { /* block id: 16 */
        for (p_60 = 0; (p_60 <= 53); p_60++)
        { /* block id: 19 */
            int16_t l_98 = (-7L);
            for (p_991->g_71 = 0; (p_991->g_71 >= (-20)); --p_991->g_71)
            { /* block id: 22 */
                for (p_991->g_83 = 0; (p_991->g_83 <= 39); p_991->g_83 = safe_add_func_int8_t_s_s(p_991->g_83, 1))
                { /* block id: 25 */
                    l_98 &= (FAKE_DIVERGE(p_991->local_1_offset, get_local_id(1), 10) == l_97);
                }
            }
        }
    }
    (*l_101) = l_99;
    return p_991->g_88;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_comm_values[i] = 1;
    struct S0 c_992;
    struct S0* p_991 = &c_992;
    struct S0 c_993 = {
        (void*)0, // p_991->g_22
        {1L,1L,1L,1L,1L}, // p_991->g_37
        (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x0F09L), 0x0F09L), // p_991->g_69
        0x52E9L, // p_991->g_71
        0x6345D18AL, // p_991->g_83
        0UL, // p_991->g_88
        2L, // p_991->g_100
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 9L), 9L), // p_991->g_105
        5UL, // p_991->g_113
        (void*)0, // p_991->g_118
        &p_991->g_100, // p_991->g_120
        &p_991->g_120, // p_991->g_119
        (-4L), // p_991->g_135
        0x0A8DCBE8L, // p_991->g_145
        &p_991->g_145, // p_991->g_144
        {6L,6L}, // p_991->g_156
        (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 4L), 4L), // p_991->g_165
        0xC73C5DB1L, // p_991->g_167
        1L, // p_991->g_196
        0x6BL, // p_991->g_200
        &p_991->g_200, // p_991->g_199
        &p_991->g_199, // p_991->g_198
        (VECTOR(int16_t, 2))((-10L), (-1L)), // p_991->g_209
        (VECTOR(uint32_t, 16))(0x1759D767L, (VECTOR(uint32_t, 4))(0x1759D767L, (VECTOR(uint32_t, 2))(0x1759D767L, 0UL), 0UL), 0UL, 0x1759D767L, 0UL, (VECTOR(uint32_t, 2))(0x1759D767L, 0UL), (VECTOR(uint32_t, 2))(0x1759D767L, 0UL), 0x1759D767L, 0UL, 0x1759D767L, 0UL), // p_991->g_221
        (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 8UL), 8UL), 8UL, 4UL, 8UL, (VECTOR(uint32_t, 2))(4UL, 8UL), (VECTOR(uint32_t, 2))(4UL, 8UL), 4UL, 8UL, 4UL, 8UL), // p_991->g_241
        18446744073709551615UL, // p_991->g_255
        (VECTOR(uint32_t, 2))(8UL, 4294967292UL), // p_991->g_290
        (void*)0, // p_991->g_298
        {&p_991->g_298,&p_991->g_298,&p_991->g_298,&p_991->g_298,&p_991->g_298}, // p_991->g_297
        (VECTOR(uint16_t, 16))(0x2A0BL, (VECTOR(uint16_t, 4))(0x2A0BL, (VECTOR(uint16_t, 2))(0x2A0BL, 0xBA6DL), 0xBA6DL), 0xBA6DL, 0x2A0BL, 0xBA6DL, (VECTOR(uint16_t, 2))(0x2A0BL, 0xBA6DL), (VECTOR(uint16_t, 2))(0x2A0BL, 0xBA6DL), 0x2A0BL, 0xBA6DL, 0x2A0BL, 0xBA6DL), // p_991->g_300
        4UL, // p_991->g_305
        &p_991->g_120, // p_991->g_343
        (-7L), // p_991->g_350
        (VECTOR(int32_t, 2))(0x49F0A6AEL, 1L), // p_991->g_379
        (VECTOR(uint32_t, 2))(0x57200246L, 0x2E8BFC4DL), // p_991->g_422
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x79B2L), 0x79B2L), // p_991->g_433
        (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x7CL), 0x7CL), // p_991->g_434
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x4EL), 0x4EL), 0x4EL, 1UL, 0x4EL, (VECTOR(uint8_t, 2))(1UL, 0x4EL), (VECTOR(uint8_t, 2))(1UL, 0x4EL), 1UL, 0x4EL, 1UL, 0x4EL), // p_991->g_441
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x3DL), 0x3DL), // p_991->g_446
        0x5827L, // p_991->g_452
        (void*)0, // p_991->g_453
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x18BFL), 0x18BFL), 0x18BFL, (-1L), 0x18BFL, (VECTOR(int16_t, 2))((-1L), 0x18BFL), (VECTOR(int16_t, 2))((-1L), 0x18BFL), (-1L), 0x18BFL, (-1L), 0x18BFL), // p_991->g_458
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-8L)), (-8L)), // p_991->g_461
        (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), (-4L)), (-4L)), // p_991->g_462
        (VECTOR(uint16_t, 2))(65531UL, 0xBBA0L), // p_991->g_464
        (VECTOR(int32_t, 2))(0x3E6DD32BL, 0L), // p_991->g_470
        (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x41L), 0x41L), // p_991->g_488
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x76L), 0x76L), 0x76L, 1L, 0x76L), // p_991->g_502
        (VECTOR(int8_t, 2))((-1L), 8L), // p_991->g_503
        (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x3EL), 0x3EL), 0x3EL, 6L, 0x3EL, (VECTOR(int8_t, 2))(6L, 0x3EL), (VECTOR(int8_t, 2))(6L, 0x3EL), 6L, 0x3EL, 6L, 0x3EL), // p_991->g_508
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x0AL), 0x0AL), 0x0AL, (-6L), 0x0AL), // p_991->g_512
        (VECTOR(int8_t, 8))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x1CL), 0x1CL), 0x1CL, 0x19L, 0x1CL), // p_991->g_514
        (VECTOR(int32_t, 16))(0x46B3206FL, (VECTOR(int32_t, 4))(0x46B3206FL, (VECTOR(int32_t, 2))(0x46B3206FL, 0x44936891L), 0x44936891L), 0x44936891L, 0x46B3206FL, 0x44936891L, (VECTOR(int32_t, 2))(0x46B3206FL, 0x44936891L), (VECTOR(int32_t, 2))(0x46B3206FL, 0x44936891L), 0x46B3206FL, 0x44936891L, 0x46B3206FL, 0x44936891L), // p_991->g_517
        {{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL},{7L,0x6CACC5CAL,0x14E55154L,0x70C394F0L,0x6CACC5CAL,0x70C394F0L,0x14E55154L,0x6CACC5CAL}}, // p_991->g_525
        (void*)0, // p_991->g_551
        &p_991->g_145, // p_991->g_552
        (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0xFB25L), 0xFB25L), // p_991->g_562
        (void*)0, // p_991->g_576
        &p_991->g_576, // p_991->g_575
        &p_991->g_576, // p_991->g_578
        (VECTOR(int8_t, 8))(0x33L, (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 1L), 1L), 1L, 0x33L, 1L), // p_991->g_589
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x17L), 0x17L), 0x17L, 0UL, 0x17L, (VECTOR(uint8_t, 2))(0UL, 0x17L), (VECTOR(uint8_t, 2))(0UL, 0x17L), 0UL, 0x17L, 0UL, 0x17L), // p_991->g_591
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_991->g_610
        &p_991->g_610[2], // p_991->g_609
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 248UL), 248UL), 248UL, 255UL, 248UL, (VECTOR(uint8_t, 2))(255UL, 248UL), (VECTOR(uint8_t, 2))(255UL, 248UL), 255UL, 248UL, 255UL, 248UL), // p_991->g_612
        &p_991->g_88, // p_991->g_614
        &p_991->g_614, // p_991->g_613
        0x3481FED4L, // p_991->g_616
        &p_991->g_350, // p_991->g_624
        (VECTOR(uint32_t, 16))(0xBF005C69L, (VECTOR(uint32_t, 4))(0xBF005C69L, (VECTOR(uint32_t, 2))(0xBF005C69L, 1UL), 1UL), 1UL, 0xBF005C69L, 1UL, (VECTOR(uint32_t, 2))(0xBF005C69L, 1UL), (VECTOR(uint32_t, 2))(0xBF005C69L, 1UL), 0xBF005C69L, 1UL, 0xBF005C69L, 1UL), // p_991->g_633
        1L, // p_991->g_664
        {{{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL}},{{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL}},{{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL}},{{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL},{0x7BEDL,0x070DL,0x54BBL,0x070DL,0x7BEDL,0x7BEDL,0x070DL}}}, // p_991->g_665
        0x15FEL, // p_991->g_666
        {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L}}, // p_991->g_667
        1L, // p_991->g_668
        1L, // p_991->g_669
        0x78BDL, // p_991->g_670
        {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}, // p_991->g_671
        {{{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)}},{{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)}},{{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)}},{{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)}},{{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)},{0x360DL,0x5A05L,0x53DBL,0L,(-1L)}}}, // p_991->g_672
        1L, // p_991->g_673
        {{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668},{&p_991->g_666,(void*)0,&p_991->g_672[1][0][2],&p_991->g_668,&p_991->g_673,&p_991->g_666,&p_991->g_668,(void*)0,&p_991->g_668}}, // p_991->g_663
        &p_991->g_663[7][4], // p_991->g_662
        (void*)0, // p_991->g_710
        (void*)0, // p_991->g_713
        (void*)0, // p_991->g_721
        (VECTOR(uint32_t, 2))(0x4E3A0393L, 6UL), // p_991->g_728
        {(void*)0,(void*)0,(void*)0}, // p_991->g_745
        &p_991->g_745[2], // p_991->g_744
        &p_991->g_744, // p_991->g_743
        &p_991->g_575, // p_991->g_785
        (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x09L), 0x09L), 0x09L, (-10L), 0x09L, (VECTOR(int8_t, 2))((-10L), 0x09L), (VECTOR(int8_t, 2))((-10L), 0x09L), (-10L), 0x09L, (-10L), 0x09L), // p_991->g_823
        0x2D0FL, // p_991->g_863
        (VECTOR(uint32_t, 4))(0x9A65171CL, (VECTOR(uint32_t, 2))(0x9A65171CL, 4294967295UL), 4294967295UL), // p_991->g_865
        (VECTOR(int64_t, 2))((-1L), 0x55653174EE8FF381L), // p_991->g_882
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int64_t, 2))(1L, 0L), (VECTOR(int64_t, 2))(1L, 0L), 1L, 0L, 1L, 0L), // p_991->g_884
        (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 4L), 4L), // p_991->g_888
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x55B8226BC4E9B43FL), 0x55B8226BC4E9B43FL), // p_991->g_896
        (VECTOR(uint64_t, 2))(0xDB85C79CFD6FCB4AL, 0xD410C8E222E153D8L), // p_991->g_897
        (VECTOR(int8_t, 8))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, (-1L)), (-1L)), (-1L), 0x49L, (-1L)), // p_991->g_898
        (VECTOR(int8_t, 2))(6L, 0L), // p_991->g_911
        (VECTOR(uint32_t, 2))(4294967291UL, 0x89C379C8L), // p_991->g_933
        18446744073709551615UL, // p_991->g_940
        (VECTOR(int8_t, 16))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 5L), 5L), 5L, 0x2AL, 5L, (VECTOR(int8_t, 2))(0x2AL, 5L), (VECTOR(int8_t, 2))(0x2AL, 5L), 0x2AL, 5L, 0x2AL, 5L), // p_991->g_965
        0L, // p_991->g_987
        0, // p_991->v_collective
        sequence_input[get_global_id(0)], // p_991->global_0_offset
        sequence_input[get_global_id(1)], // p_991->global_1_offset
        sequence_input[get_global_id(2)], // p_991->global_2_offset
        sequence_input[get_local_id(0)], // p_991->local_0_offset
        sequence_input[get_local_id(1)], // p_991->local_1_offset
        sequence_input[get_local_id(2)], // p_991->local_2_offset
        sequence_input[get_group_id(0)], // p_991->group_0_offset
        sequence_input[get_group_id(1)], // p_991->group_1_offset
        sequence_input[get_group_id(2)], // p_991->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[0][get_linear_local_id()])), // p_991->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_992 = c_993;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_991);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_991->g_37[i], "p_991->g_37[i]", print_hash_value);

    }
    transparent_crc(p_991->g_69.x, "p_991->g_69.x", print_hash_value);
    transparent_crc(p_991->g_69.y, "p_991->g_69.y", print_hash_value);
    transparent_crc(p_991->g_69.z, "p_991->g_69.z", print_hash_value);
    transparent_crc(p_991->g_69.w, "p_991->g_69.w", print_hash_value);
    transparent_crc(p_991->g_71, "p_991->g_71", print_hash_value);
    transparent_crc(p_991->g_83, "p_991->g_83", print_hash_value);
    transparent_crc(p_991->g_88, "p_991->g_88", print_hash_value);
    transparent_crc(p_991->g_100, "p_991->g_100", print_hash_value);
    transparent_crc(p_991->g_105.x, "p_991->g_105.x", print_hash_value);
    transparent_crc(p_991->g_105.y, "p_991->g_105.y", print_hash_value);
    transparent_crc(p_991->g_105.z, "p_991->g_105.z", print_hash_value);
    transparent_crc(p_991->g_105.w, "p_991->g_105.w", print_hash_value);
    transparent_crc(p_991->g_113, "p_991->g_113", print_hash_value);
    transparent_crc(p_991->g_135, "p_991->g_135", print_hash_value);
    transparent_crc(p_991->g_145, "p_991->g_145", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_991->g_156[i], "p_991->g_156[i]", print_hash_value);

    }
    transparent_crc(p_991->g_165.x, "p_991->g_165.x", print_hash_value);
    transparent_crc(p_991->g_165.y, "p_991->g_165.y", print_hash_value);
    transparent_crc(p_991->g_165.z, "p_991->g_165.z", print_hash_value);
    transparent_crc(p_991->g_165.w, "p_991->g_165.w", print_hash_value);
    transparent_crc(p_991->g_167, "p_991->g_167", print_hash_value);
    transparent_crc(p_991->g_196, "p_991->g_196", print_hash_value);
    transparent_crc(p_991->g_200, "p_991->g_200", print_hash_value);
    transparent_crc(p_991->g_209.x, "p_991->g_209.x", print_hash_value);
    transparent_crc(p_991->g_209.y, "p_991->g_209.y", print_hash_value);
    transparent_crc(p_991->g_221.s0, "p_991->g_221.s0", print_hash_value);
    transparent_crc(p_991->g_221.s1, "p_991->g_221.s1", print_hash_value);
    transparent_crc(p_991->g_221.s2, "p_991->g_221.s2", print_hash_value);
    transparent_crc(p_991->g_221.s3, "p_991->g_221.s3", print_hash_value);
    transparent_crc(p_991->g_221.s4, "p_991->g_221.s4", print_hash_value);
    transparent_crc(p_991->g_221.s5, "p_991->g_221.s5", print_hash_value);
    transparent_crc(p_991->g_221.s6, "p_991->g_221.s6", print_hash_value);
    transparent_crc(p_991->g_221.s7, "p_991->g_221.s7", print_hash_value);
    transparent_crc(p_991->g_221.s8, "p_991->g_221.s8", print_hash_value);
    transparent_crc(p_991->g_221.s9, "p_991->g_221.s9", print_hash_value);
    transparent_crc(p_991->g_221.sa, "p_991->g_221.sa", print_hash_value);
    transparent_crc(p_991->g_221.sb, "p_991->g_221.sb", print_hash_value);
    transparent_crc(p_991->g_221.sc, "p_991->g_221.sc", print_hash_value);
    transparent_crc(p_991->g_221.sd, "p_991->g_221.sd", print_hash_value);
    transparent_crc(p_991->g_221.se, "p_991->g_221.se", print_hash_value);
    transparent_crc(p_991->g_221.sf, "p_991->g_221.sf", print_hash_value);
    transparent_crc(p_991->g_241.s0, "p_991->g_241.s0", print_hash_value);
    transparent_crc(p_991->g_241.s1, "p_991->g_241.s1", print_hash_value);
    transparent_crc(p_991->g_241.s2, "p_991->g_241.s2", print_hash_value);
    transparent_crc(p_991->g_241.s3, "p_991->g_241.s3", print_hash_value);
    transparent_crc(p_991->g_241.s4, "p_991->g_241.s4", print_hash_value);
    transparent_crc(p_991->g_241.s5, "p_991->g_241.s5", print_hash_value);
    transparent_crc(p_991->g_241.s6, "p_991->g_241.s6", print_hash_value);
    transparent_crc(p_991->g_241.s7, "p_991->g_241.s7", print_hash_value);
    transparent_crc(p_991->g_241.s8, "p_991->g_241.s8", print_hash_value);
    transparent_crc(p_991->g_241.s9, "p_991->g_241.s9", print_hash_value);
    transparent_crc(p_991->g_241.sa, "p_991->g_241.sa", print_hash_value);
    transparent_crc(p_991->g_241.sb, "p_991->g_241.sb", print_hash_value);
    transparent_crc(p_991->g_241.sc, "p_991->g_241.sc", print_hash_value);
    transparent_crc(p_991->g_241.sd, "p_991->g_241.sd", print_hash_value);
    transparent_crc(p_991->g_241.se, "p_991->g_241.se", print_hash_value);
    transparent_crc(p_991->g_241.sf, "p_991->g_241.sf", print_hash_value);
    transparent_crc(p_991->g_255, "p_991->g_255", print_hash_value);
    transparent_crc(p_991->g_290.x, "p_991->g_290.x", print_hash_value);
    transparent_crc(p_991->g_290.y, "p_991->g_290.y", print_hash_value);
    transparent_crc(p_991->g_300.s0, "p_991->g_300.s0", print_hash_value);
    transparent_crc(p_991->g_300.s1, "p_991->g_300.s1", print_hash_value);
    transparent_crc(p_991->g_300.s2, "p_991->g_300.s2", print_hash_value);
    transparent_crc(p_991->g_300.s3, "p_991->g_300.s3", print_hash_value);
    transparent_crc(p_991->g_300.s4, "p_991->g_300.s4", print_hash_value);
    transparent_crc(p_991->g_300.s5, "p_991->g_300.s5", print_hash_value);
    transparent_crc(p_991->g_300.s6, "p_991->g_300.s6", print_hash_value);
    transparent_crc(p_991->g_300.s7, "p_991->g_300.s7", print_hash_value);
    transparent_crc(p_991->g_300.s8, "p_991->g_300.s8", print_hash_value);
    transparent_crc(p_991->g_300.s9, "p_991->g_300.s9", print_hash_value);
    transparent_crc(p_991->g_300.sa, "p_991->g_300.sa", print_hash_value);
    transparent_crc(p_991->g_300.sb, "p_991->g_300.sb", print_hash_value);
    transparent_crc(p_991->g_300.sc, "p_991->g_300.sc", print_hash_value);
    transparent_crc(p_991->g_300.sd, "p_991->g_300.sd", print_hash_value);
    transparent_crc(p_991->g_300.se, "p_991->g_300.se", print_hash_value);
    transparent_crc(p_991->g_300.sf, "p_991->g_300.sf", print_hash_value);
    transparent_crc(p_991->g_305, "p_991->g_305", print_hash_value);
    transparent_crc(p_991->g_350, "p_991->g_350", print_hash_value);
    transparent_crc(p_991->g_379.x, "p_991->g_379.x", print_hash_value);
    transparent_crc(p_991->g_379.y, "p_991->g_379.y", print_hash_value);
    transparent_crc(p_991->g_422.x, "p_991->g_422.x", print_hash_value);
    transparent_crc(p_991->g_422.y, "p_991->g_422.y", print_hash_value);
    transparent_crc(p_991->g_433.x, "p_991->g_433.x", print_hash_value);
    transparent_crc(p_991->g_433.y, "p_991->g_433.y", print_hash_value);
    transparent_crc(p_991->g_433.z, "p_991->g_433.z", print_hash_value);
    transparent_crc(p_991->g_433.w, "p_991->g_433.w", print_hash_value);
    transparent_crc(p_991->g_434.x, "p_991->g_434.x", print_hash_value);
    transparent_crc(p_991->g_434.y, "p_991->g_434.y", print_hash_value);
    transparent_crc(p_991->g_434.z, "p_991->g_434.z", print_hash_value);
    transparent_crc(p_991->g_434.w, "p_991->g_434.w", print_hash_value);
    transparent_crc(p_991->g_441.s0, "p_991->g_441.s0", print_hash_value);
    transparent_crc(p_991->g_441.s1, "p_991->g_441.s1", print_hash_value);
    transparent_crc(p_991->g_441.s2, "p_991->g_441.s2", print_hash_value);
    transparent_crc(p_991->g_441.s3, "p_991->g_441.s3", print_hash_value);
    transparent_crc(p_991->g_441.s4, "p_991->g_441.s4", print_hash_value);
    transparent_crc(p_991->g_441.s5, "p_991->g_441.s5", print_hash_value);
    transparent_crc(p_991->g_441.s6, "p_991->g_441.s6", print_hash_value);
    transparent_crc(p_991->g_441.s7, "p_991->g_441.s7", print_hash_value);
    transparent_crc(p_991->g_441.s8, "p_991->g_441.s8", print_hash_value);
    transparent_crc(p_991->g_441.s9, "p_991->g_441.s9", print_hash_value);
    transparent_crc(p_991->g_441.sa, "p_991->g_441.sa", print_hash_value);
    transparent_crc(p_991->g_441.sb, "p_991->g_441.sb", print_hash_value);
    transparent_crc(p_991->g_441.sc, "p_991->g_441.sc", print_hash_value);
    transparent_crc(p_991->g_441.sd, "p_991->g_441.sd", print_hash_value);
    transparent_crc(p_991->g_441.se, "p_991->g_441.se", print_hash_value);
    transparent_crc(p_991->g_441.sf, "p_991->g_441.sf", print_hash_value);
    transparent_crc(p_991->g_446.x, "p_991->g_446.x", print_hash_value);
    transparent_crc(p_991->g_446.y, "p_991->g_446.y", print_hash_value);
    transparent_crc(p_991->g_446.z, "p_991->g_446.z", print_hash_value);
    transparent_crc(p_991->g_446.w, "p_991->g_446.w", print_hash_value);
    transparent_crc(p_991->g_452, "p_991->g_452", print_hash_value);
    transparent_crc(p_991->g_458.s0, "p_991->g_458.s0", print_hash_value);
    transparent_crc(p_991->g_458.s1, "p_991->g_458.s1", print_hash_value);
    transparent_crc(p_991->g_458.s2, "p_991->g_458.s2", print_hash_value);
    transparent_crc(p_991->g_458.s3, "p_991->g_458.s3", print_hash_value);
    transparent_crc(p_991->g_458.s4, "p_991->g_458.s4", print_hash_value);
    transparent_crc(p_991->g_458.s5, "p_991->g_458.s5", print_hash_value);
    transparent_crc(p_991->g_458.s6, "p_991->g_458.s6", print_hash_value);
    transparent_crc(p_991->g_458.s7, "p_991->g_458.s7", print_hash_value);
    transparent_crc(p_991->g_458.s8, "p_991->g_458.s8", print_hash_value);
    transparent_crc(p_991->g_458.s9, "p_991->g_458.s9", print_hash_value);
    transparent_crc(p_991->g_458.sa, "p_991->g_458.sa", print_hash_value);
    transparent_crc(p_991->g_458.sb, "p_991->g_458.sb", print_hash_value);
    transparent_crc(p_991->g_458.sc, "p_991->g_458.sc", print_hash_value);
    transparent_crc(p_991->g_458.sd, "p_991->g_458.sd", print_hash_value);
    transparent_crc(p_991->g_458.se, "p_991->g_458.se", print_hash_value);
    transparent_crc(p_991->g_458.sf, "p_991->g_458.sf", print_hash_value);
    transparent_crc(p_991->g_461.x, "p_991->g_461.x", print_hash_value);
    transparent_crc(p_991->g_461.y, "p_991->g_461.y", print_hash_value);
    transparent_crc(p_991->g_461.z, "p_991->g_461.z", print_hash_value);
    transparent_crc(p_991->g_461.w, "p_991->g_461.w", print_hash_value);
    transparent_crc(p_991->g_462.x, "p_991->g_462.x", print_hash_value);
    transparent_crc(p_991->g_462.y, "p_991->g_462.y", print_hash_value);
    transparent_crc(p_991->g_462.z, "p_991->g_462.z", print_hash_value);
    transparent_crc(p_991->g_462.w, "p_991->g_462.w", print_hash_value);
    transparent_crc(p_991->g_464.x, "p_991->g_464.x", print_hash_value);
    transparent_crc(p_991->g_464.y, "p_991->g_464.y", print_hash_value);
    transparent_crc(p_991->g_470.x, "p_991->g_470.x", print_hash_value);
    transparent_crc(p_991->g_470.y, "p_991->g_470.y", print_hash_value);
    transparent_crc(p_991->g_488.x, "p_991->g_488.x", print_hash_value);
    transparent_crc(p_991->g_488.y, "p_991->g_488.y", print_hash_value);
    transparent_crc(p_991->g_488.z, "p_991->g_488.z", print_hash_value);
    transparent_crc(p_991->g_488.w, "p_991->g_488.w", print_hash_value);
    transparent_crc(p_991->g_502.s0, "p_991->g_502.s0", print_hash_value);
    transparent_crc(p_991->g_502.s1, "p_991->g_502.s1", print_hash_value);
    transparent_crc(p_991->g_502.s2, "p_991->g_502.s2", print_hash_value);
    transparent_crc(p_991->g_502.s3, "p_991->g_502.s3", print_hash_value);
    transparent_crc(p_991->g_502.s4, "p_991->g_502.s4", print_hash_value);
    transparent_crc(p_991->g_502.s5, "p_991->g_502.s5", print_hash_value);
    transparent_crc(p_991->g_502.s6, "p_991->g_502.s6", print_hash_value);
    transparent_crc(p_991->g_502.s7, "p_991->g_502.s7", print_hash_value);
    transparent_crc(p_991->g_503.x, "p_991->g_503.x", print_hash_value);
    transparent_crc(p_991->g_503.y, "p_991->g_503.y", print_hash_value);
    transparent_crc(p_991->g_508.s0, "p_991->g_508.s0", print_hash_value);
    transparent_crc(p_991->g_508.s1, "p_991->g_508.s1", print_hash_value);
    transparent_crc(p_991->g_508.s2, "p_991->g_508.s2", print_hash_value);
    transparent_crc(p_991->g_508.s3, "p_991->g_508.s3", print_hash_value);
    transparent_crc(p_991->g_508.s4, "p_991->g_508.s4", print_hash_value);
    transparent_crc(p_991->g_508.s5, "p_991->g_508.s5", print_hash_value);
    transparent_crc(p_991->g_508.s6, "p_991->g_508.s6", print_hash_value);
    transparent_crc(p_991->g_508.s7, "p_991->g_508.s7", print_hash_value);
    transparent_crc(p_991->g_508.s8, "p_991->g_508.s8", print_hash_value);
    transparent_crc(p_991->g_508.s9, "p_991->g_508.s9", print_hash_value);
    transparent_crc(p_991->g_508.sa, "p_991->g_508.sa", print_hash_value);
    transparent_crc(p_991->g_508.sb, "p_991->g_508.sb", print_hash_value);
    transparent_crc(p_991->g_508.sc, "p_991->g_508.sc", print_hash_value);
    transparent_crc(p_991->g_508.sd, "p_991->g_508.sd", print_hash_value);
    transparent_crc(p_991->g_508.se, "p_991->g_508.se", print_hash_value);
    transparent_crc(p_991->g_508.sf, "p_991->g_508.sf", print_hash_value);
    transparent_crc(p_991->g_512.s0, "p_991->g_512.s0", print_hash_value);
    transparent_crc(p_991->g_512.s1, "p_991->g_512.s1", print_hash_value);
    transparent_crc(p_991->g_512.s2, "p_991->g_512.s2", print_hash_value);
    transparent_crc(p_991->g_512.s3, "p_991->g_512.s3", print_hash_value);
    transparent_crc(p_991->g_512.s4, "p_991->g_512.s4", print_hash_value);
    transparent_crc(p_991->g_512.s5, "p_991->g_512.s5", print_hash_value);
    transparent_crc(p_991->g_512.s6, "p_991->g_512.s6", print_hash_value);
    transparent_crc(p_991->g_512.s7, "p_991->g_512.s7", print_hash_value);
    transparent_crc(p_991->g_514.s0, "p_991->g_514.s0", print_hash_value);
    transparent_crc(p_991->g_514.s1, "p_991->g_514.s1", print_hash_value);
    transparent_crc(p_991->g_514.s2, "p_991->g_514.s2", print_hash_value);
    transparent_crc(p_991->g_514.s3, "p_991->g_514.s3", print_hash_value);
    transparent_crc(p_991->g_514.s4, "p_991->g_514.s4", print_hash_value);
    transparent_crc(p_991->g_514.s5, "p_991->g_514.s5", print_hash_value);
    transparent_crc(p_991->g_514.s6, "p_991->g_514.s6", print_hash_value);
    transparent_crc(p_991->g_514.s7, "p_991->g_514.s7", print_hash_value);
    transparent_crc(p_991->g_517.s0, "p_991->g_517.s0", print_hash_value);
    transparent_crc(p_991->g_517.s1, "p_991->g_517.s1", print_hash_value);
    transparent_crc(p_991->g_517.s2, "p_991->g_517.s2", print_hash_value);
    transparent_crc(p_991->g_517.s3, "p_991->g_517.s3", print_hash_value);
    transparent_crc(p_991->g_517.s4, "p_991->g_517.s4", print_hash_value);
    transparent_crc(p_991->g_517.s5, "p_991->g_517.s5", print_hash_value);
    transparent_crc(p_991->g_517.s6, "p_991->g_517.s6", print_hash_value);
    transparent_crc(p_991->g_517.s7, "p_991->g_517.s7", print_hash_value);
    transparent_crc(p_991->g_517.s8, "p_991->g_517.s8", print_hash_value);
    transparent_crc(p_991->g_517.s9, "p_991->g_517.s9", print_hash_value);
    transparent_crc(p_991->g_517.sa, "p_991->g_517.sa", print_hash_value);
    transparent_crc(p_991->g_517.sb, "p_991->g_517.sb", print_hash_value);
    transparent_crc(p_991->g_517.sc, "p_991->g_517.sc", print_hash_value);
    transparent_crc(p_991->g_517.sd, "p_991->g_517.sd", print_hash_value);
    transparent_crc(p_991->g_517.se, "p_991->g_517.se", print_hash_value);
    transparent_crc(p_991->g_517.sf, "p_991->g_517.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_991->g_525[i][j], "p_991->g_525[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_991->g_562.x, "p_991->g_562.x", print_hash_value);
    transparent_crc(p_991->g_562.y, "p_991->g_562.y", print_hash_value);
    transparent_crc(p_991->g_562.z, "p_991->g_562.z", print_hash_value);
    transparent_crc(p_991->g_562.w, "p_991->g_562.w", print_hash_value);
    transparent_crc(p_991->g_589.s0, "p_991->g_589.s0", print_hash_value);
    transparent_crc(p_991->g_589.s1, "p_991->g_589.s1", print_hash_value);
    transparent_crc(p_991->g_589.s2, "p_991->g_589.s2", print_hash_value);
    transparent_crc(p_991->g_589.s3, "p_991->g_589.s3", print_hash_value);
    transparent_crc(p_991->g_589.s4, "p_991->g_589.s4", print_hash_value);
    transparent_crc(p_991->g_589.s5, "p_991->g_589.s5", print_hash_value);
    transparent_crc(p_991->g_589.s6, "p_991->g_589.s6", print_hash_value);
    transparent_crc(p_991->g_589.s7, "p_991->g_589.s7", print_hash_value);
    transparent_crc(p_991->g_591.s0, "p_991->g_591.s0", print_hash_value);
    transparent_crc(p_991->g_591.s1, "p_991->g_591.s1", print_hash_value);
    transparent_crc(p_991->g_591.s2, "p_991->g_591.s2", print_hash_value);
    transparent_crc(p_991->g_591.s3, "p_991->g_591.s3", print_hash_value);
    transparent_crc(p_991->g_591.s4, "p_991->g_591.s4", print_hash_value);
    transparent_crc(p_991->g_591.s5, "p_991->g_591.s5", print_hash_value);
    transparent_crc(p_991->g_591.s6, "p_991->g_591.s6", print_hash_value);
    transparent_crc(p_991->g_591.s7, "p_991->g_591.s7", print_hash_value);
    transparent_crc(p_991->g_591.s8, "p_991->g_591.s8", print_hash_value);
    transparent_crc(p_991->g_591.s9, "p_991->g_591.s9", print_hash_value);
    transparent_crc(p_991->g_591.sa, "p_991->g_591.sa", print_hash_value);
    transparent_crc(p_991->g_591.sb, "p_991->g_591.sb", print_hash_value);
    transparent_crc(p_991->g_591.sc, "p_991->g_591.sc", print_hash_value);
    transparent_crc(p_991->g_591.sd, "p_991->g_591.sd", print_hash_value);
    transparent_crc(p_991->g_591.se, "p_991->g_591.se", print_hash_value);
    transparent_crc(p_991->g_591.sf, "p_991->g_591.sf", print_hash_value);
    transparent_crc(p_991->g_612.s0, "p_991->g_612.s0", print_hash_value);
    transparent_crc(p_991->g_612.s1, "p_991->g_612.s1", print_hash_value);
    transparent_crc(p_991->g_612.s2, "p_991->g_612.s2", print_hash_value);
    transparent_crc(p_991->g_612.s3, "p_991->g_612.s3", print_hash_value);
    transparent_crc(p_991->g_612.s4, "p_991->g_612.s4", print_hash_value);
    transparent_crc(p_991->g_612.s5, "p_991->g_612.s5", print_hash_value);
    transparent_crc(p_991->g_612.s6, "p_991->g_612.s6", print_hash_value);
    transparent_crc(p_991->g_612.s7, "p_991->g_612.s7", print_hash_value);
    transparent_crc(p_991->g_612.s8, "p_991->g_612.s8", print_hash_value);
    transparent_crc(p_991->g_612.s9, "p_991->g_612.s9", print_hash_value);
    transparent_crc(p_991->g_612.sa, "p_991->g_612.sa", print_hash_value);
    transparent_crc(p_991->g_612.sb, "p_991->g_612.sb", print_hash_value);
    transparent_crc(p_991->g_612.sc, "p_991->g_612.sc", print_hash_value);
    transparent_crc(p_991->g_612.sd, "p_991->g_612.sd", print_hash_value);
    transparent_crc(p_991->g_612.se, "p_991->g_612.se", print_hash_value);
    transparent_crc(p_991->g_612.sf, "p_991->g_612.sf", print_hash_value);
    transparent_crc(p_991->g_616, "p_991->g_616", print_hash_value);
    transparent_crc(p_991->g_633.s0, "p_991->g_633.s0", print_hash_value);
    transparent_crc(p_991->g_633.s1, "p_991->g_633.s1", print_hash_value);
    transparent_crc(p_991->g_633.s2, "p_991->g_633.s2", print_hash_value);
    transparent_crc(p_991->g_633.s3, "p_991->g_633.s3", print_hash_value);
    transparent_crc(p_991->g_633.s4, "p_991->g_633.s4", print_hash_value);
    transparent_crc(p_991->g_633.s5, "p_991->g_633.s5", print_hash_value);
    transparent_crc(p_991->g_633.s6, "p_991->g_633.s6", print_hash_value);
    transparent_crc(p_991->g_633.s7, "p_991->g_633.s7", print_hash_value);
    transparent_crc(p_991->g_633.s8, "p_991->g_633.s8", print_hash_value);
    transparent_crc(p_991->g_633.s9, "p_991->g_633.s9", print_hash_value);
    transparent_crc(p_991->g_633.sa, "p_991->g_633.sa", print_hash_value);
    transparent_crc(p_991->g_633.sb, "p_991->g_633.sb", print_hash_value);
    transparent_crc(p_991->g_633.sc, "p_991->g_633.sc", print_hash_value);
    transparent_crc(p_991->g_633.sd, "p_991->g_633.sd", print_hash_value);
    transparent_crc(p_991->g_633.se, "p_991->g_633.se", print_hash_value);
    transparent_crc(p_991->g_633.sf, "p_991->g_633.sf", print_hash_value);
    transparent_crc(p_991->g_664, "p_991->g_664", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_991->g_665[i][j][k], "p_991->g_665[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_991->g_666, "p_991->g_666", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_991->g_667[i][j], "p_991->g_667[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_991->g_668, "p_991->g_668", print_hash_value);
    transparent_crc(p_991->g_669, "p_991->g_669", print_hash_value);
    transparent_crc(p_991->g_670, "p_991->g_670", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_991->g_671[i][j], "p_991->g_671[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_991->g_672[i][j][k], "p_991->g_672[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_991->g_673, "p_991->g_673", print_hash_value);
    transparent_crc(p_991->g_728.x, "p_991->g_728.x", print_hash_value);
    transparent_crc(p_991->g_728.y, "p_991->g_728.y", print_hash_value);
    transparent_crc(p_991->g_823.s0, "p_991->g_823.s0", print_hash_value);
    transparent_crc(p_991->g_823.s1, "p_991->g_823.s1", print_hash_value);
    transparent_crc(p_991->g_823.s2, "p_991->g_823.s2", print_hash_value);
    transparent_crc(p_991->g_823.s3, "p_991->g_823.s3", print_hash_value);
    transparent_crc(p_991->g_823.s4, "p_991->g_823.s4", print_hash_value);
    transparent_crc(p_991->g_823.s5, "p_991->g_823.s5", print_hash_value);
    transparent_crc(p_991->g_823.s6, "p_991->g_823.s6", print_hash_value);
    transparent_crc(p_991->g_823.s7, "p_991->g_823.s7", print_hash_value);
    transparent_crc(p_991->g_823.s8, "p_991->g_823.s8", print_hash_value);
    transparent_crc(p_991->g_823.s9, "p_991->g_823.s9", print_hash_value);
    transparent_crc(p_991->g_823.sa, "p_991->g_823.sa", print_hash_value);
    transparent_crc(p_991->g_823.sb, "p_991->g_823.sb", print_hash_value);
    transparent_crc(p_991->g_823.sc, "p_991->g_823.sc", print_hash_value);
    transparent_crc(p_991->g_823.sd, "p_991->g_823.sd", print_hash_value);
    transparent_crc(p_991->g_823.se, "p_991->g_823.se", print_hash_value);
    transparent_crc(p_991->g_823.sf, "p_991->g_823.sf", print_hash_value);
    transparent_crc(p_991->g_863, "p_991->g_863", print_hash_value);
    transparent_crc(p_991->g_865.x, "p_991->g_865.x", print_hash_value);
    transparent_crc(p_991->g_865.y, "p_991->g_865.y", print_hash_value);
    transparent_crc(p_991->g_865.z, "p_991->g_865.z", print_hash_value);
    transparent_crc(p_991->g_865.w, "p_991->g_865.w", print_hash_value);
    transparent_crc(p_991->g_882.x, "p_991->g_882.x", print_hash_value);
    transparent_crc(p_991->g_882.y, "p_991->g_882.y", print_hash_value);
    transparent_crc(p_991->g_884.s0, "p_991->g_884.s0", print_hash_value);
    transparent_crc(p_991->g_884.s1, "p_991->g_884.s1", print_hash_value);
    transparent_crc(p_991->g_884.s2, "p_991->g_884.s2", print_hash_value);
    transparent_crc(p_991->g_884.s3, "p_991->g_884.s3", print_hash_value);
    transparent_crc(p_991->g_884.s4, "p_991->g_884.s4", print_hash_value);
    transparent_crc(p_991->g_884.s5, "p_991->g_884.s5", print_hash_value);
    transparent_crc(p_991->g_884.s6, "p_991->g_884.s6", print_hash_value);
    transparent_crc(p_991->g_884.s7, "p_991->g_884.s7", print_hash_value);
    transparent_crc(p_991->g_884.s8, "p_991->g_884.s8", print_hash_value);
    transparent_crc(p_991->g_884.s9, "p_991->g_884.s9", print_hash_value);
    transparent_crc(p_991->g_884.sa, "p_991->g_884.sa", print_hash_value);
    transparent_crc(p_991->g_884.sb, "p_991->g_884.sb", print_hash_value);
    transparent_crc(p_991->g_884.sc, "p_991->g_884.sc", print_hash_value);
    transparent_crc(p_991->g_884.sd, "p_991->g_884.sd", print_hash_value);
    transparent_crc(p_991->g_884.se, "p_991->g_884.se", print_hash_value);
    transparent_crc(p_991->g_884.sf, "p_991->g_884.sf", print_hash_value);
    transparent_crc(p_991->g_888.x, "p_991->g_888.x", print_hash_value);
    transparent_crc(p_991->g_888.y, "p_991->g_888.y", print_hash_value);
    transparent_crc(p_991->g_888.z, "p_991->g_888.z", print_hash_value);
    transparent_crc(p_991->g_888.w, "p_991->g_888.w", print_hash_value);
    transparent_crc(p_991->g_896.x, "p_991->g_896.x", print_hash_value);
    transparent_crc(p_991->g_896.y, "p_991->g_896.y", print_hash_value);
    transparent_crc(p_991->g_896.z, "p_991->g_896.z", print_hash_value);
    transparent_crc(p_991->g_896.w, "p_991->g_896.w", print_hash_value);
    transparent_crc(p_991->g_897.x, "p_991->g_897.x", print_hash_value);
    transparent_crc(p_991->g_897.y, "p_991->g_897.y", print_hash_value);
    transparent_crc(p_991->g_898.s0, "p_991->g_898.s0", print_hash_value);
    transparent_crc(p_991->g_898.s1, "p_991->g_898.s1", print_hash_value);
    transparent_crc(p_991->g_898.s2, "p_991->g_898.s2", print_hash_value);
    transparent_crc(p_991->g_898.s3, "p_991->g_898.s3", print_hash_value);
    transparent_crc(p_991->g_898.s4, "p_991->g_898.s4", print_hash_value);
    transparent_crc(p_991->g_898.s5, "p_991->g_898.s5", print_hash_value);
    transparent_crc(p_991->g_898.s6, "p_991->g_898.s6", print_hash_value);
    transparent_crc(p_991->g_898.s7, "p_991->g_898.s7", print_hash_value);
    transparent_crc(p_991->g_911.x, "p_991->g_911.x", print_hash_value);
    transparent_crc(p_991->g_911.y, "p_991->g_911.y", print_hash_value);
    transparent_crc(p_991->g_933.x, "p_991->g_933.x", print_hash_value);
    transparent_crc(p_991->g_933.y, "p_991->g_933.y", print_hash_value);
    transparent_crc(p_991->g_940, "p_991->g_940", print_hash_value);
    transparent_crc(p_991->g_965.s0, "p_991->g_965.s0", print_hash_value);
    transparent_crc(p_991->g_965.s1, "p_991->g_965.s1", print_hash_value);
    transparent_crc(p_991->g_965.s2, "p_991->g_965.s2", print_hash_value);
    transparent_crc(p_991->g_965.s3, "p_991->g_965.s3", print_hash_value);
    transparent_crc(p_991->g_965.s4, "p_991->g_965.s4", print_hash_value);
    transparent_crc(p_991->g_965.s5, "p_991->g_965.s5", print_hash_value);
    transparent_crc(p_991->g_965.s6, "p_991->g_965.s6", print_hash_value);
    transparent_crc(p_991->g_965.s7, "p_991->g_965.s7", print_hash_value);
    transparent_crc(p_991->g_965.s8, "p_991->g_965.s8", print_hash_value);
    transparent_crc(p_991->g_965.s9, "p_991->g_965.s9", print_hash_value);
    transparent_crc(p_991->g_965.sa, "p_991->g_965.sa", print_hash_value);
    transparent_crc(p_991->g_965.sb, "p_991->g_965.sb", print_hash_value);
    transparent_crc(p_991->g_965.sc, "p_991->g_965.sc", print_hash_value);
    transparent_crc(p_991->g_965.sd, "p_991->g_965.sd", print_hash_value);
    transparent_crc(p_991->g_965.se, "p_991->g_965.se", print_hash_value);
    transparent_crc(p_991->g_965.sf, "p_991->g_965.sf", print_hash_value);
    transparent_crc(p_991->g_987, "p_991->g_987", print_hash_value);
    transparent_crc(p_991->v_collective, "p_991->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 78; i++)
            transparent_crc(p_991->g_special_values[i + 78 * get_linear_group_id()], "p_991->g_special_values[i + 78 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_991->l_comm_values[get_linear_local_id()], "p_991->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_991->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()], "p_991->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
