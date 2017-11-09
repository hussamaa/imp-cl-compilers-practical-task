// --atomics 95 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 77,83,1 -l 11,1,1
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

__constant uint32_t permutations[10][11] = {
{8,3,9,0,6,10,5,2,7,1,4}, // permutation 0
{6,3,10,4,9,7,1,0,8,5,2}, // permutation 1
{8,0,7,9,2,10,3,6,4,1,5}, // permutation 2
{1,3,2,6,8,4,5,0,9,7,10}, // permutation 3
{9,5,0,8,7,3,4,10,2,6,1}, // permutation 4
{2,3,4,9,7,1,8,5,6,0,10}, // permutation 5
{1,4,10,2,0,3,5,9,7,8,6}, // permutation 6
{8,9,5,10,6,2,7,0,3,4,1}, // permutation 7
{1,9,7,8,5,10,3,4,6,0,2}, // permutation 8
{4,7,9,6,2,3,10,0,5,8,1} // permutation 9
};

// Seed: 2282531308

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   int32_t  f1;
   uint8_t  f2;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    VECTOR(uint8_t, 8) g_21;
    uint16_t g_39;
    volatile uint16_t g_64;
    volatile uint16_t *g_63;
    uint16_t g_72;
    uint16_t *g_71[2];
    uint8_t g_87;
    int32_t g_90;
    uint32_t g_91;
    uint64_t g_96[6][5];
    int32_t g_121[4][5][5];
    uint8_t g_142;
    int8_t g_145;
    int16_t g_147;
    uint8_t *g_160[4];
    uint8_t g_195;
    uint64_t g_224;
    VECTOR(int64_t, 8) g_246;
    uint32_t g_269[9][3];
    volatile int32_t * volatile *g_270;
    VECTOR(int16_t, 8) g_283;
    uint64_t *g_285[8];
    VECTOR(int8_t, 4) g_286;
    VECTOR(int8_t, 8) g_287;
    VECTOR(int8_t, 4) g_288;
    VECTOR(uint64_t, 2) g_301;
    uint32_t g_306;
    int32_t *g_319[3];
    VECTOR(int8_t, 16) g_342;
    int16_t *g_349;
    VECTOR(uint32_t, 16) g_374;
    VECTOR(uint32_t, 16) g_377;
    VECTOR(int64_t, 4) g_391;
    int16_t g_393;
    VECTOR(int32_t, 8) g_397;
    VECTOR(int64_t, 4) g_435;
    VECTOR(int32_t, 4) g_458;
    volatile int16_t * volatile **g_541;
    uint32_t g_546;
    VECTOR(uint32_t, 4) g_581;
    VECTOR(int16_t, 4) g_582;
    VECTOR(uint8_t, 16) g_584;
    VECTOR(uint8_t, 4) g_590;
    int8_t g_620;
    VECTOR(int8_t, 4) g_628;
    VECTOR(int32_t, 4) g_632;
    VECTOR(int32_t, 4) g_633;
    VECTOR(uint8_t, 8) g_643;
    VECTOR(int32_t, 8) g_671;
    int64_t g_679;
    uint32_t g_681[9];
    VECTOR(int8_t, 4) g_746;
    int16_t **g_768;
    int16_t ***g_767[2][8];
    uint32_t g_770;
    int32_t g_771;
    uint64_t g_772;
    struct S0 g_775;
    uint16_t **g_834[2][5];
    uint16_t *** volatile g_833;
    VECTOR(uint16_t, 4) g_836;
    volatile VECTOR(uint8_t, 8) g_845;
    volatile VECTOR(uint8_t, 4) g_846;
    volatile VECTOR(int16_t, 16) g_852;
    volatile VECTOR(int16_t, 16) g_853;
    volatile struct S0 g_856;
    volatile struct S0 * volatile g_857;
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
uint16_t  func_1(struct S1 * p_862);
struct S0  func_7(uint32_t  p_8, int32_t  p_9, int32_t  p_10, struct S1 * p_862);
int32_t  func_11(uint32_t  p_12, struct S1 * p_862);
int32_t  func_24(uint16_t  p_25, uint32_t  p_26, int64_t  p_27, uint16_t  p_28, int64_t  p_29, struct S1 * p_862);
uint16_t  func_30(int64_t  p_31, uint32_t  p_32, int64_t  p_33, struct S1 * p_862);
int8_t  func_42(uint64_t  p_43, uint16_t * p_44, int32_t  p_45, uint32_t  p_46, uint16_t * p_47, struct S1 * p_862);
int64_t  func_53(uint32_t  p_54, int32_t  p_55, uint16_t * p_56, struct S1 * p_862);
uint32_t  func_57(uint8_t  p_58, uint16_t * p_59, uint32_t  p_60, uint64_t  p_61, uint16_t * p_62, struct S1 * p_862);
int16_t  func_81(int32_t  p_82, uint16_t * p_83, int64_t  p_84, struct S1 * p_862);
uint16_t * func_92(uint64_t  p_93, struct S1 * p_862);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_862->g_4 p_862->g_3 p_862->g_590 p_862->g_620 p_862->g_374 p_862->g_comm_values p_862->g_287 p_862->g_584 p_862->g_121 p_862->g_681 p_862->g_435 p_862->g_224 p_862->g_195 p_862->g_145 p_862->g_643 p_862->g_397 p_862->g_771 p_862->g_772 p_862->g_288 p_862->g_833 p_862->g_775 p_862->g_836 p_862->g_845 p_862->g_846 p_862->g_852 p_862->g_853 p_862->g_856 p_862->g_857 p_862->g_147
 * writes: p_862->g_4 p_862->g_620 p_862->g_195 p_862->g_147 p_862->g_319 p_862->g_121 p_862->g_681 p_862->g_224 p_862->g_145 p_862->g_834 p_862->g_775 p_862->g_856
 */
uint16_t  func_1(struct S1 * p_862)
{ /* block id: 4 */
    uint32_t l_73 = 0x5D7B1ECBL;
    uint16_t *l_74 = &p_862->g_72;
    uint64_t l_370 = 18446744073709551612UL;
    int16_t l_371 = 0x0C2BL;
    uint32_t l_617 = 1UL;
    int64_t l_837 = 0x39EA69879149F584L;
    VECTOR(uint16_t, 16) l_844 = (VECTOR(uint16_t, 16))(0x99C4L, (VECTOR(uint16_t, 4))(0x99C4L, (VECTOR(uint16_t, 2))(0x99C4L, 0UL), 0UL), 0UL, 0x99C4L, 0UL, (VECTOR(uint16_t, 2))(0x99C4L, 0UL), (VECTOR(uint16_t, 2))(0x99C4L, 0UL), 0x99C4L, 0UL, 0x99C4L, 0UL);
    VECTOR(uint8_t, 16) l_847 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 2UL), 2UL), 2UL, 9UL, 2UL, (VECTOR(uint8_t, 2))(9UL, 2UL), (VECTOR(uint8_t, 2))(9UL, 2UL), 9UL, 2UL, 9UL, 2UL);
    VECTOR(uint8_t, 16) l_848 = (VECTOR(uint8_t, 16))(0x5BL, (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 255UL), 255UL), 255UL, 0x5BL, 255UL, (VECTOR(uint8_t, 2))(0x5BL, 255UL), (VECTOR(uint8_t, 2))(0x5BL, 255UL), 0x5BL, 255UL, 0x5BL, 255UL);
    VECTOR(uint8_t, 16) l_849 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xCCL), 0xCCL), 0xCCL, 255UL, 0xCCL, (VECTOR(uint8_t, 2))(255UL, 0xCCL), (VECTOR(uint8_t, 2))(255UL, 0xCCL), 255UL, 0xCCL, 255UL, 0xCCL);
    VECTOR(uint8_t, 2) l_850 = (VECTOR(uint8_t, 2))(0x5AL, 0UL);
    VECTOR(int16_t, 16) l_851 = (VECTOR(int16_t, 16))(0x4635L, (VECTOR(int16_t, 4))(0x4635L, (VECTOR(int16_t, 2))(0x4635L, 6L), 6L), 6L, 0x4635L, 6L, (VECTOR(int16_t, 2))(0x4635L, 6L), (VECTOR(int16_t, 2))(0x4635L, 6L), 0x4635L, 6L, 0x4635L, 6L);
    VECTOR(uint32_t, 8) l_854 = (VECTOR(uint32_t, 8))(0x19CA8CCCL, (VECTOR(uint32_t, 4))(0x19CA8CCCL, (VECTOR(uint32_t, 2))(0x19CA8CCCL, 0x0C836321L), 0x0C836321L), 0x0C836321L, 0x19CA8CCCL, 0x0C836321L);
    int32_t *l_855 = &p_862->g_121[3][0][4];
    int i;
    for (p_862->g_4 = 13; (p_862->g_4 == (-4)); p_862->g_4 = safe_sub_func_int8_t_s_s(p_862->g_4, 6))
    { /* block id: 7 */
        uint16_t *l_38 = &p_862->g_39;
        VECTOR(int8_t, 16) l_50 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        int8_t *l_618 = (void*)0;
        int8_t *l_619 = &p_862->g_620;
        uint32_t *l_621 = (void*)0;
        uint32_t *l_622 = &l_73;
        struct S0 *l_835 = (void*)0;
        int i;
        p_862->g_775 = func_7(p_862->g_3, func_11(((*l_622) = (safe_rshift_func_int16_t_s_s((((*l_619) |= (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(4L, 0x6229EDCAL, 1L, (-8L))).even, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(0x1D089051L, 0x66BC657EL)).yyxyyyxy, (int32_t)(((safe_lshift_func_uint16_t_u_s(p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))], ((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_862->g_21.s2305067217751671)).s1, (((((safe_mod_func_uint32_t_u_u(p_862->g_4, func_24(func_30((safe_mul_func_uint16_t_u_u((p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))] >= 1UL), ((safe_lshift_func_uint16_t_u_u((++(*l_38)), 11)) == func_42(((safe_sub_func_int32_t_s_s((((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(l_50.s23e2)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xBFBC35CFL, 0x5DBFE6B8L)).yxxxyyxyyxyxyxyx)))).sb | ((safe_add_func_int64_t_s_s(func_53(func_57(((l_50.s0 == (p_862->g_63 == ((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((-10L), 0x2BL)), p_862->g_4)), 0x6BF6L)) , l_38))) || p_862->g_21.s4), p_862->g_71[1], p_862->g_72, l_73, l_74, p_862), l_50.s3, p_862->g_71[0], p_862), 0x9D707F36127EAECDL)) , l_73)), ((VECTOR(int8_t, 2))(0x00L)), 1L)).even, (int8_t)l_73, (int8_t)p_862->g_342.sc))), p_862->g_342.s7, 0x35L, l_73, ((VECTOR(int8_t, 8))(0x03L)), ((VECTOR(int8_t, 2))((-1L))), 0x3AL)).sd3, ((VECTOR(int8_t, 2))((-2L)))))).even == 0L), p_862->g_342.s8)) || p_862->g_4), l_38, l_73, p_862->g_21.s2, l_74, p_862)))), l_370, l_371, p_862), p_862->g_147, p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))], l_50.s4, l_50.s7, p_862))) <= 3UL) != l_50.s5) < l_370) & p_862->g_288.z))) && l_50.s7))) >= p_862->g_458.y) ^ l_50.sd), (int32_t)l_73))).s67, ((VECTOR(int32_t, 2))(0L))))), l_617, 0x6E025A2FL, ((VECTOR(int32_t, 8))(0x4DA262DAL)), 1L, l_50.sa, 0x1E6480EFL, 0L)).se654, ((VECTOR(int32_t, 4))(0x56939E7FL))))).y, p_862->g_590.x))) != p_862->g_374.s7), 3))), p_862), l_50.sa, p_862);
    }
    (*p_862->g_857) = ((((((+(&p_862->g_772 == &l_370)) ^ ((VECTOR(uint16_t, 8))(p_862->g_836.xxwyyxyy)).s7) == l_73) <= l_837) || ((*l_855) = ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(l_844.sf4e19e05)).s67, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(0xCEL, ((VECTOR(uint8_t, 4))(p_862->g_845.s5457)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(p_862->g_846.wwwzxxwy)).s2557326636055067, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(l_847.s5f)).yxyxxyyyxyyyyxxx, ((VECTOR(uint8_t, 2))(l_848.s3e)).xxyyyxyxyxyyyyxx))).sc113, ((VECTOR(uint8_t, 4))((p_862->g_845.s6 < 0x0A4EAC62L), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_849.s3336cea9)).s12, ((VECTOR(uint8_t, 16))(l_850.yyxyyxxxxyxyyyyy)).s6f))).yxyyxyyxxxxyyyxy)).s8a)), 3UL))))).y, ((VECTOR(uint8_t, 2))(255UL, 251UL)), 7UL)).xwwzzwwxwwyzzzxy, ((VECTOR(uint8_t, 16))((((+l_73) <= 0x7AL) <= ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_851.sde)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(p_862->g_852.sd7)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_862->g_853.s24770ce0866c003b)).sec))))), (l_73 > 0x3B187550D3599A9EL), ((VECTOR(int16_t, 8))(0x5F51L)), ((VECTOR(int16_t, 2))(0x7223L)), 1L)), (int16_t)l_850.y, (int16_t)l_837))).s3), ((VECTOR(uint8_t, 8))(0UL)), ((VECTOR(uint8_t, 4))(247UL)), 0x3DL, 254UL, 0x43L))))).s03)), 0xB3L)).lo, ((VECTOR(uint8_t, 4))(6UL)), ((VECTOR(uint8_t, 4))(255UL))))).odd, ((VECTOR(uint8_t, 2))(2UL))))), ((VECTOR(uint16_t, 2))(1UL))))).yyyy)).xywwwwyz)).s34))), (uint16_t)l_854.s5))).hi, l_73)) > 0UL), FAKE_DIVERGE(p_862->local_1_offset, get_local_id(1), 10))) , l_371))) , p_862->g_856);
    for (p_862->g_147 = 0; (p_862->g_147 > (-4)); p_862->g_147 = safe_sub_func_uint16_t_u_u(p_862->g_147, 9))
    { /* block id: 356 */
        int32_t l_860 = 0x64775370L;
        int32_t **l_861 = &l_855;
        (*l_855) &= l_860;
        (*l_861) = l_855;
    }
    return (*l_855);
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_833 p_862->g_775
 * writes: p_862->g_834
 */
struct S0  func_7(uint32_t  p_8, int32_t  p_9, int32_t  p_10, struct S1 * p_862)
{ /* block id: 295 */
    struct S0 *l_774[8][9][3] = {{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}},{{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0},{&p_862->g_775,&p_862->g_775,(void*)0}}};
    struct S0 *l_776 = &p_862->g_775;
    uint16_t **l_832 = &p_862->g_71[1];
    int i, j, k;
    l_774[7][0][2] = l_774[1][3][2];
    l_776 = (p_10 , &p_862->g_775);
    if ((atomic_inc(&p_862->l_atomic_input[42]) == 9))
    { /* block id: 299 */
        int32_t l_777 = 7L;
        for (l_777 = 8; (l_777 > (-2)); l_777 = safe_sub_func_int8_t_s_s(l_777, 1))
        { /* block id: 302 */
            int8_t l_780 = 0x69L;
            int16_t l_781 = 0x0DCDL;
            uint8_t l_782 = 0x0EL;
            uint16_t l_785 = 1UL;
            int16_t l_788 = 5L;
            --l_782;
            --l_785;
            if (l_788)
            { /* block id: 305 */
                int64_t l_789 = 0x294881B9F4721648L;
                if (l_789)
                { /* block id: 306 */
                    uint32_t l_790 = 0xDA1E1B87L;
                    int32_t l_792[9];
                    int32_t *l_791 = &l_792[3];
                    int32_t *l_793 = &l_792[3];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_792[i] = (-1L);
                    l_793 = (l_790 , l_791);
                    for (l_792[3] = (-8); (l_792[3] <= 25); ++l_792[3])
                    { /* block id: 310 */
                        VECTOR(int32_t, 8) l_796 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        struct S0 l_797 = {0x7D708144BC16BE56L,0x62858F44L,0x49L};/* VOLATILE GLOBAL l_797 */
                        struct S0 l_798 = {1L,-6L,249UL};/* VOLATILE GLOBAL l_798 */
                        int64_t l_799[4] = {0x67D3863CC335D284L,0x67D3863CC335D284L,0x67D3863CC335D284L,0x67D3863CC335D284L};
                        uint32_t l_800[8][10] = {{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L},{0xCCDD4F02L,0xCD86A430L,8UL,0x94C6AD6DL,0x8D7DC3FFL,0xC232FEBDL,0xCCDD4F02L,0x0ADCA779L,0xBC25A383L,0xBC25A383L}};
                        uint32_t l_801 = 0xFAE9B7C5L;
                        int i, j;
                        l_796.s2 = 0L;
                        l_793 = (void*)0;
                        l_798 = l_797;
                        l_801 |= (l_800[5][0] = l_799[2]);
                    }
                }
                else
                { /* block id: 317 */
                    uint64_t l_802 = 18446744073709551611UL;
                    uint32_t l_805 = 0xDD0B37B9L;
                    uint64_t l_806 = 18446744073709551615UL;
                    l_802--;
                    l_806 = (l_805 = 0x0EFF1A6CL);
                }
            }
            else
            { /* block id: 322 */
                int32_t l_807 = 0x4C161163L;
                for (l_807 = 14; (l_807 <= 1); l_807 = safe_sub_func_uint16_t_u_u(l_807, 1))
                { /* block id: 325 */
                    int8_t l_810 = 1L;
                    int16_t l_811[6][5][2] = {{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}},{{7L,1L},{7L,1L},{7L,1L},{7L,1L},{7L,1L}}};
                    uint32_t l_824 = 4294967291UL;
                    int64_t l_831[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_831[i] = (-1L);
                    if ((((VECTOR(uint32_t, 2))(4294967295UL, 0xCED3B9F3L)).hi , (l_810 , l_811[4][3][1])))
                    { /* block id: 326 */
                        VECTOR(int32_t, 4) l_813 = (VECTOR(int32_t, 4))(0x69CB05F0L, (VECTOR(int32_t, 2))(0x69CB05F0L, 8L), 8L);
                        int32_t *l_812 = (void*)0;
                        int32_t *l_814 = (void*)0;
                        uint8_t l_815 = 0x3CL;
                        int i;
                        l_814 = (l_812 = l_812);
                        l_815++;
                    }
                    else
                    { /* block id: 330 */
                        int32_t l_818 = 1L;
                        VECTOR(int32_t, 16) l_819 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
                        int64_t l_820 = (-6L);
                        uint8_t l_821 = 0xA1L;
                        int32_t *l_822 = (void*)0;
                        int32_t *l_823 = (void*)0;
                        int i;
                        l_820 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_818, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_819.sb727)), ((VECTOR(int32_t, 2))(1L, 0x6357D97CL)).yyyx))), ((VECTOR(int32_t, 2))(0L, 0L)), (-4L))).s12)).even;
                        l_821 ^= 1L;
                        l_823 = l_822;
                    }
                    ++l_824;
                    for (l_811[4][3][1] = 0; (l_811[4][3][1] == 27); l_811[4][3][1] = safe_add_func_uint8_t_u_u(l_811[4][3][1], 9))
                    { /* block id: 338 */
                        int32_t l_830 = 0L;
                        int32_t *l_829 = &l_830;
                        l_829 = (void*)0;
                    }
                    l_831[0] ^= 0x589F1438L;
                }
            }
        }
        unsigned int result = 0;
        result += l_777;
        atomic_add(&p_862->l_special_values[42], result);
    }
    else
    { /* block id: 345 */
        (1 + 1);
    }
    (*p_862->g_833) = l_832;
    return p_862->g_775;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_comm_values p_862->g_628 p_862->g_632 p_862->g_633 p_862->g_582 p_862->g_39 p_862->g_643 p_862->g_620 p_862->g_90 p_862->g_342 p_862->g_287 p_862->g_584 p_862->g_195 p_862->g_147 p_862->g_374 p_862->g_671 p_862->g_121 p_862->g_681 p_862->g_435 p_862->g_224 p_862->g_377 p_862->g_581 p_862->g_391 p_862->g_145 p_862->g_397 p_862->g_746 p_862->g_770 p_862->g_771 p_862->g_772 p_862->g_288
 * writes: p_862->g_582 p_862->g_39 p_862->g_435 p_862->g_195 p_862->g_147 p_862->g_319 p_862->g_comm_values p_862->g_91 p_862->g_145 p_862->g_121 p_862->g_681 p_862->g_224 p_862->g_160 p_862->g_142 p_862->g_767 p_862->g_546
 */
int32_t  func_11(uint32_t  p_12, struct S1 * p_862)
{ /* block id: 247 */
    VECTOR(int32_t, 16) l_625 = (VECTOR(int32_t, 16))(0x23DE24C5L, (VECTOR(int32_t, 4))(0x23DE24C5L, (VECTOR(int32_t, 2))(0x23DE24C5L, 0x060D84A4L), 0x060D84A4L), 0x060D84A4L, 0x23DE24C5L, 0x060D84A4L, (VECTOR(int32_t, 2))(0x23DE24C5L, 0x060D84A4L), (VECTOR(int32_t, 2))(0x23DE24C5L, 0x060D84A4L), 0x23DE24C5L, 0x060D84A4L, 0x23DE24C5L, 0x060D84A4L);
    VECTOR(int32_t, 16) l_631 = (VECTOR(int32_t, 16))(0x64AF976EL, (VECTOR(int32_t, 4))(0x64AF976EL, (VECTOR(int32_t, 2))(0x64AF976EL, 0x7A9B123CL), 0x7A9B123CL), 0x7A9B123CL, 0x64AF976EL, 0x7A9B123CL, (VECTOR(int32_t, 2))(0x64AF976EL, 0x7A9B123CL), (VECTOR(int32_t, 2))(0x64AF976EL, 0x7A9B123CL), 0x64AF976EL, 0x7A9B123CL, 0x64AF976EL, 0x7A9B123CL);
    VECTOR(uint16_t, 8) l_636 = (VECTOR(uint16_t, 8))(0xA586L, (VECTOR(uint16_t, 4))(0xA586L, (VECTOR(uint16_t, 2))(0xA586L, 65535UL), 65535UL), 65535UL, 0xA586L, 65535UL);
    uint16_t *l_637 = &p_862->g_39;
    int64_t *l_638 = (void*)0;
    int64_t *l_639[1];
    VECTOR(uint16_t, 8) l_640 = (VECTOR(uint16_t, 8))(0xEFEAL, (VECTOR(uint16_t, 4))(0xEFEAL, (VECTOR(uint16_t, 2))(0xEFEAL, 6UL), 6UL), 6UL, 0xEFEAL, 6UL);
    VECTOR(int8_t, 2) l_644 = (VECTOR(int8_t, 2))(8L, 0x4CL);
    VECTOR(int32_t, 2) l_651 = (VECTOR(int32_t, 2))(0x25318897L, 0x01C0D650L);
    int16_t l_654 = 1L;
    VECTOR(int64_t, 4) l_664 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x6221BCD7E284F1EAL), 0x6221BCD7E284F1EAL);
    VECTOR(int64_t, 4) l_665 = (VECTOR(int64_t, 4))(0x1A15A91EB8A789D9L, (VECTOR(int64_t, 2))(0x1A15A91EB8A789D9L, 1L), 1L);
    VECTOR(int64_t, 4) l_666 = (VECTOR(int64_t, 4))(0x035D185777DCDE9EL, (VECTOR(int64_t, 2))(0x035D185777DCDE9EL, 0x07678AF9F7A78D72L), 0x07678AF9F7A78D72L);
    uint64_t *l_692 = &p_862->g_224;
    uint64_t **l_691 = &l_692;
    uint8_t *l_718 = &p_862->g_142;
    int32_t *l_733 = &p_862->g_121[3][0][4];
    int32_t **l_734 = &p_862->g_319[2];
    VECTOR(int8_t, 8) l_747 = (VECTOR(int8_t, 8))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x08L), 0x08L), 0x08L, 0x4DL, 0x08L);
    int16_t **l_765 = &p_862->g_349;
    int16_t ***l_764[8] = {&l_765,&l_765,&l_765,&l_765,&l_765,&l_765,&l_765,&l_765};
    int16_t ****l_766 = (void*)0;
    uint32_t *l_769 = &p_862->g_546;
    uint16_t *l_773 = &p_862->g_39;
    int i;
    for (i = 0; i < 1; i++)
        l_639[i] = (void*)0;
    if ((safe_add_func_uint64_t_u_u(p_862->g_comm_values[p_862->tid], (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_625.s3f)).xxxxyyyyyxxyyyyx)).sa ^ (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(7UL, 0x40L)).yxxxxxyxxyxyxyxy, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(1UL, 247UL)).xyyxyxyx, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(p_862->g_628.xxwzwzwzyyzwwwzz)), ((VECTOR(int8_t, 16))(0x35L, 0x6AL, 0L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(0x3FL, 8L)), (int8_t)((((safe_add_func_int32_t_s_s(((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_631.s6bb37ca7f6fece31)).se9, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_862->g_632.wxwzwxzy)).s5532405534627424)).s8801, ((VECTOR(int32_t, 4))(p_862->g_633.wzyx))))).zxwyzwwy, (int32_t)(((p_862->g_435.z = ((p_862->g_582.w ^= p_12) , (safe_lshift_func_uint16_t_u_u(((*l_637) |= (p_12 > (((VECTOR(uint16_t, 8))(l_636.s57270223)).s4 >= 0x3D82L))), p_12)))) & (((+FAKE_DIVERGE(p_862->local_2_offset, get_local_id(2), 10)) || ((VECTOR(uint16_t, 4))(l_640.s0055)).w) == (safe_mod_func_uint32_t_u_u(((((((VECTOR(uint8_t, 2))(p_862->g_643.s30)).lo <= (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_644.yyxyxxyxyyyxxxxy)))).s9 <= (safe_mod_func_uint64_t_u_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))((safe_rshift_func_uint8_t_u_u((p_12 < ((~(((((VECTOR(int32_t, 8))(l_651.yxxxyyxy)).s4 ^ (safe_sub_func_uint32_t_u_u(0x2CE8574CL, l_644.x))) <= (((255UL <= p_12) || p_12) < l_644.x)) >= 0UL)) != GROUP_DIVERGE(2, 1))), 0)), l_640.s6, FAKE_DIVERGE(p_862->local_2_offset, get_local_id(2), 10), p_12, l_625.sf, l_640.s3, ((VECTOR(uint8_t, 2))(0xC9L)), ((VECTOR(uint8_t, 4))(248UL)), ((VECTOR(uint8_t, 2))(4UL)), 6UL, 246UL))))).odd)).lo)).z == l_644.y), p_862->g_620)))) != p_12) , (-1L)) || l_625.s6), p_12)))) || p_12)))).s4723277241111035))).hi, ((VECTOR(int32_t, 8))(0L))))).s2004014472046407)).s31, ((VECTOR(int32_t, 2))((-1L)))))), 0x5DD0F4EAL, (-9L))).w , 0L) <= 1L), 0x4AA24CEFL)) ^ p_862->g_90) >= l_636.s5) != p_862->g_632.x)))))), ((VECTOR(int8_t, 2))(0x4CL))))).xyxx)), 0x0FL, ((VECTOR(int8_t, 2))(0x6AL)), ((VECTOR(int8_t, 4))(0x29L)), (-2L), 0x4EL)), ((VECTOR(int8_t, 16))(1L))))).s5d9d)).zywxwzywxzzxzxyw, (int8_t)0x61L, (int8_t)p_862->g_342.s8))).s247b, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x05L))))), ((VECTOR(int8_t, 4))(1L))))).wwzxzwxx))).s6605301061360561))))).sd8, ((VECTOR(uint8_t, 2))(0xBBL))))), ((VECTOR(uint8_t, 2))(0xD8L)), p_12, ((VECTOR(uint8_t, 8))(253UL)), ((VECTOR(uint8_t, 2))(248UL)), 254UL)), ((VECTOR(uint8_t, 16))(255UL))))).s7, p_862->g_287.s6))) != l_654) , p_862->g_584.s4))))
    { /* block id: 251 */
        int32_t l_659 = 0x1CB5C73FL;
        VECTOR(int32_t, 16) l_668 = (VECTOR(int32_t, 16))(0x798FD8D9L, (VECTOR(int32_t, 4))(0x798FD8D9L, (VECTOR(int32_t, 2))(0x798FD8D9L, 1L), 1L), 1L, 0x798FD8D9L, 1L, (VECTOR(int32_t, 2))(0x798FD8D9L, 1L), (VECTOR(int32_t, 2))(0x798FD8D9L, 1L), 0x798FD8D9L, 1L, 0x798FD8D9L, 1L);
        uint64_t *l_689 = &p_862->g_224;
        uint64_t **l_688 = &l_689;
        uint64_t ***l_690 = &l_688;
        VECTOR(uint8_t, 16) l_701 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
        uint8_t **l_719 = &p_862->g_160[3];
        uint8_t l_720 = 2UL;
        VECTOR(int64_t, 4) l_721 = (VECTOR(int64_t, 4))(0x37671D334F383040L, (VECTOR(int64_t, 2))(0x37671D334F383040L, 0x5F81CE4DE0BD5AA0L), 0x5F81CE4DE0BD5AA0L);
        uint64_t *l_722 = (void*)0;
        uint64_t *l_723 = (void*)0;
        uint64_t *l_724 = (void*)0;
        uint8_t l_725 = 0UL;
        int32_t *l_726 = (void*)0;
        int32_t **l_727 = &p_862->g_319[0];
        int i;
        for (p_862->g_195 = 0; (p_862->g_195 == 21); p_862->g_195 = safe_add_func_int64_t_s_s(p_862->g_195, 6))
        { /* block id: 254 */
            VECTOR(int32_t, 8) l_669 = (VECTOR(int32_t, 8))(0x0EAB8A1AL, (VECTOR(int32_t, 4))(0x0EAB8A1AL, (VECTOR(int32_t, 2))(0x0EAB8A1AL, 1L), 1L), 1L, 0x0EAB8A1AL, 1L);
            int16_t l_680[7][1][2] = {{{4L,4L}},{{4L,4L}},{{4L,4L}},{{4L,4L}},{{4L,4L}},{{4L,4L}},{{4L,4L}}};
            int i, j, k;
            for (p_862->g_147 = 0; (p_862->g_147 >= (-22)); p_862->g_147--)
            { /* block id: 257 */
                VECTOR(int64_t, 8) l_663 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
                uint32_t *l_667 = &p_862->g_91;
                VECTOR(int32_t, 4) l_670 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-10L)), (-10L));
                int8_t *l_672 = (void*)0;
                int8_t *l_673 = &p_862->g_145;
                int32_t *l_674 = &p_862->g_121[3][0][4];
                int32_t *l_677 = (void*)0;
                int32_t *l_678[7][1];
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_678[i][j] = (void*)0;
                }
                if ((l_659 &= l_651.x))
                { /* block id: 259 */
                    int32_t **l_660[1][10][8] = {{{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]},{&p_862->g_319[2],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[2],&p_862->g_319[0],&p_862->g_319[1],&p_862->g_319[1],&p_862->g_319[0]}}};
                    int i, j, k;
                    p_862->g_319[0] = (void*)0;
                }
                else
                { /* block id: 261 */
                    int32_t *l_661 = (void*)0;
                    int32_t **l_662[2][10] = {{(void*)0,&l_661,&p_862->g_319[2],&l_661,(void*)0,(void*)0,&l_661,&p_862->g_319[2],&l_661,(void*)0},{(void*)0,&l_661,&p_862->g_319[2],&l_661,(void*)0,(void*)0,&l_661,&p_862->g_319[2],&l_661,(void*)0}};
                    int i, j;
                    p_862->g_319[2] = l_661;
                    return p_862->g_374.s0;
                }
                (*l_674) |= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_663.s1674)).yxxywyxw)), 0x78BBBA5FF2A68460L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),int64_t,((VECTOR(int64_t, 16))(l_664.wywyxxywxywzwywy)).s5075, (int64_t)((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_665.yz)).yyyy)).w, (int64_t)(p_862->g_comm_values[p_862->tid] ^= l_625.s0)))).wxzxxwzxzwwyzyxy)).s0f34)), 0x60A8899581D27532L, 0x1A58F54CC146F6EAL, 0x41D11F5040F171D2L)).s8c)).yxyyxxyyyyxxxyyx, ((VECTOR(int64_t, 8))(l_666.xyxzyyzw)).s2463126261633671))), ((VECTOR(int64_t, 4))(p_12, (((*l_667) = 0x449F2DCDL) >= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_668.saf)).yyyx)).xzyyzyzz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x5748B435L)), 0x7A467CF0L, 0x6F891CF5L)).yzzyzwxz, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_669.s3305)).zwxywxyywxyxwxxy)).s55, ((VECTOR(int32_t, 16))(l_670.ywzywzzwzxwyzyxz)).sd0))), ((VECTOR(int32_t, 2))((-1L), 0x7250FC51L))))).yyyx, ((VECTOR(int32_t, 4))(p_862->g_671.s6505))))).yzywwzxxzzywxwwy, ((VECTOR(int32_t, 2))(0x024F9CECL, 1L)).xxxxxxxxxxxxxxyx))).lo))), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-4L), (((void*)0 != &p_862->g_96[0][1]) ^ ((0xBBEDL && l_665.x) < ((*l_673) = p_862->g_643.s0))), (-8L), (-7L), l_663.s6, ((VECTOR(int32_t, 2))(0x5A697068L)), 1L)).s1567404160104135)).s3b, ((VECTOR(int32_t, 2))(0x7306E696L))))).yxyyyyyx, ((VECTOR(int32_t, 8))((-7L))), ((VECTOR(int32_t, 8))(0x555D67F6L))))))).s3), 0L, 0x2DF0F04015CEC921L)).zyxxxzyxxwyxwxyx))))).sf | p_12);
                (*l_674) = (safe_lshift_func_uint16_t_u_s(0UL, ((0x2726F9B294A8776AL ^ 0x0702003EC2B29241L) >= l_668.se)));
                p_862->g_681[0]++;
            }
            if (p_12)
                continue;
        }
        l_668.s5 = ((safe_rshift_func_int16_t_s_u(p_862->g_435.z, (GROUP_DIVERGE(2, 1) <= (safe_rshift_func_int8_t_s_u(p_862->g_121[2][0][2], (p_12 == 0x5CL)))))) <= (((*l_690) = l_688) != l_691));
        l_668.sb = (safe_mod_func_uint64_t_u_u((--(**l_688)), (l_725 = (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_862->g_195, (GROUP_DIVERGE(1, 1) < (((l_651.x = ((((p_862->g_145 ^= (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_701.s9b3df4f1)), ((VECTOR(uint8_t, 2))(255UL, 0xD9L)), (0x1D274579L | (safe_mul_func_uint16_t_u_u(0x977CL, (+(safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((((*l_718) = (safe_lshift_func_int16_t_s_s((l_666.y && ((safe_rshift_func_uint8_t_u_s((0x50781C3ED840E9FFL >= ((safe_rshift_func_int8_t_s_u((p_862->g_377.sa >= (safe_sub_func_uint64_t_u_u((((p_862->g_581.y , l_718) == ((*l_719) = &p_862->g_195)) ^ l_720), 0UL))), 2)) > p_12)), p_12)) | 5L)), 7))) == 0x69L) , p_862->g_391.w) | l_625.sa), 12)), l_666.y)) , p_12), GROUP_DIVERGE(2, 1))))))), ((VECTOR(uint8_t, 2))(251UL)), p_12, 0x49L, 0xBFL)).s0278, ((VECTOR(uint8_t, 4))(0xD1L))))).w, ((VECTOR(uint8_t, 4))(0x68L)), 0x0DL, 0xB5L, 0x8CL)).s0 | l_701.s4)) | l_659) , l_721.w) == p_12)) == l_644.y) <= FAKE_DIVERGE(p_862->group_2_offset, get_group_id(2), 10))))) && p_12), p_12)))));
        (*l_727) = l_726;
    }
    else
    { /* block id: 284 */
        int32_t *l_728 = &p_862->g_90;
        int32_t *l_729[1][10][3] = {{{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]},{&p_862->g_121[3][0][4],&p_862->g_121[0][2][0],&p_862->g_121[3][0][4]}}};
        uint32_t l_730 = 1UL;
        int i, j, k;
        ++l_730;
        return p_12;
    }
    (*l_734) = l_733;
    (*l_733) = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_uint64_t_u((((safe_mul_func_uint16_t_u_u(((0xDB175DC0L <= (p_862->g_643.s7 >= ((p_12 || (!(((((((p_862->g_397.s6 ^ ((VECTOR(int8_t, 16))(0x00L, (-1L), (-8L), ((VECTOR(int8_t, 2))(p_862->g_746.yw)).odd, p_12, (-1L), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_747.s1476212416517135)).odd, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((((**l_691) |= (safe_add_func_int64_t_s_s((p_12 , 0x537BFF91197B9CC1L), (((*l_769) = ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_12, (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((p_862->g_767[1][1] = l_764[7]) != &p_862->g_768), 4)), (*l_733))))), 1)) && p_862->g_746.z)) , p_12)))) < p_12), p_12)) >= 0x11L) > p_862->g_770), p_12)), 0x4BFA0444DAF5EB94L)), 4L, 0x01L, 0x17L)), ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))((-3L)))))).wxywxzyx))), 0x27L, (-7L))).s7) < (*l_733)) & 0xD34E4B27848D6D6AL) > 4294967286UL) != 1L) == p_862->g_771) && 1UL))) , p_12))) , p_12), 0x0130L)) , (*l_733)) && (*l_733)))), 7)), p_862->g_772));
    (*l_733) = (l_773 == (void*)0);
    return p_862->g_288.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_87 p_862->g_269 p_862->g_121 p_862->g_458 p_862->g_145 p_862->g_288 p_862->g_397 p_862->g_90 p_862->g_286 p_862->g_142 p_862->g_541 p_862->g_91 p_862->g_195 p_862->g_391 p_862->g_96 p_862->g_581 p_862->g_582 p_862->g_584 p_862->g_374 p_862->g_590 p_862->g_285 p_862->g_72
 * writes: p_862->g_87 p_862->g_269 p_862->g_121 p_862->g_90 p_862->g_142 p_862->g_546 p_862->g_319 p_862->g_391 p_862->g_435 p_862->g_91 p_862->g_285 p_862->g_286
 */
int32_t  func_24(uint16_t  p_25, uint32_t  p_26, int64_t  p_27, uint16_t  p_28, int64_t  p_29, struct S1 * p_862)
{ /* block id: 138 */
    int16_t **l_455 = &p_862->g_349;
    uint8_t **l_462[3];
    int32_t **l_473 = &p_862->g_319[2];
    int32_t l_475 = 0x669DC975L;
    VECTOR(uint64_t, 2) l_578 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
    int32_t l_585[1];
    VECTOR(int16_t, 4) l_589 = (VECTOR(int16_t, 4))(0x38F3L, (VECTOR(int16_t, 2))(0x38F3L, 0x4FFCL), 0x4FFCL);
    int64_t *l_593[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_597 = 0x7682680FL;
    int i;
    for (i = 0; i < 3; i++)
        l_462[i] = &p_862->g_160[2];
    for (i = 0; i < 1; i++)
        l_585[i] = 0x21E2AFF0L;
    for (p_862->g_87 = 0; (p_862->g_87 > 27); ++p_862->g_87)
    { /* block id: 141 */
        int32_t *l_441 = (void*)0;
        int32_t l_442[7][9] = {{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)},{(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)}};
        uint32_t *l_445 = &p_862->g_269[6][0];
        int32_t *l_454 = &p_862->g_121[3][0][4];
        int16_t **l_457 = &p_862->g_349;
        int16_t ***l_456 = &l_457;
        int32_t *l_459 = (void*)0;
        int32_t *l_460 = (void*)0;
        int32_t *l_461 = &p_862->g_90;
        int16_t *l_474[5][6] = {{&p_862->g_393,&p_862->g_147,&p_862->g_147,(void*)0,&p_862->g_147,&p_862->g_147},{&p_862->g_393,&p_862->g_147,&p_862->g_147,(void*)0,&p_862->g_147,&p_862->g_147},{&p_862->g_393,&p_862->g_147,&p_862->g_147,(void*)0,&p_862->g_147,&p_862->g_147},{&p_862->g_393,&p_862->g_147,&p_862->g_147,(void*)0,&p_862->g_147,&p_862->g_147},{&p_862->g_393,&p_862->g_147,&p_862->g_147,(void*)0,&p_862->g_147,&p_862->g_147}};
        uint32_t *l_561 = &p_862->g_546;
        VECTOR(int16_t, 16) l_565 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int16_t, 2))((-1L), 5L), (VECTOR(int16_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
        VECTOR(int16_t, 2) l_587 = (VECTOR(int16_t, 2))(1L, 8L);
        VECTOR(int16_t, 4) l_588 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 1L), 1L);
        uint16_t l_594[5][2][7] = {{{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L},{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L}},{{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L},{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L}},{{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L},{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L}},{{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L},{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L}},{{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L},{0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L,0x3C48L}}};
        int i, j, k;
        l_442[4][5] |= p_28;
        (*l_461) &= (l_442[4][6] & (0x07492A83L > ((VECTOR(uint32_t, 8))(8UL, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(4294967291UL, 4294967291UL, 4294967295UL, 0x9BC2AB46L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x009823C3L, 4294967295UL, ((safe_lshift_func_int8_t_s_s((((((++(*l_445)) == (((*l_454) &= ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(0x63L, (+p_28))), 0)) <= p_29)) || (l_455 != ((*l_456) = l_455)))) & (((VECTOR(int32_t, 2))(p_862->g_458.xy)).even ^ (p_862->g_145 , p_29))) , p_862->g_288.w) < p_29), 5)) == p_28), ((VECTOR(uint32_t, 2))(0UL)), 0x9FAC92E7L, p_862->g_397.s2, 1UL, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0xBC1C8228L)))).s9a06)).xyzywwzyzzyzxxxz, ((VECTOR(uint32_t, 16))(1UL))))), (uint32_t)p_27))).s95f9))))), p_862->g_458.w, 0x136358DDL, 0x5411332BL)).s0));
        if ((((void*)0 != l_462[2]) != (4UL ^ ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((((*l_461) = (safe_lshift_func_uint16_t_u_u(p_27, 11))) >= (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_26, 11)), p_29))) == (l_473 != &p_862->g_319[2])) || (l_475 &= 0x425EL)), 2)), 0x19L)) , p_26) | p_29) > p_862->g_286.w))))
        { /* block id: 149 */
            uint32_t l_554 = 0x5D2036AAL;
            int32_t l_557[3];
            int i;
            for (i = 0; i < 3; i++)
                l_557[i] = 5L;
            if ((atomic_inc(&p_862->l_atomic_input[10]) == 8))
            { /* block id: 151 */
                uint32_t l_476[1][9] = {{0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL,0xF045B6AFL}};
                int32_t l_477 = 0x3CC9D723L;
                uint64_t l_478 = 0x2603719C0ED04451L;
                VECTOR(int8_t, 16) l_479 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x7CL), 0x7CL), 0x7CL, (-9L), 0x7CL, (VECTOR(int8_t, 2))((-9L), 0x7CL), (VECTOR(int8_t, 2))((-9L), 0x7CL), (-9L), 0x7CL, (-9L), 0x7CL);
                uint8_t l_480 = 1UL;
                int i, j;
                l_478 &= (l_476[0][4] , (l_477 = 0x22CD494CL));
                l_480 = l_479.s0;
                for (l_476[0][1] = 0; (l_476[0][1] >= 45); l_476[0][1] = safe_add_func_int8_t_s_s(l_476[0][1], 6))
                { /* block id: 157 */
                    int64_t l_483 = 0x548C5094D8F6883BL;
                    uint64_t l_484 = 0xF9D405364EDFAB53L;
                    VECTOR(int32_t, 8) l_520 = (VECTOR(int32_t, 8))(0x56D9D091L, (VECTOR(int32_t, 4))(0x56D9D091L, (VECTOR(int32_t, 2))(0x56D9D091L, 0x4F607F17L), 0x4F607F17L), 0x4F607F17L, 0x56D9D091L, 0x4F607F17L);
                    int64_t l_521 = (-10L);
                    int i;
                    if ((l_483 , l_484))
                    { /* block id: 158 */
                        VECTOR(int32_t, 4) l_485 = (VECTOR(int32_t, 4))(0x35DF2AC1L, (VECTOR(int32_t, 2))(0x35DF2AC1L, 0x66857AF2L), 0x66857AF2L);
                        VECTOR(int32_t, 2) l_486 = (VECTOR(int32_t, 2))(0x0D5142E8L, (-8L));
                        int64_t l_487 = 1L;
                        int16_t l_488 = 0L;
                        uint8_t l_489 = 1UL;
                        uint8_t l_490 = 0xDBL;
                        VECTOR(int32_t, 8) l_491 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5D4B3FD6L), 0x5D4B3FD6L), 0x5D4B3FD6L, (-1L), 0x5D4B3FD6L);
                        int32_t l_492 = 3L;
                        VECTOR(int64_t, 8) l_493 = (VECTOR(int64_t, 8))(0x6C4EFCDE9FE01245L, (VECTOR(int64_t, 4))(0x6C4EFCDE9FE01245L, (VECTOR(int64_t, 2))(0x6C4EFCDE9FE01245L, 0x1FF413CB5D74FE66L), 0x1FF413CB5D74FE66L), 0x1FF413CB5D74FE66L, 0x6C4EFCDE9FE01245L, 0x1FF413CB5D74FE66L);
                        uint32_t l_494 = 6UL;
                        int32_t l_497[10][1] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
                        int8_t l_498 = (-1L);
                        int16_t l_499 = 1L;
                        uint32_t l_500 = 4294967295UL;
                        uint32_t l_501 = 4UL;
                        uint32_t l_502 = 4294967292UL;
                        uint64_t l_503 = 2UL;
                        uint16_t l_504 = 0xEBDBL;
                        int32_t l_505[5][8][3] = {{{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL}},{{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL}},{{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL}},{{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL}},{{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL},{0x01DB38DEL,0x44FB48E0L,0x7FD2DAABL}}};
                        int32_t l_506 = 0x35726BCBL;
                        int32_t l_507[10] = {0x48886D9AL,0L,0x1C7DCCA3L,0L,0x48886D9AL,0x48886D9AL,0L,0x1C7DCCA3L,0L,0x48886D9AL};
                        uint32_t l_508[5][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
                        VECTOR(int32_t, 8) l_511 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2F5CB1D8L), 0x2F5CB1D8L), 0x2F5CB1D8L, 0L, 0x2F5CB1D8L);
                        uint32_t l_512 = 0x667FF0BEL;
                        int i, j, k;
                        l_504 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_485.wzyz)).zwxzwyxzwyzwxyyw, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-10L), 0x2064A771L)), 3L, 0x45FC053CL)).wwxzzyyxyxwwzwwz))).s0c, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_486.xy)), l_487, (l_503 = ((l_488 , (l_489 , 0x680D9EBCL)) , (l_502 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_490, 0x4F4D9183L, ((VECTOR(int32_t, 2))(l_491.s70)), 2L, 0x0FD2DB94L, l_492, (l_499 = (((VECTOR(int64_t, 4))(l_493.s0014)).y , (l_498 = ((--l_494) , l_497[1][0])))), l_500, l_501, ((VECTOR(int32_t, 4))(0x07FA0C74L)), 4L, 0x7C6FD0ECL)).even)).s2))), ((VECTOR(int32_t, 4))((-3L))))).s3005747256650406, ((VECTOR(int32_t, 16))(0x2A3B9110L))))).sac)), (-3L), 1L)).wxxzwwzx)).s23))))), ((VECTOR(int32_t, 2))((-9L))), ((VECTOR(int32_t, 2))(0x5D4762F3L)), 0x41F835EBL, 8L)).s0;
                        l_508[4][2]++;
                        l_512 ^= ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_511.s2536)), ((VECTOR(int32_t, 2))(0x2F3ED9D5L, 0x08564F3DL)).xyxy))).z;
                    }
                    else
                    { /* block id: 167 */
                        uint32_t l_513 = 0x1ECBC08EL;
                        int32_t l_516[2];
                        int32_t l_517 = 1L;
                        int8_t l_518 = (-10L);
                        int16_t l_519 = (-9L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_516[i] = 0x4CC57741L;
                        ++l_513;
                        l_516[0] |= 2L;
                        l_516[0] = l_517;
                        l_519 = l_518;
                    }
                    l_521 = ((VECTOR(int32_t, 4))(l_520.s3663)).y;
                    for (l_483 = 14; (l_483 != (-21)); l_483--)
                    { /* block id: 176 */
                        int32_t *l_524 = (void*)0;
                        int32_t l_526 = 0x2FF6AF96L;
                        int32_t *l_525 = &l_526;
                        uint32_t l_527 = 0x666B44E9L;
                        int64_t l_530 = 1L;
                        int32_t l_531 = 1L;
                        uint32_t l_532 = 0x9416A23AL;
                        l_525 = l_524;
                        ++l_527;
                        l_520.s0 = 0x6DAF9F91L;
                        ++l_532;
                    }
                }
                unsigned int result = 0;
                int l_476_i0, l_476_i1;
                for (l_476_i0 = 0; l_476_i0 < 1; l_476_i0++) {
                    for (l_476_i1 = 0; l_476_i1 < 9; l_476_i1++) {
                        result += l_476[l_476_i0][l_476_i1];
                    }
                }
                result += l_477;
                result += l_478;
                result += l_479.sf;
                result += l_479.se;
                result += l_479.sd;
                result += l_479.sc;
                result += l_479.sb;
                result += l_479.sa;
                result += l_479.s9;
                result += l_479.s8;
                result += l_479.s7;
                result += l_479.s6;
                result += l_479.s5;
                result += l_479.s4;
                result += l_479.s3;
                result += l_479.s2;
                result += l_479.s1;
                result += l_479.s0;
                result += l_480;
                atomic_add(&p_862->l_special_values[10], result);
            }
            else
            { /* block id: 183 */
                (1 + 1);
            }
            for (p_862->g_142 = 0; (p_862->g_142 != 59); p_862->g_142++)
            { /* block id: 188 */
                int32_t *l_549 = (void*)0;
                uint64_t *l_552 = (void*)0;
                for (p_25 = 14; (p_25 == 4); p_25 = safe_sub_func_uint8_t_u_u(p_25, 2))
                { /* block id: 191 */
                    int16_t ****l_542 = &l_456;
                    int16_t ***l_544[9] = {&l_455,&l_457,&l_455,&l_455,&l_457,&l_455,&l_455,&l_457,&l_455};
                    int16_t ****l_543 = &l_544[2];
                    uint32_t *l_545 = &p_862->g_546;
                    int32_t l_547 = 5L;
                    int32_t l_548 = 1L;
                    int i;
                    if ((safe_mul_func_int8_t_s_s((((~((p_26 && (p_28 > ((*l_454) = (p_862->g_541 != ((*l_543) = ((*l_542) = &l_455)))))) | p_862->g_458.w)) ^ p_29) , p_27), (l_548 |= ((3L <= (((*l_545) = 0xF2E8658AL) , l_547)) | p_862->g_91)))))
                    { /* block id: 197 */
                        uint64_t *l_551[2][8][5] = {{{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224}},{{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224},{&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224,&p_862->g_224}}};
                        uint64_t **l_550 = &l_551[0][1][0];
                        int i, j, k;
                        (*l_473) = l_549;
                        (*l_461) = (((*l_550) = (p_862->g_195 , (void*)0)) == l_552);
                        return p_28;
                    }
                    else
                    { /* block id: 202 */
                        int32_t l_553[6][8] = {{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L},{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L},{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L},{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L},{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L},{0x4F7AB8CBL,0L,0L,0x7C8F8841L,0L,0L,0x4F7AB8CBL,0x27536C39L}};
                        uint32_t *l_562 = &p_862->g_546;
                        int i, j;
                        l_557[0] = (FAKE_DIVERGE(p_862->global_2_offset, get_global_id(2), 10) <= (!(--l_554)));
                        (*l_454) = (((VECTOR(uint64_t, 2))(9UL, 18446744073709551613UL)).odd > ((FAKE_DIVERGE(p_862->local_2_offset, get_local_id(2), 10) != p_862->g_286.x) || (safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(0x28L, ((l_562 = l_561) == (void*)0)))))));
                        (*l_454) &= l_553[2][6];
                        if (p_27)
                            break;
                    }
                    for (l_554 = 0; (l_554 > 27); l_554 = safe_add_func_uint8_t_u_u(l_554, 7))
                    { /* block id: 212 */
                        if (p_25)
                            break;
                    }
                }
            }
        }
        else
        { /* block id: 217 */
            int64_t *l_568 = (void*)0;
            int64_t *l_569 = (void*)0;
            int64_t *l_570 = (void*)0;
            int64_t *l_571 = (void*)0;
            int64_t *l_572[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_573 = 1L;
            VECTOR(int8_t, 8) l_583 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x12L), 0x12L), 0x12L, 0L, 0x12L);
            VECTOR(int16_t, 4) l_586 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x177BL), 0x177BL);
            int8_t *l_591 = (void*)0;
            int8_t *l_592 = (void*)0;
            int i, j;
            l_475 = ((~((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_565.s2b74)), 0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((!((safe_rshift_func_int8_t_s_u(1L, 4)) != ((p_862->g_391.z ^= p_862->g_90) < (p_25 >= (l_573 <= (l_475 ^ p_29)))))) & (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_578.yxxyxyyx)), 0x334EAA2BFFFA3E8AL, 0x36BD1643358D8B83L, 0xDA5AF233014DDA75L, 1UL, 0xDEA0201B35E40D5BL, 0x591364ECBFB78CCCL, 18446744073709551614UL, 7UL)).s8 , l_573) , l_573), l_573)) & 3L), p_862->g_96[2][3]))) == (-9L)), ((VECTOR(int16_t, 2))(0x0C80L)), 8L)).xxwywxzx)).s40)).yxyyyyxxxxxyxxyy)).saa)), 0L)).s5) != 0x029EL);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_862->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[(safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((((((VECTOR(uint32_t, 16))(p_862->g_581.wyywyzzyzxyzwxzy)).sd < FAKE_DIVERGE(p_862->group_0_offset, get_group_id(0), 10)) ^ (((*l_461) <= ((((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 0x53BDL)), ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(p_862->g_582.zzww)).yxyzxxwxyzwwywyw))).s25a5))), 0L, 6L)).even, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_583.s34)).yyxxxyxyyyyyxyxy)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_862->g_584.se2d0)))), (((-6L) & (l_573 <= (p_862->g_435.x = (FAKE_DIVERGE(p_862->global_1_offset, get_global_id(1), 10) && l_585[0])))) && ((p_26 != ((VECTOR(int16_t, 8))(p_862->g_374.sf, 0x3DD2L, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x39E2L, (-1L))).yyxxxyyx)).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))(l_586.yzww)).xwyyyxwwwxzzxyyx, ((VECTOR(int16_t, 16))(l_587.xyxyyxyyyyyyxyyy))))).lo)).hi))).lo, ((VECTOR(int16_t, 4))(l_588.xyyw)).odd))).yxyxxxxy))).s41)).xyyyxyxx))).lo, ((VECTOR(int16_t, 16))(l_589.yyxxwwxxxxyyxzyz)).sac95))), 0x167CL, (-1L))).s6) >= ((~(((((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_862->g_590.wwwzxzxyyyzwyzzy)))).s9d, ((VECTOR(uint8_t, 8))(((l_573 = 0x5BL) && (p_862->g_285[7] == l_593[4])), 246UL, FAKE_DIVERGE(p_862->local_0_offset, get_local_id(0), 10), (*l_454), ((VECTOR(uint8_t, 4))(0xD3L)))).s50, ((VECTOR(uint8_t, 2))(0x8AL))))).xxyyxxxx)).s6 <= 0x87L) , l_583.s7) > 0x5BL) | p_862->g_458.w) >= 0UL)) ^ p_25))), 254UL, p_25, 0UL, 0x0BL, p_27, ((VECTOR(uint8_t, 4))(1UL)), 1UL, 0UL)))).lo))).s32)).yyxxxyyy, ((VECTOR(int16_t, 8))(0x032EL))))).s67, ((VECTOR(int16_t, 2))(7L))))).yxyy))).z <= p_29) || l_594[3][1][4])) , p_26)) , 0L) && 0x43357051L), p_29)), 10))][(safe_mod_func_uint32_t_u_u(p_862->tid, 11))]));
            for (p_862->g_91 = (-19); (p_862->g_91 != 32); p_862->g_91 = safe_add_func_uint8_t_u_u(p_862->g_91, 1))
            { /* block id: 227 */
                uint64_t **l_598 = (void*)0;
                uint64_t **l_599[9][5] = {{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]},{&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7],&p_862->g_285[7]}};
                int32_t *l_602 = &p_862->g_90;
                int32_t **l_603 = &p_862->g_319[2];
                int32_t **l_604 = &l_441;
                int8_t *l_613[3];
                uint32_t l_614 = 8UL;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_613[i] = (void*)0;
                if (p_25)
                    break;
                if (p_25)
                    break;
                if (l_597)
                    break;
                (*l_461) = (((p_27 > ((p_862->g_285[3] = (void*)0) != l_593[4])) , (safe_add_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(0x279DL, 0UL)).hi || ((&p_862->g_121[3][0][4] != ((*l_604) = l_602)) | (safe_add_func_int32_t_s_s((0x5DL | ((1UL == (*l_461)) != (((safe_mul_func_int8_t_s_s((p_862->g_286.z = (safe_mul_func_int8_t_s_s(p_862->g_72, p_29))), p_28)) != p_27) <= l_586.x))), (-5L))))), 5L))) != l_614);
            }
            for (p_862->g_142 = 0; (p_862->g_142 == 52); p_862->g_142 = safe_add_func_int32_t_s_s(p_862->g_142, 2))
            { /* block id: 238 */
                if (p_29)
                    break;
            }
        }
        if (p_27)
            continue;
    }
    return p_29;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_224 p_862->g_374 p_862->g_377 p_862->g_391 p_862->g_145 p_862->g_393 p_862->g_90 p_862->g_397 p_862->g_121 p_862->g_435
 * writes: p_862->g_224 p_862->g_145 p_862->g_121 p_862->g_391 p_862->g_72 p_862->g_90
 */
uint16_t  func_30(int64_t  p_31, uint32_t  p_32, int64_t  p_33, struct S1 * p_862)
{ /* block id: 112 */
    VECTOR(uint32_t, 8) l_376 = (VECTOR(uint32_t, 8))(0x16D0D868L, (VECTOR(uint32_t, 4))(0x16D0D868L, (VECTOR(uint32_t, 2))(0x16D0D868L, 1UL), 1UL), 1UL, 0x16D0D868L, 1UL);
    int32_t l_395 = 1L;
    int32_t l_396 = 0L;
    int32_t l_398[6] = {0x6780B272L,0x6780B272L,0x6780B272L,0x6780B272L,0x6780B272L,0x6780B272L};
    uint8_t l_399 = 255UL;
    int32_t *l_404 = &l_395;
    int32_t *l_405 = &l_395;
    int32_t *l_406 = &p_862->g_121[2][3][0];
    int32_t *l_407 = &l_398[3];
    int32_t *l_408 = &p_862->g_121[2][0][0];
    int32_t *l_409 = &l_395;
    int32_t *l_410 = &p_862->g_90;
    int32_t *l_411 = &p_862->g_121[3][0][4];
    int32_t *l_412 = &l_396;
    int32_t *l_413 = &p_862->g_121[2][3][2];
    int32_t *l_414 = (void*)0;
    int32_t *l_415 = &l_396;
    int32_t *l_416 = &l_396;
    int32_t *l_417 = &p_862->g_90;
    int32_t *l_418[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_419 = 0xBDE2CD43L;
    uint64_t *l_430 = (void*)0;
    uint64_t *l_431[7] = {&p_862->g_96[2][2],&p_862->g_96[2][2],&p_862->g_96[2][2],&p_862->g_96[2][2],&p_862->g_96[2][2],&p_862->g_96[2][2],&p_862->g_96[2][2]};
    uint32_t l_432[4] = {0x5316DEA9L,0x5316DEA9L,0x5316DEA9L,0x5316DEA9L};
    uint16_t *l_436 = (void*)0;
    uint16_t *l_437 = &p_862->g_72;
    uint16_t *l_438[9] = {&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39,&p_862->g_39};
    int i;
    for (p_862->g_224 = 0; (p_862->g_224 > 5); p_862->g_224 = safe_add_func_int8_t_s_s(p_862->g_224, 4))
    { /* block id: 115 */
        VECTOR(uint32_t, 8) l_375 = (VECTOR(uint32_t, 8))(0x57EF358BL, (VECTOR(uint32_t, 4))(0x57EF358BL, (VECTOR(uint32_t, 2))(0x57EF358BL, 0xFD678733L), 0xFD678733L), 0xFD678733L, 0x57EF358BL, 0xFD678733L);
        uint64_t **l_386 = (void*)0;
        uint64_t *l_388 = &p_862->g_224;
        uint64_t **l_387 = &l_388;
        int16_t **l_392[8] = {&p_862->g_349,&p_862->g_349,&p_862->g_349,&p_862->g_349,&p_862->g_349,&p_862->g_349,&p_862->g_349,&p_862->g_349};
        int32_t *l_394[9];
        int i;
        for (i = 0; i < 9; i++)
            l_394[i] = &p_862->g_121[1][1][0];
        l_396 &= (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(p_862->g_374.s0f3b1ca1)).s25, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_375.s5523)), ((VECTOR(uint32_t, 4))(l_376.s0621)))).s07))))))))))).yyxx, ((VECTOR(uint32_t, 8))(p_862->g_377.s36e1642d)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_862->group_1_offset, get_group_id(1), 10), (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((*l_387) = (void*)0) == (void*)0) , (safe_rshift_func_int8_t_s_s((0x35E1538F552A9BC0L ^ ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_862->g_391.zwwxzxzy)).odd)).yxxwyyywxxzwyyxx)).s4), (~(l_392[0] == &p_862->g_349))))), ((VECTOR(uint8_t, 4))(((p_33 , FAKE_DIVERGE(p_862->group_0_offset, get_group_id(0), 10)) && (p_862->g_145 ^= p_862->g_377.sb)), 4UL, 0xEAL, 0xACL)).z)), 0x58L)), ((l_395 = p_862->g_393) <= p_31))))), p_32, 0x6190E61EL, 0xB6A8FB61L, ((VECTOR(uint32_t, 2))(1UL)), 0UL, 0x5C1908DEL)).s10)), ((VECTOR(uint32_t, 2))(0x23E423A5L)), 1UL, p_33, 5UL, 4294967295UL)).hi))).xxzxzyzwyzzxwyxw)).hi)), 1UL, 4UL, ((VECTOR(uint32_t, 4))(0x6AF388DAL)), 0x86316DA4L, 0xB65A9A6FL)).hi)).lo)).z & p_862->g_90) && p_32) , l_376.s3);
        l_396 = ((VECTOR(int32_t, 8))(p_862->g_397.s72476471)).s5;
        l_399++;
        for (l_396 = 0; (l_396 < 17); ++l_396)
        { /* block id: 124 */
            l_394[3] = l_394[5];
        }
    }
    l_419--;
    (*l_406) = p_33;
    (*l_404) ^= (((safe_rshift_func_int16_t_s_s((*l_413), p_33)) || ((*l_417) = ((*l_437) = ((p_862->g_391.y = ((l_432[3] &= (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((*l_407) = (safe_rshift_func_int8_t_s_u(((*l_415) |= ((VECTOR(int8_t, 2))(0x56L, 0x59L)).hi), 4))), p_31)), 0UL))) , 0L)) != (safe_add_func_uint64_t_u_u(0x8EF1223959D6D241L, ((VECTOR(int64_t, 4))((-4L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_862->g_435.yxwzwyyx)).s47)), 0x4EC202DD89D61C1FL)).x)))))) || p_31);
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_862->g_319
 */
int8_t  func_42(uint64_t  p_43, uint16_t * p_44, int32_t  p_45, uint32_t  p_46, uint16_t * p_47, struct S1 * p_862)
{ /* block id: 109 */
    int32_t **l_368 = &p_862->g_319[1];
    int32_t l_369 = (-8L);
    (*l_368) = &p_862->g_4;
    return l_369;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_96
 * writes: p_862->g_145
 */
int64_t  func_53(uint32_t  p_54, int32_t  p_55, uint16_t * p_56, struct S1 * p_862)
{ /* block id: 105 */
    int8_t *l_365 = (void*)0;
    int8_t *l_366 = &p_862->g_145;
    int32_t l_367 = 0x5EA7E4DCL;
    l_367 &= ((safe_mod_func_int8_t_s_s(0x53L, ((*l_366) = p_862->g_96[0][1]))) , 0x07436280L);
    return l_367;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_90 p_862->g_96 p_862->g_121 p_862->g_147 p_862->g_72 p_862->l_comm_values p_862->g_4 p_862->g_145 p_862->g_comm_values p_862->g_224 p_862->g_21 p_862->g_142 p_862->g_195 p_862->g_270 p_862->g_287 p_862->g_246 p_862->g_269 p_862->g_91 p_862->g_283
 * writes: p_862->g_87 p_862->g_90 p_862->g_91 p_862->g_96 p_862->g_72 p_862->g_160 p_862->g_145 p_862->g_121 p_862->g_195 p_862->g_224 p_862->g_142 p_862->g_269 p_862->g_285 p_862->g_306 p_862->g_319 p_862->g_349 p_862->g_246
 */
uint32_t  func_57(uint8_t  p_58, uint16_t * p_59, uint32_t  p_60, uint64_t  p_61, uint16_t * p_62, struct S1 * p_862)
{ /* block id: 9 */
    uint16_t l_89 = 0UL;
    for (p_61 = 0; (p_61 > 34); ++p_61)
    { /* block id: 12 */
        uint16_t l_85 = 1UL;
        uint8_t *l_86 = &p_862->g_87;
        uint8_t *l_88[6][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        uint64_t *l_94 = (void*)0;
        uint64_t *l_95 = &p_862->g_96[0][1];
        int32_t l_333 = 0x631D464DL;
        int32_t l_362 = (-1L);
        int i, j, k;
        l_362 &= ((safe_lshift_func_uint16_t_u_u(((*p_59) = ((safe_rshift_func_int16_t_s_s(func_81(((p_862->g_91 = (p_60 , (p_862->g_90 |= (l_89 = ((*l_86) = l_85))))) | p_61), func_92(((*l_95)++), p_862), (l_333 = (-1L)), p_862), p_862->g_287.s1)) >= ((void*)0 != p_862->g_270))), 1)) == 0L);
    }
    return l_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->g_269 p_862->g_342 p_862->g_91 p_862->g_72 p_862->g_283 p_862->g_121 p_862->g_90 p_862->g_287
 * writes: p_862->g_224 p_862->g_349 p_862->g_246 p_862->g_90
 */
int16_t  func_81(int32_t  p_82, uint16_t * p_83, int64_t  p_84, struct S1 * p_862)
{ /* block id: 93 */
    uint64_t *l_338 = &p_862->g_224;
    int32_t l_339 = 0x6CF15C61L;
    int16_t *l_348 = (void*)0;
    int16_t **l_347[10] = {&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348};
    int64_t *l_350 = (void*)0;
    int64_t *l_351 = (void*)0;
    int32_t *l_352 = &p_862->g_90;
    int32_t *l_353 = &l_339;
    int32_t *l_354 = &p_862->g_121[1][0][2];
    int32_t *l_355[2];
    int16_t l_356 = 0L;
    uint64_t l_357 = 0x0DB7DEC1A1063FF7L;
    int i;
    for (i = 0; i < 2; i++)
        l_355[i] = &p_862->g_90;
    (*l_352) ^= ((p_862->g_269[7][0] >= (((((p_84 > (safe_lshift_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((((GROUP_DIVERGE(0, 1) || (((p_862->g_246.s7 = ((((*l_338) = FAKE_DIVERGE(p_862->group_0_offset, get_group_id(0), 10)) || l_339) ^ (safe_mul_func_uint16_t_u_u((FAKE_DIVERGE(p_862->local_2_offset, get_local_id(2), 10) != ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(p_862->g_342.se5ef2aa0)).s25, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x69L, (safe_lshift_func_int16_t_s_s(p_82, 14)), 0x24L, 1L)).xzzwzxzyzzxxzzwx)).se1))).even), (((p_862->g_91 & ((*p_83) == p_82)) , ((p_862->g_349 = (((safe_add_func_uint16_t_u_u(l_339, l_339)) , 0x0F31L) , (void*)0)) != p_83)) >= 0x3EB4F7C9AC98F05BL))))) > FAKE_DIVERGE(p_862->local_0_offset, get_local_id(0), 10)) ^ 0x68L)) == 0L) > l_339) ^ p_862->g_283.s2), 2L)), p_862->g_121[3][0][4]))) && FAKE_DIVERGE(p_862->global_2_offset, get_global_id(2), 10)) ^ 18446744073709551611UL) , p_84) && l_339)) != l_339);
    l_357--;
    (*l_353) = (safe_lshift_func_uint8_t_u_s((&p_862->g_306 == l_353), 4));
    return p_862->g_287.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_862->l_comm_values p_862->g_4 p_862->g_comm_values p_862->g_142 p_862->g_72 p_862->g_96 p_862->g_21 p_862->g_121 p_862->g_147 p_862->g_145 p_862->g_224 p_862->g_246 p_862->g_195 p_862->g_270 p_862->g_283 p_862->g_286 p_862->g_287 p_862->g_288 p_862->g_301
 * writes: p_862->g_121 p_862->g_comm_values p_862->g_142 p_862->g_145 p_862->g_72 p_862->g_160 p_862->g_195 p_862->g_224 p_862->g_269 p_862->g_285 p_862->g_306 p_862->g_319
 */
uint16_t * func_92(uint64_t  p_93, struct S1 * p_862)
{ /* block id: 18 */
    VECTOR(uint16_t, 4) l_113 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 8UL), 8UL);
    VECTOR(int64_t, 2) l_118 = (VECTOR(int64_t, 2))(0x3596026DF2D4CE27L, 0x7F9E38BD60138ADDL);
    int32_t *l_119 = (void*)0;
    int32_t *l_120 = &p_862->g_121[3][0][4];
    uint16_t *l_122 = &p_862->g_72;
    VECTOR(int16_t, 2) l_129 = (VECTOR(int16_t, 2))(0x677AL, 6L);
    int16_t l_138 = 0x5F18L;
    int64_t *l_139 = (void*)0;
    int64_t *l_140 = (void*)0;
    uint8_t *l_141 = &p_862->g_142;
    int8_t *l_143 = (void*)0;
    int8_t *l_144 = &p_862->g_145;
    int16_t *l_146[3];
    int32_t l_148 = 0x3D1CFCE0L;
    uint64_t l_226 = 0UL;
    int32_t l_238[2][7] = {{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}};
    uint16_t l_268 = 0xC7FDL;
    VECTOR(uint16_t, 2) l_281 = (VECTOR(uint16_t, 2))(8UL, 0xD797L);
    VECTOR(int16_t, 2) l_284 = (VECTOR(int16_t, 2))(0x0476L, (-7L));
    int32_t l_289 = 0x13EADBCFL;
    VECTOR(int32_t, 8) l_290 = (VECTOR(int32_t, 8))(0x480A9839L, (VECTOR(int32_t, 4))(0x480A9839L, (VECTOR(int32_t, 2))(0x480A9839L, 0x27ED652DL), 0x27ED652DL), 0x27ED652DL, 0x480A9839L, 0x27ED652DL);
    VECTOR(int8_t, 16) l_307 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-10L)), (-10L)), (-10L), 9L, (-10L), (VECTOR(int8_t, 2))(9L, (-10L)), (VECTOR(int8_t, 2))(9L, (-10L)), 9L, (-10L), 9L, (-10L));
    uint64_t *l_324 = &l_226;
    uint64_t **l_323 = &l_324;
    int32_t *l_326 = &l_238[1][4];
    int32_t *l_327 = (void*)0;
    int32_t *l_328[1][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_329[4];
    int32_t **l_332 = &l_326;
    int i, j;
    for (i = 0; i < 3; i++)
        l_146[i] = &p_862->g_147;
    for (i = 0; i < 4; i++)
        l_329[i] = 0x27C7C07CC9AF1DE9L;
    if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((6L & (-1L)), (l_148 ^= (safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((((((((GROUP_DIVERGE(1, 1) > ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(l_113.zz)).yyyyyxxyxxxyyyxx, ((VECTOR(uint16_t, 2))(0xA660L, 65529UL)).yyyxyyyyxyyyyyyy))).sc) == ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 16))(1UL, 0x67D5F2590C119CD2L, 0x18CA4024FFAFD2A9L, 0x23B5E53D9B4DC16DL, (safe_mod_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u((~(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_118.yxyxxxyx)).s05)), 1L, (l_113.y , ((((*l_120) = l_118.x) == (l_122 == (void*)0)) ^ ((*l_144) = (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((*l_141) &= (safe_div_func_int32_t_s_s((((((VECTOR(int16_t, 2))(l_129.xy)).hi && (safe_div_func_int64_t_s_s((p_862->g_comm_values[p_862->tid] &= (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((((((safe_mul_func_uint16_t_u_u((((0x44C2L ^ p_93) , &p_862->g_72) == (void*)0), 65527UL)) | p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))]) , (-1L)) , p_93) && p_93) , l_138) , p_862->g_4), 250UL)), 0x104C899101CFD3AFL))), 0x1B330DB1924C0CEFL))) <= p_93) || p_93), p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))]))), p_93)) , p_93), p_862->g_72))))), ((VECTOR(int64_t, 2))((-3L))), ((VECTOR(int64_t, 8))((-1L))), 0x793B69C7970BCD74L, 0x13938A0512332C83L)).sd & p_862->g_96[0][1])), p_93)) , p_862->g_96[4][4]), p_862->g_21.s3)), 0x3838C22D3DACF38BL, 0x237EC01D75DE8CECL, ((VECTOR(uint64_t, 4))(0xEE271D16DB7C975BL)), p_862->g_72, ((VECTOR(uint64_t, 4))(0x82EC59D2773D60B3L)))), ((VECTOR(uint64_t, 16))(0x3C507C2273286A6EL))))).s1) ^ p_93) || 0x20L) == 0UL) , p_862->g_121[1][2][4]) >= 0x6BAEA5EAL), p_93)) ^ (-2L)), p_93))))) | p_93), 0x29A5L)), p_862->g_147)) , (void*)0) == l_143) ^ p_93) == p_862->g_72), 4)), 6)))
    { /* block id: 24 */
        uint8_t *l_161 = &p_862->g_142;
        VECTOR(int8_t, 4) l_170 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x4FL), 0x4FL);
        VECTOR(int64_t, 8) l_182 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        int32_t l_230 = 1L;
        int32_t l_233 = (-2L);
        int32_t l_235 = 0x6FF711D3L;
        VECTOR(uint64_t, 8) l_300 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL);
        int16_t **l_314 = (void*)0;
        int i;
        if (p_93)
        { /* block id: 25 */
            uint16_t *l_173 = (void*)0;
            int32_t l_204 = 0x0F040C40L;
            int32_t l_236 = 0x2ACB81C1L;
            uint8_t **l_267[2];
            int i;
            for (i = 0; i < 2; i++)
                l_267[i] = &p_862->g_160[0];
            for (p_862->g_72 = 25; (p_862->g_72 >= 50); p_862->g_72 = safe_add_func_uint64_t_u_u(p_862->g_72, 1))
            { /* block id: 28 */
                uint8_t **l_159[5][1][10] = {{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}},{{&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141,&l_141}}};
                int32_t l_176 = 0x0B58E85FL;
                int8_t *l_179 = (void*)0;
                int32_t l_232 = 0x4B852471L;
                int32_t l_234 = 1L;
                int32_t l_237 = (-1L);
                int32_t l_239 = (-2L);
                int32_t l_240 = 0x256006E2L;
                int32_t *l_271 = &l_232;
                int i, j, k;
                (*l_120) &= (l_176 = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s(((((((p_862->g_160[3] = (void*)0) == l_161) >= ((safe_rshift_func_uint8_t_u_s((p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))] , (safe_lshift_func_int8_t_s_s((p_862->g_145 ^= (((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_170.zxxw)).y, ((-1L) & (safe_rshift_func_uint8_t_u_u(((l_173 == l_173) || (safe_mod_func_uint8_t_u_u(l_170.x, 3UL))), l_170.w))))), 0x7150D1834DD5D329L)) != p_862->g_147) < p_862->g_4)), 0))), 1)) < 0xCF28L)) != l_176) > p_93) > 0x06D89AF0E199F5E4L), p_93)) , 0xF64F3EF624C37666L) <= p_862->g_96[5][0]), l_176)), p_93)));
                if (l_170.z)
                    continue;
                for (l_176 = 0; (l_176 > 2); l_176 = safe_add_func_uint64_t_u_u(l_176, 6))
                { /* block id: 36 */
                    int64_t l_193 = 0x27D837D6E8952B2BL;
                    int32_t *l_194[10][4][4] = {{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}},{{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0},{&p_862->g_121[3][4][4],&p_862->g_121[1][1][0],&l_176,(void*)0}}};
                    int64_t *l_196 = (void*)0;
                    int64_t *l_197 = (void*)0;
                    int64_t *l_198 = (void*)0;
                    int64_t *l_199 = (void*)0;
                    int64_t *l_200 = (void*)0;
                    int64_t *l_201 = (void*)0;
                    int64_t *l_202 = (void*)0;
                    int64_t *l_203 = &l_193;
                    VECTOR(int32_t, 16) l_205 = (VECTOR(int32_t, 16))(0x2673FA2BL, (VECTOR(int32_t, 4))(0x2673FA2BL, (VECTOR(int32_t, 2))(0x2673FA2BL, 0x16182473L), 0x16182473L), 0x16182473L, 0x2673FA2BL, 0x16182473L, (VECTOR(int32_t, 2))(0x2673FA2BL, 0x16182473L), (VECTOR(int32_t, 2))(0x2673FA2BL, 0x16182473L), 0x2673FA2BL, 0x16182473L, 0x2673FA2BL, 0x16182473L);
                    int64_t l_231 = 6L;
                    int8_t l_257 = 1L;
                    VECTOR(int64_t, 8) l_260 = (VECTOR(int64_t, 8))(0x27BCFC9B87DF7D04L, (VECTOR(int64_t, 4))(0x27BCFC9B87DF7D04L, (VECTOR(int64_t, 2))(0x27BCFC9B87DF7D04L, 0x45FAE3B1732CC213L), 0x45FAE3B1732CC213L), 0x45FAE3B1732CC213L, 0x27BCFC9B87DF7D04L, 0x45FAE3B1732CC213L);
                    int i, j, k;
                    if ((l_204 ^= (((0xA783F8197DD29350L && ((*l_203) = (l_179 != ((((l_170.y , (p_862->g_195 = (safe_add_func_int32_t_s_s(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(0x213F65977C529044L, ((VECTOR(int64_t, 4))(0x0EBD88DAB5425565L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_182.s6626552156621621)).s5b)), 8L)), 0x4EA086712C952AE4L, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(0L, (0x247A2C69L <= p_93), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(0x793B81CEL, (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((0x5DDAB54D3951EFE9L != (safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((l_193 & (&l_176 == l_194[5][0][3])) && p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))]), 252UL)), 4)) == l_170.y) > (*l_120)), p_93))), 15)), p_93)), 0x664D11ADL, 0x7222A015L)).zywwwwww, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x3B074974L))))), 0x394C6079L, 1L, 0x4E233F4AL, 0x0E2EF629L, 0L, 0x077E71CCL)).s039e, ((VECTOR(int32_t, 4))(0x50CD27CEL))))).yyzzyyxx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(8L))))).s07, ((VECTOR(uint32_t, 2))(1UL))))), ((VECTOR(int64_t, 8))(0x0FF88FC330AEBB82L)))).sba)).lo > p_862->g_comm_values[p_862->tid]) , p_862->g_96[0][2]), p_93)))) , 0xE153FFEBL) , p_93) , (void*)0)))) & 4L) | p_93)))
                    { /* block id: 40 */
                        uint8_t *l_212 = &p_862->g_195;
                        uint64_t *l_223 = &p_862->g_224;
                        int32_t l_225 = 1L;
                        int32_t l_227 = 0L;
                        uint8_t *l_228[4];
                        int32_t l_229 = 0x3376282EL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_228[i] = (void*)0;
                        l_204 |= ((*l_120) ^= ((VECTOR(int32_t, 2))(l_205.s7f)).hi);
                        l_229 ^= (p_862->g_147 <= ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_212 = &p_862->g_195) != (p_862->g_160[3] = ((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((p_93 , (l_226 = (l_225 = (((((safe_mul_func_uint8_t_u_u(((*l_161) = (((((p_862->g_72 && ((GROUP_DIVERGE(1, 1) , &p_862->g_96[0][1]) != (void*)0)) < (&p_862->g_4 == (void*)0)) == (safe_add_func_uint64_t_u_u(((*l_223) |= (p_93 , 0x3BAC825AF46B97F8L)), p_862->g_121[2][1][3]))) | p_93) == 253UL)), p_93)) & l_225) < 0xBDL) | GROUP_DIVERGE(1, 1)) || p_93)))), 7)) | p_862->g_21.s0), l_227)) , l_228[2]))), 9L)), 11)), p_862->l_comm_values[(safe_mod_func_uint32_t_u_u(p_862->tid, 11))])) , p_862->g_comm_values[p_862->tid]));
                    }
                    else
                    { /* block id: 50 */
                        uint64_t l_241 = 0x59FAD49497A160B6L;
                        int32_t *l_244 = &p_862->g_121[2][2][0];
                        int32_t **l_245 = &l_194[2][1][2];
                        l_241--;
                        (*l_245) = l_244;
                        p_862->g_269[5][2] = (((((VECTOR(int64_t, 8))(p_862->g_246.s46305556)).s4 > (safe_sub_func_int64_t_s_s(0x41E13D4BFED72C55L, ((*l_120) = p_862->g_142)))) , (0x7AF6L ^ l_182.s5)) < ((safe_add_func_uint8_t_u_u(((((((safe_lshift_func_uint16_t_u_s(p_93, (((!(safe_add_func_int32_t_s_s((safe_div_func_uint64_t_u_u(l_257, ((VECTOR(int64_t, 16))(0x67DE76BAA813B8E7L, (safe_lshift_func_int16_t_s_u(p_93, 6)), ((VECTOR(int64_t, 8))(l_260.s65244157)), ((((safe_div_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((&p_862->g_160[0] == l_267[1]), 0xF7L)), p_93)))) > p_93) , p_93) || l_268), ((VECTOR(int64_t, 4))(0x0FD8152184E34E2CL)), (-8L))).s0)), l_236))) , 0x140F11B7L) != p_93))) ^ 0x6FL) && p_862->g_195) || l_232) < p_93) & p_862->g_21.s5), 0x59L)) , p_93));
                    }
                }
                (*l_271) &= ((p_862->g_270 != (void*)0) & (l_233 ^= (*l_120)));
            }
            (*l_120) = (safe_lshift_func_int8_t_s_s((p_93 || l_235), 2));
        }
        else
        { /* block id: 61 */
            int8_t l_280 = 0x60L;
            VECTOR(int16_t, 4) l_282 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L);
            int32_t *l_291 = &l_230;
            int i;
            (*l_291) ^= (safe_lshift_func_int16_t_s_s((255UL | (safe_mul_func_int8_t_s_s((GROUP_DIVERGE(0, 1) ^ ((((safe_mod_func_uint16_t_u_u(p_93, l_280)) | (2UL == ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_281.xx)).xyyxxxxyxyyxyyxx)))), ((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_282.wzyzzwzw)).odd)).xwyzwxzwyzzwwyyy)), ((VECTOR(int16_t, 8))(p_862->g_283.s47536035)).s6047017603077556, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_284.xyxxyyxyyyyyxxxy)).even)).s6230456044646664))))))))).s7)) != FAKE_DIVERGE(p_862->global_0_offset, get_global_id(0), 10)) <= ((p_862->g_285[7] = l_139) != &p_93))), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(0x03L, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_862->g_286.yw)), 0x25L, 0x3AL)).yyzwzyyyzwwwxxzz, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_862->g_287.s71)), 0x21L, 0x46L)).yxzxwywzzwzwyxyx, ((VECTOR(int8_t, 4))(0x04L, (-1L), 0x00L, 0x3CL)).ywyxyxxwxzzzxyxw))).odd, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((*l_144) ^= 0x25L), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_862->g_288.zwyy))))))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x16L, 0L)), 0L, 8L)), ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(((*l_120) || (p_862->g_246.s2 != p_93)), 0L, 0x06L, ((VECTOR(int8_t, 2))(0x33L)), p_862->g_147, (-5L), 0x56L)), (int8_t)l_289))))).s66c9, ((VECTOR(int8_t, 4))(0x1BL))))), 1L, 0x26L, 0x66L)).s67)).xxxx, ((VECTOR(int8_t, 4))(0x68L))))))).wyxxwwwy)), ((VECTOR(int8_t, 8))(1L))))).s0003653037413435))).s3, ((VECTOR(int8_t, 8))(0x55L)), 0x23L, ((VECTOR(int8_t, 4))((-7L))), 0x2CL)).s395d))), ((VECTOR(int8_t, 4))(2L)), ((VECTOR(int8_t, 4))(0x31L))))).y))), l_290.s0));
        }
        if ((p_93 && (FAKE_DIVERGE(p_862->group_1_offset, get_group_id(1), 10) >= (safe_lshift_func_int16_t_s_s((p_93 == (p_862->g_287.s6 >= p_862->g_246.s7)), 13)))))
        { /* block id: 66 */
            VECTOR(uint64_t, 16) l_302 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0xE2347F5DD222F7FCL), 0xE2347F5DD222F7FCL), 0xE2347F5DD222F7FCL, 3UL, 0xE2347F5DD222F7FCL, (VECTOR(uint64_t, 2))(3UL, 0xE2347F5DD222F7FCL), (VECTOR(uint64_t, 2))(3UL, 0xE2347F5DD222F7FCL), 3UL, 0xE2347F5DD222F7FCL, 3UL, 0xE2347F5DD222F7FCL);
            uint32_t *l_305 = &p_862->g_306;
            uint8_t **l_312 = (void*)0;
            uint8_t **l_313 = &p_862->g_160[3];
            int16_t ***l_315 = (void*)0;
            int16_t ***l_316 = &l_314;
            int i;
            (*l_120) = (safe_mod_func_int16_t_s_s(((!(safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), p_93))) == ((*l_144) = (p_93 <= ((l_230 = ((~(safe_rshift_func_uint8_t_u_s((((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_300.s73)), 18446744073709551611UL, 0xF52606973352393EL, 3UL, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 8))(p_862->g_301.yyxxyxyx)), ((VECTOR(uint64_t, 2))(0x28C3E5849BD4E487L, 0x3272226A998CC790L)).yyyxxxyx))), 18446744073709551615UL, 5UL, 0x4A2F87CA8DFE0FB7L)).odd)).even, ((VECTOR(uint64_t, 4))(l_302.sab4b))))).x , (safe_mul_func_uint8_t_u_u(6UL, ((((*l_305) = l_182.s0) , ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(l_307.sb452)).even, ((VECTOR(int8_t, 8))((p_862->g_246.s1 > (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_93, ((((*l_313) = l_143) == &p_862->g_195) | p_862->g_246.s3))), 0xAAL))), ((VECTOR(int8_t, 4))(0x20L)), p_93, 0x6FL, 0x2DL)).s74))).even, ((VECTOR(int8_t, 2))((-5L))), 1L)).xxzwwyzx, ((VECTOR(int8_t, 8))(0L))))), ((VECTOR(int8_t, 8))(0x79L)), ((VECTOR(int8_t, 8))(0x6EL))))).hi, ((VECTOR(int8_t, 4))(0x1CL))))), ((VECTOR(int8_t, 4))((-2L)))))).odd, ((VECTOR(int8_t, 2))(0x37L))))).xyyxxyyyyyxyxxxx)).s9, p_93, 0L, ((VECTOR(int8_t, 2))((-1L))), p_93, p_93, 2L, 0x77L, 0x24L, p_93, ((VECTOR(int8_t, 4))(0L)), (-1L))))).sc) || 251UL)))), p_93))) || p_93)) >= p_862->g_121[3][2][1])))), l_302.se));
            (*l_316) = l_314;
            return &p_862->g_72;
        }
        else
        { /* block id: 74 */
            int32_t **l_317 = (void*)0;
            int32_t **l_318[6] = {&l_120,&l_120,&l_120,&l_120,&l_120,&l_120};
            int i;
            p_862->g_319[2] = &l_235;
            (*l_120) = 0x6EBF1B2BL;
        }
        return &p_862->g_72;
    }
    else
    { /* block id: 79 */
        int32_t *l_320 = &l_238[1][4];
        uint64_t **l_325[7];
        int i;
        for (i = 0; i < 7; i++)
            l_325[i] = &l_324;
        (*l_320) &= (+((*l_120) |= p_93));
        for (l_289 = 0; (l_289 < 11); l_289 = safe_add_func_uint8_t_u_u(l_289, 2))
        { /* block id: 84 */
            l_325[6] = l_323;
        }
    }
    l_329[1]++;
    (*l_326) = (p_93 == 0x138A76134B4CCF6AL);
    (*l_332) = &l_289;
    return &p_862->g_72;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S1 c_863;
    struct S1* p_862 = &c_863;
    struct S1 c_864 = {
        4L, // p_862->g_2
        0L, // p_862->g_3
        1L, // p_862->g_4
        (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 5UL), 5UL), 5UL, 0xE7L, 5UL), // p_862->g_21
        1UL, // p_862->g_39
        0x102DL, // p_862->g_64
        &p_862->g_64, // p_862->g_63
        0xB816L, // p_862->g_72
        {&p_862->g_72,&p_862->g_72}, // p_862->g_71
        0x1BL, // p_862->g_87
        0x60D08F1BL, // p_862->g_90
        4294967295UL, // p_862->g_91
        {{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L},{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L},{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L},{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L},{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L},{0xA3317083D4BAF720L,5UL,0UL,5UL,0xA3317083D4BAF720L}}, // p_862->g_96
        {{{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)}},{{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)}},{{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)}},{{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)},{(-1L),(-10L),(-1L),(-1L),(-1L)}}}, // p_862->g_121
        1UL, // p_862->g_142
        0x07L, // p_862->g_145
        0x5BF8L, // p_862->g_147
        {&p_862->g_142,&p_862->g_142,&p_862->g_142,&p_862->g_142}, // p_862->g_160
        1UL, // p_862->g_195
        18446744073709551610UL, // p_862->g_224
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_862->g_246
        {{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL},{1UL,1UL,1UL}}, // p_862->g_269
        (void*)0, // p_862->g_270
        (VECTOR(int16_t, 8))(0x5FC7L, (VECTOR(int16_t, 4))(0x5FC7L, (VECTOR(int16_t, 2))(0x5FC7L, 5L), 5L), 5L, 0x5FC7L, 5L), // p_862->g_283
        {&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1],&p_862->g_96[4][1]}, // p_862->g_285
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x66L), 0x66L), // p_862->g_286
        (VECTOR(int8_t, 8))(4L, (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x3AL), 0x3AL), 0x3AL, 4L, 0x3AL), // p_862->g_287
        (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x57L), 0x57L), // p_862->g_288
        (VECTOR(uint64_t, 2))(0x85E9CE2A3B59A8C3L, 18446744073709551606UL), // p_862->g_301
        0x4D1F3700L, // p_862->g_306
        {&p_862->g_121[3][2][1],&p_862->g_121[3][2][1],&p_862->g_121[3][2][1]}, // p_862->g_319
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), (-7L)), (-7L)), (-7L), (-3L), (-7L), (VECTOR(int8_t, 2))((-3L), (-7L)), (VECTOR(int8_t, 2))((-3L), (-7L)), (-3L), (-7L), (-3L), (-7L)), // p_862->g_342
        &p_862->g_147, // p_862->g_349
        (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 1UL), 1UL), 1UL, 4294967286UL, 1UL, (VECTOR(uint32_t, 2))(4294967286UL, 1UL), (VECTOR(uint32_t, 2))(4294967286UL, 1UL), 4294967286UL, 1UL, 4294967286UL, 1UL), // p_862->g_374
        (VECTOR(uint32_t, 16))(0xF53F3008L, (VECTOR(uint32_t, 4))(0xF53F3008L, (VECTOR(uint32_t, 2))(0xF53F3008L, 0x16FB4B63L), 0x16FB4B63L), 0x16FB4B63L, 0xF53F3008L, 0x16FB4B63L, (VECTOR(uint32_t, 2))(0xF53F3008L, 0x16FB4B63L), (VECTOR(uint32_t, 2))(0xF53F3008L, 0x16FB4B63L), 0xF53F3008L, 0x16FB4B63L, 0xF53F3008L, 0x16FB4B63L), // p_862->g_377
        (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-1L)), (-1L)), // p_862->g_391
        0L, // p_862->g_393
        (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x55043C9BL), 0x55043C9BL), 0x55043C9BL, 6L, 0x55043C9BL), // p_862->g_397
        (VECTOR(int64_t, 4))(0x39E87FC26D02DDA5L, (VECTOR(int64_t, 2))(0x39E87FC26D02DDA5L, (-1L)), (-1L)), // p_862->g_435
        (VECTOR(int32_t, 4))(0x6073A740L, (VECTOR(int32_t, 2))(0x6073A740L, 0x6C986C11L), 0x6C986C11L), // p_862->g_458
        (void*)0, // p_862->g_541
        4294967295UL, // p_862->g_546
        (VECTOR(uint32_t, 4))(0x8FFE9378L, (VECTOR(uint32_t, 2))(0x8FFE9378L, 4294967290UL), 4294967290UL), // p_862->g_581
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-5L)), (-5L)), // p_862->g_582
        (VECTOR(uint8_t, 16))(0x93L, (VECTOR(uint8_t, 4))(0x93L, (VECTOR(uint8_t, 2))(0x93L, 1UL), 1UL), 1UL, 0x93L, 1UL, (VECTOR(uint8_t, 2))(0x93L, 1UL), (VECTOR(uint8_t, 2))(0x93L, 1UL), 0x93L, 1UL, 0x93L, 1UL), // p_862->g_584
        (VECTOR(uint8_t, 4))(0x85L, (VECTOR(uint8_t, 2))(0x85L, 255UL), 255UL), // p_862->g_590
        (-2L), // p_862->g_620
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x17L), 0x17L), // p_862->g_628
        (VECTOR(int32_t, 4))(0x10195129L, (VECTOR(int32_t, 2))(0x10195129L, 1L), 1L), // p_862->g_632
        (VECTOR(int32_t, 4))(0x6C96FF16L, (VECTOR(int32_t, 2))(0x6C96FF16L, 0x2C099515L), 0x2C099515L), // p_862->g_633
        (VECTOR(uint8_t, 8))(0x82L, (VECTOR(uint8_t, 4))(0x82L, (VECTOR(uint8_t, 2))(0x82L, 0xB4L), 0xB4L), 0xB4L, 0x82L, 0xB4L), // p_862->g_643
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x17B56CCAL), 0x17B56CCAL), 0x17B56CCAL, 1L, 0x17B56CCAL), // p_862->g_671
        1L, // p_862->g_679
        {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL}, // p_862->g_681
        (VECTOR(int8_t, 4))(0x0AL, (VECTOR(int8_t, 2))(0x0AL, 0x5FL), 0x5FL), // p_862->g_746
        &p_862->g_349, // p_862->g_768
        {{&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768},{&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768,&p_862->g_768}}, // p_862->g_767
        0xE0B66A58L, // p_862->g_770
        7L, // p_862->g_771
        18446744073709551612UL, // p_862->g_772
        {0x5E75C2B5CDD2FB71L,0L,0xEEL}, // p_862->g_775
        {{&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1]},{&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1],&p_862->g_71[1]}}, // p_862->g_834
        &p_862->g_834[0][3], // p_862->g_833
        (VECTOR(uint16_t, 4))(0x8E7CL, (VECTOR(uint16_t, 2))(0x8E7CL, 0x2DDAL), 0x2DDAL), // p_862->g_836
        (VECTOR(uint8_t, 8))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 252UL), 252UL), 252UL, 0xCFL, 252UL), // p_862->g_845
        (VECTOR(uint8_t, 4))(0xF7L, (VECTOR(uint8_t, 2))(0xF7L, 0x15L), 0x15L), // p_862->g_846
        (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x5531L), 0x5531L), 0x5531L, (-6L), 0x5531L, (VECTOR(int16_t, 2))((-6L), 0x5531L), (VECTOR(int16_t, 2))((-6L), 0x5531L), (-6L), 0x5531L, (-6L), 0x5531L), // p_862->g_852
        (VECTOR(int16_t, 16))(0x1513L, (VECTOR(int16_t, 4))(0x1513L, (VECTOR(int16_t, 2))(0x1513L, (-1L)), (-1L)), (-1L), 0x1513L, (-1L), (VECTOR(int16_t, 2))(0x1513L, (-1L)), (VECTOR(int16_t, 2))(0x1513L, (-1L)), 0x1513L, (-1L), 0x1513L, (-1L)), // p_862->g_853
        {0x1D3E83FC83DE289AL,3L,0UL}, // p_862->g_856
        &p_862->g_856, // p_862->g_857
        0, // p_862->v_collective
        sequence_input[get_global_id(0)], // p_862->global_0_offset
        sequence_input[get_global_id(1)], // p_862->global_1_offset
        sequence_input[get_global_id(2)], // p_862->global_2_offset
        sequence_input[get_local_id(0)], // p_862->local_0_offset
        sequence_input[get_local_id(1)], // p_862->local_1_offset
        sequence_input[get_local_id(2)], // p_862->local_2_offset
        sequence_input[get_group_id(0)], // p_862->group_0_offset
        sequence_input[get_group_id(1)], // p_862->group_1_offset
        sequence_input[get_group_id(2)], // p_862->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_862->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_863 = c_864;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_862);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_862->g_2, "p_862->g_2", print_hash_value);
    transparent_crc(p_862->g_3, "p_862->g_3", print_hash_value);
    transparent_crc(p_862->g_4, "p_862->g_4", print_hash_value);
    transparent_crc(p_862->g_21.s0, "p_862->g_21.s0", print_hash_value);
    transparent_crc(p_862->g_21.s1, "p_862->g_21.s1", print_hash_value);
    transparent_crc(p_862->g_21.s2, "p_862->g_21.s2", print_hash_value);
    transparent_crc(p_862->g_21.s3, "p_862->g_21.s3", print_hash_value);
    transparent_crc(p_862->g_21.s4, "p_862->g_21.s4", print_hash_value);
    transparent_crc(p_862->g_21.s5, "p_862->g_21.s5", print_hash_value);
    transparent_crc(p_862->g_21.s6, "p_862->g_21.s6", print_hash_value);
    transparent_crc(p_862->g_21.s7, "p_862->g_21.s7", print_hash_value);
    transparent_crc(p_862->g_39, "p_862->g_39", print_hash_value);
    transparent_crc(p_862->g_64, "p_862->g_64", print_hash_value);
    transparent_crc(p_862->g_72, "p_862->g_72", print_hash_value);
    transparent_crc(p_862->g_87, "p_862->g_87", print_hash_value);
    transparent_crc(p_862->g_90, "p_862->g_90", print_hash_value);
    transparent_crc(p_862->g_91, "p_862->g_91", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_862->g_96[i][j], "p_862->g_96[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_862->g_121[i][j][k], "p_862->g_121[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_862->g_142, "p_862->g_142", print_hash_value);
    transparent_crc(p_862->g_145, "p_862->g_145", print_hash_value);
    transparent_crc(p_862->g_147, "p_862->g_147", print_hash_value);
    transparent_crc(p_862->g_195, "p_862->g_195", print_hash_value);
    transparent_crc(p_862->g_224, "p_862->g_224", print_hash_value);
    transparent_crc(p_862->g_246.s0, "p_862->g_246.s0", print_hash_value);
    transparent_crc(p_862->g_246.s1, "p_862->g_246.s1", print_hash_value);
    transparent_crc(p_862->g_246.s2, "p_862->g_246.s2", print_hash_value);
    transparent_crc(p_862->g_246.s3, "p_862->g_246.s3", print_hash_value);
    transparent_crc(p_862->g_246.s4, "p_862->g_246.s4", print_hash_value);
    transparent_crc(p_862->g_246.s5, "p_862->g_246.s5", print_hash_value);
    transparent_crc(p_862->g_246.s6, "p_862->g_246.s6", print_hash_value);
    transparent_crc(p_862->g_246.s7, "p_862->g_246.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_862->g_269[i][j], "p_862->g_269[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_862->g_283.s0, "p_862->g_283.s0", print_hash_value);
    transparent_crc(p_862->g_283.s1, "p_862->g_283.s1", print_hash_value);
    transparent_crc(p_862->g_283.s2, "p_862->g_283.s2", print_hash_value);
    transparent_crc(p_862->g_283.s3, "p_862->g_283.s3", print_hash_value);
    transparent_crc(p_862->g_283.s4, "p_862->g_283.s4", print_hash_value);
    transparent_crc(p_862->g_283.s5, "p_862->g_283.s5", print_hash_value);
    transparent_crc(p_862->g_283.s6, "p_862->g_283.s6", print_hash_value);
    transparent_crc(p_862->g_283.s7, "p_862->g_283.s7", print_hash_value);
    transparent_crc(p_862->g_286.x, "p_862->g_286.x", print_hash_value);
    transparent_crc(p_862->g_286.y, "p_862->g_286.y", print_hash_value);
    transparent_crc(p_862->g_286.z, "p_862->g_286.z", print_hash_value);
    transparent_crc(p_862->g_286.w, "p_862->g_286.w", print_hash_value);
    transparent_crc(p_862->g_287.s0, "p_862->g_287.s0", print_hash_value);
    transparent_crc(p_862->g_287.s1, "p_862->g_287.s1", print_hash_value);
    transparent_crc(p_862->g_287.s2, "p_862->g_287.s2", print_hash_value);
    transparent_crc(p_862->g_287.s3, "p_862->g_287.s3", print_hash_value);
    transparent_crc(p_862->g_287.s4, "p_862->g_287.s4", print_hash_value);
    transparent_crc(p_862->g_287.s5, "p_862->g_287.s5", print_hash_value);
    transparent_crc(p_862->g_287.s6, "p_862->g_287.s6", print_hash_value);
    transparent_crc(p_862->g_287.s7, "p_862->g_287.s7", print_hash_value);
    transparent_crc(p_862->g_288.x, "p_862->g_288.x", print_hash_value);
    transparent_crc(p_862->g_288.y, "p_862->g_288.y", print_hash_value);
    transparent_crc(p_862->g_288.z, "p_862->g_288.z", print_hash_value);
    transparent_crc(p_862->g_288.w, "p_862->g_288.w", print_hash_value);
    transparent_crc(p_862->g_301.x, "p_862->g_301.x", print_hash_value);
    transparent_crc(p_862->g_301.y, "p_862->g_301.y", print_hash_value);
    transparent_crc(p_862->g_306, "p_862->g_306", print_hash_value);
    transparent_crc(p_862->g_342.s0, "p_862->g_342.s0", print_hash_value);
    transparent_crc(p_862->g_342.s1, "p_862->g_342.s1", print_hash_value);
    transparent_crc(p_862->g_342.s2, "p_862->g_342.s2", print_hash_value);
    transparent_crc(p_862->g_342.s3, "p_862->g_342.s3", print_hash_value);
    transparent_crc(p_862->g_342.s4, "p_862->g_342.s4", print_hash_value);
    transparent_crc(p_862->g_342.s5, "p_862->g_342.s5", print_hash_value);
    transparent_crc(p_862->g_342.s6, "p_862->g_342.s6", print_hash_value);
    transparent_crc(p_862->g_342.s7, "p_862->g_342.s7", print_hash_value);
    transparent_crc(p_862->g_342.s8, "p_862->g_342.s8", print_hash_value);
    transparent_crc(p_862->g_342.s9, "p_862->g_342.s9", print_hash_value);
    transparent_crc(p_862->g_342.sa, "p_862->g_342.sa", print_hash_value);
    transparent_crc(p_862->g_342.sb, "p_862->g_342.sb", print_hash_value);
    transparent_crc(p_862->g_342.sc, "p_862->g_342.sc", print_hash_value);
    transparent_crc(p_862->g_342.sd, "p_862->g_342.sd", print_hash_value);
    transparent_crc(p_862->g_342.se, "p_862->g_342.se", print_hash_value);
    transparent_crc(p_862->g_342.sf, "p_862->g_342.sf", print_hash_value);
    transparent_crc(p_862->g_374.s0, "p_862->g_374.s0", print_hash_value);
    transparent_crc(p_862->g_374.s1, "p_862->g_374.s1", print_hash_value);
    transparent_crc(p_862->g_374.s2, "p_862->g_374.s2", print_hash_value);
    transparent_crc(p_862->g_374.s3, "p_862->g_374.s3", print_hash_value);
    transparent_crc(p_862->g_374.s4, "p_862->g_374.s4", print_hash_value);
    transparent_crc(p_862->g_374.s5, "p_862->g_374.s5", print_hash_value);
    transparent_crc(p_862->g_374.s6, "p_862->g_374.s6", print_hash_value);
    transparent_crc(p_862->g_374.s7, "p_862->g_374.s7", print_hash_value);
    transparent_crc(p_862->g_374.s8, "p_862->g_374.s8", print_hash_value);
    transparent_crc(p_862->g_374.s9, "p_862->g_374.s9", print_hash_value);
    transparent_crc(p_862->g_374.sa, "p_862->g_374.sa", print_hash_value);
    transparent_crc(p_862->g_374.sb, "p_862->g_374.sb", print_hash_value);
    transparent_crc(p_862->g_374.sc, "p_862->g_374.sc", print_hash_value);
    transparent_crc(p_862->g_374.sd, "p_862->g_374.sd", print_hash_value);
    transparent_crc(p_862->g_374.se, "p_862->g_374.se", print_hash_value);
    transparent_crc(p_862->g_374.sf, "p_862->g_374.sf", print_hash_value);
    transparent_crc(p_862->g_377.s0, "p_862->g_377.s0", print_hash_value);
    transparent_crc(p_862->g_377.s1, "p_862->g_377.s1", print_hash_value);
    transparent_crc(p_862->g_377.s2, "p_862->g_377.s2", print_hash_value);
    transparent_crc(p_862->g_377.s3, "p_862->g_377.s3", print_hash_value);
    transparent_crc(p_862->g_377.s4, "p_862->g_377.s4", print_hash_value);
    transparent_crc(p_862->g_377.s5, "p_862->g_377.s5", print_hash_value);
    transparent_crc(p_862->g_377.s6, "p_862->g_377.s6", print_hash_value);
    transparent_crc(p_862->g_377.s7, "p_862->g_377.s7", print_hash_value);
    transparent_crc(p_862->g_377.s8, "p_862->g_377.s8", print_hash_value);
    transparent_crc(p_862->g_377.s9, "p_862->g_377.s9", print_hash_value);
    transparent_crc(p_862->g_377.sa, "p_862->g_377.sa", print_hash_value);
    transparent_crc(p_862->g_377.sb, "p_862->g_377.sb", print_hash_value);
    transparent_crc(p_862->g_377.sc, "p_862->g_377.sc", print_hash_value);
    transparent_crc(p_862->g_377.sd, "p_862->g_377.sd", print_hash_value);
    transparent_crc(p_862->g_377.se, "p_862->g_377.se", print_hash_value);
    transparent_crc(p_862->g_377.sf, "p_862->g_377.sf", print_hash_value);
    transparent_crc(p_862->g_391.x, "p_862->g_391.x", print_hash_value);
    transparent_crc(p_862->g_391.y, "p_862->g_391.y", print_hash_value);
    transparent_crc(p_862->g_391.z, "p_862->g_391.z", print_hash_value);
    transparent_crc(p_862->g_391.w, "p_862->g_391.w", print_hash_value);
    transparent_crc(p_862->g_393, "p_862->g_393", print_hash_value);
    transparent_crc(p_862->g_397.s0, "p_862->g_397.s0", print_hash_value);
    transparent_crc(p_862->g_397.s1, "p_862->g_397.s1", print_hash_value);
    transparent_crc(p_862->g_397.s2, "p_862->g_397.s2", print_hash_value);
    transparent_crc(p_862->g_397.s3, "p_862->g_397.s3", print_hash_value);
    transparent_crc(p_862->g_397.s4, "p_862->g_397.s4", print_hash_value);
    transparent_crc(p_862->g_397.s5, "p_862->g_397.s5", print_hash_value);
    transparent_crc(p_862->g_397.s6, "p_862->g_397.s6", print_hash_value);
    transparent_crc(p_862->g_397.s7, "p_862->g_397.s7", print_hash_value);
    transparent_crc(p_862->g_435.x, "p_862->g_435.x", print_hash_value);
    transparent_crc(p_862->g_435.y, "p_862->g_435.y", print_hash_value);
    transparent_crc(p_862->g_435.z, "p_862->g_435.z", print_hash_value);
    transparent_crc(p_862->g_435.w, "p_862->g_435.w", print_hash_value);
    transparent_crc(p_862->g_458.x, "p_862->g_458.x", print_hash_value);
    transparent_crc(p_862->g_458.y, "p_862->g_458.y", print_hash_value);
    transparent_crc(p_862->g_458.z, "p_862->g_458.z", print_hash_value);
    transparent_crc(p_862->g_458.w, "p_862->g_458.w", print_hash_value);
    transparent_crc(p_862->g_546, "p_862->g_546", print_hash_value);
    transparent_crc(p_862->g_581.x, "p_862->g_581.x", print_hash_value);
    transparent_crc(p_862->g_581.y, "p_862->g_581.y", print_hash_value);
    transparent_crc(p_862->g_581.z, "p_862->g_581.z", print_hash_value);
    transparent_crc(p_862->g_581.w, "p_862->g_581.w", print_hash_value);
    transparent_crc(p_862->g_582.x, "p_862->g_582.x", print_hash_value);
    transparent_crc(p_862->g_582.y, "p_862->g_582.y", print_hash_value);
    transparent_crc(p_862->g_582.z, "p_862->g_582.z", print_hash_value);
    transparent_crc(p_862->g_582.w, "p_862->g_582.w", print_hash_value);
    transparent_crc(p_862->g_584.s0, "p_862->g_584.s0", print_hash_value);
    transparent_crc(p_862->g_584.s1, "p_862->g_584.s1", print_hash_value);
    transparent_crc(p_862->g_584.s2, "p_862->g_584.s2", print_hash_value);
    transparent_crc(p_862->g_584.s3, "p_862->g_584.s3", print_hash_value);
    transparent_crc(p_862->g_584.s4, "p_862->g_584.s4", print_hash_value);
    transparent_crc(p_862->g_584.s5, "p_862->g_584.s5", print_hash_value);
    transparent_crc(p_862->g_584.s6, "p_862->g_584.s6", print_hash_value);
    transparent_crc(p_862->g_584.s7, "p_862->g_584.s7", print_hash_value);
    transparent_crc(p_862->g_584.s8, "p_862->g_584.s8", print_hash_value);
    transparent_crc(p_862->g_584.s9, "p_862->g_584.s9", print_hash_value);
    transparent_crc(p_862->g_584.sa, "p_862->g_584.sa", print_hash_value);
    transparent_crc(p_862->g_584.sb, "p_862->g_584.sb", print_hash_value);
    transparent_crc(p_862->g_584.sc, "p_862->g_584.sc", print_hash_value);
    transparent_crc(p_862->g_584.sd, "p_862->g_584.sd", print_hash_value);
    transparent_crc(p_862->g_584.se, "p_862->g_584.se", print_hash_value);
    transparent_crc(p_862->g_584.sf, "p_862->g_584.sf", print_hash_value);
    transparent_crc(p_862->g_590.x, "p_862->g_590.x", print_hash_value);
    transparent_crc(p_862->g_590.y, "p_862->g_590.y", print_hash_value);
    transparent_crc(p_862->g_590.z, "p_862->g_590.z", print_hash_value);
    transparent_crc(p_862->g_590.w, "p_862->g_590.w", print_hash_value);
    transparent_crc(p_862->g_620, "p_862->g_620", print_hash_value);
    transparent_crc(p_862->g_628.x, "p_862->g_628.x", print_hash_value);
    transparent_crc(p_862->g_628.y, "p_862->g_628.y", print_hash_value);
    transparent_crc(p_862->g_628.z, "p_862->g_628.z", print_hash_value);
    transparent_crc(p_862->g_628.w, "p_862->g_628.w", print_hash_value);
    transparent_crc(p_862->g_632.x, "p_862->g_632.x", print_hash_value);
    transparent_crc(p_862->g_632.y, "p_862->g_632.y", print_hash_value);
    transparent_crc(p_862->g_632.z, "p_862->g_632.z", print_hash_value);
    transparent_crc(p_862->g_632.w, "p_862->g_632.w", print_hash_value);
    transparent_crc(p_862->g_633.x, "p_862->g_633.x", print_hash_value);
    transparent_crc(p_862->g_633.y, "p_862->g_633.y", print_hash_value);
    transparent_crc(p_862->g_633.z, "p_862->g_633.z", print_hash_value);
    transparent_crc(p_862->g_633.w, "p_862->g_633.w", print_hash_value);
    transparent_crc(p_862->g_643.s0, "p_862->g_643.s0", print_hash_value);
    transparent_crc(p_862->g_643.s1, "p_862->g_643.s1", print_hash_value);
    transparent_crc(p_862->g_643.s2, "p_862->g_643.s2", print_hash_value);
    transparent_crc(p_862->g_643.s3, "p_862->g_643.s3", print_hash_value);
    transparent_crc(p_862->g_643.s4, "p_862->g_643.s4", print_hash_value);
    transparent_crc(p_862->g_643.s5, "p_862->g_643.s5", print_hash_value);
    transparent_crc(p_862->g_643.s6, "p_862->g_643.s6", print_hash_value);
    transparent_crc(p_862->g_643.s7, "p_862->g_643.s7", print_hash_value);
    transparent_crc(p_862->g_671.s0, "p_862->g_671.s0", print_hash_value);
    transparent_crc(p_862->g_671.s1, "p_862->g_671.s1", print_hash_value);
    transparent_crc(p_862->g_671.s2, "p_862->g_671.s2", print_hash_value);
    transparent_crc(p_862->g_671.s3, "p_862->g_671.s3", print_hash_value);
    transparent_crc(p_862->g_671.s4, "p_862->g_671.s4", print_hash_value);
    transparent_crc(p_862->g_671.s5, "p_862->g_671.s5", print_hash_value);
    transparent_crc(p_862->g_671.s6, "p_862->g_671.s6", print_hash_value);
    transparent_crc(p_862->g_671.s7, "p_862->g_671.s7", print_hash_value);
    transparent_crc(p_862->g_679, "p_862->g_679", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_862->g_681[i], "p_862->g_681[i]", print_hash_value);

    }
    transparent_crc(p_862->g_746.x, "p_862->g_746.x", print_hash_value);
    transparent_crc(p_862->g_746.y, "p_862->g_746.y", print_hash_value);
    transparent_crc(p_862->g_746.z, "p_862->g_746.z", print_hash_value);
    transparent_crc(p_862->g_746.w, "p_862->g_746.w", print_hash_value);
    transparent_crc(p_862->g_770, "p_862->g_770", print_hash_value);
    transparent_crc(p_862->g_771, "p_862->g_771", print_hash_value);
    transparent_crc(p_862->g_772, "p_862->g_772", print_hash_value);
    transparent_crc(p_862->g_775.f0, "p_862->g_775.f0", print_hash_value);
    transparent_crc(p_862->g_775.f1, "p_862->g_775.f1", print_hash_value);
    transparent_crc(p_862->g_775.f2, "p_862->g_775.f2", print_hash_value);
    transparent_crc(p_862->g_836.x, "p_862->g_836.x", print_hash_value);
    transparent_crc(p_862->g_836.y, "p_862->g_836.y", print_hash_value);
    transparent_crc(p_862->g_836.z, "p_862->g_836.z", print_hash_value);
    transparent_crc(p_862->g_836.w, "p_862->g_836.w", print_hash_value);
    transparent_crc(p_862->g_845.s0, "p_862->g_845.s0", print_hash_value);
    transparent_crc(p_862->g_845.s1, "p_862->g_845.s1", print_hash_value);
    transparent_crc(p_862->g_845.s2, "p_862->g_845.s2", print_hash_value);
    transparent_crc(p_862->g_845.s3, "p_862->g_845.s3", print_hash_value);
    transparent_crc(p_862->g_845.s4, "p_862->g_845.s4", print_hash_value);
    transparent_crc(p_862->g_845.s5, "p_862->g_845.s5", print_hash_value);
    transparent_crc(p_862->g_845.s6, "p_862->g_845.s6", print_hash_value);
    transparent_crc(p_862->g_845.s7, "p_862->g_845.s7", print_hash_value);
    transparent_crc(p_862->g_846.x, "p_862->g_846.x", print_hash_value);
    transparent_crc(p_862->g_846.y, "p_862->g_846.y", print_hash_value);
    transparent_crc(p_862->g_846.z, "p_862->g_846.z", print_hash_value);
    transparent_crc(p_862->g_846.w, "p_862->g_846.w", print_hash_value);
    transparent_crc(p_862->g_852.s0, "p_862->g_852.s0", print_hash_value);
    transparent_crc(p_862->g_852.s1, "p_862->g_852.s1", print_hash_value);
    transparent_crc(p_862->g_852.s2, "p_862->g_852.s2", print_hash_value);
    transparent_crc(p_862->g_852.s3, "p_862->g_852.s3", print_hash_value);
    transparent_crc(p_862->g_852.s4, "p_862->g_852.s4", print_hash_value);
    transparent_crc(p_862->g_852.s5, "p_862->g_852.s5", print_hash_value);
    transparent_crc(p_862->g_852.s6, "p_862->g_852.s6", print_hash_value);
    transparent_crc(p_862->g_852.s7, "p_862->g_852.s7", print_hash_value);
    transparent_crc(p_862->g_852.s8, "p_862->g_852.s8", print_hash_value);
    transparent_crc(p_862->g_852.s9, "p_862->g_852.s9", print_hash_value);
    transparent_crc(p_862->g_852.sa, "p_862->g_852.sa", print_hash_value);
    transparent_crc(p_862->g_852.sb, "p_862->g_852.sb", print_hash_value);
    transparent_crc(p_862->g_852.sc, "p_862->g_852.sc", print_hash_value);
    transparent_crc(p_862->g_852.sd, "p_862->g_852.sd", print_hash_value);
    transparent_crc(p_862->g_852.se, "p_862->g_852.se", print_hash_value);
    transparent_crc(p_862->g_852.sf, "p_862->g_852.sf", print_hash_value);
    transparent_crc(p_862->g_853.s0, "p_862->g_853.s0", print_hash_value);
    transparent_crc(p_862->g_853.s1, "p_862->g_853.s1", print_hash_value);
    transparent_crc(p_862->g_853.s2, "p_862->g_853.s2", print_hash_value);
    transparent_crc(p_862->g_853.s3, "p_862->g_853.s3", print_hash_value);
    transparent_crc(p_862->g_853.s4, "p_862->g_853.s4", print_hash_value);
    transparent_crc(p_862->g_853.s5, "p_862->g_853.s5", print_hash_value);
    transparent_crc(p_862->g_853.s6, "p_862->g_853.s6", print_hash_value);
    transparent_crc(p_862->g_853.s7, "p_862->g_853.s7", print_hash_value);
    transparent_crc(p_862->g_853.s8, "p_862->g_853.s8", print_hash_value);
    transparent_crc(p_862->g_853.s9, "p_862->g_853.s9", print_hash_value);
    transparent_crc(p_862->g_853.sa, "p_862->g_853.sa", print_hash_value);
    transparent_crc(p_862->g_853.sb, "p_862->g_853.sb", print_hash_value);
    transparent_crc(p_862->g_853.sc, "p_862->g_853.sc", print_hash_value);
    transparent_crc(p_862->g_853.sd, "p_862->g_853.sd", print_hash_value);
    transparent_crc(p_862->g_853.se, "p_862->g_853.se", print_hash_value);
    transparent_crc(p_862->g_853.sf, "p_862->g_853.sf", print_hash_value);
    transparent_crc(p_862->g_856.f0, "p_862->g_856.f0", print_hash_value);
    transparent_crc(p_862->g_856.f1, "p_862->g_856.f1", print_hash_value);
    transparent_crc(p_862->g_856.f2, "p_862->g_856.f2", print_hash_value);
    transparent_crc(p_862->v_collective, "p_862->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 95; i++)
            transparent_crc(p_862->l_special_values[i], "p_862->l_special_values[i]", print_hash_value);
    transparent_crc(p_862->l_comm_values[get_linear_local_id()], "p_862->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_862->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_862->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
