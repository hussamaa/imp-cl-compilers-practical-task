// --atomics 77 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,1,95 -l 3,1,5
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

__constant uint32_t permutations[10][15] = {
{2,13,3,1,11,10,14,8,0,9,7,4,12,5,6}, // permutation 0
{8,14,7,4,6,2,5,9,12,3,1,13,10,11,0}, // permutation 1
{12,0,2,5,10,6,8,9,14,13,11,4,3,1,7}, // permutation 2
{14,11,12,1,9,4,0,6,8,3,10,13,5,7,2}, // permutation 3
{9,14,12,0,1,13,6,7,8,5,2,3,11,10,4}, // permutation 4
{6,5,14,8,12,0,4,11,13,7,1,2,3,10,9}, // permutation 5
{4,8,6,9,1,10,7,14,2,0,11,13,12,5,3}, // permutation 6
{10,6,3,7,4,12,13,9,1,2,14,8,11,0,5}, // permutation 7
{7,13,3,1,11,2,8,9,12,10,5,4,0,14,6}, // permutation 8
{9,3,7,4,5,0,13,8,12,10,2,14,11,6,1} // permutation 9
};

// Seed: 2952628992

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int16_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int64_t  f3;
   volatile int32_t  f4;
};

struct S1 {
    int32_t g_7;
    int8_t g_22;
    int8_t **g_36;
    int32_t g_267;
    volatile int16_t g_268;
    int64_t g_269;
    volatile uint64_t g_271;
    volatile uint64_t g_279[6];
    VECTOR(uint64_t, 16) g_282;
    uint16_t g_293;
    uint32_t g_299;
    int32_t g_314;
    uint8_t g_315;
    int64_t g_322[5];
    uint32_t g_323;
    int16_t g_351;
    uint16_t g_357[2][2];
    int32_t g_358;
    int8_t g_359;
    VECTOR(int8_t, 16) g_372;
    VECTOR(uint16_t, 2) g_381;
    int32_t g_418;
    uint8_t g_419;
    int32_t *g_425;
    int32_t ** volatile g_424;
    uint64_t g_488;
    uint16_t g_495;
    uint64_t *g_510[2];
    volatile VECTOR(int64_t, 2) g_515;
    uint32_t *g_520[9][9];
    uint32_t **g_519;
    VECTOR(int16_t, 16) g_528;
    int32_t ** volatile g_532[7];
    int32_t g_604;
    union U0 g_622;
    uint8_t *g_628[6];
    uint8_t **g_627;
    union U0 *g_640;
    volatile VECTOR(uint32_t, 4) g_673;
    VECTOR(uint32_t, 16) g_676;
    VECTOR(uint32_t, 8) g_678;
    volatile VECTOR(uint32_t, 16) g_679;
    VECTOR(int64_t, 8) g_680;
    volatile union U0 g_691[8][1][4];
    uint32_t g_726[1][6][9];
    uint32_t g_731;
    volatile union U0 *g_777;
    volatile union U0 ** volatile g_776;
    volatile VECTOR(int16_t, 2) g_778;
    volatile VECTOR(int32_t, 4) g_856;
    VECTOR(int8_t, 2) g_878;
    volatile VECTOR(int8_t, 8) g_879;
    VECTOR(uint8_t, 4) g_888;
    volatile VECTOR(int8_t, 4) g_902;
    VECTOR(int8_t, 4) g_903;
    VECTOR(int64_t, 16) g_912;
    union U0 g_923[5];
    uint64_t g_933;
    VECTOR(int32_t, 8) g_948;
    uint16_t g_979;
    VECTOR(uint16_t, 16) g_986;
    int32_t ** volatile g_1015;
    volatile VECTOR(uint8_t, 16) g_1018;
    VECTOR(uint8_t, 2) g_1019;
    uint32_t g_1043;
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
uint32_t  func_1(struct S1 * p_1046);
int32_t * func_2(int32_t * p_3, uint8_t  p_4, uint32_t  p_5, struct S1 * p_1046);
int8_t  func_10(int32_t  p_11, int64_t  p_12, struct S1 * p_1046);
int8_t ** func_24(int8_t * p_25, int32_t  p_26, int16_t  p_27, int32_t  p_28, struct S1 * p_1046);
uint64_t  func_30(int8_t ** p_31, int64_t  p_32, int64_t  p_33, int32_t * p_34, int64_t  p_35, struct S1 * p_1046);
uint64_t  func_39(int32_t  p_40, int64_t  p_41, int8_t ** p_42, struct S1 * p_1046);
uint32_t  func_283(uint64_t  p_284, int8_t  p_285, struct S1 * p_1046);
int16_t  func_286(uint32_t  p_287, struct S1 * p_1046);
int32_t  func_288(uint8_t  p_289, struct S1 * p_1046);
uint32_t  func_303(int8_t * p_304, int64_t  p_305, int32_t  p_306, int8_t  p_307, uint16_t  p_308, struct S1 * p_1046);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1046->g_comm_values p_1046->g_7 p_1046->l_comm_values p_1046->g_22 p_1046->g_36 p_1046->g_271 p_1046->g_279 p_1046->g_282 p_1046->g_293 p_1046->g_299 p_1046->g_269 p_1046->g_315 p_1046->g_323 p_1046->g_351 p_1046->g_314 p_1046->g_322 p_1046->g_359 p_1046->g_372 p_1046->g_381 p_1046->g_357 p_1046->g_419 p_1046->g_424 p_1046->g_267 p_1046->g_425 p_1046->g_488 p_1046->g_495 p_1046->g_418 p_1046->g_673 p_1046->g_676 p_1046->g_678 p_1046->g_679 p_1046->g_680 p_1046->g_691 p_1046->g_627 p_1046->g_628 p_1046->g_622.f3 p_1046->g_731 p_1046->g_726 p_1046->g_776 p_1046->g_358 p_1046->g_528 p_1046->g_902 p_1046->g_903 p_1046->g_912 p_1046->g_923 p_1046->g_933 p_1046->g_777 p_1046->g_948 p_1046->g_979 p_1046->g_986 p_1046->g_888 p_1046->g_1015 p_1046->g_1018 p_1046->g_1019 p_1046->g_604
 * writes: p_1046->g_22 p_1046->g_271 p_1046->g_293 p_1046->g_299 p_1046->g_7 p_1046->g_315 p_1046->g_269 p_1046->g_323 p_1046->g_351 p_1046->g_357 p_1046->g_358 p_1046->g_359 p_1046->g_314 p_1046->g_419 p_1046->g_425 p_1046->g_267 p_1046->g_282 p_1046->g_495 p_1046->g_418 p_1046->g_322 p_1046->g_36 p_1046->g_510 p_1046->g_622.f3 p_1046->g_731 p_1046->g_777 p_1046->g_381 p_1046->g_528 p_1046->g_933 p_1046->g_903 p_1046->g_979 p_1046->g_640 p_1046->g_372 p_1046->g_1043
 */
uint32_t  func_1(struct S1 * p_1046)
{ /* block id: 4 */
    int32_t *l_6 = &p_1046->g_7;
    int32_t *l_19 = &p_1046->g_7;
    int8_t *l_20 = (void*)0;
    int8_t *l_21[1][4][9] = {{{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22}}};
    int16_t l_23 = 0x3EBFL;
    int64_t *l_1030 = (void*)0;
    int16_t l_1033 = 0x09B4L;
    uint64_t *l_1040 = &p_1046->g_933;
    int32_t *l_1041 = (void*)0;
    int32_t *l_1042[8][4] = {{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7},{(void*)0,&p_1046->g_7,(void*)0,&p_1046->g_7}};
    int32_t l_1044 = 0x0535ECB3L;
    uint32_t l_1045 = 0xE9EB8F51L;
    int i, j, k;
    (*p_1046->g_1015) = (p_1046->g_comm_values[p_1046->tid] , func_2(l_6, (safe_add_func_uint16_t_u_u(((func_10((((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((0x3C67EE39F3FAA32FL <= (safe_lshift_func_int16_t_s_s(((void*)0 != l_19), 3))), ((VECTOR(uint8_t, 4))(0x2DL, 0xF2L, 0xA1L, 0xDFL)).y)), (p_1046->g_22 = (*l_19)))) || ((p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))] < (0x64L && l_23)) && p_1046->g_7)) != p_1046->g_comm_values[p_1046->tid]), p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))], p_1046) != 255UL) , 65528UL), FAKE_DIVERGE(p_1046->group_0_offset, get_group_id(0), 10))), p_1046->g_676.s2, p_1046));
    (*l_19) = (0x50C7B14FL <= (~(safe_mul_func_uint8_t_u_u((+((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(p_1046->g_1018.sbfc15fce)).s6267566624755105, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(p_1046->g_1019.xy)).xxxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(0xD0L, 255UL, 255UL, 255UL)), ((VECTOR(uint8_t, 16))(255UL, ((**p_1046->g_627) = (safe_div_func_uint64_t_u_u((0x3EL >= (p_1046->g_372.s4 |= (*l_6))), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((((*l_6) < GROUP_DIVERGE(0, 1)) <= (safe_sub_func_uint64_t_u_u(0xBBD6C0B27F537A8AL, ((void*)0 != l_1030)))) >= (((((safe_div_func_int8_t_s_s((((l_1033 || (p_1046->g_1043 = ((safe_div_func_uint64_t_u_u(((*l_1040) = ((safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((*l_6), (-4L))) , (*l_19)), (*l_19))) , 0x00A3B7C2C901A616L)), (*l_19))) ^ 0UL))) <= l_1044) < p_1046->g_322[2]), 0x6CL)) ^ (*l_19)) <= p_1046->g_604) == l_1045) || p_1046->g_315)) == p_1046->g_673.x), p_1046->g_495)), 11)), 2)) , 0x4CC3713C71D7A3C6L)))), (*l_6), (*l_6), 0x5AL, ((VECTOR(uint8_t, 4))(0xF4L)), 0x73L, (*l_19), (**p_1046->g_627), ((VECTOR(uint8_t, 2))(255UL)), 247UL, 0x0CL)).sc91f))), ((VECTOR(uint8_t, 4))(0xC0L))))).odd)))).xxyy, ((VECTOR(uint8_t, 4))(1UL))))).even)).xxxyyxyy)).lo, ((VECTOR(uint8_t, 4))(0x05L))))).zzxzxywxwyyyyxxx, ((VECTOR(uint8_t, 16))(0xE5L))))).s6), (*l_6)))));
    return (*l_6);
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_679 p_1046->g_676 p_1046->g_627 p_1046->g_628 p_1046->g_315 p_1046->g_419 p_1046->g_425 p_1046->g_622.f3 p_1046->g_7 p_1046->g_528 p_1046->g_731 p_1046->g_726 p_1046->g_776 p_1046->g_314 p_1046->g_357 p_1046->g_293 p_1046->g_381 p_1046->g_comm_values p_1046->g_358 p_1046->g_22 p_1046->g_673 p_1046->l_comm_values p_1046->g_267 p_1046->g_424 p_1046->g_418 p_1046->g_902 p_1046->g_903 p_1046->g_912 p_1046->g_923 p_1046->g_299 p_1046->g_933 p_1046->g_777 p_1046->g_948 p_1046->g_359 p_1046->g_488 p_1046->g_495 p_1046->g_36 p_1046->g_979 p_1046->g_986 p_1046->g_279 p_1046->g_888
 * writes: p_1046->g_510 p_1046->g_314 p_1046->g_622.f3 p_1046->g_731 p_1046->g_351 p_1046->g_777 p_1046->g_293 p_1046->g_381 p_1046->g_528 p_1046->g_267 p_1046->g_322 p_1046->g_299 p_1046->g_933 p_1046->g_7 p_1046->g_425 p_1046->g_903 p_1046->g_269 p_1046->g_495 p_1046->g_418 p_1046->g_36 p_1046->g_419 p_1046->g_979 p_1046->g_640
 */
int32_t * func_2(int32_t * p_3, uint8_t  p_4, uint32_t  p_5, struct S1 * p_1046)
{ /* block id: 340 */
    uint64_t *l_709 = (void*)0;
    int32_t l_712 = 0x0D1E487BL;
    uint8_t l_748 = 0x83L;
    int8_t *l_824 = (void*)0;
    int8_t **l_823 = &l_824;
    int32_t l_841[3];
    uint32_t **l_843 = &p_1046->g_520[3][2];
    int32_t **l_850 = &p_1046->g_425;
    int32_t ***l_849 = &l_850;
    VECTOR(int8_t, 2) l_880 = (VECTOR(int8_t, 2))(0x08L, (-1L));
    union U0 **l_885[3];
    int32_t l_919 = (-2L);
    uint32_t *l_929 = &p_1046->g_731;
    uint64_t l_937 = 0UL;
    VECTOR(uint16_t, 16) l_971 = (VECTOR(uint16_t, 16))(0xA359L, (VECTOR(uint16_t, 4))(0xA359L, (VECTOR(uint16_t, 2))(0xA359L, 65532UL), 65532UL), 65532UL, 0xA359L, 65532UL, (VECTOR(uint16_t, 2))(0xA359L, 65532UL), (VECTOR(uint16_t, 2))(0xA359L, 65532UL), 0xA359L, 65532UL, 0xA359L, 65532UL);
    VECTOR(int64_t, 16) l_1006 = (VECTOR(int64_t, 16))(0x3E4FF2024FA5EDF6L, (VECTOR(int64_t, 4))(0x3E4FF2024FA5EDF6L, (VECTOR(int64_t, 2))(0x3E4FF2024FA5EDF6L, (-4L)), (-4L)), (-4L), 0x3E4FF2024FA5EDF6L, (-4L), (VECTOR(int64_t, 2))(0x3E4FF2024FA5EDF6L, (-4L)), (VECTOR(int64_t, 2))(0x3E4FF2024FA5EDF6L, (-4L)), 0x3E4FF2024FA5EDF6L, (-4L), 0x3E4FF2024FA5EDF6L, (-4L));
    int32_t *l_1014 = &l_841[2];
    int i;
    for (i = 0; i < 3; i++)
        l_841[i] = 0x6E33B661L;
    for (i = 0; i < 3; i++)
        l_885[i] = &p_1046->g_640;
    if ((atomic_inc(&p_1046->g_atomic_input[77 * get_linear_group_id() + 38]) == 9))
    { /* block id: 342 */
        uint8_t l_694 = 4UL;
        l_694 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6DE2EF1AL, 0x32F9A3ECL)).yxxx)).y;
        unsigned int result = 0;
        result += l_694;
        atomic_add(&p_1046->g_special_values[77 * get_linear_group_id() + 38], result);
    }
    else
    { /* block id: 344 */
        (1 + 1);
    }
    if (((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(255UL, (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_4, (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(0L, 0x83AD6ED5CB378DD6L)), 15)), ((((p_1046->g_510[1] = l_709) != ((((VECTOR(int8_t, 2))(0x6BL, (-4L))).even ^ p_4) , l_709)) == ((safe_mod_func_int8_t_s_s((p_1046->g_679.sc && p_5), l_712)) , p_1046->g_676.s2)) > p_4))))), FAKE_DIVERGE(p_1046->global_0_offset, get_global_id(0), 10))))), l_712)) < 0x34L))
    { /* block id: 348 */
        int32_t l_719 = 0x6EAE09E2L;
        int32_t l_720 = 0x75997EECL;
        uint8_t *l_734 = &p_1046->g_419;
        int32_t l_749 = 0x250EBC06L;
        int32_t **l_760 = &p_1046->g_425;
        int32_t ***l_759[5] = {&l_760,&l_760,&l_760,&l_760,&l_760};
        uint32_t l_773 = 4294967290UL;
        uint32_t *l_795 = &p_1046->g_726[0][2][3];
        union U0 *l_827[1][5][5] = {{{(void*)0,&p_1046->g_622,(void*)0,(void*)0,&p_1046->g_622},{(void*)0,&p_1046->g_622,(void*)0,(void*)0,&p_1046->g_622},{(void*)0,&p_1046->g_622,(void*)0,(void*)0,&p_1046->g_622},{(void*)0,&p_1046->g_622,(void*)0,(void*)0,&p_1046->g_622},{(void*)0,&p_1046->g_622,(void*)0,(void*)0,&p_1046->g_622}}};
        uint32_t **l_842 = &p_1046->g_520[3][2];
        VECTOR(uint32_t, 4) l_847 = (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 1UL), 1UL);
        int8_t l_852 = 1L;
        VECTOR(int16_t, 2) l_863 = (VECTOR(int16_t, 2))(0x6FBDL, 0x758AL);
        VECTOR(uint16_t, 8) l_887 = (VECTOR(uint16_t, 8))(0xCFA9L, (VECTOR(uint16_t, 4))(0xCFA9L, (VECTOR(uint16_t, 2))(0xCFA9L, 65527UL), 65527UL), 65527UL, 0xCFA9L, 65527UL);
        uint16_t l_949 = 0x3273L;
        int i, j, k;
        (*p_1046->g_425) = (safe_lshift_func_int16_t_s_u((18446744073709551615UL <= ((safe_mod_func_uint64_t_u_u(((**p_1046->g_627) || ((void*)0 == &p_1046->g_640)), GROUP_DIVERGE(2, 1))) <= (l_719 > (0x5134L ^ (l_720 && (((void*)0 == &p_1046->g_520[3][2]) , 65526UL)))))), p_5));
        for (p_1046->g_622.f3 = (-26); (p_1046->g_622.f3 == (-29)); p_1046->g_622.f3--)
        { /* block id: 352 */
            uint32_t *l_725[7][1][2] = {{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}},{{&p_1046->g_726[0][4][4],(void*)0}}};
            int32_t l_729 = (-5L);
            uint32_t *l_730[2];
            int16_t *l_743[8][10] = {{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0},{(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0,&p_1046->g_351,&p_1046->g_351,&p_1046->g_351,(void*)0}};
            VECTOR(int64_t, 16) l_781 = (VECTOR(int64_t, 16))(0x2798751D9133BB1DL, (VECTOR(int64_t, 4))(0x2798751D9133BB1DL, (VECTOR(int64_t, 2))(0x2798751D9133BB1DL, 0x63497A488C8EB3C1L), 0x63497A488C8EB3C1L), 0x63497A488C8EB3C1L, 0x2798751D9133BB1DL, 0x63497A488C8EB3C1L, (VECTOR(int64_t, 2))(0x2798751D9133BB1DL, 0x63497A488C8EB3C1L), (VECTOR(int64_t, 2))(0x2798751D9133BB1DL, 0x63497A488C8EB3C1L), 0x2798751D9133BB1DL, 0x63497A488C8EB3C1L, 0x2798751D9133BB1DL, 0x63497A488C8EB3C1L);
            VECTOR(uint16_t, 2) l_782 = (VECTOR(uint16_t, 2))(0x4551L, 0xA33FL);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_730[i] = &p_1046->g_731;
            atomic_or(&p_1046->l_atomic_reduction[0], (((*p_3) & ((l_712 ^= (safe_sub_func_int16_t_s_s(p_1046->g_528.sc, p_5))) , ((*p_3) & ((&l_712 == (void*)0) ^ (1UL < (0L == (!l_729))))))) , 7L) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1046->v_collective += p_1046->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((((((p_1046->g_731++) , (l_734 != &p_4)) >= (safe_add_func_uint64_t_u_u((&p_1046->g_532[1] == (void*)0), (safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_719 = (safe_rshift_func_int16_t_s_s(0x628BL, 1))), ((safe_sub_func_uint64_t_u_u(1UL, (safe_lshift_func_int16_t_s_u((p_4 , l_712), 15)))) , l_748))), p_1046->g_726[0][5][0]))))) >= GROUP_DIVERGE(0, 1)) & l_749))
            { /* block id: 357 */
                int32_t ***l_762 = (void*)0;
                VECTOR(int16_t, 2) l_779 = (VECTOR(int16_t, 2))(8L, (-9L));
                uint16_t *l_806 = &p_1046->g_293;
                int8_t **l_825 = (void*)0;
                uint32_t l_826 = 0xFDA056EDL;
                int i;
                for (p_1046->g_351 = 0; (p_1046->g_351 >= 28); p_1046->g_351 = safe_add_func_int64_t_s_s(p_1046->g_351, 2))
                { /* block id: 360 */
                    int64_t *l_758[1][6] = {{(void*)0,&p_1046->g_322[2],(void*)0,(void*)0,&p_1046->g_322[2],(void*)0}};
                    int32_t ****l_761 = &l_759[2];
                    int i, j;
                    (*p_1046->g_425) = ((VECTOR(int32_t, 4))((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(18446744073709551615UL, (p_1046->g_680.s5 ^= 0x50B0BD43A7A08A33L))), (~(l_719 != (((*l_761) = l_759[3]) == l_762))))), (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(l_748, ((**l_760) | ((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(p_5, 7)), (l_729 |= (l_712 < 4294967295UL)))) < p_5)))), l_773)), p_4)))), ((VECTOR(int32_t, 2))(0x224F7BA2L)), 0x392FC0B3L)).x;
                }
                for (l_749 = 0; (l_749 <= 27); l_749 = safe_add_func_int64_t_s_s(l_749, 4))
                { /* block id: 368 */
                    VECTOR(int64_t, 4) l_780 = (VECTOR(int64_t, 4))(0x535F843C0ADFAE26L, (VECTOR(int64_t, 2))(0x535F843C0ADFAE26L, 0x49E9EF012ABE1043L), 0x49E9EF012ABE1043L);
                    int32_t ****l_788 = &l_762;
                    int8_t *l_789 = (void*)0;
                    int8_t *l_790 = &p_1046->g_22;
                    int i;
                    (*p_1046->g_776) = &p_1046->g_691[7][0][1];
                    p_3 = p_3;
                    (*p_1046->g_425) ^= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(0L, 1L)).yxxyyxxx, ((VECTOR(int16_t, 16))(p_1046->g_778.xxxyxyyyxxxxyyyx)).lo, ((VECTOR(int16_t, 16))(l_779.xxxyyyyxxxxyxxyy)).lo))), (int16_t)(l_712 = (p_5 && (p_5 == ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_780.xz)), 0x7B935F9BFF355D36L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(l_729, 4L, 0x243F465DCE293CCBL, 1L)).zyyzzwyxxzxwzyzz, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_781.s37f2)))))).zyzxywyxzwzwyywx))).s81)), ((VECTOR(int64_t, 2))(0x4C7371FD159AF5A6L, (-5L))), (-9L))))).s3)))))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_782.yyyxyxxx)), ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(0x6AE8L, (((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((safe_mul_func_int16_t_s_s((l_788 == (((*l_790) = l_781.sb) , l_788)), (safe_sub_func_int32_t_s_s(0x72B8631BL, (*p_3))))), (safe_mod_func_int32_t_s_s((0x640FL ^ p_1046->g_679.sf), (-7L))), p_5, ((VECTOR(uint8_t, 4))(247UL)), 0x75L)).s74)).xxyxyyyx)).s50)).hi)), 0x65320BADA56C2867L)) , l_795) != (void*)0), ((VECTOR(int16_t, 4))(1L)), 1L, (-1L))).s2352731766614006, ((VECTOR(int16_t, 16))(0x08E9L)), ((VECTOR(int16_t, 16))(0x2044L))))).s608b)), ((VECTOR(int16_t, 2))(0x088BL)), (-1L), 2L)).odd, ((VECTOR(int16_t, 4))(0L))))).yyywzwxz))))).odd))).s6;
                }
                (**p_1046->g_424) = (safe_sub_func_uint8_t_u_u(l_781.sd, (((p_1046->g_357[0][0] <= (((((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((!(safe_sub_func_uint64_t_u_u((((safe_add_func_int64_t_s_s(((0x2404L < (p_1046->g_381.y ^= (++(*l_806)))) , ((((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_1046->g_comm_values[p_1046->tid], 14)), 2)) == p_1046->g_358) <= (safe_mod_func_int32_t_s_s((-1L), (safe_div_func_uint64_t_u_u(((p_1046->g_22 || (safe_lshift_func_int8_t_s_s((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))((l_729 &= ((+(safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_5, (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((p_1046->g_36 = l_823) == l_825), p_5, 0x6813503D7CE19417L, 0xAB6ED630D870A842L)).wzyzzwzwwwxxzwwz)).s6 | 1UL))), p_5))) == l_748)), ((VECTOR(uint32_t, 2))(0UL)), l_826, ((VECTOR(uint32_t, 4))(0xCAE2FFFCL)))))).s1 , (void*)0) != l_827[0][3][4]) || (-1L)), p_1046->g_comm_values[p_1046->tid]))) || p_1046->g_673.z), l_781.sa))))) , p_1046->g_673.y) , &p_1046->g_640) == &l_827[0][3][4])), l_781.s1)) | p_4) <= GROUP_DIVERGE(1, 1)), p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))]))), (**p_1046->g_627))), 12)) == l_712) != p_4) , p_1046->g_267) , 0xAF68FE88L) == p_4) < p_5)) || p_5) | (*p_1046->g_425))));
                for (p_4 = 0; (p_4 < 47); p_4++)
                { /* block id: 382 */
                    uint64_t *l_840[9][8][3] = {{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}},{{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0},{&p_1046->g_488,&p_1046->g_488,(void*)0}}};
                    int i, j, k;
                    l_729 = (p_4 ^ (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((p_5 && (18446744073709551612UL <= (safe_div_func_uint16_t_u_u((((p_1046->g_679.sb ^ ((safe_rshift_func_uint8_t_u_u(((((l_712 = (0x10A7L < (p_1046->g_528.s5 = ((safe_add_func_int8_t_s_s(p_1046->g_418, ((8L && (*p_1046->g_425)) & 0x1FL))) , p_4)))) , &p_4) == (void*)0) || p_1046->g_357[0][0]), 2)) == 0x31FAE6F72B1700D5L)) ^ p_5) != FAKE_DIVERGE(p_1046->group_0_offset, get_group_id(0), 10)), p_1046->g_419)))) == l_841[2]), p_4)), 3)));
                }
            }
            else
            { /* block id: 387 */
                VECTOR(uint32_t, 16) l_848 = (VECTOR(uint32_t, 16))(0xBC6A27A1L, (VECTOR(uint32_t, 4))(0xBC6A27A1L, (VECTOR(uint32_t, 2))(0xBC6A27A1L, 0xD9891E5BL), 0xD9891E5BL), 0xD9891E5BL, 0xBC6A27A1L, 0xD9891E5BL, (VECTOR(uint32_t, 2))(0xBC6A27A1L, 0xD9891E5BL), (VECTOR(uint32_t, 2))(0xBC6A27A1L, 0xD9891E5BL), 0xBC6A27A1L, 0xD9891E5BL, 0xBC6A27A1L, 0xD9891E5BL);
                uint64_t *l_851 = (void*)0;
                VECTOR(int16_t, 8) l_862 = (VECTOR(int16_t, 8))(0x3DB2L, (VECTOR(int16_t, 4))(0x3DB2L, (VECTOR(int16_t, 2))(0x3DB2L, 0x0619L), 0x0619L), 0x0619L, 0x3DB2L, 0x0619L);
                int32_t ****l_891 = &l_849;
                int i;
                (**l_850) |= ((l_842 != l_843) | (safe_unary_minus_func_uint8_t_u(((l_852 = ((((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(0x75AC465DL, (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xDD43L, 1UL)))).lo & 0x663BL), ((VECTOR(uint32_t, 2))(2UL, 0x02B8C9A6L)), 4294967295UL, 0x4E046345L, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(l_847.xwwxyyyx)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(l_848.s4934260d)).s53, (uint32_t)((((void*)0 != l_849) > p_4) ^ 8L)))).xxyxxyxyxxyxyyxy)).s4e4d))).xxzyxzxx, (uint32_t)(((void*)0 != l_851) > 3UL)))).odd)).zxxzyyzz)), 2UL, 0x2A55065BL)).odd, ((VECTOR(uint32_t, 8))(0xD7B2D08CL)), ((VECTOR(uint32_t, 8))(0xBBB9AB4BL))))).s7, p_5)) & p_5) > 3L) & p_5)) & FAKE_DIVERGE(p_1046->group_1_offset, get_group_id(1), 10)))));
                for (p_1046->g_351 = 0; (p_1046->g_351 <= 5); p_1046->g_351 = safe_add_func_int64_t_s_s(p_1046->g_351, 4))
                { /* block id: 392 */
                    int8_t l_870 = (-1L);
                    union U0 **l_886 = &l_827[0][2][4];
                    int32_t l_890 = 0L;
                    if (((**l_760) ^= (safe_unary_minus_func_int32_t_s(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1046->g_856.xzywwzxz)).lo)).zzzxzzzzyxyxwwyy, ((VECTOR(int32_t, 2))(0x632C236CL, (-1L))).xxxyxyyyyxxyyyxy))).s6))))
                    { /* block id: 394 */
                        VECTOR(int16_t, 16) l_861 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x7AEEL), 0x7AEEL), 0x7AEEL, (-3L), 0x7AEEL, (VECTOR(int16_t, 2))((-3L), 0x7AEEL), (VECTOR(int16_t, 2))((-3L), 0x7AEEL), (-3L), 0x7AEEL, (-3L), 0x7AEEL);
                        int8_t *l_877[8];
                        int16_t l_881 = (-1L);
                        uint16_t *l_882 = &p_1046->g_293;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_877[i] = &l_852;
                        (***l_849) = (safe_sub_func_int64_t_s_s(((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(l_861.s2625338596acac9c)).s9726, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_862.s75125060)).s67, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0x31D8L, 0x6B81L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_863.yxyyxxxx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(5L, (-1L), 0x254BL, (-1L))).odd, (int16_t)(safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_1046->g_322[2], ((((VECTOR(int32_t, 2))(0x7D599545L, 0x09D24630L)).lo , l_870) < (safe_lshift_func_int8_t_s_s((((*l_882) ^= (safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1046->global_0_offset, get_global_id(0), 10), (((p_1046->g_528.sc = (safe_rshift_func_int8_t_s_s((l_881 = ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((-1L), (l_729 ^= (~1L)), ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(7L, 0x73L)).yxyyxxyyxxyxxyxy, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(p_1046->g_878.yyyxxxxy)), (int8_t)((&p_5 == &p_1046->g_731) , 0x1FL)))))).s22, ((VECTOR(int8_t, 8))(p_1046->g_879.s53452120)).s64, ((VECTOR(int8_t, 16))(l_880.yyxxyyyxxyyxxyxx)).s8f))).yxyxyxyyyyxyxyxy))), ((VECTOR(int8_t, 2))(0x38L, (-1L))).xyxyxxxxyxyyxyyy))).sf, ((-1L) ^ l_870), 0x75L, (**l_850), 0x47L, 0x49L)))).even)).zwzywzzxxxyyyywy, ((VECTOR(int8_t, 16))(0x4CL))))).s8), p_4))) | p_1046->g_269) , p_1046->g_679.sa)))) && 0x45E3L), 3))))), 1UL)), 0x4ED31682L))))), 0x3E34L, 1L)).wyxzyzzx, ((VECTOR(int16_t, 8))(3L))))), ((VECTOR(int16_t, 4))((-2L))), ((VECTOR(int16_t, 2))(0L)), 0x62A3L, 8L)))).s70, ((VECTOR(int16_t, 2))(0x18B4L))))))))))))).yyxy))).w, p_4)) < p_5) >= FAKE_DIVERGE(p_1046->group_2_offset, get_group_id(2), 10)) >= l_861.s8), p_1046->g_22));
                    }
                    else
                    { /* block id: 400 */
                        int8_t l_889 = 0x15L;
                        (****l_891) = ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((l_885[1] = &p_1046->g_640) == l_886), ((VECTOR(uint16_t, 2))(l_887.s77)), 0xB665L, 0x745DL, p_1046->g_358, 0xF29CL, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(252UL, 6UL)).xxxyyyxx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(p_1046->g_888.xzyx)).even, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(1UL, 0x86L)), 0x6BL, 0x1BL)).xwxwyzywywwzywzy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((*p_3) , (0UL >= (**l_760))), (p_5 , l_889), 0x28L, (((((l_890 = 0x0842BE27L) > (*p_3)) , l_891) != (void*)0) == 0x44B0180E33EF3CE7L), 0x52L, 0x10L, 7UL, 0xCFL)))).s5750506440446000))).s78, ((VECTOR(uint8_t, 2))(253UL))))), ((VECTOR(uint8_t, 2))(0x39L)), ((VECTOR(uint8_t, 2))(0x18L)))))))))).xxxyxyyx))), ((VECTOR(uint8_t, 4))(0x91L)), p_5, 0x62L, 1UL, 3UL)).even, ((VECTOR(uint8_t, 8))(6UL))))), 65535UL)).lo, ((VECTOR(uint16_t, 8))(0xA352L))))))).s2, (****l_891))) < (*p_3));
                    }
                    for (p_1046->g_267 = 0; (p_1046->g_267 < 14); ++p_1046->g_267)
                    { /* block id: 407 */
                        return p_3;
                    }
                }
                return (**l_849);
            }
        }
        for (l_720 = 0; (l_720 < 8); l_720 = safe_add_func_uint64_t_u_u(l_720, 9))
        { /* block id: 416 */
            int64_t *l_913 = (void*)0;
            int64_t *l_914 = &p_1046->g_322[2];
            int32_t l_922 = 0x53C79E14L;
            int16_t *l_924 = (void*)0;
            int16_t *l_925 = (void*)0;
            int16_t *l_926 = (void*)0;
            int16_t *l_927 = (void*)0;
            int16_t *l_928 = &p_1046->g_351;
            int32_t l_930 = 0x6AA73B27L;
            if ((**p_1046->g_424))
                break;
            (**l_850) = (l_930 |= (safe_sub_func_uint64_t_u_u((**l_760), (((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1046->global_0_offset, get_global_id(0), 10), (!(GROUP_DIVERGE(1, 1) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1046->g_902.xz)).yyyx)))).zzwxzxzx, ((VECTOR(int8_t, 16))(p_1046->g_903.xxxwzxwyyzwxyxxz)).lo))), ((VECTOR(int8_t, 4))(0x53L, (-8L), (-1L), 0L)).yzzzwxxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(0x4FL, 0x7BL)).xyyx, ((VECTOR(int8_t, 2))(0L, 0x3AL)).xxyx))), ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((!(18446744073709551613UL & ((*l_914) = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1046->g_912.s6fc0)).lo)).even))), (safe_rshift_func_uint8_t_u_s((FAKE_DIVERGE(p_1046->global_1_offset, get_global_id(1), 10) , ((safe_lshift_func_int16_t_s_s(((((VECTOR(uint32_t, 4))(0x1388514FL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xA2FA9B20L, 0UL)))), 0xE5CF62D8L)).z , l_919) != (safe_add_func_uint16_t_u_u(0xDBA5L, (((l_922 |= ((*p_3) <= 0x98CAD646L)) & (p_1046->g_923[2] , (((*l_928) = 0x101FL) || 0x01A0L))) < (**l_850))))), 1)) <= 3L)), (**l_850))))), 7)), FAKE_DIVERGE(p_1046->global_2_offset, get_global_id(2), 10))), 4)) , (**l_850)), 0L, (-3L), 0x04L))))).s1, p_1046->g_357[0][0])))))) , (void*)0) == l_929))));
            (***l_849) ^= (-10L);
        }
        for (p_1046->g_299 = 0; (p_1046->g_299 >= 2); p_1046->g_299 = safe_add_func_uint16_t_u_u(p_1046->g_299, 5))
        { /* block id: 427 */
            uint64_t l_945 = 1UL;
            int32_t l_964[8] = {0x7FC2E069L,0x7FC2E069L,0x7FC2E069L,0x7FC2E069L,0x7FC2E069L,0x7FC2E069L,0x7FC2E069L,0x7FC2E069L};
            int16_t l_965 = 0x7A8AL;
            int8_t **l_977[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            if ((*p_3))
            { /* block id: 428 */
                int8_t l_936 = 0L;
                p_1046->g_933--;
                if ((*p_3))
                    break;
                --l_937;
                return p_3;
            }
            else
            { /* block id: 433 */
                uint64_t *l_962[4];
                VECTOR(int32_t, 8) l_963 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x5DFF6844L), 0x5DFF6844L), 0x5DFF6844L, (-2L), 0x5DFF6844L);
                uint64_t l_966 = 18446744073709551613UL;
                int8_t *l_974 = (void*)0;
                int8_t *l_975 = (void*)0;
                int8_t ***l_976 = (void*)0;
                int16_t *l_978 = &p_1046->g_351;
                int i;
                for (i = 0; i < 4; i++)
                    l_962[i] = &l_937;
                for (p_4 = 0; (p_4 < 37); ++p_4)
                { /* block id: 436 */
                    uint8_t l_942[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_942[i] = 254UL;
                    (***l_849) = ((*p_1046->g_776) != p_1046->g_777);
                    l_942[0]--;
                    l_945--;
                    (**l_849) = p_3;
                }
                p_1046->g_979 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), (-1L))), ((VECTOR(int32_t, 4))(p_1046->g_948.s5704)).y, 0x3CDFD603L, 0x2D83EFA0L, l_949, ((safe_rshift_func_uint8_t_u_s(255UL, p_4)) || ((p_1046->g_903.y &= p_4) < ((*l_734) ^= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 16))(0x1BL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 16))(255UL, 1UL, ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(65527UL, (safe_div_func_uint64_t_u_u((((VECTOR(int8_t, 8))((safe_mul_func_int16_t_s_s(((*l_978) = ((((p_1046->g_36 = func_24(&p_1046->g_359, ((++l_966) ^ (safe_mul_func_int16_t_s_s(p_4, (+((l_963.s7 & (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_971.s17a7e5c4ca351644)))).sd, 0x2007L, (((l_964[6] = ((safe_add_func_uint32_t_u_u(((*p_3) < 0x89755871L), l_964[6])) , l_945)) | p_4) , l_963.s7), 0x94CDL, 2UL, 65527UL, 0UL, 65535UL, 6UL, p_5, ((VECTOR(uint16_t, 4))(6UL)), 0xC353L, 0xB2C4L)).sb98a)), 7UL, FAKE_DIVERGE(p_1046->group_0_offset, get_group_id(0), 10), 65534UL, p_1046->g_359, p_5, 2UL, 0x57EFL, 0x177BL, ((VECTOR(uint16_t, 4))(0x0175L)))).sc <= p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))])) , (-1L)))))), (**l_850), l_965, p_1046)) == l_977[1][2]) , (void*)0) != (void*)0)), 0x245FL)), 1L, 0x60L, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x4FL)), 0x27L)).s4 && l_963.s2), 0xBC26438B1870C39EL)))) <= (*p_3)), p_5)) && 0x6DL), 0x27L, ((VECTOR(uint8_t, 4))(255UL)), FAKE_DIVERGE(p_1046->group_2_offset, get_group_id(2), 10), 1UL, ((VECTOR(uint8_t, 2))(248UL)), ((VECTOR(uint8_t, 2))(0UL)), 0x39L, 0UL)), ((VECTOR(uint8_t, 16))(0x81L))))).lo, ((VECTOR(uint8_t, 8))(0xDBL))))).s35, ((VECTOR(uint8_t, 2))(0xD7L))))), 0x19L, 0x10L)), 1UL, ((VECTOR(uint8_t, 2))(0x0AL)), 0x1EL, ((VECTOR(uint8_t, 4))(251UL)), ((VECTOR(uint8_t, 2))(0x1DL)), 0x4FL)), ((VECTOR(uint8_t, 16))(0x56L))))).s9b24)).y))), (*p_3), 8L, l_966, 0x438331B8L, l_964[0], 0x43D67D41L, ((VECTOR(int32_t, 2))((-5L))), (-1L))).s5;
            }
        }
    }
    else
    { /* block id: 451 */
        int32_t l_987 = 1L;
        VECTOR(int64_t, 2) l_988 = (VECTOR(int64_t, 2))((-3L), 0x4C6161B5D02BBAD1L);
        int8_t ***l_1000[3];
        int8_t ****l_999 = &l_1000[1];
        int8_t ****l_1001 = (void*)0;
        int8_t ***l_1003 = &p_1046->g_36;
        int8_t ****l_1002 = &l_1003;
        int16_t *l_1009 = (void*)0;
        int16_t *l_1010 = (void*)0;
        int16_t *l_1011[5][6] = {{&p_1046->g_351,&p_1046->g_351,(void*)0,(void*)0,(void*)0,&p_1046->g_351},{&p_1046->g_351,&p_1046->g_351,(void*)0,(void*)0,(void*)0,&p_1046->g_351},{&p_1046->g_351,&p_1046->g_351,(void*)0,(void*)0,(void*)0,&p_1046->g_351},{&p_1046->g_351,&p_1046->g_351,(void*)0,(void*)0,(void*)0,&p_1046->g_351},{&p_1046->g_351,&p_1046->g_351,(void*)0,(void*)0,(void*)0,&p_1046->g_351}};
        uint32_t l_1012 = 0UL;
        union U0 *l_1013 = &p_1046->g_923[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1000[i] = &p_1046->g_36;
        (**l_849) = (*p_1046->g_424);
        p_1046->g_640 = (l_1013 = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_1046->g_986.safe62f78995e6376)))).sb, (p_1046->g_279[1] > l_987))) , ((p_1046->g_22 < (((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(l_988.yyxx)).hi))).odd , 0x7D9B9DDF328A4337L)) , (((safe_div_func_uint8_t_u_u(p_5, ((((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((+((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((1UL <= (((*l_999) = &l_823) != ((*l_1002) = &p_1046->g_36))), ((((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x0BL, 0xFCL, ((p_1046->g_528.s6 = ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(1L, 4L, 0L, (-5L))).lo)).even, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_1006.s0078b0eb)).s05)), ((VECTOR(int64_t, 2))(0x7B5E7477B7B6AD75L, 0x15A4571F5A79A10EL))))), ((VECTOR(int64_t, 4))((safe_lshift_func_int8_t_s_s((l_987 <= (***l_849)), 3)), ((VECTOR(int64_t, 2))(9L)), (-1L))).hi))).odd)) >= (**l_850))) && p_4), (**p_1046->g_627), 0x78L, p_5, FAKE_DIVERGE(p_1046->group_0_offset, get_group_id(0), 10), ((VECTOR(uint8_t, 8))(0x4EL)), 0x10L)).s43)).yxyxyyyx, ((VECTOR(uint8_t, 8))(0x1BL))))).s3410727577331570)).safd3, ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 4))(65533UL))))).w <= p_1046->g_888.w) ^ l_987))), 3)) == p_5)), p_1046->g_419)), 5L)), ((VECTOR(uint8_t, 2))(247UL)), ((VECTOR(uint8_t, 2))(0x63L)), p_4, 0x36L, 0xF9L)).s22, ((VECTOR(uint8_t, 2))(253UL)), ((VECTOR(uint8_t, 2))(0UL))))).lo == l_987) || 0xD9D8L))) && (**p_1046->g_627)) , FAKE_DIVERGE(p_1046->group_0_offset, get_group_id(0), 10)))), l_1012)), 5)) , &p_1046->g_622));
    }
    return (**l_849);
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_22 p_1046->g_36 p_1046->g_271 p_1046->l_comm_values p_1046->g_7 p_1046->g_279 p_1046->g_282 p_1046->g_293 p_1046->g_299 p_1046->g_269 p_1046->g_315 p_1046->g_323 p_1046->g_comm_values p_1046->g_351 p_1046->g_314 p_1046->g_322 p_1046->g_359 p_1046->g_372 p_1046->g_381 p_1046->g_357 p_1046->g_419 p_1046->g_424 p_1046->g_267 p_1046->g_425 p_1046->g_488 p_1046->g_495 p_1046->g_418 p_1046->g_673 p_1046->g_676 p_1046->g_678 p_1046->g_679 p_1046->g_680 p_1046->g_691 p_1046->g_627 p_1046->g_628
 * writes: p_1046->g_271 p_1046->g_293 p_1046->g_299 p_1046->g_7 p_1046->g_315 p_1046->g_269 p_1046->g_323 p_1046->g_351 p_1046->g_357 p_1046->g_358 p_1046->g_359 p_1046->g_314 p_1046->g_419 p_1046->g_425 p_1046->g_267 p_1046->g_282 p_1046->g_495 p_1046->g_418 p_1046->g_322 p_1046->g_36
 */
int8_t  func_10(int32_t  p_11, int64_t  p_12, struct S1 * p_1046)
{ /* block id: 6 */
    int8_t *l_29[3][3] = {{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_22,&p_1046->g_22,&p_1046->g_22}};
    int32_t *l_274 = &p_1046->g_7;
    int32_t l_422 = 0x53BF1093L;
    int i, j;
    p_1046->g_36 = func_24(l_29[0][1], (p_1046->g_22 | func_30(p_1046->g_36, ((safe_mod_func_int64_t_s_s(((void*)0 == &p_11), p_12)) != func_39(p_11, (l_29[0][1] == (void*)0), &l_29[1][2], p_1046)), p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))], l_274, p_1046->g_7, p_1046)), l_422, p_11, p_1046);
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_424 p_1046->g_269 p_1046->g_267 p_1046->g_279 p_1046->g_282 p_1046->g_425 p_1046->g_314 p_1046->g_293 p_1046->g_315 p_1046->g_488 p_1046->l_comm_values p_1046->g_495 p_1046->g_418 p_1046->g_673 p_1046->g_676 p_1046->g_678 p_1046->g_679 p_1046->g_680 p_1046->g_691 p_1046->g_627 p_1046->g_628 p_1046->g_419 p_1046->g_36
 * writes: p_1046->g_425 p_1046->g_269 p_1046->g_267 p_1046->g_282 p_1046->g_359 p_1046->g_314 p_1046->g_495 p_1046->g_418 p_1046->g_293 p_1046->g_357 p_1046->g_322
 */
int8_t ** func_24(int8_t * p_25, int32_t  p_26, int16_t  p_27, int32_t  p_28, struct S1 * p_1046)
{ /* block id: 203 */
    int32_t *l_423[3];
    VECTOR(uint16_t, 2) l_465 = (VECTOR(uint16_t, 2))(65529UL, 0x6F4CL);
    uint64_t *l_487 = &p_1046->g_488;
    int32_t l_493 = 0x5E4E82A1L;
    uint32_t *l_518[9] = {&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299,&p_1046->g_299};
    uint32_t **l_517 = &l_518[3];
    int32_t **l_534[10][3] = {{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425},{&p_1046->g_425,&l_423[1],&p_1046->g_425}};
    int16_t l_580 = (-6L);
    VECTOR(int32_t, 16) l_656 = (VECTOR(int32_t, 16))(0x4856145AL, (VECTOR(int32_t, 4))(0x4856145AL, (VECTOR(int32_t, 2))(0x4856145AL, 0x58E2AF8AL), 0x58E2AF8AL), 0x58E2AF8AL, 0x4856145AL, 0x58E2AF8AL, (VECTOR(int32_t, 2))(0x4856145AL, 0x58E2AF8AL), (VECTOR(int32_t, 2))(0x4856145AL, 0x58E2AF8AL), 0x4856145AL, 0x58E2AF8AL, 0x4856145AL, 0x58E2AF8AL);
    VECTOR(int32_t, 16) l_659 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int32_t, 2))((-7L), (-1L)), (VECTOR(int32_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
    VECTOR(uint32_t, 8) l_668 = (VECTOR(uint32_t, 8))(0xFCC69C56L, (VECTOR(uint32_t, 4))(0xFCC69C56L, (VECTOR(uint32_t, 2))(0xFCC69C56L, 4294967295UL), 4294967295UL), 4294967295UL, 0xFCC69C56L, 4294967295UL);
    uint16_t *l_669 = &p_1046->g_357[1][0];
    VECTOR(int16_t, 2) l_670 = (VECTOR(int16_t, 2))(1L, 1L);
    VECTOR(uint32_t, 4) l_671 = (VECTOR(uint32_t, 4))(0x8B052276L, (VECTOR(uint32_t, 2))(0x8B052276L, 0xC1FEA864L), 0xC1FEA864L);
    VECTOR(uint32_t, 4) l_672 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xB14284E9L), 0xB14284E9L);
    VECTOR(uint32_t, 8) l_674 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0xBB4AFAEBL), 0xBB4AFAEBL), 0xBB4AFAEBL, 3UL, 0xBB4AFAEBL);
    VECTOR(uint32_t, 8) l_675 = (VECTOR(uint32_t, 8))(0x0287E2B8L, (VECTOR(uint32_t, 4))(0x0287E2B8L, (VECTOR(uint32_t, 2))(0x0287E2B8L, 0xEAACB906L), 0xEAACB906L), 0xEAACB906L, 0x0287E2B8L, 0xEAACB906L);
    VECTOR(uint32_t, 16) l_677 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0UL), 0UL), 0UL, 7UL, 0UL, (VECTOR(uint32_t, 2))(7UL, 0UL), (VECTOR(uint32_t, 2))(7UL, 0UL), 7UL, 0UL, 7UL, 0UL);
    uint32_t l_692 = 0xCE0A833FL;
    int64_t *l_693 = &p_1046->g_322[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_423[i] = &p_1046->g_314;
    (*p_1046->g_424) = l_423[1];
    for (p_1046->g_269 = (-12); (p_1046->g_269 < (-29)); p_1046->g_269 = safe_sub_func_int64_t_s_s(p_1046->g_269, 9))
    { /* block id: 207 */
        int32_t l_462 = 0x79EA7DE5L;
        uint64_t *l_472 = (void*)0;
        uint64_t *l_473 = (void*)0;
        uint64_t *l_474 = (void*)0;
        uint64_t *l_475 = (void*)0;
        uint64_t *l_476[4];
        int8_t *l_489 = (void*)0;
        int8_t *l_490 = &p_1046->g_359;
        int16_t *l_491 = (void*)0;
        int32_t l_492 = 0x08327329L;
        int32_t l_494 = 5L;
        int i;
        for (i = 0; i < 4; i++)
            l_476[i] = (void*)0;
        for (p_1046->g_267 = 0; (p_1046->g_267 >= 27); p_1046->g_267++)
        { /* block id: 210 */
            if ((atomic_inc(&p_1046->g_atomic_input[77 * get_linear_group_id() + 49]) == 2))
            { /* block id: 212 */
                int32_t l_430[4] = {0L,0L,0L,0L};
                VECTOR(int32_t, 4) l_453 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0E0CD291L), 0x0E0CD291L);
                uint8_t l_454 = 0x67L;
                int32_t *l_455[6] = {&l_430[1],&l_430[1],&l_430[1],&l_430[1],&l_430[1],&l_430[1]};
                int i;
                for (l_430[0] = (-12); (l_430[0] != (-11)); l_430[0]++)
                { /* block id: 215 */
                    uint16_t l_433[1][6] = {{0xC4F5L,0x9AECL,0xC4F5L,0xC4F5L,0x9AECL,0xC4F5L}};
                    uint16_t l_450 = 0x628FL;
                    int16_t l_451[8] = {0x518DL,0x518DL,0x518DL,0x518DL,0x518DL,0x518DL,0x518DL,0x518DL};
                    int16_t l_452 = 0x7F2BL;
                    int i, j;
                    if ((l_433[0][4] = 0x1604B60DL))
                    { /* block id: 217 */
                        int8_t l_434 = 0L;
                        int8_t l_435 = 0x57L;
                        int64_t l_436 = 1L;
                        uint16_t l_437 = 0x6A33L;
                        VECTOR(int32_t, 8) l_440 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        int16_t l_441 = (-7L);
                        int i;
                        l_435 = l_434;
                        l_437++;
                        l_441 = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_440.s13)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 7L)).xxyxxyyyxyxyyxyy)).sa5))).even;
                    }
                    else
                    { /* block id: 221 */
                        int32_t l_442[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                        uint32_t l_443 = 0x8C6A88DFL;
                        uint8_t *l_445 = (void*)0;
                        uint8_t **l_444 = &l_445;
                        int32_t *l_446[7] = {&l_442[6],(void*)0,&l_442[6],&l_442[6],(void*)0,&l_442[6],&l_442[6]};
                        VECTOR(uint64_t, 2) l_447 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xA85D347A7EC0E92EL);
                        int16_t l_448[1][8] = {{0x6ACCL,1L,0x6ACCL,0x6ACCL,1L,0x6ACCL,0x6ACCL,1L}};
                        int32_t l_449 = 1L;
                        int i, j;
                        l_443 = l_442[6];
                        l_444 = l_444;
                        l_446[4] = l_446[4];
                        l_449 = (((VECTOR(uint64_t, 16))(l_447.yyxxyxxxxyxyyyyy)).s6 , l_448[0][6]);
                    }
                    l_450 ^= 1L;
                    l_452 = l_451[3];
                }
                l_454 = l_453.w;
                l_455[4] = l_455[5];
                unsigned int result = 0;
                int l_430_i0;
                for (l_430_i0 = 0; l_430_i0 < 4; l_430_i0++) {
                    result += l_430[l_430_i0];
                }
                result += l_453.w;
                result += l_453.z;
                result += l_453.y;
                result += l_453.x;
                result += l_454;
                atomic_add(&p_1046->g_special_values[77 * get_linear_group_id() + 49], result);
            }
            else
            { /* block id: 232 */
                (1 + 1);
            }
            if (p_28)
                continue;
        }
        l_494 |= ((*p_1046->g_425) = (safe_sub_func_int32_t_s_s((GROUP_DIVERGE(2, 1) , (safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((1L || ((l_462 & 0x0FL) || (((VECTOR(uint16_t, 4))(((0x4A109D72L || (safe_mod_func_int32_t_s_s((((VECTOR(uint16_t, 2))(l_465.yy)).even ^ (safe_rshift_func_uint16_t_u_s(p_26, (l_492 ^= (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((*l_490) = (p_1046->g_279[4] | ((p_1046->g_282.sc ^= 7UL) <= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((l_487 == l_476[0]), (*p_1046->g_425))) < (*p_1046->g_425)), 0xF80FL)), p_1046->g_293)) > GROUP_DIVERGE(2, 1)), 7)), 0xE90495E1639AD78DL))))) && p_1046->g_315), 5)) , 0x882CCD5EA108350CL), p_28)))))), l_462))) , l_462), 0UL, 65534UL, 0x8C31L)).w , p_26))) , p_1046->g_488), l_462)) >= l_493), p_1046->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1046->tid, 15))]))), 0x2BF552F8L)));
        if ((*p_1046->g_425))
            break;
        --p_1046->g_495;
    }
    for (p_1046->g_418 = 0; (p_1046->g_418 > (-8)); --p_1046->g_418)
    { /* block id: 247 */
        uint64_t *l_509 = &p_1046->g_488;
        int8_t *l_541 = (void*)0;
        int32_t l_548 = 0x01E23CE0L;
        int32_t l_552 = 0x0F27D406L;
        int32_t l_556[6][4] = {{0x330309DAL,(-10L),0x330309DAL,0x330309DAL},{0x330309DAL,(-10L),0x330309DAL,0x330309DAL},{0x330309DAL,(-10L),0x330309DAL,0x330309DAL},{0x330309DAL,(-10L),0x330309DAL,0x330309DAL},{0x330309DAL,(-10L),0x330309DAL,0x330309DAL},{0x330309DAL,(-10L),0x330309DAL,0x330309DAL}};
        VECTOR(int8_t, 16) l_586 = (VECTOR(int8_t, 16))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0L), 0L), 0L, 0x1EL, 0L, (VECTOR(int8_t, 2))(0x1EL, 0L), (VECTOR(int8_t, 2))(0x1EL, 0L), 0x1EL, 0L, 0x1EL, 0L);
        VECTOR(int32_t, 4) l_606 = (VECTOR(int32_t, 4))(0x4F17B230L, (VECTOR(int32_t, 2))(0x4F17B230L, 0x255C1596L), 0x255C1596L);
        VECTOR(uint32_t, 4) l_629 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x5FA9A253L), 0x5FA9A253L);
        VECTOR(int32_t, 8) l_658 = (VECTOR(int32_t, 8))(0x06BC38FAL, (VECTOR(int32_t, 4))(0x06BC38FAL, (VECTOR(int32_t, 2))(0x06BC38FAL, (-7L)), (-7L)), (-7L), 0x06BC38FAL, (-7L));
        int i, j;
        if (p_28)
            break;
        for (p_27 = 0; (p_27 > (-27)); p_27 = safe_sub_func_uint16_t_u_u(p_27, 1))
        { /* block id: 251 */
            uint16_t l_516 = 0UL;
            int64_t l_542 = 0L;
            int32_t l_547 = (-1L);
            int32_t l_551 = 0L;
            int32_t l_554 = 2L;
            int32_t l_557 = 0L;
            int32_t l_558[6] = {1L,0x67CFC94DL,1L,1L,0x67CFC94DL,1L};
            int32_t *l_562[6][2] = {{&l_558[2],&l_558[2]},{&l_558[2],&l_558[2]},{&l_558[2],&l_558[2]},{&l_558[2],&l_558[2]},{&l_558[2],&l_558[2]},{&l_558[2],&l_558[2]}};
            VECTOR(uint32_t, 16) l_602 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x14770247L), 0x14770247L), 0x14770247L, 1UL, 0x14770247L, (VECTOR(uint32_t, 2))(1UL, 0x14770247L), (VECTOR(uint32_t, 2))(1UL, 0x14770247L), 1UL, 0x14770247L, 1UL, 0x14770247L);
            VECTOR(uint32_t, 16) l_605 = (VECTOR(uint32_t, 16))(0x069C041BL, (VECTOR(uint32_t, 4))(0x069C041BL, (VECTOR(uint32_t, 2))(0x069C041BL, 5UL), 5UL), 5UL, 0x069C041BL, 5UL, (VECTOR(uint32_t, 2))(0x069C041BL, 5UL), (VECTOR(uint32_t, 2))(0x069C041BL, 5UL), 0x069C041BL, 5UL, 0x069C041BL, 5UL);
            uint32_t l_634 = 0xAB006228L;
            int32_t l_644 = 5L;
            VECTOR(int32_t, 2) l_657 = (VECTOR(int32_t, 2))(0x5D89D200L, (-1L));
            int i, j;
            for (p_1046->g_293 = (-30); (p_1046->g_293 > 19); p_1046->g_293++)
            { /* block id: 254 */
                uint64_t *l_508[2];
                uint8_t *l_511 = (void*)0;
                int32_t l_512 = 0L;
                int8_t *l_524[1][10][4] = {{{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22},{&p_1046->g_359,&p_1046->g_22,&p_1046->g_22,&p_1046->g_22}}};
                int8_t **l_523 = &l_524[0][6][1];
                VECTOR(int32_t, 8) l_530 = (VECTOR(int32_t, 8))(0x1476E90AL, (VECTOR(int32_t, 4))(0x1476E90AL, (VECTOR(int32_t, 2))(0x1476E90AL, (-1L)), (-1L)), (-1L), 0x1476E90AL, (-1L));
                uint32_t l_559[5];
                VECTOR(uint64_t, 16) l_569 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 1UL), 1UL), 1UL, 3UL, 1UL, (VECTOR(uint64_t, 2))(3UL, 1UL), (VECTOR(uint64_t, 2))(3UL, 1UL), 3UL, 1UL, 3UL, 1UL);
                int32_t *l_636 = &l_558[5];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_508[i] = (void*)0;
                for (i = 0; i < 5; i++)
                    l_559[i] = 0xCAED3D70L;
                (1 + 1);
            }
            (**p_1046->g_424) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_656.s4f)).yxyyyyyyxyyyyxyx, ((VECTOR(int32_t, 2))((-3L), 0x24AE1FCBL)).xxxxyyxyyxyyxxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x3D911483L, 0x38816030L)))).yxxyyxyxxyyxxxxy))).s4e37)).hi, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_657.xyyyyyxy)).s7547777011052733)).s37cf, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_658.s6253))))))).odd))))))).lo;
            (*p_1046->g_425) = l_606.w;
        }
    }
    p_28 = ((*p_1046->g_425) = ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_659.sedbe355b9f49c89b)).s5436)).lo, (int32_t)(safe_rshift_func_int16_t_s_s((((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_26 < (*p_1046->g_425)) | ((*l_693) = ((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))((p_26 , p_26), ((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 2))(l_668.s16)), (((*l_669) = 3UL) > ((VECTOR(int16_t, 2))(l_670.yx)).even), 0x02C90B5FL, ((VECTOR(uint32_t, 2))(0x18D52C0DL, 0x086C6254L)), 4294967288UL)), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(l_671.wyzwywxxwzwyxxyw)).s3494, ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_672.wzzz)).lo)), ((VECTOR(uint32_t, 4))(0x97914289L, 0xBFEF5D74L, 0UL, 0x02682F0CL)), 0x2CD33731L)).hi)).hi)).xyyyxxxyxyxyyyyx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_1046->g_673.yxww)).hi)).yxyxyyxyxxxxyxxx, ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(4294967294UL, ((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_674.s1003732461576104)).hi)).s04)), 0x04A23485L)).odd, ((VECTOR(uint32_t, 4))(l_675.s6372)).lo))), 0xFF14E1C3L)).even)), 0x26CFB228L, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(p_1046->g_676.s7106f8e9c3088637)).sb257, ((VECTOR(uint32_t, 4))(l_677.sd688)), ((VECTOR(uint32_t, 2))(p_1046->g_678.s67)).xxxy))), 0x4DFB85BAL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1046->g_679.s636ca2388302be02)).scb)), ((VECTOR(uint32_t, 2))(0UL, 0UL))))), 4294967286UL, 0xEE49B3D5L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x64FA93F9F4D04728L, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(p_1046->g_680.s23)).xxxx))).even, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(1UL, (safe_sub_func_uint16_t_u_u(p_26, (safe_mul_func_int8_t_s_s(((((safe_add_func_int64_t_s_s(1L, ((p_1046->g_691[7][0][1] , &l_518[1]) != (void*)0))) > 6L) & 0x34L) , p_1046->g_673.y), (**p_1046->g_627))))))), p_26)), l_692, 0x4786907F499D654CL, 0L, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 2))(0x4983FAD280ED45DAL)), 0L, 0x0CF6F5444E784FE5L, ((VECTOR(int64_t, 2))(0x33C970ED06A91CA5L)), 0x35544F2AB7EF45DBL, 0x35C4BE57448A87F3L)).s99f7, ((VECTOR(int64_t, 4))(0x6AC821C4A95E28EFL))))).even, ((VECTOR(int64_t, 2))((-8L)))))), ((VECTOR(int64_t, 2))(9L))))), 0x50672363F278B8A3L)).hi)), (-5L), 0x121101178D0D047DL, p_28, 1L, 0L, (-1L))).s3 <= p_26), p_27, 4294967295UL, 1UL)).xzywzwyx)), FAKE_DIVERGE(p_1046->group_2_offset, get_group_id(2), 10), ((VECTOR(uint32_t, 2))(0xACE00128L)), 0xD10FC2DBL)).s7fbc)).zwwxyzzw)).s4, GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 4))(4294967295UL)))), ((VECTOR(uint32_t, 16))(4294967295UL)), ((VECTOR(uint32_t, 16))(4294967288UL)))))))).sd66f))), ((VECTOR(uint32_t, 2))(0x208EBED7L)), 4294967290UL)).s4, p_27)) >= 0L))), p_27)), (**p_1046->g_627))) , p_1046->g_36) == p_1046->g_36), p_1046->g_419)), (int32_t)(*p_1046->g_425)))).hi);
    return p_1046->g_36;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_279 p_1046->g_282 p_1046->g_293 p_1046->g_299 p_1046->g_7 p_1046->g_269 p_1046->g_315 p_1046->g_323 p_1046->g_comm_values p_1046->g_351 p_1046->g_314 p_1046->g_322 p_1046->g_359 p_1046->g_22 p_1046->g_372 p_1046->g_381 p_1046->g_357 p_1046->g_36 p_1046->g_419
 * writes: p_1046->g_293 p_1046->g_299 p_1046->g_7 p_1046->g_315 p_1046->g_269 p_1046->g_323 p_1046->g_351 p_1046->g_357 p_1046->g_358 p_1046->g_359 p_1046->g_314 p_1046->g_419
 */
uint64_t  func_30(int8_t ** p_31, int64_t  p_32, int64_t  p_33, int32_t * p_34, int64_t  p_35, struct S1 * p_1046)
{ /* block id: 128 */
    int32_t l_302 = 0L;
    int8_t l_410 = 8L;
    int32_t *l_412 = &l_302;
    int32_t **l_411 = &l_412;
    VECTOR(int32_t, 4) l_413 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L);
    int32_t *l_414 = (void*)0;
    int32_t *l_415 = &p_1046->g_314;
    int32_t *l_416 = &p_1046->g_7;
    int32_t *l_417[7];
    int i;
    for (i = 0; i < 7; i++)
        l_417[i] = &p_1046->g_7;
    for (p_33 = 15; (p_33 != (-5)); p_33 = safe_sub_func_int8_t_s_s(p_33, 7))
    { /* block id: 131 */
        uint16_t *l_290 = (void*)0;
        uint16_t *l_291 = (void*)0;
        uint16_t *l_292 = &p_1046->g_293;
        uint32_t *l_298 = &p_1046->g_299;
        int32_t l_309 = (-1L);
        (*p_34) = (safe_mod_func_uint8_t_u_u(p_1046->g_279[4], (safe_add_func_int8_t_s_s((((VECTOR(uint64_t, 8))(18446744073709551608UL, 0x50AC7886EC41A83BL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_1046->g_282.se0)).yxxy)), 0xA8E6CCFFFF4A5B1CL, 18446744073709551607UL)).s7 , 0x40L), ((((((l_410 ^= (func_283((func_286(((p_33 == func_288(((((*l_292)--) | ((safe_mod_func_uint32_t_u_u((++(*l_298)), l_302)) >= 0x22E80C13886E8983L)) , (0x4BBEA3A0L & (((p_33 < (func_303(&p_1046->g_22, p_33, p_35, p_1046->g_282.sb, l_309, p_1046) , l_309)) , GROUP_DIVERGE(0, 1)) & 7UL))), p_1046)) <= FAKE_DIVERGE(p_1046->global_2_offset, get_global_id(2), 10)), p_1046) , l_309), l_302, p_1046) | p_1046->g_322[1])) , l_309) == p_1046->g_comm_values[p_1046->tid]) , p_32) >= p_32) > p_32)))));
    }
    (*l_411) = &p_1046->g_314;
    p_1046->g_419++;
    return (*l_415);
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_271
 * writes: p_1046->g_271
 */
uint64_t  func_39(int32_t  p_40, int64_t  p_41, int8_t ** p_42, struct S1 * p_1046)
{ /* block id: 7 */
    int32_t *l_261 = &p_1046->g_7;
    int32_t *l_262 = &p_1046->g_7;
    int32_t *l_263 = (void*)0;
    int32_t *l_264 = &p_1046->g_7;
    int32_t l_265 = (-1L);
    int32_t *l_266[5][5] = {{&l_265,&l_265,&p_1046->g_7,&l_265,&l_265},{&l_265,&l_265,&p_1046->g_7,&l_265,&l_265},{&l_265,&l_265,&p_1046->g_7,&l_265,&l_265},{&l_265,&l_265,&p_1046->g_7,&l_265,&l_265},{&l_265,&l_265,&p_1046->g_7,&l_265,&l_265}};
    int16_t l_270 = 0x0D0AL;
    int i, j;
    if ((atomic_inc(&p_1046->l_atomic_input[39]) == 6))
    { /* block id: 9 */
        int32_t l_43 = 0x56A759F3L;
        int32_t *l_259[6] = {&l_43,&l_43,&l_43,&l_43,&l_43,&l_43};
        int32_t *l_260[5] = {&l_43,&l_43,&l_43,&l_43,&l_43};
        int i;
        for (l_43 = (-23); (l_43 < (-25)); l_43 = safe_sub_func_uint8_t_u_u(l_43, 8))
        { /* block id: 12 */
            int32_t l_46 = 0x37DC4B54L;
            int32_t l_251 = 1L;
            int32_t l_252 = (-2L);
            uint32_t l_253 = 0x87219A0BL;
            uint16_t l_256[8] = {0x099EL,0x099EL,0x099EL,0x099EL,0x099EL,0x099EL,0x099EL,0x099EL};
            int i;
            for (l_46 = (-25); (l_46 < (-27)); l_46--)
            { /* block id: 15 */
                union U0 l_49[8] = {{-2L},{-2L},{-2L},{-2L},{-2L},{-2L},{-2L},{-2L}};
                int16_t l_50 = 0x2E7DL;
                int64_t l_213 = 8L;
                int i;
                if ((l_49[6] , l_50))
                { /* block id: 16 */
                    VECTOR(int32_t, 4) l_51 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5762CC68L), 0x5762CC68L);
                    uint16_t l_52 = 0x82E7L;
                    int32_t l_53 = 1L;
                    VECTOR(uint32_t, 16) l_54 = (VECTOR(uint32_t, 16))(0x6A8E7E64L, (VECTOR(uint32_t, 4))(0x6A8E7E64L, (VECTOR(uint32_t, 2))(0x6A8E7E64L, 1UL), 1UL), 1UL, 0x6A8E7E64L, 1UL, (VECTOR(uint32_t, 2))(0x6A8E7E64L, 1UL), (VECTOR(uint32_t, 2))(0x6A8E7E64L, 1UL), 0x6A8E7E64L, 1UL, 0x6A8E7E64L, 1UL);
                    int64_t l_55[5][9][5] = {{{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L}},{{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L}},{{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L}},{{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L}},{{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L},{(-1L),0x40A206E71D51AD8FL,0x24358B9E0795B172L,1L,0x24358B9E0795B172L}}};
                    VECTOR(int32_t, 4) l_56 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                    uint8_t l_57 = 0xC7L;
                    uint64_t l_58 = 0x99E236B79BA4D29FL;
                    int i, j, k;
                    l_58 |= ((VECTOR(int32_t, 8))(0x6B2CFB11L, ((l_52 = ((VECTOR(int32_t, 4))(l_51.xxzz)).w) , (l_53 , (l_55[2][8][4] = l_54.s3))), ((VECTOR(int32_t, 2))(l_56.yy)), ((VECTOR(int32_t, 4))(0x72F777BDL, l_57, (-1L), 2L)))).s3;
                    for (l_53 = 6; (l_53 != (-7)); l_53 = safe_sub_func_uint64_t_u_u(l_53, 2))
                    { /* block id: 22 */
                        int32_t l_62 = 0x633F4C62L;
                        int32_t *l_61 = &l_62;
                        int32_t *l_63 = &l_62;
                        int32_t *l_64 = &l_62;
                        VECTOR(int32_t, 4) l_65 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7097794FL), 0x7097794FL);
                        VECTOR(int32_t, 2) l_66 = (VECTOR(int32_t, 2))(0x41744B85L, 0L);
                        int64_t l_67[2];
                        VECTOR(int32_t, 2) l_68 = (VECTOR(int32_t, 2))(0x0A5FB02CL, 0x1CFEE841L);
                        VECTOR(int32_t, 16) l_69 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x2358462BL), 0x2358462BL), 0x2358462BL, (-4L), 0x2358462BL, (VECTOR(int32_t, 2))((-4L), 0x2358462BL), (VECTOR(int32_t, 2))((-4L), 0x2358462BL), (-4L), 0x2358462BL, (-4L), 0x2358462BL);
                        VECTOR(int32_t, 2) l_70 = (VECTOR(int32_t, 2))(6L, 0x7B4EC183L);
                        uint32_t l_71 = 0x7EB49816L;
                        VECTOR(int32_t, 2) l_72 = (VECTOR(int32_t, 2))((-1L), 0x54FE02E2L);
                        uint64_t l_73[7];
                        int32_t l_74 = 0x4D26467EL;
                        uint64_t l_75 = 18446744073709551609UL;
                        uint64_t l_76 = 0xA122FC4CEA799ADAL;
                        VECTOR(int32_t, 16) l_77 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x16363166L), 0x16363166L), 0x16363166L, 4L, 0x16363166L, (VECTOR(int32_t, 2))(4L, 0x16363166L), (VECTOR(int32_t, 2))(4L, 0x16363166L), 4L, 0x16363166L, 4L, 0x16363166L);
                        uint32_t l_78 = 0x6DA865B3L;
                        int16_t l_79 = 0x4620L;
                        int32_t l_80[4][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_67[i] = 0x35E52A12E219839BL;
                        for (i = 0; i < 7; i++)
                            l_73[i] = 8UL;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_80[i][j] = (-1L);
                        }
                        l_64 = (l_63 = l_61);
                        l_51.z = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_65.wzzwwwzw)).even, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_66.xyyyyyxy)), ((VECTOR(int32_t, 8))(l_67[1], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_68.xyyy)).lo)), 1L, 1L)).y, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_69.sd54e)).wzxwwwxzzzxxwywx)).s4f, ((VECTOR(int32_t, 2))(l_70.yy))))), l_71, 0x766B1C03L, (-7L), 0x11F6BCDCL))))), ((VECTOR(int32_t, 8))(l_72.xyxxyyyy)), ((VECTOR(int32_t, 8))((-1L), l_73[3], l_74, (l_75 , l_76), 0x4B066DBBL, (-1L), 0x49F03B65L, 1L))))).even))))), ((VECTOR(int32_t, 4))(l_77.s4a10))))))).xyzyxwwxyzywyzzw, (int32_t)l_78, (int32_t)(-7L)))).s34f6)).y;
                        l_80[3][0] = l_79;
                        l_56.z = (l_51.w |= ((*l_63) = 0x6A99605DL));
                    }
                    for (l_52 = 0; (l_52 < 58); l_52 = safe_add_func_uint32_t_u_u(l_52, 2))
                    { /* block id: 33 */
                        VECTOR(int32_t, 16) l_83 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int32_t, 2))((-3L), 1L), (VECTOR(int32_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
                        int8_t l_84 = 1L;
                        uint16_t l_85 = 65528UL;
                        VECTOR(int32_t, 8) l_86 = (VECTOR(int32_t, 8))(0x61754165L, (VECTOR(int32_t, 4))(0x61754165L, (VECTOR(int32_t, 2))(0x61754165L, 0x6832032BL), 0x6832032BL), 0x6832032BL, 0x61754165L, 0x6832032BL);
                        uint32_t l_87 = 0x46617F50L;
                        VECTOR(uint8_t, 2) l_88 = (VECTOR(uint8_t, 2))(5UL, 252UL);
                        int i;
                        l_56.y = (((l_85 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x11A8DCBCL, (-1L), 0x727A2C14L, ((VECTOR(int32_t, 4))((-1L), 1L, (-10L), (-3L))), 1L, 0x264A4A93L, ((VECTOR(int32_t, 4))(l_83.sd786)), 0x241C05FAL, 0x798DCA0FL, 3L)).sb, l_84, (-1L), 0x11EE60EBL)).y) , ((VECTOR(int32_t, 16))(l_86.s1763662765363555)).sa) , (l_51.w = ((l_87 , 1L) , (-7L))));
                        l_56.y = (l_88.y , ((VECTOR(int32_t, 2))((-4L), 0x7389711EL)).hi);
                    }
                    for (l_53 = (-18); (l_53 >= (-5)); l_53 = safe_add_func_int16_t_s_s(l_53, 1))
                    { /* block id: 41 */
                        int32_t l_92 = 1L;
                        int32_t *l_91 = &l_92;
                        int32_t *l_93 = &l_92;
                        int32_t *l_94[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_94[i] = &l_92;
                        l_91 = (void*)0;
                        l_94[2] = l_93;
                    }
                }
                else
                { /* block id: 45 */
                    uint8_t l_95 = 0xFFL;
                    uint16_t l_104 = 0xFAE3L;
                    int8_t l_105[4][8] = {{0x72L,0x45L,0x28L,(-10L),0x45L,(-10L),0x28L,0x45L},{0x72L,0x45L,0x28L,(-10L),0x45L,(-10L),0x28L,0x45L},{0x72L,0x45L,0x28L,(-10L),0x45L,(-10L),0x28L,0x45L},{0x72L,0x45L,0x28L,(-10L),0x45L,(-10L),0x28L,0x45L}};
                    VECTOR(int32_t, 4) l_106 = (VECTOR(int32_t, 4))(0x01D58953L, (VECTOR(int32_t, 2))(0x01D58953L, 0x715932AAL), 0x715932AAL);
                    uint32_t l_107 = 4294967295UL;
                    VECTOR(int32_t, 16) l_108 = (VECTOR(int32_t, 16))(0x3385C65EL, (VECTOR(int32_t, 4))(0x3385C65EL, (VECTOR(int32_t, 2))(0x3385C65EL, (-1L)), (-1L)), (-1L), 0x3385C65EL, (-1L), (VECTOR(int32_t, 2))(0x3385C65EL, (-1L)), (VECTOR(int32_t, 2))(0x3385C65EL, (-1L)), 0x3385C65EL, (-1L), 0x3385C65EL, (-1L));
                    VECTOR(int32_t, 8) l_109 = (VECTOR(int32_t, 8))(0x6B4A2447L, (VECTOR(int32_t, 4))(0x6B4A2447L, (VECTOR(int32_t, 2))(0x6B4A2447L, 0x3D39C2E6L), 0x3D39C2E6L), 0x3D39C2E6L, 0x6B4A2447L, 0x3D39C2E6L);
                    VECTOR(int32_t, 16) l_110 = (VECTOR(int32_t, 16))(0x686379E6L, (VECTOR(int32_t, 4))(0x686379E6L, (VECTOR(int32_t, 2))(0x686379E6L, 0x76A14961L), 0x76A14961L), 0x76A14961L, 0x686379E6L, 0x76A14961L, (VECTOR(int32_t, 2))(0x686379E6L, 0x76A14961L), (VECTOR(int32_t, 2))(0x686379E6L, 0x76A14961L), 0x686379E6L, 0x76A14961L, 0x686379E6L, 0x76A14961L);
                    VECTOR(int32_t, 8) l_111 = (VECTOR(int32_t, 8))(0x5408D08FL, (VECTOR(int32_t, 4))(0x5408D08FL, (VECTOR(int32_t, 2))(0x5408D08FL, 0x56E8A3BFL), 0x56E8A3BFL), 0x56E8A3BFL, 0x5408D08FL, 0x56E8A3BFL);
                    uint64_t l_112 = 18446744073709551615UL;
                    int32_t *l_145 = (void*)0;
                    int32_t *l_146 = (void*)0;
                    VECTOR(int32_t, 16) l_147 = (VECTOR(int32_t, 16))(0x0EA7C6D6L, (VECTOR(int32_t, 4))(0x0EA7C6D6L, (VECTOR(int32_t, 2))(0x0EA7C6D6L, 0x2567F5F9L), 0x2567F5F9L), 0x2567F5F9L, 0x0EA7C6D6L, 0x2567F5F9L, (VECTOR(int32_t, 2))(0x0EA7C6D6L, 0x2567F5F9L), (VECTOR(int32_t, 2))(0x0EA7C6D6L, 0x2567F5F9L), 0x0EA7C6D6L, 0x2567F5F9L, 0x0EA7C6D6L, 0x2567F5F9L);
                    VECTOR(int32_t, 2) l_148 = (VECTOR(int32_t, 2))(0x68159171L, 3L);
                    VECTOR(int32_t, 16) l_149 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x55C6AC74L), 0x55C6AC74L), 0x55C6AC74L, (-1L), 0x55C6AC74L, (VECTOR(int32_t, 2))((-1L), 0x55C6AC74L), (VECTOR(int32_t, 2))((-1L), 0x55C6AC74L), (-1L), 0x55C6AC74L, (-1L), 0x55C6AC74L);
                    int8_t l_150 = (-1L);
                    int32_t l_151 = (-1L);
                    VECTOR(uint32_t, 2) l_152 = (VECTOR(uint32_t, 2))(0UL, 0xDA91A525L);
                    uint32_t l_153 = 4294967295UL;
                    uint32_t l_154 = 0xDD029318L;
                    uint16_t l_155 = 3UL;
                    int8_t l_156 = 0x07L;
                    VECTOR(int8_t, 2) l_157 = (VECTOR(int8_t, 2))(0x30L, 0x57L);
                    VECTOR(uint64_t, 4) l_158 = (VECTOR(uint64_t, 4))(0x28050347C12E575AL, (VECTOR(uint64_t, 2))(0x28050347C12E575AL, 0xCB9E1FED7957FE21L), 0xCB9E1FED7957FE21L);
                    VECTOR(uint64_t, 2) l_159 = (VECTOR(uint64_t, 2))(1UL, 1UL);
                    VECTOR(uint64_t, 4) l_160 = (VECTOR(uint64_t, 4))(0xC3B98C0DEAB1E3EFL, (VECTOR(uint64_t, 2))(0xC3B98C0DEAB1E3EFL, 0x15CE6520A05F7AC1L), 0x15CE6520A05F7AC1L);
                    uint16_t l_161 = 0x7227L;
                    VECTOR(uint64_t, 8) l_162 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD678DBA8A70E696EL), 0xD678DBA8A70E696EL), 0xD678DBA8A70E696EL, 18446744073709551615UL, 0xD678DBA8A70E696EL);
                    VECTOR(uint64_t, 4) l_163 = (VECTOR(uint64_t, 4))(0xA6638CA9B3D71B04L, (VECTOR(uint64_t, 2))(0xA6638CA9B3D71B04L, 0xFC4D6C543C7B79E9L), 0xFC4D6C543C7B79E9L);
                    VECTOR(uint64_t, 4) l_164 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xB4E128B6DCFAA13AL), 0xB4E128B6DCFAA13AL);
                    VECTOR(uint64_t, 16) l_165 = (VECTOR(uint64_t, 16))(0x8106815FF81F1C5DL, (VECTOR(uint64_t, 4))(0x8106815FF81F1C5DL, (VECTOR(uint64_t, 2))(0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L), 0x358A6C8DEDF79517L), 0x358A6C8DEDF79517L, 0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L, (VECTOR(uint64_t, 2))(0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L), (VECTOR(uint64_t, 2))(0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L), 0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L, 0x8106815FF81F1C5DL, 0x358A6C8DEDF79517L);
                    VECTOR(uint64_t, 8) l_166 = (VECTOR(uint64_t, 8))(0x860E4E38252909BAL, (VECTOR(uint64_t, 4))(0x860E4E38252909BAL, (VECTOR(uint64_t, 2))(0x860E4E38252909BAL, 0x912AE39DF6DFC4E5L), 0x912AE39DF6DFC4E5L), 0x912AE39DF6DFC4E5L, 0x860E4E38252909BAL, 0x912AE39DF6DFC4E5L);
                    VECTOR(uint64_t, 2) l_167 = (VECTOR(uint64_t, 2))(0UL, 0x217EF71F425CC560L);
                    VECTOR(uint64_t, 4) l_168 = (VECTOR(uint64_t, 4))(0x5BF82136C564025EL, (VECTOR(uint64_t, 2))(0x5BF82136C564025EL, 0xFDA3C6B0DC29E298L), 0xFDA3C6B0DC29E298L);
                    VECTOR(uint64_t, 2) l_169 = (VECTOR(uint64_t, 2))(0UL, 0x324DFF55E27A0AEBL);
                    int64_t l_170 = 7L;
                    VECTOR(uint64_t, 16) l_171 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xAD097FBBC7000DFBL), 0xAD097FBBC7000DFBL), 0xAD097FBBC7000DFBL, 18446744073709551606UL, 0xAD097FBBC7000DFBL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xAD097FBBC7000DFBL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xAD097FBBC7000DFBL), 18446744073709551606UL, 0xAD097FBBC7000DFBL, 18446744073709551606UL, 0xAD097FBBC7000DFBL);
                    VECTOR(uint64_t, 4) l_172 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 6UL), 6UL);
                    VECTOR(uint64_t, 16) l_173 = (VECTOR(uint64_t, 16))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 0x6B0B576518F1467FL), 0x6B0B576518F1467FL), 0x6B0B576518F1467FL, 5UL, 0x6B0B576518F1467FL, (VECTOR(uint64_t, 2))(5UL, 0x6B0B576518F1467FL), (VECTOR(uint64_t, 2))(5UL, 0x6B0B576518F1467FL), 5UL, 0x6B0B576518F1467FL, 5UL, 0x6B0B576518F1467FL);
                    uint16_t l_174 = 0xE6ADL;
                    VECTOR(uint64_t, 8) l_177 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4DC4D7926888C05FL), 0x4DC4D7926888C05FL), 0x4DC4D7926888C05FL, 18446744073709551615UL, 0x4DC4D7926888C05FL);
                    VECTOR(uint64_t, 2) l_178 = (VECTOR(uint64_t, 2))(0xA442AE9B445DA4C0L, 18446744073709551615UL);
                    uint32_t l_179 = 0xED5C099BL;
                    VECTOR(uint64_t, 16) l_180 = (VECTOR(uint64_t, 16))(0x95E9E3D29711FA60L, (VECTOR(uint64_t, 4))(0x95E9E3D29711FA60L, (VECTOR(uint64_t, 2))(0x95E9E3D29711FA60L, 0x79C855315CE64B58L), 0x79C855315CE64B58L), 0x79C855315CE64B58L, 0x95E9E3D29711FA60L, 0x79C855315CE64B58L, (VECTOR(uint64_t, 2))(0x95E9E3D29711FA60L, 0x79C855315CE64B58L), (VECTOR(uint64_t, 2))(0x95E9E3D29711FA60L, 0x79C855315CE64B58L), 0x95E9E3D29711FA60L, 0x79C855315CE64B58L, 0x95E9E3D29711FA60L, 0x79C855315CE64B58L);
                    union U0 l_181 = {0x3F7EL};/* VOLATILE GLOBAL l_181 */
                    int8_t l_182 = 0x7EL;
                    int16_t l_183 = 0x11BDL;
                    uint8_t l_184[8];
                    uint64_t l_185 = 0x3BD1F3727B0FE012L;
                    union U0 l_186 = {0x6ED5L};/* VOLATILE GLOBAL l_186 */
                    int64_t l_187 = (-1L);
                    VECTOR(int64_t, 8) l_188 = (VECTOR(int64_t, 8))(0x02A8A9666FFBF402L, (VECTOR(int64_t, 4))(0x02A8A9666FFBF402L, (VECTOR(int64_t, 2))(0x02A8A9666FFBF402L, (-1L)), (-1L)), (-1L), 0x02A8A9666FFBF402L, (-1L));
                    uint16_t l_189 = 65534UL;
                    int64_t l_190 = 1L;
                    int i, j;
                    for (i = 0; i < 8; i++)
                        l_184[i] = 2UL;
                    if (l_95)
                    { /* block id: 46 */
                        int32_t l_96 = 0L;
                        int8_t l_97 = 0x24L;
                        VECTOR(uint32_t, 4) l_98 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xB2D93A86L), 0xB2D93A86L);
                        uint64_t l_99 = 0xBDE3C26F71A791DEL;
                        int32_t l_100[6] = {0x765359DEL,0L,0x765359DEL,0x765359DEL,0L,0x765359DEL};
                        int i;
                        l_98.y ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(0x5E15252EL, 0x5914D98EL, 0x79FF8A60L, l_96, l_97, 1L, (-9L), 0L)).s2555567216441542))).hi)).s4;
                        l_100[0] ^= l_99;
                    }
                    else
                    { /* block id: 49 */
                        uint16_t l_101 = 0xD9A5L;
                        uint8_t l_102 = 0xD1L;
                        int16_t l_103 = 0x0091L;
                        l_103 = (l_102 |= (l_101 &= 3L));
                    }
                    if (((l_104 = 0x43F8L) , (l_105[2][0] , (l_112 &= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x7ACCF6E1L, ((VECTOR(int32_t, 4))(l_106.zwww)), l_107, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_108.s3421)).xzxyxxzy, ((VECTOR(int32_t, 8))(l_109.s14405170))))), ((VECTOR(int32_t, 2))(l_110.sc1)).xxyyyyyy))), 0x5A15C47AL, (-1L))))), ((VECTOR(int32_t, 16))(l_111.s7234261614154550))))).s0))))
                    { /* block id: 56 */
                        VECTOR(int32_t, 8) l_113 = (VECTOR(int32_t, 8))(0x091FE2E2L, (VECTOR(int32_t, 4))(0x091FE2E2L, (VECTOR(int32_t, 2))(0x091FE2E2L, 0L), 0L), 0L, 0x091FE2E2L, 0L);
                        VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(7L, 0L);
                        VECTOR(int32_t, 2) l_115 = (VECTOR(int32_t, 2))(0x209B0CDCL, 4L);
                        VECTOR(int32_t, 4) l_116 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 9L), 9L);
                        VECTOR(int32_t, 2) l_117 = (VECTOR(int32_t, 2))(0L, (-7L));
                        VECTOR(int32_t, 4) l_118 = (VECTOR(int32_t, 4))(0x42572027L, (VECTOR(int32_t, 2))(0x42572027L, 0x622751ADL), 0x622751ADL);
                        VECTOR(int32_t, 16) l_119 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                        VECTOR(int32_t, 4) l_120 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L);
                        VECTOR(int32_t, 8) l_121 = (VECTOR(int32_t, 8))(0x039C7493L, (VECTOR(int32_t, 4))(0x039C7493L, (VECTOR(int32_t, 2))(0x039C7493L, 0x0C18A675L), 0x0C18A675L), 0x0C18A675L, 0x039C7493L, 0x0C18A675L);
                        VECTOR(int32_t, 8) l_122 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                        int32_t l_123[4][8] = {{4L,0x31E4377CL,0L,0L,0x31E4377CL,0L,0L,0x31E4377CL},{4L,0x31E4377CL,0L,0L,0x31E4377CL,0L,0L,0x31E4377CL},{4L,0x31E4377CL,0L,0L,0x31E4377CL,0L,0L,0x31E4377CL},{4L,0x31E4377CL,0L,0L,0x31E4377CL,0L,0L,0x31E4377CL}};
                        VECTOR(int32_t, 4) l_124 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4F9A3E39L), 0x4F9A3E39L);
                        int32_t l_125 = 0x45614CE6L;
                        uint16_t l_126 = 0x6FD7L;
                        int64_t l_127 = 0x5DF793C2613D90FEL;
                        uint32_t l_128 = 0x1BC71CFCL;
                        int16_t l_129 = 0x68EAL;
                        VECTOR(uint32_t, 16) l_130 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x8217DE88L), 0x8217DE88L), 0x8217DE88L, 4294967295UL, 0x8217DE88L, (VECTOR(uint32_t, 2))(4294967295UL, 0x8217DE88L), (VECTOR(uint32_t, 2))(4294967295UL, 0x8217DE88L), 4294967295UL, 0x8217DE88L, 4294967295UL, 0x8217DE88L);
                        VECTOR(int32_t, 4) l_131 = (VECTOR(int32_t, 4))(0x1F1C35A1L, (VECTOR(int32_t, 2))(0x1F1C35A1L, 0x1EC3C314L), 0x1EC3C314L);
                        VECTOR(int32_t, 4) l_132 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L));
                        int16_t l_133 = 0x50C7L;
                        int16_t l_134[9] = {0L,1L,0L,0L,1L,0L,0L,1L,0L};
                        uint32_t l_135 = 0x2165D240L;
                        VECTOR(int32_t, 2) l_136 = (VECTOR(int32_t, 2))(0L, 0x08AECDC9L);
                        uint64_t l_137[3];
                        uint16_t l_138 = 65535UL;
                        uint16_t l_139 = 0UL;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_137[i] = 18446744073709551613UL;
                        l_111.s2 ^= (l_110.sb &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_113.s2277)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_114.yyxx)).xxzxyxwywxzzyzzz)).sdd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_115.yxxx)))).lo))), ((VECTOR(int32_t, 2))(0L, 0x123EC837L))))).yxxyxyyy)).lo, (int32_t)(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_116.yxxx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_117.yyyyyxyy)).s3225007233620046, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_118.xzxw)), ((VECTOR(int32_t, 8))(l_119.s0ea39184)).even))).yywxwyxz)).even)).yxyxxzzyyxxxwxxx))).s9bae)).wwyzyyzxwzyyzyzy, ((VECTOR(int32_t, 8))(0x57DD34D8L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x36573C08L, ((VECTOR(int32_t, 2))(0x41016036L, 0x31387556L)), 0x1ABB1F74L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(0x4B0E1CB3L, ((VECTOR(int32_t, 2))(l_120.xz)), (-8L))).wxxzxwwzwwwywxwz, ((VECTOR(int32_t, 16))(l_121.s7314351073116743))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_122.s5764)), (GROUP_DIVERGE(1, 1) , l_123[2][5]), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x608D486CL)).even, ((VECTOR(int32_t, 2))(0x6068C90CL, 0L)), 0x4B1CE7FFL)).wxywzwyw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_124.wy)), l_125, 1L, 0x59ACFF28L, (l_129 = ((l_127 = l_126) , (l_49[6].f2 = l_128))), 0x417789D2L, (((VECTOR(uint32_t, 8))(l_130.s1ea7a179)).s1 , 0x64D038AAL), 1L, ((VECTOR(int32_t, 4))(0x7AC94198L, 3L, 0x0816E1F8L, 1L)), ((VECTOR(int32_t, 16))(l_131.zxzyxxzwwwxwxyyx)).s4, 0L, 3L)).s1d, ((VECTOR(int32_t, 4))(l_132.zwyz)).lo))).yxxyyyxyxxyxyyxx)).hi, ((VECTOR(int32_t, 8))((l_49[6].f2 = (l_133 |= 0x02FEA0A8L)), ((VECTOR(int32_t, 2))(0x189BE62DL)), l_134[1], l_135, 0x245C51EAL, 1L, 1L))))).s20))).xyxx)).odd)), 0x10FE33B6L)))).s1265770522037511))).s0524, ((VECTOR(int32_t, 4))(0x49024B7AL))))), ((VECTOR(int32_t, 4))(0x2880BC6DL))))), l_136.x, ((VECTOR(int32_t, 2))(0L)), 0x7757BED9L, ((VECTOR(int32_t, 2))(0x1D1CEF0AL)), 0x219EB458L, 0L)).s5945)))), l_137[2], l_138, 0x7AF14CE2L, 0x6266AF2FL)).s06)), 0x30324E9DL, ((VECTOR(int32_t, 2))(0x75F59378L)), 0L)).s6174636537354001))).s0362)).xzywwxzzyzxxywyw, ((VECTOR(int32_t, 16))(0x347ABF41L))))))).s0f04))))), ((VECTOR(int32_t, 4))(3L))))))).y , 0x07A8E80DL)))).w);
                        l_109.s7 = (l_110.sc = l_139);
                    }
                    else
                    { /* block id: 66 */
                        VECTOR(int32_t, 2) l_140 = (VECTOR(int32_t, 2))((-1L), 0L);
                        int8_t l_141[7] = {4L,4L,4L,4L,4L,4L,4L};
                        uint8_t l_142 = 255UL;
                        int i;
                        l_111.s2 |= ((VECTOR(int32_t, 8))(l_140.yyyyyyyx)).s5;
                        --l_142;
                    }
                    l_145 = (l_146 = l_145);
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_147.sc350)))), ((VECTOR(int32_t, 4))(l_148.yyyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), 1L, ((VECTOR(int32_t, 4))(l_149.s1e85)), 1L, 0x4A00EA68L)))).s41, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(0x0193L, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-4L), l_150, ((l_152.y ^= l_151) , l_153), (-5L), (l_156 = (l_154 , l_155)), ((VECTOR(int8_t, 2))(l_157.yy)), 8L)).lo)).wzwzxxzy, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(l_158.wxwy)), ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_159.yxyxxxyy)).lo)).hi, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0xCB9A90DBD7C481DAL, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_160.wz)), l_161, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_162.s2543)))), 0x905584143BCCA17BL)).s01, ((VECTOR(uint64_t, 2))(l_163.wz))))), 0xFE76519DB94EEF04L)).xwxxzywxwzxxywzx)).s6d27)), (l_162.s3 ^= GROUP_DIVERGE(2, 1)), ((VECTOR(uint64_t, 2))(1UL, 0xB37185AD0F761038L)), 0x23372CC0702C48DBL)).s37, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_164.yy)), 0x10CBC175E5F06EB5L, 0xB20A924ABB9B91C4L)).yxwwxzwx))).s77))))).xyxxxxxy, ((VECTOR(uint64_t, 16))(l_165.sd8bd1d58cd3d53b0)).hi))).hi, ((VECTOR(uint64_t, 4))(l_166.s2363))))), ((VECTOR(uint64_t, 2))(l_167.xx)), 9UL, ((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 16))(l_168.xyzxxzxxzyzwwwwy)).even, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_169.xx)), 7UL, 0x979E62369411491AL, GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 2))(0x7201F38D1871B915L, 4UL)), 18446744073709551606UL))))), 0xCF694FA6B8BF16BDL)).s3ac7, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_170, 18446744073709551615UL, 0x5809B3B63D6E52BDL, 0xB656643B3FE90797L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_171.s2d179703896e17eb)).s0471)))).s00)).yxxx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(l_172.yz)).xyxyxxyyxxyxyyyx, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(l_173.s0ab97504)), ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((++l_174), 0xED9ACA4354AD2E39L, 0UL, 18446744073709551606UL)).wxzxyzywwywwyywz)).s22dd)), ((VECTOR(uint64_t, 2))(l_177.s35)), ((VECTOR(uint64_t, 4))(l_178.yxyx)), 4UL, 1UL, (l_179 , ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_180.s74)))), ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))((l_181 , 0xFBD1E1DB443416D6L), l_182, 18446744073709551615UL, 18446744073709551609UL, ((VECTOR(uint64_t, 4))(18446744073709551613UL)), 0UL, ((VECTOR(uint64_t, 4))(2UL)), l_183, 0x1EBDC434A214248CL, 0x1116317C229614BAL)).s55, ((VECTOR(uint64_t, 2))(0x1732A5C8871E699FL))))), l_184[2], l_185, 0x19A00E8144AFDD00L, ((VECTOR(uint64_t, 2))(0xCC88130779B6EA8FL)), 0UL)).s2152574125062432)), ((VECTOR(uint64_t, 16))(1UL)), ((VECTOR(uint64_t, 16))(0x4925829D655A31A0L))))).odd, ((VECTOR(uint64_t, 8))(0UL))))).s43, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).lo), 18446744073709551615UL, 0xC5A6CC17CFA881E8L, 6UL)).hi)).s6007402143030150, ((VECTOR(uint64_t, 16))(8UL))))).lo))).s6705455061551166, ((VECTOR(uint64_t, 16))(6UL))))), ((VECTOR(uint64_t, 16))(0x4A7B01F773235E0EL)), ((VECTOR(uint64_t, 16))(0xB4870F3924317F4EL))))).s93)).yyyx))).odd))).yxyy))).zxwwyyyx, ((VECTOR(uint64_t, 8))(1UL))))).s1 , l_186) , 0x56L), ((VECTOR(int8_t, 2))(0x75L)), l_187, ((VECTOR(int8_t, 2))(0x75L)), (-1L), 0x39L)).s32)), (-8L), (-1L))), ((VECTOR(int8_t, 4))(0L))))).zwzxxzxy)).s31, ((VECTOR(int8_t, 2))(9L))))), ((VECTOR(int8_t, 2))(0x2DL))))).yxyxyyxx)))).s00, ((VECTOR(int8_t, 2))(0x48L))))).yxxx)).odd)))))), ((VECTOR(int8_t, 2))(0x44L))))), 1L)).even, ((VECTOR(int8_t, 2))(1L))))).xyyxyxyx))), l_188.s2, l_189, l_190, 0x26L, ((VECTOR(int8_t, 4))((-9L))))).sc35c, ((VECTOR(uint8_t, 4))(1UL))))), ((VECTOR(int16_t, 4))(0x0DD3L))))), ((VECTOR(int16_t, 2))(0x3A8EL)), 0x6A67L)).odd)).wwxyxwxx)).s14)).yxxyyxyxxyyxxyyy, ((VECTOR(int16_t, 16))((-10L)))))).s2c)).yxyyxyxxxyxyyyxx)).s5f, ((VECTOR(uint16_t, 2))(65535UL))))).yxyy, ((VECTOR(int32_t, 4))(0x2DA117F8L))))).hi, ((VECTOR(int32_t, 2))(0x1F135EEAL)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x1754566BL))))), ((VECTOR(int32_t, 2))((-9L)))))).yyyyxxxy)))).se84d)).zzwxzzzx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(0x69D018CBL))))).lo, ((VECTOR(int32_t, 4))((-8L)))))), 0L, 0x606A0C2DL, 0x6E228729L, 1L)))).even)).z)
                    { /* block id: 76 */
                        int32_t l_192[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                        int32_t *l_191 = &l_192[7];
                        int64_t l_193[9] = {0x53B09A29ADE397EFL,(-1L),0x53B09A29ADE397EFL,0x53B09A29ADE397EFL,(-1L),0x53B09A29ADE397EFL,0x53B09A29ADE397EFL,(-1L),0x53B09A29ADE397EFL};
                        uint8_t l_194 = 0xA1L;
                        uint64_t l_195[9][4] = {{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL},{0xB7BD85AF14D8A2F0L,0xB7BD85AF14D8A2F0L,0UL,0UL}};
                        int8_t l_196 = (-1L);
                        VECTOR(uint8_t, 16) l_197 = (VECTOR(uint8_t, 16))(0x0EL, (VECTOR(uint8_t, 4))(0x0EL, (VECTOR(uint8_t, 2))(0x0EL, 0xBDL), 0xBDL), 0xBDL, 0x0EL, 0xBDL, (VECTOR(uint8_t, 2))(0x0EL, 0xBDL), (VECTOR(uint8_t, 2))(0x0EL, 0xBDL), 0x0EL, 0xBDL, 0x0EL, 0xBDL);
                        VECTOR(int64_t, 8) l_198 = (VECTOR(int64_t, 8))(0x5DFBCA2AA58F5251L, (VECTOR(int64_t, 4))(0x5DFBCA2AA58F5251L, (VECTOR(int64_t, 2))(0x5DFBCA2AA58F5251L, 0x5ED7D3D8F780C5D1L), 0x5ED7D3D8F780C5D1L), 0x5ED7D3D8F780C5D1L, 0x5DFBCA2AA58F5251L, 0x5ED7D3D8F780C5D1L);
                        uint64_t l_199 = 2UL;
                        uint16_t l_200 = 0x859DL;
                        int32_t *l_201 = &l_192[4];
                        int32_t *l_202 = (void*)0;
                        int32_t *l_203 = &l_192[6];
                        int i, j;
                        l_146 = l_191;
                        l_202 = (l_145 = ((l_195[6][1] = (l_194 = l_193[8])) , (((((VECTOR(uint8_t, 4))(l_196, ((VECTOR(uint8_t, 2))(l_197.s49)), 0xFEL)).x , 18446744073709551615UL) , ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(l_198.s4450)).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_199, 1L, (-1L), 0x22EAAC3ADBA4F410L)).lo))))).even) , ((l_200 , (-1L)) , (l_146 = l_201)))));
                        l_146 = (void*)0;
                        l_203 = (void*)0;
                    }
                    else
                    { /* block id: 85 */
                        uint64_t l_204 = 0UL;
                        int32_t *l_207 = (void*)0;
                        uint64_t l_208[6][4][1] = {{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}},{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}},{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}},{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}},{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}},{{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL},{0x1E64B3CA6587263DL}}};
                        uint32_t l_209 = 4294967294UL;
                        int32_t l_210 = (-1L);
                        int8_t l_211 = 0x52L;
                        uint32_t l_212 = 0xA7E6A233L;
                        int i, j, k;
                        l_204--;
                        l_145 = (l_146 = l_207);
                        l_146 = (l_145 = (void*)0);
                        l_106.y = (((l_208[5][0][0] , (l_211 = (l_209 , (l_107 = l_210)))) , 1L) , l_212);
                    }
                }
                if ((l_213 ^= 0L))
                { /* block id: 97 */
                    int32_t l_214 = 0x78A3B0ECL;
                    uint32_t l_241 = 0x545C0055L;
                    int16_t l_242 = 1L;
                    uint32_t l_243 = 0xF3F6BD6BL;
                    int32_t l_244 = 0x114F0B8EL;
                    for (l_214 = 16; (l_214 != 11); l_214 = safe_sub_func_uint32_t_u_u(l_214, 8))
                    { /* block id: 100 */
                        VECTOR(uint32_t, 4) l_217 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 1UL), 1UL);
                        union U0 l_218 = {-9L};/* VOLATILE GLOBAL l_218 */
                        int32_t l_220[2][1];
                        int32_t *l_219 = &l_220[1][0];
                        int32_t *l_221 = &l_220[1][0];
                        uint32_t l_222 = 0xB7DBCEECL;
                        int32_t l_223 = 0x0AD91350L;
                        uint8_t l_224 = 252UL;
                        int32_t *l_225 = (void*)0;
                        int32_t *l_226 = &l_223;
                        uint8_t l_227 = 0UL;
                        int32_t l_228 = 1L;
                        int8_t l_229 = 0x52L;
                        int8_t *l_231 = &l_229;
                        int8_t **l_230 = &l_231;
                        int8_t **l_232 = &l_231;
                        int8_t **l_233 = &l_231;
                        int8_t **l_234 = &l_231;
                        int32_t l_235 = 0x6CBAF1C7L;
                        int32_t l_236 = 0x02CF99B6L;
                        int64_t l_237 = (-3L);
                        uint8_t l_238 = 0x6DL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_220[i][j] = 0L;
                        }
                        l_221 = (((VECTOR(uint32_t, 8))(l_217.wzxywwzw)).s6 , (l_218 , (l_219 = (void*)0)));
                        l_226 = ((l_224 &= (l_222 , l_223)) , l_225);
                        l_234 = (l_233 = (l_227 , ((l_49[6].f1 = 0xF694970FL) , (l_228 , (l_232 = (l_229 , l_230))))));
                        ++l_238;
                    }
                    l_244 ^= (l_243 = (l_241 , l_242));
                }
                else
                { /* block id: 113 */
                    int8_t l_245 = 0x5CL;
                    uint32_t l_246 = 0x777C7878L;
                    int64_t l_249 = 0x069FD2BC7330FED9L;
                    uint32_t l_250 = 0xEA5F8B7EL;
                    l_246--;
                    l_250 ^= l_249;
                }
            }
            ++l_253;
            l_256[1]++;
        }
        l_260[4] = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(3L, 0x7B696B44387E8C34L)), 0x746F688C6C9B1D3DL, 0x3D9C6B668147835CL)).xxxyywxzwxxxyywy)).s3 , (l_259[4] = l_259[4]));
        unsigned int result = 0;
        result += l_43;
        atomic_add(&p_1046->l_special_values[39], result);
    }
    else
    { /* block id: 123 */
        (1 + 1);
    }
    --p_1046->g_271;
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_323 p_1046->g_293 p_1046->g_315 p_1046->g_372 p_1046->g_381 p_1046->g_357 p_1046->g_314 p_1046->g_36 p_1046->g_7 p_1046->g_comm_values p_1046->g_351 p_1046->g_282
 * writes: p_1046->g_323 p_1046->g_293 p_1046->g_315 p_1046->g_299 p_1046->g_314 p_1046->g_351
 */
uint32_t  func_283(uint64_t  p_284, int8_t  p_285, struct S1 * p_1046)
{ /* block id: 156 */
    VECTOR(int8_t, 8) l_374 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x49L), 0x49L), 0x49L, 1L, 0x49L);
    int i;
    for (p_284 = 0; (p_284 == 7); p_284++)
    { /* block id: 159 */
        VECTOR(int8_t, 2) l_373 = (VECTOR(int8_t, 2))(0x11L, 0x59L);
        int32_t l_386 = 9L;
        VECTOR(uint16_t, 16) l_397 = (VECTOR(uint16_t, 16))(0xB209L, (VECTOR(uint16_t, 4))(0xB209L, (VECTOR(uint16_t, 2))(0xB209L, 0x4DBFL), 0x4DBFL), 0x4DBFL, 0xB209L, 0x4DBFL, (VECTOR(uint16_t, 2))(0xB209L, 0x4DBFL), (VECTOR(uint16_t, 2))(0xB209L, 0x4DBFL), 0xB209L, 0x4DBFL, 0xB209L, 0x4DBFL);
        VECTOR(int16_t, 16) l_399 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2B78L), 0x2B78L), 0x2B78L, (-1L), 0x2B78L, (VECTOR(int16_t, 2))((-1L), 0x2B78L), (VECTOR(int16_t, 2))((-1L), 0x2B78L), (-1L), 0x2B78L, (-1L), 0x2B78L);
        int i;
        if ((atomic_inc(&p_1046->g_atomic_input[77 * get_linear_group_id() + 23]) == 4))
        { /* block id: 161 */
            uint16_t l_362 = 0xCF67L;
            --l_362;
            unsigned int result = 0;
            result += l_362;
            atomic_add(&p_1046->g_special_values[77 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 163 */
            (1 + 1);
        }
        for (p_1046->g_323 = 3; (p_1046->g_323 == 39); ++p_1046->g_323)
        { /* block id: 168 */
            int16_t l_390 = (-5L);
            for (p_1046->g_293 = 9; (p_1046->g_293 > 15); p_1046->g_293++)
            { /* block id: 171 */
                uint8_t *l_371 = &p_1046->g_315;
                VECTOR(int8_t, 8) l_382 = (VECTOR(int8_t, 8))(0x0DL, (VECTOR(int8_t, 4))(0x0DL, (VECTOR(int8_t, 2))(0x0DL, 1L), 1L), 1L, 0x0DL, 1L);
                uint16_t l_385 = 0x9BFEL;
                int32_t l_401 = 0x78BA8257L;
                int i;
                if ((safe_mul_func_uint8_t_u_u(((*l_371) |= p_284), ((l_386 = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(0L, 4L)).yyxyxxyxxxxxxyyy, (int8_t)1L))).scc, ((VECTOR(int8_t, 16))(p_1046->g_372.s709e39e3572298c6)).saf))).yxyx, ((VECTOR(int8_t, 16))(l_373.xyxyxxxxxyyyxyxx)).s9c80, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_374.s00)))).yxxy))))).hi)), 6L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(1L, 4)), (safe_mod_func_int64_t_s_s(p_284, (0xA1F1L & ((VECTOR(uint16_t, 4))(p_1046->g_381.xxxx)).x))))), p_284, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_382.s3552411436443723)).s52)), (((((-6L) == ((p_1046->g_357[1][0] < 9L) == 0x1C0306E1L)) <= p_1046->g_372.s1) , (-3L)) | p_1046->g_314), (-7L), ((VECTOR(int8_t, 4))(7L)))).s6224767201574317, (int8_t)8L, (int8_t)p_285))).sf039)), ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 4))(1L))))), ((VECTOR(int8_t, 2))(0x0DL)), 1L, l_385, 0x14L, (-1L), ((VECTOR(int8_t, 2))(0x50L)), 0x6BL, 1L)).s89)), l_382.s6, p_285, p_284, (-1L), (-1L), ((VECTOR(int8_t, 4))((-1L))), 0x10L, 0x33L)).sd) , p_285))))
                { /* block id: 174 */
                    uint32_t l_387 = 0UL;
                    VECTOR(int16_t, 8) l_398 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L));
                    uint32_t *l_400 = &p_1046->g_299;
                    int32_t *l_402 = &p_1046->g_314;
                    int i;
                    (*l_402) = (l_401 &= (0x1E956571L && ((*l_400) = (l_387 >= (safe_lshift_func_uint8_t_u_u(l_390, (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(0UL, 0xCBB0L)).xxxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(0x47BAL, ((VECTOR(uint16_t, 2))(0xE6C6L, 0x3D6BL)), 0UL, 0xDF88L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65532UL, 0xD52DL)).xxxx)), (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((void*)0 == p_1046->g_36), ((void*)0 != &l_390))), 0)), 65535UL, ((VECTOR(uint16_t, 2))(l_397.sb7)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 4))(l_398.s3021)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 4))(l_399.sbeb1)).zyxwwxxxxwyzzxzy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((l_382.s0 || 1L) > p_285), ((VECTOR(int16_t, 2))(0x1E6BL)), 0L)).hi, (int16_t)l_382.s4))).yyyxyxyx)).s5110212317027156, ((VECTOR(int16_t, 16))(0x3A84L))))).sa4cf, ((VECTOR(int16_t, 4))(1L))))).wxzwzzyzxzwyzzxw, ((VECTOR(int16_t, 16))((-8L)))))), ((VECTOR(int16_t, 16))(0x204AL))))).sd8)), ((VECTOR(int16_t, 2))(0x5EEAL))))).yxyxyyyxxyxxyxxy)).sebc6, ((VECTOR(int16_t, 4))(0x22D2L)))))))), ((VECTOR(uint16_t, 2))(0x44ADL)), 1UL, 0x0C3FL)).s46)), 0x036BL)).hi))).odd)).wwwyxzyy, (uint16_t)l_398.s0, (uint16_t)0UL))).s06)))).yxyyxxxx)), ((VECTOR(uint16_t, 8))(2UL))))).s56)).yyyyxxyxxxyyyxyx)).s1c03))).zyzzyyyx, ((VECTOR(uint16_t, 8))(0xB91EL)), ((VECTOR(uint16_t, 8))(0x47ADL))))).s62, ((VECTOR(uint16_t, 2))(7UL))))).odd, p_285))))))));
                }
                else
                { /* block id: 178 */
                    return l_374.s6;
                }
                return p_1046->g_7;
            }
            for (l_390 = 0; (l_390 == (-29)); l_390 = safe_sub_func_uint8_t_u_u(l_390, 7))
            { /* block id: 185 */
                uint16_t l_405 = 0x5A50L;
                l_405 &= (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x4779L, 0xADEFL)))).even == p_1046->g_comm_values[p_1046->tid]);
                for (p_1046->g_351 = 0; (p_1046->g_351 < 28); p_1046->g_351 = safe_add_func_int64_t_s_s(p_1046->g_351, 1))
                { /* block id: 189 */
                    int32_t *l_409 = &p_1046->g_314;
                    int32_t **l_408 = &l_409;
                    (*l_408) = &p_1046->g_314;
                }
            }
        }
        return p_1046->g_282.sd;
    }
    return l_374.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_269 p_1046->g_323 p_1046->g_comm_values p_1046->g_351 p_1046->g_314 p_1046->g_293 p_1046->g_315 p_1046->g_322 p_1046->g_359 p_1046->g_22
 * writes: p_1046->g_269 p_1046->g_323 p_1046->g_351 p_1046->g_293 p_1046->g_7 p_1046->g_315 p_1046->g_357 p_1046->g_358 p_1046->g_359 p_1046->g_314
 */
int16_t  func_286(uint32_t  p_287, struct S1 * p_1046)
{ /* block id: 140 */
    int32_t *l_321[9][2] = {{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314},{&p_1046->g_314,&p_1046->g_314}};
    VECTOR(uint32_t, 16) l_330 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x8990C810L), 0x8990C810L), 0x8990C810L, 4294967291UL, 0x8990C810L, (VECTOR(uint32_t, 2))(4294967291UL, 0x8990C810L), (VECTOR(uint32_t, 2))(4294967291UL, 0x8990C810L), 4294967291UL, 0x8990C810L, 4294967291UL, 0x8990C810L);
    VECTOR(uint32_t, 8) l_331 = (VECTOR(uint32_t, 8))(0x71DC753CL, (VECTOR(uint32_t, 4))(0x71DC753CL, (VECTOR(uint32_t, 2))(0x71DC753CL, 4UL), 4UL), 4UL, 0x71DC753CL, 4UL);
    int16_t *l_350 = &p_1046->g_351;
    uint16_t *l_352 = &p_1046->g_293;
    uint8_t *l_355 = &p_1046->g_315;
    uint16_t *l_356[2][9] = {{&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0],&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0],&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0]},{&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0],&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0],&p_1046->g_357[1][0],&p_1046->g_357[1][1],&p_1046->g_357[1][0]}};
    int i, j;
    for (p_1046->g_269 = 0; (p_1046->g_269 == (-20)); p_1046->g_269 = safe_sub_func_int32_t_s_s(p_1046->g_269, 3))
    { /* block id: 143 */
        int8_t l_320 = 0x48L;
        if (l_320)
            break;
    }
    --p_1046->g_323;
    p_1046->g_314 = (((safe_sub_func_uint16_t_u_u(65535UL, FAKE_DIVERGE(p_1046->global_2_offset, get_global_id(2), 10))) || ((safe_mul_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_330.s69d2)))).yxzzxywz)).even)).wyyzywwzxyzxxzzz, ((VECTOR(uint32_t, 4))(l_331.s1623)).wwyzyxzxwxzxyzxw))).sce)).hi , (safe_add_func_uint32_t_u_u(((p_1046->g_359 &= (((((247UL <= (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(p_287, (p_1046->g_358 = (p_1046->g_357[0][1] = (safe_mod_func_uint8_t_u_u(((*l_355) |= ((safe_mod_func_uint64_t_u_u(p_287, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((((*l_350) |= p_1046->g_comm_values[p_1046->tid]) | (p_1046->g_314 > (p_1046->g_7 = (((*l_352) = p_1046->g_293) | (safe_mul_func_int8_t_s_s((p_1046->g_323 , (p_287 < 247UL)), p_287)))))), p_287)), 5)))) & p_287)), 1UL)))))), p_1046->g_314)) <= p_1046->g_322[2]), 11)) <= p_287), 0x1AL))) , p_287) <= 0x00L) == p_287) == 0L)) != p_1046->g_22), p_1046->g_322[2]))), 0x263CL)) != p_1046->g_322[0])) < 0x0A829516L);
    return p_1046->g_351;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_315
 * writes: p_1046->g_315
 */
int32_t  func_288(uint8_t  p_289, struct S1 * p_1046)
{ /* block id: 137 */
    int32_t *l_311 = &p_1046->g_7;
    int32_t *l_312 = (void*)0;
    int32_t *l_313[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_1046->g_315--;
    return p_289;
}


/* ------------------------------------------ */
/* 
 * reads : p_1046->g_7 p_1046->g_269
 * writes: p_1046->g_7
 */
uint32_t  func_303(int8_t * p_304, int64_t  p_305, int32_t  p_306, int8_t  p_307, uint16_t  p_308, struct S1 * p_1046)
{ /* block id: 134 */
    int32_t *l_310 = &p_1046->g_7;
    (*l_310) ^= (-1L);
    return p_1046->g_269;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[77];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 77; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[77];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 77; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S1 c_1047;
    struct S1* p_1046 = &c_1047;
    struct S1 c_1048 = {
        0x150707DFL, // p_1046->g_7
        2L, // p_1046->g_22
        (void*)0, // p_1046->g_36
        0L, // p_1046->g_267
        0x1A76L, // p_1046->g_268
        (-9L), // p_1046->g_269
        0x0A01B54EBC97AA9BL, // p_1046->g_271
        {0x781CC42CF14F0DF4L,0x781CC42CF14F0DF4L,0x781CC42CF14F0DF4L,0x781CC42CF14F0DF4L,0x781CC42CF14F0DF4L,0x781CC42CF14F0DF4L}, // p_1046->g_279
        (VECTOR(uint64_t, 16))(0xE7529FD8B6E16766L, (VECTOR(uint64_t, 4))(0xE7529FD8B6E16766L, (VECTOR(uint64_t, 2))(0xE7529FD8B6E16766L, 0UL), 0UL), 0UL, 0xE7529FD8B6E16766L, 0UL, (VECTOR(uint64_t, 2))(0xE7529FD8B6E16766L, 0UL), (VECTOR(uint64_t, 2))(0xE7529FD8B6E16766L, 0UL), 0xE7529FD8B6E16766L, 0UL, 0xE7529FD8B6E16766L, 0UL), // p_1046->g_282
        5UL, // p_1046->g_293
        0xED8A2B8DL, // p_1046->g_299
        1L, // p_1046->g_314
        0xC1L, // p_1046->g_315
        {(-7L),(-7L),(-7L),(-7L),(-7L)}, // p_1046->g_322
        0xD2433469L, // p_1046->g_323
        3L, // p_1046->g_351
        {{0xAE59L,0xAE59L},{0xAE59L,0xAE59L}}, // p_1046->g_357
        0L, // p_1046->g_358
        (-7L), // p_1046->g_359
        (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 0x3FL), 0x3FL), 0x3FL, 0x3EL, 0x3FL, (VECTOR(int8_t, 2))(0x3EL, 0x3FL), (VECTOR(int8_t, 2))(0x3EL, 0x3FL), 0x3EL, 0x3FL, 0x3EL, 0x3FL), // p_1046->g_372
        (VECTOR(uint16_t, 2))(0UL, 0x4CFAL), // p_1046->g_381
        (-1L), // p_1046->g_418
        1UL, // p_1046->g_419
        &p_1046->g_314, // p_1046->g_425
        &p_1046->g_425, // p_1046->g_424
        0x9CAE16D2DC129E01L, // p_1046->g_488
        0x9437L, // p_1046->g_495
        {&p_1046->g_488,&p_1046->g_488}, // p_1046->g_510
        (VECTOR(int64_t, 2))(1L, (-1L)), // p_1046->g_515
        {{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323},{(void*)0,&p_1046->g_299,&p_1046->g_299,&p_1046->g_323,&p_1046->g_299,&p_1046->g_299,(void*)0,&p_1046->g_299,&p_1046->g_323}}, // p_1046->g_520
        &p_1046->g_520[3][2], // p_1046->g_519
        (VECTOR(int16_t, 16))(0x6469L, (VECTOR(int16_t, 4))(0x6469L, (VECTOR(int16_t, 2))(0x6469L, 0x6E45L), 0x6E45L), 0x6E45L, 0x6469L, 0x6E45L, (VECTOR(int16_t, 2))(0x6469L, 0x6E45L), (VECTOR(int16_t, 2))(0x6469L, 0x6E45L), 0x6469L, 0x6E45L, 0x6469L, 0x6E45L), // p_1046->g_528
        {&p_1046->g_425,&p_1046->g_425,&p_1046->g_425,&p_1046->g_425,&p_1046->g_425,&p_1046->g_425,&p_1046->g_425}, // p_1046->g_532
        2L, // p_1046->g_604
        {0x2961L}, // p_1046->g_622
        {&p_1046->g_419,&p_1046->g_315,&p_1046->g_419,&p_1046->g_419,&p_1046->g_315,&p_1046->g_419}, // p_1046->g_628
        &p_1046->g_628[4], // p_1046->g_627
        &p_1046->g_622, // p_1046->g_640
        (VECTOR(uint32_t, 4))(0x887005D0L, (VECTOR(uint32_t, 2))(0x887005D0L, 0x15AC22AEL), 0x15AC22AEL), // p_1046->g_673
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xEF310C81L), 0xEF310C81L), 0xEF310C81L, 0UL, 0xEF310C81L, (VECTOR(uint32_t, 2))(0UL, 0xEF310C81L), (VECTOR(uint32_t, 2))(0UL, 0xEF310C81L), 0UL, 0xEF310C81L, 0UL, 0xEF310C81L), // p_1046->g_676
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL), // p_1046->g_678
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint32_t, 2))(1UL, 0UL), (VECTOR(uint32_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_1046->g_679
        (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x3DE5149DDAD2592CL), 0x3DE5149DDAD2592CL), 0x3DE5149DDAD2592CL, 2L, 0x3DE5149DDAD2592CL), // p_1046->g_680
        {{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}},{{{-10L},{3L},{-10L},{-10L}}}}, // p_1046->g_691
        {{{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL},{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL},{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL},{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL},{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL},{0xF4CBF58AL,0xF4CBF58AL,0x5932EA8CL,4294967295UL,0xE974F940L,4294967295UL,0x5932EA8CL,0xF4CBF58AL,0xF4CBF58AL}}}, // p_1046->g_726
        0xAB3A2332L, // p_1046->g_731
        &p_1046->g_691[6][0][3], // p_1046->g_777
        &p_1046->g_777, // p_1046->g_776
        (VECTOR(int16_t, 2))(0L, (-9L)), // p_1046->g_778
        (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x1B4FCAE1L), 0x1B4FCAE1L), // p_1046->g_856
        (VECTOR(int8_t, 2))(1L, 0x7FL), // p_1046->g_878
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1046->g_879
        (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xCAL), 0xCAL), // p_1046->g_888
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5AL), 0x5AL), // p_1046->g_902
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L), // p_1046->g_903
        (VECTOR(int64_t, 16))(0x4F9F4979E17F82D0L, (VECTOR(int64_t, 4))(0x4F9F4979E17F82D0L, (VECTOR(int64_t, 2))(0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL), 0x21CD14C274A93A9EL), 0x21CD14C274A93A9EL, 0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL, (VECTOR(int64_t, 2))(0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL), (VECTOR(int64_t, 2))(0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL), 0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL, 0x4F9F4979E17F82D0L, 0x21CD14C274A93A9EL), // p_1046->g_912
        {{-4L},{-4L},{-4L},{-4L},{-4L}}, // p_1046->g_923
        1UL, // p_1046->g_933
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1046->g_948
        0xC25BL, // p_1046->g_979
        (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 65535UL), 65535UL), 65535UL, 6UL, 65535UL, (VECTOR(uint16_t, 2))(6UL, 65535UL), (VECTOR(uint16_t, 2))(6UL, 65535UL), 6UL, 65535UL, 6UL, 65535UL), // p_1046->g_986
        &p_1046->g_425, // p_1046->g_1015
        (VECTOR(uint8_t, 16))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 0xB0L), 0xB0L), 0xB0L, 0xA8L, 0xB0L, (VECTOR(uint8_t, 2))(0xA8L, 0xB0L), (VECTOR(uint8_t, 2))(0xA8L, 0xB0L), 0xA8L, 0xB0L, 0xA8L, 0xB0L), // p_1046->g_1018
        (VECTOR(uint8_t, 2))(8UL, 3UL), // p_1046->g_1019
        0x877953A4L, // p_1046->g_1043
        0, // p_1046->v_collective
        sequence_input[get_global_id(0)], // p_1046->global_0_offset
        sequence_input[get_global_id(1)], // p_1046->global_1_offset
        sequence_input[get_global_id(2)], // p_1046->global_2_offset
        sequence_input[get_local_id(0)], // p_1046->local_0_offset
        sequence_input[get_local_id(1)], // p_1046->local_1_offset
        sequence_input[get_local_id(2)], // p_1046->local_2_offset
        sequence_input[get_group_id(0)], // p_1046->group_0_offset
        sequence_input[get_group_id(1)], // p_1046->group_1_offset
        sequence_input[get_group_id(2)], // p_1046->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_1046->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1047 = c_1048;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1046);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1046->g_7, "p_1046->g_7", print_hash_value);
    transparent_crc(p_1046->g_22, "p_1046->g_22", print_hash_value);
    transparent_crc(p_1046->g_267, "p_1046->g_267", print_hash_value);
    transparent_crc(p_1046->g_268, "p_1046->g_268", print_hash_value);
    transparent_crc(p_1046->g_269, "p_1046->g_269", print_hash_value);
    transparent_crc(p_1046->g_271, "p_1046->g_271", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1046->g_279[i], "p_1046->g_279[i]", print_hash_value);

    }
    transparent_crc(p_1046->g_282.s0, "p_1046->g_282.s0", print_hash_value);
    transparent_crc(p_1046->g_282.s1, "p_1046->g_282.s1", print_hash_value);
    transparent_crc(p_1046->g_282.s2, "p_1046->g_282.s2", print_hash_value);
    transparent_crc(p_1046->g_282.s3, "p_1046->g_282.s3", print_hash_value);
    transparent_crc(p_1046->g_282.s4, "p_1046->g_282.s4", print_hash_value);
    transparent_crc(p_1046->g_282.s5, "p_1046->g_282.s5", print_hash_value);
    transparent_crc(p_1046->g_282.s6, "p_1046->g_282.s6", print_hash_value);
    transparent_crc(p_1046->g_282.s7, "p_1046->g_282.s7", print_hash_value);
    transparent_crc(p_1046->g_282.s8, "p_1046->g_282.s8", print_hash_value);
    transparent_crc(p_1046->g_282.s9, "p_1046->g_282.s9", print_hash_value);
    transparent_crc(p_1046->g_282.sa, "p_1046->g_282.sa", print_hash_value);
    transparent_crc(p_1046->g_282.sb, "p_1046->g_282.sb", print_hash_value);
    transparent_crc(p_1046->g_282.sc, "p_1046->g_282.sc", print_hash_value);
    transparent_crc(p_1046->g_282.sd, "p_1046->g_282.sd", print_hash_value);
    transparent_crc(p_1046->g_282.se, "p_1046->g_282.se", print_hash_value);
    transparent_crc(p_1046->g_282.sf, "p_1046->g_282.sf", print_hash_value);
    transparent_crc(p_1046->g_293, "p_1046->g_293", print_hash_value);
    transparent_crc(p_1046->g_299, "p_1046->g_299", print_hash_value);
    transparent_crc(p_1046->g_314, "p_1046->g_314", print_hash_value);
    transparent_crc(p_1046->g_315, "p_1046->g_315", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1046->g_322[i], "p_1046->g_322[i]", print_hash_value);

    }
    transparent_crc(p_1046->g_323, "p_1046->g_323", print_hash_value);
    transparent_crc(p_1046->g_351, "p_1046->g_351", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1046->g_357[i][j], "p_1046->g_357[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1046->g_358, "p_1046->g_358", print_hash_value);
    transparent_crc(p_1046->g_359, "p_1046->g_359", print_hash_value);
    transparent_crc(p_1046->g_372.s0, "p_1046->g_372.s0", print_hash_value);
    transparent_crc(p_1046->g_372.s1, "p_1046->g_372.s1", print_hash_value);
    transparent_crc(p_1046->g_372.s2, "p_1046->g_372.s2", print_hash_value);
    transparent_crc(p_1046->g_372.s3, "p_1046->g_372.s3", print_hash_value);
    transparent_crc(p_1046->g_372.s4, "p_1046->g_372.s4", print_hash_value);
    transparent_crc(p_1046->g_372.s5, "p_1046->g_372.s5", print_hash_value);
    transparent_crc(p_1046->g_372.s6, "p_1046->g_372.s6", print_hash_value);
    transparent_crc(p_1046->g_372.s7, "p_1046->g_372.s7", print_hash_value);
    transparent_crc(p_1046->g_372.s8, "p_1046->g_372.s8", print_hash_value);
    transparent_crc(p_1046->g_372.s9, "p_1046->g_372.s9", print_hash_value);
    transparent_crc(p_1046->g_372.sa, "p_1046->g_372.sa", print_hash_value);
    transparent_crc(p_1046->g_372.sb, "p_1046->g_372.sb", print_hash_value);
    transparent_crc(p_1046->g_372.sc, "p_1046->g_372.sc", print_hash_value);
    transparent_crc(p_1046->g_372.sd, "p_1046->g_372.sd", print_hash_value);
    transparent_crc(p_1046->g_372.se, "p_1046->g_372.se", print_hash_value);
    transparent_crc(p_1046->g_372.sf, "p_1046->g_372.sf", print_hash_value);
    transparent_crc(p_1046->g_381.x, "p_1046->g_381.x", print_hash_value);
    transparent_crc(p_1046->g_381.y, "p_1046->g_381.y", print_hash_value);
    transparent_crc(p_1046->g_418, "p_1046->g_418", print_hash_value);
    transparent_crc(p_1046->g_419, "p_1046->g_419", print_hash_value);
    transparent_crc(p_1046->g_488, "p_1046->g_488", print_hash_value);
    transparent_crc(p_1046->g_495, "p_1046->g_495", print_hash_value);
    transparent_crc(p_1046->g_515.x, "p_1046->g_515.x", print_hash_value);
    transparent_crc(p_1046->g_515.y, "p_1046->g_515.y", print_hash_value);
    transparent_crc(p_1046->g_528.s0, "p_1046->g_528.s0", print_hash_value);
    transparent_crc(p_1046->g_528.s1, "p_1046->g_528.s1", print_hash_value);
    transparent_crc(p_1046->g_528.s2, "p_1046->g_528.s2", print_hash_value);
    transparent_crc(p_1046->g_528.s3, "p_1046->g_528.s3", print_hash_value);
    transparent_crc(p_1046->g_528.s4, "p_1046->g_528.s4", print_hash_value);
    transparent_crc(p_1046->g_528.s5, "p_1046->g_528.s5", print_hash_value);
    transparent_crc(p_1046->g_528.s6, "p_1046->g_528.s6", print_hash_value);
    transparent_crc(p_1046->g_528.s7, "p_1046->g_528.s7", print_hash_value);
    transparent_crc(p_1046->g_528.s8, "p_1046->g_528.s8", print_hash_value);
    transparent_crc(p_1046->g_528.s9, "p_1046->g_528.s9", print_hash_value);
    transparent_crc(p_1046->g_528.sa, "p_1046->g_528.sa", print_hash_value);
    transparent_crc(p_1046->g_528.sb, "p_1046->g_528.sb", print_hash_value);
    transparent_crc(p_1046->g_528.sc, "p_1046->g_528.sc", print_hash_value);
    transparent_crc(p_1046->g_528.sd, "p_1046->g_528.sd", print_hash_value);
    transparent_crc(p_1046->g_528.se, "p_1046->g_528.se", print_hash_value);
    transparent_crc(p_1046->g_528.sf, "p_1046->g_528.sf", print_hash_value);
    transparent_crc(p_1046->g_604, "p_1046->g_604", print_hash_value);
    transparent_crc(p_1046->g_622.f0, "p_1046->g_622.f0", print_hash_value);
    transparent_crc(p_1046->g_673.x, "p_1046->g_673.x", print_hash_value);
    transparent_crc(p_1046->g_673.y, "p_1046->g_673.y", print_hash_value);
    transparent_crc(p_1046->g_673.z, "p_1046->g_673.z", print_hash_value);
    transparent_crc(p_1046->g_673.w, "p_1046->g_673.w", print_hash_value);
    transparent_crc(p_1046->g_676.s0, "p_1046->g_676.s0", print_hash_value);
    transparent_crc(p_1046->g_676.s1, "p_1046->g_676.s1", print_hash_value);
    transparent_crc(p_1046->g_676.s2, "p_1046->g_676.s2", print_hash_value);
    transparent_crc(p_1046->g_676.s3, "p_1046->g_676.s3", print_hash_value);
    transparent_crc(p_1046->g_676.s4, "p_1046->g_676.s4", print_hash_value);
    transparent_crc(p_1046->g_676.s5, "p_1046->g_676.s5", print_hash_value);
    transparent_crc(p_1046->g_676.s6, "p_1046->g_676.s6", print_hash_value);
    transparent_crc(p_1046->g_676.s7, "p_1046->g_676.s7", print_hash_value);
    transparent_crc(p_1046->g_676.s8, "p_1046->g_676.s8", print_hash_value);
    transparent_crc(p_1046->g_676.s9, "p_1046->g_676.s9", print_hash_value);
    transparent_crc(p_1046->g_676.sa, "p_1046->g_676.sa", print_hash_value);
    transparent_crc(p_1046->g_676.sb, "p_1046->g_676.sb", print_hash_value);
    transparent_crc(p_1046->g_676.sc, "p_1046->g_676.sc", print_hash_value);
    transparent_crc(p_1046->g_676.sd, "p_1046->g_676.sd", print_hash_value);
    transparent_crc(p_1046->g_676.se, "p_1046->g_676.se", print_hash_value);
    transparent_crc(p_1046->g_676.sf, "p_1046->g_676.sf", print_hash_value);
    transparent_crc(p_1046->g_678.s0, "p_1046->g_678.s0", print_hash_value);
    transparent_crc(p_1046->g_678.s1, "p_1046->g_678.s1", print_hash_value);
    transparent_crc(p_1046->g_678.s2, "p_1046->g_678.s2", print_hash_value);
    transparent_crc(p_1046->g_678.s3, "p_1046->g_678.s3", print_hash_value);
    transparent_crc(p_1046->g_678.s4, "p_1046->g_678.s4", print_hash_value);
    transparent_crc(p_1046->g_678.s5, "p_1046->g_678.s5", print_hash_value);
    transparent_crc(p_1046->g_678.s6, "p_1046->g_678.s6", print_hash_value);
    transparent_crc(p_1046->g_678.s7, "p_1046->g_678.s7", print_hash_value);
    transparent_crc(p_1046->g_679.s0, "p_1046->g_679.s0", print_hash_value);
    transparent_crc(p_1046->g_679.s1, "p_1046->g_679.s1", print_hash_value);
    transparent_crc(p_1046->g_679.s2, "p_1046->g_679.s2", print_hash_value);
    transparent_crc(p_1046->g_679.s3, "p_1046->g_679.s3", print_hash_value);
    transparent_crc(p_1046->g_679.s4, "p_1046->g_679.s4", print_hash_value);
    transparent_crc(p_1046->g_679.s5, "p_1046->g_679.s5", print_hash_value);
    transparent_crc(p_1046->g_679.s6, "p_1046->g_679.s6", print_hash_value);
    transparent_crc(p_1046->g_679.s7, "p_1046->g_679.s7", print_hash_value);
    transparent_crc(p_1046->g_679.s8, "p_1046->g_679.s8", print_hash_value);
    transparent_crc(p_1046->g_679.s9, "p_1046->g_679.s9", print_hash_value);
    transparent_crc(p_1046->g_679.sa, "p_1046->g_679.sa", print_hash_value);
    transparent_crc(p_1046->g_679.sb, "p_1046->g_679.sb", print_hash_value);
    transparent_crc(p_1046->g_679.sc, "p_1046->g_679.sc", print_hash_value);
    transparent_crc(p_1046->g_679.sd, "p_1046->g_679.sd", print_hash_value);
    transparent_crc(p_1046->g_679.se, "p_1046->g_679.se", print_hash_value);
    transparent_crc(p_1046->g_679.sf, "p_1046->g_679.sf", print_hash_value);
    transparent_crc(p_1046->g_680.s0, "p_1046->g_680.s0", print_hash_value);
    transparent_crc(p_1046->g_680.s1, "p_1046->g_680.s1", print_hash_value);
    transparent_crc(p_1046->g_680.s2, "p_1046->g_680.s2", print_hash_value);
    transparent_crc(p_1046->g_680.s3, "p_1046->g_680.s3", print_hash_value);
    transparent_crc(p_1046->g_680.s4, "p_1046->g_680.s4", print_hash_value);
    transparent_crc(p_1046->g_680.s5, "p_1046->g_680.s5", print_hash_value);
    transparent_crc(p_1046->g_680.s6, "p_1046->g_680.s6", print_hash_value);
    transparent_crc(p_1046->g_680.s7, "p_1046->g_680.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1046->g_691[i][j][k].f0, "p_1046->g_691[i][j][k].f0", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1046->g_726[i][j][k], "p_1046->g_726[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1046->g_731, "p_1046->g_731", print_hash_value);
    transparent_crc(p_1046->g_778.x, "p_1046->g_778.x", print_hash_value);
    transparent_crc(p_1046->g_778.y, "p_1046->g_778.y", print_hash_value);
    transparent_crc(p_1046->g_856.x, "p_1046->g_856.x", print_hash_value);
    transparent_crc(p_1046->g_856.y, "p_1046->g_856.y", print_hash_value);
    transparent_crc(p_1046->g_856.z, "p_1046->g_856.z", print_hash_value);
    transparent_crc(p_1046->g_856.w, "p_1046->g_856.w", print_hash_value);
    transparent_crc(p_1046->g_878.x, "p_1046->g_878.x", print_hash_value);
    transparent_crc(p_1046->g_878.y, "p_1046->g_878.y", print_hash_value);
    transparent_crc(p_1046->g_879.s0, "p_1046->g_879.s0", print_hash_value);
    transparent_crc(p_1046->g_879.s1, "p_1046->g_879.s1", print_hash_value);
    transparent_crc(p_1046->g_879.s2, "p_1046->g_879.s2", print_hash_value);
    transparent_crc(p_1046->g_879.s3, "p_1046->g_879.s3", print_hash_value);
    transparent_crc(p_1046->g_879.s4, "p_1046->g_879.s4", print_hash_value);
    transparent_crc(p_1046->g_879.s5, "p_1046->g_879.s5", print_hash_value);
    transparent_crc(p_1046->g_879.s6, "p_1046->g_879.s6", print_hash_value);
    transparent_crc(p_1046->g_879.s7, "p_1046->g_879.s7", print_hash_value);
    transparent_crc(p_1046->g_888.x, "p_1046->g_888.x", print_hash_value);
    transparent_crc(p_1046->g_888.y, "p_1046->g_888.y", print_hash_value);
    transparent_crc(p_1046->g_888.z, "p_1046->g_888.z", print_hash_value);
    transparent_crc(p_1046->g_888.w, "p_1046->g_888.w", print_hash_value);
    transparent_crc(p_1046->g_902.x, "p_1046->g_902.x", print_hash_value);
    transparent_crc(p_1046->g_902.y, "p_1046->g_902.y", print_hash_value);
    transparent_crc(p_1046->g_902.z, "p_1046->g_902.z", print_hash_value);
    transparent_crc(p_1046->g_902.w, "p_1046->g_902.w", print_hash_value);
    transparent_crc(p_1046->g_903.x, "p_1046->g_903.x", print_hash_value);
    transparent_crc(p_1046->g_903.y, "p_1046->g_903.y", print_hash_value);
    transparent_crc(p_1046->g_903.z, "p_1046->g_903.z", print_hash_value);
    transparent_crc(p_1046->g_903.w, "p_1046->g_903.w", print_hash_value);
    transparent_crc(p_1046->g_912.s0, "p_1046->g_912.s0", print_hash_value);
    transparent_crc(p_1046->g_912.s1, "p_1046->g_912.s1", print_hash_value);
    transparent_crc(p_1046->g_912.s2, "p_1046->g_912.s2", print_hash_value);
    transparent_crc(p_1046->g_912.s3, "p_1046->g_912.s3", print_hash_value);
    transparent_crc(p_1046->g_912.s4, "p_1046->g_912.s4", print_hash_value);
    transparent_crc(p_1046->g_912.s5, "p_1046->g_912.s5", print_hash_value);
    transparent_crc(p_1046->g_912.s6, "p_1046->g_912.s6", print_hash_value);
    transparent_crc(p_1046->g_912.s7, "p_1046->g_912.s7", print_hash_value);
    transparent_crc(p_1046->g_912.s8, "p_1046->g_912.s8", print_hash_value);
    transparent_crc(p_1046->g_912.s9, "p_1046->g_912.s9", print_hash_value);
    transparent_crc(p_1046->g_912.sa, "p_1046->g_912.sa", print_hash_value);
    transparent_crc(p_1046->g_912.sb, "p_1046->g_912.sb", print_hash_value);
    transparent_crc(p_1046->g_912.sc, "p_1046->g_912.sc", print_hash_value);
    transparent_crc(p_1046->g_912.sd, "p_1046->g_912.sd", print_hash_value);
    transparent_crc(p_1046->g_912.se, "p_1046->g_912.se", print_hash_value);
    transparent_crc(p_1046->g_912.sf, "p_1046->g_912.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1046->g_923[i].f0, "p_1046->g_923[i].f0", print_hash_value);

    }
    transparent_crc(p_1046->g_933, "p_1046->g_933", print_hash_value);
    transparent_crc(p_1046->g_948.s0, "p_1046->g_948.s0", print_hash_value);
    transparent_crc(p_1046->g_948.s1, "p_1046->g_948.s1", print_hash_value);
    transparent_crc(p_1046->g_948.s2, "p_1046->g_948.s2", print_hash_value);
    transparent_crc(p_1046->g_948.s3, "p_1046->g_948.s3", print_hash_value);
    transparent_crc(p_1046->g_948.s4, "p_1046->g_948.s4", print_hash_value);
    transparent_crc(p_1046->g_948.s5, "p_1046->g_948.s5", print_hash_value);
    transparent_crc(p_1046->g_948.s6, "p_1046->g_948.s6", print_hash_value);
    transparent_crc(p_1046->g_948.s7, "p_1046->g_948.s7", print_hash_value);
    transparent_crc(p_1046->g_979, "p_1046->g_979", print_hash_value);
    transparent_crc(p_1046->g_986.s0, "p_1046->g_986.s0", print_hash_value);
    transparent_crc(p_1046->g_986.s1, "p_1046->g_986.s1", print_hash_value);
    transparent_crc(p_1046->g_986.s2, "p_1046->g_986.s2", print_hash_value);
    transparent_crc(p_1046->g_986.s3, "p_1046->g_986.s3", print_hash_value);
    transparent_crc(p_1046->g_986.s4, "p_1046->g_986.s4", print_hash_value);
    transparent_crc(p_1046->g_986.s5, "p_1046->g_986.s5", print_hash_value);
    transparent_crc(p_1046->g_986.s6, "p_1046->g_986.s6", print_hash_value);
    transparent_crc(p_1046->g_986.s7, "p_1046->g_986.s7", print_hash_value);
    transparent_crc(p_1046->g_986.s8, "p_1046->g_986.s8", print_hash_value);
    transparent_crc(p_1046->g_986.s9, "p_1046->g_986.s9", print_hash_value);
    transparent_crc(p_1046->g_986.sa, "p_1046->g_986.sa", print_hash_value);
    transparent_crc(p_1046->g_986.sb, "p_1046->g_986.sb", print_hash_value);
    transparent_crc(p_1046->g_986.sc, "p_1046->g_986.sc", print_hash_value);
    transparent_crc(p_1046->g_986.sd, "p_1046->g_986.sd", print_hash_value);
    transparent_crc(p_1046->g_986.se, "p_1046->g_986.se", print_hash_value);
    transparent_crc(p_1046->g_986.sf, "p_1046->g_986.sf", print_hash_value);
    transparent_crc(p_1046->g_1018.s0, "p_1046->g_1018.s0", print_hash_value);
    transparent_crc(p_1046->g_1018.s1, "p_1046->g_1018.s1", print_hash_value);
    transparent_crc(p_1046->g_1018.s2, "p_1046->g_1018.s2", print_hash_value);
    transparent_crc(p_1046->g_1018.s3, "p_1046->g_1018.s3", print_hash_value);
    transparent_crc(p_1046->g_1018.s4, "p_1046->g_1018.s4", print_hash_value);
    transparent_crc(p_1046->g_1018.s5, "p_1046->g_1018.s5", print_hash_value);
    transparent_crc(p_1046->g_1018.s6, "p_1046->g_1018.s6", print_hash_value);
    transparent_crc(p_1046->g_1018.s7, "p_1046->g_1018.s7", print_hash_value);
    transparent_crc(p_1046->g_1018.s8, "p_1046->g_1018.s8", print_hash_value);
    transparent_crc(p_1046->g_1018.s9, "p_1046->g_1018.s9", print_hash_value);
    transparent_crc(p_1046->g_1018.sa, "p_1046->g_1018.sa", print_hash_value);
    transparent_crc(p_1046->g_1018.sb, "p_1046->g_1018.sb", print_hash_value);
    transparent_crc(p_1046->g_1018.sc, "p_1046->g_1018.sc", print_hash_value);
    transparent_crc(p_1046->g_1018.sd, "p_1046->g_1018.sd", print_hash_value);
    transparent_crc(p_1046->g_1018.se, "p_1046->g_1018.se", print_hash_value);
    transparent_crc(p_1046->g_1018.sf, "p_1046->g_1018.sf", print_hash_value);
    transparent_crc(p_1046->g_1019.x, "p_1046->g_1019.x", print_hash_value);
    transparent_crc(p_1046->g_1019.y, "p_1046->g_1019.y", print_hash_value);
    transparent_crc(p_1046->g_1043, "p_1046->g_1043", print_hash_value);
    transparent_crc(p_1046->v_collective, "p_1046->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 77; i++)
            transparent_crc(p_1046->g_special_values[i + 77 * get_linear_group_id()], "p_1046->g_special_values[i + 77 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 77; i++)
            transparent_crc(p_1046->l_special_values[i], "p_1046->l_special_values[i]", print_hash_value);
    transparent_crc(p_1046->l_comm_values[get_linear_local_id()], "p_1046->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1046->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_1046->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
