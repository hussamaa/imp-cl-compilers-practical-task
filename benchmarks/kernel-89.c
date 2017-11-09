// --atomics 25 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 73,94,1 -l 1,47,1
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

__constant uint32_t permutations[10][47] = {
{16,6,26,37,38,30,20,45,27,18,10,19,42,9,31,22,13,40,21,35,4,3,8,39,0,14,28,43,41,29,2,5,11,44,25,36,15,46,24,23,7,12,17,33,34,1,32}, // permutation 0
{20,2,18,5,27,15,46,35,0,32,29,31,8,16,33,38,6,42,28,25,1,24,14,22,9,17,23,45,34,7,19,13,10,26,41,12,40,4,39,37,44,11,3,21,36,43,30}, // permutation 1
{2,10,5,38,13,16,32,41,31,14,7,34,8,1,40,27,4,17,19,28,15,20,25,23,46,29,21,42,30,39,0,26,6,43,37,22,45,11,3,36,9,12,33,44,24,18,35}, // permutation 2
{35,2,9,13,18,0,39,45,40,22,4,17,34,30,20,27,3,46,14,15,16,36,26,8,32,42,24,31,12,28,23,37,5,19,44,6,21,41,25,11,1,33,43,7,38,29,10}, // permutation 3
{20,37,33,30,16,28,18,9,6,0,41,8,22,14,19,23,21,40,34,7,17,11,36,12,25,27,15,44,43,32,3,13,2,39,26,42,1,5,10,35,46,29,4,45,31,38,24}, // permutation 4
{9,16,22,1,33,12,20,40,14,21,24,28,31,7,3,44,0,4,41,11,10,6,37,18,2,43,29,38,25,17,15,35,42,5,8,26,30,32,46,34,13,45,23,19,39,36,27}, // permutation 5
{40,3,2,30,4,18,8,36,13,21,0,39,46,44,38,15,41,7,12,37,28,9,31,33,27,19,6,25,22,42,32,26,5,11,29,23,20,34,35,10,1,24,16,14,17,43,45}, // permutation 6
{19,7,44,0,2,25,11,35,28,32,34,29,8,46,14,17,10,39,5,31,9,15,26,33,37,13,36,20,3,41,38,22,1,16,23,12,18,24,42,27,21,4,40,6,43,45,30}, // permutation 7
{26,35,5,34,8,7,31,13,36,14,21,28,23,1,37,22,41,38,10,43,29,19,46,12,16,40,4,15,45,44,3,17,2,18,32,9,24,6,33,25,0,30,20,11,42,39,27}, // permutation 8
{46,30,13,11,22,14,36,16,15,42,17,44,18,5,35,7,29,19,34,43,40,26,21,9,2,25,28,1,12,10,32,45,6,41,3,0,20,39,37,31,8,23,4,33,24,38,27} // permutation 9
};

// Seed: 3127497721

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   volatile int8_t  f1;
   volatile int64_t  f2;
   uint32_t  f3;
   int16_t  f4;
   uint32_t  f5;
   uint32_t  f6;
};

union U1 {
   uint64_t  f0;
};

struct S2 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6;
    uint64_t g_14[10];
    int32_t g_38;
    VECTOR(uint8_t, 8) g_62;
    uint64_t g_65;
    uint32_t g_71;
    uint64_t g_73;
    uint64_t *g_72;
    int8_t g_78[10];
    uint16_t g_81[4];
    int32_t g_86;
    int32_t g_87;
    uint8_t g_88;
    uint64_t g_94;
    int32_t *g_110;
    int32_t **g_109[4];
    int32_t g_122;
    uint32_t g_142;
    uint16_t g_164;
    union U1 g_194;
    VECTOR(int32_t, 2) g_221;
    VECTOR(int32_t, 2) g_227;
    volatile struct S0 *g_232;
    VECTOR(int64_t, 8) g_239;
    uint64_t g_244;
    uint16_t g_267[7][1];
    int16_t g_287;
    int16_t *g_286;
    volatile uint64_t *g_296;
    volatile uint64_t **g_295;
    volatile uint64_t ***g_294;
    uint32_t g_315;
    VECTOR(int64_t, 2) g_323;
    union U1 * volatile g_338[8];
    union U1 * volatile *g_337;
    struct S0 g_391[4][3];
    VECTOR(int16_t, 8) g_397;
    VECTOR(uint16_t, 4) g_417;
    VECTOR(uint16_t, 2) g_419;
    VECTOR(uint16_t, 4) g_454;
    VECTOR(int16_t, 16) g_482;
    VECTOR(int32_t, 16) g_499;
    VECTOR(int32_t, 2) g_511;
    VECTOR(int64_t, 4) g_521;
    VECTOR(int64_t, 4) g_522;
    VECTOR(int32_t, 16) g_577;
    VECTOR(int32_t, 16) g_579;
    VECTOR(int32_t, 2) g_581;
    VECTOR(uint32_t, 4) g_684;
    VECTOR(uint32_t, 2) g_685;
    VECTOR(uint32_t, 16) g_690;
    volatile struct S0 **g_692[4][1][6];
    volatile struct S0 ** volatile *g_691[2][6][9];
    VECTOR(int8_t, 8) g_733;
    VECTOR(int8_t, 2) g_746;
    uint32_t g_750;
    int64_t g_771;
    VECTOR(int32_t, 4) g_782;
    int8_t g_788;
    VECTOR(uint8_t, 4) g_803;
    VECTOR(uint8_t, 4) g_805;
    VECTOR(uint8_t, 8) g_806;
    VECTOR(uint8_t, 16) g_807;
    VECTOR(uint8_t, 8) g_811;
    VECTOR(uint32_t, 4) g_826;
    int32_t g_849;
    uint32_t *g_855;
    int32_t ** volatile g_861;
    VECTOR(uint16_t, 16) g_877;
    uint32_t *g_886[1][7][2];
    uint32_t * volatile *g_885;
    struct S0 g_909;
    struct S0 g_910;
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
uint32_t  func_1(struct S2 * p_911);
int32_t * func_9(int32_t  p_10, uint32_t  p_11, int16_t  p_12, struct S2 * p_911);
int16_t  func_22(uint16_t  p_23, int32_t * p_24, uint64_t  p_25, int32_t  p_26, int8_t  p_27, struct S2 * p_911);
int32_t * func_29(union U1  p_30, uint32_t  p_31, int32_t * p_32, int32_t * p_33, struct S2 * p_911);
union U1  func_34(uint16_t  p_35, struct S2 * p_911);
int32_t  func_41(int64_t  p_42, int32_t * p_43, struct S2 * p_911);
int64_t  func_46(uint64_t  p_47, int32_t * p_48, int64_t  p_49, struct S2 * p_911);
int32_t  func_52(int32_t  p_53, struct S2 * p_911);
int32_t * func_56(uint8_t  p_57, int32_t * p_58, int32_t ** p_59, struct S2 * p_911);
uint64_t  func_101(uint64_t * p_102, uint64_t * p_103, uint64_t ** p_104, uint32_t  p_105, int32_t * p_106, struct S2 * p_911);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_911->g_6 p_911->g_2 p_911->g_comm_values p_911->g_194 p_911->g_142 p_911->g_87 p_911->g_227 p_911->g_499 p_911->g_62 p_911->g_72 p_911->g_73 p_911->g_577 p_911->g_750 p_911->g_94 p_911->g_286 p_911->g_287 p_911->g_239 p_911->g_86 p_911->g_861 p_911->g_78 p_911->g_690 p_911->g_877 p_911->g_885 p_911->g_3 p_911->g_454 p_911->g_782 p_911->g_14 p_911->g_805 p_911->g_826 p_911->g_909
 * writes: p_911->g_6 p_911->g_14 p_911->g_38 p_911->g_771 p_911->g_110 p_911->g_88 p_911->g_62 p_911->g_391.f4 p_911->g_855 p_911->g_164 p_911->g_81 p_911->g_391.f3 p_911->g_267 p_911->g_419 p_911->g_287 p_911->g_910
 */
uint32_t  func_1(struct S2 * p_911)
{ /* block id: 4 */
    int32_t *l_794[8] = {&p_911->g_86,(void*)0,&p_911->g_86,&p_911->g_86,(void*)0,&p_911->g_86,&p_911->g_86,(void*)0};
    uint16_t *l_862 = &p_911->g_164;
    uint16_t *l_863 = (void*)0;
    int32_t l_868 = (-4L);
    VECTOR(uint16_t, 4) l_878 = (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 1UL), 1UL);
    VECTOR(uint16_t, 4) l_879 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 4UL), 4UL);
    VECTOR(uint16_t, 16) l_880 = (VECTOR(uint16_t, 16))(0xC34BL, (VECTOR(uint16_t, 4))(0xC34BL, (VECTOR(uint16_t, 2))(0xC34BL, 1UL), 1UL), 1UL, 0xC34BL, 1UL, (VECTOR(uint16_t, 2))(0xC34BL, 1UL), (VECTOR(uint16_t, 2))(0xC34BL, 1UL), 0xC34BL, 1UL, 0xC34BL, 1UL);
    VECTOR(uint16_t, 4) l_881 = (VECTOR(uint16_t, 4))(0x2FAFL, (VECTOR(uint16_t, 2))(0x2FAFL, 0xDC34L), 0xDC34L);
    VECTOR(int32_t, 4) l_893 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L));
    int64_t l_898 = 0x6CB3DDB1780AC417L;
    uint32_t *l_899 = (void*)0;
    uint32_t *l_900 = (void*)0;
    uint32_t *l_901 = (void*)0;
    uint32_t *l_902 = (void*)0;
    uint32_t *l_903 = &p_911->g_391[1][1].f3;
    uint32_t l_904 = 0x7531C25BL;
    uint16_t *l_905[10];
    uint32_t l_906 = 1UL;
    uint16_t l_907 = 0x2067L;
    uint16_t l_908 = 0x27F1L;
    int i;
    for (i = 0; i < 10; i++)
        l_905[i] = (void*)0;
    for (p_911->g_6 = 0; (p_911->g_6 >= (-21)); --p_911->g_6)
    { /* block id: 7 */
        int32_t *l_13 = &p_911->g_6;
        int16_t l_28 = 0L;
        (*p_911->g_861) = func_9(((p_911->g_14[3] = ((void*)0 != l_13)) ^ (safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_add_func_int64_t_s_s(p_911->g_2, p_911->g_comm_values[p_911->tid])) , (safe_unary_minus_func_uint16_t_u(p_911->g_6))), func_22(l_28, func_29(func_34((*l_13), p_911), (p_911->g_142 , (*l_13)), l_794[2], l_13, p_911), p_911->g_87, p_911->g_227.y, p_911->g_499.sb, p_911))), (-8L)))), p_911->g_239.s1, (*l_13), p_911);
    }
    l_908 = (((p_911->g_78[4] && (!((p_911->g_81[2] = ((*l_862) = p_911->g_87)) && (safe_lshift_func_int8_t_s_u(p_911->g_690.s7, 6))))) & ((((((safe_lshift_func_uint8_t_u_s(l_868, 0)) != (((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(6UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(p_911->g_877.s08d7)).xxyzywxz, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(1UL, 0xCC56L)).xxxyxxxxxxyyxyxx, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_878.yxwyzwwx)).s42)).yyyyyxxyyxyyyyxx)).s211d)).yxywzyxxyzzywyzw)).s3f73, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_879.wyzz)).xxzwxywxyyzyyxwz)).se86f))).ywwyyyxzzxyyzwyy))).s7644)).wxyxzwwy, ((VECTOR(uint16_t, 16))(l_880.s5e3a68b24983cb9b)).odd))).s7603716272062625, ((VECTOR(uint16_t, 4))(l_881.ywzy)).ywxwzywyyyyyzwxy))).s0c)).yxxyxxxx))).lo)))), 0x09F0L, 0x7B8DL, 1UL)).s0, (((*p_911->g_286) = (safe_unary_minus_func_int64_t_s((FAKE_DIVERGE(p_911->global_1_offset, get_global_id(1), 10) | ((p_911->g_419.x = (p_911->g_267[4][0] = (((((p_911->g_577.s9 , p_911->g_885) == (FAKE_DIVERGE(p_911->global_2_offset, get_global_id(2), 10) , &p_911->g_886[0][6][0])) | (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_893.wwwzxwxzzyzzyywy)).s7, ((*l_903) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_911->g_3, (p_911->g_454.w >= l_898))), p_911->g_782.x))))), 6)) != (*p_911->g_286)), FAKE_DIVERGE(p_911->global_0_offset, get_global_id(0), 10)))) | 0xECEFE38EAE46811FL) > l_904))) >= (*p_911->g_286)))))) > p_911->g_14[2]))), 3)), 1L, ((VECTOR(int8_t, 4))(0x0DL)), 0x73L, 0x4DL, p_911->g_14[2], ((VECTOR(int8_t, 4))((-1L))), ((VECTOR(int8_t, 2))(0x25L)), 0x0AL)).sf, p_911->g_805.z)) , p_911->g_577.se), 0L)) && (*p_911->g_72)) == (*p_911->g_72))) && p_911->g_577.sd) ^ p_911->g_826.y) , l_906) , 0x7691L)) , l_907);
    p_911->g_910 = p_911->g_909;
    return p_911->g_909.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_286 p_911->g_287 p_911->g_86
 * writes: p_911->g_855
 */
int32_t * func_9(int32_t  p_10, uint32_t  p_11, int16_t  p_12, struct S2 * p_911)
{ /* block id: 370 */
    VECTOR(int32_t, 2) l_835 = (VECTOR(int32_t, 2))(1L, 0x79E68607L);
    VECTOR(int16_t, 8) l_836 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L);
    union U1 l_841 = {1UL};
    VECTOR(uint64_t, 8) l_847 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x319D691A59408A48L), 0x319D691A59408A48L), 0x319D691A59408A48L, 9UL, 0x319D691A59408A48L);
    int32_t *l_848 = &p_911->g_849;
    int64_t l_850[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t **l_851[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_852[6] = {&p_911->g_6,(void*)0,&p_911->g_6,&p_911->g_6,(void*)0,&p_911->g_6};
    uint32_t *l_854 = &p_911->g_391[1][1].f6;
    uint32_t **l_853[10];
    int16_t l_856 = 0x0423L;
    uint32_t l_857 = 4294967295UL;
    int32_t *l_860 = &p_911->g_6;
    int i;
    for (i = 0; i < 10; i++)
        l_853[i] = &l_854;
    atomic_or(&p_911->l_atomic_reduction[0], ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(l_835.yx)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x4CFBL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x5968L, 0x7DF2L)))), (-6L))), ((VECTOR(int16_t, 8))(l_836.s54076631)), 0x6F55L, ((l_835.x , ((l_835.x > (l_836.s0 != ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(((p_911->g_855 = &p_11) != (void*)0), 0x5EE5859AL, 4294967289UL, 0xA408FE74L)).y <= p_12), p_12)) | 0xB3L), l_856)) , (*p_911->g_286)))) > p_911->g_86)) | p_11), (-8L), 0x2DACL)).s14bf, ((VECTOR(int16_t, 4))(0x35BCL))))).wyyywwxywxyzywwz, ((VECTOR(uint16_t, 16))(1UL))))).odd)).s34)), ((VECTOR(int32_t, 2))((-5L)))))), p_11, 0x74ED6A24L, 0x7DDEE4DAL)).s14, ((VECTOR(int32_t, 2))(0x3DADC617L))))).lo);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_911->v_collective += p_911->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_10 &= 0x1B3B9679L;
    ++l_857;
    return l_860;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_803 p_911->g_805 p_911->g_806 p_911->g_807 p_911->g_811 p_911->g_62 p_911->g_72 p_911->g_73 p_911->g_577 p_911->g_750 p_911->g_227 p_911->g_826 p_911->g_286 p_911->g_94 p_911->g_287
 * writes: p_911->g_88 p_911->g_62 p_911->g_287 p_911->g_391.f4
 */
int16_t  func_22(uint16_t  p_23, int32_t * p_24, uint64_t  p_25, int32_t  p_26, int8_t  p_27, struct S2 * p_911)
{ /* block id: 362 */
    VECTOR(uint16_t, 2) l_798 = (VECTOR(uint16_t, 2))(0xDDECL, 0xDAE3L);
    VECTOR(uint8_t, 16) l_804 = (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x5DL), 0x5DL), 0x5DL, 8UL, 0x5DL, (VECTOR(uint8_t, 2))(8UL, 0x5DL), (VECTOR(uint8_t, 2))(8UL, 0x5DL), 8UL, 0x5DL, 8UL, 0x5DL);
    VECTOR(uint8_t, 16) l_808 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 5UL), 5UL), 5UL, 255UL, 5UL, (VECTOR(uint8_t, 2))(255UL, 5UL), (VECTOR(uint8_t, 2))(255UL, 5UL), 255UL, 5UL, 255UL, 5UL);
    uint8_t *l_812 = (void*)0;
    uint8_t *l_813 = &p_911->g_88;
    uint8_t *l_814 = (void*)0;
    uint8_t *l_815 = (void*)0;
    uint8_t *l_816[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 2) l_821 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x912CE8A28B76C791L);
    uint16_t l_827 = 0x5B4DL;
    int16_t *l_828 = (void*)0;
    int16_t *l_829 = (void*)0;
    int16_t *l_830 = &p_911->g_391[1][1].f4;
    int32_t l_831 = 0L;
    int32_t *l_832 = (void*)0;
    int32_t *l_833[10];
    int16_t l_834 = 0x196FL;
    int i;
    for (i = 0; i < 10; i++)
        l_833[i] = (void*)0;
    l_834 |= ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_798.xxxxyxyy)).s6641335301710150)).s7, (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 16))(p_911->g_803.wwwzwxxxwzxxwzzz)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(l_804.se4f0043da73055b9)).sbc, ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(p_911->g_805.yx)).yxxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_911->g_806.s03)), ((VECTOR(uint8_t, 2))(p_911->g_807.s3a)), 1UL, ((VECTOR(uint8_t, 2))(l_808.sca)), 0xAFL)).lo))).even))).xyyxxxyyxyyxxxxy))).s6, ((safe_mul_func_uint8_t_u_u(((*l_813) = ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(p_911->g_811.s36455327)).s7571027755764453))).se), 255UL)) & ((++p_911->g_62.s6) | (safe_lshift_func_int16_t_s_s(p_27, ((*p_911->g_72) && ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_821.yxyxyxyxxxyyyxyx)))).s9))))))), (((l_831 &= ((*l_830) = (safe_mul_func_uint8_t_u_u((p_911->g_577.s5 || p_911->g_750), (l_808.sf <= ((GROUP_DIVERGE(0, 1) == l_798.x) , ((VECTOR(uint32_t, 4))(0x8A82AAFAL, ((safe_add_func_uint16_t_u_u(p_911->g_227.y, ((*p_911->g_286) = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_911->g_826.yywywxxy)).s00)).even == (0x1D7BFC1BL > 4294967295UL))))) >= l_827), 0xDEC3721CL, 0x736EBD6DL)).z)))))) || p_25) >= 0UL))))) < p_911->g_94);
    return (*p_911->g_286);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_911->g_110
 */
int32_t * func_29(union U1  p_30, uint32_t  p_31, int32_t * p_32, int32_t * p_33, struct S2 * p_911)
{ /* block id: 359 */
    int32_t **l_795 = &p_911->g_110;
    (*l_795) = p_32;
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_6 p_911->g_782 p_911->g_194
 * writes: p_911->g_38 p_911->g_771
 */
union U1  func_34(uint16_t  p_35, struct S2 * p_911)
{ /* block id: 9 */
    VECTOR(int64_t, 8) l_44 = (VECTOR(int64_t, 8))(0x3F390F3BD791F9E6L, (VECTOR(int64_t, 4))(0x3F390F3BD791F9E6L, (VECTOR(int64_t, 2))(0x3F390F3BD791F9E6L, (-1L)), (-1L)), (-1L), 0x3F390F3BD791F9E6L, (-1L));
    VECTOR(int64_t, 2) l_45 = (VECTOR(int64_t, 2))(0x3E5C7D8169B41DBCL, 0x5767C8FA1B4415E4L);
    int32_t l_66[1][7] = {{0x05FAE11BL,0x45108D7EL,0x05FAE11BL,0x05FAE11BL,0x45108D7EL,0x05FAE11BL,0x05FAE11BL}};
    int32_t l_67 = (-1L);
    uint32_t l_80 = 4294967289UL;
    int32_t *l_83 = &p_911->g_38;
    int32_t **l_82 = &l_83;
    VECTOR(int32_t, 8) l_783 = (VECTOR(int32_t, 8))(0x4C4C023FL, (VECTOR(int32_t, 4))(0x4C4C023FL, (VECTOR(int32_t, 2))(0x4C4C023FL, (-1L)), (-1L)), (-1L), 0x4C4C023FL, (-1L));
    int32_t l_787 = 3L;
    int32_t **l_792[1];
    int32_t *l_793 = (void*)0;
    int i, j;
    for (i = 0; i < 1; i++)
        l_792[i] = &p_911->g_110;
    for (p_35 = 23; (p_35 < 15); --p_35)
    { /* block id: 12 */
        int32_t *l_54 = &p_911->g_38;
        int32_t l_63 = 0x4B6AEF2DL;
        int32_t l_68 = 0x4DA4F1DFL;
        VECTOR(uint64_t, 4) l_79 = (VECTOR(uint64_t, 4))(0x00C683D18CDA4751L, (VECTOR(uint64_t, 2))(0x00C683D18CDA4751L, 1UL), 1UL);
        uint16_t l_91 = 2UL;
        int64_t *l_781 = (void*)0;
        int32_t *l_785 = (void*)0;
        int32_t *l_786[4][2];
        uint64_t l_789 = 0xC06CDEB6507C12CBL;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_786[i][j] = (void*)0;
        }
        for (p_911->g_38 = 25; (p_911->g_38 != 9); p_911->g_38 = safe_sub_func_int32_t_s_s(p_911->g_38, 2))
        { /* block id: 15 */
            int32_t **l_55 = &l_54;
            uint64_t *l_64[1];
            uint64_t **l_74 = &p_911->g_72;
            int8_t *l_77 = &p_911->g_78[5];
            int64_t *l_770 = &p_911->g_771;
            int32_t *l_784 = &l_63;
            int i;
            for (i = 0; i < 1; i++)
                l_64[i] = &p_911->g_65;
            l_68 = func_41(((*l_770) = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(l_44.s2500074546201560)).s4a, ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 0x40A1033631AF6658L)), ((VECTOR(int64_t, 8))(l_45.xxxxyxyy)), ((VECTOR(int64_t, 2))((-1L), 0x1A1D127A4EF21DDBL)), 0x5B167D3D8E1CE43CL, ((VECTOR(int64_t, 2))((-1L), 0x256FAE7A4860C01EL)), 0x7C6A3F0BDE8AFF65L)).odd, (int64_t)func_46(((safe_mod_func_int16_t_s_s((func_52(((p_35 , ((((((*l_55) = l_54) == ((*l_82) = func_56((p_911->g_62.s7 = (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0UL, 0x78L, 0xE2L, 0x3CL)).even)), ((((((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(p_911->g_62.s5034)).yyzwxzzwwwzwyzxx, ((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((p_911->g_71 = (p_911->g_65--)) == p_35), 0x6EL, 0x2AL, 0x2AL)).lo)).yyyyxyyy))).s7630714610445603))).sf <= (((*l_74) = p_911->g_72) == (p_911->g_6 , (void*)0))) || (((((--(*p_911->g_72)) ^ (-2L)) >= ((*l_77) = p_911->g_65)) > ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 4))(l_79.zxww)), ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(((1L | p_911->g_62.s6) != (-1L)), 0x13B6624E94FA9F1EL, ((VECTOR(uint64_t, 4))(0x5F082010857B2633L)), 1UL, ((VECTOR(uint64_t, 4))(0x168752EB69FE4373L)), 0x0B9FCDB2BF7FA13AL, l_80, 0x041B8CD5F09706B0L, 1UL, 18446744073709551615UL)).sb13c, (uint64_t)FAKE_DIVERGE(p_911->group_0_offset, get_group_id(0), 10), (uint64_t)p_35))).xywwwwww)).lo)).yyzxwyxy, ((VECTOR(uint64_t, 8))(7UL))))).even))).z) == p_911->g_65)) , p_911->g_62.s2) >= l_68), 247UL, ((VECTOR(uint8_t, 2))(6UL)), 0UL, 0xBEL)).s1, p_911->g_81[2]))), &l_67, l_82, p_911))) <= p_911->g_38) ^ (-9L)) | p_911->l_comm_values[(safe_mod_func_uint32_t_u_u(p_911->tid, 47))])) , p_35), p_911) < p_911->g_81[0]), l_91)) , p_35), &p_911->g_86, p_911->g_81[0], p_911), (int64_t)p_911->g_685.y))), ((VECTOR(int64_t, 8))(0x0A19C8C8EE3D725BL))))).s0726203713513026)).s31, ((VECTOR(int64_t, 2))(0x3D373522F9B1A7AAL))))).xxxyxyyy)), ((VECTOR(int64_t, 8))(0x66B6B953E9DFF036L))))).s0753610515511141))).sf98a, ((VECTOR(int64_t, 4))((-3L))), ((VECTOR(int64_t, 4))((-9L)))))).even)).yyxxxxxy, ((VECTOR(int64_t, 8))((-2L)))))).s24, ((VECTOR(int64_t, 2))((-7L)))))), 0x36A2637B0E1F3ED9L, 0x0C9960BCA7B72A35L)).z), &p_911->g_6, p_911);
            (*l_784) = ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((void*)0 != l_781), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(0x5F635AE2L, (-1L))), ((VECTOR(int32_t, 8))((-1L), 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_911->g_782.xx)), (-8L), 0x39C84C09L)), 0L, 9L)).s34))), 0x5EC6BB3CL)).zyxxzzwy)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(l_783.s0453304223555021))))).even))).s7;
        }
        l_789++;
    }
    l_793 = ((*l_82) = (*l_82));
    return p_911->g_194;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_6
 * writes:
 */
int32_t  func_41(int64_t  p_42, int32_t * p_43, struct S2 * p_911)
{ /* block id: 348 */
    int32_t *l_772 = (void*)0;
    int32_t *l_773 = (void*)0;
    int32_t *l_774 = (void*)0;
    int32_t *l_775 = (void*)0;
    int32_t *l_776[7] = {&p_911->g_6,&p_911->g_86,&p_911->g_6,&p_911->g_6,&p_911->g_86,&p_911->g_6,&p_911->g_6};
    int16_t l_777 = 1L;
    uint8_t l_778 = 0UL;
    int i;
    ++l_778;
    return (*p_43);
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_94 p_911->g_6 p_911->g_38 p_911->g_87 p_911->g_109 p_911->g_110 p_911->g_88 p_911->g_86 p_911->g_62 p_911->g_72 p_911->g_73 p_911->g_122 p_911->g_71 p_911->g_comm_values p_911->g_78 p_911->g_142 p_911->g_65 p_911->g_81 p_911->g_164 p_911->g_221 p_911->g_227 p_911->g_232 p_911->g_244 p_911->g_267 p_911->g_239 p_911->g_286 p_911->g_294 p_911->g_194.f0 p_911->g_287 p_911->g_323 p_911->g_337 p_911->g_419 p_911->g_521
 * writes: p_911->g_94 p_911->g_109 p_911->g_86 p_911->g_88 p_911->g_78 p_911->g_71 p_911->g_142 p_911->l_comm_values p_911->g_164 p_911->g_87 p_911->g_110 p_911->g_73 p_911->g_81 p_911->g_232 p_911->g_244 p_911->g_267 p_911->g_315 p_911->g_65
 */
int64_t  func_46(uint64_t  p_47, int32_t * p_48, int64_t  p_49, struct S2 * p_911)
{ /* block id: 29 */
    int32_t l_92[6][8] = {{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)},{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)},{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)},{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)},{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)},{(-8L),7L,7L,(-8L),(-8L),7L,7L,(-8L)}};
    int32_t *l_93[3];
    uint64_t *l_107 = &p_911->g_73;
    int32_t *l_108 = &p_911->g_6;
    int32_t ***l_111 = &p_911->g_109[3];
    int8_t *l_121 = &p_911->g_78[5];
    int64_t l_189 = (-1L);
    uint64_t l_226 = 0xD763025B4E28337CL;
    VECTOR(int64_t, 8) l_258 = (VECTOR(int64_t, 8))(0x32949D9212966B7AL, (VECTOR(int64_t, 4))(0x32949D9212966B7AL, (VECTOR(int64_t, 2))(0x32949D9212966B7AL, 0L), 0L), 0L, 0x32949D9212966B7AL, 0L);
    union U1 *l_347[3];
    uint16_t *l_368 = &p_911->g_164;
    VECTOR(int64_t, 16) l_392 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    VECTOR(int16_t, 8) l_396 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
    uint32_t l_404 = 9UL;
    VECTOR(uint16_t, 4) l_418 = (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x0DB4L), 0x0DB4L);
    uint32_t *l_552 = &l_404;
    VECTOR(uint8_t, 16) l_555 = (VECTOR(uint8_t, 16))(0x80L, (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 0xD5L), 0xD5L), 0xD5L, 0x80L, 0xD5L, (VECTOR(uint8_t, 2))(0x80L, 0xD5L), (VECTOR(uint8_t, 2))(0x80L, 0xD5L), 0x80L, 0xD5L, 0x80L, 0xD5L);
    VECTOR(uint32_t, 16) l_688 = (VECTOR(uint32_t, 16))(0x09DF30B3L, (VECTOR(uint32_t, 4))(0x09DF30B3L, (VECTOR(uint32_t, 2))(0x09DF30B3L, 0x7DB8056DL), 0x7DB8056DL), 0x7DB8056DL, 0x09DF30B3L, 0x7DB8056DL, (VECTOR(uint32_t, 2))(0x09DF30B3L, 0x7DB8056DL), (VECTOR(uint32_t, 2))(0x09DF30B3L, 0x7DB8056DL), 0x09DF30B3L, 0x7DB8056DL, 0x09DF30B3L, 0x7DB8056DL);
    struct S0 ***l_693 = (void*)0;
    int64_t l_701 = 1L;
    int16_t l_706 = (-6L);
    uint64_t l_769[5][10] = {{0xDF1430453400C9ECL,0xDF1430453400C9ECL,0xD908DC92DECBCEE8L,18446744073709551611UL,0x44481B859EE8C067L,0x933E2C73AC2CF3A2L,9UL,0x8B5FC35057EE9A4DL,9UL,0x933E2C73AC2CF3A2L},{0xDF1430453400C9ECL,0xDF1430453400C9ECL,0xD908DC92DECBCEE8L,18446744073709551611UL,0x44481B859EE8C067L,0x933E2C73AC2CF3A2L,9UL,0x8B5FC35057EE9A4DL,9UL,0x933E2C73AC2CF3A2L},{0xDF1430453400C9ECL,0xDF1430453400C9ECL,0xD908DC92DECBCEE8L,18446744073709551611UL,0x44481B859EE8C067L,0x933E2C73AC2CF3A2L,9UL,0x8B5FC35057EE9A4DL,9UL,0x933E2C73AC2CF3A2L},{0xDF1430453400C9ECL,0xDF1430453400C9ECL,0xD908DC92DECBCEE8L,18446744073709551611UL,0x44481B859EE8C067L,0x933E2C73AC2CF3A2L,9UL,0x8B5FC35057EE9A4DL,9UL,0x933E2C73AC2CF3A2L},{0xDF1430453400C9ECL,0xDF1430453400C9ECL,0xD908DC92DECBCEE8L,18446744073709551611UL,0x44481B859EE8C067L,0x933E2C73AC2CF3A2L,9UL,0x8B5FC35057EE9A4DL,9UL,0x933E2C73AC2CF3A2L}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_93[i] = &p_911->g_86;
    for (i = 0; i < 3; i++)
        l_347[i] = &p_911->g_194;
    ++p_911->g_94;
    if ((((safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((((*l_121) = (p_911->g_6 >= func_52((p_911->g_38 < (func_101(l_107, l_107, &p_911->g_72, p_47, func_56(p_911->g_87, l_108, ((*l_111) = p_911->g_109[2]), p_911), p_911) != (*p_911->g_72))), p_911))) >= (-8L)) > p_911->g_62.s1), p_47)) || 1L), p_911->g_122)) , (**l_111)) == &p_911->g_6))
    { /* block id: 39 */
        VECTOR(int16_t, 16) l_136 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x342AL), 0x342AL), 0x342AL, (-1L), 0x342AL, (VECTOR(int16_t, 2))((-1L), 0x342AL), (VECTOR(int16_t, 2))((-1L), 0x342AL), (-1L), 0x342AL, (-1L), 0x342AL);
        int32_t l_161 = (-1L);
        uint64_t **l_168 = &l_107;
        VECTOR(int64_t, 2) l_188 = (VECTOR(int64_t, 2))(0x022DF4C28BF459CBL, 6L);
        int32_t **l_190 = &l_108;
        int32_t l_198 = 0L;
        int32_t l_203 = 1L;
        int32_t l_204 = 2L;
        int32_t l_205 = 0x5DA57805L;
        int32_t *l_209 = (void*)0;
        union U1 *l_340 = &p_911->g_194;
        union U1 **l_339 = &l_340;
        int i;
        for (p_911->g_71 = 13; (p_911->g_71 < 27); p_911->g_71 = safe_add_func_uint16_t_u_u(p_911->g_71, 8))
        { /* block id: 42 */
            VECTOR(uint8_t, 4) l_131 = (VECTOR(uint8_t, 4))(0x89L, (VECTOR(uint8_t, 2))(0x89L, 0UL), 0UL);
            uint32_t *l_141 = &p_911->g_142;
            int32_t ***l_151 = &p_911->g_109[2];
            int32_t ***l_152 = &p_911->g_109[1];
            int64_t *l_157 = (void*)0;
            int64_t *l_158 = (void*)0;
            int64_t *l_159 = (void*)0;
            int64_t *l_160 = (void*)0;
            uint16_t *l_162 = (void*)0;
            uint16_t *l_163 = &p_911->g_164;
            uint64_t *l_165 = &p_911->g_94;
            int16_t l_166 = 0x523AL;
            int32_t l_167 = 0L;
            uint64_t ***l_169 = (void*)0;
            uint64_t ***l_170 = &l_168;
            int32_t l_179 = 1L;
            int32_t l_180 = (-3L);
            int32_t l_182 = 0x24A4FE81L;
            int32_t l_183 = 0x71F4B66FL;
            int i;
            l_167 &= (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((p_911->g_comm_values[p_911->tid] , ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(1UL, 0xD6L)))).yxxyxyxxyxxxyyyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(247UL, 0x9EL))))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_131.xzwz)).zzwzzywy)).s73, ((VECTOR(uint8_t, 16))(255UL, 0x90L, 255UL, 255UL, 0UL, p_911->g_78[0], 1UL, ((p_49 , ((*l_165) &= (((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_136.s30)), ((VECTOR(int16_t, 8))((safe_mul_func_uint16_t_u_u(((*l_163) &= ((safe_add_func_int32_t_s_s(((--(*l_141)) , (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(p_49, (safe_mul_func_int8_t_s_s(((((l_151 != l_152) ^ (0x69350C07L == ((p_911->l_comm_values[(safe_mod_func_uint32_t_u_u(p_911->tid, 47))] = (p_47 < (safe_add_func_uint16_t_u_u((((*p_48) = (~(safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((*p_911->g_72) , FAKE_DIVERGE(p_911->global_0_offset, get_global_id(0), 10)))))) && p_911->g_65), p_911->g_62.s0)))) & p_47))) , l_136.s6) | p_49), p_911->g_81[2])))), p_47))), p_47)) != l_161)), p_911->g_comm_values[p_911->tid])), ((VECTOR(int16_t, 4))(1L)), p_911->g_comm_values[p_911->tid], 0x3216L, (-8L))), 1L, 1L, ((VECTOR(int16_t, 4))(0L)))).se, 3)) >= p_911->g_78[5]) || p_49), 7)) || 0x6A3A27DCF5926FDCL) >= p_47))) != p_911->g_62.s7), 0xBAL, 0x8DL, 5UL, l_166, GROUP_DIVERGE(0, 1), p_911->g_81[2], 1UL, 255UL)).s83))).xxyxyxxyyyxyxyxx)).s1e))), 0x49L, 255UL)))).wxyyyzzxzxzyyyww, ((VECTOR(uint8_t, 16))(1UL))))).sb), 0x69L)) != 0xDAL), p_49)), p_911->g_81[1]));
            (*l_170) = l_168;
            for (p_911->g_87 = 0; (p_911->g_87 <= (-9)); p_911->g_87--)
            { /* block id: 52 */
                uint8_t l_185[5][8][1] = {{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}},{{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL},{9UL}}};
                int i, j, k;
                p_48 = func_56(p_911->g_65, (**l_111), &p_911->g_110, p_911);
                for (p_911->g_86 = (-17); (p_911->g_86 >= 28); p_911->g_86 = safe_add_func_uint32_t_u_u(p_911->g_86, 5))
                { /* block id: 56 */
                    int32_t l_184 = 0x234C3152L;
                    (**l_111) = (void*)0;
                    for (p_911->g_88 = 0; (p_911->g_88 > 36); p_911->g_88++)
                    { /* block id: 60 */
                        int16_t l_177[10] = {6L,6L,6L,6L,6L,6L,6L,6L,6L,6L};
                        int32_t l_178 = (-1L);
                        int32_t l_181[5] = {0x792DA7FEL,0x792DA7FEL,0x792DA7FEL,0x792DA7FEL,0x792DA7FEL};
                        int i;
                        l_185[0][6][0]++;
                    }
                }
                return p_47;
            }
        }
        if (((p_911->g_81[2] | (0L == (+((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_188.xxxyxxxyxxxyxxxy)).sdfbd)).y))) & p_911->g_65))
        { /* block id: 67 */
            int32_t l_199 = 0x3C089771L;
            int32_t l_200[4];
            VECTOR(int64_t, 4) l_214 = (VECTOR(int64_t, 4))(0x2C93696682BC353FL, (VECTOR(int64_t, 2))(0x2C93696682BC353FL, 0x3CCD9C671D1871A3L), 0x3CCD9C671D1871A3L);
            uint32_t l_228 = 0UL;
            int32_t l_254 = (-1L);
            uint32_t l_326 = 4294967293UL;
            int i;
            for (i = 0; i < 4; i++)
                l_200[i] = 0x02EE29DFL;
            (**l_111) = func_56(l_189, p_48, l_190, p_911);
            for (p_911->g_73 = 0; (p_911->g_73 > 28); ++p_911->g_73)
            { /* block id: 71 */
                union U1 *l_193 = &p_911->g_194;
                union U1 **l_195 = (void*)0;
                union U1 **l_196 = (void*)0;
                union U1 **l_197 = &l_193;
                int32_t l_201 = 0x7213AF98L;
                int32_t l_202 = 0x5E49BDA0L;
                uint64_t l_206 = 0xCADEBA3FE0BE34E6L;
                (*l_197) = l_193;
                l_206++;
                l_209 = p_48;
                for (l_205 = (-27); (l_205 < 14); l_205 = safe_add_func_int32_t_s_s(l_205, 3))
                { /* block id: 77 */
                    uint16_t *l_222 = &p_911->g_81[1];
                    int32_t l_225 = 0x21FB1132L;
                    atomic_min(&p_911->g_atomic_reduction[get_linear_group_id()], ((*p_48) = (((safe_mul_func_int8_t_s_s((((p_911->g_78[5] , &p_911->g_194) == (void*)0) , (((*p_911->g_72) > ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_214.zw)), 0x71035ACF56564C8AL, 1L)).x) <= (p_49 , (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(0x3F67E56BL, (((&p_911->g_72 != ((safe_lshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_911->g_221.yy)).xxxyyxyxyxxxxxxy)).s7 >= GROUP_DIVERGE(0, 1)) & (--(*l_222))), ((**l_190) > ((void*)0 != &p_911->g_194)))) > (*p_911->g_110)) != 0x0F0F39675CE39C1AL), 7)) , l_168)) ^ 0x52677F0AL) & p_911->g_comm_values[p_911->tid]), p_911->g_142, 0xAABBA61EL, p_49, p_47, l_202, 4294967294UL, l_225, FAKE_DIVERGE(p_911->group_0_offset, get_group_id(0), 10), 2UL, 7UL, l_202, ((VECTOR(uint32_t, 2))(0x0C2DAF40L)), 4294967295UL)).s1, l_225))))), 0x28L)) == (**l_190)) != l_226)) + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_911->v_collective += p_911->g_atomic_reduction[get_linear_group_id()];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    (*p_48) = (***l_111);
                    (**l_111) = &l_200[3];
                }
            }
            (*p_48) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_911->g_227.xxyy)).ywyzxzxwwxyzzywx)).sa;
            if ((((VECTOR(uint32_t, 2))(4294967291UL, 0x55A25A28L)).lo == ((*p_48) >= 0xC234C242L)))
            { /* block id: 86 */
                --l_228;
            }
            else
            { /* block id: 88 */
                int8_t l_231 = 0x54L;
                int32_t l_237 = 7L;
                int32_t l_238 = 0x0F310181L;
                VECTOR(int32_t, 16) l_252 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 5L), 5L), 5L, 2L, 5L, (VECTOR(int32_t, 2))(2L, 5L), (VECTOR(int32_t, 2))(2L, 5L), 2L, 5L, 2L, 5L);
                uint32_t l_255 = 1UL;
                int32_t **l_270[9] = {&l_209,&l_209,&l_209,&l_209,&l_209,&l_209,&l_209,&l_209,&l_209};
                uint16_t l_329 = 1UL;
                int i;
                if (l_231)
                { /* block id: 89 */
                    volatile struct S0 **l_233 = &p_911->g_232;
                    int32_t l_241 = 0x50C68EEBL;
                    int32_t l_243 = (-1L);
                    int8_t l_247 = 0L;
                    int8_t l_249 = 0x25L;
                    int32_t l_250 = 5L;
                    int32_t l_251 = 0L;
                    int32_t l_253 = 0x20EA851AL;
                    (*l_233) = p_911->g_232;
                    for (l_199 = 0; (l_199 != 7); l_199 = safe_add_func_uint8_t_u_u(l_199, 8))
                    { /* block id: 93 */
                        int32_t l_236 = 0x2FD5C622L;
                        int32_t l_240[9][5] = {{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)},{(-9L),1L,(-1L),1L,(-9L)}};
                        int32_t l_242 = 0L;
                        VECTOR(int32_t, 8) l_248 = (VECTOR(int32_t, 8))(0x70610EA4L, (VECTOR(int32_t, 4))(0x70610EA4L, (VECTOR(int32_t, 2))(0x70610EA4L, (-1L)), (-1L)), (-1L), 0x70610EA4L, (-1L));
                        VECTOR(int16_t, 4) l_263 = (VECTOR(int16_t, 4))(0x47C3L, (VECTOR(int16_t, 2))(0x47C3L, 1L), 1L);
                        int16_t *l_266 = (void*)0;
                        int i, j;
                        p_911->g_244++;
                        l_255--;
                        l_250 = ((p_49 <= (GROUP_DIVERGE(1, 1) ^ (((VECTOR(int64_t, 16))(l_258.s3603263201070550)).s2 != p_47))) || ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((l_252.s4 > (safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (l_243 = ((*p_48) = (safe_lshift_func_uint16_t_u_u(0xCAA5L, p_911->g_71))))))), 6L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x0D2039C2L, (~((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(1L, 0x2981A23DL)).xxxy, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 1L)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_263.yzwy)), ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))((((p_911->g_267[4][0] &= (safe_sub_func_int8_t_s_s((6L || (p_48 == p_48)), 0x0EL))) | 0x7026L) & FAKE_DIVERGE(p_911->local_0_offset, get_local_id(0), 10)), p_911->g_6, ((VECTOR(int8_t, 2))(0x32L)), ((VECTOR(int8_t, 2))((-6L))), ((VECTOR(int8_t, 4))((-1L))), p_47, p_911->g_comm_values[p_911->tid], 0L, ((VECTOR(int8_t, 2))(1L)), 0x2AL)).sa504, ((VECTOR(uint8_t, 4))(0xCBL)))))))), 0x2650L, 0x14CDL)).lo, ((VECTOR(int16_t, 4))(7L))))).xzwwyxzy, ((VECTOR(uint16_t, 8))(0x4B26L))))).odd))).lo)), ((VECTOR(int32_t, 2))(0x3304CED0L)), ((VECTOR(int32_t, 2))(1L)), 0L, 0x3CE109F4L)).s04)).lo), 1L, 0x0C1A0C52L)).ywxzwzyz)).s2, ((VECTOR(int32_t, 4))(0x3B178A9DL)), 0x701E2568L)).s35, ((VECTOR(int32_t, 2))(0x499D9228L))))), 0x3DB2BD2AL, 0L)).x);
                    }
                }
                else
                { /* block id: 101 */
                    uint16_t l_271 = 0x990BL;
                    uint64_t ***l_293 = (void*)0;
                    for (p_911->g_86 = (-11); (p_911->g_86 <= (-5)); p_911->g_86 = safe_add_func_int32_t_s_s(p_911->g_86, 2))
                    { /* block id: 104 */
                        (*l_111) = (l_270[8] = &p_48);
                        --l_271;
                    }
                    for (l_204 = 0; (l_204 == (-28)); l_204 = safe_sub_func_uint32_t_u_u(l_204, 3))
                    { /* block id: 111 */
                        int32_t *l_292 = &l_92[2][7];
                        (*p_48) &= (((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(l_271, 0xDEECL)) , (0x19E0C032L && (((*l_292) = (((0x1FBDL | p_911->g_239.s4) == (safe_lshift_func_int16_t_s_s((p_47 ^ (((safe_mul_func_int8_t_s_s((p_911->g_286 != &p_911->g_287), ((safe_mul_func_int8_t_s_s(((+(((safe_lshift_func_uint16_t_u_s((&p_911->g_71 != (void*)0), p_47)) != 0UL) || p_911->g_78[9])) | l_271), l_214.y)) && 0x10C7EED4EAE01678L))) == l_271) , FAKE_DIVERGE(p_911->local_2_offset, get_local_id(2), 10))), 5))) <= p_911->g_267[1][0])) , 8L))), 15)), (*p_911->g_72))) , l_293) == p_911->g_294);
                    }
                }
                for (p_911->g_88 = (-17); (p_911->g_88 == 43); p_911->g_88++)
                { /* block id: 118 */
                    uint8_t l_314 = 1UL;
                    uint32_t *l_316 = &l_228;
                    if ((atomic_inc(&p_911->g_atomic_input[25 * get_linear_group_id() + 23]) == 8))
                    { /* block id: 120 */
                        int32_t l_300 = 0x782FF706L;
                        int32_t *l_299 = &l_300;
                        union U1 l_301 = {0x383B1D1BEAFEB27DL};
                        union U1 l_302 = {18446744073709551612UL};
                        int32_t *l_303 = &l_300;
                        int32_t *l_304 = &l_300;
                        int32_t *l_305[1][9][3] = {{{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0},{(void*)0,&l_300,(void*)0}}};
                        int32_t *l_306 = (void*)0;
                        uint32_t l_307[5][10] = {{1UL,4294967295UL,0xE2B5147DL,4294967286UL,0x6252E3E8L,0x6252E3E8L,4294967286UL,0xE2B5147DL,4294967295UL,1UL},{1UL,4294967295UL,0xE2B5147DL,4294967286UL,0x6252E3E8L,0x6252E3E8L,4294967286UL,0xE2B5147DL,4294967295UL,1UL},{1UL,4294967295UL,0xE2B5147DL,4294967286UL,0x6252E3E8L,0x6252E3E8L,4294967286UL,0xE2B5147DL,4294967295UL,1UL},{1UL,4294967295UL,0xE2B5147DL,4294967286UL,0x6252E3E8L,0x6252E3E8L,4294967286UL,0xE2B5147DL,4294967295UL,1UL},{1UL,4294967295UL,0xE2B5147DL,4294967286UL,0x6252E3E8L,0x6252E3E8L,4294967286UL,0xE2B5147DL,4294967295UL,1UL}};
                        int i, j, k;
                        l_299 = (void*)0;
                        l_306 = (l_305[0][8][0] = ((l_302 = l_301) , (l_304 = l_303)));
                        l_307[4][1]++;
                        unsigned int result = 0;
                        result += l_300;
                        result += l_301.f0;
                        result += l_302.f0;
                        int l_307_i0, l_307_i1;
                        for (l_307_i0 = 0; l_307_i0 < 5; l_307_i0++) {
                            for (l_307_i1 = 0; l_307_i1 < 10; l_307_i1++) {
                                result += l_307[l_307_i0][l_307_i1];
                            }
                        }
                        atomic_add(&p_911->g_special_values[25 * get_linear_group_id() + 23], result);
                    }
                    else
                    { /* block id: 127 */
                        (1 + 1);
                    }
                    (*p_48) = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 8))(0x03021451L, 1L, ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(0x057FL, 0x3E1CL)).yxyx, (int16_t)(safe_mul_func_uint16_t_u_u((((((((VECTOR(uint32_t, 8))(4294967293UL, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(1UL, 4294967286UL)).xxxx, (uint32_t)l_314))), ((l_314 >= ((((p_911->g_315 = p_911->g_62.s0) & ((*l_316) = ((*p_48) && p_911->g_194.f0))) && (((7UL >= p_47) , ((void*)0 != &p_911->g_287)) && p_911->g_244)) & 0L)) == p_49), 4294967289UL, 0xB77458CFL)).s2 ^ 0xB1D011B0L) , p_911->g_287) && 0x70FE3787DE6A4385L) , 7UL) , 0x367FL), (*p_911->g_286)))))).zzxyyxxw, ((VECTOR(int16_t, 8))(1L))))).s6, FAKE_DIVERGE(p_911->local_1_offset, get_local_id(1), 10))) > l_314), 0x07D2D09DL, ((VECTOR(int32_t, 4))(0L)))).s3, (-1L), (-1L))).wzzxzyxy)), ((VECTOR(int32_t, 8))(0x5D9C9767L))))).s47, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(int32_t, 2))(0x7B4DC1F5L))))).yxxy, ((VECTOR(int32_t, 4))(1L))))).w;
                    if (l_314)
                        continue;
                    for (p_911->g_87 = 0; (p_911->g_87 != 14); p_911->g_87++)
                    { /* block id: 136 */
                        int16_t l_334 = 0L;
                        (*p_48) = (safe_lshift_func_uint16_t_u_s(65535UL, 6));
                        (*p_48) = (p_47 , ((-9L) && p_49));
                        l_334 |= (safe_div_func_uint16_t_u_u((((((*l_121) ^= (((((VECTOR(int64_t, 8))(p_911->g_323.xyxyxxxy)).s3 | (((safe_rshift_func_uint16_t_u_u((((p_48 == (l_326 , (void*)0)) >= (((((*p_48) == p_47) <= ((p_911->g_227.x | l_329) , p_49)) >= (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((**l_190), 1UL)), 9)) >= p_49) >= (*p_911->g_286))) & p_49)) >= (*p_911->g_110)), 8)) , 1UL) > l_314)) >= 0xE6F619C1L) != 0x1562257021491155L)) && l_314) < GROUP_DIVERGE(1, 1)) ^ p_49), GROUP_DIVERGE(2, 1)));
                    }
                }
            }
        }
        else
        { /* block id: 144 */
            int32_t l_348 = 0x71815283L;
            (*p_48) = (safe_mul_func_uint16_t_u_u(((p_911->g_337 != l_339) , GROUP_DIVERGE(0, 1)), (((*l_339) = (*l_339)) != ((safe_sub_func_uint8_t_u_u((l_348 ^= ((0L > ((safe_mod_func_uint32_t_u_u((0x4C4C8C27L >= ((p_47 | (p_49 = (((void*)0 != l_347[2]) != p_911->g_323.y))) && (*p_48))), 0x29F2D18DL)) >= p_911->g_88)) , GROUP_DIVERGE(2, 1))), (*l_108))) , &p_911->g_194))));
            return p_47;
        }
        (**l_111) = p_48;
    }
    else
    { /* block id: 154 */
        uint16_t *l_365 = (void*)0;
        uint16_t *l_367 = &p_911->g_267[4][0];
        uint16_t **l_366 = &l_367;
        (*p_48) = (l_365 == ((((*l_366) = &p_911->g_267[4][0]) != (void*)0) , l_368));
    }
    for (p_911->g_244 = 0; (p_911->g_244 <= 11); p_911->g_244 = safe_add_func_int8_t_s_s(p_911->g_244, 2))
    { /* block id: 160 */
        struct S0 *l_390 = &p_911->g_391[1][1];
        struct S0 **l_389 = &l_390;
        int32_t l_400 = 0x1C75B2FFL;
        union U1 *l_406[8];
        VECTOR(int8_t, 2) l_412 = (VECTOR(int8_t, 2))(0x3BL, 0x24L);
        VECTOR(uint64_t, 16) l_431 = (VECTOR(uint64_t, 16))(0x563CD2EE05AC8703L, (VECTOR(uint64_t, 4))(0x563CD2EE05AC8703L, (VECTOR(uint64_t, 2))(0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L), 0xE1A8B6355B149D69L), 0xE1A8B6355B149D69L, 0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L, (VECTOR(uint64_t, 2))(0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L), (VECTOR(uint64_t, 2))(0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L), 0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L, 0x563CD2EE05AC8703L, 0xE1A8B6355B149D69L);
        VECTOR(uint16_t, 8) l_440 = (VECTOR(uint16_t, 8))(0xD4D4L, (VECTOR(uint16_t, 4))(0xD4D4L, (VECTOR(uint16_t, 2))(0xD4D4L, 65535UL), 65535UL), 65535UL, 0xD4D4L, 65535UL);
        VECTOR(int32_t, 16) l_525 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
        VECTOR(int32_t, 8) l_546 = (VECTOR(int32_t, 8))(0x38FFA1A9L, (VECTOR(int32_t, 4))(0x38FFA1A9L, (VECTOR(int32_t, 2))(0x38FFA1A9L, (-1L)), (-1L)), (-1L), 0x38FFA1A9L, (-1L));
        VECTOR(int8_t, 2) l_734 = (VECTOR(int8_t, 2))(0x0BL, 0x59L);
        VECTOR(int8_t, 16) l_735 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x54L), 0x54L), 0x54L, 3L, 0x54L, (VECTOR(int8_t, 2))(3L, 0x54L), (VECTOR(int8_t, 2))(3L, 0x54L), 3L, 0x54L, 3L, 0x54L);
        VECTOR(int8_t, 4) l_748 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x34L), 0x34L);
        int32_t **l_766 = &p_911->g_110;
        uint32_t l_768[2][7][10] = {{{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL}},{{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL},{4294967290UL,0x8B41B04EL,0x3B09E4B2L,0x3980FCB5L,1UL,4294967293UL,5UL,0x72AE7E61L,5UL,4294967293UL}}};
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_406[i] = (void*)0;
        if ((*p_48))
            break;
        for (p_911->g_71 = 0; (p_911->g_71 == 44); p_911->g_71++)
        { /* block id: 164 */
            VECTOR(uint16_t, 8) l_395 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL);
            uint64_t l_403 = 2UL;
            uint8_t l_405 = 0x7FL;
            VECTOR(int32_t, 8) l_409 = (VECTOR(int32_t, 8))(0x29044644L, (VECTOR(int32_t, 4))(0x29044644L, (VECTOR(int32_t, 2))(0x29044644L, (-9L)), (-9L)), (-9L), 0x29044644L, (-9L));
            volatile struct S0 **l_451[7] = {&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232};
            volatile struct S0 ***l_450 = &l_451[0];
            VECTOR(uint16_t, 16) l_483 = (VECTOR(uint16_t, 16))(0xABC8L, (VECTOR(uint16_t, 4))(0xABC8L, (VECTOR(uint16_t, 2))(0xABC8L, 0x8544L), 0x8544L), 0x8544L, 0xABC8L, 0x8544L, (VECTOR(uint16_t, 2))(0xABC8L, 0x8544L), (VECTOR(uint16_t, 2))(0xABC8L, 0x8544L), 0xABC8L, 0x8544L, 0xABC8L, 0x8544L);
            uint32_t l_554 = 0xD45ACEDFL;
            VECTOR(int32_t, 16) l_585 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x55C3594EL), 0x55C3594EL), 0x55C3594EL, 0L, 0x55C3594EL, (VECTOR(int32_t, 2))(0L, 0x55C3594EL), (VECTOR(int32_t, 2))(0L, 0x55C3594EL), 0L, 0x55C3594EL, 0L, 0x55C3594EL);
            VECTOR(int32_t, 16) l_586 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L, (VECTOR(int32_t, 2))((-6L), 0L), (VECTOR(int32_t, 2))((-6L), 0L), (-6L), 0L, (-6L), 0L);
            int32_t l_587 = 1L;
            int i;
            (1 + 1);
        }
        for (p_911->g_164 = 0; (p_911->g_164 <= 1); p_911->g_164 = safe_add_func_uint64_t_u_u(p_911->g_164, 5))
        { /* block id: 270 */
            int32_t l_631 = 0L;
            int32_t l_633 = 1L;
            int16_t l_699 = 2L;
            int32_t l_705 = 6L;
            int32_t l_707 = (-1L);
            int32_t l_709 = 5L;
            int32_t l_710[2];
            union U1 l_722 = {0x08D3497C717C6241L};
            VECTOR(int8_t, 4) l_747 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L);
            int32_t *l_767 = &l_710[0];
            int i;
            for (i = 0; i < 2; i++)
                l_710[i] = 0x4E24017AL;
            for (p_911->g_65 = (-16); (p_911->g_65 != 33); p_911->g_65 = safe_add_func_int8_t_s_s(p_911->g_65, 2))
            { /* block id: 273 */
                uint32_t l_612 = 0x0DEBB5A4L;
                int64_t *l_620 = (void*)0;
                uint64_t *l_632 = &l_226;
                int32_t l_679 = 0L;
                VECTOR(uint32_t, 2) l_687 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
                int32_t l_695[7] = {0L,(-5L),0L,0L,(-5L),0L,0L};
                struct S0 ***l_696 = &l_389;
                int32_t l_708 = 0x68CFADC8L;
                uint8_t l_712 = 0x05L;
                VECTOR(int8_t, 4) l_749 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 9L), 9L);
                VECTOR(uint16_t, 4) l_755 = (VECTOR(uint16_t, 4))(0x5F84L, (VECTOR(uint16_t, 2))(0x5F84L, 65532UL), 65532UL);
                int i;
                if (((*p_48) = (l_440.s3 >= 0L)))
                { /* block id: 275 */
                    if ((atomic_inc(&p_911->l_atomic_input[17]) == 2))
                    { /* block id: 277 */
                        uint8_t l_600[7] = {0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L,0xD2L};
                        uint16_t l_603 = 9UL;
                        uint32_t l_604 = 4294967289UL;
                        union U1 l_606 = {0xDECF69C96E5786F4L};
                        union U1 *l_605 = &l_606;
                        union U1 *l_607 = &l_606;
                        union U1 *l_608 = &l_606;
                        union U1 *l_609 = &l_606;
                        int i;
                        l_600[5]--;
                        l_609 = (l_608 = ((FAKE_DIVERGE(p_911->local_0_offset, get_local_id(0), 10) , GROUP_DIVERGE(1, 1)) , (l_607 = ((l_603 , (GROUP_DIVERGE(1, 1) , l_604)) , l_605))));
                        unsigned int result = 0;
                        int l_600_i0;
                        for (l_600_i0 = 0; l_600_i0 < 7; l_600_i0++) {
                            result += l_600[l_600_i0];
                        }
                        result += l_603;
                        result += l_604;
                        result += l_606.f0;
                        atomic_add(&p_911->l_special_values[17], result);
                    }
                    else
                    { /* block id: 282 */
                        (1 + 1);
                    }
                }
                else
                { /* block id: 285 */
                    for (p_49 = 0; (p_49 == 14); p_49++)
                    { /* block id: 288 */
                        l_612--;
                    }
                    if ((*p_48))
                        break;
                    return p_911->g_267[4][0];
                }
            }
            (*l_767) = ((p_49 & ((-1L) > (((((safe_mul_func_uint8_t_u_u(0xA9L, p_49)) == (safe_add_func_int32_t_s_s((!0x123E46FAL), ((safe_mod_func_uint8_t_u_u((p_48 != (((void*)0 != &l_107) , p_48)), p_911->g_267[5][0])) & l_768[1][1][4])))) == p_911->g_419.y) && p_911->g_122) < (*p_911->g_286)))) , l_769[3][6]);
        }
        if ((*l_108))
            continue;
    }
    (**l_111) = p_48;
    return p_911->g_521.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_88
 * writes: p_911->g_88
 */
int32_t  func_52(int32_t  p_53, struct S2 * p_911)
{ /* block id: 26 */
    int32_t *l_84 = (void*)0;
    int32_t *l_85[6] = {&p_911->g_86,&p_911->g_38,&p_911->g_86,&p_911->g_86,&p_911->g_38,&p_911->g_86};
    int i;
    --p_911->g_88;
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_110
 * writes:
 */
int32_t * func_56(uint8_t  p_57, int32_t * p_58, int32_t ** p_59, struct S2 * p_911)
{ /* block id: 23 */
    return (*p_59);
}


/* ------------------------------------------ */
/* 
 * reads : p_911->g_88 p_911->g_86 p_911->g_62 p_911->g_110 p_911->g_72 p_911->g_73
 * writes: p_911->g_86
 */
uint64_t  func_101(uint64_t * p_102, uint64_t * p_103, uint64_t ** p_104, uint32_t  p_105, int32_t * p_106, struct S2 * p_911)
{ /* block id: 32 */
    VECTOR(uint64_t, 8) l_112 = (VECTOR(uint64_t, 8))(0x8FC35A00283E5E6FL, (VECTOR(uint64_t, 4))(0x8FC35A00283E5E6FL, (VECTOR(uint64_t, 2))(0x8FC35A00283E5E6FL, 0xB9428C401F3C7B64L), 0xB9428C401F3C7B64L), 0xB9428C401F3C7B64L, 0x8FC35A00283E5E6FL, 0xB9428C401F3C7B64L);
    int32_t *l_113 = &p_911->g_86;
    int32_t l_114 = 0x406517A6L;
    int i;
    l_114 = (p_911->g_88 , ((*l_113) ^= l_112.s1));
    p_106 = func_56((safe_sub_func_uint64_t_u_u(((*l_113) & ((((*l_113) <= 4294967293UL) < (l_114 = (-9L))) || (safe_lshift_func_uint8_t_u_u((0x41D4L || p_911->g_62.s5), 5)))), ((safe_rshift_func_uint8_t_u_u(0xA5L, ((void*)0 != l_113))) <= 0x18789B19E1A97047L))), l_113, &p_911->g_110, p_911);
    return (*p_911->g_72);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_comm_values[i] = 1;
    struct S2 c_912;
    struct S2* p_911 = &c_912;
    struct S2 c_913 = {
        0x2887CF2EL, // p_911->g_2
        0x4DC9ED9BL, // p_911->g_3
        0x64FC2285L, // p_911->g_4
        0x7E30F587L, // p_911->g_5
        0x6E1C9741L, // p_911->g_6
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_911->g_14
        0x5A99DA97L, // p_911->g_38
        (VECTOR(uint8_t, 8))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 0x25L), 0x25L), 0x25L, 0xFDL, 0x25L), // p_911->g_62
        0xDE2FC23FAAB93B57L, // p_911->g_65
        0x3FD5B128L, // p_911->g_71
        18446744073709551606UL, // p_911->g_73
        &p_911->g_73, // p_911->g_72
        {0x6BL,0x05L,0x52L,0x05L,0x6BL,0x6BL,0x05L,0x52L,0x05L,0x6BL}, // p_911->g_78
        {0x1F8AL,0x1F8AL,0x1F8AL,0x1F8AL}, // p_911->g_81
        2L, // p_911->g_86
        1L, // p_911->g_87
        1UL, // p_911->g_88
        0UL, // p_911->g_94
        (void*)0, // p_911->g_110
        {&p_911->g_110,&p_911->g_110,&p_911->g_110,&p_911->g_110}, // p_911->g_109
        (-1L), // p_911->g_122
        4294967295UL, // p_911->g_142
        65527UL, // p_911->g_164
        {0x3397D4F8AA34D098L}, // p_911->g_194
        (VECTOR(int32_t, 2))(0x6EF5A8E4L, (-1L)), // p_911->g_221
        (VECTOR(int32_t, 2))(6L, 5L), // p_911->g_227
        (void*)0, // p_911->g_232
        (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), (-7L)), (-7L)), (-7L), (-2L), (-7L)), // p_911->g_239
        0x6B9736B5C2FCE0FFL, // p_911->g_244
        {{65528UL},{65528UL},{65528UL},{65528UL},{65528UL},{65528UL},{65528UL}}, // p_911->g_267
        (-1L), // p_911->g_287
        &p_911->g_287, // p_911->g_286
        (void*)0, // p_911->g_296
        &p_911->g_296, // p_911->g_295
        &p_911->g_295, // p_911->g_294
        0xB821A7CDL, // p_911->g_315
        (VECTOR(int64_t, 2))(0x0420D3E76D887816L, 0x7155FC610984C420L), // p_911->g_323
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_911->g_338
        &p_911->g_338[6], // p_911->g_337
        {{{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL},{0x2BE68212L,0x47L,-1L,4294967292UL,0x40B0L,0UL,0x30100DD8L},{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL}},{{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL},{0x2BE68212L,0x47L,-1L,4294967292UL,0x40B0L,0UL,0x30100DD8L},{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL}},{{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL},{0x2BE68212L,0x47L,-1L,4294967292UL,0x40B0L,0UL,0x30100DD8L},{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL}},{{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL},{0x2BE68212L,0x47L,-1L,4294967292UL,0x40B0L,0UL,0x30100DD8L},{0x83A3CC47L,-1L,0x2DB7F4CA5C093C56L,0x5E294872L,1L,1UL,0UL}}}, // p_911->g_391
        (VECTOR(int16_t, 8))(0x6135L, (VECTOR(int16_t, 4))(0x6135L, (VECTOR(int16_t, 2))(0x6135L, (-5L)), (-5L)), (-5L), 0x6135L, (-5L)), // p_911->g_397
        (VECTOR(uint16_t, 4))(0xA5A0L, (VECTOR(uint16_t, 2))(0xA5A0L, 0xB742L), 0xB742L), // p_911->g_417
        (VECTOR(uint16_t, 2))(65527UL, 0x6A06L), // p_911->g_419
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), // p_911->g_454
        (VECTOR(int16_t, 16))(0x1C1FL, (VECTOR(int16_t, 4))(0x1C1FL, (VECTOR(int16_t, 2))(0x1C1FL, 0L), 0L), 0L, 0x1C1FL, 0L, (VECTOR(int16_t, 2))(0x1C1FL, 0L), (VECTOR(int16_t, 2))(0x1C1FL, 0L), 0x1C1FL, 0L, 0x1C1FL, 0L), // p_911->g_482
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-10L)), (-10L)), (-10L), (-4L), (-10L), (VECTOR(int32_t, 2))((-4L), (-10L)), (VECTOR(int32_t, 2))((-4L), (-10L)), (-4L), (-10L), (-4L), (-10L)), // p_911->g_499
        (VECTOR(int32_t, 2))(0L, 0x5E7B11C5L), // p_911->g_511
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 6L), 6L), // p_911->g_521
        (VECTOR(int64_t, 4))(0x7C5A730128D48069L, (VECTOR(int64_t, 2))(0x7C5A730128D48069L, (-1L)), (-1L)), // p_911->g_522
        (VECTOR(int32_t, 16))(0x6673DAB4L, (VECTOR(int32_t, 4))(0x6673DAB4L, (VECTOR(int32_t, 2))(0x6673DAB4L, 0x4A9E8C3AL), 0x4A9E8C3AL), 0x4A9E8C3AL, 0x6673DAB4L, 0x4A9E8C3AL, (VECTOR(int32_t, 2))(0x6673DAB4L, 0x4A9E8C3AL), (VECTOR(int32_t, 2))(0x6673DAB4L, 0x4A9E8C3AL), 0x6673DAB4L, 0x4A9E8C3AL, 0x6673DAB4L, 0x4A9E8C3AL), // p_911->g_577
        (VECTOR(int32_t, 16))(0x32676D2DL, (VECTOR(int32_t, 4))(0x32676D2DL, (VECTOR(int32_t, 2))(0x32676D2DL, 1L), 1L), 1L, 0x32676D2DL, 1L, (VECTOR(int32_t, 2))(0x32676D2DL, 1L), (VECTOR(int32_t, 2))(0x32676D2DL, 1L), 0x32676D2DL, 1L, 0x32676D2DL, 1L), // p_911->g_579
        (VECTOR(int32_t, 2))(0x4CF7FDEFL, 1L), // p_911->g_581
        (VECTOR(uint32_t, 4))(0xD9EB03D1L, (VECTOR(uint32_t, 2))(0xD9EB03D1L, 0xD4C9EF1DL), 0xD4C9EF1DL), // p_911->g_684
        (VECTOR(uint32_t, 2))(1UL, 0xF46AE2ECL), // p_911->g_685
        (VECTOR(uint32_t, 16))(0x1506253CL, (VECTOR(uint32_t, 4))(0x1506253CL, (VECTOR(uint32_t, 2))(0x1506253CL, 7UL), 7UL), 7UL, 0x1506253CL, 7UL, (VECTOR(uint32_t, 2))(0x1506253CL, 7UL), (VECTOR(uint32_t, 2))(0x1506253CL, 7UL), 0x1506253CL, 7UL, 0x1506253CL, 7UL), // p_911->g_690
        {{{&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232}},{{&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232}},{{&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232}},{{&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232,&p_911->g_232}}}, // p_911->g_692
        {{{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]}},{{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]},{&p_911->g_692[2][0][0],&p_911->g_692[2][0][2],&p_911->g_692[2][0][2],&p_911->g_692[2][0][0],&p_911->g_692[3][0][5],&p_911->g_692[1][0][5],&p_911->g_692[2][0][2],(void*)0,&p_911->g_692[3][0][5]}}}, // p_911->g_691
        (VECTOR(int8_t, 8))(0x2DL, (VECTOR(int8_t, 4))(0x2DL, (VECTOR(int8_t, 2))(0x2DL, (-1L)), (-1L)), (-1L), 0x2DL, (-1L)), // p_911->g_733
        (VECTOR(int8_t, 2))((-4L), (-3L)), // p_911->g_746
        1UL, // p_911->g_750
        0x669710716CA97084L, // p_911->g_771
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x150EDE96L), 0x150EDE96L), // p_911->g_782
        1L, // p_911->g_788
        (VECTOR(uint8_t, 4))(0x4BL, (VECTOR(uint8_t, 2))(0x4BL, 0xBFL), 0xBFL), // p_911->g_803
        (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 3UL), 3UL), // p_911->g_805
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x41L), 0x41L), 0x41L, 0UL, 0x41L), // p_911->g_806
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x88L), 0x88L), 0x88L, 7UL, 0x88L, (VECTOR(uint8_t, 2))(7UL, 0x88L), (VECTOR(uint8_t, 2))(7UL, 0x88L), 7UL, 0x88L, 7UL, 0x88L), // p_911->g_807
        (VECTOR(uint8_t, 8))(0x86L, (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 0UL), 0UL), 0UL, 0x86L, 0UL), // p_911->g_811
        (VECTOR(uint32_t, 4))(0x644372E3L, (VECTOR(uint32_t, 2))(0x644372E3L, 4294967288UL), 4294967288UL), // p_911->g_826
        (-7L), // p_911->g_849
        &p_911->g_750, // p_911->g_855
        &p_911->g_110, // p_911->g_861
        (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65535UL), 65535UL), 65535UL, 65526UL, 65535UL, (VECTOR(uint16_t, 2))(65526UL, 65535UL), (VECTOR(uint16_t, 2))(65526UL, 65535UL), 65526UL, 65535UL, 65526UL, 65535UL), // p_911->g_877
        {{{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0},{&p_911->g_391[1][1].f3,(void*)0}}}, // p_911->g_886
        &p_911->g_886[0][2][1], // p_911->g_885
        {2UL,0x20L,0x5F980C227EF6B329L,4294967292UL,1L,0x9F422C12L,4294967293UL}, // p_911->g_909
        {4294967290UL,0x64L,0x1ADA55FFFA950982L,4294967295UL,0x46FDL,2UL,1UL}, // p_911->g_910
        0, // p_911->v_collective
        sequence_input[get_global_id(0)], // p_911->global_0_offset
        sequence_input[get_global_id(1)], // p_911->global_1_offset
        sequence_input[get_global_id(2)], // p_911->global_2_offset
        sequence_input[get_local_id(0)], // p_911->local_0_offset
        sequence_input[get_local_id(1)], // p_911->local_1_offset
        sequence_input[get_local_id(2)], // p_911->local_2_offset
        sequence_input[get_group_id(0)], // p_911->group_0_offset
        sequence_input[get_group_id(1)], // p_911->group_1_offset
        sequence_input[get_group_id(2)], // p_911->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[0][get_linear_local_id()])), // p_911->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_912 = c_913;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_911);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_911->g_2, "p_911->g_2", print_hash_value);
    transparent_crc(p_911->g_3, "p_911->g_3", print_hash_value);
    transparent_crc(p_911->g_4, "p_911->g_4", print_hash_value);
    transparent_crc(p_911->g_5, "p_911->g_5", print_hash_value);
    transparent_crc(p_911->g_6, "p_911->g_6", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_911->g_14[i], "p_911->g_14[i]", print_hash_value);

    }
    transparent_crc(p_911->g_38, "p_911->g_38", print_hash_value);
    transparent_crc(p_911->g_62.s0, "p_911->g_62.s0", print_hash_value);
    transparent_crc(p_911->g_62.s1, "p_911->g_62.s1", print_hash_value);
    transparent_crc(p_911->g_62.s2, "p_911->g_62.s2", print_hash_value);
    transparent_crc(p_911->g_62.s3, "p_911->g_62.s3", print_hash_value);
    transparent_crc(p_911->g_62.s4, "p_911->g_62.s4", print_hash_value);
    transparent_crc(p_911->g_62.s5, "p_911->g_62.s5", print_hash_value);
    transparent_crc(p_911->g_62.s6, "p_911->g_62.s6", print_hash_value);
    transparent_crc(p_911->g_62.s7, "p_911->g_62.s7", print_hash_value);
    transparent_crc(p_911->g_65, "p_911->g_65", print_hash_value);
    transparent_crc(p_911->g_71, "p_911->g_71", print_hash_value);
    transparent_crc(p_911->g_73, "p_911->g_73", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_911->g_78[i], "p_911->g_78[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_911->g_81[i], "p_911->g_81[i]", print_hash_value);

    }
    transparent_crc(p_911->g_86, "p_911->g_86", print_hash_value);
    transparent_crc(p_911->g_87, "p_911->g_87", print_hash_value);
    transparent_crc(p_911->g_88, "p_911->g_88", print_hash_value);
    transparent_crc(p_911->g_94, "p_911->g_94", print_hash_value);
    transparent_crc(p_911->g_122, "p_911->g_122", print_hash_value);
    transparent_crc(p_911->g_142, "p_911->g_142", print_hash_value);
    transparent_crc(p_911->g_164, "p_911->g_164", print_hash_value);
    transparent_crc(p_911->g_194.f0, "p_911->g_194.f0", print_hash_value);
    transparent_crc(p_911->g_221.x, "p_911->g_221.x", print_hash_value);
    transparent_crc(p_911->g_221.y, "p_911->g_221.y", print_hash_value);
    transparent_crc(p_911->g_227.x, "p_911->g_227.x", print_hash_value);
    transparent_crc(p_911->g_227.y, "p_911->g_227.y", print_hash_value);
    transparent_crc(p_911->g_239.s0, "p_911->g_239.s0", print_hash_value);
    transparent_crc(p_911->g_239.s1, "p_911->g_239.s1", print_hash_value);
    transparent_crc(p_911->g_239.s2, "p_911->g_239.s2", print_hash_value);
    transparent_crc(p_911->g_239.s3, "p_911->g_239.s3", print_hash_value);
    transparent_crc(p_911->g_239.s4, "p_911->g_239.s4", print_hash_value);
    transparent_crc(p_911->g_239.s5, "p_911->g_239.s5", print_hash_value);
    transparent_crc(p_911->g_239.s6, "p_911->g_239.s6", print_hash_value);
    transparent_crc(p_911->g_239.s7, "p_911->g_239.s7", print_hash_value);
    transparent_crc(p_911->g_244, "p_911->g_244", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_911->g_267[i][j], "p_911->g_267[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_911->g_287, "p_911->g_287", print_hash_value);
    transparent_crc(p_911->g_315, "p_911->g_315", print_hash_value);
    transparent_crc(p_911->g_323.x, "p_911->g_323.x", print_hash_value);
    transparent_crc(p_911->g_323.y, "p_911->g_323.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_911->g_391[i][j].f0, "p_911->g_391[i][j].f0", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f1, "p_911->g_391[i][j].f1", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f2, "p_911->g_391[i][j].f2", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f3, "p_911->g_391[i][j].f3", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f4, "p_911->g_391[i][j].f4", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f5, "p_911->g_391[i][j].f5", print_hash_value);
            transparent_crc(p_911->g_391[i][j].f6, "p_911->g_391[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_911->g_397.s0, "p_911->g_397.s0", print_hash_value);
    transparent_crc(p_911->g_397.s1, "p_911->g_397.s1", print_hash_value);
    transparent_crc(p_911->g_397.s2, "p_911->g_397.s2", print_hash_value);
    transparent_crc(p_911->g_397.s3, "p_911->g_397.s3", print_hash_value);
    transparent_crc(p_911->g_397.s4, "p_911->g_397.s4", print_hash_value);
    transparent_crc(p_911->g_397.s5, "p_911->g_397.s5", print_hash_value);
    transparent_crc(p_911->g_397.s6, "p_911->g_397.s6", print_hash_value);
    transparent_crc(p_911->g_397.s7, "p_911->g_397.s7", print_hash_value);
    transparent_crc(p_911->g_417.x, "p_911->g_417.x", print_hash_value);
    transparent_crc(p_911->g_417.y, "p_911->g_417.y", print_hash_value);
    transparent_crc(p_911->g_417.z, "p_911->g_417.z", print_hash_value);
    transparent_crc(p_911->g_417.w, "p_911->g_417.w", print_hash_value);
    transparent_crc(p_911->g_419.x, "p_911->g_419.x", print_hash_value);
    transparent_crc(p_911->g_419.y, "p_911->g_419.y", print_hash_value);
    transparent_crc(p_911->g_454.x, "p_911->g_454.x", print_hash_value);
    transparent_crc(p_911->g_454.y, "p_911->g_454.y", print_hash_value);
    transparent_crc(p_911->g_454.z, "p_911->g_454.z", print_hash_value);
    transparent_crc(p_911->g_454.w, "p_911->g_454.w", print_hash_value);
    transparent_crc(p_911->g_482.s0, "p_911->g_482.s0", print_hash_value);
    transparent_crc(p_911->g_482.s1, "p_911->g_482.s1", print_hash_value);
    transparent_crc(p_911->g_482.s2, "p_911->g_482.s2", print_hash_value);
    transparent_crc(p_911->g_482.s3, "p_911->g_482.s3", print_hash_value);
    transparent_crc(p_911->g_482.s4, "p_911->g_482.s4", print_hash_value);
    transparent_crc(p_911->g_482.s5, "p_911->g_482.s5", print_hash_value);
    transparent_crc(p_911->g_482.s6, "p_911->g_482.s6", print_hash_value);
    transparent_crc(p_911->g_482.s7, "p_911->g_482.s7", print_hash_value);
    transparent_crc(p_911->g_482.s8, "p_911->g_482.s8", print_hash_value);
    transparent_crc(p_911->g_482.s9, "p_911->g_482.s9", print_hash_value);
    transparent_crc(p_911->g_482.sa, "p_911->g_482.sa", print_hash_value);
    transparent_crc(p_911->g_482.sb, "p_911->g_482.sb", print_hash_value);
    transparent_crc(p_911->g_482.sc, "p_911->g_482.sc", print_hash_value);
    transparent_crc(p_911->g_482.sd, "p_911->g_482.sd", print_hash_value);
    transparent_crc(p_911->g_482.se, "p_911->g_482.se", print_hash_value);
    transparent_crc(p_911->g_482.sf, "p_911->g_482.sf", print_hash_value);
    transparent_crc(p_911->g_499.s0, "p_911->g_499.s0", print_hash_value);
    transparent_crc(p_911->g_499.s1, "p_911->g_499.s1", print_hash_value);
    transparent_crc(p_911->g_499.s2, "p_911->g_499.s2", print_hash_value);
    transparent_crc(p_911->g_499.s3, "p_911->g_499.s3", print_hash_value);
    transparent_crc(p_911->g_499.s4, "p_911->g_499.s4", print_hash_value);
    transparent_crc(p_911->g_499.s5, "p_911->g_499.s5", print_hash_value);
    transparent_crc(p_911->g_499.s6, "p_911->g_499.s6", print_hash_value);
    transparent_crc(p_911->g_499.s7, "p_911->g_499.s7", print_hash_value);
    transparent_crc(p_911->g_499.s8, "p_911->g_499.s8", print_hash_value);
    transparent_crc(p_911->g_499.s9, "p_911->g_499.s9", print_hash_value);
    transparent_crc(p_911->g_499.sa, "p_911->g_499.sa", print_hash_value);
    transparent_crc(p_911->g_499.sb, "p_911->g_499.sb", print_hash_value);
    transparent_crc(p_911->g_499.sc, "p_911->g_499.sc", print_hash_value);
    transparent_crc(p_911->g_499.sd, "p_911->g_499.sd", print_hash_value);
    transparent_crc(p_911->g_499.se, "p_911->g_499.se", print_hash_value);
    transparent_crc(p_911->g_499.sf, "p_911->g_499.sf", print_hash_value);
    transparent_crc(p_911->g_511.x, "p_911->g_511.x", print_hash_value);
    transparent_crc(p_911->g_511.y, "p_911->g_511.y", print_hash_value);
    transparent_crc(p_911->g_521.x, "p_911->g_521.x", print_hash_value);
    transparent_crc(p_911->g_521.y, "p_911->g_521.y", print_hash_value);
    transparent_crc(p_911->g_521.z, "p_911->g_521.z", print_hash_value);
    transparent_crc(p_911->g_521.w, "p_911->g_521.w", print_hash_value);
    transparent_crc(p_911->g_522.x, "p_911->g_522.x", print_hash_value);
    transparent_crc(p_911->g_522.y, "p_911->g_522.y", print_hash_value);
    transparent_crc(p_911->g_522.z, "p_911->g_522.z", print_hash_value);
    transparent_crc(p_911->g_522.w, "p_911->g_522.w", print_hash_value);
    transparent_crc(p_911->g_577.s0, "p_911->g_577.s0", print_hash_value);
    transparent_crc(p_911->g_577.s1, "p_911->g_577.s1", print_hash_value);
    transparent_crc(p_911->g_577.s2, "p_911->g_577.s2", print_hash_value);
    transparent_crc(p_911->g_577.s3, "p_911->g_577.s3", print_hash_value);
    transparent_crc(p_911->g_577.s4, "p_911->g_577.s4", print_hash_value);
    transparent_crc(p_911->g_577.s5, "p_911->g_577.s5", print_hash_value);
    transparent_crc(p_911->g_577.s6, "p_911->g_577.s6", print_hash_value);
    transparent_crc(p_911->g_577.s7, "p_911->g_577.s7", print_hash_value);
    transparent_crc(p_911->g_577.s8, "p_911->g_577.s8", print_hash_value);
    transparent_crc(p_911->g_577.s9, "p_911->g_577.s9", print_hash_value);
    transparent_crc(p_911->g_577.sa, "p_911->g_577.sa", print_hash_value);
    transparent_crc(p_911->g_577.sb, "p_911->g_577.sb", print_hash_value);
    transparent_crc(p_911->g_577.sc, "p_911->g_577.sc", print_hash_value);
    transparent_crc(p_911->g_577.sd, "p_911->g_577.sd", print_hash_value);
    transparent_crc(p_911->g_577.se, "p_911->g_577.se", print_hash_value);
    transparent_crc(p_911->g_577.sf, "p_911->g_577.sf", print_hash_value);
    transparent_crc(p_911->g_579.s0, "p_911->g_579.s0", print_hash_value);
    transparent_crc(p_911->g_579.s1, "p_911->g_579.s1", print_hash_value);
    transparent_crc(p_911->g_579.s2, "p_911->g_579.s2", print_hash_value);
    transparent_crc(p_911->g_579.s3, "p_911->g_579.s3", print_hash_value);
    transparent_crc(p_911->g_579.s4, "p_911->g_579.s4", print_hash_value);
    transparent_crc(p_911->g_579.s5, "p_911->g_579.s5", print_hash_value);
    transparent_crc(p_911->g_579.s6, "p_911->g_579.s6", print_hash_value);
    transparent_crc(p_911->g_579.s7, "p_911->g_579.s7", print_hash_value);
    transparent_crc(p_911->g_579.s8, "p_911->g_579.s8", print_hash_value);
    transparent_crc(p_911->g_579.s9, "p_911->g_579.s9", print_hash_value);
    transparent_crc(p_911->g_579.sa, "p_911->g_579.sa", print_hash_value);
    transparent_crc(p_911->g_579.sb, "p_911->g_579.sb", print_hash_value);
    transparent_crc(p_911->g_579.sc, "p_911->g_579.sc", print_hash_value);
    transparent_crc(p_911->g_579.sd, "p_911->g_579.sd", print_hash_value);
    transparent_crc(p_911->g_579.se, "p_911->g_579.se", print_hash_value);
    transparent_crc(p_911->g_579.sf, "p_911->g_579.sf", print_hash_value);
    transparent_crc(p_911->g_581.x, "p_911->g_581.x", print_hash_value);
    transparent_crc(p_911->g_581.y, "p_911->g_581.y", print_hash_value);
    transparent_crc(p_911->g_684.x, "p_911->g_684.x", print_hash_value);
    transparent_crc(p_911->g_684.y, "p_911->g_684.y", print_hash_value);
    transparent_crc(p_911->g_684.z, "p_911->g_684.z", print_hash_value);
    transparent_crc(p_911->g_684.w, "p_911->g_684.w", print_hash_value);
    transparent_crc(p_911->g_685.x, "p_911->g_685.x", print_hash_value);
    transparent_crc(p_911->g_685.y, "p_911->g_685.y", print_hash_value);
    transparent_crc(p_911->g_690.s0, "p_911->g_690.s0", print_hash_value);
    transparent_crc(p_911->g_690.s1, "p_911->g_690.s1", print_hash_value);
    transparent_crc(p_911->g_690.s2, "p_911->g_690.s2", print_hash_value);
    transparent_crc(p_911->g_690.s3, "p_911->g_690.s3", print_hash_value);
    transparent_crc(p_911->g_690.s4, "p_911->g_690.s4", print_hash_value);
    transparent_crc(p_911->g_690.s5, "p_911->g_690.s5", print_hash_value);
    transparent_crc(p_911->g_690.s6, "p_911->g_690.s6", print_hash_value);
    transparent_crc(p_911->g_690.s7, "p_911->g_690.s7", print_hash_value);
    transparent_crc(p_911->g_690.s8, "p_911->g_690.s8", print_hash_value);
    transparent_crc(p_911->g_690.s9, "p_911->g_690.s9", print_hash_value);
    transparent_crc(p_911->g_690.sa, "p_911->g_690.sa", print_hash_value);
    transparent_crc(p_911->g_690.sb, "p_911->g_690.sb", print_hash_value);
    transparent_crc(p_911->g_690.sc, "p_911->g_690.sc", print_hash_value);
    transparent_crc(p_911->g_690.sd, "p_911->g_690.sd", print_hash_value);
    transparent_crc(p_911->g_690.se, "p_911->g_690.se", print_hash_value);
    transparent_crc(p_911->g_690.sf, "p_911->g_690.sf", print_hash_value);
    transparent_crc(p_911->g_733.s0, "p_911->g_733.s0", print_hash_value);
    transparent_crc(p_911->g_733.s1, "p_911->g_733.s1", print_hash_value);
    transparent_crc(p_911->g_733.s2, "p_911->g_733.s2", print_hash_value);
    transparent_crc(p_911->g_733.s3, "p_911->g_733.s3", print_hash_value);
    transparent_crc(p_911->g_733.s4, "p_911->g_733.s4", print_hash_value);
    transparent_crc(p_911->g_733.s5, "p_911->g_733.s5", print_hash_value);
    transparent_crc(p_911->g_733.s6, "p_911->g_733.s6", print_hash_value);
    transparent_crc(p_911->g_733.s7, "p_911->g_733.s7", print_hash_value);
    transparent_crc(p_911->g_746.x, "p_911->g_746.x", print_hash_value);
    transparent_crc(p_911->g_746.y, "p_911->g_746.y", print_hash_value);
    transparent_crc(p_911->g_750, "p_911->g_750", print_hash_value);
    transparent_crc(p_911->g_771, "p_911->g_771", print_hash_value);
    transparent_crc(p_911->g_782.x, "p_911->g_782.x", print_hash_value);
    transparent_crc(p_911->g_782.y, "p_911->g_782.y", print_hash_value);
    transparent_crc(p_911->g_782.z, "p_911->g_782.z", print_hash_value);
    transparent_crc(p_911->g_782.w, "p_911->g_782.w", print_hash_value);
    transparent_crc(p_911->g_788, "p_911->g_788", print_hash_value);
    transparent_crc(p_911->g_803.x, "p_911->g_803.x", print_hash_value);
    transparent_crc(p_911->g_803.y, "p_911->g_803.y", print_hash_value);
    transparent_crc(p_911->g_803.z, "p_911->g_803.z", print_hash_value);
    transparent_crc(p_911->g_803.w, "p_911->g_803.w", print_hash_value);
    transparent_crc(p_911->g_805.x, "p_911->g_805.x", print_hash_value);
    transparent_crc(p_911->g_805.y, "p_911->g_805.y", print_hash_value);
    transparent_crc(p_911->g_805.z, "p_911->g_805.z", print_hash_value);
    transparent_crc(p_911->g_805.w, "p_911->g_805.w", print_hash_value);
    transparent_crc(p_911->g_806.s0, "p_911->g_806.s0", print_hash_value);
    transparent_crc(p_911->g_806.s1, "p_911->g_806.s1", print_hash_value);
    transparent_crc(p_911->g_806.s2, "p_911->g_806.s2", print_hash_value);
    transparent_crc(p_911->g_806.s3, "p_911->g_806.s3", print_hash_value);
    transparent_crc(p_911->g_806.s4, "p_911->g_806.s4", print_hash_value);
    transparent_crc(p_911->g_806.s5, "p_911->g_806.s5", print_hash_value);
    transparent_crc(p_911->g_806.s6, "p_911->g_806.s6", print_hash_value);
    transparent_crc(p_911->g_806.s7, "p_911->g_806.s7", print_hash_value);
    transparent_crc(p_911->g_807.s0, "p_911->g_807.s0", print_hash_value);
    transparent_crc(p_911->g_807.s1, "p_911->g_807.s1", print_hash_value);
    transparent_crc(p_911->g_807.s2, "p_911->g_807.s2", print_hash_value);
    transparent_crc(p_911->g_807.s3, "p_911->g_807.s3", print_hash_value);
    transparent_crc(p_911->g_807.s4, "p_911->g_807.s4", print_hash_value);
    transparent_crc(p_911->g_807.s5, "p_911->g_807.s5", print_hash_value);
    transparent_crc(p_911->g_807.s6, "p_911->g_807.s6", print_hash_value);
    transparent_crc(p_911->g_807.s7, "p_911->g_807.s7", print_hash_value);
    transparent_crc(p_911->g_807.s8, "p_911->g_807.s8", print_hash_value);
    transparent_crc(p_911->g_807.s9, "p_911->g_807.s9", print_hash_value);
    transparent_crc(p_911->g_807.sa, "p_911->g_807.sa", print_hash_value);
    transparent_crc(p_911->g_807.sb, "p_911->g_807.sb", print_hash_value);
    transparent_crc(p_911->g_807.sc, "p_911->g_807.sc", print_hash_value);
    transparent_crc(p_911->g_807.sd, "p_911->g_807.sd", print_hash_value);
    transparent_crc(p_911->g_807.se, "p_911->g_807.se", print_hash_value);
    transparent_crc(p_911->g_807.sf, "p_911->g_807.sf", print_hash_value);
    transparent_crc(p_911->g_811.s0, "p_911->g_811.s0", print_hash_value);
    transparent_crc(p_911->g_811.s1, "p_911->g_811.s1", print_hash_value);
    transparent_crc(p_911->g_811.s2, "p_911->g_811.s2", print_hash_value);
    transparent_crc(p_911->g_811.s3, "p_911->g_811.s3", print_hash_value);
    transparent_crc(p_911->g_811.s4, "p_911->g_811.s4", print_hash_value);
    transparent_crc(p_911->g_811.s5, "p_911->g_811.s5", print_hash_value);
    transparent_crc(p_911->g_811.s6, "p_911->g_811.s6", print_hash_value);
    transparent_crc(p_911->g_811.s7, "p_911->g_811.s7", print_hash_value);
    transparent_crc(p_911->g_826.x, "p_911->g_826.x", print_hash_value);
    transparent_crc(p_911->g_826.y, "p_911->g_826.y", print_hash_value);
    transparent_crc(p_911->g_826.z, "p_911->g_826.z", print_hash_value);
    transparent_crc(p_911->g_826.w, "p_911->g_826.w", print_hash_value);
    transparent_crc(p_911->g_849, "p_911->g_849", print_hash_value);
    transparent_crc(p_911->g_877.s0, "p_911->g_877.s0", print_hash_value);
    transparent_crc(p_911->g_877.s1, "p_911->g_877.s1", print_hash_value);
    transparent_crc(p_911->g_877.s2, "p_911->g_877.s2", print_hash_value);
    transparent_crc(p_911->g_877.s3, "p_911->g_877.s3", print_hash_value);
    transparent_crc(p_911->g_877.s4, "p_911->g_877.s4", print_hash_value);
    transparent_crc(p_911->g_877.s5, "p_911->g_877.s5", print_hash_value);
    transparent_crc(p_911->g_877.s6, "p_911->g_877.s6", print_hash_value);
    transparent_crc(p_911->g_877.s7, "p_911->g_877.s7", print_hash_value);
    transparent_crc(p_911->g_877.s8, "p_911->g_877.s8", print_hash_value);
    transparent_crc(p_911->g_877.s9, "p_911->g_877.s9", print_hash_value);
    transparent_crc(p_911->g_877.sa, "p_911->g_877.sa", print_hash_value);
    transparent_crc(p_911->g_877.sb, "p_911->g_877.sb", print_hash_value);
    transparent_crc(p_911->g_877.sc, "p_911->g_877.sc", print_hash_value);
    transparent_crc(p_911->g_877.sd, "p_911->g_877.sd", print_hash_value);
    transparent_crc(p_911->g_877.se, "p_911->g_877.se", print_hash_value);
    transparent_crc(p_911->g_877.sf, "p_911->g_877.sf", print_hash_value);
    transparent_crc(p_911->g_909.f0, "p_911->g_909.f0", print_hash_value);
    transparent_crc(p_911->g_909.f1, "p_911->g_909.f1", print_hash_value);
    transparent_crc(p_911->g_909.f2, "p_911->g_909.f2", print_hash_value);
    transparent_crc(p_911->g_909.f3, "p_911->g_909.f3", print_hash_value);
    transparent_crc(p_911->g_909.f4, "p_911->g_909.f4", print_hash_value);
    transparent_crc(p_911->g_909.f5, "p_911->g_909.f5", print_hash_value);
    transparent_crc(p_911->g_909.f6, "p_911->g_909.f6", print_hash_value);
    transparent_crc(p_911->g_910.f0, "p_911->g_910.f0", print_hash_value);
    transparent_crc(p_911->g_910.f1, "p_911->g_910.f1", print_hash_value);
    transparent_crc(p_911->g_910.f2, "p_911->g_910.f2", print_hash_value);
    transparent_crc(p_911->g_910.f3, "p_911->g_910.f3", print_hash_value);
    transparent_crc(p_911->g_910.f4, "p_911->g_910.f4", print_hash_value);
    transparent_crc(p_911->g_910.f5, "p_911->g_910.f5", print_hash_value);
    transparent_crc(p_911->g_910.f6, "p_911->g_910.f6", print_hash_value);
    transparent_crc(p_911->v_collective, "p_911->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 25; i++)
            transparent_crc(p_911->g_special_values[i + 25 * get_linear_group_id()], "p_911->g_special_values[i + 25 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 25; i++)
            transparent_crc(p_911->l_special_values[i], "p_911->l_special_values[i]", print_hash_value);
    transparent_crc(p_911->l_comm_values[get_linear_local_id()], "p_911->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_911->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()], "p_911->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
