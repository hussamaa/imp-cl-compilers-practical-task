// --atomics 50 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 59,48,3 -l 1,16,3
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

__constant uint32_t permutations[10][48] = {
{1,47,35,8,42,32,5,28,27,44,24,43,26,46,21,25,9,31,39,38,17,33,15,13,23,2,14,29,22,20,3,0,11,12,19,7,30,4,16,37,34,18,10,45,41,40,36,6}, // permutation 0
{8,0,47,25,32,31,5,34,38,6,12,20,13,18,33,23,26,27,40,28,29,41,35,30,2,19,39,36,37,15,17,43,21,11,22,1,9,10,45,14,3,42,4,46,44,7,16,24}, // permutation 1
{5,22,45,1,47,18,36,34,4,3,31,11,42,6,21,38,13,28,14,25,30,39,33,8,37,7,0,41,2,19,43,35,29,32,10,17,46,40,15,27,20,12,9,26,24,23,44,16}, // permutation 2
{36,27,7,6,8,28,45,12,43,46,42,5,34,32,20,37,24,33,38,23,0,17,21,19,30,31,15,9,40,13,26,44,39,35,2,22,10,4,47,18,25,14,11,29,1,3,41,16}, // permutation 3
{2,29,47,15,28,39,10,5,30,1,38,24,36,4,27,22,16,9,3,41,23,7,37,6,32,18,14,19,13,40,43,17,8,25,46,34,21,11,45,12,42,20,0,26,33,44,31,35}, // permutation 4
{6,2,8,37,28,38,7,13,23,5,0,35,25,11,40,46,22,30,24,34,27,21,17,10,33,1,26,16,45,47,32,41,15,19,4,18,39,29,9,36,42,20,44,3,12,43,14,31}, // permutation 5
{14,24,23,19,38,17,0,1,9,29,4,43,20,32,35,18,25,40,21,42,22,3,41,37,44,8,15,46,7,36,16,10,13,5,34,28,11,6,27,30,39,47,12,26,45,33,31,2}, // permutation 6
{46,7,13,31,32,34,10,27,24,15,23,12,30,35,1,20,2,16,14,39,45,0,41,11,26,29,17,9,38,44,21,3,18,8,36,22,40,42,43,37,25,33,28,19,4,6,47,5}, // permutation 7
{20,21,34,31,25,33,0,15,37,47,40,3,7,10,36,27,23,18,2,35,8,44,26,14,5,32,17,42,28,9,46,43,13,6,38,19,45,16,39,4,22,29,11,30,24,12,41,1}, // permutation 8
{9,2,13,11,28,18,16,47,30,42,33,6,29,43,3,22,44,37,27,41,5,7,46,21,17,10,35,20,19,4,38,40,15,31,45,25,0,34,14,36,26,24,1,23,8,12,32,39} // permutation 9
};

// Seed: 3137763853

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_39[5][6][8];
    int32_t *g_51;
    int32_t * volatile *g_67;
    int32_t * volatile **g_66;
    volatile VECTOR(int16_t, 4) g_69;
    int16_t g_88;
    int32_t g_91;
    int8_t g_99;
    int16_t g_127;
    volatile VECTOR(int64_t, 8) g_132;
    int32_t **g_136;
    uint64_t g_138;
    int8_t g_143;
    VECTOR(uint16_t, 2) g_161;
    VECTOR(uint8_t, 4) g_162;
    VECTOR(uint16_t, 8) g_176;
    uint32_t g_182;
    VECTOR(int16_t, 4) g_193;
    volatile VECTOR(int8_t, 4) g_204;
    volatile VECTOR(int8_t, 16) g_205;
    volatile VECTOR(uint32_t, 4) g_214;
    int8_t g_226[4];
    uint64_t g_228[8];
    uint32_t g_308;
    volatile VECTOR(uint16_t, 4) g_314;
    int8_t *g_326;
    volatile VECTOR(int32_t, 4) g_388;
    int32_t g_392;
    uint16_t g_403;
    VECTOR(uint32_t, 8) g_420;
    volatile VECTOR(uint32_t, 4) g_421;
    volatile VECTOR(uint32_t, 4) g_422;
    volatile VECTOR(int16_t, 4) g_424;
    VECTOR(int16_t, 8) g_427;
    uint32_t g_444[1];
    uint16_t g_475;
    uint32_t g_514;
    int16_t g_561;
    int32_t g_579;
    uint16_t *g_585;
    uint16_t ** volatile g_584;
    uint8_t g_589;
    int32_t *g_590[5];
    int32_t g_764;
    int16_t g_791;
    int64_t *g_804[5];
    uint32_t g_818;
    VECTOR(int8_t, 16) g_831;
    int32_t * volatile g_841;
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
int32_t  func_1(struct S0 * p_877);
int32_t * func_2(int32_t * p_3, uint16_t  p_4, uint32_t  p_5, int32_t  p_6, int32_t  p_7, struct S0 * p_877);
int32_t * func_9(uint64_t  p_10, int32_t * p_11, struct S0 * p_877);
int32_t * func_12(int16_t  p_13, struct S0 * p_877);
uint16_t  func_16(int32_t * p_17, int32_t  p_18, int32_t  p_19, int32_t * p_20, int32_t * p_21, struct S0 * p_877);
uint8_t  func_25(int32_t * p_26, struct S0 * p_877);
int32_t * func_27(int8_t  p_28, int32_t * p_29, int32_t * p_30, int32_t * p_31, struct S0 * p_877);
int32_t  func_34(int32_t  p_35, int32_t * p_36, uint32_t  p_37, struct S0 * p_877);
int8_t  func_46(int32_t  p_47, struct S0 * p_877);
int32_t * func_58(uint8_t  p_59, uint32_t  p_60, int32_t ** p_61, uint32_t  p_62, int64_t  p_63, struct S0 * p_877);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_877->g_comm_values p_877->g_39 p_877->l_comm_values p_877->g_66 p_877->g_69 p_877->g_91 p_877->g_99 p_877->g_88 p_877->g_132 p_877->g_138 p_877->g_143 p_877->g_127 permutations p_877->g_161 p_877->g_162 p_877->g_136 p_877->g_51 p_877->g_67 p_877->g_176 p_877->g_182 p_877->g_193 p_877->g_204 p_877->g_205 p_877->g_214 p_877->g_226 p_877->g_228 p_877->g_308 p_877->g_314 p_877->g_326 p_877->g_392 p_877->g_403 p_877->g_420 p_877->g_444 p_877->g_427 p_877->g_424 p_877->g_422 p_877->g_388 p_877->g_561 p_877->g_584 p_877->g_589 p_877->g_579 p_877->g_590 p_877->g_791 p_877->g_421 p_877->g_831 p_877->g_841 p_877->g_764 p_877->g_818 p_877->g_804 p_877->g_585 p_877->g_475
 * writes: p_877->g_51 p_877->g_39 p_877->g_88 p_877->g_91 p_877->g_136 p_877->g_138 p_877->g_143 p_877->g_182 p_877->g_226 p_877->g_162 p_877->g_228 p_877->g_308 p_877->g_161 p_877->g_326 p_877->g_193 p_877->g_403 p_877->g_444 p_877->g_475 p_877->l_comm_values p_877->g_99 p_877->g_561 p_877->g_584 p_877->g_589 p_877->g_420 p_877->g_791 p_877->g_579 p_877->g_764 p_877->g_818 p_877->g_590
 */
int32_t  func_1(struct S0 * p_877)
{ /* block id: 4 */
    uint32_t l_8 = 0x3D4210E1L;
    uint32_t *l_817 = &p_877->g_818;
    int32_t **l_876 = &p_877->g_590[2];
    (*l_876) = func_2((l_8 , func_9(p_877->g_comm_values[p_877->tid], func_12(p_877->g_comm_values[p_877->tid], p_877), p_877)), l_8, p_877->g_579, (safe_rshift_func_uint8_t_u_u(p_877->g_176.s4, ((void*)0 == l_817))), l_8, p_877);
    return l_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_831 p_877->g_214 p_877->g_589 p_877->g_326 p_877->g_226 p_877->g_69 p_877->g_182 p_877->g_392 p_877->g_579 p_877->g_841 p_877->g_764 p_877->g_818 p_877->g_804 p_877->g_91 p_877->g_204 p_877->g_162 p_877->g_585 p_877->g_475 p_877->g_176 p_877->g_136 p_877->g_51
 * writes: p_877->g_791 p_877->g_589 p_877->g_579 p_877->g_764 p_877->g_818 p_877->g_475
 */
int32_t * func_2(int32_t * p_3, uint16_t  p_4, uint32_t  p_5, int32_t  p_6, int32_t  p_7, struct S0 * p_877)
{ /* block id: 360 */
    VECTOR(int32_t, 4) l_819 = (VECTOR(int32_t, 4))(0x19B95E9EL, (VECTOR(int32_t, 2))(0x19B95E9EL, 1L), 1L);
    VECTOR(int16_t, 2) l_828 = (VECTOR(int16_t, 2))((-1L), 6L);
    int16_t *l_829 = (void*)0;
    int16_t *l_830 = &p_877->g_791;
    int32_t l_836 = 0x75813330L;
    uint8_t *l_837 = &p_877->g_589;
    uint8_t *l_838 = (void*)0;
    int32_t *l_842 = &p_877->g_91;
    int32_t *l_843 = &p_877->g_39[3][2][1];
    int32_t *l_844 = &p_877->g_579;
    int32_t *l_845[5] = {&p_877->g_39[3][2][1],&p_877->g_39[3][2][1],&p_877->g_39[3][2][1],&p_877->g_39[3][2][1],&p_877->g_39[3][2][1]};
    int64_t l_846 = (-3L);
    uint16_t l_847 = 65535UL;
    VECTOR(uint64_t, 4) l_852 = (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0x8BE2BD3E6CC7DB20L), 0x8BE2BD3E6CC7DB20L);
    int64_t *l_853 = (void*)0;
    VECTOR(uint32_t, 16) l_856 = (VECTOR(uint32_t, 16))(0x52551C67L, (VECTOR(uint32_t, 4))(0x52551C67L, (VECTOR(uint32_t, 2))(0x52551C67L, 0x4BA10FB8L), 0x4BA10FB8L), 0x4BA10FB8L, 0x52551C67L, 0x4BA10FB8L, (VECTOR(uint32_t, 2))(0x52551C67L, 0x4BA10FB8L), (VECTOR(uint32_t, 2))(0x52551C67L, 0x4BA10FB8L), 0x52551C67L, 0x4BA10FB8L, 0x52551C67L, 0x4BA10FB8L);
    int32_t l_874 = (-5L);
    int i;
    (*p_877->g_841) = (((((*p_3) |= ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(l_819.xzzy)).ywxxzyxy, (int32_t)(l_819.x > ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((*l_830) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_828.xy)).xyxyxyyyyxxxxyxy)).sc), (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_877->g_831.s08c8)).even)).odd , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))((safe_rshift_func_int16_t_s_s((-4L), (safe_add_func_uint8_t_u_u((l_836 = (((VECTOR(uint8_t, 8))(l_836, 246UL, 1UL, (p_7 & p_6), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xB6L, 0x79L)).xyxy)).z, 6UL, 255UL, 1UL)).s0 > ((*l_837) |= p_877->g_214.w))), ((*p_877->g_326) ^ (*p_877->g_326)))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((safe_add_func_int64_t_s_s(p_6, l_836)) , p_4), 0x20B2L, ((VECTOR(int16_t, 2))(1L)), p_877->g_69.x, (-1L), 0x0D8FL, 0x01DEL)).even, (int16_t)0x09C5L, (int16_t)l_819.y))), ((VECTOR(int16_t, 4))(0x78E6L)), ((VECTOR(int16_t, 4))(0x33E1L))))).hi)).yyxy)).even)).even, ((VECTOR(int16_t, 4))(0x5882L)), 1L, 0L, ((VECTOR(int16_t, 4))(0x7571L)), l_819.z, 0L, 0x209DL, 0x7B69L)), ((VECTOR(int16_t, 16))(2L))))).hi, ((VECTOR(int16_t, 8))(2L)), ((VECTOR(int16_t, 8))(0x764EL))))).s6347353527607337, ((VECTOR(int16_t, 16))(0x07B6L))))).s64, ((VECTOR(int16_t, 2))((-10L)))))), 0x6817L, 6L)).x))), p_5)), 6)), 0x0CL)) & p_877->g_182) | p_5) && p_877->g_392))))).s1433224556501511, ((VECTOR(int32_t, 16))(0x33B411BDL))))).se) || p_5) < l_828.y) , (*p_3));
    (*p_877->g_841) |= ((void*)0 == &p_877->g_226[3]);
    ++l_847;
    for (p_877->g_818 = 0; (p_877->g_818 <= 26); p_877->g_818++)
    { /* block id: 370 */
        uint32_t l_861[10] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL,4294967290UL};
        uint16_t l_867 = 0x2BA0L;
        int32_t l_872 = 0L;
        int64_t *l_873[3][4] = {{&l_846,(void*)0,&l_846,&l_846},{&l_846,(void*)0,&l_846,&l_846},{&l_846,(void*)0,&l_846,&l_846}};
        int32_t l_875[5] = {1L,1L,1L,1L,1L};
        int i, j;
        l_875[1] |= (((VECTOR(uint64_t, 4))(l_852.xxyw)).y , (((-5L) >= (((l_853 = p_877->g_804[2]) != ((((safe_div_func_int16_t_s_s((((((*p_877->g_585) |= (((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_856.s223528cd)), ((VECTOR(uint32_t, 8))((((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_6, ((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_877->global_1_offset, get_global_id(1), 10), ((VECTOR(uint16_t, 4))(0xB7E5L, (((safe_mod_func_uint32_t_u_u(l_861[1], 0x5E4F5C37L)) >= 0x6511L) && (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_add_func_uint8_t_u_u(((*l_837) = l_867), ((((safe_mul_func_uint8_t_u_u(((*l_842) < ((safe_lshift_func_uint16_t_u_s(0xCD09L, p_7)) != l_861[6])), l_861[0])) && p_877->g_204.x) & FAKE_DIVERGE(p_877->group_2_offset, get_group_id(2), 10)) < 3UL))) , 0x871EFB75F31C714CL))), 7))), 0x570BL, 1UL)), p_6, 0x8DDAL, 0x780AL)).s6, p_4, 0xD9B3L, l_861[1], 0x3B01L, 65529UL, 0xB572L)).s5, 1UL)) , p_5) | 0L), 2UL, p_877->g_162.w, 0UL, 0xE3E4EACAL, FAKE_DIVERGE(p_877->group_1_offset, get_group_id(1), 10), 0xDC11A0A7L, 0UL)), ((VECTOR(uint32_t, 8))(0xB7C6D8DCL))))).s2 | 0xC069733FL)) >= p_6) ^ l_872) <= GROUP_DIVERGE(0, 1)), (-6L))) == GROUP_DIVERGE(2, 1)) == p_877->g_176.s1) , l_873[2][0])) || l_874)) | 253UL));
    }
    return (*p_877->g_136);
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_403 p_877->g_136
 * writes: p_877->g_403 p_877->g_51
 */
int32_t * func_9(uint64_t  p_10, int32_t * p_11, struct S0 * p_877)
{ /* block id: 349 */
    VECTOR(uint64_t, 4) l_794 = (VECTOR(uint64_t, 4))(0x26F4A2128D554057L, (VECTOR(uint64_t, 2))(0x26F4A2128D554057L, 1UL), 1UL);
    uint16_t **l_795 = &p_877->g_585;
    int64_t *l_802[1][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t *l_814[2][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_814[i][j] = &p_877->g_579;
    }
    for (p_877->g_403 = 0; (p_877->g_403 == 29); p_877->g_403++)
    { /* block id: 352 */
        uint16_t **l_796 = &p_877->g_585;
        uint16_t ***l_797 = &l_796;
        int64_t **l_803 = &l_802[0][3][0];
        int32_t l_811 = 0x7F86E90BL;
        uint32_t *l_812[6];
        int32_t l_813 = 6L;
        int i;
        for (i = 0; i < 6; i++)
            l_812[i] = &p_877->g_444[0];
        (*p_877->g_136) = ((((VECTOR(uint64_t, 4))(l_794.yxwz)).y < (l_813 = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(65527UL, 0x0138L, 0x7491L, ((l_795 != ((*l_797) = l_796)) > ((safe_div_func_uint64_t_u_u(p_10, (safe_lshift_func_uint16_t_u_u(((((*l_803) = l_802[0][3][0]) == p_877->g_804[2]) >= ((p_10 ^ (safe_rshift_func_int8_t_s_u((((*p_877->g_326) >= (-8L)) >= ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))((l_811 = (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((*p_877->g_326), l_811)), l_794.x))), 0x653909F1L, ((VECTOR(uint32_t, 2))(0x938E3B57L)), ((VECTOR(uint32_t, 8))(0x81AF9464L)), FAKE_DIVERGE(p_877->local_1_offset, get_local_id(1), 10), ((VECTOR(uint32_t, 2))(4294967289UL)), 1UL)), ((VECTOR(uint32_t, 16))(1UL))))).se2, ((VECTOR(uint32_t, 2))(1UL))))), ((VECTOR(uint64_t, 4))(1UL)), 1UL, 1UL)).s2), FAKE_DIVERGE(p_877->group_1_offset, get_group_id(1), 10)))) >= p_877->g_69.w)), (*p_877->g_585))))) , 0x49634490L)), 9UL, 0x5DD2L, 1UL, ((VECTOR(uint16_t, 4))(0xDB5BL)), 1UL, 0x845EL, ((VECTOR(uint16_t, 2))(0x3C7CL)), 1UL)))).sc ^ p_10))) , (void*)0);
    }
    return l_814[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_39 p_877->g_comm_values p_877->l_comm_values p_877->g_66 p_877->g_69 p_877->g_91 p_877->g_99 p_877->g_88 p_877->g_132 p_877->g_138 p_877->g_143 p_877->g_127 permutations p_877->g_161 p_877->g_162 p_877->g_136 p_877->g_51 p_877->g_67 p_877->g_176 p_877->g_182 p_877->g_193 p_877->g_204 p_877->g_205 p_877->g_214 p_877->g_226 p_877->g_228 p_877->g_308 p_877->g_314 p_877->g_326 p_877->g_392 p_877->g_403 p_877->g_420 p_877->g_444 p_877->g_427 p_877->g_424 p_877->g_422 p_877->g_388 p_877->g_561 p_877->g_584 p_877->g_589 p_877->g_579 p_877->g_590 p_877->g_791 p_877->g_421
 * writes: p_877->g_51 p_877->g_39 p_877->g_88 p_877->g_91 p_877->g_136 p_877->g_138 p_877->g_143 p_877->g_182 p_877->g_226 p_877->g_162 p_877->g_228 p_877->g_308 p_877->g_161 p_877->g_326 p_877->g_193 p_877->g_403 p_877->g_444 p_877->g_475 p_877->l_comm_values p_877->g_99 p_877->g_561 p_877->g_584 p_877->g_589 p_877->g_420
 */
int32_t * func_12(int16_t  p_13, struct S0 * p_877)
{ /* block id: 5 */
    int16_t l_24 = 0x56E7L;
    int32_t *l_38 = &p_877->g_39[3][2][1];
    int32_t l_141[8][9] = {{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL},{0x2585D44CL,0x646956F4L,5L,5L,(-7L),5L,5L,0x646956F4L,0x2585D44CL}};
    int8_t *l_142 = &p_877->g_143;
    uint8_t *l_587 = (void*)0;
    uint8_t *l_588[9] = {&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589,&p_877->g_589};
    int32_t *l_763[4];
    uint64_t l_765 = 18446744073709551612UL;
    uint16_t **l_773 = (void*)0;
    uint16_t ***l_772 = &l_773;
    VECTOR(uint32_t, 4) l_774 = (VECTOR(uint32_t, 4))(0xE80F7054L, (VECTOR(uint32_t, 2))(0xE80F7054L, 0x902D640BL), 0x902D640BL);
    int i, j;
    for (i = 0; i < 4; i++)
        l_763[i] = &p_877->g_764;
    l_765 &= ((p_877->g_420.s6 = (p_13 , (safe_mul_func_uint16_t_u_u(func_16((((((safe_sub_func_uint8_t_u_u(l_24, (p_877->g_589 ^= func_25(func_27(((*l_142) |= (safe_add_func_int32_t_s_s((l_141[1][7] ^= (p_13 , func_34(l_24, l_38, (safe_mul_func_uint8_t_u_u((((void*)0 == l_38) || ((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_13, ((+func_46(p_877->g_39[3][2][1], p_877)) > 0x3EL))), 0xC3L)) == p_877->g_comm_values[p_877->tid])), p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))])), p_877))), p_13))), l_38, l_38, l_38, p_877), p_877)))) > p_13) | p_877->g_579) , (*l_38)) , p_877->g_590[3]), p_13, p_877->g_comm_values[p_877->tid], &p_877->g_579, l_38, p_877), 65535UL)))) | p_13);
    (*l_38) = ((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((*p_877->g_326) ^ (safe_sub_func_int32_t_s_s((l_772 != &p_877->g_584), (((((VECTOR(uint32_t, 4))(l_774.xxww)).y == (safe_mod_func_uint32_t_u_u((p_877->g_422.w & ((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((p_877->g_127 || (((1L || (safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(p_877->g_127, (((*p_877->g_51) = ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((p_877->g_88 |= (safe_mod_func_int32_t_s_s((p_13 & (&p_877->g_589 == &p_877->g_589)), FAKE_DIVERGE(p_877->local_0_offset, get_local_id(0), 10)))), 10)) , 0xDC4BL), 0xD6C3L)) <= 0x7FF95F20L)) || 8UL))), p_877->g_791))) , p_13) , (*l_38))), 0x6FL)), (*p_877->g_326))) & 8L)), (*l_38)))) & (-10L)) > 0x2EL)))), 13)) || p_877->g_421.x), p_13)) <= (-6L));
    return (*p_877->g_136);
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_136 p_877->g_51 p_877->g_127 p_877->g_39 p_877->g_69 p_877->g_comm_values p_877->l_comm_values p_877->g_91 p_877->g_579
 * writes: p_877->g_88 p_877->g_91 p_877->g_51
 */
uint16_t  func_16(int32_t * p_17, int32_t  p_18, int32_t  p_19, int32_t * p_20, int32_t * p_21, struct S0 * p_877)
{ /* block id: 235 */
    int32_t *l_591[6][5][1] = {{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}},{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}},{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}},{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}},{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}},{{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]},{&p_877->g_39[0][0][1]}}};
    int i, j, k;
    l_591[3][3][0] = func_27(p_19, l_591[3][3][0], (*p_877->g_136), (*p_877->g_136), p_877);
    if ((*p_20))
    { /* block id: 237 */
        if ((atomic_inc(&p_877->g_atomic_input[50 * get_linear_group_id() + 15]) == 1))
        { /* block id: 239 */
            int32_t l_592 = (-1L);
            for (l_592 = 0; (l_592 >= 13); l_592++)
            { /* block id: 242 */
                int32_t l_596[8][6] = {{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L},{0L,0L,(-1L),(-1L),(-1L),0L}};
                int32_t *l_595[6][3] = {{&l_596[3][3],&l_596[3][0],&l_596[6][0]},{&l_596[3][3],&l_596[3][0],&l_596[6][0]},{&l_596[3][3],&l_596[3][0],&l_596[6][0]},{&l_596[3][3],&l_596[3][0],&l_596[6][0]},{&l_596[3][3],&l_596[3][0],&l_596[6][0]},{&l_596[3][3],&l_596[3][0],&l_596[6][0]}};
                VECTOR(int32_t, 2) l_611 = (VECTOR(int32_t, 2))(0x77ACB484L, 0x32608B29L);
                VECTOR(int32_t, 8) l_612 = (VECTOR(int32_t, 8))(0x623795F4L, (VECTOR(int32_t, 4))(0x623795F4L, (VECTOR(int32_t, 2))(0x623795F4L, 0x7CE03C57L), 0x7CE03C57L), 0x7CE03C57L, 0x623795F4L, 0x7CE03C57L);
                int16_t l_613 = 0x4499L;
                VECTOR(int32_t, 8) l_614 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L);
                VECTOR(int32_t, 16) l_615 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                VECTOR(int32_t, 8) l_616 = (VECTOR(int32_t, 8))(0x77C7B3CDL, (VECTOR(int32_t, 4))(0x77C7B3CDL, (VECTOR(int32_t, 2))(0x77C7B3CDL, 0x0395D976L), 0x0395D976L), 0x0395D976L, 0x77C7B3CDL, 0x0395D976L);
                VECTOR(int32_t, 2) l_617 = (VECTOR(int32_t, 2))(1L, 1L);
                VECTOR(int32_t, 16) l_618 = (VECTOR(int32_t, 16))(0x5BDF7552L, (VECTOR(int32_t, 4))(0x5BDF7552L, (VECTOR(int32_t, 2))(0x5BDF7552L, (-9L)), (-9L)), (-9L), 0x5BDF7552L, (-9L), (VECTOR(int32_t, 2))(0x5BDF7552L, (-9L)), (VECTOR(int32_t, 2))(0x5BDF7552L, (-9L)), 0x5BDF7552L, (-9L), 0x5BDF7552L, (-9L));
                uint16_t l_619 = 65533UL;
                VECTOR(uint64_t, 4) l_620 = (VECTOR(uint64_t, 4))(0x68C4B434DB56B2DEL, (VECTOR(uint64_t, 2))(0x68C4B434DB56B2DEL, 0x3CA381D43F96B48DL), 0x3CA381D43F96B48DL);
                int i, j;
                l_595[3][0] = (void*)0;
                for (l_596[7][3] = 0; (l_596[7][3] == 13); l_596[7][3]++)
                { /* block id: 246 */
                    uint32_t l_599 = 4294967295UL;
                    uint16_t l_600 = 65535UL;
                    VECTOR(uint16_t, 4) l_601 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x1293L), 0x1293L);
                    int32_t l_602 = 0x0C86F296L;
                    uint64_t l_603 = 1UL;
                    int i;
                    l_600 = l_599;
                    l_601.z ^= 0x12E20AFEL;
                    l_603++;
                    for (l_599 = 0; (l_599 >= 26); l_599++)
                    { /* block id: 252 */
                        VECTOR(int32_t, 8) l_608 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x5CDDBE48L), 0x5CDDBE48L), 0x5CDDBE48L, (-3L), 0x5CDDBE48L);
                        VECTOR(int32_t, 8) l_609 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3D937232L), 0x3D937232L), 0x3D937232L, (-1L), 0x3D937232L);
                        int16_t l_610 = 3L;
                        int i;
                        l_610 ^= ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_608.s6324)), ((VECTOR(int32_t, 2))(l_609.s27)).yxyx))).x;
                    }
                }
                l_619 = ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(0x33ABE5D1L, 3L)).yxyx, ((VECTOR(int32_t, 8))(l_611.yxyyxxyy)).odd))), ((VECTOR(int32_t, 4))(l_612.s0261)))).s23, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x589CC898L, ((VECTOR(int32_t, 4))(0x095D4DCEL, 0x7E599332L, 0x465D7123L, 0x75705A22L)), l_613, 0x03098157L, ((VECTOR(int32_t, 8))(l_614.s64025542)), 0L)).sb771)).zwwyzwzyzxzwyzyw)).even, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x5CA87549L, 1L)))), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(0x52EA74FCL, 0x11D92747L)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_615.s0532)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_616.s5016))))))).even))), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_617.xy)).xxyxxyxy, ((VECTOR(int32_t, 4))(l_618.sc346)).xyzzzxxx))).s61))).xyxyyyyy))).s2457077333352122)).s33))), 0L)).w;
                if (l_620.w)
                { /* block id: 257 */
                    int32_t l_621 = 0x0D564BA8L;
                    uint64_t l_646 = 0xF8B07743C44BC228L;
                    for (l_621 = (-18); (l_621 == 21); ++l_621)
                    { /* block id: 260 */
                        VECTOR(int32_t, 16) l_624 = (VECTOR(int32_t, 16))(0x25FC8F15L, (VECTOR(int32_t, 4))(0x25FC8F15L, (VECTOR(int32_t, 2))(0x25FC8F15L, 0x0E03790EL), 0x0E03790EL), 0x0E03790EL, 0x25FC8F15L, 0x0E03790EL, (VECTOR(int32_t, 2))(0x25FC8F15L, 0x0E03790EL), (VECTOR(int32_t, 2))(0x25FC8F15L, 0x0E03790EL), 0x25FC8F15L, 0x0E03790EL, 0x25FC8F15L, 0x0E03790EL);
                        int64_t l_625 = 0x33FC7A64926BE9FDL;
                        uint16_t l_626 = 0UL;
                        uint8_t l_627 = 0UL;
                        uint32_t l_628 = 0x5112F93EL;
                        VECTOR(int16_t, 2) l_629 = (VECTOR(int16_t, 2))(0x2AE3L, (-1L));
                        VECTOR(int16_t, 16) l_630 = (VECTOR(int16_t, 16))(0x717EL, (VECTOR(int16_t, 4))(0x717EL, (VECTOR(int16_t, 2))(0x717EL, 0x61A3L), 0x61A3L), 0x61A3L, 0x717EL, 0x61A3L, (VECTOR(int16_t, 2))(0x717EL, 0x61A3L), (VECTOR(int16_t, 2))(0x717EL, 0x61A3L), 0x717EL, 0x61A3L, 0x717EL, 0x61A3L);
                        VECTOR(int16_t, 16) l_631 = (VECTOR(int16_t, 16))(0x1BD7L, (VECTOR(int16_t, 4))(0x1BD7L, (VECTOR(int16_t, 2))(0x1BD7L, 0x2C05L), 0x2C05L), 0x2C05L, 0x1BD7L, 0x2C05L, (VECTOR(int16_t, 2))(0x1BD7L, 0x2C05L), (VECTOR(int16_t, 2))(0x1BD7L, 0x2C05L), 0x1BD7L, 0x2C05L, 0x1BD7L, 0x2C05L);
                        VECTOR(int16_t, 16) l_632 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3494L), 0x3494L), 0x3494L, 1L, 0x3494L, (VECTOR(int16_t, 2))(1L, 0x3494L), (VECTOR(int16_t, 2))(1L, 0x3494L), 1L, 0x3494L, 1L, 0x3494L);
                        VECTOR(int16_t, 16) l_633 = (VECTOR(int16_t, 16))(0x73FFL, (VECTOR(int16_t, 4))(0x73FFL, (VECTOR(int16_t, 2))(0x73FFL, 0x3E31L), 0x3E31L), 0x3E31L, 0x73FFL, 0x3E31L, (VECTOR(int16_t, 2))(0x73FFL, 0x3E31L), (VECTOR(int16_t, 2))(0x73FFL, 0x3E31L), 0x73FFL, 0x3E31L, 0x73FFL, 0x3E31L);
                        int64_t l_634[2];
                        int16_t l_635 = 0x1226L;
                        VECTOR(int16_t, 4) l_636 = (VECTOR(int16_t, 4))(0x49F0L, (VECTOR(int16_t, 2))(0x49F0L, 0x2F6EL), 0x2F6EL);
                        VECTOR(int16_t, 4) l_637 = (VECTOR(int16_t, 4))(0x6366L, (VECTOR(int16_t, 2))(0x6366L, (-1L)), (-1L));
                        uint16_t l_638 = 0xB2DBL;
                        VECTOR(int16_t, 2) l_639 = (VECTOR(int16_t, 2))(8L, 0x734DL);
                        VECTOR(int16_t, 16) l_640 = (VECTOR(int16_t, 16))(0x423BL, (VECTOR(int16_t, 4))(0x423BL, (VECTOR(int16_t, 2))(0x423BL, 0x6838L), 0x6838L), 0x6838L, 0x423BL, 0x6838L, (VECTOR(int16_t, 2))(0x423BL, 0x6838L), (VECTOR(int16_t, 2))(0x423BL, 0x6838L), 0x423BL, 0x6838L, 0x423BL, 0x6838L);
                        VECTOR(int32_t, 8) l_641 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x727BA94BL), 0x727BA94BL), 0x727BA94BL, 8L, 0x727BA94BL);
                        uint32_t l_642[4] = {0UL,0UL,0UL,0UL};
                        int32_t l_643 = 0x20CA99A5L;
                        uint32_t l_644[6][8] = {{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL},{1UL,0UL,1UL,1UL,0UL,1UL,1UL,0UL}};
                        int32_t l_645 = 0x6A845182L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_634[i] = 0x5B18C2A41D9A4E57L;
                        l_645 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_624.s29b9b5ed)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_642[3] = (((VECTOR(int16_t, 16))((-6L), (l_625 , l_626), (-3L), (l_628 ^= l_627), ((VECTOR(int16_t, 8))(l_629.xxxyyxyy)), (l_641.s3 &= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(l_630.sc66112433e2e2085)).s79))).xyyx)).hi, ((VECTOR(int16_t, 2))(l_631.sbe)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_632.scce6)))).even))).xyyyyxxy)), ((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 2))(l_633.s3a)), l_634[0], ((VECTOR(int16_t, 4))(0L, 0x38E2L, 1L, 0x6495L)).y, 5L, 2L, 6L)))).s39)), l_635, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))((-4L), ((VECTOR(int16_t, 2))(1L, 0x79FFL)), 0L, 0x3167L, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_636.wz)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x6BF3L, 0x1099L)).xxxyxxxx)).s15)))))).odd, 9L, (-1L))), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_637.xxxx)).even, (int16_t)(l_629.y = (l_613 |= l_638)), (int16_t)((VECTOR(int16_t, 4))(l_639.xyxy)).y))).yyyyyxxy)))))).hi)))).wzwwyzxz)).s3670142646410677)).s9923, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_640.s2f75c0bdf0f2958c)).s4d56))))), 7L)).s6072722324735122)).sb), 7L, 3L, (-8L))).sb , 1L)), 0x7FB19337L, l_643, 0x4C7E4CF1L, ((VECTOR(int32_t, 2))(0x3FCC234AL)), 1L, 0x647BC3FBL)), ((VECTOR(int32_t, 8))(0L)))).sfa, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x3BDF21F0L))))), 0x020A4BFCL, 0L)).zyzywwwz))).hi, ((VECTOR(int32_t, 4))(0x442A9088L))))), ((VECTOR(int32_t, 4))(0L))))).wwzywzwxyyxxxwyx, (int32_t)0x68FB46E6L, (int32_t)l_644[0][2]))), ((VECTOR(int32_t, 16))((-3L)))))).s9893)), ((VECTOR(int32_t, 4))(0x5D8F9C59L)))).s4;
                    }
                    if (l_646)
                    { /* block id: 268 */
                        VECTOR(uint32_t, 8) l_647 = (VECTOR(uint32_t, 8))(0x32BD24EBL, (VECTOR(uint32_t, 4))(0x32BD24EBL, (VECTOR(uint32_t, 2))(0x32BD24EBL, 0x26BF105FL), 0x26BF105FL), 0x26BF105FL, 0x32BD24EBL, 0x26BF105FL);
                        uint64_t l_648[1][7] = {{0xF28F8B02676A053DL,0xF28F8B02676A053DL,0xF28F8B02676A053DL,0xF28F8B02676A053DL,0xF28F8B02676A053DL,0xF28F8B02676A053DL,0xF28F8B02676A053DL}};
                        int16_t l_649[9][3] = {{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL},{0x329FL,0L,0x329FL}};
                        int8_t l_650 = 1L;
                        int16_t l_651 = 4L;
                        VECTOR(int32_t, 4) l_652 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 5L), 5L);
                        uint32_t l_653 = 4294967295UL;
                        int32_t l_654 = 4L;
                        VECTOR(int32_t, 8) l_655 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L));
                        VECTOR(int32_t, 4) l_656 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L);
                        VECTOR(int32_t, 2) l_657 = (VECTOR(int32_t, 2))((-5L), 8L);
                        uint16_t l_658 = 0UL;
                        uint8_t l_659[8][6][5] = {{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}},{{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L},{0xD9L,0xB4L,0xA0L,0x88L,0xA3L}}};
                        uint16_t l_660 = 0xD236L;
                        uint32_t l_661 = 0UL;
                        int32_t l_662 = 0x6E13887BL;
                        int32_t l_663 = (-8L);
                        uint32_t l_664 = 4294967289UL;
                        VECTOR(int32_t, 2) l_665 = (VECTOR(int32_t, 2))(0x7EBF39E6L, (-1L));
                        int16_t l_666 = 0x22B1L;
                        uint32_t l_667 = 0x284763E2L;
                        uint16_t l_668 = 65526UL;
                        int32_t l_669 = 1L;
                        int i, j, k;
                        l_649[1][0] = (l_648[0][2] = l_647.s4);
                        l_665.x = ((VECTOR(int32_t, 16))(9L, 0x26C45777L, (l_651 ^= l_650), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_652.xy)).yyyyxyyy, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(l_653, 0L, l_654, 0x11DABF31L, 0x3A8D58D3L, ((VECTOR(int32_t, 2))(l_655.s30)).hi, 0x617D9450L, 0x7662229AL)).s57, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_656.wxwyyyzzxwyywxwy)).sd, ((VECTOR(int32_t, 8))(l_657.xyyyxyxx)).s1, 1L, 0x57BBD989L)).even))).yxxyxyxy))).s5140067766331524, (int32_t)l_658))).s8, l_659[2][3][2], 0x3FB615D5L, 1L, (l_664 = ((l_660 , (l_662 = (l_661 , GROUP_DIVERGE(1, 1)))) , l_663)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_665.xyyyyxxx)).hi)).even)).odd, (l_666 , l_667), l_668, (-1L), 1L, l_669, 6L, 0x21CB13C9L)).se;
                    }
                    else
                    { /* block id: 275 */
                        int32_t *l_670[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_670[i] = (void*)0;
                        l_670[1] = l_670[0];
                    }
                    l_595[3][0] = (void*)0;
                }
                else
                { /* block id: 279 */
                    int32_t l_672 = 0x4A0B18D2L;
                    int32_t *l_671 = &l_672;
                    VECTOR(uint16_t, 8) l_673 = (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x94E9L), 0x94E9L), 0x94E9L, 4UL, 0x94E9L);
                    uint32_t l_674 = 4294967287UL;
                    VECTOR(int32_t, 8) l_678 = (VECTOR(int32_t, 8))(0x6268D210L, (VECTOR(int32_t, 4))(0x6268D210L, (VECTOR(int32_t, 2))(0x6268D210L, 1L), 1L), 1L, 0x6268D210L, 1L);
                    int i;
                    l_671 = l_671;
                    if ((l_674 = l_673.s0))
                    { /* block id: 282 */
                        int32_t l_676 = (-1L);
                        int32_t *l_675 = &l_676;
                        l_671 = l_675;
                    }
                    else
                    { /* block id: 284 */
                        int32_t l_677 = (-1L);
                        l_677 = ((*l_671) = l_677);
                    }
                    if (((VECTOR(int32_t, 4))(l_678.s3001)).x)
                    { /* block id: 288 */
                        int64_t l_679 = 0L;
                        uint32_t l_680 = 4294967286UL;
                        uint8_t l_681 = 0x5AL;
                        uint64_t l_682[10][4][3] = {{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}},{{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL},{1UL,0x7F732B399C210F5AL,18446744073709551615UL}}};
                        VECTOR(int16_t, 2) l_683 = (VECTOR(int16_t, 2))(0x4A5BL, 0x11F0L);
                        VECTOR(int16_t, 4) l_684 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L);
                        VECTOR(uint16_t, 16) l_685 = (VECTOR(uint16_t, 16))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x5364L), 0x5364L), 0x5364L, 4UL, 0x5364L, (VECTOR(uint16_t, 2))(4UL, 0x5364L), (VECTOR(uint16_t, 2))(4UL, 0x5364L), 4UL, 0x5364L, 4UL, 0x5364L);
                        int16_t l_686 = 0L;
                        int32_t l_687 = 3L;
                        int32_t l_688 = 6L;
                        uint32_t l_689 = 4294967289UL;
                        int16_t l_690 = 0x0E55L;
                        int16_t l_691 = 0x61A0L;
                        int32_t l_692 = 0x4E8AE575L;
                        int64_t l_693 = (-3L);
                        int64_t l_694[4][1];
                        uint32_t l_695 = 0xB362B8DAL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_694[i][j] = 0x34408CF951267F11L;
                        }
                        l_687 |= (l_686 = ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(0x70E1L, 0x657CL)).yyxyyyyy, (int16_t)(l_613 &= 0x4833L)))), ((VECTOR(int16_t, 16))(0x0856L, ((l_679 = 0x2254DCA5L) , (l_680 = 0x6E98L)), l_681, l_682[4][3][2], 0x0651L, 1L, (-8L), ((VECTOR(int16_t, 8))(l_683.xyxxxyxy)), 0x68A5L)).lo))).even, ((VECTOR(int16_t, 2))(0x52BCL, 0x4E21L)).xyxx, ((VECTOR(int16_t, 4))(l_684.wzyw))))).lo, ((VECTOR(uint16_t, 2))(l_685.s72))))).even);
                        l_689 = l_688;
                        l_695++;
                    }
                    else
                    { /* block id: 296 */
                        uint8_t l_698 = 8UL;
                        int64_t l_699 = 0x2FE8975774A3A84DL;
                        int32_t l_701[7];
                        int32_t *l_700 = &l_701[1];
                        uint32_t l_702[9] = {0x13435062L,0x13435062L,0x13435062L,0x13435062L,0x13435062L,0x13435062L,0x13435062L,0x13435062L,0x13435062L};
                        VECTOR(int16_t, 8) l_703 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L), 1L, 6L, 1L);
                        int16_t l_704 = 7L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_701[i] = 0L;
                        l_699 ^= l_698;
                        l_671 = l_700;
                        l_704 &= (l_702[1] , (((VECTOR(int16_t, 4))(l_703.s5577)).x , 0x52645AB9L));
                        (*l_700) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(3L, 1L, 0x141F8585L, 0x3B65B81EL)))).zyxzywxyxzywxxyz)))).s6;
                    }
                }
            }
            for (l_592 = 4; (l_592 != 21); l_592 = safe_add_func_int8_t_s_s(l_592, 1))
            { /* block id: 306 */
                int8_t l_707 = 0L;
                l_707 |= 0x7E1E7B4DL;
            }
            unsigned int result = 0;
            result += l_592;
            atomic_add(&p_877->g_special_values[50 * get_linear_group_id() + 15], result);
        }
        else
        { /* block id: 309 */
            (1 + 1);
        }
        if ((atomic_inc(&p_877->l_atomic_input[0]) == 1))
        { /* block id: 313 */
            VECTOR(int64_t, 2) l_708 = (VECTOR(int64_t, 2))(0x16D5A28ADA33087AL, 0x5E1B6D369B1441BDL);
            VECTOR(int64_t, 2) l_709 = (VECTOR(int64_t, 2))(0L, 0x50DA8468B62479F0L);
            VECTOR(int64_t, 8) l_710 = (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 1L), 1L), 1L, 3L, 1L);
            VECTOR(int64_t, 8) l_711 = (VECTOR(int64_t, 8))(0x5F0B5B9B4DAD7207L, (VECTOR(int64_t, 4))(0x5F0B5B9B4DAD7207L, (VECTOR(int64_t, 2))(0x5F0B5B9B4DAD7207L, 0x6017A3931FCBB8C9L), 0x6017A3931FCBB8C9L), 0x6017A3931FCBB8C9L, 0x5F0B5B9B4DAD7207L, 0x6017A3931FCBB8C9L);
            VECTOR(int64_t, 2) l_712 = (VECTOR(int64_t, 2))(0x5FF392A97CEB9A57L, 0x12B1B29D09F76E51L);
            int32_t l_713[10] = {0x65D226FAL,0x57676B55L,0x7B9F0FF4L,0x57676B55L,0x65D226FAL,0x65D226FAL,0x57676B55L,0x7B9F0FF4L,0x57676B55L,0x65D226FAL};
            uint32_t l_714 = 0x5B8E3936L;
            int16_t l_715 = 2L;
            VECTOR(int64_t, 16) l_716 = (VECTOR(int64_t, 16))(0x3B2940661540F62BL, (VECTOR(int64_t, 4))(0x3B2940661540F62BL, (VECTOR(int64_t, 2))(0x3B2940661540F62BL, (-1L)), (-1L)), (-1L), 0x3B2940661540F62BL, (-1L), (VECTOR(int64_t, 2))(0x3B2940661540F62BL, (-1L)), (VECTOR(int64_t, 2))(0x3B2940661540F62BL, (-1L)), 0x3B2940661540F62BL, (-1L), 0x3B2940661540F62BL, (-1L));
            int8_t l_717 = 0x38L;
            uint8_t l_718[7] = {250UL,250UL,250UL,250UL,250UL,250UL,250UL};
            VECTOR(int64_t, 2) l_719 = (VECTOR(int64_t, 2))((-9L), (-6L));
            int32_t l_720 = (-1L);
            uint64_t l_721 = 0UL;
            uint32_t l_722[7] = {0x0C292131L,0x0C292131L,0x0C292131L,0x0C292131L,0x0C292131L,0x0C292131L,0x0C292131L};
            int8_t l_723 = 0x6EL;
            uint64_t l_724[1][8][7] = {{{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL},{0UL,0UL,18446744073709551615UL,0UL,0UL,0UL,18446744073709551615UL}}};
            int32_t l_725 = 5L;
            uint16_t l_726 = 0xF585L;
            int32_t l_727 = 1L;
            uint32_t l_728 = 4294967289UL;
            int32_t l_729 = 1L;
            uint32_t l_730 = 4294967293UL;
            uint16_t l_731 = 0x5D16L;
            VECTOR(int16_t, 2) l_734 = (VECTOR(int16_t, 2))(0x3BDFL, 0L);
            int32_t *l_735 = &l_713[1];
            int32_t *l_736 = &l_713[1];
            int i, j, k;
            l_729 = ((((l_725 = ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(l_708.yxxx))))).wyzxywxz, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x299A01F6E51E0E8FL, 4L)).yyxyxyyy)).even)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_709.xxyxyyyyxyxyxxxx)).lo)), 0x5376362BBE2B69B6L, (-5L), 0x19775C14286173AAL, 0L)).odd, ((VECTOR(int64_t, 2))(l_710.s30)).xyxyxxxx))).s2771112267502770, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(l_711.s16)).yxyyxyxx, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(l_712.xy)).yxyyxxyx, (int64_t)(l_713[1] , (l_714 , l_715))))), ((VECTOR(int64_t, 4))((-1L), (l_709.y &= 0x123F36310C6C2AAEL), 0L, 0x36D05EA611300A02L)).ywxwxywz))), ((VECTOR(int64_t, 16))(l_716.sa739f945bcab457c)).s2, l_717, 0L, l_718[4], ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x72B349B44CB27601L, 0x2B360F8306CB72A8L, 0L, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(l_719.yxxxyyxy)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_720, 0x22E23E81295A9869L, ((l_722[1] = l_721) , l_723), l_724[0][7][5], ((VECTOR(int64_t, 2))(0x0361B53E15B4EC0BL)), ((VECTOR(int64_t, 8))(0x309B53C2405B6C01L)), (-1L), 9L)).sb72e))))), 9L)).s7741604733376126)).sec88)))).even)).odd, ((VECTOR(int64_t, 2))(3L)), (-1L)))))).s2268)).lo)).yxxxyxxx)).lo)), ((VECTOR(int64_t, 4))(6L)), ((VECTOR(int64_t, 4))((-2L)))))).w) , l_726) , l_727) , l_728);
            l_730 = ((VECTOR(int32_t, 4))(0x2490FC17L, 0x4FE4F266L, 0x65AC8224L, (-1L))).x;
            l_731++;
            l_736 = (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x573CL, 0L)).xyxyxyyyyyxyyxyy)), ((VECTOR(int16_t, 4))(l_734.yyyy)).wyyyzwyzzwzzzzxy))).s35)).yxyx)), (-9L), 0x6FD9L, 0x589FL, 0x4EB6L)).s5 , l_735);
            unsigned int result = 0;
            result += l_708.y;
            result += l_708.x;
            result += l_709.y;
            result += l_709.x;
            result += l_710.s7;
            result += l_710.s6;
            result += l_710.s5;
            result += l_710.s4;
            result += l_710.s3;
            result += l_710.s2;
            result += l_710.s1;
            result += l_710.s0;
            result += l_711.s7;
            result += l_711.s6;
            result += l_711.s5;
            result += l_711.s4;
            result += l_711.s3;
            result += l_711.s2;
            result += l_711.s1;
            result += l_711.s0;
            result += l_712.y;
            result += l_712.x;
            int l_713_i0;
            for (l_713_i0 = 0; l_713_i0 < 10; l_713_i0++) {
                result += l_713[l_713_i0];
            }
            result += l_714;
            result += l_715;
            result += l_716.sf;
            result += l_716.se;
            result += l_716.sd;
            result += l_716.sc;
            result += l_716.sb;
            result += l_716.sa;
            result += l_716.s9;
            result += l_716.s8;
            result += l_716.s7;
            result += l_716.s6;
            result += l_716.s5;
            result += l_716.s4;
            result += l_716.s3;
            result += l_716.s2;
            result += l_716.s1;
            result += l_716.s0;
            result += l_717;
            int l_718_i0;
            for (l_718_i0 = 0; l_718_i0 < 7; l_718_i0++) {
                result += l_718[l_718_i0];
            }
            result += l_719.y;
            result += l_719.x;
            result += l_720;
            result += l_721;
            int l_722_i0;
            for (l_722_i0 = 0; l_722_i0 < 7; l_722_i0++) {
                result += l_722[l_722_i0];
            }
            result += l_723;
            int l_724_i0, l_724_i1, l_724_i2;
            for (l_724_i0 = 0; l_724_i0 < 1; l_724_i0++) {
                for (l_724_i1 = 0; l_724_i1 < 8; l_724_i1++) {
                    for (l_724_i2 = 0; l_724_i2 < 7; l_724_i2++) {
                        result += l_724[l_724_i0][l_724_i1][l_724_i2];
                    }
                }
            }
            result += l_725;
            result += l_726;
            result += l_727;
            result += l_728;
            result += l_729;
            result += l_730;
            result += l_731;
            result += l_734.y;
            result += l_734.x;
            atomic_add(&p_877->l_special_values[0], result);
        }
        else
        { /* block id: 321 */
            (1 + 1);
        }
        return p_18;
    }
    else
    { /* block id: 325 */
        uint16_t l_760 = 65530UL;
        if ((atomic_inc(&p_877->g_atomic_input[50 * get_linear_group_id() + 10]) == 2))
        { /* block id: 327 */
            VECTOR(int32_t, 2) l_737 = (VECTOR(int32_t, 2))(0x1BECE79EL, 0x18D6B5C6L);
            VECTOR(int16_t, 16) l_738 = (VECTOR(int16_t, 16))(0x6BD8L, (VECTOR(int16_t, 4))(0x6BD8L, (VECTOR(int16_t, 2))(0x6BD8L, 0x5E6EL), 0x5E6EL), 0x5E6EL, 0x6BD8L, 0x5E6EL, (VECTOR(int16_t, 2))(0x6BD8L, 0x5E6EL), (VECTOR(int16_t, 2))(0x6BD8L, 0x5E6EL), 0x6BD8L, 0x5E6EL, 0x6BD8L, 0x5E6EL);
            int8_t l_739 = (-7L);
            int32_t l_740 = 0L;
            VECTOR(int16_t, 8) l_741 = (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x33F6L), 0x33F6L), 0x33F6L, (-6L), 0x33F6L);
            uint32_t l_742 = 1UL;
            int32_t l_743 = (-1L);
            uint64_t l_744[4];
            uint8_t l_745[3][3] = {{3UL,3UL,3UL},{3UL,3UL,3UL},{3UL,3UL,3UL}};
            int32_t l_746[3];
            uint32_t l_747 = 0x22907268L;
            int8_t l_748 = 0L;
            VECTOR(int8_t, 4) l_749 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-9L)), (-9L));
            VECTOR(int16_t, 4) l_750 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L));
            VECTOR(int16_t, 8) l_751 = (VECTOR(int16_t, 8))(0x2BFFL, (VECTOR(int16_t, 4))(0x2BFFL, (VECTOR(int16_t, 2))(0x2BFFL, 0x29D9L), 0x29D9L), 0x29D9L, 0x2BFFL, 0x29D9L);
            VECTOR(int16_t, 2) l_752 = (VECTOR(int16_t, 2))((-1L), 0L);
            VECTOR(int16_t, 8) l_753 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5B8DL), 0x5B8DL), 0x5B8DL, (-1L), 0x5B8DL);
            int32_t l_754 = 0x24EA10F0L;
            uint64_t l_755 = 1UL;
            int16_t l_756 = 0x4220L;
            uint32_t l_757 = 4294967295UL;
            int64_t l_758 = 0x15321BFF66A76538L;
            int32_t l_759 = 0x7F1150E3L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_744[i] = 18446744073709551611UL;
            for (i = 0; i < 3; i++)
                l_746[i] = 0x3886793BL;
            l_759 ^= (l_758 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x436757C7L, 0x317E2ABEL)).xyyy, ((VECTOR(int32_t, 4))(l_737.yxyx)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(0x2D99L, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_738.sbbf3)).zyzzxxwwxzxxzyzz)).s7e))), (l_738.s6 = l_739), l_740, 0x1A27L, ((VECTOR(int16_t, 2))(l_741.s22)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-6L), (l_743 = l_742), 0x73BBL, (-5L), 0L, (l_744[2] , (l_746[1] = l_745[1][2])), ((VECTOR(int16_t, 4))(0x70BBL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x6EF8L, 0L, 0x4C37L, 1L)).hi)), (-2L))), ((VECTOR(int16_t, 2))(0L, 0x153AL)).lo, (l_748 = l_747), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(0x7F2BL, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(l_749.wwxxwzxzzyxzyxyx)).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(8UL, 0x97L)))).xxxyyxxx))).s1, ((VECTOR(int16_t, 4))(l_750.wzxz)), (-1L), 0x7C3CL, ((VECTOR(int16_t, 8))(l_751.s44751737)))).s6f, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_752.xyyxxyyx)).hi)).xxxyywww)).s5, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 2))(2L, 0x500DL)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x62AAL, 0x7F49L)).yyxy)), (l_738.s9 |= (l_751.s2 = (FAKE_DIVERGE(p_877->group_2_offset, get_group_id(2), 10) , (l_753.s2 = (l_753.s6 , l_754))))), ((VECTOR(int16_t, 8))(0x1032L)))).s0d, ((VECTOR(int16_t, 2))(4L))))), (int16_t)l_755))), 0x54D3L)).xwzywzxyxyzwyzzx)).lo, ((VECTOR(int16_t, 8))(4L))))).s10, ((VECTOR(int16_t, 2))((-1L)))))), 0x5DFFL, (-7L))).s7, ((VECTOR(int16_t, 2))((-4L))), ((VECTOR(int16_t, 8))((-1L))), 0x2A79L, ((VECTOR(int16_t, 2))(0L)), (-8L), 1L)).s4b42)), (-1L), ((VECTOR(int16_t, 2))(7L)), (-1L))).even, ((VECTOR(uint16_t, 8))(65533UL))))), (int32_t)l_756, (int32_t)l_757))).even))).hi)).odd);
            unsigned int result = 0;
            result += l_737.y;
            result += l_737.x;
            result += l_738.sf;
            result += l_738.se;
            result += l_738.sd;
            result += l_738.sc;
            result += l_738.sb;
            result += l_738.sa;
            result += l_738.s9;
            result += l_738.s8;
            result += l_738.s7;
            result += l_738.s6;
            result += l_738.s5;
            result += l_738.s4;
            result += l_738.s3;
            result += l_738.s2;
            result += l_738.s1;
            result += l_738.s0;
            result += l_739;
            result += l_740;
            result += l_741.s7;
            result += l_741.s6;
            result += l_741.s5;
            result += l_741.s4;
            result += l_741.s3;
            result += l_741.s2;
            result += l_741.s1;
            result += l_741.s0;
            result += l_742;
            result += l_743;
            int l_744_i0;
            for (l_744_i0 = 0; l_744_i0 < 4; l_744_i0++) {
                result += l_744[l_744_i0];
            }
            int l_745_i0, l_745_i1;
            for (l_745_i0 = 0; l_745_i0 < 3; l_745_i0++) {
                for (l_745_i1 = 0; l_745_i1 < 3; l_745_i1++) {
                    result += l_745[l_745_i0][l_745_i1];
                }
            }
            int l_746_i0;
            for (l_746_i0 = 0; l_746_i0 < 3; l_746_i0++) {
                result += l_746[l_746_i0];
            }
            result += l_747;
            result += l_748;
            result += l_749.w;
            result += l_749.z;
            result += l_749.y;
            result += l_749.x;
            result += l_750.w;
            result += l_750.z;
            result += l_750.y;
            result += l_750.x;
            result += l_751.s7;
            result += l_751.s6;
            result += l_751.s5;
            result += l_751.s4;
            result += l_751.s3;
            result += l_751.s2;
            result += l_751.s1;
            result += l_751.s0;
            result += l_752.y;
            result += l_752.x;
            result += l_753.s7;
            result += l_753.s6;
            result += l_753.s5;
            result += l_753.s4;
            result += l_753.s3;
            result += l_753.s2;
            result += l_753.s1;
            result += l_753.s0;
            result += l_754;
            result += l_755;
            result += l_756;
            result += l_757;
            result += l_758;
            result += l_759;
            atomic_add(&p_877->g_special_values[50 * get_linear_group_id() + 10], result);
        }
        else
        { /* block id: 337 */
            (1 + 1);
        }
        ++l_760;
    }
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_66 p_877->g_67 p_877->g_176 p_877->g_182 p_877->g_69 p_877->g_136 p_877->g_51 p_877->g_91 p_877->l_comm_values p_877->g_99 p_877->g_161 p_877->g_193 p_877->g_88 p_877->g_204 p_877->g_205 p_877->g_214 p_877->g_226 p_877->g_162 p_877->g_comm_values p_877->g_228 p_877->g_143 p_877->g_308 p_877->g_314 p_877->g_326 p_877->g_127 p_877->g_39 p_877->g_392 p_877->g_132 p_877->g_403 p_877->g_420 p_877->g_444 p_877->g_427 p_877->g_424 p_877->g_422 p_877->g_388 p_877->g_138 p_877->g_561 p_877->g_584
 * writes: p_877->g_182 p_877->g_91 p_877->g_226 p_877->g_162 p_877->g_138 p_877->g_228 p_877->g_308 p_877->g_161 p_877->g_326 p_877->g_88 p_877->g_51 p_877->g_193 p_877->g_403 p_877->g_444 p_877->g_475 p_877->l_comm_values p_877->g_39 p_877->g_99 p_877->g_561 p_877->g_584
 */
uint8_t  func_25(int32_t * p_26, struct S0 * p_877)
{ /* block id: 67 */
    int32_t **l_173 = (void*)0;
    VECTOR(uint16_t, 8) l_174 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65526UL), 65526UL), 65526UL, 0UL, 65526UL);
    VECTOR(uint16_t, 2) l_175 = (VECTOR(uint16_t, 2))(65531UL, 3UL);
    VECTOR(uint32_t, 2) l_179 = (VECTOR(uint32_t, 2))(4294967295UL, 0xDCA04AF3L);
    uint32_t *l_180 = (void*)0;
    uint32_t *l_181 = &p_877->g_182;
    int16_t *l_183[1][10] = {{&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88,&p_877->g_88}};
    int16_t *l_184 = &p_877->g_88;
    int32_t l_185 = 0L;
    VECTOR(int64_t, 8) l_188 = (VECTOR(int64_t, 8))(0x6685201E680CEB50L, (VECTOR(int64_t, 4))(0x6685201E680CEB50L, (VECTOR(int64_t, 2))(0x6685201E680CEB50L, 0x7C2DB644A8C9D4E1L), 0x7C2DB644A8C9D4E1L), 0x7C2DB644A8C9D4E1L, 0x6685201E680CEB50L, 0x7C2DB644A8C9D4E1L);
    VECTOR(uint64_t, 2) l_202 = (VECTOR(uint64_t, 2))(0x318F5E2BB6A2AB4BL, 0xDFEF36821A406DD9L);
    VECTOR(int8_t, 8) l_203 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
    VECTOR(int8_t, 2) l_206 = (VECTOR(int8_t, 2))((-9L), (-6L));
    VECTOR(int8_t, 2) l_207 = (VECTOR(int8_t, 2))(0x35L, 0x38L);
    uint16_t *l_221 = (void*)0;
    uint16_t *l_222 = (void*)0;
    uint16_t *l_223 = (void*)0;
    uint16_t *l_224 = (void*)0;
    uint16_t *l_225[5][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    uint8_t *l_227[10][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int32_t l_334 = 0L;
    int32_t l_335 = 0x69DBB44FL;
    int32_t l_336 = 0x3A27F2B7L;
    int32_t l_337 = 0x1C09DDFBL;
    int16_t l_338 = 0x2E40L;
    int32_t l_339 = 0L;
    int32_t l_340[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    uint32_t l_356 = 4294967295UL;
    int32_t *l_379 = (void*)0;
    VECTOR(uint32_t, 8) l_419 = (VECTOR(uint32_t, 8))(0x292A9E3AL, (VECTOR(uint32_t, 4))(0x292A9E3AL, (VECTOR(uint32_t, 2))(0x292A9E3AL, 0x4BFA430EL), 0x4BFA430EL), 0x4BFA430EL, 0x292A9E3AL, 0x4BFA430EL);
    VECTOR(int8_t, 8) l_425 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1CL), 0x1CL), 0x1CL, 1L, 0x1CL);
    VECTOR(uint64_t, 16) l_470 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0xE015F75C708B9A4DL), 0xE015F75C708B9A4DL), 0xE015F75C708B9A4DL, 6UL, 0xE015F75C708B9A4DL, (VECTOR(uint64_t, 2))(6UL, 0xE015F75C708B9A4DL), (VECTOR(uint64_t, 2))(6UL, 0xE015F75C708B9A4DL), 6UL, 0xE015F75C708B9A4DL, 6UL, 0xE015F75C708B9A4DL);
    VECTOR(uint64_t, 4) l_472 = (VECTOR(uint64_t, 4))(0x4DFFEFCEEE1A16E8L, (VECTOR(uint64_t, 2))(0x4DFFEFCEEE1A16E8L, 1UL), 1UL);
    VECTOR(uint64_t, 16) l_486 = (VECTOR(uint64_t, 16))(0x5D755BFACABC7911L, (VECTOR(uint64_t, 4))(0x5D755BFACABC7911L, (VECTOR(uint64_t, 2))(0x5D755BFACABC7911L, 9UL), 9UL), 9UL, 0x5D755BFACABC7911L, 9UL, (VECTOR(uint64_t, 2))(0x5D755BFACABC7911L, 9UL), (VECTOR(uint64_t, 2))(0x5D755BFACABC7911L, 9UL), 0x5D755BFACABC7911L, 9UL, 0x5D755BFACABC7911L, 9UL);
    VECTOR(int64_t, 2) l_532 = (VECTOR(int64_t, 2))(9L, 0x10A23038FE283C4CL);
    VECTOR(uint64_t, 16) l_545 = (VECTOR(uint64_t, 16))(0xFE8112A85DEA4E45L, (VECTOR(uint64_t, 4))(0xFE8112A85DEA4E45L, (VECTOR(uint64_t, 2))(0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL), 0x9EF59FACED20697FL), 0x9EF59FACED20697FL, 0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL, (VECTOR(uint64_t, 2))(0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL), (VECTOR(uint64_t, 2))(0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL), 0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL, 0xFE8112A85DEA4E45L, 0x9EF59FACED20697FL);
    int64_t l_578 = 0x6C68FAC50BF0F0E2L;
    uint16_t ** volatile *l_586 = &p_877->g_584;
    int i, j, k;
    l_185 |= (safe_lshift_func_uint16_t_u_u(((l_173 != (*p_877->g_66)) , ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(l_174.s1071022202063752)).s8d52, ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(l_175.yyyyxxyyxxxxxxxy)).odd, ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(0x3CA4L, ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 4))(65531UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(p_877->g_176.s13)).xxxy, ((VECTOR(uint16_t, 8))(0x1E4FL, (safe_sub_func_uint16_t_u_u(((((*l_181) |= ((VECTOR(uint32_t, 4))(l_179.xxxy)).w) > 0x2EA30448L) > (l_183[0][1] != (l_184 = ((((l_183[0][4] == (void*)0) == p_877->g_69.x) , (**p_877->g_136)) , l_183[0][1])))), p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))])), ((VECTOR(uint16_t, 4))(2UL)), 0x3F85L, 0x99A0L)).hi))), ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 4))(65532UL))))))), 0x47D8L, p_877->g_99, 65534UL, 0UL)).s3734343005140735)), ((VECTOR(uint16_t, 16))(0x82D4L))))).s0d)), 0xBA12L)), ((VECTOR(uint16_t, 4))(4UL))))), p_877->g_182, 0x7182L, 65535UL)).s4315233632543466, ((VECTOR(uint16_t, 16))(65528UL)), ((VECTOR(uint16_t, 16))(0x0F0BL))))).hi))).odd))), ((VECTOR(uint16_t, 4))(65532UL))))).y), 9));
    (*p_877->g_51) = (safe_add_func_int64_t_s_s((+((VECTOR(int64_t, 8))(l_188.s04320767)).s2), l_174.s5));
    if (((*p_877->g_51) = (safe_lshift_func_int8_t_s_u((p_877->g_161.y , (safe_lshift_func_int16_t_s_s((((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(p_877->g_193.yzwwxwwywyzzzwzw)), ((VECTOR(int16_t, 8))((safe_div_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_202.yyyx)).w, (((*p_877->g_51) ^ (p_877->g_88 ^ ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_203.s5674072403667252)).s36)), 0x13L, (-1L))).zyxxyzxxxyyzzzxw, (int8_t)l_175.y))).s14)))), 0x60L, 0x31L)).odd, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(p_877->g_204.xyyzyywy)), ((VECTOR(int8_t, 8))(p_877->g_205.s0ad77e3b)), ((VECTOR(int8_t, 16))(l_206.xyxyyxyxyyyyxxxx)).even))).even, ((VECTOR(int8_t, 4))(l_207.yyyy))))).wyxzwxxy, ((VECTOR(int8_t, 4))((safe_sub_func_uint32_t_u_u(l_202.x, (l_185 = ((safe_div_func_int16_t_s_s(((p_877->g_161.x != (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_877->g_214.xz)))).even == (((safe_add_func_int32_t_s_s(((void*)0 != (*p_877->g_136)), (safe_div_func_uint8_t_u_u((p_877->g_162.x = ((safe_mul_func_uint16_t_u_u((p_877->g_226[3] ^= GROUP_DIVERGE(0, 1)), l_207.y)) , p_877->g_162.z)), l_207.x)))) > p_877->g_comm_values[p_877->tid]) > l_174.s6))) || 0x066DL), p_877->g_176.s4)) > p_877->g_88)))), p_877->g_204.z, 0x02L, (-1L))).wxywywww))).s11))).xxxyyxxx, ((VECTOR(int8_t, 8))(8L)), ((VECTOR(int8_t, 8))((-3L)))))).s7)) , p_877->g_99))), 4)), l_175.x)) , p_877->g_69.x), GROUP_DIVERGE(2, 1))), (-5L), 0x5BCDL, (-9L), 0x7949L, 0x375DL, 0L, 0x4461L)).s2241220457361730))).sdf)))).xxyyyyyxyxxxyxyx, ((VECTOR(int16_t, 16))(0x3E7FL))))).s4 < 0x5BC1L), p_877->g_228[1]))), p_877->g_161.x))))
    { /* block id: 76 */
        VECTOR(int32_t, 16) l_302 = (VECTOR(int32_t, 16))(0x22A10F93L, (VECTOR(int32_t, 4))(0x22A10F93L, (VECTOR(int32_t, 2))(0x22A10F93L, 1L), 1L), 1L, 0x22A10F93L, 1L, (VECTOR(int32_t, 2))(0x22A10F93L, 1L), (VECTOR(int32_t, 2))(0x22A10F93L, 1L), 0x22A10F93L, 1L, 0x22A10F93L, 1L);
        int16_t l_309[10] = {0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L,0x34F6L};
        VECTOR(int32_t, 8) l_310 = (VECTOR(int32_t, 8))(0x2120455CL, (VECTOR(int32_t, 4))(0x2120455CL, (VECTOR(int32_t, 2))(0x2120455CL, 0x2ABB5BDFL), 0x2ABB5BDFL), 0x2ABB5BDFL, 0x2120455CL, 0x2ABB5BDFL);
        int32_t **l_313 = &p_877->g_51;
        int8_t *l_325 = (void*)0;
        int8_t *l_327 = &p_877->g_226[0];
        int32_t *l_330 = (void*)0;
        int32_t *l_331 = (void*)0;
        int32_t *l_332 = (void*)0;
        int32_t *l_333[1][6][7] = {{{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0},{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0},{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0},{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0},{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0},{&p_877->g_91,&p_877->g_39[1][0][7],&p_877->g_39[4][3][5],(void*)0,&p_877->g_91,&p_877->g_91,(void*)0}}};
        int8_t l_341 = (-10L);
        int16_t l_342 = 0x24D5L;
        uint16_t l_343 = 0UL;
        VECTOR(uint32_t, 16) l_418 = (VECTOR(uint32_t, 16))(0x9BC41C26L, (VECTOR(uint32_t, 4))(0x9BC41C26L, (VECTOR(uint32_t, 2))(0x9BC41C26L, 1UL), 1UL), 1UL, 0x9BC41C26L, 1UL, (VECTOR(uint32_t, 2))(0x9BC41C26L, 1UL), (VECTOR(uint32_t, 2))(0x9BC41C26L, 1UL), 0x9BC41C26L, 1UL, 0x9BC41C26L, 1UL);
        VECTOR(uint8_t, 4) l_428 = (VECTOR(uint8_t, 4))(0xB8L, (VECTOR(uint8_t, 2))(0xB8L, 1UL), 1UL);
        uint64_t l_498 = 0UL;
        int32_t ***l_512 = &p_877->g_136;
        int32_t ****l_511 = &l_512;
        int8_t l_562 = 0x66L;
        VECTOR(int8_t, 16) l_567 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x7CL), 0x7CL), 0x7CL, (-1L), 0x7CL, (VECTOR(int8_t, 2))((-1L), 0x7CL), (VECTOR(int8_t, 2))((-1L), 0x7CL), (-1L), 0x7CL, (-1L), 0x7CL);
        int64_t l_577 = 1L;
        int64_t l_580 = 0x06934F45CA0B9075L;
        int i, j, k;
        if ((p_877->g_176.s3 && (*p_877->g_51)))
        { /* block id: 77 */
            int32_t ***l_300 = (void*)0;
            int32_t ***l_301[3];
            uint64_t *l_303 = &p_877->g_138;
            uint64_t *l_304 = (void*)0;
            uint64_t *l_305 = (void*)0;
            uint64_t *l_306 = &p_877->g_228[1];
            uint64_t *l_307[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (i = 0; i < 3; i++)
                l_301[i] = &p_877->g_136;
            if ((atomic_inc(&p_877->l_atomic_input[28]) == 0))
            { /* block id: 79 */
                int64_t l_229 = 0L;
                int32_t l_258 = 1L;
                int8_t l_259 = 1L;
                l_229 |= ((VECTOR(int32_t, 4))(0x54A45373L, ((VECTOR(int32_t, 2))(0L, 0L)), 1L)).w;
                for (l_229 = 27; (l_229 == (-9)); --l_229)
                { /* block id: 83 */
                    uint32_t l_232 = 0xA8398D24L;
                    VECTOR(uint32_t, 2) l_233 = (VECTOR(uint32_t, 2))(0x98EC5190L, 4294967295UL);
                    uint16_t l_234 = 65535UL;
                    uint32_t l_235 = 9UL;
                    int16_t l_236 = 8L;
                    int64_t l_237 = 0x37493E852797F1FAL;
                    VECTOR(uint32_t, 16) l_238 = (VECTOR(uint32_t, 16))(0x76ED7C35L, (VECTOR(uint32_t, 4))(0x76ED7C35L, (VECTOR(uint32_t, 2))(0x76ED7C35L, 0x0CF57469L), 0x0CF57469L), 0x0CF57469L, 0x76ED7C35L, 0x0CF57469L, (VECTOR(uint32_t, 2))(0x76ED7C35L, 0x0CF57469L), (VECTOR(uint32_t, 2))(0x76ED7C35L, 0x0CF57469L), 0x76ED7C35L, 0x0CF57469L, 0x76ED7C35L, 0x0CF57469L);
                    VECTOR(uint32_t, 8) l_239 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 8UL), 8UL), 8UL, 4294967288UL, 8UL);
                    int64_t l_240 = 0x2FB69D791E13B9E1L;
                    int8_t l_243 = (-7L);
                    int8_t *l_242 = &l_243;
                    int8_t **l_241 = &l_242;
                    int8_t **l_244[6][4] = {{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242},{&l_242,&l_242,&l_242,&l_242}};
                    int8_t **l_245 = &l_242;
                    int16_t l_246 = 5L;
                    int16_t l_247 = 0x5209L;
                    int8_t l_248 = 1L;
                    int32_t l_250 = (-3L);
                    int32_t *l_249 = &l_250;
                    int32_t *l_251[10][8][3] = {{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}},{{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250},{&l_250,&l_250,&l_250}}};
                    int i, j, k;
                    l_245 = (l_241 = (l_244[5][3] = (l_232 , (((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(l_233.xxyy)).wzyywyyz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xB1AC3C38L, 1UL)).yxxyyyxyxxyyyxyy)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xB49962CDL, 0xD19E72E9L)).xyxy)).wywwzwwy))).odd, ((VECTOR(uint32_t, 2))(0xCFBF0028L, 0x90D92970L)).xxxy))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))((l_237 = (l_234 , (l_235 , l_236))), 5UL, 0xE3909E9DL, 1UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_238.sacd80ad728190962)).s16e6))))).odd, ((VECTOR(uint32_t, 8))(l_239.s70445654)).s00))), 4294967290UL, 0xFB72610CL)).yyxwywwy)).s73)).xyyxxxxy)).odd))).x , (l_240 , l_241)))));
                    l_248 = (l_247 = l_246);
                    l_251[8][2][0] = l_249;
                    for (l_235 = 0; (l_235 <= 42); l_235 = safe_add_func_uint8_t_u_u(l_235, 5))
                    { /* block id: 93 */
                        int16_t l_254 = 0x027DL;
                        uint8_t l_255[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_255[i] = 254UL;
                        l_255[0]--;
                    }
                }
                if ((l_259 |= l_258))
                { /* block id: 98 */
                    int32_t l_261 = (-1L);
                    int32_t *l_260 = &l_261;
                    int32_t *l_262 = &l_261;
                    int32_t l_263[2];
                    uint32_t l_264 = 0x9AE9C6EBL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_263[i] = 0x18105980L;
                    l_262 = l_260;
                    l_258 |= (l_264 = l_263[0]);
                }
                else
                { /* block id: 102 */
                    uint8_t l_265 = 246UL;
                    uint8_t l_266 = 0xEBL;
                    uint16_t l_269 = 0x642EL;
                    l_258 = (l_265 , ((l_266--) , 0x10149108L));
                    if (l_269)
                    { /* block id: 105 */
                        int32_t l_271[4][1] = {{1L},{1L},{1L},{1L}};
                        int32_t *l_270[3];
                        int32_t *l_272 = (void*)0;
                        int32_t *l_273 = &l_271[3][0];
                        int32_t *l_274 = &l_271[3][0];
                        int32_t *l_275 = &l_271[0][0];
                        uint32_t l_276 = 1UL;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_270[i] = &l_271[3][0];
                        l_273 = (l_272 = (l_270[0] = l_270[0]));
                        l_275 = l_274;
                        l_258 = l_276;
                    }
                    else
                    { /* block id: 111 */
                        int32_t l_278 = 1L;
                        int32_t *l_277 = &l_278;
                        int32_t *l_279 = &l_278;
                        uint8_t l_280 = 255UL;
                        uint32_t l_281 = 0xDDE81AF9L;
                        VECTOR(uint64_t, 8) l_284 = (VECTOR(uint64_t, 8))(0xABAF3FF8AF2F0B5BL, (VECTOR(uint64_t, 4))(0xABAF3FF8AF2F0B5BL, (VECTOR(uint64_t, 2))(0xABAF3FF8AF2F0B5BL, 0xD52452631DDC3FBEL), 0xD52452631DDC3FBEL), 0xD52452631DDC3FBEL, 0xABAF3FF8AF2F0B5BL, 0xD52452631DDC3FBEL);
                        int i;
                        l_279 = l_277;
                        l_280 &= (l_258 = 6L);
                        ++l_281;
                        ++l_284.s6;
                    }
                }
                unsigned int result = 0;
                result += l_229;
                result += l_258;
                result += l_259;
                atomic_add(&p_877->l_special_values[28], result);
            }
            else
            { /* block id: 119 */
                (1 + 1);
            }
            (**p_877->g_136) = (safe_unary_minus_func_int8_t_s((((*p_26) < (safe_lshift_func_int16_t_s_u((((l_185 = (safe_mul_func_uint16_t_u_u((p_877->g_143 != ((safe_sub_func_int8_t_s_s(((p_877->g_193.x | (((safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((((l_173 = &p_877->g_51) == (*p_877->g_66)) >= (p_877->g_308 &= ((*l_306) = (((*l_303) = (l_302.sf == (l_207.x | (((((void*)0 == &p_877->g_182) , 0UL) , l_188.s3) > p_877->g_176.s0)))) && 0x10358382F8B824F0L)))) ^ GROUP_DIVERGE(1, 1)), FAKE_DIVERGE(p_877->global_2_offset, get_global_id(2), 10))) == l_302.sc) <= 0x78CFBBEBAA8C972FL), p_877->g_91)) , p_877->g_205.sb) , GROUP_DIVERGE(0, 1)), l_202.y)) , (**l_173)) , 18446744073709551615UL)) || l_309[8]), l_203.s0)) >= l_179.x)), 0x1953L))) | l_206.y) <= 1L), FAKE_DIVERGE(p_877->global_0_offset, get_global_id(0), 10)))) ^ l_302.s7)));
            (*p_26) &= (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_310.s2243)).even)).even >= (safe_mul_func_uint16_t_u_u(((*p_877->g_66) != (l_313 = &p_877->g_51)), ((VECTOR(uint16_t, 8))(0x639FL, ((VECTOR(uint16_t, 4))(p_877->g_314.wzzx)), (p_877->g_161.x = p_877->g_comm_values[p_877->tid]), 0xB326L, 65527UL)).s0)));
        }
        else
        { /* block id: 131 */
            int8_t **l_328 = &p_877->g_326;
            int32_t l_329 = 0x37A51790L;
            (**l_313) = (safe_mul_func_uint16_t_u_u(p_877->g_69.y, (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((p_877->g_176.s4 | (**l_313)), 5)) == ((p_877->g_88 = (((((safe_sub_func_int8_t_s_s(0L, GROUP_DIVERGE(2, 1))) , (safe_mod_func_uint32_t_u_u(((**l_313) ^ (l_325 == ((*l_328) = (l_327 = p_877->g_326)))), (**l_313)))) == p_877->g_226[3]) < l_329) == 0UL)) >= 65535UL)), FAKE_DIVERGE(p_877->group_0_offset, get_group_id(0), 10)))));
        }
        l_343--;
        if ((**p_877->g_136))
        { /* block id: 138 */
            int32_t l_350 = 5L;
            int32_t l_351 = 0L;
            int32_t l_353 = 0x353283B9L;
            int32_t l_355[4][1][6] = {{{0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L}},{{0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L}},{{0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L}},{{0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L,0x0B8B2C49L}}};
            int32_t l_375 = 0L;
            VECTOR(uint32_t, 16) l_415 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0x01A1E7A2L), 0x01A1E7A2L), 0x01A1E7A2L, 7UL, 0x01A1E7A2L, (VECTOR(uint32_t, 2))(7UL, 0x01A1E7A2L), (VECTOR(uint32_t, 2))(7UL, 0x01A1E7A2L), 7UL, 0x01A1E7A2L, 7UL, 0x01A1E7A2L);
            VECTOR(int32_t, 8) l_479 = (VECTOR(int32_t, 8))(0x5CFAB244L, (VECTOR(int32_t, 4))(0x5CFAB244L, (VECTOR(int32_t, 2))(0x5CFAB244L, 1L), 1L), 1L, 0x5CFAB244L, 1L);
            VECTOR(int16_t, 8) l_531 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5F88L), 0x5F88L), 0x5F88L, (-1L), 0x5F88L);
            uint32_t l_563 = 0xC39FB8E9L;
            uint16_t l_581 = 0x886DL;
            int i, j, k;
            for (l_343 = 0; (l_343 > 54); ++l_343)
            { /* block id: 141 */
                int8_t l_348 = (-1L);
                int32_t l_349 = 0x2C445097L;
                int32_t l_352 = 0x544C4621L;
                int32_t l_354[4];
                uint8_t **l_411[7][1] = {{&l_227[3][2]},{&l_227[3][2]},{&l_227[3][2]},{&l_227[3][2]},{&l_227[3][2]},{&l_227[3][2]},{&l_227[3][2]}};
                VECTOR(int16_t, 4) l_458 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1B5AL), 0x1B5AL);
                uint32_t l_487[6][4][3] = {{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}},{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}},{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}},{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}},{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}},{{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL},{4294967287UL,1UL,4294967294UL}}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_354[i] = 0x4530274EL;
                ++l_356;
                if ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_348 <= ((safe_lshift_func_int8_t_s_s((!(**l_313)), ((safe_rshift_func_uint16_t_u_s(0xADF3L, (l_352 = (safe_sub_func_int32_t_s_s((l_354[1] = 0x3B7DF9A4L), 1L))))) | (((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_349, 5)), 4)) > l_375) <= ((((void*)0 == &l_348) || l_355[3][0][5]) > 8UL))))) != GROUP_DIVERGE(2, 1))), 1L)), (*p_26))))
                { /* block id: 145 */
                    uint32_t l_391 = 1UL;
                    int32_t *l_393[2][5][9] = {{{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352}},{{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352},{(void*)0,&p_877->g_39[3][2][1],(void*)0,(void*)0,(void*)0,&p_877->g_39[3][2][1],(void*)0,&p_877->g_39[3][2][1],&l_352}}};
                    int i, j, k;
                    for (l_342 = 0; (l_342 == 23); ++l_342)
                    { /* block id: 148 */
                        int32_t **l_378[2];
                        uint8_t *l_383 = (void*)0;
                        uint8_t **l_382 = &l_383;
                        uint8_t *l_385 = (void*)0;
                        uint8_t **l_384 = &l_385;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_378[i] = &l_332;
                        l_379 = ((*p_877->g_136) = func_27(((*l_327) = ((*p_877->g_326) | 0x1FL)), (*p_877->g_136), (p_26 = (*l_313)), (*l_313), p_877));
                        (*p_877->g_136) = func_27((((safe_mul_func_int16_t_s_s(((l_354[1] , &p_877->g_66) != (void*)0), (l_351 = ((*l_379) = (((*l_382) = (l_227[0][0] = p_877->g_326)) != ((*l_384) = p_877->g_326)))))) ^ ((((0x0CL <= (p_877->g_176.s7 , (safe_sub_func_int32_t_s_s((p_877->g_205.se && ((VECTOR(int32_t, 2))(p_877->g_388.yx)).hi), (((safe_add_func_int16_t_s_s((p_877->g_193.z ^= l_391), l_391)) >= p_877->g_182) <= p_877->g_176.s0))))) >= 0xA21415E7L) <= 0UL) > p_877->g_392)) <= l_349), (*p_877->g_136), p_26, (*p_877->g_136), p_877);
                    }
                    if ((*p_26))
                        continue;
                    l_393[1][4][6] = (void*)0;
                }
                else
                { /* block id: 163 */
                    int16_t l_402 = 0x1081L;
                    VECTOR(int64_t, 2) l_406 = (VECTOR(int64_t, 2))(0x1DD4068BB0068A6BL, 0L);
                    VECTOR(uint32_t, 8) l_414 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0xA969B98EL), 0xA969B98EL), 0xA969B98EL, 4294967290UL, 0xA969B98EL);
                    VECTOR(uint32_t, 8) l_423 = (VECTOR(uint32_t, 8))(0x7BE077ABL, (VECTOR(uint32_t, 4))(0x7BE077ABL, (VECTOR(uint32_t, 2))(0x7BE077ABL, 4294967292UL), 4294967292UL), 4294967292UL, 0x7BE077ABL, 4294967292UL);
                    VECTOR(uint8_t, 8) l_426 = (VECTOR(uint8_t, 8))(0xBAL, (VECTOR(uint8_t, 4))(0xBAL, (VECTOR(uint8_t, 2))(0xBAL, 6UL), 6UL), 6UL, 0xBAL, 6UL);
                    uint64_t *l_443 = &p_877->g_228[1];
                    VECTOR(uint64_t, 4) l_449 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x2B4419068058C9DCL), 0x2B4419068058C9DCL);
                    VECTOR(int64_t, 4) l_454 = (VECTOR(int64_t, 4))(0x4A55A2B29BF6B81BL, (VECTOR(int64_t, 2))(0x4A55A2B29BF6B81BL, 0x75A91434B875F45AL), 0x75A91434B875F45AL);
                    int32_t l_476[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_476[i] = 8L;
                    if ((safe_add_func_uint8_t_u_u(l_355[0][0][4], (*p_877->g_326))))
                    { /* block id: 164 */
                        (**p_877->g_136) = (+(((*p_26) && l_352) & ((((void*)0 != &p_877->g_326) & ((safe_rshift_func_uint8_t_u_u((p_877->g_162.z = 6UL), ((*p_877->g_326) > 0L))) != (!((VECTOR(int8_t, 2))(1L, (-1L))).even))) | (safe_rshift_func_uint8_t_u_u(p_877->g_132.s3, 1)))));
                    }
                    else
                    { /* block id: 167 */
                        int64_t *l_407[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t l_408 = 0x21654723L;
                        VECTOR(uint64_t, 8) l_469 = (VECTOR(uint64_t, 8))(0x09B2F76C1A781E5DL, (VECTOR(uint64_t, 4))(0x09B2F76C1A781E5DL, (VECTOR(uint64_t, 2))(0x09B2F76C1A781E5DL, 0xA5ECE439F37FD851L), 0xA5ECE439F37FD851L), 0xA5ECE439F37FD851L, 0x09B2F76C1A781E5DL, 0xA5ECE439F37FD851L);
                        VECTOR(uint64_t, 4) l_471 = (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 18446744073709551615UL), 18446744073709551615UL);
                        int i, j;
                        ++p_877->g_403;
                        p_877->g_444[0] &= ((l_408 |= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_406.xx)).xyyy)))).z) || (safe_div_func_uint8_t_u_u((((void*)0 == l_411[0][0]) <= ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_414.s00)), 0xE7E0EF9DL, 0UL)).ywzwxxxz)), ((VECTOR(uint32_t, 8))(l_415.s49b33c7c)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 2UL)).yxxxyyyyxyxxyxyy)).hi))).s01)))).lo, ((**l_313) = (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(l_418.s6d07fbbc)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(l_419.s27)).xxyyyxxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_877->g_420.s77474460)).s33)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_877->g_421.wywxwzzx)))), ((VECTOR(uint32_t, 4))(p_877->g_422.yzzy)), 2UL, 0xCBACA620L)).even, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x0A7E7F12L, ((VECTOR(uint32_t, 2))(0xABAECFB9L, 0x82B9ADA8L)), 4294967293UL, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(l_423.s71642775)).s62, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_877->g_424.xw)))), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(l_425.s4773)).hi, ((VECTOR(uint8_t, 16))(0x6CL, 0xA1L, GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_426.s33)).xxxxyxxy, ((VECTOR(uint8_t, 2))(8UL, 0xC7L)).xxyxyyyy))), ((VECTOR(uint8_t, 2))(0x61L, 0x06L)), 1UL, 0xD2L, 0x32L)).s0a))), ((VECTOR(int16_t, 4))(p_877->g_427.s5550)), 0x51E6L, (p_877->g_427.s6 = (((p_877->g_162.y = ((VECTOR(uint8_t, 2))(l_428.zw)).odd) | ((safe_add_func_int32_t_s_s((*p_26), (safe_sub_func_int64_t_s_s(p_877->g_228[1], (l_426.s2 , (((safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(p_877->g_204.z, 13)) , ((((safe_add_func_int8_t_s_s(0x7AL, (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(p_877->g_39[0][1][6], ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((&p_877->g_228[0] == l_443), 0x03L, 0x50L, 0x31L)))).zxywzyxx)).s2)), l_354[1])))) & 0x1FCBL) && 5L) == 0x49L)), l_414.s5)) , l_375) > l_423.s1)))))) != p_877->g_143)) <= l_354[1])), ((VECTOR(int16_t, 4))(0x6177L)), 0x2BA8L, 4L)), ((VECTOR(uint16_t, 16))(65535UL))))).s555a, ((VECTOR(int32_t, 4))(1L))))).odd))), 0x0E271305L, 0x1D427FA3L)).s30)).yyxx, ((VECTOR(uint32_t, 4))(0x63468734L))))).zxyzzwyw))).s1401503703704526)).s413e))), ((VECTOR(uint32_t, 4))(0UL))))).wxzzwwzw, ((VECTOR(uint32_t, 8))(4294967295UL))))), ((VECTOR(uint32_t, 8))(0x6EF29507L))))).s21)))).odd, l_426.s1))))) ^ p_877->g_420.s3)), (*p_877->g_326))));
                        l_476[1] |= (safe_add_func_uint16_t_u_u(((**l_313) = (safe_add_func_uint16_t_u_u((0xBCF3L < (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_449.zyywywwxwzwyzzxy)).odd)).s7231632607336541)).odd)).s3 , 0x15BCL)), (safe_rshift_func_uint8_t_u_s((p_877->g_162.x ^= p_877->g_39[0][5][5]), 0))))), (l_408 < ((((((VECTOR(int64_t, 8))(l_454.xxwzwxyw)).s4 < (safe_unary_minus_func_uint64_t_u(1UL))) && (safe_mul_func_uint16_t_u_u(((p_877->g_475 = ((((p_877->g_427.s7 , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_458.xzzwwzzxwwyyzywy)))).sa) != (FAKE_DIVERGE(p_877->local_0_offset, get_local_id(0), 10) <= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 8))((safe_mod_func_int8_t_s_s(0x0EL, p_877->g_132.s4)), (safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(l_469.s1406604605420757)).s9d, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(l_470.s778d)).xyxxyxxx, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(l_471.zy)), ((VECTOR(uint64_t, 8))(l_472.zxxywzwx)).s23, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(18446744073709551614UL, ((*l_443) = (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_877->g_39[3][2][1], p_877->g_205.sd, 5UL, 0x68L)).ywzwxzxwyxwyxwzw)), ((VECTOR(uint8_t, 16))(248UL))))).s3, 4))), ((VECTOR(uint64_t, 2))(18446744073709551611UL)), ((VECTOR(uint64_t, 4))(18446744073709551613UL)))).s1, 0x8BFA49124EC93AEEL, 1UL, 0x158AA541A3FE99F2L)).even))).xxyyyyxx)))).odd)), ((VECTOR(uint64_t, 4))(1UL))))).zwxzyzyz))).s27))).lo | GROUP_DIVERGE(0, 1)) | l_469.s6), p_877->g_444[0])) ^ 0x2DB23608L), 4)), ((VECTOR(int16_t, 4))(0x3A8EL)), 0x5C0EL, (-6L))).s3, 10)), p_877->g_444[0])) != 0xF216DD5DL))) , (void*)0) == (void*)0)) >= l_415.sc), p_877->g_176.s0))) || 0L) > l_454.z))));
                        return l_352;
                    }
                    if ((p_877->g_226[1] == ((safe_rshift_func_int8_t_s_s((((VECTOR(int32_t, 8))(l_479.s62767207)).s0 , l_415.s0), ((p_877->g_424.z != (**p_877->g_136)) , (safe_rshift_func_uint16_t_u_s(0x0519L, (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_486.s12)), 1UL, 0x1A65133C194B1B39L)).hi)).xxxxxyyx)).s2 , (l_487[1][2][1] , ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))((((safe_sub_func_int64_t_s_s(p_877->g_314.w, (**l_313))) >= (safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x162CFF1D72B39288L, 18446744073709551614UL)), l_454.y)) > (**l_313)), l_449.x))) | 8UL), 0UL, ((VECTOR(uint16_t, 2))(0x724AL)), 0xF960L, 2UL, 0x876FL, 0x1F88L)).s7246333614401016, ((VECTOR(uint16_t, 16))(0x9D30L))))), ((VECTOR(uint32_t, 16))(0x3F9644F7L)), ((VECTOR(uint32_t, 16))(0xB6B2F613L))))).s4)) > (*p_26)) , 0UL), 0x6A2BL)), 5))))))) < p_877->g_162.x)))
                    { /* block id: 181 */
                        int32_t l_496 = (-1L);
                        int32_t l_497 = (-1L);
                        (*p_26) = (*p_26);
                        (*p_877->g_136) = p_26;
                        --l_498;
                        (*p_26) &= (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x70L, 0xA6L)))).hi < (((void*)0 == l_227[3][2]) | l_496));
                    }
                    else
                    { /* block id: 186 */
                        int32_t ****l_510 = (void*)0;
                        uint32_t *l_513[3];
                        int16_t *l_517 = (void*)0;
                        int16_t l_526[6] = {0x0AD7L,0x0AD7L,0x0AD7L,0x0AD7L,0x0AD7L,0x0AD7L};
                        int i;
                        for (i = 0; i < 3; i++)
                            l_513[i] = &p_877->g_514;
                        p_877->g_39[3][2][1] ^= ((l_352 = (p_877->g_161.x ^= (((safe_add_func_uint64_t_u_u((safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u(p_877->g_444[0], (((*p_26) &= (safe_mod_func_uint32_t_u_u(((l_354[3] |= (safe_sub_func_uint64_t_u_u(((*l_443) = FAKE_DIVERGE(p_877->global_0_offset, get_global_id(0), 10)), (p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))] |= ((l_511 = l_510) == &p_877->g_66))))) , (safe_add_func_uint8_t_u_u((((void*)0 == l_517) < (safe_mod_func_uint64_t_u_u((l_352 & p_877->g_420.s2), (safe_rshift_func_int8_t_s_u(((((p_877->g_422.y ^ ((void*)0 == l_510)) < 0UL) | 0x7E4EL) <= 0xB0005D07L), 6))))), l_487[1][2][1]))), 0x1B74946AL))) , l_526[2]))))), p_877->g_176.s4)) , l_348) && p_877->g_388.y))) | (-1L));
                    }
                    return p_877->g_193.w;
                }
                for (p_877->g_99 = 0; (p_877->g_99 != 22); p_877->g_99 = safe_add_func_uint64_t_u_u(p_877->g_99, 6))
                { /* block id: 200 */
                    int8_t l_558 = (-1L);
                    VECTOR(int32_t, 8) l_566 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L), 2L, 1L, 2L);
                    int i;
                    for (l_185 = 0; (l_185 != 2); l_185 = safe_add_func_uint32_t_u_u(l_185, 7))
                    { /* block id: 203 */
                        int64_t *l_533 = (void*)0;
                        int64_t *l_534 = (void*)0;
                        int64_t *l_535 = (void*)0;
                        int32_t l_536 = 0x7A8AFF4BL;
                        VECTOR(uint8_t, 8) l_554 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 254UL), 254UL), 254UL, 3UL, 254UL);
                        uint64_t *l_555 = &p_877->g_138;
                        uint64_t *l_559 = &p_877->g_228[1];
                        uint64_t *l_560[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_560[i] = &l_498;
                        l_563 &= (&p_877->g_475 == ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_531.s2505)), (3L >= (((l_536 ^= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_532.xxyx)).odd)).hi) >= p_877->g_444[0]) >= (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((*p_877->g_326) = 7L), 2)) > (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((((p_877->g_561 &= ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((((VECTOR(uint64_t, 4))(l_545.s33d3)).w != ((*l_559) = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_877->g_143, 4)), (((safe_mod_func_int8_t_s_s(l_352, (safe_mul_func_int8_t_s_s((***l_512), ((VECTOR(uint8_t, 8))(l_554.s44331043)).s4)))) <= (--(*l_555))) < (((void*)0 == &p_877->g_66) , l_558)))))) & l_458.x) >= l_355[0][0][4]), 0x156AL)), l_350)) <= l_554.s2)) | l_554.s0) >= l_558), (***l_512), 0L, 2L)).odd)).hi || (-9L))), 0xF3L)))), ((VECTOR(int16_t, 2))((-6L))), 3L)).s7 || l_562) , (void*)0));
                    }
                    for (l_353 = (-9); (l_353 != 2); l_353++)
                    { /* block id: 213 */
                        int32_t l_572 = 0x63EDA480L;
                        atomic_and(&p_877->l_atomic_reduction[0], ((VECTOR(int32_t, 16))(0x266DD6F4L, (-1L), ((*p_26) = l_558), (*p_877->g_51), 1L, 0x1437AA2DL, 0x78714CFEL, ((VECTOR(int32_t, 2))(l_566.s06)), 6L, 0L, ((p_877->g_132.s5 <= ((1L != (+(!(****l_511)))) && FAKE_DIVERGE(p_877->local_2_offset, get_local_id(2), 10))) && ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_567.s0b786fe8ff539210)).s8f01)).odd)).yxxyyxyy, ((VECTOR(int8_t, 16))(0L, (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((0x5E3766DA12724C65L || ((((((l_572 || 0x18L) < (safe_mul_func_uint16_t_u_u(((l_558 , l_351) ^ l_355[0][0][4]), 1L))) > l_566.s4) , &p_877->g_182) != &l_563) >= 0x0C90F03BL)), p_877->g_427.s0)) == 65535UL), l_566.s0)), ((VECTOR(int8_t, 2))(0x03L)), ((VECTOR(int8_t, 2))(0x14L)), ((VECTOR(int8_t, 8))(0x18L)), 9L, 0x7DL)).lo))).odd, ((VECTOR(int8_t, 4))(0x74L))))).y), (**p_877->g_136), ((VECTOR(int32_t, 2))(0x28ACEE39L)), 0x3A411CB6L)).s7 + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_877->v_collective += p_877->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    for (l_185 = 15; (l_185 < (-7)); --l_185)
                    { /* block id: 219 */
                        (*p_877->g_136) = p_26;
                    }
                }
            }
            ++l_581;
        }
        else
        { /* block id: 225 */
            (**l_512) = (*p_877->g_136);
            return p_877->g_561;
        }
    }
    else
    { /* block id: 229 */
        return p_877->g_228[5];
    }
    (*l_586) = p_877->g_584;
    return p_877->g_176.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_127 permutations p_877->g_132 p_877->g_161 p_877->g_162 p_877->g_comm_values p_877->g_39 p_877->g_69 p_877->l_comm_values p_877->g_91 p_877->g_136 p_877->g_51
 * writes: p_877->g_88 p_877->g_91 p_877->g_51
 */
int32_t * func_27(int8_t  p_28, int32_t * p_29, int32_t * p_30, int32_t * p_31, struct S0 * p_877)
{ /* block id: 60 */
    uint32_t l_144 = 0x34420FCEL;
    uint64_t *l_159 = &p_877->g_138;
    uint64_t *l_160[5] = {&p_877->g_138,&p_877->g_138,&p_877->g_138,&p_877->g_138,&p_877->g_138};
    int32_t ***l_164 = (void*)0;
    int32_t ****l_163 = &l_164;
    VECTOR(uint16_t, 4) l_165 = (VECTOR(uint16_t, 4))(0xE8D7L, (VECTOR(uint16_t, 2))(0xE8D7L, 0x8151L), 0x8151L);
    uint32_t l_168 = 0x68208D1EL;
    uint8_t l_169 = 0x03L;
    uint16_t l_170 = 1UL;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_877->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[(safe_mod_func_uint32_t_u_u(l_144, 10))][(safe_mod_func_uint32_t_u_u(p_877->tid, 48))]));
    (*p_877->g_136) = func_58(p_877->g_127, ((((VECTOR(int16_t, 8))((safe_mod_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (safe_sub_func_int64_t_s_s((((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((permutations[(safe_mod_func_uint32_t_u_u(l_144, 10))][(safe_mod_func_uint32_t_u_u(p_877->tid, 48))] , ((l_159 = &p_877->g_138) != (p_877->g_132.s0 , l_160[1]))) != 0x87524CA2D030C1CFL), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 4))(0xC6C2L, 0UL, 0x7B65L, 0x47F5L)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_877->g_161.xx)), 65535UL, (((VECTOR(uint16_t, 8))(1UL, 0x020AL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(0xC1L, 246UL)).yxyx, ((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(p_877->g_162.ywww)).zyywzwzwxyzxxwzw))).s67c6))))).hi)), (+(l_163 == &p_877->g_66)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_165.xzwzzwzx)).s34)), 0x7193L)).s0 && ((((((((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(2, 1), 1)) & 7L) <= p_28) , l_168) & p_877->g_comm_values[p_877->tid]) <= p_28) || 0x27E4L) ^ 0xB193B92927784A77L)), ((VECTOR(uint16_t, 4))(0xE0FCL)), 0xD80DL, 0xD857L, p_28, 0x8135L, 0UL, 4UL, 0x8AFEL, 0x2BE5L)).s41, ((VECTOR(uint16_t, 2))(1UL))))), ((VECTOR(uint16_t, 2))(65534UL)), l_169, 0x1691L, 65532UL, 0UL)).s0)) , GROUP_DIVERGE(1, 1)), 3)) && p_28) && p_28) , 0x6D6FL) & p_877->g_162.z), 1UL)))) ^ 0UL), 6L)) & 0UL) <= 0xDA0F28B6A91E5242L), p_28)), (-1L), 7L, 0x050CL, 4L, ((VECTOR(int16_t, 2))(0x127CL)), 0x1C01L)).s7 && l_170) != p_28), &p_877->g_51, p_28, p_877->g_39[4][0][3], p_877);
    return (*p_877->g_136);
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_66 p_877->g_69 p_877->g_39 p_877->g_comm_values p_877->l_comm_values p_877->g_91 p_877->g_99 p_877->g_88 p_877->g_132 p_877->g_138
 * writes: p_877->g_88 p_877->g_91 p_877->g_136 p_877->g_138
 */
int32_t  func_34(int32_t  p_35, int32_t * p_36, uint32_t  p_37, struct S0 * p_877)
{ /* block id: 20 */
    int32_t ***l_64 = (void*)0;
    int32_t ****l_65 = &l_64;
    uint32_t l_68 = 0UL;
    int32_t l_100 = 0x1361E08BL;
    int32_t l_108 = (-1L);
    int32_t l_109 = 5L;
    int32_t l_110 = 0L;
    int32_t l_111[10][2][1] = {{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}},{{(-2L)},{(-2L)}}};
    int32_t l_113 = (-1L);
    uint8_t l_114 = 255UL;
    VECTOR(int8_t, 16) l_117 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x50L), 0x50L), 0x50L, 0L, 0x50L, (VECTOR(int8_t, 2))(0L, 0x50L), (VECTOR(int8_t, 2))(0L, 0x50L), 0L, 0x50L, 0L, 0x50L);
    int16_t *l_122 = (void*)0;
    int16_t *l_123 = &p_877->g_88;
    int16_t *l_126 = &p_877->g_127;
    VECTOR(uint32_t, 2) l_133 = (VECTOR(uint32_t, 2))(4294967290UL, 4294967292UL);
    uint64_t *l_137 = &p_877->g_138;
    int32_t *l_139 = &l_108;
    int32_t l_140[6][9][4] = {{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}},{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}},{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}},{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}},{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}},{{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL},{0x4E2E4C4DL,5L,0L,0x488C8FEFL}}};
    int i, j, k;
    p_36 = func_58(p_35, ((((*l_65) = l_64) == (((void*)0 != &p_36) , p_877->g_66)) >= (((((FAKE_DIVERGE(p_877->global_0_offset, get_global_id(0), 10) & l_68) , (FAKE_DIVERGE(p_877->group_2_offset, get_group_id(2), 10) || 0x70L)) , ((VECTOR(int16_t, 4))(p_877->g_69.wzwz)).x) ^ p_35) ^ (((0x76L && p_37) != p_877->g_39[4][1][0]) != 4UL))), &p_877->g_51, p_877->g_39[4][2][1], p_35, p_877);
    if (p_877->g_comm_values[p_877->tid])
    { /* block id: 29 */
        int32_t *l_94 = &p_877->g_39[2][1][7];
        for (p_37 = 0; (p_37 > 12); p_37 = safe_add_func_uint16_t_u_u(p_37, 5))
        { /* block id: 32 */
            p_36 = l_94;
            if ((*p_36))
                continue;
        }
        for (p_877->g_91 = 21; (p_877->g_91 > (-14)); p_877->g_91--)
        { /* block id: 38 */
            for (l_68 = 0; (l_68 >= 2); l_68 = safe_add_func_int64_t_s_s(l_68, 4))
            { /* block id: 41 */
                if ((*l_94))
                    break;
                if ((*p_36))
                    continue;
                return (*p_36);
            }
            return p_877->g_99;
        }
    }
    else
    { /* block id: 48 */
        int32_t *l_101 = (void*)0;
        int32_t *l_102 = &p_877->g_39[3][1][7];
        int32_t *l_103 = &p_877->g_39[3][2][1];
        int32_t *l_104 = &l_100;
        int32_t *l_105 = &p_877->g_39[1][0][1];
        int32_t *l_106 = &p_877->g_39[3][3][6];
        int32_t *l_107[9][6] = {{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91},{&p_877->g_39[3][2][2],&p_877->g_91,&p_877->g_91,&p_877->g_39[4][1][1],&p_877->g_91,&p_877->g_91}};
        int64_t l_112 = 0x2F309D661093DF31L;
        int i, j;
        p_36 = &p_35;
        l_114++;
    }
    (*l_139) ^= (((VECTOR(int8_t, 16))(l_117.s3fb3b23cb69b9ec7)).s2 && ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((*l_123) = p_877->g_88), 2)) != ((*l_137) |= (safe_rshift_func_uint16_t_u_u(((void*)0 != l_126), (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(0x01C497E3L, (p_877->g_39[3][2][1] && ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_877->g_132.s6634)).zyxyzwyzxwxyxyyx)).s2))), (((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(0xCA3837B6L, 0x17EC8355L)), ((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(0UL, 0x06B359D7L)).xyxxxxxx, ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(l_133.yy)).xxxy))).zxwzywzw))), ((VECTOR(uint32_t, 2))(0x06245C75L, 0x3E7333C2L)), 0xCE350B08L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(1UL, p_37, 0x134505B7L, 0xA5FC61F8L)).wxzzzxzzyyzxzzzy)).lo)).s36)), (((safe_sub_func_uint16_t_u_u((((p_877->g_136 = &p_877->g_51) == &p_36) | p_877->g_99), l_113)) ^ p_877->g_39[3][2][1]) , p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))]), 0x74358F7AL, 0xE00818ECL)).hi, ((VECTOR(uint32_t, 8))(0xC00974A8L)), ((VECTOR(uint32_t, 8))(8UL))))).s44)), 0x6E0D3A3AL, 0UL, ((VECTOR(uint32_t, 2))(0xB17AC642L)), 0xE33F894EL)).s24))).lo , (*p_36)))))))), p_35)) ^ 0x1E696172L));
    (*l_139) = l_140[2][2][2];
    return p_877->g_comm_values[p_877->tid];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_877->g_51 p_877->g_39
 */
int8_t  func_46(int32_t  p_47, struct S0 * p_877)
{ /* block id: 6 */
    int32_t *l_50 = (void*)0;
    int32_t **l_49 = &l_50;
    int32_t ***l_48 = &l_49;
    (*l_48) = (void*)0;
    p_877->g_51 = &p_47;
    for (p_47 = 0; (p_47 > (-30)); p_47--)
    { /* block id: 11 */
        int32_t *l_54 = &p_877->g_39[1][3][0];
        (*l_54) = p_47;
    }
    for (p_47 = 0; (p_47 < (-6)); p_47--)
    { /* block id: 16 */
        int64_t l_57[2];
        int i;
        for (i = 0; i < 2; i++)
            l_57[i] = 0x74D80A992350C165L;
        return l_57[0];
    }
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_877->g_69 p_877->g_39 p_877->g_comm_values p_877->l_comm_values p_877->g_91
 * writes: p_877->g_88 p_877->g_91
 */
int32_t * func_58(uint8_t  p_59, uint32_t  p_60, int32_t ** p_61, uint32_t  p_62, int64_t  p_63, struct S0 * p_877)
{ /* block id: 22 */
    uint32_t l_72 = 0x8556AD51L;
    int32_t **l_75[10] = {&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51,&p_877->g_51};
    int32_t ***l_76 = &l_75[6];
    int16_t *l_87 = &p_877->g_88;
    int32_t l_89 = 0x652939A4L;
    int32_t *l_90 = &p_877->g_91;
    int i;
    (*l_90) |= ((((((safe_rshift_func_int8_t_s_u(l_72, ((safe_lshift_func_uint8_t_u_u((((1L == (~((((*l_76) = l_75[7]) == (((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((-9L), 0x50L)), (((((0x5DL != (~((safe_rshift_func_int8_t_s_u((FAKE_DIVERGE(p_877->local_0_offset, get_local_id(0), 10) & 4L), 5)) != (((l_89 = ((1UL > (~(safe_sub_func_int16_t_s_s(((*l_87) = (p_877->g_69.x <= p_877->g_39[3][2][1])), p_59)))) ^ p_877->g_39[2][5][3])) >= p_62) | p_59)))) >= p_877->g_39[4][2][3]) , p_877->g_comm_values[p_877->tid]) & 0x196EL) == p_877->g_39[4][3][4]))) > p_62) <= p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))]), p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))])) > p_877->g_comm_values[p_877->tid]) , p_61)) >= p_63))) >= p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))]) & p_877->l_comm_values[(safe_mod_func_uint32_t_u_u(p_877->tid, 48))]), 5)) ^ p_59))) && p_59) >= p_877->g_39[3][2][1]) || FAKE_DIVERGE(p_877->local_0_offset, get_local_id(0), 10)) < p_59) < 0x3E40DCEDD96C0B5FL);
    return &p_877->g_91;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[50];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 50; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[50];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 50; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_comm_values[i] = 1;
    struct S0 c_878;
    struct S0* p_877 = &c_878;
    struct S0 c_879 = {
        {{{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L}},{{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L}},{{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L}},{{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L}},{{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L},{1L,0x3B7C39C9L,0x469209A4L,0x16A9CBDEL,0x16A9CBDEL,0x469209A4L,0x3B7C39C9L,1L}}}, // p_877->g_39
        &p_877->g_39[3][2][1], // p_877->g_51
        (void*)0, // p_877->g_67
        &p_877->g_67, // p_877->g_66
        (VECTOR(int16_t, 4))(0x4F35L, (VECTOR(int16_t, 2))(0x4F35L, 5L), 5L), // p_877->g_69
        3L, // p_877->g_88
        1L, // p_877->g_91
        (-1L), // p_877->g_99
        0x22EFL, // p_877->g_127
        (VECTOR(int64_t, 8))(0x08DFB89BC2A9EBE4L, (VECTOR(int64_t, 4))(0x08DFB89BC2A9EBE4L, (VECTOR(int64_t, 2))(0x08DFB89BC2A9EBE4L, (-5L)), (-5L)), (-5L), 0x08DFB89BC2A9EBE4L, (-5L)), // p_877->g_132
        &p_877->g_51, // p_877->g_136
        18446744073709551615UL, // p_877->g_138
        0x26L, // p_877->g_143
        (VECTOR(uint16_t, 2))(0UL, 65534UL), // p_877->g_161
        (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 0x60L), 0x60L), // p_877->g_162
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x58FAL), 0x58FAL), 0x58FAL, 0UL, 0x58FAL), // p_877->g_176
        0x27B90E3CL, // p_877->g_182
        (VECTOR(int16_t, 4))(0x04AFL, (VECTOR(int16_t, 2))(0x04AFL, (-1L)), (-1L)), // p_877->g_193
        (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x3CL), 0x3CL), // p_877->g_204
        (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int8_t, 2))((-4L), 0L), (VECTOR(int8_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L), // p_877->g_205
        (VECTOR(uint32_t, 4))(0xFEE80A6DL, (VECTOR(uint32_t, 2))(0xFEE80A6DL, 2UL), 2UL), // p_877->g_214
        {0x57L,0x57L,0x57L,0x57L}, // p_877->g_226
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_877->g_228
        0xF1590895L, // p_877->g_308
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x25D5L), 0x25D5L), // p_877->g_314
        &p_877->g_226[2], // p_877->g_326
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), // p_877->g_388
        0x098FCEDEL, // p_877->g_392
        0x8B5DL, // p_877->g_403
        (VECTOR(uint32_t, 8))(0xA01E512FL, (VECTOR(uint32_t, 4))(0xA01E512FL, (VECTOR(uint32_t, 2))(0xA01E512FL, 4294967289UL), 4294967289UL), 4294967289UL, 0xA01E512FL, 4294967289UL), // p_877->g_420
        (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 1UL), 1UL), // p_877->g_421
        (VECTOR(uint32_t, 4))(0x053B8AD1L, (VECTOR(uint32_t, 2))(0x053B8AD1L, 1UL), 1UL), // p_877->g_422
        (VECTOR(int16_t, 4))(0x6B07L, (VECTOR(int16_t, 2))(0x6B07L, 0x0F8AL), 0x0F8AL), // p_877->g_424
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0D1DL), 0x0D1DL), 0x0D1DL, (-1L), 0x0D1DL), // p_877->g_427
        {0xB7F66F17L}, // p_877->g_444
        8UL, // p_877->g_475
        3UL, // p_877->g_514
        0x6AB4L, // p_877->g_561
        (-1L), // p_877->g_579
        &p_877->g_475, // p_877->g_585
        &p_877->g_585, // p_877->g_584
        249UL, // p_877->g_589
        {&p_877->g_39[3][4][4],&p_877->g_39[3][4][4],&p_877->g_39[3][4][4],&p_877->g_39[3][4][4],&p_877->g_39[3][4][4]}, // p_877->g_590
        0x1905849CL, // p_877->g_764
        (-6L), // p_877->g_791
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_877->g_804
        0x94DAFC9DL, // p_877->g_818
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_877->g_831
        &p_877->g_764, // p_877->g_841
        0, // p_877->v_collective
        sequence_input[get_global_id(0)], // p_877->global_0_offset
        sequence_input[get_global_id(1)], // p_877->global_1_offset
        sequence_input[get_global_id(2)], // p_877->global_2_offset
        sequence_input[get_local_id(0)], // p_877->local_0_offset
        sequence_input[get_local_id(1)], // p_877->local_1_offset
        sequence_input[get_local_id(2)], // p_877->local_2_offset
        sequence_input[get_group_id(0)], // p_877->group_0_offset
        sequence_input[get_group_id(1)], // p_877->group_1_offset
        sequence_input[get_group_id(2)], // p_877->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 48)), permutations[0][get_linear_local_id()])), // p_877->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_878 = c_879;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_877);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_877->g_39[i][j][k], "p_877->g_39[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_877->g_69.x, "p_877->g_69.x", print_hash_value);
    transparent_crc(p_877->g_69.y, "p_877->g_69.y", print_hash_value);
    transparent_crc(p_877->g_69.z, "p_877->g_69.z", print_hash_value);
    transparent_crc(p_877->g_69.w, "p_877->g_69.w", print_hash_value);
    transparent_crc(p_877->g_88, "p_877->g_88", print_hash_value);
    transparent_crc(p_877->g_91, "p_877->g_91", print_hash_value);
    transparent_crc(p_877->g_99, "p_877->g_99", print_hash_value);
    transparent_crc(p_877->g_127, "p_877->g_127", print_hash_value);
    transparent_crc(p_877->g_132.s0, "p_877->g_132.s0", print_hash_value);
    transparent_crc(p_877->g_132.s1, "p_877->g_132.s1", print_hash_value);
    transparent_crc(p_877->g_132.s2, "p_877->g_132.s2", print_hash_value);
    transparent_crc(p_877->g_132.s3, "p_877->g_132.s3", print_hash_value);
    transparent_crc(p_877->g_132.s4, "p_877->g_132.s4", print_hash_value);
    transparent_crc(p_877->g_132.s5, "p_877->g_132.s5", print_hash_value);
    transparent_crc(p_877->g_132.s6, "p_877->g_132.s6", print_hash_value);
    transparent_crc(p_877->g_132.s7, "p_877->g_132.s7", print_hash_value);
    transparent_crc(p_877->g_138, "p_877->g_138", print_hash_value);
    transparent_crc(p_877->g_143, "p_877->g_143", print_hash_value);
    transparent_crc(p_877->g_161.x, "p_877->g_161.x", print_hash_value);
    transparent_crc(p_877->g_161.y, "p_877->g_161.y", print_hash_value);
    transparent_crc(p_877->g_162.x, "p_877->g_162.x", print_hash_value);
    transparent_crc(p_877->g_162.y, "p_877->g_162.y", print_hash_value);
    transparent_crc(p_877->g_162.z, "p_877->g_162.z", print_hash_value);
    transparent_crc(p_877->g_162.w, "p_877->g_162.w", print_hash_value);
    transparent_crc(p_877->g_176.s0, "p_877->g_176.s0", print_hash_value);
    transparent_crc(p_877->g_176.s1, "p_877->g_176.s1", print_hash_value);
    transparent_crc(p_877->g_176.s2, "p_877->g_176.s2", print_hash_value);
    transparent_crc(p_877->g_176.s3, "p_877->g_176.s3", print_hash_value);
    transparent_crc(p_877->g_176.s4, "p_877->g_176.s4", print_hash_value);
    transparent_crc(p_877->g_176.s5, "p_877->g_176.s5", print_hash_value);
    transparent_crc(p_877->g_176.s6, "p_877->g_176.s6", print_hash_value);
    transparent_crc(p_877->g_176.s7, "p_877->g_176.s7", print_hash_value);
    transparent_crc(p_877->g_182, "p_877->g_182", print_hash_value);
    transparent_crc(p_877->g_193.x, "p_877->g_193.x", print_hash_value);
    transparent_crc(p_877->g_193.y, "p_877->g_193.y", print_hash_value);
    transparent_crc(p_877->g_193.z, "p_877->g_193.z", print_hash_value);
    transparent_crc(p_877->g_193.w, "p_877->g_193.w", print_hash_value);
    transparent_crc(p_877->g_204.x, "p_877->g_204.x", print_hash_value);
    transparent_crc(p_877->g_204.y, "p_877->g_204.y", print_hash_value);
    transparent_crc(p_877->g_204.z, "p_877->g_204.z", print_hash_value);
    transparent_crc(p_877->g_204.w, "p_877->g_204.w", print_hash_value);
    transparent_crc(p_877->g_205.s0, "p_877->g_205.s0", print_hash_value);
    transparent_crc(p_877->g_205.s1, "p_877->g_205.s1", print_hash_value);
    transparent_crc(p_877->g_205.s2, "p_877->g_205.s2", print_hash_value);
    transparent_crc(p_877->g_205.s3, "p_877->g_205.s3", print_hash_value);
    transparent_crc(p_877->g_205.s4, "p_877->g_205.s4", print_hash_value);
    transparent_crc(p_877->g_205.s5, "p_877->g_205.s5", print_hash_value);
    transparent_crc(p_877->g_205.s6, "p_877->g_205.s6", print_hash_value);
    transparent_crc(p_877->g_205.s7, "p_877->g_205.s7", print_hash_value);
    transparent_crc(p_877->g_205.s8, "p_877->g_205.s8", print_hash_value);
    transparent_crc(p_877->g_205.s9, "p_877->g_205.s9", print_hash_value);
    transparent_crc(p_877->g_205.sa, "p_877->g_205.sa", print_hash_value);
    transparent_crc(p_877->g_205.sb, "p_877->g_205.sb", print_hash_value);
    transparent_crc(p_877->g_205.sc, "p_877->g_205.sc", print_hash_value);
    transparent_crc(p_877->g_205.sd, "p_877->g_205.sd", print_hash_value);
    transparent_crc(p_877->g_205.se, "p_877->g_205.se", print_hash_value);
    transparent_crc(p_877->g_205.sf, "p_877->g_205.sf", print_hash_value);
    transparent_crc(p_877->g_214.x, "p_877->g_214.x", print_hash_value);
    transparent_crc(p_877->g_214.y, "p_877->g_214.y", print_hash_value);
    transparent_crc(p_877->g_214.z, "p_877->g_214.z", print_hash_value);
    transparent_crc(p_877->g_214.w, "p_877->g_214.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_877->g_226[i], "p_877->g_226[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_877->g_228[i], "p_877->g_228[i]", print_hash_value);

    }
    transparent_crc(p_877->g_308, "p_877->g_308", print_hash_value);
    transparent_crc(p_877->g_314.x, "p_877->g_314.x", print_hash_value);
    transparent_crc(p_877->g_314.y, "p_877->g_314.y", print_hash_value);
    transparent_crc(p_877->g_314.z, "p_877->g_314.z", print_hash_value);
    transparent_crc(p_877->g_314.w, "p_877->g_314.w", print_hash_value);
    transparent_crc(p_877->g_388.x, "p_877->g_388.x", print_hash_value);
    transparent_crc(p_877->g_388.y, "p_877->g_388.y", print_hash_value);
    transparent_crc(p_877->g_388.z, "p_877->g_388.z", print_hash_value);
    transparent_crc(p_877->g_388.w, "p_877->g_388.w", print_hash_value);
    transparent_crc(p_877->g_392, "p_877->g_392", print_hash_value);
    transparent_crc(p_877->g_403, "p_877->g_403", print_hash_value);
    transparent_crc(p_877->g_420.s0, "p_877->g_420.s0", print_hash_value);
    transparent_crc(p_877->g_420.s1, "p_877->g_420.s1", print_hash_value);
    transparent_crc(p_877->g_420.s2, "p_877->g_420.s2", print_hash_value);
    transparent_crc(p_877->g_420.s3, "p_877->g_420.s3", print_hash_value);
    transparent_crc(p_877->g_420.s4, "p_877->g_420.s4", print_hash_value);
    transparent_crc(p_877->g_420.s5, "p_877->g_420.s5", print_hash_value);
    transparent_crc(p_877->g_420.s6, "p_877->g_420.s6", print_hash_value);
    transparent_crc(p_877->g_420.s7, "p_877->g_420.s7", print_hash_value);
    transparent_crc(p_877->g_421.x, "p_877->g_421.x", print_hash_value);
    transparent_crc(p_877->g_421.y, "p_877->g_421.y", print_hash_value);
    transparent_crc(p_877->g_421.z, "p_877->g_421.z", print_hash_value);
    transparent_crc(p_877->g_421.w, "p_877->g_421.w", print_hash_value);
    transparent_crc(p_877->g_422.x, "p_877->g_422.x", print_hash_value);
    transparent_crc(p_877->g_422.y, "p_877->g_422.y", print_hash_value);
    transparent_crc(p_877->g_422.z, "p_877->g_422.z", print_hash_value);
    transparent_crc(p_877->g_422.w, "p_877->g_422.w", print_hash_value);
    transparent_crc(p_877->g_424.x, "p_877->g_424.x", print_hash_value);
    transparent_crc(p_877->g_424.y, "p_877->g_424.y", print_hash_value);
    transparent_crc(p_877->g_424.z, "p_877->g_424.z", print_hash_value);
    transparent_crc(p_877->g_424.w, "p_877->g_424.w", print_hash_value);
    transparent_crc(p_877->g_427.s0, "p_877->g_427.s0", print_hash_value);
    transparent_crc(p_877->g_427.s1, "p_877->g_427.s1", print_hash_value);
    transparent_crc(p_877->g_427.s2, "p_877->g_427.s2", print_hash_value);
    transparent_crc(p_877->g_427.s3, "p_877->g_427.s3", print_hash_value);
    transparent_crc(p_877->g_427.s4, "p_877->g_427.s4", print_hash_value);
    transparent_crc(p_877->g_427.s5, "p_877->g_427.s5", print_hash_value);
    transparent_crc(p_877->g_427.s6, "p_877->g_427.s6", print_hash_value);
    transparent_crc(p_877->g_427.s7, "p_877->g_427.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_877->g_444[i], "p_877->g_444[i]", print_hash_value);

    }
    transparent_crc(p_877->g_475, "p_877->g_475", print_hash_value);
    transparent_crc(p_877->g_514, "p_877->g_514", print_hash_value);
    transparent_crc(p_877->g_561, "p_877->g_561", print_hash_value);
    transparent_crc(p_877->g_579, "p_877->g_579", print_hash_value);
    transparent_crc(p_877->g_589, "p_877->g_589", print_hash_value);
    transparent_crc(p_877->g_764, "p_877->g_764", print_hash_value);
    transparent_crc(p_877->g_791, "p_877->g_791", print_hash_value);
    transparent_crc(p_877->g_818, "p_877->g_818", print_hash_value);
    transparent_crc(p_877->g_831.s0, "p_877->g_831.s0", print_hash_value);
    transparent_crc(p_877->g_831.s1, "p_877->g_831.s1", print_hash_value);
    transparent_crc(p_877->g_831.s2, "p_877->g_831.s2", print_hash_value);
    transparent_crc(p_877->g_831.s3, "p_877->g_831.s3", print_hash_value);
    transparent_crc(p_877->g_831.s4, "p_877->g_831.s4", print_hash_value);
    transparent_crc(p_877->g_831.s5, "p_877->g_831.s5", print_hash_value);
    transparent_crc(p_877->g_831.s6, "p_877->g_831.s6", print_hash_value);
    transparent_crc(p_877->g_831.s7, "p_877->g_831.s7", print_hash_value);
    transparent_crc(p_877->g_831.s8, "p_877->g_831.s8", print_hash_value);
    transparent_crc(p_877->g_831.s9, "p_877->g_831.s9", print_hash_value);
    transparent_crc(p_877->g_831.sa, "p_877->g_831.sa", print_hash_value);
    transparent_crc(p_877->g_831.sb, "p_877->g_831.sb", print_hash_value);
    transparent_crc(p_877->g_831.sc, "p_877->g_831.sc", print_hash_value);
    transparent_crc(p_877->g_831.sd, "p_877->g_831.sd", print_hash_value);
    transparent_crc(p_877->g_831.se, "p_877->g_831.se", print_hash_value);
    transparent_crc(p_877->g_831.sf, "p_877->g_831.sf", print_hash_value);
    transparent_crc(p_877->v_collective, "p_877->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 50; i++)
            transparent_crc(p_877->g_special_values[i + 50 * get_linear_group_id()], "p_877->g_special_values[i + 50 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 50; i++)
            transparent_crc(p_877->l_special_values[i], "p_877->l_special_values[i]", print_hash_value);
    transparent_crc(p_877->l_comm_values[get_linear_local_id()], "p_877->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_877->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()], "p_877->g_comm_values[get_linear_group_id() * 48 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
