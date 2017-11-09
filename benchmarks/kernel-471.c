// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,71,1 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{1,3,6,5,4,0,2}, // permutation 0
{4,6,3,2,5,1,0}, // permutation 1
{6,5,4,2,0,3,1}, // permutation 2
{1,3,6,2,5,0,4}, // permutation 3
{3,4,5,6,0,1,2}, // permutation 4
{6,4,5,2,0,1,3}, // permutation 5
{5,0,6,2,4,1,3}, // permutation 6
{2,3,1,6,5,0,4}, // permutation 7
{1,3,6,0,2,4,5}, // permutation 8
{1,2,0,4,6,3,5} // permutation 9
};

// Seed: 3145196660

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    uint16_t g_29;
    int64_t g_48;
    uint32_t g_50;
    uint8_t g_227[6][6];
    int32_t **g_247;
    int32_t g_255;
    int16_t g_257;
    int16_t g_259;
    uint32_t g_263[8];
    volatile uint16_t g_281;
    int32_t g_285;
    volatile VECTOR(int64_t, 16) g_289;
    VECTOR(uint8_t, 8) g_312;
    VECTOR(int32_t, 4) g_329;
    VECTOR(int32_t, 16) g_330;
    uint64_t g_344;
    int32_t g_347;
    uint64_t *g_371;
    uint64_t **g_370;
    uint64_t *** volatile g_369;
    VECTOR(int32_t, 4) g_374;
    int32_t *g_386;
    uint64_t g_394;
    int32_t g_400;
    int16_t *g_410[9][1][8];
    VECTOR(int16_t, 4) g_411;
    volatile uint16_t g_412;
    uint8_t g_416;
    int64_t ** volatile g_419;
    int64_t * volatile *g_420;
    volatile int32_t *g_436;
    volatile VECTOR(uint64_t, 8) g_444;
    volatile VECTOR(int16_t, 8) g_448;
    int8_t g_462;
    int32_t ** volatile g_470[9][10];
    uint16_t *g_475[2][6];
    uint16_t **g_474[6];
    int32_t ** volatile g_483;
    uint64_t *g_493;
    uint64_t ** volatile g_492;
    int32_t *g_500;
    volatile VECTOR(uint8_t, 2) g_508;
    uint64_t g_525[1];
    uint64_t g_531;
    volatile VECTOR(int16_t, 8) g_539;
    VECTOR(int16_t, 4) g_540;
    VECTOR(int16_t, 16) g_542;
    volatile VECTOR(int16_t, 4) g_543;
    VECTOR(int64_t, 4) g_548;
    volatile VECTOR(uint16_t, 8) g_641;
    volatile VECTOR(uint16_t, 8) g_642;
    int64_t g_664;
    VECTOR(int32_t, 8) g_692;
    uint8_t **g_730;
    volatile uint16_t ** volatile *g_754;
    volatile uint16_t ** volatile ** volatile g_753;
    VECTOR(uint32_t, 16) g_778;
    int32_t *g_784;
    VECTOR(int16_t, 16) g_812;
    uint32_t g_845;
    volatile VECTOR(uint8_t, 16) g_857;
    volatile VECTOR(uint8_t, 4) g_859;
    VECTOR(uint8_t, 16) g_860;
    volatile VECTOR(uint8_t, 2) g_862;
    int32_t *g_877;
    VECTOR(uint16_t, 16) g_889;
    VECTOR(uint32_t, 16) g_930;
    VECTOR(uint32_t, 8) g_952;
    VECTOR(uint16_t, 16) g_956;
    volatile VECTOR(int32_t, 8) g_961;
    uint64_t g_1015;
    volatile VECTOR(uint16_t, 4) g_1018;
    volatile VECTOR(int32_t, 8) g_1074;
    volatile VECTOR(uint32_t, 2) g_1109;
    uint16_t g_1116[4];
    volatile int64_t g_1127;
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
uint32_t  func_1(struct S0 * p_1131);
int64_t  func_10(int32_t * p_11, int32_t  p_12, int32_t * p_13, struct S0 * p_1131);
uint64_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, int32_t  p_18, int32_t  p_19, struct S0 * p_1131);
int32_t  func_23(uint32_t  p_24, uint32_t  p_25, struct S0 * p_1131);
uint8_t  func_38(int32_t * p_39, int64_t  p_40, int32_t * p_41, uint16_t  p_42, int32_t * p_43, struct S0 * p_1131);
int32_t * func_228(int32_t ** p_229, int8_t  p_230, uint32_t  p_231, struct S0 * p_1131);
int32_t ** func_232(uint16_t ** p_233, uint32_t * p_234, uint8_t  p_235, uint32_t  p_236, struct S0 * p_1131);
uint64_t  func_237(uint16_t ** p_238, struct S0 * p_1131);
uint16_t ** func_239(uint16_t * p_240, struct S0 * p_1131);
uint16_t * func_241(int64_t  p_242, uint16_t ** p_243, int32_t ** p_244, uint8_t  p_245, uint32_t  p_246, struct S0 * p_1131);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1131->g_3 p_1131->g_comm_values p_1131->g_2 p_1131->g_29 p_1131->l_comm_values p_1131->g_48 p_1131->g_227 p_1131->g_247 p_1131->g_255 p_1131->g_386 p_1131->g_347 p_1131->g_374 p_1131->g_436 p_1131->g_474 p_1131->g_394 p_1131->g_416 p_1131->g_483 p_1131->g_344 p_1131->g_50 p_1131->g_492 p_1131->g_500 p_1131->g_285 p_1131->g_539 p_1131->g_330 p_1131->g_448 p_1131->g_462 p_1131->g_493 p_1131->g_753 p_1131->g_642 p_1131->g_784 p_1131->g_778 p_1131->g_692 p_1131->g_329 p_1131->g_857 p_1131->g_257 p_1131->g_930 p_1131->g_312 p_1131->g_263 p_1131->g_259 p_1131->g_952 p_1131->g_956 p_1131->g_961 p_1131->g_548 p_1131->g_877 p_1131->g_475 p_1131->g_1109 p_1131->g_1116 p_1131->g_1127 p_1131->g_664 p_1131->g_641
 * writes: p_1131->g_3 p_1131->g_2 p_1131->g_29 p_1131->g_48 p_1131->g_50 p_1131->g_227 p_1131->g_255 p_1131->g_257 p_1131->g_259 p_1131->g_263 p_1131->g_394 p_1131->g_312 p_1131->g_347 p_1131->g_386 p_1131->g_462 p_1131->g_285 p_1131->g_531 p_1131->g_416 p_1131->g_730 p_1131->g_400 p_1131->g_330 p_1131->g_329 p_1131->g_500 p_1131->g_344 p_1131->g_778 p_1131->g_474 p_1131->g_664
 */
uint32_t  func_1(struct S0 * p_1131)
{ /* block id: 4 */
    int16_t l_22 = 0x414AL;
    uint16_t l_787 = 7UL;
    VECTOR(uint8_t, 16) l_800 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    int64_t l_803 = 0L;
    int8_t l_806 = 1L;
    uint8_t l_808 = 249UL;
    VECTOR(int8_t, 2) l_858 = (VECTOR(int8_t, 2))((-7L), (-2L));
    int8_t l_866 = 0x7DL;
    int32_t l_868 = (-8L);
    int16_t **l_892 = (void*)0;
    int32_t **l_922 = (void*)0;
    int32_t **l_923 = &p_1131->g_500;
    VECTOR(int64_t, 4) l_928 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x08BE924B614B034FL), 0x08BE924B614B034FL);
    VECTOR(uint32_t, 16) l_929 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 4294967295UL, 0UL, 4294967295UL, 0UL);
    uint32_t l_931 = 0x89D18DC5L;
    VECTOR(uint32_t, 8) l_932 = (VECTOR(uint32_t, 8))(0xCED481AAL, (VECTOR(uint32_t, 4))(0xCED481AAL, (VECTOR(uint32_t, 2))(0xCED481AAL, 0x450C93D9L), 0x450C93D9L), 0x450C93D9L, 0xCED481AAL, 0x450C93D9L);
    uint32_t *l_933 = &p_1131->g_263[1];
    int16_t *l_938 = (void*)0;
    int16_t *l_939 = &p_1131->g_259;
    uint16_t l_940 = 65535UL;
    VECTOR(int64_t, 16) l_943 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L), (VECTOR(int64_t, 2))((-1L), (-5L)), (VECTOR(int64_t, 2))((-1L), (-5L)), (-1L), (-5L), (-1L), (-5L));
    VECTOR(int64_t, 2) l_944 = (VECTOR(int64_t, 2))((-10L), 0x70CD8AC464B40B73L);
    VECTOR(int64_t, 8) l_945 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-2L)), (-2L)), (-2L), (-5L), (-2L));
    uint8_t l_953 = 0xF7L;
    uint64_t *l_966 = &p_1131->g_344;
    int32_t l_967 = 0x7598C4B4L;
    uint8_t l_968 = 0x04L;
    int16_t l_969 = 0x5637L;
    uint64_t l_970 = 18446744073709551615UL;
    uint64_t **l_984 = &p_1131->g_493;
    int64_t l_999 = 1L;
    int32_t l_1014[2][8];
    int16_t l_1030 = 4L;
    uint8_t l_1031 = 0UL;
    uint16_t l_1032 = 0x582EL;
    uint16_t l_1058 = 1UL;
    VECTOR(int16_t, 16) l_1067 = (VECTOR(int16_t, 16))(0x40D7L, (VECTOR(int16_t, 4))(0x40D7L, (VECTOR(int16_t, 2))(0x40D7L, 0x1800L), 0x1800L), 0x1800L, 0x40D7L, 0x1800L, (VECTOR(int16_t, 2))(0x40D7L, 0x1800L), (VECTOR(int16_t, 2))(0x40D7L, 0x1800L), 0x40D7L, 0x1800L, 0x40D7L, 0x1800L);
    uint32_t l_1092 = 0x7298EFC0L;
    uint8_t *l_1096[9] = {(void*)0,&l_1031,(void*)0,(void*)0,&l_1031,(void*)0,(void*)0,&l_1031,(void*)0};
    uint8_t **l_1095 = &l_1096[7];
    VECTOR(int8_t, 4) l_1104 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2DL), 0x2DL);
    VECTOR(uint32_t, 2) l_1110 = (VECTOR(uint32_t, 2))(0UL, 4294967292UL);
    int64_t l_1117 = 0L;
    VECTOR(int16_t, 4) l_1119 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x23ACL), 0x23ACL);
    VECTOR(int32_t, 2) l_1122 = (VECTOR(int32_t, 2))(1L, (-2L));
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_1014[i][j] = (-3L);
    }
    for (p_1131->g_3 = 0; (p_1131->g_3 > (-16)); p_1131->g_3 = safe_sub_func_uint64_t_u_u(p_1131->g_3, 2))
    { /* block id: 7 */
        uint8_t l_20 = 0x1EL;
        VECTOR(int8_t, 2) l_21 = (VECTOR(int8_t, 2))((-7L), 0x1BL);
        int32_t *l_743[3][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        VECTOR(uint8_t, 16) l_801 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 9UL), 9UL), 9UL, 0UL, 9UL, (VECTOR(uint8_t, 2))(0UL, 9UL), (VECTOR(uint8_t, 2))(0UL, 9UL), 0UL, 9UL, 0UL, 9UL);
        uint8_t *l_802 = &l_20;
        int8_t *l_807 = &l_806;
        VECTOR(uint16_t, 8) l_811 = (VECTOR(uint16_t, 8))(0xC54AL, (VECTOR(uint16_t, 4))(0xC54AL, (VECTOR(uint16_t, 2))(0xC54AL, 1UL), 1UL), 1UL, 0xC54AL, 1UL);
        uint16_t ***l_854 = &p_1131->g_474[0];
        VECTOR(uint8_t, 2) l_861 = (VECTOR(uint8_t, 2))(246UL, 0xE1L);
        uint64_t *l_879[8] = {&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0],&p_1131->g_525[0]};
        VECTOR(int32_t, 8) l_894 = (VECTOR(int32_t, 8))(0x397B4720L, (VECTOR(int32_t, 4))(0x397B4720L, (VECTOR(int32_t, 2))(0x397B4720L, 0x16797AE8L), 0x16797AE8L), 0x16797AE8L, 0x397B4720L, 0x16797AE8L);
        int i, j, k;
        (*p_1131->g_483) = ((((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(0xF307D7C1188E17B8L, func_10((p_1131->g_comm_values[p_1131->tid] , &p_1131->g_3), (func_14(&p_1131->g_3, (((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(9L, l_20, 0x5AL, ((VECTOR(int8_t, 4))(l_21.xxyy)), 0x71L)).s4146343527177403)).hi)).odd)).lo))).even , (void*)0), (l_22 , &p_1131->g_3), l_21.y, p_1131->g_3, p_1131) && (**p_1131->g_492)), l_743[0][2][1], p_1131))), l_22)) >= l_22) ^ 0L) , p_1131->g_784);
        p_1131->g_329.y &= (p_1131->g_778.sf ^ ((FAKE_DIVERGE(p_1131->local_2_offset, get_local_id(2), 10) , l_787) != (safe_mod_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((+(safe_sub_func_int8_t_s_s(0x4BL, ((*l_807) = (safe_mod_func_uint64_t_u_u(((((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(0xA4L, 248UL)).yxyxyyyxyyyyyxyy, ((VECTOR(uint8_t, 2))(l_800.s28)).yxxyyyxxxyxxxxyy, ((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((*l_802) |= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(l_801.sec7d8fe7d97b1b01))))).lo)).s1), (l_803 & (safe_mul_func_uint16_t_u_u((((VECTOR(uint64_t, 4))(1UL, (((void*)0 != (*p_1131->g_753)) & ((*p_1131->g_493) = (((l_787 < (((*p_1131->g_386) | (l_803 || l_806)) > p_1131->g_394)) , l_806) & l_806))), 0x4E11D4479DBC1625L, 0x325D0F9506D042C9L)).x & l_22), l_803))), 5UL, 255UL)).xxxwzwyx)), 255UL, ((VECTOR(uint8_t, 2))(255UL)), 246UL, 255UL, 0xF1L, 0x11L))))).sbbd0, ((VECTOR(uint8_t, 4))(0x43L)), ((VECTOR(uint8_t, 4))(252UL))))).ywyzwxwxwxwzxzyy)).s13, (uint8_t)p_1131->g_2))).odd)) >= 0x1DL) && 0UL) && 0x225F731D3C426650L), p_1131->g_692.s0)))))) || 0L), (-7L))), l_808))));
    }
    (*l_923) = (void*)0;
    l_868 &= (((((*l_939) &= ((safe_sub_func_int8_t_s_s(p_1131->g_857.s3, (safe_mul_func_uint8_t_u_u((((~p_1131->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))]) , ((VECTOR(int64_t, 8))(l_928.yyxyyxxw)).s6) > ((p_1131->g_257 , ((((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(l_929.se4ac)).wzyzxzxz, ((VECTOR(uint32_t, 2))(4294967287UL, 0x5FA8BA71L)).yyyxxxxy, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(p_1131->g_930.sfd18b90b000a6e26)).s34, ((VECTOR(uint32_t, 16))(p_1131->g_312.s1, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(0x1C7DFBEAL, 0x0D8C1DDCL)), ((VECTOR(uint32_t, 4))(l_931, 4294967295UL, 0x43E8E50BL, 4294967292UL)).even, ((VECTOR(uint32_t, 16))(l_932.s4663452023450163)).s37))), (((*l_933)++) || (safe_mod_func_int8_t_s_s(p_1131->g_778.sf, 1UL))), (p_1131->g_347 , 4294967295UL), ((VECTOR(uint32_t, 8))(0UL)), ((VECTOR(uint32_t, 2))(9UL)), 4294967293UL)).sa0))).xxxxxxxx))).s2122615533326405)).se3, ((VECTOR(uint32_t, 2))(4294967289UL))))).hi >= (*p_1131->g_784)) | (*p_1131->g_493))) > GROUP_DIVERGE(2, 1))), p_1131->g_255)))) <= 0L)) == l_858.y) || l_808) > l_940);
    if ((((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-1L))).yxyx)), ((VECTOR(int64_t, 16))(l_943.s2b6ec4bba5fdbf40)).s3565))).hi))).xxxy, ((VECTOR(int64_t, 2))(8L, (-9L))).yxxx))).xzzzzzyxzyyxyyxz, ((VECTOR(int64_t, 4))(l_944.yyyx)).wwxyxzwywzyzzywz, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_945.s3511)))).zwywzzxyxyzzwywy))).s6131)).zwywxwyy)).s2, (l_943.s4 , (safe_rshift_func_uint16_t_u_s((((VECTOR(int8_t, 16))((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_1131->g_952.s7031)).z, (*p_1131->g_784))), (l_953 || (p_1131->g_952.s4 || (safe_mod_func_int8_t_s_s((((((VECTOR(uint16_t, 16))(p_1131->g_956.sbf267a1eba270d13)).sc , ((safe_rshift_func_int8_t_s_s(l_953, ((VECTOR(int8_t, 4))((-1L), (((18446744073709551611UL | GROUP_DIVERGE(1, 1)) ^ ((safe_lshift_func_int16_t_s_u((((VECTOR(int32_t, 16))(p_1131->g_961.s3123330570767223)).s4 == ((safe_mul_func_int8_t_s_s((((l_868 , (safe_mod_func_uint64_t_u_u((*p_1131->g_493), (((((*p_1131->g_493) >= 0x4E5AC6DDDFF4727EL) , l_966) == (void*)0) ^ l_943.s9)))) >= l_967) == l_968), l_969)) ^ l_970)), 6)) && 254UL)) < l_929.s6), 0x61L, 0L)).x)) <= p_1131->g_263[0])) , 0x67L) || l_945.s3), 1UL)))))), ((VECTOR(int8_t, 2))(0x36L)), 1L, p_1131->g_227[2][5], (-2L), 0x1BL, ((VECTOR(int8_t, 4))(0x74L)), ((VECTOR(int8_t, 4))((-1L))), 0x68L)).s0 , FAKE_DIVERGE(p_1131->local_1_offset, get_local_id(1), 10)), l_928.y))))) < p_1131->g_257) & (*p_1131->g_493)))
    { /* block id: 431 */
        uint32_t l_977 = 4294967294UL;
        uint64_t **l_985 = &p_1131->g_493;
        uint32_t l_990 = 0x2841EC6FL;
        for (l_968 = 0; (l_968 < 45); ++l_968)
        { /* block id: 434 */
            int64_t *l_991 = (void*)0;
            int64_t *l_992[9] = {&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48,&p_1131->g_48};
            VECTOR(int32_t, 4) l_993 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7F737677L), 0x7F737677L);
            uint16_t *l_994 = (void*)0;
            uint16_t *l_995 = (void*)0;
            uint16_t *l_996[6] = {&l_940,(void*)0,&l_940,&l_940,(void*)0,&l_940};
            uint64_t l_997 = 18446744073709551615UL;
            int8_t *l_998 = &p_1131->g_462;
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1131->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*l_998) = ((((((safe_add_func_int32_t_s_s((**p_1131->g_483), (GROUP_DIVERGE(2, 1) || l_977))) , (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((*p_1131->g_877) = (safe_mul_func_uint8_t_u_u((l_984 == l_985), (0x25L && (l_858.y != (l_967 |= (safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (safe_mul_func_uint8_t_u_u(l_990, (((l_993.y |= (((&p_1131->g_753 == &p_1131->g_753) || 0x2FF910AE6B5D24EAL) , p_1131->g_548.x)) || l_993.z) != p_1131->g_344))))))))))), (**p_1131->g_483), ((VECTOR(int32_t, 2))(0x2CF4F524L)), l_977, l_977, 0L, 0x6CF6913BL, (*p_1131->g_386), 2L, 0L, ((VECTOR(int32_t, 4))(0x2B95ACFEL)), (-1L))).s8455)).y <= l_997) , l_977) <= l_997), l_997)), FAKE_DIVERGE(p_1131->local_1_offset, get_local_id(1), 10)))) == l_997) , FAKE_DIVERGE(p_1131->global_2_offset, get_global_id(2), 10)) >= l_990) & l_977)), l_990)), 10))][(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))]));
            (*p_1131->g_386) = l_999;
        }
    }
    else
    { /* block id: 444 */
        uint32_t l_1004 = 4294967287UL;
        int64_t l_1033 = 0x1959584F17B9B746L;
        int32_t l_1039 = 0x12BC9A0DL;
        int32_t l_1041[9] = {0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL,0x0F316D2CL};
        uint32_t l_1042[7][10] = {{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL},{0xF808469FL,4294967295UL,1UL,0UL,1UL,2UL,0xF808469FL,4294967295UL,4294967291UL,4294967291UL}};
        uint16_t ***l_1066 = &p_1131->g_474[1];
        uint16_t l_1080 = 0xB608L;
        uint8_t l_1115[1][1][2];
        int32_t *l_1118 = &l_1041[8];
        uint64_t *l_1128 = &p_1131->g_525[0];
        int64_t *l_1129[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t l_1130 = (-3L);
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1115[i][j][k] = 0x67L;
            }
        }
        for (p_1131->g_344 = 0; (p_1131->g_344 > 25); p_1131->g_344 = safe_add_func_uint16_t_u_u(p_1131->g_344, 5))
        { /* block id: 447 */
            uint16_t *l_1013[5][6] = {{(void*)0,(void*)0,&l_940,&p_1131->g_29,&p_1131->g_29,(void*)0},{(void*)0,(void*)0,&l_940,&p_1131->g_29,&p_1131->g_29,(void*)0},{(void*)0,(void*)0,&l_940,&p_1131->g_29,&p_1131->g_29,(void*)0},{(void*)0,(void*)0,&l_940,&p_1131->g_29,&p_1131->g_29,(void*)0},{(void*)0,(void*)0,&l_940,&p_1131->g_29,&p_1131->g_29,(void*)0}};
            uint8_t l_1021[8];
            int8_t *l_1026 = (void*)0;
            int8_t *l_1027[4];
            int32_t l_1028 = 0L;
            int64_t l_1029 = 0L;
            int32_t l_1040[3];
            int8_t l_1072 = 0x66L;
            int i, j;
            for (i = 0; i < 8; i++)
                l_1021[i] = 0x74L;
            for (i = 0; i < 4; i++)
                l_1027[i] = &l_806;
            for (i = 0; i < 3; i++)
                l_1040[i] = 0x42CF9C4CL;
            if ((safe_sub_func_uint16_t_u_u(((l_1004 <= (((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(0x2F78FCBAL, 0x36918584L)).yyxyyyyyyyyyxxxy, ((VECTOR(uint32_t, 16))((((((((safe_mod_func_int32_t_s_s(((p_1131->g_531 ^ ((*p_1131->g_386) = ((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u((--p_1131->g_1015), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(p_1131->g_1018.wxzz)).wwyxywzwxxzyxzyx, ((VECTOR(uint16_t, 8))((safe_div_func_int16_t_s_s((((((l_1021[1] , 18446744073709551607UL) || FAKE_DIVERGE(p_1131->local_1_offset, get_local_id(1), 10)) && (safe_lshift_func_int16_t_s_u((((~p_1131->g_29) , ((65533UL & (safe_sub_func_uint16_t_u_u((((l_1028 = (((((**l_984) = (l_1004 == ((l_1021[4] , l_1013[0][4]) != (void*)0))) , l_1021[1]) > 0x2205L) < l_1004)) , l_1028) >= l_1029), l_1030))) , p_1131->g_889.se)) , l_1004), l_1031))) , l_1004) ^ l_1004), l_1021[1])), ((VECTOR(uint16_t, 2))(65535UL)), l_1032, l_1021[4], 65535UL, 0xF9A0L, 8UL)).s0375130466653772))))).sd)) <= 0L) >= l_803), FAKE_DIVERGE(p_1131->local_0_offset, get_local_id(0), 10))) ^ 0xAEFBL))) & 0x7AL), 1L)) == 0x0F98L) & l_1033) > 1UL) & p_1131->g_400) , p_1131->g_263[1]) , l_1028), 0xDF0FA772L, 0xE276A79AL, p_1131->g_2, 0UL, 1UL, ((VECTOR(uint32_t, 8))(4294967295UL)), 0xDE2899BBL, 0UL))))).sd , 0x4B21E0D0L)) ^ l_1004), l_1033)))
            { /* block id: 452 */
                int32_t *l_1034 = (void*)0;
                int32_t *l_1035 = (void*)0;
                int32_t *l_1036 = (void*)0;
                int32_t *l_1037 = (void*)0;
                int32_t *l_1038[10] = {&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347,&p_1131->g_347};
                int i;
                l_1042[2][2]--;
            }
            else
            { /* block id: 454 */
                uint32_t l_1045 = 0xCADA21A3L;
                int32_t l_1053 = 0x4A308E35L;
                int32_t l_1056 = 0x702B7540L;
                int32_t l_1057 = 0L;
                uint16_t ***l_1065 = (void*)0;
                uint64_t l_1073 = 18446744073709551614UL;
                VECTOR(int32_t, 2) l_1075 = (VECTOR(int32_t, 2))(0x5483662BL, 0x4FA5855CL);
                int i;
                if ((l_1045 & (l_1045 != ((safe_lshift_func_int16_t_s_u(((void*)0 == (*p_1131->g_483)), 1)) <= l_1045))))
                { /* block id: 455 */
                    for (p_1131->g_3 = 0; (p_1131->g_3 >= 3); p_1131->g_3 = safe_add_func_uint64_t_u_u(p_1131->g_3, 9))
                    { /* block id: 458 */
                        uint32_t l_1050 = 0x3A28346DL;
                        l_1050++;
                    }
                    if ((**p_1131->g_483))
                        continue;
                }
                else
                { /* block id: 462 */
                    int32_t *l_1054 = &l_1014[1][2];
                    int32_t *l_1055[10][4] = {{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]},{&l_1014[0][6],&l_868,&l_868,&l_1014[0][6]}};
                    int i, j;
                    l_1058++;
                    return l_1045;
                }
                for (p_1131->g_285 = (-7); (p_1131->g_285 > 2); p_1131->g_285 = safe_add_func_int16_t_s_s(p_1131->g_285, 2))
                { /* block id: 468 */
                    VECTOR(int32_t, 2) l_1071 = (VECTOR(int32_t, 2))(0x1B3F36EEL, 0x0DD26497L);
                    int32_t l_1086 = (-7L);
                    int32_t l_1087[1][1][10] = {{{6L,6L,6L,6L,6L,6L,6L,6L,6L,6L}}};
                    int i, j, k;
                    (*p_1131->g_877) |= (safe_add_func_uint16_t_u_u((l_1065 == l_1066), ((VECTOR(int16_t, 2))(l_1067.sfe)).hi));
                    for (p_1131->g_347 = 13; (p_1131->g_347 > 26); p_1131->g_347++)
                    { /* block id: 472 */
                        uint32_t *l_1070[9][9][1] = {{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}},{{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004},{&l_1004}}};
                        int32_t l_1085 = 0x37D257B4L;
                        int i, j, k;
                        (*p_1131->g_436) &= ((p_1131->g_778.sf = (65530UL <= 65535UL)) , ((*p_1131->g_784) = ((l_1042[0][3] <= l_1071.x) & l_1072)));
                        l_1086 = (((VECTOR(int32_t, 8))(((*p_1131->g_877) = l_1073), ((VECTOR(int32_t, 2))(0x0FC7955CL, 0L)), ((VECTOR(int32_t, 2))(p_1131->g_1074.s74)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1075.xyxy)).hi)), 0x4E77BC7FL)).s2 < (safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s(l_1080, 246UL)) , (safe_div_func_int32_t_s_s((l_1071.y , (safe_add_func_uint64_t_u_u(((l_1041[0] || l_1072) <= l_1073), (1L || l_1071.y)))), l_1085))), 4)));
                    }
                    l_1087[0][0][2] |= (**p_1131->g_483);
                }
                (*l_923) = (((safe_mod_func_uint64_t_u_u(((*p_1131->g_493)++), (((***l_1066) = l_1092) & l_1040[1]))) , (safe_div_func_uint8_t_u_u(l_1042[4][5], (l_1021[6] && (-1L))))) , (((void*)0 == l_1095) , (*p_1131->g_483)));
            }
            l_1040[2] &= ((safe_unary_minus_func_int8_t_s(0L)) || (p_1131->g_416 |= (+((**p_1131->g_492) > (*p_1131->g_493)))));
        }
        (*p_1131->g_784) = (safe_add_func_uint16_t_u_u(0xF8F6L, l_1039));
        (*p_1131->g_436) = ((*l_1118) = ((*p_1131->g_386) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((VECTOR(int8_t, 16))(l_1104.zxzwyxywwzyxwyyx)).s2 ^ ((4294967294UL || (((l_1042[2][2] & l_1041[2]) > (safe_lshift_func_int16_t_s_u(l_1042[3][6], (safe_lshift_func_int8_t_s_u(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(p_1131->g_1109.xx)).xxyyyxxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_1110.yxxxyxxyxyxxyxyx)).s3839)).xxzzzywx))).s5701746177611024)).sb != (((safe_div_func_int16_t_s_s(l_1042[2][2], (safe_div_func_uint64_t_u_u((*p_1131->g_493), l_1115[0][0][0])))) , ((*p_1131->g_493) , (void*)0)) == (void*)0)) < l_1115[0][0][0]), p_1131->g_1116[0]))))) >= l_1039)) < p_1131->g_285)), l_1117)), (*p_1131->g_784)))));
        l_1039 ^= (((VECTOR(int16_t, 16))(l_1119.zywxywzzwzwwyyzx)).sb , (safe_mul_func_int16_t_s_s(((l_923 = func_232(((*l_1066) = func_239((**l_1066), p_1131)), &p_1131->g_50, (*l_1118), (((*p_1131->g_877) , (~(l_1130 = (p_1131->g_664 &= (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1122.yyyx)))).w == (!(safe_add_func_uint16_t_u_u(((((VECTOR(int8_t, 2))(0x3AL, 0x27L)).hi || (safe_add_func_uint64_t_u_u((*p_1131->g_493), (p_1131->g_1127 != ((((void*)0 == &l_1096[7]) , (void*)0) != l_1128))))) & p_1131->g_778.sb), (*l_1118))))) ^ (*p_1131->g_493)) || (*l_1118)))))) , p_1131->g_312.s5), p_1131)) == (void*)0), l_800.sd)));
    }
    return p_1131->g_641.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_400 p_1131->g_493 p_1131->g_394 p_1131->g_753 p_1131->l_comm_values p_1131->g_778 p_1131->g_642 p_1131->g_386 p_1131->g_255 p_1131->g_330
 * writes: p_1131->g_400 p_1131->g_394 p_1131->g_330
 */
int64_t  func_10(int32_t * p_11, int32_t  p_12, int32_t * p_13, struct S0 * p_1131)
{ /* block id: 341 */
    uint64_t *l_760 = &p_1131->g_525[0];
    VECTOR(uint32_t, 4) l_761 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 7UL), 7UL);
    VECTOR(uint8_t, 8) l_764 = (VECTOR(uint8_t, 8))(0x6EL, (VECTOR(uint8_t, 4))(0x6EL, (VECTOR(uint8_t, 2))(0x6EL, 3UL), 3UL), 3UL, 0x6EL, 3UL);
    VECTOR(uint16_t, 4) l_773 = (VECTOR(uint16_t, 4))(0x1FB3L, (VECTOR(uint16_t, 2))(0x1FB3L, 0x06BEL), 0x06BEL);
    VECTOR(int16_t, 4) l_774 = (VECTOR(int16_t, 4))(0x7D07L, (VECTOR(int16_t, 2))(0x7D07L, 0x64FAL), 0x64FAL);
    int16_t *l_775[7];
    int32_t l_776 = 1L;
    VECTOR(int32_t, 16) l_777 = (VECTOR(int32_t, 16))(0x4CD9682FL, (VECTOR(int32_t, 4))(0x4CD9682FL, (VECTOR(int32_t, 2))(0x4CD9682FL, 4L), 4L), 4L, 0x4CD9682FL, 4L, (VECTOR(int32_t, 2))(0x4CD9682FL, 4L), (VECTOR(int32_t, 2))(0x4CD9682FL, 4L), 0x4CD9682FL, 4L, 0x4CD9682FL, 4L);
    uint8_t l_781 = 0x50L;
    int32_t *l_782 = (void*)0;
    int32_t *l_783[1][3];
    int i, j;
    for (i = 0; i < 7; i++)
        l_775[i] = &p_1131->g_257;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_783[i][j] = (void*)0;
    }
    for (p_1131->g_400 = 0; (p_1131->g_400 <= 4); p_1131->g_400 = safe_add_func_int64_t_s_s(p_1131->g_400, 6))
    { /* block id: 344 */
        int32_t l_752 = 0L;
        uint16_t ****l_755 = (void*)0;
        uint16_t *****l_756 = &l_755;
        int32_t l_757 = (-8L);
        l_757 |= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((l_752 , (-8L)), ((((*p_1131->g_493) >= l_752) , p_1131->g_753) == ((*l_756) = l_755)))) ^ p_12), 2)), (((void*)0 != &p_1131->g_474[4]) || 0x25L)));
    }
    p_1131->g_330.s7 &= ((safe_rshift_func_uint16_t_u_u(((((((void*)0 != l_760) ^ (((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_761.xz)).xxyy)))).x , (safe_mul_func_uint8_t_u_u(0x5FL, ((VECTOR(uint8_t, 16))(l_764.s6611127770056236)).s6))) == (safe_lshift_func_uint16_t_u_s(p_12, p_12))) & ((p_1131->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))] >= ((safe_mod_func_int8_t_s_s(9L, (safe_add_func_uint64_t_u_u(((*p_1131->g_493) = (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_773.wz)).hi, (l_776 = ((VECTOR(int16_t, 8))(l_774.yzyzywxw)).s3)))), (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(l_777.s55)), ((VECTOR(uint32_t, 8))(p_1131->g_778.s16e735c0)).s42))).xyyyxxyx)).s03)), 0x1BE2FD0A80BFCA56L, 7L)).x , (safe_lshift_func_int16_t_s_s((-10L), l_777.s9))))))) > l_781)) , p_1131->g_642.s0)) && 6L) <= 0x2E997640L)) | (*p_1131->g_386)) <= p_12) < p_12), l_781)) == (-9L));
    return p_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_2 p_1131->g_29 p_1131->g_3 p_1131->l_comm_values p_1131->g_comm_values p_1131->g_48 p_1131->g_227 p_1131->g_247 p_1131->g_257 p_1131->g_255 p_1131->g_386 p_1131->g_347 p_1131->g_374 p_1131->g_436 p_1131->g_474 p_1131->g_394 p_1131->g_416 p_1131->g_483 p_1131->g_344 p_1131->g_50 p_1131->g_492 p_1131->g_462 p_1131->g_259 p_1131->g_500 p_1131->g_508 p_1131->g_263 p_1131->g_493 p_1131->g_285 p_1131->g_539 p_1131->g_540 p_1131->g_542 p_1131->g_543 p_1131->g_548 p_1131->g_330 p_1131->g_448
 * writes: p_1131->g_2 p_1131->g_29 p_1131->g_48 p_1131->g_50 p_1131->g_227 p_1131->g_255 p_1131->g_257 p_1131->g_259 p_1131->g_263 p_1131->g_394 p_1131->g_312 p_1131->g_347 p_1131->g_386 p_1131->g_462 p_1131->g_525 p_1131->g_285 p_1131->g_531 p_1131->g_416 p_1131->g_730
 */
uint64_t  func_14(int32_t * p_15, int32_t * p_16, int32_t * p_17, int32_t  p_18, int32_t  p_19, struct S0 * p_1131)
{ /* block id: 8 */
    uint16_t *l_28 = &p_1131->g_29;
    int32_t l_32 = 0x48D535DDL;
    int32_t *l_33[7][9] = {{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0},{&l_32,(void*)0,&p_1131->g_3,(void*)0,(void*)0,(void*)0,(void*)0,&p_1131->g_3,(void*)0}};
    int64_t *l_47 = &p_1131->g_48;
    uint32_t *l_49[8] = {&p_1131->g_50,&p_1131->g_50,&p_1131->g_50,&p_1131->g_50,&p_1131->g_50,&p_1131->g_50,&p_1131->g_50,&p_1131->g_50};
    uint8_t l_51 = 0x5FL;
    uint8_t *l_248 = &p_1131->g_227[2][5];
    VECTOR(int8_t, 4) l_251 = (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x0FL), 0x0FL);
    int64_t **l_252 = &l_47;
    int64_t *l_254 = &p_1131->g_48;
    int64_t **l_253 = &l_254;
    int16_t *l_256 = &p_1131->g_257;
    int16_t *l_258 = &p_1131->g_259;
    uint32_t *l_260 = (void*)0;
    uint32_t *l_261 = (void*)0;
    uint32_t *l_262 = &p_1131->g_263[1];
    uint64_t *l_476 = (void*)0;
    uint64_t *l_477 = &p_1131->g_394;
    int32_t **l_742 = &l_33[0][6];
    int i, j;
    p_1131->g_2 ^= (-8L);
    p_1131->g_227[2][5] &= func_23((p_1131->g_50 = (((*l_47) |= ((((((p_18 | p_19) <= (18446744073709551615UL >= (safe_div_func_uint64_t_u_u(18446744073709551615UL, ((l_32 |= (++(*l_28))) && p_19))))) , (l_33[3][7] == (((safe_sub_func_int64_t_s_s(p_1131->g_3, (safe_add_func_int16_t_s_s(((((func_38(&p_1131->g_3, p_1131->g_3, &l_32, p_1131->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))], &l_32, p_1131) && p_1131->g_29) , p_19) < FAKE_DIVERGE(p_1131->group_2_offset, get_group_id(2), 10)) , 7L), p_18)))) ^ p_1131->g_29) , (void*)0))) , (void*)0) != (void*)0) && p_1131->g_comm_values[p_1131->tid])) & p_19)), l_51, p_1131);
    (*l_742) = func_228(func_232((((((*l_477) = func_237(func_239(func_241(p_1131->g_2, &l_28, p_1131->g_247, ((*l_248) &= p_1131->g_29), ((*l_262) = (((*l_258) = ((*l_256) = (safe_add_func_int16_t_s_s((((VECTOR(int8_t, 16))(l_251.wxyyxzyywwwzxxww)).sb > (-1L)), ((p_18 , ((*l_253) = ((*l_252) = l_47))) != ((p_1131->g_255 = p_1131->g_3) , &p_1131->g_48)))))) != p_18)), p_1131), p_1131), p_1131)) & p_19) != p_19) , &p_1131->g_475[1][1]), &p_1131->g_50, p_1131->g_374.z, p_18, p_1131), p_1131->g_344, p_1131->g_50, p_1131);
    return (**p_1131->g_492);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_23(uint32_t  p_24, uint32_t  p_25, struct S0 * p_1131)
{ /* block id: 23 */
    if ((atomic_inc(&p_1131->l_atomic_input[48]) == 1))
    { /* block id: 25 */
        int32_t l_52 = 0x70E43DA7L;
        int8_t l_53[5][7] = {{0x57L,0x57L,0x61L,0x5FL,0x07L,(-7L),0x3FL},{0x57L,0x57L,0x61L,0x5FL,0x07L,(-7L),0x3FL},{0x57L,0x57L,0x61L,0x5FL,0x07L,(-7L),0x3FL},{0x57L,0x57L,0x61L,0x5FL,0x07L,(-7L),0x3FL},{0x57L,0x57L,0x61L,0x5FL,0x07L,(-7L),0x3FL}};
        uint32_t l_54 = 0x0CE5FA5BL;
        int i, j;
        l_52 = 0x014D1963L;
        l_52 |= 2L;
        if (((l_53[4][2] , (l_54 = 0x54ED1E22517922C1L)) , 0x1CE08656L))
        { /* block id: 29 */
            VECTOR(int32_t, 2) l_55 = (VECTOR(int32_t, 2))(0x6E091E6DL, 5L);
            uint32_t l_56 = 1UL;
            int i;
            l_56 ^= (l_52 &= ((VECTOR(int32_t, 16))(l_55.xyyxyxyxyyyxxyyx)).s2);
            for (l_55.x = 0; (l_55.x > 17); ++l_55.x)
            { /* block id: 34 */
                int32_t l_59 = (-1L);
                int16_t l_60 = 0x76DCL;
                int16_t l_61 = 0x635DL;
                l_52 = (l_59 , (l_60 , l_61));
            }
        }
        else
        { /* block id: 37 */
            int32_t l_62 = 0x6930A875L;
            int16_t l_139[4][5] = {{(-1L),0x62ECL,0x62ECL,(-1L),(-1L)},{(-1L),0x62ECL,0x62ECL,(-1L),(-1L)},{(-1L),0x62ECL,0x62ECL,(-1L),(-1L)},{(-1L),0x62ECL,0x62ECL,(-1L),(-1L)}};
            VECTOR(int32_t, 8) l_183 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x26D7AE1DL), 0x26D7AE1DL), 0x26D7AE1DL, 8L, 0x26D7AE1DL);
            int i, j;
            for (l_62 = 17; (l_62 < (-7)); l_62 = safe_sub_func_uint8_t_u_u(l_62, 8))
            { /* block id: 40 */
                int32_t l_66 = 7L;
                int32_t *l_65[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_65[i] = &l_66;
                l_65[1] = (void*)0;
                for (l_66 = 14; (l_66 > 23); l_66 = safe_add_func_int8_t_s_s(l_66, 6))
                { /* block id: 44 */
                    int32_t l_69 = 1L;
                    uint64_t l_70[3][4] = {{1UL,18446744073709551615UL,1UL,1UL},{1UL,18446744073709551615UL,1UL,1UL},{1UL,18446744073709551615UL,1UL,1UL}};
                    int32_t l_73 = 0x1828E342L;
                    uint32_t l_74 = 0x36105796L;
                    int32_t *l_77 = &l_73;
                    int i, j;
                    l_70[2][3]++;
                    l_74--;
                    l_65[1] = l_77;
                }
                if ((l_52 = 0x0E41E6F7L))
                { /* block id: 50 */
                    uint32_t l_78 = 1UL;
                    uint64_t l_79 = 0x42223AA5B3E5B605L;
                    l_78 ^= 0x1AF00AFCL;
                    ++l_79;
                    for (l_78 = 21; (l_78 == 51); ++l_78)
                    { /* block id: 55 */
                        int32_t l_84 = 0x384D8593L;
                        int64_t l_85 = 1L;
                        uint64_t l_86 = 0xDFDCAF09E5C5CB2EL;
                        uint8_t l_89[4][8];
                        uint32_t l_90 = 0UL;
                        VECTOR(uint32_t, 8) l_93 = (VECTOR(uint32_t, 8))(0xD0160B5CL, (VECTOR(uint32_t, 4))(0xD0160B5CL, (VECTOR(uint32_t, 2))(0xD0160B5CL, 1UL), 1UL), 1UL, 0xD0160B5CL, 1UL);
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_89[i][j] = 1UL;
                        }
                        l_86++;
                        l_89[3][3] = 4L;
                        ++l_90;
                        l_93.s0 = 3L;
                    }
                }
                else
                { /* block id: 61 */
                    int16_t l_94 = 0L;
                    uint64_t l_95[8][6][4] = {{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}},{{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L},{0x32F7F6FD02479DA4L,0xA13618026BCB33D2L,0x32F7F6FD02479DA4L,0x32F7F6FD02479DA4L}}};
                    uint16_t l_96 = 1UL;
                    uint32_t l_102 = 6UL;
                    int i, j, k;
                    l_95[7][0][3] = (l_94 ^= 0x46425F0FL);
                    l_96--;
                    for (l_94 = 19; (l_94 < 9); l_94 = safe_sub_func_int16_t_s_s(l_94, 2))
                    { /* block id: 67 */
                        uint32_t l_101[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_101[i] = 4294967291UL;
                        l_101[0] &= ((VECTOR(int32_t, 2))(0x29F52E16L, 1L)).even;
                    }
                    --l_102;
                }
                for (l_66 = (-7); (l_66 != 5); ++l_66)
                { /* block id: 74 */
                    VECTOR(int32_t, 2) l_107 = (VECTOR(int32_t, 2))(0x28BF394CL, 9L);
                    uint16_t l_126 = 0x73DCL;
                    int64_t l_127 = (-1L);
                    int64_t l_128 = 0x573F8B2FE2E92E3BL;
                    int i;
                    if (((VECTOR(int32_t, 2))(l_107.xx)).lo)
                    { /* block id: 75 */
                        uint16_t l_108 = 0UL;
                        int16_t l_109 = 0x280FL;
                        int64_t l_110[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int32_t l_111 = (-8L);
                        int32_t l_112 = 0x5994F87CL;
                        VECTOR(int32_t, 16) l_113 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x5F7132E5L), 0x5F7132E5L), 0x5F7132E5L, (-9L), 0x5F7132E5L, (VECTOR(int32_t, 2))((-9L), 0x5F7132E5L), (VECTOR(int32_t, 2))((-9L), 0x5F7132E5L), (-9L), 0x5F7132E5L, (-9L), 0x5F7132E5L);
                        VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(1L, 0x7C9B672CL);
                        VECTOR(int32_t, 4) l_115 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-9L)), (-9L));
                        uint8_t l_116 = 0x10L;
                        int i;
                        l_112 ^= (l_111 = (l_110[7] = (l_109 = (l_108 = (-6L)))));
                        l_116 = (l_114.y = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(1L, 3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_113.s439c88bf)).s0742336445043302, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_114.xxxx)).xxwyxzyyzzzyyyyx))))).odd)).lo)), (l_112 |= 3L), ((VECTOR(int32_t, 4))(l_115.xyzw)).y, 0x3EA79CFCL, (-7L), 0x21BE135CL, 0x47F7BB3FL, 0L, 0x08A057ECL, 0x5480CDD5L, 0L)).s17)).even);
                    }
                    else
                    { /* block id: 84 */
                        int64_t l_117 = 0x3D1C57EA6FF28560L;
                        uint32_t l_118 = 0UL;
                        uint32_t l_121 = 0x52B13B08L;
                        int32_t l_122 = 0x7C57D7CEL;
                        uint32_t l_123 = 4294967288UL;
                        int8_t l_124[9][10][1] = {{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}},{{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L},{0x02L}}};
                        uint64_t l_125[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_125[i] = 18446744073709551609UL;
                        l_118++;
                        l_122 |= l_121;
                        l_122 ^= l_123;
                        l_125[1] &= l_124[8][5][0];
                    }
                    l_65[0] = (void*)0;
                    l_127 &= (l_107.x = l_126);
                    if (l_128)
                    { /* block id: 93 */
                        int16_t l_129 = 0x585BL;
                        uint8_t l_130 = 0x3CL;
                        uint16_t l_131 = 0x7AFBL;
                        int64_t l_132 = (-1L);
                        VECTOR(int16_t, 8) l_133 = (VECTOR(int16_t, 8))(0x695AL, (VECTOR(int16_t, 4))(0x695AL, (VECTOR(int16_t, 2))(0x695AL, (-1L)), (-1L)), (-1L), 0x695AL, (-1L));
                        VECTOR(uint16_t, 16) l_134 = (VECTOR(uint16_t, 16))(0x7F93L, (VECTOR(uint16_t, 4))(0x7F93L, (VECTOR(uint16_t, 2))(0x7F93L, 1UL), 1UL), 1UL, 0x7F93L, 1UL, (VECTOR(uint16_t, 2))(0x7F93L, 1UL), (VECTOR(uint16_t, 2))(0x7F93L, 1UL), 0x7F93L, 1UL, 0x7F93L, 1UL);
                        int i;
                        l_130 ^= l_129;
                        l_131 |= 0x1FF1EAABL;
                        l_65[1] = (void*)0;
                        ++l_134.sb;
                    }
                    else
                    { /* block id: 98 */
                        int8_t l_137[5];
                        uint16_t l_138 = 0x7A1BL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_137[i] = 0x4EL;
                        l_138 = l_137[3];
                    }
                }
            }
            if (l_139[2][3])
            { /* block id: 103 */
                int64_t *l_141 = (void*)0;
                int64_t **l_140 = &l_141;
                int64_t **l_142[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                uint32_t l_143[6] = {1UL,0xB7537BB7L,1UL,1UL,0xB7537BB7L,1UL};
                uint16_t l_181 = 0UL;
                int i, j;
                l_142[4][0] = l_140;
                l_62 = 7L;
                if (l_143[0])
                { /* block id: 106 */
                    VECTOR(int16_t, 8) l_144 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L));
                    VECTOR(uint16_t, 16) l_145 = (VECTOR(uint16_t, 16))(0xE376L, (VECTOR(uint16_t, 4))(0xE376L, (VECTOR(uint16_t, 2))(0xE376L, 8UL), 8UL), 8UL, 0xE376L, 8UL, (VECTOR(uint16_t, 2))(0xE376L, 8UL), (VECTOR(uint16_t, 2))(0xE376L, 8UL), 0xE376L, 8UL, 0xE376L, 8UL);
                    VECTOR(int32_t, 8) l_146 = (VECTOR(int32_t, 8))(0x77E6E7EBL, (VECTOR(int32_t, 4))(0x77E6E7EBL, (VECTOR(int32_t, 2))(0x77E6E7EBL, 0x03EB460EL), 0x03EB460EL), 0x03EB460EL, 0x77E6E7EBL, 0x03EB460EL);
                    VECTOR(int32_t, 2) l_147 = (VECTOR(int32_t, 2))(0x03A88FD3L, 0x6E06BE9BL);
                    int16_t l_148 = (-1L);
                    int8_t l_149 = (-1L);
                    VECTOR(int32_t, 4) l_150 = (VECTOR(int32_t, 4))(0x4C72A9CDL, (VECTOR(int32_t, 2))(0x4C72A9CDL, 0x4AA6036CL), 0x4AA6036CL);
                    VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x34FACA1CL), 0x34FACA1CL);
                    int16_t l_152 = 0x53A8L;
                    int32_t *l_154[3];
                    int32_t **l_153 = &l_154[2];
                    int32_t **l_155 = &l_154[2];
                    int32_t l_156 = 0x72A897AEL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_154[i] = (void*)0;
                    l_62 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_144.s24551145)).hi, ((VECTOR(uint16_t, 2))(l_145.sfa)).xyxy))), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(l_146.s31610233)).s1040441304411656, ((VECTOR(int32_t, 16))(l_147.yxxxyxxxyyyxyxyx))))).s44ab, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-2L), 0x3CBDF4B4L)).yxxx)), l_148, 7L, (-7L), 8L, ((l_149 , 0x91L) , 1L), 1L, ((VECTOR(int32_t, 4))(l_150.wwxz)), (-7L), (-1L))).sf9c2, ((VECTOR(int32_t, 2))(l_151.yz)).yxxy)))))).y;
                    l_62 |= l_152;
                    l_155 = l_153;
                    l_52 &= l_156;
                }
                else
                { /* block id: 111 */
                    int32_t l_157 = (-1L);
                    for (l_157 = 24; (l_157 <= 11); l_157--)
                    { /* block id: 114 */
                        VECTOR(int32_t, 4) l_160 = (VECTOR(int32_t, 4))(0x3BEC0199L, (VECTOR(int32_t, 2))(0x3BEC0199L, 0x03195652L), 0x03195652L);
                        uint32_t l_161 = 1UL;
                        VECTOR(int32_t, 16) l_162 = (VECTOR(int32_t, 16))(0x6573A9DBL, (VECTOR(int32_t, 4))(0x6573A9DBL, (VECTOR(int32_t, 2))(0x6573A9DBL, 1L), 1L), 1L, 0x6573A9DBL, 1L, (VECTOR(int32_t, 2))(0x6573A9DBL, 1L), (VECTOR(int32_t, 2))(0x6573A9DBL, 1L), 0x6573A9DBL, 1L, 0x6573A9DBL, 1L);
                        int64_t l_163 = 8L;
                        int32_t l_164 = 7L;
                        VECTOR(int32_t, 8) l_165 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x3A29AB7EL), 0x3A29AB7EL), 0x3A29AB7EL, 9L, 0x3A29AB7EL);
                        VECTOR(int32_t, 4) l_166 = (VECTOR(int32_t, 4))(0x654040A6L, (VECTOR(int32_t, 2))(0x654040A6L, 0x689911EFL), 0x689911EFL);
                        VECTOR(int16_t, 4) l_167 = (VECTOR(int16_t, 4))(0x17BBL, (VECTOR(int16_t, 2))(0x17BBL, 2L), 2L);
                        uint32_t l_168 = 4294967291UL;
                        VECTOR(uint16_t, 8) l_171 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL);
                        uint64_t l_172 = 0x1F8A238C1CB93B74L;
                        VECTOR(int32_t, 8) l_173 = (VECTOR(int32_t, 8))(0x59904FF0L, (VECTOR(int32_t, 4))(0x59904FF0L, (VECTOR(int32_t, 2))(0x59904FF0L, 0x2DA4C94FL), 0x2DA4C94FL), 0x2DA4C94FL, 0x59904FF0L, 0x2DA4C94FL);
                        int8_t l_174 = 2L;
                        uint16_t *l_176 = (void*)0;
                        uint16_t **l_175[1][2][10] = {{{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176,&l_176}}};
                        uint16_t **l_177 = &l_176;
                        int64_t **l_178 = (void*)0;
                        int64_t *l_180 = &l_163;
                        int64_t **l_179 = &l_180;
                        int i, j, k;
                        l_174 ^= ((l_172 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_160.xwzyyxxzxxwxywyw)).s4a)), 0x188522CEL, l_161, (-1L), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_162.sd488)).lo)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, 4L)).yyyx)).wyzwxwxy)).lo)))), (-1L), 0x299ED92AL)).lo, (int32_t)l_163, (int32_t)l_164))).zzzxxywx, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_165.s0473603660254303)).sebdb, (int32_t)0x022FEA0EL))).yxxywxxz, ((VECTOR(int32_t, 2))(l_166.yx)).yyyyyxyx, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_167.zy)), (int16_t)((--l_168) , 1L)))), (-9L), 0x31A2L)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_171.s77)), 0x3564L, 0UL)).even))).xyxx, ((VECTOR(int32_t, 2))(0x6341315DL, 0x0DB23535L)).xyyx))).yzxzzzxy)))))), ((VECTOR(int32_t, 2))(0x391A3FCEL, 0L)).lo, (-9L), (-4L))).s9ce5)).y) , ((VECTOR(int32_t, 8))(l_173.s03576102)).s1);
                        l_177 = l_175[0][1][5];
                        l_179 = (l_178 = (void*)0);
                    }
                }
                l_181 ^= (l_62 = 2L);
            }
            else
            { /* block id: 125 */
                uint32_t l_182 = 0xBD07CE89L;
                l_52 = l_182;
            }
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_183.s0433)).zwyxxxwy)).s2214016302552615)).hi)).s4)
            { /* block id: 128 */
                l_183.s2 ^= 1L;
                l_183.s4 = 4L;
            }
            else
            { /* block id: 131 */
                int32_t l_184[6][7][6] = {{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}},{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}},{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}},{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}},{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}},{{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L},{(-4L),0x040841C1L,9L,0x199CFFFDL,1L,0x694D96B2L}}};
                VECTOR(uint64_t, 2) l_185 = (VECTOR(uint64_t, 2))(0x828B4F057894F720L, 0xD958CC197FE0C69EL);
                int64_t l_186 = 0x0A971ECD17501661L;
                VECTOR(uint64_t, 16) l_187 = (VECTOR(uint64_t, 16))(0x17608B0E2667C334L, (VECTOR(uint64_t, 4))(0x17608B0E2667C334L, (VECTOR(uint64_t, 2))(0x17608B0E2667C334L, 1UL), 1UL), 1UL, 0x17608B0E2667C334L, 1UL, (VECTOR(uint64_t, 2))(0x17608B0E2667C334L, 1UL), (VECTOR(uint64_t, 2))(0x17608B0E2667C334L, 1UL), 0x17608B0E2667C334L, 1UL, 0x17608B0E2667C334L, 1UL);
                int8_t l_188 = 0x1DL;
                int i, j, k;
                l_183.s4 = l_184[3][0][3];
                if ((((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_185.yx)), 0xDB3C9B642A048263L, 0xABD6A1C156C5B6A2L)).xywxxywwzwwywwzw)).lo, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(l_186, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(l_187.sf8f1950191f7d206)).sa6, (uint64_t)FAKE_DIVERGE(p_1131->local_2_offset, get_local_id(2), 10)))), 0x1B8BF9470F0F86B6L)).xyxwwwzx))).s3532574233777307)).odd))).s5 , l_188))
                { /* block id: 133 */
                    int32_t *l_189 = (void*)0;
                    int32_t l_191 = 0x32FE9E5AL;
                    int32_t *l_190[6][10][4] = {{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}},{{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191},{&l_191,&l_191,&l_191,&l_191}}};
                    int i, j, k;
                    l_190[1][9][3] = l_189;
                }
                else
                { /* block id: 135 */
                    uint16_t **l_192[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    VECTOR(int32_t, 16) l_193 = (VECTOR(int32_t, 16))(0x1184B929L, (VECTOR(int32_t, 4))(0x1184B929L, (VECTOR(int32_t, 2))(0x1184B929L, 0x7ABC4D60L), 0x7ABC4D60L), 0x7ABC4D60L, 0x1184B929L, 0x7ABC4D60L, (VECTOR(int32_t, 2))(0x1184B929L, 0x7ABC4D60L), (VECTOR(int32_t, 2))(0x1184B929L, 0x7ABC4D60L), 0x1184B929L, 0x7ABC4D60L, 0x1184B929L, 0x7ABC4D60L);
                    VECTOR(int32_t, 8) l_194 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3468D6D8L), 0x3468D6D8L), 0x3468D6D8L, 0L, 0x3468D6D8L);
                    VECTOR(int32_t, 2) l_195 = (VECTOR(int32_t, 2))(9L, (-1L));
                    int64_t l_196[9] = {1L,0L,1L,1L,0L,1L,1L,0L,1L};
                    int32_t l_197 = (-1L);
                    int64_t l_198 = 0x1EEF0EF6DE1D1B8BL;
                    uint32_t l_199 = 0x1A6616ECL;
                    uint32_t l_200 = 0x9420FC96L;
                    VECTOR(int32_t, 16) l_201 = (VECTOR(int32_t, 16))(0x614CB54FL, (VECTOR(int32_t, 4))(0x614CB54FL, (VECTOR(int32_t, 2))(0x614CB54FL, (-3L)), (-3L)), (-3L), 0x614CB54FL, (-3L), (VECTOR(int32_t, 2))(0x614CB54FL, (-3L)), (VECTOR(int32_t, 2))(0x614CB54FL, (-3L)), 0x614CB54FL, (-3L), 0x614CB54FL, (-3L));
                    uint32_t l_202 = 4294967287UL;
                    VECTOR(int32_t, 16) l_203 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int32_t, 2))((-7L), (-1L)), (VECTOR(int32_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
                    int i;
                    l_192[1] = l_192[1];
                    l_52 = 0x61EB4871L;
                    if (((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_193.s30)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_194.s26)).xxyy, ((VECTOR(int32_t, 8))(0x4887734DL, 0x4896D3C3L, 1L, (l_62 &= (-3L)), (l_183.s5 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_195.yyyxxyyxyxyyyxxx)).s09)).yyxx)))).y), (l_183.s5 = (((l_198 &= (l_197 = l_196[6])) , FAKE_DIVERGE(p_1131->global_2_offset, get_global_id(2), 10)) , (l_199 , l_200))), 0x1F7D0607L, 0x45ADFD7DL)).hi))))).lo, ((VECTOR(int32_t, 16))(0x729903A5L, (-1L), 1L, 0x29A4662FL, 0x1003BBABL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_201.sae)).yxyy, (int32_t)(l_202 = 0x73BDC24BL)))).wwzzwzyyzxyzyyzw)))).s040a)).lo)), 1L, 0x23A823F1L, 0x31BEFFD9L, 0x2C0E2F8FL, 1L, ((VECTOR(int32_t, 4))(l_203.sdff5)))).s52))).hi)
                    { /* block id: 144 */
                        uint32_t l_204 = 4294967286UL;
                        int32_t l_205 = (-6L);
                        uint8_t l_206 = 0UL;
                        int32_t l_209 = 0x59AC3D86L;
                        uint8_t l_210 = 0xE4L;
                        VECTOR(int32_t, 8) l_211 = (VECTOR(int32_t, 8))(0x6D3885CEL, (VECTOR(int32_t, 4))(0x6D3885CEL, (VECTOR(int32_t, 2))(0x6D3885CEL, 0x467197F0L), 0x467197F0L), 0x467197F0L, 0x6D3885CEL, 0x467197F0L);
                        VECTOR(int32_t, 4) l_212 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                        int8_t l_213 = 0x53L;
                        VECTOR(int16_t, 2) l_214 = (VECTOR(int16_t, 2))(0x3E5AL, 0x2B11L);
                        VECTOR(int16_t, 8) l_215 = (VECTOR(int16_t, 8))(0x2214L, (VECTOR(int16_t, 4))(0x2214L, (VECTOR(int16_t, 2))(0x2214L, 0x68D3L), 0x68D3L), 0x68D3L, 0x2214L, 0x68D3L);
                        VECTOR(int16_t, 8) l_216 = (VECTOR(int16_t, 8))(0x079DL, (VECTOR(int16_t, 4))(0x079DL, (VECTOR(int16_t, 2))(0x079DL, (-1L)), (-1L)), (-1L), 0x079DL, (-1L));
                        VECTOR(int16_t, 8) l_217 = (VECTOR(int16_t, 8))(0x5685L, (VECTOR(int16_t, 4))(0x5685L, (VECTOR(int16_t, 2))(0x5685L, 0x718FL), 0x718FL), 0x718FL, 0x5685L, 0x718FL);
                        uint8_t l_218 = 0UL;
                        uint8_t l_219 = 0UL;
                        int16_t l_220 = 0x356EL;
                        int8_t l_221 = 0x42L;
                        uint16_t l_222[9][6] = {{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL},{0UL,0xAB3DL,0xAB3DL,0UL,0UL,0xAB3DL}};
                        uint8_t l_223[5][2] = {{0x0EL,0x0EL},{0x0EL,0x0EL},{0x0EL,0x0EL},{0x0EL,0x0EL},{0x0EL,0x0EL}};
                        uint16_t l_224 = 1UL;
                        uint16_t l_225 = 8UL;
                        int i, j;
                        l_195.y ^= l_204;
                        l_206--;
                        l_197 = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(9L, (-6L), l_209, 0x568527ECL, l_210, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_211.s4142405625377313)).s1b, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x4DF25EA7L))))))))), ((VECTOR(int32_t, 4))(l_212.wzyw)), ((VECTOR(int32_t, 8))((l_194.s3 ^= 0x0BE1485AL), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(0L, 0x25BFL)).yyxyxyyy, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))((l_139[2][3] = 9L), l_213, ((VECTOR(int16_t, 4))(l_214.yyxy)), 0x2F9DL, 0x3939L)), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_215.s0504)), ((VECTOR(int16_t, 4))(l_216.s5012)), 0x702FL, ((VECTOR(int16_t, 4))(6L, ((VECTOR(int16_t, 2))(l_217.s32)), (-1L))), ((VECTOR(int16_t, 2))((-1L), 0L)), (-5L))).hi, ((VECTOR(int16_t, 4))((l_214.x |= l_218), l_219, (-6L), 0x764DL)).zxxzyzxz))))))))).hi, ((VECTOR(uint16_t, 4))(65535UL))))), (-5L), (-1L), 0x7704929BL)), 1L, 0L)).sf1)), ((VECTOR(int32_t, 2))((-1L))), l_220, ((VECTOR(int32_t, 4))(0L)), 0x20BF2F6FL, 1L)).sab, (int32_t)l_221, (int32_t)l_222[8][4]))).xyyy, (int32_t)0x65729E08L))).even)).yyxyyxxxyxyyxyyx)).s4b57)).wyywyzwzwyyyxxzy)), (int32_t)1L, (int32_t)l_223[4][1]))).s1;
                        l_211.s3 ^= (l_224 , l_225);
                    }
                    else
                    { /* block id: 152 */
                        uint16_t **l_226 = (void*)0;
                        l_226 = l_226;
                    }
                }
                l_52 = 0x4C31C596L;
            }
        }
        unsigned int result = 0;
        result += l_52;
        int l_53_i0, l_53_i1;
        for (l_53_i0 = 0; l_53_i0 < 5; l_53_i0++) {
            for (l_53_i1 = 0; l_53_i1 < 7; l_53_i1++) {
                result += l_53[l_53_i0][l_53_i1];
            }
        }
        result += l_54;
        atomic_add(&p_1131->l_special_values[48], result);
    }
    else
    { /* block id: 159 */
        (1 + 1);
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->l_comm_values p_1131->g_2
 * writes:
 */
uint8_t  func_38(int32_t * p_39, int64_t  p_40, int32_t * p_41, uint16_t  p_42, int32_t * p_43, struct S0 * p_1131)
{ /* block id: 12 */
    int64_t l_44 = (-1L);
    (*p_43) = (l_44 , 0x70A061FAL);
    for (l_44 = 0; (l_44 <= 14); ++l_44)
    { /* block id: 16 */
        return p_1131->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))];
    }
    (*p_43) = l_44;
    return p_1131->g_2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_492 p_1131->g_462 p_1131->g_436 p_1131->g_259 p_1131->g_500 p_1131->g_386 p_1131->g_255 p_1131->g_508 p_1131->g_263 p_1131->g_493 p_1131->g_394 p_1131->g_comm_values p_1131->g_416 p_1131->g_285 p_1131->g_539 p_1131->g_540 p_1131->g_542 p_1131->g_543 p_1131->g_548 p_1131->g_227 p_1131->g_2 p_1131->g_48 p_1131->g_3 p_1131->g_330 p_1131->g_448
 * writes: p_1131->g_462 p_1131->g_2 p_1131->g_259 p_1131->g_263 p_1131->g_394 p_1131->g_525 p_1131->g_285 p_1131->g_255 p_1131->g_227 p_1131->g_48 p_1131->g_257 p_1131->g_531 p_1131->g_416 p_1131->g_50 p_1131->g_730
 */
int32_t * func_228(int32_t ** p_229, int8_t  p_230, uint32_t  p_231, struct S0 * p_1131)
{ /* block id: 265 */
    uint64_t ** volatile l_494 = (void*)0;/* VOLATILE GLOBAL l_494 */
    int32_t l_497 = 0x16DB0B28L;
    int8_t l_534 = 0x33L;
    VECTOR(uint64_t, 16) l_538 = (VECTOR(uint64_t, 16))(0x7EBC186B88C5B923L, (VECTOR(uint64_t, 4))(0x7EBC186B88C5B923L, (VECTOR(uint64_t, 2))(0x7EBC186B88C5B923L, 0xF76D025A6432AE54L), 0xF76D025A6432AE54L), 0xF76D025A6432AE54L, 0x7EBC186B88C5B923L, 0xF76D025A6432AE54L, (VECTOR(uint64_t, 2))(0x7EBC186B88C5B923L, 0xF76D025A6432AE54L), (VECTOR(uint64_t, 2))(0x7EBC186B88C5B923L, 0xF76D025A6432AE54L), 0x7EBC186B88C5B923L, 0xF76D025A6432AE54L, 0x7EBC186B88C5B923L, 0xF76D025A6432AE54L);
    int32_t l_612 = 0x7B42525DL;
    uint16_t l_626[4][7] = {{0xF50FL,8UL,8UL,0xF50FL,0xF50FL,8UL,8UL},{0xF50FL,8UL,8UL,0xF50FL,0xF50FL,8UL,8UL},{0xF50FL,8UL,8UL,0xF50FL,0xF50FL,8UL,8UL},{0xF50FL,8UL,8UL,0xF50FL,0xF50FL,8UL,8UL}};
    int32_t l_652 = 0L;
    uint32_t *l_655 = &p_1131->g_50;
    int32_t l_677 = 1L;
    VECTOR(int32_t, 2) l_707 = (VECTOR(int32_t, 2))(0L, 0x352EBD71L);
    uint8_t *l_729 = (void*)0;
    uint8_t **l_728 = &l_729;
    uint64_t l_735 = 18446744073709551615UL;
    int32_t *l_738[3][2] = {{(void*)0,&p_1131->g_255},{(void*)0,&p_1131->g_255},{(void*)0,&p_1131->g_255}};
    uint8_t l_739[9] = {0x30L,0x30L,0x30L,0x30L,0x30L,0x30L,0x30L,0x30L,0x30L};
    int i, j;
    l_494 = p_1131->g_492;
    for (p_1131->g_462 = 0; (p_1131->g_462 <= (-3)); --p_1131->g_462)
    { /* block id: 269 */
        uint16_t ***l_528[7] = {&p_1131->g_474[3],&p_1131->g_474[1],&p_1131->g_474[3],&p_1131->g_474[3],&p_1131->g_474[1],&p_1131->g_474[3],&p_1131->g_474[3]};
        int32_t l_532 = 0L;
        int32_t l_533 = 0x72E1369FL;
        VECTOR(int64_t, 4) l_546 = (VECTOR(int64_t, 4))(0x4332D7BC5648F1DFL, (VECTOR(int64_t, 2))(0x4332D7BC5648F1DFL, (-1L)), (-1L));
        VECTOR(int64_t, 16) l_549 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int64_t, 2))(1L, 8L), (VECTOR(int64_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
        int i;
        (*p_1131->g_436) = l_497;
        for (p_1131->g_259 = 0; (p_1131->g_259 >= (-22)); p_1131->g_259 = safe_sub_func_uint64_t_u_u(p_1131->g_259, 4))
        { /* block id: 273 */
            return p_1131->g_500;
        }
        if ((**p_229))
        { /* block id: 276 */
            int16_t l_513 = 0x2418L;
            uint32_t *l_519 = &p_1131->g_263[4];
            uint64_t *l_524 = &p_1131->g_525[0];
            uint16_t ****l_529 = &l_528[1];
            uint64_t *l_530[2][10] = {{&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531},{&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531,&p_1131->g_531}};
            int32_t *l_535 = &p_1131->g_285;
            VECTOR(int16_t, 2) l_541 = (VECTOR(int16_t, 2))(0x0137L, (-2L));
            int32_t l_573 = 0x52AB7805L;
            int i, j;
            (*p_1131->g_436) = ((*l_535) ^= ((!(safe_mul_func_uint8_t_u_u(p_230, p_230))) <= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((((safe_unary_minus_func_int32_t_s((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x6CL, 4UL, ((VECTOR(uint8_t, 16))(p_1131->g_508.yxyxyyyyxxyyxyxx)).s5, (safe_lshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s(l_513, (~(l_532 = (safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((safe_sub_func_int32_t_s_s((**p_229), ((*l_519)--))) > ((((*l_524) = (--(*p_1131->g_493))) | ((((((*l_529) = l_528[1]) != &p_1131->g_474[1]) && (&p_1131->g_493 == &p_1131->g_493)) & l_513) && p_230)) <= p_230)))), p_1131->g_508.y)))))) , p_1131->g_508.y), p_1131->g_comm_values[p_1131->tid])), p_1131->g_416, 0UL, 0x51L, 254UL)))).s5 < 0x15L))) >= l_533) ^ 0UL) | FAKE_DIVERGE(p_1131->group_1_offset, get_group_id(1), 10)), 13)) && l_534), 1))));
            (*p_1131->g_386) &= ((VECTOR(int32_t, 4))((safe_mul_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_538.s056596cf2069a21f)).s12)).hi > 0x6E54CC02C388A77AL), p_231)), 0L, 0x02EE6F33L, 1L)).x;
            if ((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_1131->g_539.s7450116316407571)).s2e)), ((VECTOR(int16_t, 2))(p_1131->g_540.yy)), ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_541.yxxxxyyyxxxxyxyx)).even)).even))), 0x661FL, 1L, (-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(p_1131->g_542.s34)).yxxy))).hi))).xxxxyxyxxxxxxxyy, (int16_t)p_230))))).s31)).odd, ((VECTOR(int16_t, 2))(p_1131->g_543.zz)), (-1L), 4L)).s96)).lo , 8L))
            { /* block id: 285 */
                VECTOR(int64_t, 8) l_547 = (VECTOR(int64_t, 8))(0x142D8F9A9C5A5D22L, (VECTOR(int64_t, 4))(0x142D8F9A9C5A5D22L, (VECTOR(int64_t, 2))(0x142D8F9A9C5A5D22L, (-1L)), (-1L)), (-1L), 0x142D8F9A9C5A5D22L, (-1L));
                int64_t *l_552 = (void*)0;
                uint8_t *l_565 = (void*)0;
                uint8_t *l_566 = &p_1131->g_227[2][5];
                uint32_t *l_570 = &p_1131->g_50;
                uint32_t **l_569 = &l_570;
                int8_t *l_571 = &l_534;
                int32_t *l_572 = &l_533;
                int i;
                (*l_572) &= (p_231 && (((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_546.zxyzwxzy)).s1143361760021222)).s6c40, ((VECTOR(int64_t, 8))(l_547.s70054251)).lo))), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(p_1131->g_548.yw)).yxxy, (int64_t)(GROUP_DIVERGE(2, 1) && ((void*)0 != &p_1131->g_50))))).odd)).xyyyyyxyxyxyxyxy, ((VECTOR(int64_t, 4))(l_549.s2614)).wwwzwyzwyxwzwzzy))).even, ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(0L, 1L, (((VECTOR(uint16_t, 2))(1UL, 0UL)).lo && (safe_lshift_func_int16_t_s_s((l_552 != (void*)0), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0xBD20AE27L, (safe_div_func_uint16_t_u_u((l_497 &= 0x625DL), (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((((*l_569) = ((+((*l_566)--)) , &p_231)) != (((((*l_571) = (p_230 = p_230)) < p_1131->g_394) & l_547.s7) , &p_1131->g_50)), 1)), (**p_229))), (*l_535))))))), 5))))), ((VECTOR(int64_t, 2))(0x5AB0F762AB1EB5EDL)), 0x53B15509C6C62DB9L, 0x66CEAB760E017300L, 0x24CCAD00917C36A7L)), (int64_t)p_230, (int64_t)l_547.s7)))))).s2415140717261436)).s6e21, ((VECTOR(int64_t, 4))(0x7C6E0B6C2CB14E56L))))).y, 0L)) >= (*p_1131->g_436)) , p_230));
            }
            else
            { /* block id: 292 */
                int32_t *l_574 = &p_1131->g_255;
                int32_t *l_575 = &l_533;
                int32_t *l_576 = &p_1131->g_255;
                int32_t *l_577 = &l_533;
                int32_t *l_578 = &l_497;
                int32_t *l_579 = &p_1131->g_255;
                int32_t *l_580 = (void*)0;
                int32_t *l_581 = (void*)0;
                int32_t *l_582 = (void*)0;
                int32_t *l_583 = (void*)0;
                int32_t *l_584 = &l_532;
                int32_t *l_585 = (void*)0;
                int32_t *l_586 = (void*)0;
                int32_t *l_587 = (void*)0;
                int32_t *l_588 = &p_1131->g_255;
                int32_t *l_589 = &p_1131->g_255;
                int32_t *l_590 = &l_532;
                int32_t *l_591 = &l_532;
                int32_t *l_592 = &l_573;
                int32_t *l_593[4][3][5] = {{{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3}},{{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3}},{{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3}},{{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3},{&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3,&p_1131->g_3}}};
                uint32_t l_594 = 0xB8708CA1L;
                int i, j, k;
                --l_594;
                (*l_590) = (p_1131->g_227[2][5] > (p_1131->g_263[1] = p_1131->g_539.s1));
            }
        }
        else
        { /* block id: 297 */
            int32_t *l_597 = &p_1131->g_285;
            int32_t *l_598 = &l_533;
            int32_t *l_599 = &l_532;
            int32_t *l_600 = &p_1131->g_285;
            VECTOR(int32_t, 8) l_601 = (VECTOR(int32_t, 8))(0x3C847413L, (VECTOR(int32_t, 4))(0x3C847413L, (VECTOR(int32_t, 2))(0x3C847413L, 0x6AA4F085L), 0x6AA4F085L), 0x6AA4F085L, 0x3C847413L, 0x6AA4F085L);
            int32_t *l_602 = (void*)0;
            int32_t *l_603 = &p_1131->g_347;
            int32_t *l_604 = (void*)0;
            int32_t *l_605 = &p_1131->g_347;
            int32_t *l_606 = (void*)0;
            int32_t *l_607 = &l_533;
            int32_t *l_608 = &l_533;
            int32_t *l_609 = &l_497;
            int32_t *l_610 = (void*)0;
            int32_t *l_611[1][7][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint32_t l_613 = 0UL;
            int i, j, k;
            ++l_613;
        }
        if ((*p_1131->g_386))
            break;
    }
    for (p_1131->g_48 = 0; (p_1131->g_48 == 18); p_1131->g_48 = safe_add_func_int64_t_s_s(p_1131->g_48, 9))
    { /* block id: 304 */
        uint16_t ***l_632 = (void*)0;
        uint16_t ****l_631 = &l_632;
        int32_t l_651 = 7L;
        uint32_t *l_656 = &p_1131->g_50;
        uint32_t *l_658[1];
        uint32_t **l_657 = &l_658[0];
        int64_t *l_663 = &p_1131->g_664;
        VECTOR(uint16_t, 4) l_667 = (VECTOR(uint16_t, 4))(0x8FB0L, (VECTOR(uint16_t, 2))(0x8FB0L, 0UL), 0UL);
        int16_t l_676 = 0x4C84L;
        int32_t l_678 = 0x68E05BA5L;
        uint64_t *l_689 = &p_1131->g_525[0];
        uint32_t l_712[10][3][2] = {{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}},{{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL},{0UL,0xE8FBFCECL}}};
        int32_t l_733 = (-2L);
        VECTOR(int32_t, 16) l_734 = (VECTOR(int32_t, 16))(0x2A8E0F82L, (VECTOR(int32_t, 4))(0x2A8E0F82L, (VECTOR(int32_t, 2))(0x2A8E0F82L, 0x6C62A748L), 0x6C62A748L), 0x6C62A748L, 0x2A8E0F82L, 0x6C62A748L, (VECTOR(int32_t, 2))(0x2A8E0F82L, 0x6C62A748L), (VECTOR(int32_t, 2))(0x2A8E0F82L, 0x6C62A748L), 0x2A8E0F82L, 0x6C62A748L, 0x2A8E0F82L, 0x6C62A748L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_658[i] = &p_1131->g_50;
        for (p_1131->g_257 = 0; (p_1131->g_257 >= 10); ++p_1131->g_257)
        { /* block id: 307 */
            uint8_t *l_649[3][8][8] = {{{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]}},{{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]}},{{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]},{&p_1131->g_227[2][5],&p_1131->g_227[3][5],&p_1131->g_227[3][5],&p_1131->g_227[2][5],(void*)0,&p_1131->g_416,&p_1131->g_227[2][5],&p_1131->g_227[2][5]}}};
            int32_t l_650 = 0x2B75CD09L;
            int i, j, k;
            l_652 ^= ((**p_229) ^= (safe_mod_func_int32_t_s_s(((l_538.s4 , (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_626[2][6], (l_538.sc & (p_230 , ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((((void*)0 == l_631) , (~(safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_230, ((safe_rshift_func_int8_t_s_s((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(p_1131->g_641.s72)).xxxy, ((VECTOR(uint16_t, 2))(p_1131->g_642.s01)).xxxx)))))))).yzzzwywz, (uint16_t)65532UL))).s70)).even && (((((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_612 = (p_231 ^ p_231)), p_1131->g_3)) && p_1131->g_330.s5), l_538.sa)) > p_231), l_650)) | GROUP_DIVERGE(1, 1)) >= l_497) <= p_1131->g_448.s5) > p_231)), 3)) & l_651))), l_497)), l_650)))) != 0x6177L), l_650)) , l_626[0][3]), 3)) <= l_650))))), p_231))) >= l_651), l_534)));
        }
        if ((safe_lshift_func_int16_t_s_u((((((l_656 = l_655) == ((*l_657) = l_655)) | ((VECTOR(uint64_t, 4))(((l_678 &= (~((((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x7EL, 9UL)).yyxxyyxy)).s6, 5)) , p_231), l_651)) || (((*l_663) = p_230) , (((safe_mod_func_uint16_t_u_u((0UL <= (((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_667.wywwzxzz)).s0244162103162620)).s8 , (((VECTOR(int8_t, 2))(0x77L, 0x1BL)).hi | ((safe_mod_func_int16_t_s_s((p_230 , (((safe_sub_func_int16_t_s_s((((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((p_1131->g_329.w || 0L), p_230)) , l_652), l_676)) || (-1L)) || l_676), 0x02E5L)) != p_1131->g_642.s6) & 0x137076CDE7594582L)), l_677)) , p_231))) | p_231) <= (-6L))), (-1L))) ^ p_1131->g_285) || p_230))) >= l_538.s1) | 5UL))) & 0x78L), 9UL, 7UL, 18446744073709551615UL)).w) , 0x5C25FA492D1C6FF8L) < l_667.z), p_231)))
        { /* block id: 316 */
            return (*p_229);
        }
        else
        { /* block id: 318 */
            VECTOR(int32_t, 4) l_693 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L);
            int32_t *l_731 = &p_1131->g_347;
            int32_t *l_732[3];
            int i;
            for (i = 0; i < 3; i++)
                l_732[i] = (void*)0;
            for (p_1131->g_531 = 0; (p_1131->g_531 >= 59); p_1131->g_531 = safe_add_func_uint32_t_u_u(p_1131->g_531, 3))
            { /* block id: 321 */
                uint64_t *l_687 = (void*)0;
                uint64_t **l_688[2];
                uint8_t *l_696 = &p_1131->g_416;
                int32_t l_710 = 0x4A7B4762L;
                uint32_t *l_711[6];
                int8_t *l_713[3][9][3] = {{{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0}},{{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0}},{{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0},{(void*)0,&l_534,(void*)0}}};
                VECTOR(int32_t, 4) l_714 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L));
                int32_t *l_715 = &p_1131->g_285;
                int32_t *l_716 = &p_1131->g_347;
                int32_t *l_717 = &l_652;
                int32_t *l_718 = (void*)0;
                int32_t *l_719 = (void*)0;
                int32_t *l_720 = &l_612;
                int32_t *l_721 = &l_652;
                int32_t *l_722 = &l_612;
                uint64_t l_723 = 0x6C44E70A520A6631L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_688[i] = &p_1131->g_493;
                for (i = 0; i < 6; i++)
                    l_711[i] = &p_1131->g_263[4];
                (*p_1131->g_386) ^= (safe_mod_func_int8_t_s_s(p_1131->g_448.s7, (l_714.y = (safe_div_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u((l_687 == (l_689 = (void*)0)), (safe_mod_func_uint16_t_u_u((((((VECTOR(int32_t, 2))((-1L), (-10L))).hi == ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1131->g_692.s6716)).zxwzzwxz)).odd)).xywxxxzwxzzyxzzw, ((VECTOR(int32_t, 16))(l_693.xzxwzxzxxwwwxwwx))))).s2) & (l_626[2][6] || (safe_add_func_uint8_t_u_u(((*l_696) = p_230), (((p_231 & (l_710 = (safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_231, (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_707.xxyyxyyx)).s3, ((safe_mod_func_int8_t_s_s((~(((0L ^ l_710) ^ l_538.s6) == p_230)), p_1131->g_462)) , 7L))), l_651)))), 0)), l_667.y)))) <= GROUP_DIVERGE(2, 1)) & l_712[0][1][0]))))) , FAKE_DIVERGE(p_1131->local_0_offset, get_local_id(0), 10)), l_667.y)))) && l_538.s6), GROUP_DIVERGE(1, 1))))));
                ++l_723;
            }
            for (p_1131->g_50 = (-3); (p_1131->g_50 == 29); p_1131->g_50 = safe_add_func_int64_t_s_s(p_1131->g_50, 3))
            { /* block id: 331 */
                p_1131->g_730 = l_728;
            }
            --l_735;
        }
    }
    l_739[0]++;
    return (*p_229);
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_416 p_1131->g_386 p_1131->g_483
 * writes: p_1131->g_312 p_1131->g_347 p_1131->g_386 p_1131->g_255
 */
int32_t ** func_232(uint16_t ** p_233, uint32_t * p_234, uint8_t  p_235, uint32_t  p_236, struct S0 * p_1131)
{ /* block id: 258 */
    int32_t *l_482 = &p_1131->g_255;
    int32_t **l_484[4];
    int64_t l_485 = 0L;
    int32_t l_486 = 0x77A451F7L;
    int8_t l_487[7][6][2] = {{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}}};
    int8_t l_488 = 0x58L;
    uint32_t l_489 = 4294967292UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_484[i] = &l_482;
    (*p_1131->g_386) = (p_235 > (p_1131->g_416 != ((safe_lshift_func_uint8_t_u_u((0xA314201EA4BDFA95L != 0x49513B74C9B03E12L), (p_1131->g_312.s7 = (p_236 , (safe_rshift_func_int16_t_s_u(4L, 3)))))) & 0x49368918L)));
    (*p_1131->g_483) = l_482;
    (*p_1131->g_483) = l_482;
    ++l_489;
    return &p_1131->g_386;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_394
 * writes:
 */
uint64_t  func_237(uint16_t ** p_238, struct S0 * p_1131)
{ /* block id: 255 */
    return p_1131->g_394;
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_474
 * writes:
 */
uint16_t ** func_239(uint16_t * p_240, struct S0 * p_1131)
{ /* block id: 253 */
    uint16_t *l_473 = &p_1131->g_29;
    uint16_t **l_472[10][3] = {{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473},{&l_473,&l_473,&l_473}};
    int i, j;
    return p_1131->g_474[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1131->g_257 p_1131->g_255 p_1131->g_386 p_1131->g_347 p_1131->g_374 p_1131->g_436 p_1131->g_475
 * writes: p_1131->g_257 p_1131->g_255 p_1131->g_48 p_1131->g_2
 */
uint16_t * func_241(int64_t  p_242, uint16_t ** p_243, int32_t ** p_244, uint8_t  p_245, uint32_t  p_246, struct S0 * p_1131)
{ /* block id: 171 */
    int16_t l_275[6] = {0x1CBBL,0x1CBBL,0x1CBBL,0x1CBBL,0x1CBBL,0x1CBBL};
    uint32_t *l_280 = &p_1131->g_50;
    VECTOR(uint16_t, 4) l_295 = (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xD96EL), 0xD96EL);
    VECTOR(int16_t, 16) l_304 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3006L), 0x3006L), 0x3006L, (-8L), 0x3006L, (VECTOR(int16_t, 2))((-8L), 0x3006L), (VECTOR(int16_t, 2))((-8L), 0x3006L), (-8L), 0x3006L, (-8L), 0x3006L);
    VECTOR(int32_t, 8) l_328 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x1B00F3D2L), 0x1B00F3D2L), 0x1B00F3D2L, 8L, 0x1B00F3D2L);
    VECTOR(int32_t, 16) l_349 = (VECTOR(int32_t, 16))(0x1EA74E1DL, (VECTOR(int32_t, 4))(0x1EA74E1DL, (VECTOR(int32_t, 2))(0x1EA74E1DL, 0x6BA578F8L), 0x6BA578F8L), 0x6BA578F8L, 0x1EA74E1DL, 0x6BA578F8L, (VECTOR(int32_t, 2))(0x1EA74E1DL, 0x6BA578F8L), (VECTOR(int32_t, 2))(0x1EA74E1DL, 0x6BA578F8L), 0x1EA74E1DL, 0x6BA578F8L, 0x1EA74E1DL, 0x6BA578F8L);
    VECTOR(uint8_t, 2) l_364 = (VECTOR(uint8_t, 2))(0xD0L, 255UL);
    int64_t *l_366 = &p_1131->g_48;
    int64_t **l_365 = &l_366;
    int32_t **l_418 = (void*)0;
    uint64_t **l_456 = &p_1131->g_371;
    int32_t *l_465[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_466[10] = {0x5D2659EDAC41D2F0L,9UL,0x5D2659EDAC41D2F0L,0x5D2659EDAC41D2F0L,9UL,0x5D2659EDAC41D2F0L,0x5D2659EDAC41D2F0L,9UL,0x5D2659EDAC41D2F0L,0x5D2659EDAC41D2F0L};
    int32_t **l_469 = (void*)0;
    int32_t **l_471 = &l_465[1];
    int i;
    for (p_246 = (-25); (p_246 > 28); p_246++)
    { /* block id: 174 */
        VECTOR(int64_t, 8) l_270 = (VECTOR(int64_t, 8))(0x124034DBA47CB311L, (VECTOR(int64_t, 4))(0x124034DBA47CB311L, (VECTOR(int64_t, 2))(0x124034DBA47CB311L, (-7L)), (-7L)), (-7L), 0x124034DBA47CB311L, (-7L));
        int32_t l_286 = 0x58D3A4A6L;
        int64_t *l_301[9][10] = {{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0},{(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0,&p_1131->g_48,(void*)0,(void*)0}};
        uint64_t *l_368 = &p_1131->g_344;
        uint64_t **l_367 = &l_368;
        VECTOR(int32_t, 2) l_375 = (VECTOR(int32_t, 2))(0x1174981BL, (-3L));
        uint32_t l_383 = 0x99CA74EEL;
        int16_t *l_408[7][9][4] = {{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}},{{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0},{&p_1131->g_257,&l_275[0],&l_275[5],(void*)0}}};
        int16_t l_417 = (-3L);
        VECTOR(uint16_t, 16) l_425 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x18ACL), 0x18ACL), 0x18ACL, 1UL, 0x18ACL, (VECTOR(uint16_t, 2))(1UL, 0x18ACL), (VECTOR(uint16_t, 2))(1UL, 0x18ACL), 1UL, 0x18ACL, 1UL, 0x18ACL);
        uint32_t *l_430 = &p_1131->g_50;
        int i, j, k;
        for (p_1131->g_257 = 0; (p_1131->g_257 <= 6); ++p_1131->g_257)
        { /* block id: 177 */
            uint32_t l_278 = 0x8FEA07E3L;
            uint32_t *l_279 = &p_1131->g_50;
            uint32_t *l_282 = &p_1131->g_263[6];
            int32_t l_283 = 0x2FD80ED7L;
            int32_t *l_284[8] = {&p_1131->g_285,&p_1131->g_285,&p_1131->g_285,&p_1131->g_285,&p_1131->g_285,&p_1131->g_285,&p_1131->g_285,&p_1131->g_285};
            int64_t *l_302 = (void*)0;
            VECTOR(int16_t, 8) l_303 = (VECTOR(int16_t, 8))(0x7DC9L, (VECTOR(int16_t, 4))(0x7DC9L, (VECTOR(int16_t, 2))(0x7DC9L, 4L), 4L), 4L, 0x7DC9L, 4L);
            VECTOR(uint8_t, 2) l_361 = (VECTOR(uint8_t, 2))(1UL, 255UL);
            VECTOR(uint32_t, 4) l_437 = (VECTOR(uint32_t, 4))(0x58F69AB0L, (VECTOR(uint32_t, 2))(0x58F69AB0L, 1UL), 1UL);
            int32_t **l_447 = &l_284[2];
            uint64_t *l_453 = &p_1131->g_394;
            int8_t *l_461 = &p_1131->g_462;
            int i;
            l_286 = (l_283 = (p_1131->g_255 |= (safe_mul_func_uint16_t_u_u((((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(l_270.s13)).yyxxxxyx, (int64_t)(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(p_1131->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1131->tid, 7))], 7)), (((~(l_275[5] & 0x6CC7DBC7L)) , 0xA35E8C61L) ^ (((*l_282) = (0L == (safe_add_func_uint32_t_u_u((l_278 , (l_279 != l_280)), p_1131->g_281)))) | p_1131->g_3)))) > p_1131->g_227[2][5]) || p_245), (int64_t)l_270.s5))).s3 > p_242), 0x4E80L))));
            for (l_283 = 0; (l_283 <= (-19)); l_283--)
            { /* block id: 184 */
                uint8_t *l_290 = &p_1131->g_227[0][0];
                uint8_t *l_311 = (void*)0;
                uint8_t *l_313 = (void*)0;
                uint8_t *l_314 = (void*)0;
                uint8_t *l_315 = (void*)0;
                uint8_t *l_316 = (void*)0;
                int32_t l_323[8][9] = {{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L},{0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L,0x4F89602CL,0x4F89602CL,0x29C0D5D7L,0x29C0D5D7L}};
                int32_t ***l_324[7];
                VECTOR(int8_t, 8) l_327 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x5FL), 0x5FL), 0x5FL, 0L, 0x5FL);
                VECTOR(int32_t, 4) l_348 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x492C9319L), 0x492C9319L);
                uint16_t *l_356[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint16_t **l_355 = &l_356[6];
                int64_t l_359 = 0x44935083D18B3321L;
                VECTOR(uint8_t, 2) l_362 = (VECTOR(uint8_t, 2))(0UL, 255UL);
                int16_t **l_409[5] = {&l_408[6][6][3],&l_408[6][6][3],&l_408[6][6][3],&l_408[6][6][3],&l_408[6][6][3]};
                uint32_t *l_431 = &p_1131->g_50;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_324[i] = &p_1131->g_247;
                (1 + 1);
            }
            (*l_447) = ((((**l_365) = (((VECTOR(uint32_t, 4))(l_437.zxww)).y && 0x61D451BFL)) >= (((((safe_mul_func_uint16_t_u_u(0x04D7L, (safe_add_func_int64_t_s_s((l_302 == l_366), 7UL)))) , (safe_mod_func_int64_t_s_s((p_242 < 0L), ((VECTOR(uint64_t, 16))(p_1131->g_444.s5752433062146116)).s9))) <= (((safe_add_func_int8_t_s_s((((*p_1131->g_386) | p_245) && l_270.s1), 0x7EL)) , l_417) && 0xC91B4BBBL)) & 0x532B8167B3243C53L) && p_1131->g_374.z)) , (void*)0);
            (*p_1131->g_436) = ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1131->g_448.s5201)).hi)).yxxxxxyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))((**p_243), 0x659EL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xDD13L, 0xB3DFL)).xxxyxxyy)).odd)), (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((((0xB7E95BB0361C70C2L != (((*l_453) |= 1UL) > (((((void*)0 == &p_243) , (((*p_1131->g_386) = ((safe_rshift_func_int8_t_s_s((&l_368 != (l_367 = l_456)), ((*l_461) = (safe_rshift_func_uint8_t_u_s((((*p_1131->g_436) & (l_286 = (safe_rshift_func_int8_t_s_u(p_1131->g_comm_values[p_1131->tid], p_246)))) , 0xDAL), 1))))) != p_1131->g_374.x)) && 0x0F4BFB0EL)) & (**p_243)) , p_246))) > l_425.s6) > p_242), FAKE_DIVERGE(p_1131->global_2_offset, get_global_id(2), 10))), GROUP_DIVERGE(0, 1))), 0xDD93L, p_1131->g_400, (**p_243), 1UL, 0xC09FL, p_1131->g_374.z, 0x3A60L, 0UL, 0UL)).s2aa8, (uint16_t)FAKE_DIVERGE(p_1131->global_0_offset, get_global_id(0), 10)))).wzzzyzxwwxzzxzxz)).hi))).s6;
        }
        for (l_417 = 7; (l_417 <= (-13)); l_417--)
        { /* block id: 245 */
            return (*p_243);
        }
        return (*p_243);
    }
    l_466[1]--;
    (*l_471) = l_280;
    return (*p_243);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S0 c_1132;
    struct S0* p_1131 = &c_1132;
    struct S0 c_1133 = {
        0x653D8DA8L, // p_1131->g_2
        (-8L), // p_1131->g_3
        0UL, // p_1131->g_29
        0x0F0FC5A51F3E63D4L, // p_1131->g_48
        1UL, // p_1131->g_50
        {{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L},{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L},{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L},{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L},{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L},{0x84L,0x84L,0x84L,0x84L,0x84L,0x84L}}, // p_1131->g_227
        (void*)0, // p_1131->g_247
        0x76EA9D6EL, // p_1131->g_255
        (-9L), // p_1131->g_257
        0x24B0L, // p_1131->g_259
        {0x57B35241L,0x57B35241L,0x57B35241L,0x57B35241L,0x57B35241L,0x57B35241L,0x57B35241L,0x57B35241L}, // p_1131->g_263
        65527UL, // p_1131->g_281
        5L, // p_1131->g_285
        (VECTOR(int64_t, 16))(0x22B6602E2CF94C77L, (VECTOR(int64_t, 4))(0x22B6602E2CF94C77L, (VECTOR(int64_t, 2))(0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL), 0x56CCC4721F4F38DFL), 0x56CCC4721F4F38DFL, 0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL, (VECTOR(int64_t, 2))(0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL), (VECTOR(int64_t, 2))(0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL), 0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL, 0x22B6602E2CF94C77L, 0x56CCC4721F4F38DFL), // p_1131->g_289
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x8BL), 0x8BL), 0x8BL, 0UL, 0x8BL), // p_1131->g_312
        (VECTOR(int32_t, 4))(0x4AD8554BL, (VECTOR(int32_t, 2))(0x4AD8554BL, 0x3D0323B8L), 0x3D0323B8L), // p_1131->g_329
        (VECTOR(int32_t, 16))(0x7BDC8BF4L, (VECTOR(int32_t, 4))(0x7BDC8BF4L, (VECTOR(int32_t, 2))(0x7BDC8BF4L, 1L), 1L), 1L, 0x7BDC8BF4L, 1L, (VECTOR(int32_t, 2))(0x7BDC8BF4L, 1L), (VECTOR(int32_t, 2))(0x7BDC8BF4L, 1L), 0x7BDC8BF4L, 1L, 0x7BDC8BF4L, 1L), // p_1131->g_330
        0x6D1E2D05048DAA46L, // p_1131->g_344
        0L, // p_1131->g_347
        &p_1131->g_344, // p_1131->g_371
        &p_1131->g_371, // p_1131->g_370
        &p_1131->g_370, // p_1131->g_369
        (VECTOR(int32_t, 4))(0x0B58B7DEL, (VECTOR(int32_t, 2))(0x0B58B7DEL, 0x21A3EE31L), 0x21A3EE31L), // p_1131->g_374
        &p_1131->g_347, // p_1131->g_386
        0UL, // p_1131->g_394
        0x69367079L, // p_1131->g_400
        {{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}},{{&p_1131->g_257,&p_1131->g_259,(void*)0,&p_1131->g_259,(void*)0,&p_1131->g_259,&p_1131->g_257,(void*)0}}}, // p_1131->g_410
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), // p_1131->g_411
        8UL, // p_1131->g_412
        0x01L, // p_1131->g_416
        (void*)0, // p_1131->g_419
        (void*)0, // p_1131->g_420
        &p_1131->g_2, // p_1131->g_436
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_1131->g_444
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L), 1L, 6L, 1L), // p_1131->g_448
        (-4L), // p_1131->g_462
        {{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386},{&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386,&p_1131->g_386}}, // p_1131->g_470
        {{&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29},{&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29,&p_1131->g_29}}, // p_1131->g_475
        {&p_1131->g_475[1][1],&p_1131->g_475[1][1],&p_1131->g_475[1][1],&p_1131->g_475[1][1],&p_1131->g_475[1][1],&p_1131->g_475[1][1]}, // p_1131->g_474
        &p_1131->g_386, // p_1131->g_483
        &p_1131->g_394, // p_1131->g_493
        &p_1131->g_493, // p_1131->g_492
        (void*)0, // p_1131->g_500
        (VECTOR(uint8_t, 2))(1UL, 249UL), // p_1131->g_508
        {0xD7A518636286F428L}, // p_1131->g_525
        0x01573C95D2DD57CFL, // p_1131->g_531
        (VECTOR(int16_t, 8))(0x01E9L, (VECTOR(int16_t, 4))(0x01E9L, (VECTOR(int16_t, 2))(0x01E9L, 1L), 1L), 1L, 0x01E9L, 1L), // p_1131->g_539
        (VECTOR(int16_t, 4))(0x2841L, (VECTOR(int16_t, 2))(0x2841L, (-6L)), (-6L)), // p_1131->g_540
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1A30L), 0x1A30L), 0x1A30L, 0L, 0x1A30L, (VECTOR(int16_t, 2))(0L, 0x1A30L), (VECTOR(int16_t, 2))(0L, 0x1A30L), 0L, 0x1A30L, 0L, 0x1A30L), // p_1131->g_542
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-8L)), (-8L)), // p_1131->g_543
        (VECTOR(int64_t, 4))(0x223350164838D6F7L, (VECTOR(int64_t, 2))(0x223350164838D6F7L, 0x1F69E9CFA0D164B0L), 0x1F69E9CFA0D164B0L), // p_1131->g_548
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xCC4AL), 0xCC4AL), 0xCC4AL, 65535UL, 0xCC4AL), // p_1131->g_641
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x345DL), 0x345DL), 0x345DL, 65535UL, 0x345DL), // p_1131->g_642
        0x2AAB10B01EBDBD82L, // p_1131->g_664
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x32E55221L), 0x32E55221L), 0x32E55221L, (-4L), 0x32E55221L), // p_1131->g_692
        (void*)0, // p_1131->g_730
        (void*)0, // p_1131->g_754
        &p_1131->g_754, // p_1131->g_753
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEE51FA4BL), 0xEE51FA4BL), 0xEE51FA4BL, 4294967295UL, 0xEE51FA4BL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEE51FA4BL), (VECTOR(uint32_t, 2))(4294967295UL, 0xEE51FA4BL), 4294967295UL, 0xEE51FA4BL, 4294967295UL, 0xEE51FA4BL), // p_1131->g_778
        &p_1131->g_255, // p_1131->g_784
        (VECTOR(int16_t, 16))(0x0428L, (VECTOR(int16_t, 4))(0x0428L, (VECTOR(int16_t, 2))(0x0428L, 0x0AFBL), 0x0AFBL), 0x0AFBL, 0x0428L, 0x0AFBL, (VECTOR(int16_t, 2))(0x0428L, 0x0AFBL), (VECTOR(int16_t, 2))(0x0428L, 0x0AFBL), 0x0428L, 0x0AFBL, 0x0428L, 0x0AFBL), // p_1131->g_812
        6UL, // p_1131->g_845
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xA7L), 0xA7L), 0xA7L, 7UL, 0xA7L, (VECTOR(uint8_t, 2))(7UL, 0xA7L), (VECTOR(uint8_t, 2))(7UL, 0xA7L), 7UL, 0xA7L, 7UL, 0xA7L), // p_1131->g_857
        (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x86L), 0x86L), // p_1131->g_859
        (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x7CL), 0x7CL), 0x7CL, 5UL, 0x7CL, (VECTOR(uint8_t, 2))(5UL, 0x7CL), (VECTOR(uint8_t, 2))(5UL, 0x7CL), 5UL, 0x7CL, 5UL, 0x7CL), // p_1131->g_860
        (VECTOR(uint8_t, 2))(0xA3L, 7UL), // p_1131->g_862
        &p_1131->g_255, // p_1131->g_877
        (VECTOR(uint16_t, 16))(0x93D3L, (VECTOR(uint16_t, 4))(0x93D3L, (VECTOR(uint16_t, 2))(0x93D3L, 0x50DFL), 0x50DFL), 0x50DFL, 0x93D3L, 0x50DFL, (VECTOR(uint16_t, 2))(0x93D3L, 0x50DFL), (VECTOR(uint16_t, 2))(0x93D3L, 0x50DFL), 0x93D3L, 0x50DFL, 0x93D3L, 0x50DFL), // p_1131->g_889
        (VECTOR(uint32_t, 16))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0UL), 0UL), 0UL, 3UL, 0UL, (VECTOR(uint32_t, 2))(3UL, 0UL), (VECTOR(uint32_t, 2))(3UL, 0UL), 3UL, 0UL, 3UL, 0UL), // p_1131->g_930
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x3872D81BL), 0x3872D81BL), 0x3872D81BL, 4294967288UL, 0x3872D81BL), // p_1131->g_952
        (VECTOR(uint16_t, 16))(0xBDA1L, (VECTOR(uint16_t, 4))(0xBDA1L, (VECTOR(uint16_t, 2))(0xBDA1L, 0x47FCL), 0x47FCL), 0x47FCL, 0xBDA1L, 0x47FCL, (VECTOR(uint16_t, 2))(0xBDA1L, 0x47FCL), (VECTOR(uint16_t, 2))(0xBDA1L, 0x47FCL), 0xBDA1L, 0x47FCL, 0xBDA1L, 0x47FCL), // p_1131->g_956
        (VECTOR(int32_t, 8))(0x7D474963L, (VECTOR(int32_t, 4))(0x7D474963L, (VECTOR(int32_t, 2))(0x7D474963L, 5L), 5L), 5L, 0x7D474963L, 5L), // p_1131->g_961
        0x01BD8BDAF2E063F4L, // p_1131->g_1015
        (VECTOR(uint16_t, 4))(0xD37BL, (VECTOR(uint16_t, 2))(0xD37BL, 0xE871L), 0xE871L), // p_1131->g_1018
        (VECTOR(int32_t, 8))(0x3A1F2952L, (VECTOR(int32_t, 4))(0x3A1F2952L, (VECTOR(int32_t, 2))(0x3A1F2952L, 0x06FDBDC5L), 0x06FDBDC5L), 0x06FDBDC5L, 0x3A1F2952L, 0x06FDBDC5L), // p_1131->g_1074
        (VECTOR(uint32_t, 2))(0x54A8C684L, 0x2186C40CL), // p_1131->g_1109
        {6UL,6UL,6UL,6UL}, // p_1131->g_1116
        0x6099116A45778344L, // p_1131->g_1127
        0, // p_1131->v_collective
        sequence_input[get_global_id(0)], // p_1131->global_0_offset
        sequence_input[get_global_id(1)], // p_1131->global_1_offset
        sequence_input[get_global_id(2)], // p_1131->global_2_offset
        sequence_input[get_local_id(0)], // p_1131->local_0_offset
        sequence_input[get_local_id(1)], // p_1131->local_1_offset
        sequence_input[get_local_id(2)], // p_1131->local_2_offset
        sequence_input[get_group_id(0)], // p_1131->group_0_offset
        sequence_input[get_group_id(1)], // p_1131->group_1_offset
        sequence_input[get_group_id(2)], // p_1131->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_1131->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1132 = c_1133;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1131);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1131->g_2, "p_1131->g_2", print_hash_value);
    transparent_crc(p_1131->g_3, "p_1131->g_3", print_hash_value);
    transparent_crc(p_1131->g_29, "p_1131->g_29", print_hash_value);
    transparent_crc(p_1131->g_48, "p_1131->g_48", print_hash_value);
    transparent_crc(p_1131->g_50, "p_1131->g_50", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1131->g_227[i][j], "p_1131->g_227[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1131->g_255, "p_1131->g_255", print_hash_value);
    transparent_crc(p_1131->g_257, "p_1131->g_257", print_hash_value);
    transparent_crc(p_1131->g_259, "p_1131->g_259", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1131->g_263[i], "p_1131->g_263[i]", print_hash_value);

    }
    transparent_crc(p_1131->g_281, "p_1131->g_281", print_hash_value);
    transparent_crc(p_1131->g_285, "p_1131->g_285", print_hash_value);
    transparent_crc(p_1131->g_289.s0, "p_1131->g_289.s0", print_hash_value);
    transparent_crc(p_1131->g_289.s1, "p_1131->g_289.s1", print_hash_value);
    transparent_crc(p_1131->g_289.s2, "p_1131->g_289.s2", print_hash_value);
    transparent_crc(p_1131->g_289.s3, "p_1131->g_289.s3", print_hash_value);
    transparent_crc(p_1131->g_289.s4, "p_1131->g_289.s4", print_hash_value);
    transparent_crc(p_1131->g_289.s5, "p_1131->g_289.s5", print_hash_value);
    transparent_crc(p_1131->g_289.s6, "p_1131->g_289.s6", print_hash_value);
    transparent_crc(p_1131->g_289.s7, "p_1131->g_289.s7", print_hash_value);
    transparent_crc(p_1131->g_289.s8, "p_1131->g_289.s8", print_hash_value);
    transparent_crc(p_1131->g_289.s9, "p_1131->g_289.s9", print_hash_value);
    transparent_crc(p_1131->g_289.sa, "p_1131->g_289.sa", print_hash_value);
    transparent_crc(p_1131->g_289.sb, "p_1131->g_289.sb", print_hash_value);
    transparent_crc(p_1131->g_289.sc, "p_1131->g_289.sc", print_hash_value);
    transparent_crc(p_1131->g_289.sd, "p_1131->g_289.sd", print_hash_value);
    transparent_crc(p_1131->g_289.se, "p_1131->g_289.se", print_hash_value);
    transparent_crc(p_1131->g_289.sf, "p_1131->g_289.sf", print_hash_value);
    transparent_crc(p_1131->g_312.s0, "p_1131->g_312.s0", print_hash_value);
    transparent_crc(p_1131->g_312.s1, "p_1131->g_312.s1", print_hash_value);
    transparent_crc(p_1131->g_312.s2, "p_1131->g_312.s2", print_hash_value);
    transparent_crc(p_1131->g_312.s3, "p_1131->g_312.s3", print_hash_value);
    transparent_crc(p_1131->g_312.s4, "p_1131->g_312.s4", print_hash_value);
    transparent_crc(p_1131->g_312.s5, "p_1131->g_312.s5", print_hash_value);
    transparent_crc(p_1131->g_312.s6, "p_1131->g_312.s6", print_hash_value);
    transparent_crc(p_1131->g_312.s7, "p_1131->g_312.s7", print_hash_value);
    transparent_crc(p_1131->g_329.x, "p_1131->g_329.x", print_hash_value);
    transparent_crc(p_1131->g_329.y, "p_1131->g_329.y", print_hash_value);
    transparent_crc(p_1131->g_329.z, "p_1131->g_329.z", print_hash_value);
    transparent_crc(p_1131->g_329.w, "p_1131->g_329.w", print_hash_value);
    transparent_crc(p_1131->g_330.s0, "p_1131->g_330.s0", print_hash_value);
    transparent_crc(p_1131->g_330.s1, "p_1131->g_330.s1", print_hash_value);
    transparent_crc(p_1131->g_330.s2, "p_1131->g_330.s2", print_hash_value);
    transparent_crc(p_1131->g_330.s3, "p_1131->g_330.s3", print_hash_value);
    transparent_crc(p_1131->g_330.s4, "p_1131->g_330.s4", print_hash_value);
    transparent_crc(p_1131->g_330.s5, "p_1131->g_330.s5", print_hash_value);
    transparent_crc(p_1131->g_330.s6, "p_1131->g_330.s6", print_hash_value);
    transparent_crc(p_1131->g_330.s7, "p_1131->g_330.s7", print_hash_value);
    transparent_crc(p_1131->g_330.s8, "p_1131->g_330.s8", print_hash_value);
    transparent_crc(p_1131->g_330.s9, "p_1131->g_330.s9", print_hash_value);
    transparent_crc(p_1131->g_330.sa, "p_1131->g_330.sa", print_hash_value);
    transparent_crc(p_1131->g_330.sb, "p_1131->g_330.sb", print_hash_value);
    transparent_crc(p_1131->g_330.sc, "p_1131->g_330.sc", print_hash_value);
    transparent_crc(p_1131->g_330.sd, "p_1131->g_330.sd", print_hash_value);
    transparent_crc(p_1131->g_330.se, "p_1131->g_330.se", print_hash_value);
    transparent_crc(p_1131->g_330.sf, "p_1131->g_330.sf", print_hash_value);
    transparent_crc(p_1131->g_344, "p_1131->g_344", print_hash_value);
    transparent_crc(p_1131->g_347, "p_1131->g_347", print_hash_value);
    transparent_crc(p_1131->g_374.x, "p_1131->g_374.x", print_hash_value);
    transparent_crc(p_1131->g_374.y, "p_1131->g_374.y", print_hash_value);
    transparent_crc(p_1131->g_374.z, "p_1131->g_374.z", print_hash_value);
    transparent_crc(p_1131->g_374.w, "p_1131->g_374.w", print_hash_value);
    transparent_crc(p_1131->g_394, "p_1131->g_394", print_hash_value);
    transparent_crc(p_1131->g_400, "p_1131->g_400", print_hash_value);
    transparent_crc(p_1131->g_411.x, "p_1131->g_411.x", print_hash_value);
    transparent_crc(p_1131->g_411.y, "p_1131->g_411.y", print_hash_value);
    transparent_crc(p_1131->g_411.z, "p_1131->g_411.z", print_hash_value);
    transparent_crc(p_1131->g_411.w, "p_1131->g_411.w", print_hash_value);
    transparent_crc(p_1131->g_412, "p_1131->g_412", print_hash_value);
    transparent_crc(p_1131->g_416, "p_1131->g_416", print_hash_value);
    transparent_crc(p_1131->g_444.s0, "p_1131->g_444.s0", print_hash_value);
    transparent_crc(p_1131->g_444.s1, "p_1131->g_444.s1", print_hash_value);
    transparent_crc(p_1131->g_444.s2, "p_1131->g_444.s2", print_hash_value);
    transparent_crc(p_1131->g_444.s3, "p_1131->g_444.s3", print_hash_value);
    transparent_crc(p_1131->g_444.s4, "p_1131->g_444.s4", print_hash_value);
    transparent_crc(p_1131->g_444.s5, "p_1131->g_444.s5", print_hash_value);
    transparent_crc(p_1131->g_444.s6, "p_1131->g_444.s6", print_hash_value);
    transparent_crc(p_1131->g_444.s7, "p_1131->g_444.s7", print_hash_value);
    transparent_crc(p_1131->g_448.s0, "p_1131->g_448.s0", print_hash_value);
    transparent_crc(p_1131->g_448.s1, "p_1131->g_448.s1", print_hash_value);
    transparent_crc(p_1131->g_448.s2, "p_1131->g_448.s2", print_hash_value);
    transparent_crc(p_1131->g_448.s3, "p_1131->g_448.s3", print_hash_value);
    transparent_crc(p_1131->g_448.s4, "p_1131->g_448.s4", print_hash_value);
    transparent_crc(p_1131->g_448.s5, "p_1131->g_448.s5", print_hash_value);
    transparent_crc(p_1131->g_448.s6, "p_1131->g_448.s6", print_hash_value);
    transparent_crc(p_1131->g_448.s7, "p_1131->g_448.s7", print_hash_value);
    transparent_crc(p_1131->g_462, "p_1131->g_462", print_hash_value);
    transparent_crc(p_1131->g_508.x, "p_1131->g_508.x", print_hash_value);
    transparent_crc(p_1131->g_508.y, "p_1131->g_508.y", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1131->g_525[i], "p_1131->g_525[i]", print_hash_value);

    }
    transparent_crc(p_1131->g_531, "p_1131->g_531", print_hash_value);
    transparent_crc(p_1131->g_539.s0, "p_1131->g_539.s0", print_hash_value);
    transparent_crc(p_1131->g_539.s1, "p_1131->g_539.s1", print_hash_value);
    transparent_crc(p_1131->g_539.s2, "p_1131->g_539.s2", print_hash_value);
    transparent_crc(p_1131->g_539.s3, "p_1131->g_539.s3", print_hash_value);
    transparent_crc(p_1131->g_539.s4, "p_1131->g_539.s4", print_hash_value);
    transparent_crc(p_1131->g_539.s5, "p_1131->g_539.s5", print_hash_value);
    transparent_crc(p_1131->g_539.s6, "p_1131->g_539.s6", print_hash_value);
    transparent_crc(p_1131->g_539.s7, "p_1131->g_539.s7", print_hash_value);
    transparent_crc(p_1131->g_540.x, "p_1131->g_540.x", print_hash_value);
    transparent_crc(p_1131->g_540.y, "p_1131->g_540.y", print_hash_value);
    transparent_crc(p_1131->g_540.z, "p_1131->g_540.z", print_hash_value);
    transparent_crc(p_1131->g_540.w, "p_1131->g_540.w", print_hash_value);
    transparent_crc(p_1131->g_542.s0, "p_1131->g_542.s0", print_hash_value);
    transparent_crc(p_1131->g_542.s1, "p_1131->g_542.s1", print_hash_value);
    transparent_crc(p_1131->g_542.s2, "p_1131->g_542.s2", print_hash_value);
    transparent_crc(p_1131->g_542.s3, "p_1131->g_542.s3", print_hash_value);
    transparent_crc(p_1131->g_542.s4, "p_1131->g_542.s4", print_hash_value);
    transparent_crc(p_1131->g_542.s5, "p_1131->g_542.s5", print_hash_value);
    transparent_crc(p_1131->g_542.s6, "p_1131->g_542.s6", print_hash_value);
    transparent_crc(p_1131->g_542.s7, "p_1131->g_542.s7", print_hash_value);
    transparent_crc(p_1131->g_542.s8, "p_1131->g_542.s8", print_hash_value);
    transparent_crc(p_1131->g_542.s9, "p_1131->g_542.s9", print_hash_value);
    transparent_crc(p_1131->g_542.sa, "p_1131->g_542.sa", print_hash_value);
    transparent_crc(p_1131->g_542.sb, "p_1131->g_542.sb", print_hash_value);
    transparent_crc(p_1131->g_542.sc, "p_1131->g_542.sc", print_hash_value);
    transparent_crc(p_1131->g_542.sd, "p_1131->g_542.sd", print_hash_value);
    transparent_crc(p_1131->g_542.se, "p_1131->g_542.se", print_hash_value);
    transparent_crc(p_1131->g_542.sf, "p_1131->g_542.sf", print_hash_value);
    transparent_crc(p_1131->g_543.x, "p_1131->g_543.x", print_hash_value);
    transparent_crc(p_1131->g_543.y, "p_1131->g_543.y", print_hash_value);
    transparent_crc(p_1131->g_543.z, "p_1131->g_543.z", print_hash_value);
    transparent_crc(p_1131->g_543.w, "p_1131->g_543.w", print_hash_value);
    transparent_crc(p_1131->g_548.x, "p_1131->g_548.x", print_hash_value);
    transparent_crc(p_1131->g_548.y, "p_1131->g_548.y", print_hash_value);
    transparent_crc(p_1131->g_548.z, "p_1131->g_548.z", print_hash_value);
    transparent_crc(p_1131->g_548.w, "p_1131->g_548.w", print_hash_value);
    transparent_crc(p_1131->g_641.s0, "p_1131->g_641.s0", print_hash_value);
    transparent_crc(p_1131->g_641.s1, "p_1131->g_641.s1", print_hash_value);
    transparent_crc(p_1131->g_641.s2, "p_1131->g_641.s2", print_hash_value);
    transparent_crc(p_1131->g_641.s3, "p_1131->g_641.s3", print_hash_value);
    transparent_crc(p_1131->g_641.s4, "p_1131->g_641.s4", print_hash_value);
    transparent_crc(p_1131->g_641.s5, "p_1131->g_641.s5", print_hash_value);
    transparent_crc(p_1131->g_641.s6, "p_1131->g_641.s6", print_hash_value);
    transparent_crc(p_1131->g_641.s7, "p_1131->g_641.s7", print_hash_value);
    transparent_crc(p_1131->g_642.s0, "p_1131->g_642.s0", print_hash_value);
    transparent_crc(p_1131->g_642.s1, "p_1131->g_642.s1", print_hash_value);
    transparent_crc(p_1131->g_642.s2, "p_1131->g_642.s2", print_hash_value);
    transparent_crc(p_1131->g_642.s3, "p_1131->g_642.s3", print_hash_value);
    transparent_crc(p_1131->g_642.s4, "p_1131->g_642.s4", print_hash_value);
    transparent_crc(p_1131->g_642.s5, "p_1131->g_642.s5", print_hash_value);
    transparent_crc(p_1131->g_642.s6, "p_1131->g_642.s6", print_hash_value);
    transparent_crc(p_1131->g_642.s7, "p_1131->g_642.s7", print_hash_value);
    transparent_crc(p_1131->g_664, "p_1131->g_664", print_hash_value);
    transparent_crc(p_1131->g_692.s0, "p_1131->g_692.s0", print_hash_value);
    transparent_crc(p_1131->g_692.s1, "p_1131->g_692.s1", print_hash_value);
    transparent_crc(p_1131->g_692.s2, "p_1131->g_692.s2", print_hash_value);
    transparent_crc(p_1131->g_692.s3, "p_1131->g_692.s3", print_hash_value);
    transparent_crc(p_1131->g_692.s4, "p_1131->g_692.s4", print_hash_value);
    transparent_crc(p_1131->g_692.s5, "p_1131->g_692.s5", print_hash_value);
    transparent_crc(p_1131->g_692.s6, "p_1131->g_692.s6", print_hash_value);
    transparent_crc(p_1131->g_692.s7, "p_1131->g_692.s7", print_hash_value);
    transparent_crc(p_1131->g_778.s0, "p_1131->g_778.s0", print_hash_value);
    transparent_crc(p_1131->g_778.s1, "p_1131->g_778.s1", print_hash_value);
    transparent_crc(p_1131->g_778.s2, "p_1131->g_778.s2", print_hash_value);
    transparent_crc(p_1131->g_778.s3, "p_1131->g_778.s3", print_hash_value);
    transparent_crc(p_1131->g_778.s4, "p_1131->g_778.s4", print_hash_value);
    transparent_crc(p_1131->g_778.s5, "p_1131->g_778.s5", print_hash_value);
    transparent_crc(p_1131->g_778.s6, "p_1131->g_778.s6", print_hash_value);
    transparent_crc(p_1131->g_778.s7, "p_1131->g_778.s7", print_hash_value);
    transparent_crc(p_1131->g_778.s8, "p_1131->g_778.s8", print_hash_value);
    transparent_crc(p_1131->g_778.s9, "p_1131->g_778.s9", print_hash_value);
    transparent_crc(p_1131->g_778.sa, "p_1131->g_778.sa", print_hash_value);
    transparent_crc(p_1131->g_778.sb, "p_1131->g_778.sb", print_hash_value);
    transparent_crc(p_1131->g_778.sc, "p_1131->g_778.sc", print_hash_value);
    transparent_crc(p_1131->g_778.sd, "p_1131->g_778.sd", print_hash_value);
    transparent_crc(p_1131->g_778.se, "p_1131->g_778.se", print_hash_value);
    transparent_crc(p_1131->g_778.sf, "p_1131->g_778.sf", print_hash_value);
    transparent_crc(p_1131->g_812.s0, "p_1131->g_812.s0", print_hash_value);
    transparent_crc(p_1131->g_812.s1, "p_1131->g_812.s1", print_hash_value);
    transparent_crc(p_1131->g_812.s2, "p_1131->g_812.s2", print_hash_value);
    transparent_crc(p_1131->g_812.s3, "p_1131->g_812.s3", print_hash_value);
    transparent_crc(p_1131->g_812.s4, "p_1131->g_812.s4", print_hash_value);
    transparent_crc(p_1131->g_812.s5, "p_1131->g_812.s5", print_hash_value);
    transparent_crc(p_1131->g_812.s6, "p_1131->g_812.s6", print_hash_value);
    transparent_crc(p_1131->g_812.s7, "p_1131->g_812.s7", print_hash_value);
    transparent_crc(p_1131->g_812.s8, "p_1131->g_812.s8", print_hash_value);
    transparent_crc(p_1131->g_812.s9, "p_1131->g_812.s9", print_hash_value);
    transparent_crc(p_1131->g_812.sa, "p_1131->g_812.sa", print_hash_value);
    transparent_crc(p_1131->g_812.sb, "p_1131->g_812.sb", print_hash_value);
    transparent_crc(p_1131->g_812.sc, "p_1131->g_812.sc", print_hash_value);
    transparent_crc(p_1131->g_812.sd, "p_1131->g_812.sd", print_hash_value);
    transparent_crc(p_1131->g_812.se, "p_1131->g_812.se", print_hash_value);
    transparent_crc(p_1131->g_812.sf, "p_1131->g_812.sf", print_hash_value);
    transparent_crc(p_1131->g_845, "p_1131->g_845", print_hash_value);
    transparent_crc(p_1131->g_857.s0, "p_1131->g_857.s0", print_hash_value);
    transparent_crc(p_1131->g_857.s1, "p_1131->g_857.s1", print_hash_value);
    transparent_crc(p_1131->g_857.s2, "p_1131->g_857.s2", print_hash_value);
    transparent_crc(p_1131->g_857.s3, "p_1131->g_857.s3", print_hash_value);
    transparent_crc(p_1131->g_857.s4, "p_1131->g_857.s4", print_hash_value);
    transparent_crc(p_1131->g_857.s5, "p_1131->g_857.s5", print_hash_value);
    transparent_crc(p_1131->g_857.s6, "p_1131->g_857.s6", print_hash_value);
    transparent_crc(p_1131->g_857.s7, "p_1131->g_857.s7", print_hash_value);
    transparent_crc(p_1131->g_857.s8, "p_1131->g_857.s8", print_hash_value);
    transparent_crc(p_1131->g_857.s9, "p_1131->g_857.s9", print_hash_value);
    transparent_crc(p_1131->g_857.sa, "p_1131->g_857.sa", print_hash_value);
    transparent_crc(p_1131->g_857.sb, "p_1131->g_857.sb", print_hash_value);
    transparent_crc(p_1131->g_857.sc, "p_1131->g_857.sc", print_hash_value);
    transparent_crc(p_1131->g_857.sd, "p_1131->g_857.sd", print_hash_value);
    transparent_crc(p_1131->g_857.se, "p_1131->g_857.se", print_hash_value);
    transparent_crc(p_1131->g_857.sf, "p_1131->g_857.sf", print_hash_value);
    transparent_crc(p_1131->g_859.x, "p_1131->g_859.x", print_hash_value);
    transparent_crc(p_1131->g_859.y, "p_1131->g_859.y", print_hash_value);
    transparent_crc(p_1131->g_859.z, "p_1131->g_859.z", print_hash_value);
    transparent_crc(p_1131->g_859.w, "p_1131->g_859.w", print_hash_value);
    transparent_crc(p_1131->g_860.s0, "p_1131->g_860.s0", print_hash_value);
    transparent_crc(p_1131->g_860.s1, "p_1131->g_860.s1", print_hash_value);
    transparent_crc(p_1131->g_860.s2, "p_1131->g_860.s2", print_hash_value);
    transparent_crc(p_1131->g_860.s3, "p_1131->g_860.s3", print_hash_value);
    transparent_crc(p_1131->g_860.s4, "p_1131->g_860.s4", print_hash_value);
    transparent_crc(p_1131->g_860.s5, "p_1131->g_860.s5", print_hash_value);
    transparent_crc(p_1131->g_860.s6, "p_1131->g_860.s6", print_hash_value);
    transparent_crc(p_1131->g_860.s7, "p_1131->g_860.s7", print_hash_value);
    transparent_crc(p_1131->g_860.s8, "p_1131->g_860.s8", print_hash_value);
    transparent_crc(p_1131->g_860.s9, "p_1131->g_860.s9", print_hash_value);
    transparent_crc(p_1131->g_860.sa, "p_1131->g_860.sa", print_hash_value);
    transparent_crc(p_1131->g_860.sb, "p_1131->g_860.sb", print_hash_value);
    transparent_crc(p_1131->g_860.sc, "p_1131->g_860.sc", print_hash_value);
    transparent_crc(p_1131->g_860.sd, "p_1131->g_860.sd", print_hash_value);
    transparent_crc(p_1131->g_860.se, "p_1131->g_860.se", print_hash_value);
    transparent_crc(p_1131->g_860.sf, "p_1131->g_860.sf", print_hash_value);
    transparent_crc(p_1131->g_862.x, "p_1131->g_862.x", print_hash_value);
    transparent_crc(p_1131->g_862.y, "p_1131->g_862.y", print_hash_value);
    transparent_crc(p_1131->g_889.s0, "p_1131->g_889.s0", print_hash_value);
    transparent_crc(p_1131->g_889.s1, "p_1131->g_889.s1", print_hash_value);
    transparent_crc(p_1131->g_889.s2, "p_1131->g_889.s2", print_hash_value);
    transparent_crc(p_1131->g_889.s3, "p_1131->g_889.s3", print_hash_value);
    transparent_crc(p_1131->g_889.s4, "p_1131->g_889.s4", print_hash_value);
    transparent_crc(p_1131->g_889.s5, "p_1131->g_889.s5", print_hash_value);
    transparent_crc(p_1131->g_889.s6, "p_1131->g_889.s6", print_hash_value);
    transparent_crc(p_1131->g_889.s7, "p_1131->g_889.s7", print_hash_value);
    transparent_crc(p_1131->g_889.s8, "p_1131->g_889.s8", print_hash_value);
    transparent_crc(p_1131->g_889.s9, "p_1131->g_889.s9", print_hash_value);
    transparent_crc(p_1131->g_889.sa, "p_1131->g_889.sa", print_hash_value);
    transparent_crc(p_1131->g_889.sb, "p_1131->g_889.sb", print_hash_value);
    transparent_crc(p_1131->g_889.sc, "p_1131->g_889.sc", print_hash_value);
    transparent_crc(p_1131->g_889.sd, "p_1131->g_889.sd", print_hash_value);
    transparent_crc(p_1131->g_889.se, "p_1131->g_889.se", print_hash_value);
    transparent_crc(p_1131->g_889.sf, "p_1131->g_889.sf", print_hash_value);
    transparent_crc(p_1131->g_930.s0, "p_1131->g_930.s0", print_hash_value);
    transparent_crc(p_1131->g_930.s1, "p_1131->g_930.s1", print_hash_value);
    transparent_crc(p_1131->g_930.s2, "p_1131->g_930.s2", print_hash_value);
    transparent_crc(p_1131->g_930.s3, "p_1131->g_930.s3", print_hash_value);
    transparent_crc(p_1131->g_930.s4, "p_1131->g_930.s4", print_hash_value);
    transparent_crc(p_1131->g_930.s5, "p_1131->g_930.s5", print_hash_value);
    transparent_crc(p_1131->g_930.s6, "p_1131->g_930.s6", print_hash_value);
    transparent_crc(p_1131->g_930.s7, "p_1131->g_930.s7", print_hash_value);
    transparent_crc(p_1131->g_930.s8, "p_1131->g_930.s8", print_hash_value);
    transparent_crc(p_1131->g_930.s9, "p_1131->g_930.s9", print_hash_value);
    transparent_crc(p_1131->g_930.sa, "p_1131->g_930.sa", print_hash_value);
    transparent_crc(p_1131->g_930.sb, "p_1131->g_930.sb", print_hash_value);
    transparent_crc(p_1131->g_930.sc, "p_1131->g_930.sc", print_hash_value);
    transparent_crc(p_1131->g_930.sd, "p_1131->g_930.sd", print_hash_value);
    transparent_crc(p_1131->g_930.se, "p_1131->g_930.se", print_hash_value);
    transparent_crc(p_1131->g_930.sf, "p_1131->g_930.sf", print_hash_value);
    transparent_crc(p_1131->g_952.s0, "p_1131->g_952.s0", print_hash_value);
    transparent_crc(p_1131->g_952.s1, "p_1131->g_952.s1", print_hash_value);
    transparent_crc(p_1131->g_952.s2, "p_1131->g_952.s2", print_hash_value);
    transparent_crc(p_1131->g_952.s3, "p_1131->g_952.s3", print_hash_value);
    transparent_crc(p_1131->g_952.s4, "p_1131->g_952.s4", print_hash_value);
    transparent_crc(p_1131->g_952.s5, "p_1131->g_952.s5", print_hash_value);
    transparent_crc(p_1131->g_952.s6, "p_1131->g_952.s6", print_hash_value);
    transparent_crc(p_1131->g_952.s7, "p_1131->g_952.s7", print_hash_value);
    transparent_crc(p_1131->g_956.s0, "p_1131->g_956.s0", print_hash_value);
    transparent_crc(p_1131->g_956.s1, "p_1131->g_956.s1", print_hash_value);
    transparent_crc(p_1131->g_956.s2, "p_1131->g_956.s2", print_hash_value);
    transparent_crc(p_1131->g_956.s3, "p_1131->g_956.s3", print_hash_value);
    transparent_crc(p_1131->g_956.s4, "p_1131->g_956.s4", print_hash_value);
    transparent_crc(p_1131->g_956.s5, "p_1131->g_956.s5", print_hash_value);
    transparent_crc(p_1131->g_956.s6, "p_1131->g_956.s6", print_hash_value);
    transparent_crc(p_1131->g_956.s7, "p_1131->g_956.s7", print_hash_value);
    transparent_crc(p_1131->g_956.s8, "p_1131->g_956.s8", print_hash_value);
    transparent_crc(p_1131->g_956.s9, "p_1131->g_956.s9", print_hash_value);
    transparent_crc(p_1131->g_956.sa, "p_1131->g_956.sa", print_hash_value);
    transparent_crc(p_1131->g_956.sb, "p_1131->g_956.sb", print_hash_value);
    transparent_crc(p_1131->g_956.sc, "p_1131->g_956.sc", print_hash_value);
    transparent_crc(p_1131->g_956.sd, "p_1131->g_956.sd", print_hash_value);
    transparent_crc(p_1131->g_956.se, "p_1131->g_956.se", print_hash_value);
    transparent_crc(p_1131->g_956.sf, "p_1131->g_956.sf", print_hash_value);
    transparent_crc(p_1131->g_961.s0, "p_1131->g_961.s0", print_hash_value);
    transparent_crc(p_1131->g_961.s1, "p_1131->g_961.s1", print_hash_value);
    transparent_crc(p_1131->g_961.s2, "p_1131->g_961.s2", print_hash_value);
    transparent_crc(p_1131->g_961.s3, "p_1131->g_961.s3", print_hash_value);
    transparent_crc(p_1131->g_961.s4, "p_1131->g_961.s4", print_hash_value);
    transparent_crc(p_1131->g_961.s5, "p_1131->g_961.s5", print_hash_value);
    transparent_crc(p_1131->g_961.s6, "p_1131->g_961.s6", print_hash_value);
    transparent_crc(p_1131->g_961.s7, "p_1131->g_961.s7", print_hash_value);
    transparent_crc(p_1131->g_1015, "p_1131->g_1015", print_hash_value);
    transparent_crc(p_1131->g_1018.x, "p_1131->g_1018.x", print_hash_value);
    transparent_crc(p_1131->g_1018.y, "p_1131->g_1018.y", print_hash_value);
    transparent_crc(p_1131->g_1018.z, "p_1131->g_1018.z", print_hash_value);
    transparent_crc(p_1131->g_1018.w, "p_1131->g_1018.w", print_hash_value);
    transparent_crc(p_1131->g_1074.s0, "p_1131->g_1074.s0", print_hash_value);
    transparent_crc(p_1131->g_1074.s1, "p_1131->g_1074.s1", print_hash_value);
    transparent_crc(p_1131->g_1074.s2, "p_1131->g_1074.s2", print_hash_value);
    transparent_crc(p_1131->g_1074.s3, "p_1131->g_1074.s3", print_hash_value);
    transparent_crc(p_1131->g_1074.s4, "p_1131->g_1074.s4", print_hash_value);
    transparent_crc(p_1131->g_1074.s5, "p_1131->g_1074.s5", print_hash_value);
    transparent_crc(p_1131->g_1074.s6, "p_1131->g_1074.s6", print_hash_value);
    transparent_crc(p_1131->g_1074.s7, "p_1131->g_1074.s7", print_hash_value);
    transparent_crc(p_1131->g_1109.x, "p_1131->g_1109.x", print_hash_value);
    transparent_crc(p_1131->g_1109.y, "p_1131->g_1109.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1131->g_1116[i], "p_1131->g_1116[i]", print_hash_value);

    }
    transparent_crc(p_1131->g_1127, "p_1131->g_1127", print_hash_value);
    transparent_crc(p_1131->v_collective, "p_1131->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 55; i++)
            transparent_crc(p_1131->g_special_values[i + 55 * get_linear_group_id()], "p_1131->g_special_values[i + 55 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 55; i++)
            transparent_crc(p_1131->l_special_values[i], "p_1131->l_special_values[i]", print_hash_value);
    transparent_crc(p_1131->l_comm_values[get_linear_local_id()], "p_1131->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1131->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_1131->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
