// --atomics 52 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 62,60,2 -l 1,30,2
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

__constant uint32_t permutations[10][60] = {
{38,2,45,25,41,47,40,4,19,50,33,35,56,36,9,14,43,12,59,0,53,28,55,44,13,17,37,23,18,46,11,7,16,22,32,8,42,5,21,20,1,39,57,30,51,24,52,10,31,34,54,27,49,26,29,58,3,15,48,6}, // permutation 0
{19,11,8,1,30,12,41,37,9,17,27,7,20,14,58,59,45,53,13,28,18,50,36,39,38,34,0,16,15,22,51,46,55,24,56,49,21,6,43,47,40,54,23,25,35,33,4,57,2,42,32,29,31,44,10,26,52,3,5,48}, // permutation 1
{40,16,24,30,44,50,8,18,15,7,12,10,38,51,23,25,36,17,56,55,20,1,32,52,41,43,49,33,46,5,39,21,4,9,35,0,48,53,14,26,13,27,58,11,45,57,3,37,54,29,2,31,28,22,19,34,59,6,42,47}, // permutation 2
{32,41,2,43,20,59,44,7,50,19,58,30,10,38,18,53,45,51,52,14,35,33,27,13,5,34,55,42,40,21,48,36,24,6,4,25,29,28,37,12,47,16,11,57,26,8,54,1,39,0,56,9,22,46,23,17,31,15,49,3}, // permutation 3
{43,42,49,8,57,31,48,51,5,23,22,58,16,28,9,17,18,3,4,35,15,7,12,25,56,6,47,21,39,45,19,2,41,46,11,1,0,53,36,30,59,24,50,34,55,44,20,13,40,29,54,32,14,52,38,37,10,27,26,33}, // permutation 4
{3,38,15,34,26,21,33,41,6,9,19,14,53,5,40,0,50,11,8,31,56,35,13,54,7,25,42,28,24,18,51,52,37,59,1,17,48,2,29,47,10,58,55,43,46,32,12,45,39,30,36,27,20,4,16,23,22,49,44,57}, // permutation 5
{26,36,58,55,54,19,51,24,41,42,11,6,16,44,32,49,10,34,2,23,14,9,40,39,29,5,31,7,27,43,35,52,3,0,28,13,21,57,8,20,59,15,33,47,45,30,12,50,1,38,18,22,25,46,17,56,4,37,53,48}, // permutation 6
{22,44,3,58,10,54,46,2,51,11,9,7,29,13,43,35,26,18,47,45,52,23,21,42,19,8,36,56,6,16,59,39,32,40,34,37,24,1,33,53,5,38,27,57,0,48,31,28,30,49,50,12,17,55,41,14,15,20,4,25}, // permutation 7
{46,6,16,39,3,43,36,38,58,54,25,8,50,14,52,51,49,18,59,27,15,2,29,13,5,44,26,33,1,32,57,11,53,9,19,4,34,48,24,17,41,35,20,42,22,10,31,30,23,37,55,45,12,47,40,56,7,0,28,21}, // permutation 8
{53,4,46,33,58,36,43,1,22,31,57,6,2,30,28,47,52,23,45,56,9,19,44,39,14,20,10,37,51,59,26,15,25,16,34,11,41,12,35,8,54,27,38,7,13,3,48,24,42,5,29,50,18,55,40,49,17,21,32,0} // permutation 9
};

// Seed: 3383271262

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int64_t, 8) g_12;
    VECTOR(int32_t, 4) g_25;
    int16_t g_61;
    uint16_t g_64[2][2];
    VECTOR(int64_t, 8) g_73;
    int32_t g_75;
    volatile VECTOR(uint8_t, 8) g_77;
    int16_t g_87;
    int16_t *g_86;
    int16_t **g_85[3];
    int8_t g_94;
    uint32_t g_98;
    int32_t * volatile g_103;
    int32_t g_114;
    volatile int32_t g_118;
    int8_t g_119;
    int32_t g_120;
    volatile int32_t g_121;
    volatile int8_t g_122;
    uint32_t g_123;
    uint64_t g_127;
    int64_t g_143;
    volatile VECTOR(int32_t, 16) g_146;
    uint32_t g_166;
    uint32_t g_168;
    int8_t g_169;
    int32_t g_173;
    int32_t * volatile g_172;
    int32_t g_175[8][1];
    volatile VECTOR(int32_t, 4) g_208;
    uint64_t g_211;
    volatile VECTOR(uint64_t, 2) g_225;
    VECTOR(int64_t, 4) g_228;
    VECTOR(int64_t, 4) g_230;
    VECTOR(uint16_t, 2) g_236;
    int32_t *g_242;
    int32_t ** volatile g_241;
    VECTOR(uint16_t, 4) g_256;
    VECTOR(int16_t, 16) g_277;
    VECTOR(int64_t, 4) g_296;
    volatile int32_t g_309;
    VECTOR(int16_t, 2) g_337;
    int32_t ** volatile g_349;
    VECTOR(uint64_t, 8) g_370;
    volatile VECTOR(int32_t, 4) g_377;
    volatile VECTOR(uint32_t, 16) g_380;
    uint64_t g_401;
    uint32_t g_454;
    uint64_t g_458;
    int32_t ** volatile g_465;
    int16_t g_474;
    int8_t g_483[6][9][4];
    VECTOR(uint32_t, 4) g_488;
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
int8_t  func_1(struct S0 * p_499);
int32_t  func_2(uint32_t  p_3, int16_t  p_4, uint8_t  p_5, int8_t  p_6, uint8_t  p_7, struct S0 * p_499);
uint8_t  func_16(int64_t  p_17, int32_t  p_18, struct S0 * p_499);
int32_t  func_26(int32_t  p_27, int32_t  p_28, uint64_t  p_29, struct S0 * p_499);
int16_t  func_34(int32_t  p_35, struct S0 * p_499);
int8_t  func_36(int16_t  p_37, int16_t  p_38, int8_t  p_39, int32_t  p_40, int32_t  p_41, struct S0 * p_499);
int16_t  func_46(int64_t  p_47, int16_t  p_48, uint32_t  p_49, struct S0 * p_499);
int16_t  func_51(uint64_t  p_52, uint32_t  p_53, uint8_t  p_54, uint64_t  p_55, struct S0 * p_499);
int16_t  func_58(int16_t  p_59, struct S0 * p_499);
int16_t  func_65(int16_t * p_66, uint64_t  p_67, uint32_t  p_68, int16_t * p_69, struct S0 * p_499);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_499->g_12 p_499->g_25 p_499->l_comm_values p_499->g_61 p_499->g_64 p_499->g_comm_values p_499->g_73 p_499->g_77 p_499->g_94 p_499->g_98 p_499->g_103 p_499->g_123 p_499->g_127 p_499->g_75 p_499->g_143 p_499->g_87 p_499->g_146 p_499->g_172 p_499->g_173 p_499->g_175 p_499->g_169 p_499->g_168 p_499->g_166 p_499->g_119 p_499->g_86 p_499->g_241 p_499->g_118 p_499->g_256 p_499->g_242 p_499->g_120 p_499->g_277 p_499->g_296 p_499->g_230 p_499->g_225 p_499->g_121 p_499->g_349 p_499->g_370 p_499->g_377 p_499->g_380 p_499->g_401 p_499->g_228 p_499->g_454 p_499->g_458 p_499->g_208 p_499->g_483 p_499->g_488 p_499->g_337
 * writes: p_499->g_61 p_499->g_64 p_499->g_75 p_499->g_85 p_499->g_98 p_499->g_114 p_499->g_123 p_499->g_127 p_499->g_143 p_499->g_166 p_499->g_168 p_499->g_169 p_499->g_94 p_499->g_173 p_499->g_175 p_499->g_119 p_499->g_211 p_499->g_242 p_499->g_118 p_499->g_120 p_499->g_87 p_499->g_337 p_499->g_230 p_499->g_454 p_499->g_458 p_499->g_474
 */
int8_t  func_1(struct S0 * p_499)
{ /* block id: 4 */
    int8_t l_10 = 5L;
    VECTOR(int64_t, 4) l_11 = (VECTOR(int64_t, 4))(0x417C7747BB7AB61BL, (VECTOR(int64_t, 2))(0x417C7747BB7AB61BL, 1L), 1L);
    VECTOR(int64_t, 4) l_13 = (VECTOR(int64_t, 4))(0x2BA167C28CAE2FE8L, (VECTOR(int64_t, 2))(0x2BA167C28CAE2FE8L, 0x20D7006986D6DBC1L), 0x20D7006986D6DBC1L);
    uint32_t l_19 = 0UL;
    uint32_t l_24 = 4294967295UL;
    uint64_t *l_457 = &p_499->g_458;
    int32_t *l_464[3][4];
    VECTOR(uint16_t, 16) l_468 = (VECTOR(uint16_t, 16))(0x631EL, (VECTOR(uint16_t, 4))(0x631EL, (VECTOR(uint16_t, 2))(0x631EL, 0UL), 0UL), 0UL, 0x631EL, 0UL, (VECTOR(uint16_t, 2))(0x631EL, 0UL), (VECTOR(uint16_t, 2))(0x631EL, 0UL), 0x631EL, 0UL, 0x631EL, 0UL);
    VECTOR(uint8_t, 16) l_472 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
    VECTOR(int16_t, 2) l_484 = (VECTOR(int16_t, 2))((-1L), 0x58AEL);
    uint16_t *l_485 = &p_499->g_64[1][1];
    VECTOR(uint32_t, 2) l_489 = (VECTOR(uint32_t, 2))(0x7960DF3AL, 0x352E30B2L);
    int8_t l_497 = 0x7DL;
    int16_t l_498 = 0x5BCEL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_464[i][j] = (void*)0;
    }
    if (func_2((safe_sub_func_uint64_t_u_u(18446744073709551615UL, ((VECTOR(int64_t, 4))((-4L), (l_10 < (((((((*l_457) &= ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_11.xxzw)), ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_499->g_12.s73)).xyyx)), ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_13.xzwxzxxy)).s1023712647705743)).sae, (int64_t)(safe_lshift_func_int8_t_s_u((func_16(l_19, (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_24, (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(p_499->g_25.xz)).yxyx, ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(0x0A2E71CCL, ((func_26(p_499->g_25.y, p_499->l_comm_values[(safe_mod_func_uint32_t_u_u(p_499->tid, 60))], l_10, p_499) ^ 0xB90D8CCEL) , p_499->l_comm_values[(safe_mod_func_uint32_t_u_u(p_499->tid, 60))]), 0x036A3371L, l_24, ((VECTOR(int32_t, 4))(0x0BA745A5L)), (-5L), 0x2E337E69L, 0x44751B99L, 0L, 0x14DFB4A7L, ((VECTOR(int32_t, 2))(9L)), 0x315460CDL)).sc5dd, (int32_t)p_499->g_228.z))).even))).yxyxyyyxxxxxxxyx, ((VECTOR(uint32_t, 16))(4294967295UL))))).s4f20))).zzxwwzwz)).s0 || l_13.z))), 0L)), p_499) <= 255UL), 2))))).xyxx))).xwxxywww, ((VECTOR(int64_t, 8))(1L))))), 0x07B9AA23FD643438L, (-1L), 0x570EF0D2ACA6C03CL, 0L)).s2 <= p_499->g_401) , l_10)) > 0L) > p_499->l_comm_values[(safe_mod_func_uint32_t_u_u(p_499->tid, 60))]) ^ l_24) , p_499->g_380.s1) , l_13.z)), (-7L), (-3L))).x)), l_11.w, l_11.x, p_499->g_comm_values[p_499->tid], p_499->g_12.s3, p_499))
    { /* block id: 147 */
        return p_499->g_208.z;
    }
    else
    { /* block id: 149 */
        int16_t l_469[1];
        uint8_t *l_473[3];
        int32_t l_475 = 0x304BC17DL;
        uint16_t l_476 = 0xE179L;
        int i;
        for (i = 0; i < 1; i++)
            l_469[i] = 0x7429L;
        for (i = 0; i < 3; i++)
            l_473[i] = (void*)0;
        for (p_499->g_127 = 0; (p_499->g_127 > 10); ++p_499->g_127)
        { /* block id: 152 */
            for (l_10 = 0; (l_10 < 16); l_10 = safe_add_func_uint64_t_u_u(l_10, 8))
            { /* block id: 155 */
                return p_499->g_25.x;
            }
        }
        (*p_499->g_241) = l_464[0][3];
        l_475 = (safe_lshift_func_int16_t_s_s((((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_468.s45)).xxyx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x65E3L, 0x173DL)), 9UL, 0UL)), 0x8A9EL, ((VECTOR(uint16_t, 2))(0x4AE6L, 1UL)), 9UL)).hi))).x , l_469[0]), (safe_lshift_func_uint8_t_u_u(l_469[0], (p_499->g_474 = (((VECTOR(uint8_t, 4))(l_472.s64b6)).z && 0x5EL))))));
        if (l_476)
        { /* block id: 162 */
            return p_499->g_94;
        }
        else
        { /* block id: 164 */
            uint16_t l_479[3];
            int32_t l_480 = 0L;
            VECTOR(uint32_t, 16) l_494 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x317378FAL), 0x317378FAL), 0x317378FAL, 1UL, 0x317378FAL, (VECTOR(uint32_t, 2))(1UL, 0x317378FAL), (VECTOR(uint32_t, 2))(1UL, 0x317378FAL), 1UL, 0x317378FAL, 1UL, 0x317378FAL);
            int i;
            for (i = 0; i < 3; i++)
                l_479[i] = 1UL;
            l_480 = (p_499->g_256.w , (safe_rshift_func_int8_t_s_s(l_479[2], 6)));
            l_475 = ((FAKE_DIVERGE(p_499->group_0_offset, get_group_id(0), 10) != (safe_add_func_uint8_t_u_u((p_499->g_483[3][7][0] < GROUP_DIVERGE(2, 1)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))((-1L), 7L)), (int8_t)(((l_476 ^ (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_484.xx)), 9L, 0x693CL)).ywywwyyz)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((l_485 == ((((*l_485) |= ((safe_lshift_func_uint16_t_u_u(((((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_499->g_488.xz)).yyxyyyxy)).s1670567716311010)), ((VECTOR(uint32_t, 8))(l_489.yxxxyxxy)).s3103140600734227))).s556d, (uint32_t)((safe_div_func_int32_t_s_s((((&p_499->g_103 != &l_464[0][3]) && (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(4294967295UL, 0x6F068E2AL, 1UL, (6UL != (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_494.se77a61d2c1a18715)).s40)).lo != (safe_sub_func_int8_t_s_s(0x23L, (p_499->g_230.z , (0x67L >= 0xA9L)))))), 0x3493F199L, 4294967287UL, ((VECTOR(uint32_t, 2))(4294967295UL)), GROUP_DIVERGE(2, 1), GROUP_DIVERGE(2, 1), 0x6DE1EBE8L, l_497, l_475, p_499->g_120, 4294967295UL, 1UL)).hi, ((VECTOR(uint32_t, 8))(0x3F52BA17L))))).s5, l_469[0]))) < 65535UL), l_480)) != l_469[0])))).hi)).odd > 0UL) , p_499->g_458) < 0UL) > 0xEC9D7C94A8C72708L), 8)) || 3L)) & p_499->g_77.s0) , (void*)0)) , (*p_499->g_86)), 0L, (-10L), 0x325AL)).lo)).xyyy))), ((VECTOR(int16_t, 2))(1L)), 1L, 0x482EL)).s1 , 0x32BE493B070D7651L)) || p_499->g_337.x) <= p_499->g_173), (int8_t)p_499->g_483[3][7][0]))), 0x44L, 0x60L, 0x50L, p_499->g_377.x, l_480, l_480, 1L, l_469[0], 0L, 0x5FL, ((VECTOR(int8_t, 2))(0x74L)), 1L, 0L)).s9a)), ((VECTOR(int8_t, 2))(0x2CL))))).yyxy)).x))) | 0x37C88896546D521FL);
        }
    }
    return l_498;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_75
 * writes: p_499->g_75
 */
int32_t  func_2(uint32_t  p_3, int16_t  p_4, uint8_t  p_5, int8_t  p_6, uint8_t  p_7, struct S0 * p_499)
{ /* block id: 143 */
    int32_t *l_459 = &p_499->g_75;
    l_459 = l_459;
    (*l_459) = (*l_459);
    return (*l_459);
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_143 p_499->g_175 p_499->g_377 p_499->g_86 p_499->g_64 p_499->g_454
 * writes: p_499->g_143 p_499->g_175 p_499->g_87 p_499->g_454 p_499->g_75
 */
uint8_t  func_16(int64_t  p_17, int32_t  p_18, struct S0 * p_499)
{ /* block id: 128 */
    int32_t l_408 = 0x5F97EA1EL;
    int32_t l_417 = 0x49E8AF5EL;
    uint64_t l_418 = 0x361A22D3CD9679E9L;
    int32_t *l_421 = &p_499->g_175[2][0];
    VECTOR(int32_t, 8) l_428 = (VECTOR(int32_t, 8))(0x7D13E45CL, (VECTOR(int32_t, 4))(0x7D13E45CL, (VECTOR(int32_t, 2))(0x7D13E45CL, (-6L)), (-6L)), (-6L), 0x7D13E45CL, (-6L));
    VECTOR(int32_t, 4) l_429 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
    VECTOR(uint8_t, 16) l_438 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint8_t, 2))(0UL, 1UL), (VECTOR(uint8_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    VECTOR(uint64_t, 8) l_439 = (VECTOR(uint64_t, 8))(0xB15962E6C23080E4L, (VECTOR(uint64_t, 4))(0xB15962E6C23080E4L, (VECTOR(uint64_t, 2))(0xB15962E6C23080E4L, 0x8D2A870EDEA3361AL), 0x8D2A870EDEA3361AL), 0x8D2A870EDEA3361AL, 0xB15962E6C23080E4L, 0x8D2A870EDEA3361AL);
    VECTOR(int32_t, 4) l_444 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5BFA6760L), 0x5BFA6760L);
    VECTOR(int32_t, 16) l_445 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-5L)), (-5L)), (-5L), 8L, (-5L), (VECTOR(int32_t, 2))(8L, (-5L)), (VECTOR(int32_t, 2))(8L, (-5L)), 8L, (-5L), 8L, (-5L));
    VECTOR(int32_t, 16) l_446 = (VECTOR(int32_t, 16))(0x38562D61L, (VECTOR(int32_t, 4))(0x38562D61L, (VECTOR(int32_t, 2))(0x38562D61L, 0x662B9F71L), 0x662B9F71L), 0x662B9F71L, 0x38562D61L, 0x662B9F71L, (VECTOR(int32_t, 2))(0x38562D61L, 0x662B9F71L), (VECTOR(int32_t, 2))(0x38562D61L, 0x662B9F71L), 0x38562D61L, 0x662B9F71L, 0x38562D61L, 0x662B9F71L);
    int32_t **l_447 = &p_499->g_242;
    int32_t **l_448 = &p_499->g_242;
    int32_t **l_449 = &p_499->g_242;
    int32_t **l_450 = &p_499->g_242;
    int32_t **l_451 = &p_499->g_242;
    int32_t *l_452 = (void*)0;
    uint32_t *l_453 = &p_499->g_454;
    int8_t *l_455 = &p_499->g_119;
    uint16_t l_456 = 65535UL;
    int i;
    for (p_499->g_143 = 20; (p_499->g_143 <= 28); p_499->g_143 = safe_add_func_int64_t_s_s(p_499->g_143, 3))
    { /* block id: 131 */
        int32_t l_405 = 0x6CEF504DL;
        int32_t l_406 = (-1L);
        int32_t *l_407 = &p_499->g_75;
        int32_t *l_409 = (void*)0;
        int32_t *l_410 = &l_408;
        int32_t *l_411 = &p_499->g_175[2][0];
        int32_t *l_412 = &p_499->g_175[2][0];
        int32_t *l_413 = &p_499->g_175[2][0];
        int32_t *l_414 = &p_499->g_173;
        int32_t *l_415 = &p_499->g_175[2][0];
        int32_t *l_416[7] = {&p_499->g_173,&l_406,&p_499->g_173,&p_499->g_173,&l_406,&p_499->g_173,&p_499->g_173};
        int i;
        --l_418;
    }
    (*l_421) = l_408;
    (*l_421) = ((-8L) || (((*l_421) < ((!((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_499->g_377.z, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x48L, 0xC8L)), 0x21L, 0UL)).z)), (((VECTOR(int32_t, 16))(l_428.s7233017063366144)).s9 ^ ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_429.xzzw)).xxzzwzyxyxwyywyw)).s7))), ((p_18 , (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((*l_421), 15)), ((FAKE_DIVERGE(p_499->global_2_offset, get_global_id(2), 10) , (((p_499->g_75 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(l_438.s4584)).zzzxyxwwzyyxzxwy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((((*l_453) ^= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_439.s64)), (*l_421), 0xFE7AC9F449D4B934L, (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((p_18 , ((((*p_499->g_86) = (p_18 & GROUP_DIVERGE(0, 1))) && (!((l_452 = (((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_444.yxyxzzwxxwxzzwyw)).hi, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_445.sb0)).xyxy)).even, ((VECTOR(int32_t, 4))(l_446.s369e)).hi))).yxyxyxxy))).s7 , &l_408)) != (void*)0))) >= GROUP_DIVERGE(1, 1))) && 1L), p_499->g_64[1][1])), 1L)), 0x0CF90B337D9F5B39L, GROUP_DIVERGE(2, 1), p_18, 18446744073709551614UL, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x9452A1EE547531B4L)), 1UL)).s1 & 0x22D59BC4994EE8CAL)) , l_455) != l_455) <= l_456), ((VECTOR(uint8_t, 2))(0x2DL)), 0xB3L)))).yxzzyyzwxzxywzxz)).lo)).s0662373553657046))).even, ((VECTOR(uint16_t, 8))(0x12DFL))))).s7, p_18)), 3))) > 0xB117B1E1L) < 0x141051AA074426DFL)) ^ p_18)))) == p_18))) <= p_17)) < (*l_421))) && (-10L)));
    (*l_421) ^= p_17;
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_25 p_499->g_61 p_499->g_64 p_499->g_comm_values p_499->g_73 p_499->g_77 p_499->g_12 p_499->g_94 p_499->g_98 p_499->g_103 p_499->g_123 p_499->g_127 p_499->g_75 p_499->l_comm_values p_499->g_143 p_499->g_87 p_499->g_146 p_499->g_172 p_499->g_173 p_499->g_175 p_499->g_169 p_499->g_168 p_499->g_166 p_499->g_119 p_499->g_86 p_499->g_241 p_499->g_118 p_499->g_256 p_499->g_242 p_499->g_120 p_499->g_277 p_499->g_296 p_499->g_230 p_499->g_225 p_499->g_121 p_499->g_349 p_499->g_370 p_499->g_377 p_499->g_380 p_499->g_401
 * writes: p_499->g_61 p_499->g_64 p_499->g_75 p_499->g_85 p_499->g_98 p_499->g_114 p_499->g_123 p_499->g_127 p_499->g_143 p_499->g_166 p_499->g_168 p_499->g_169 p_499->g_94 p_499->g_173 p_499->g_175 p_499->g_119 p_499->g_211 p_499->g_242 p_499->g_118 p_499->g_120 p_499->g_87 p_499->g_337 p_499->g_230
 */
int32_t  func_26(int32_t  p_27, int32_t  p_28, uint64_t  p_29, struct S0 * p_499)
{ /* block id: 5 */
    uint8_t l_50 = 0xE8L;
    int16_t *l_60 = &p_499->g_61;
    int16_t **l_84 = &l_60;
    int16_t ***l_83[2][5][1] = {{{&l_84},{&l_84},{&l_84},{&l_84},{&l_84}},{{&l_84},{&l_84},{&l_84},{&l_84},{&l_84}}};
    int32_t *l_113 = &p_499->g_114;
    int32_t *l_174 = &p_499->g_175[2][0];
    VECTOR(uint8_t, 2) l_199 = (VECTOR(uint8_t, 2))(0x88L, 1UL);
    int8_t l_216 = 0x34L;
    uint32_t l_259 = 4294967290UL;
    int32_t l_260 = 0x406333AFL;
    int32_t l_263 = 5L;
    int32_t l_265 = 0x3BF201D4L;
    VECTOR(int16_t, 4) l_275 = (VECTOR(int16_t, 4))(0x2C9BL, (VECTOR(int16_t, 2))(0x2C9BL, 0x2CEFL), 0x2CEFL);
    VECTOR(int16_t, 2) l_276 = (VECTOR(int16_t, 2))((-5L), 0x069EL);
    VECTOR(int64_t, 16) l_298 = (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x23A682E6C3BA4103L), 0x23A682E6C3BA4103L), 0x23A682E6C3BA4103L, 7L, 0x23A682E6C3BA4103L, (VECTOR(int64_t, 2))(7L, 0x23A682E6C3BA4103L), (VECTOR(int64_t, 2))(7L, 0x23A682E6C3BA4103L), 7L, 0x23A682E6C3BA4103L, 7L, 0x23A682E6C3BA4103L);
    int8_t l_304 = (-1L);
    int32_t l_305 = 1L;
    int32_t l_306 = 0x381689C6L;
    int32_t l_307 = 9L;
    int32_t l_308[2];
    VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int32_t, 2))((-1L), 4L), (VECTOR(int32_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_308[i] = 1L;
    (*l_174) &= ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(func_34((func_36(p_28, (((*l_113) = (p_499->g_25.y < ((((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((((func_46(l_50, func_51(l_50, (GROUP_DIVERGE(0, 1) | (safe_mul_func_int16_t_s_s(func_58(((*l_60) ^= l_50), p_499), (safe_mod_func_int64_t_s_s(((p_499->g_85[1] = &l_60) != ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((((((void*)0 == &l_84) , p_29) > p_499->g_25.z) , l_50), (-1L))) <= 252UL), 1)), p_499->g_94)) , &p_499->g_86)), p_27))))), p_499->g_25.w, p_499->g_25.z, p_499), p_28, p_499) | 1UL) || 0x25L) , 6L) <= p_499->g_25.x) >= 8L), 0UL)), 0xD1L)) ^ (-5L)) == p_499->g_12.s2) , 0x11L))) , 0x5533L), p_499->g_73.s2, l_50, p_499->g_12.s2, p_499) & p_499->g_87), p_499), p_27)) , p_28), 7)) == p_27);
    for (p_499->g_169 = 0; (p_499->g_169 <= (-18)); p_499->g_169 = safe_sub_func_int32_t_s_s(p_499->g_169, 5))
    { /* block id: 56 */
        int64_t l_209 = 0L;
        int64_t *l_210 = &l_209;
        VECTOR(uint16_t, 16) l_214 = (VECTOR(uint16_t, 16))(0xAEA3L, (VECTOR(uint16_t, 4))(0xAEA3L, (VECTOR(uint16_t, 2))(0xAEA3L, 0x4A42L), 0x4A42L), 0x4A42L, 0xAEA3L, 0x4A42L, (VECTOR(uint16_t, 2))(0xAEA3L, 0x4A42L), (VECTOR(uint16_t, 2))(0xAEA3L, 0x4A42L), 0xAEA3L, 0x4A42L, 0xAEA3L, 0x4A42L);
        VECTOR(int16_t, 8) l_235 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0A0FL), 0x0A0FL), 0x0A0FL, 0L, 0x0A0FL);
        int32_t *l_248 = &p_499->g_114;
        VECTOR(uint16_t, 2) l_249 = (VECTOR(uint16_t, 2))(0x54FAL, 65526UL);
        int32_t *l_261 = (void*)0;
        int32_t *l_262 = &p_499->g_175[0][0];
        int32_t *l_264[1][9][3] = {{{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0},{&p_499->g_173,&p_499->g_75,(void*)0}}};
        uint8_t l_266 = 0xC0L;
        int i, j, k;
        if (((safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u((((((*p_499->g_103) <= GROUP_DIVERGE(1, 1)) , (safe_add_func_int32_t_s_s(((((p_499->g_211 = (((*l_210) = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(4294967292UL, (safe_rshift_func_uint16_t_u_s((((void*)0 == &p_499->g_64[1][1]) ^ (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*l_174), (((9UL <= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_499->g_168, ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xD5L, 0x29L)).yyyyxxxy)).s67, ((VECTOR(uint8_t, 8))(l_199.yyxxxxyx)).s36))).lo, (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((p_499->g_166 , (((safe_lshift_func_uint8_t_u_u(((p_499->g_119 |= ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_499->g_208.wxxy)).w, l_209)) & l_209)) || l_209), p_499->g_175[7][0])) <= p_27) || 1UL)), 6)), (*p_499->g_86))) <= (*l_174)) && 4L))) , 0x1AL))), p_499->g_73.s7))) <= p_28) <= p_499->g_64[1][1]))), p_499->g_64[1][1]))), 1)))), p_27))) && 18446744073709551615UL)) , 1L) , (*p_499->g_86)) && (-3L)), (*l_174)))) ^ 0x6AL) , 1UL), p_27)))) && (*p_499->g_103)))
        { /* block id: 60 */
            uint8_t l_218[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_218[i][j] = 0x05L;
            }
            for (p_499->g_211 = (-9); (p_499->g_211 != 51); p_499->g_211++)
            { /* block id: 63 */
                int16_t l_215 = (-9L);
                uint32_t l_217 = 0x0CC7F17FL;
                if ((((VECTOR(uint16_t, 8))(l_214.s12a55212)).s1 || l_215))
                { /* block id: 64 */
                    if (l_216)
                        break;
                }
                else
                { /* block id: 66 */
                    (*p_499->g_103) = (l_217 == p_27);
                }
                (*l_174) = 7L;
                (*l_174) = (*l_174);
            }
            if (l_218[0][0])
                continue;
        }
        else
        { /* block id: 73 */
            VECTOR(int64_t, 4) l_229 = (VECTOR(int64_t, 4))(0x6537FA7DB7F8A6E9L, (VECTOR(int64_t, 2))(0x6537FA7DB7F8A6E9L, 0L), 0L);
            uint16_t *l_237 = &p_499->g_64[1][1];
            int32_t *l_238 = &p_499->g_173;
            volatile int32_t *l_240 = (void*)0;
            volatile int32_t **l_239 = &l_240;
            int32_t *l_247 = &p_499->g_114;
            uint64_t *l_250 = &p_499->g_211;
            VECTOR(int16_t, 2) l_255 = (VECTOR(int16_t, 2))(0x0DCBL, 4L);
            int i;
            (*l_238) ^= ((*l_174) = ((((((safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_499->g_225.xy)))), 0x3DCDE23EACF7F055L, 1UL)).y, ((VECTOR(uint64_t, 4))((((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_499->g_228.yy)), (-7L), 0x78C334BEAF350A2BL)).xwyzwwyy)), ((VECTOR(int64_t, 4))(0x1C2ECA86F70DEFB8L, 0x4F2FE66C5461C2E1L, 0x4408ACB9D27FB237L, (-3L))).zywwxzyw))).s50, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6E8CEDF58C516764L, 0L)), 0L, (-2L))).odd))).xyxxyxyx)), ((VECTOR(int64_t, 16))(l_229.wxywzzwxyxzzwyxy)).even, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_499->g_230.xx)).yyxyxxxy))))).lo)).lo)).odd, ((safe_div_func_int32_t_s_s(p_28, GROUP_DIVERGE(0, 1))) || p_27))) && (safe_sub_func_uint16_t_u_u(p_27, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_235.s40)))).lo))) == (p_499->l_comm_values[(safe_mod_func_uint32_t_u_u(p_499->tid, 60))] | ((void*)0 == &p_499->g_127))), p_28, 0x062ACBDBD75E75CDL, 0x069D1405192C4A50L)).z)), p_28)) < ((*l_237) = ((VECTOR(uint16_t, 4))(p_499->g_236.xxyx)).z)) <= (((*l_174) ^ l_229.y) >= p_29)) , 3UL) , (void*)0) == (void*)0));
            (*l_239) = &p_499->g_118;
            (*p_499->g_241) = &p_27;
            (**l_239) = ((*l_240) & (safe_sub_func_uint32_t_u_u(((*l_238) , (0L >= (p_499->g_175[2][0] , (safe_mul_func_uint16_t_u_u((l_247 != l_248), (((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_249.yxyx)).hi)).xxyxyyxy, ((VECTOR(uint16_t, 2))(1UL, 0xBF06L)).xyxxxxxy))).s6 | ((*l_237) = ((&p_499->g_211 == l_250) < ((*l_174) = ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((*p_499->g_242) |= ((*l_238) |= ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_255.xxxxyyyx)))), ((VECTOR(uint16_t, 8))(p_499->g_256.wyxyyzxx))))).s3)) ^ (safe_lshift_func_uint8_t_u_u(p_499->g_73.s6, (*l_174)))), p_28)) <= p_29), 14)) >= l_259)))))))))), p_499->g_166)));
        }
        ++l_266;
    }
    for (p_499->g_120 = 0; (p_499->g_120 > (-10)); --p_499->g_120)
    { /* block id: 89 */
        uint32_t l_288 = 0xBB819E39L;
        VECTOR(int64_t, 2) l_294 = (VECTOR(int64_t, 2))(1L, (-1L));
        VECTOR(int64_t, 16) l_297 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x4724B2485EE6CBC5L), 0x4724B2485EE6CBC5L), 0x4724B2485EE6CBC5L, (-1L), 0x4724B2485EE6CBC5L, (VECTOR(int64_t, 2))((-1L), 0x4724B2485EE6CBC5L), (VECTOR(int64_t, 2))((-1L), 0x4724B2485EE6CBC5L), (-1L), 0x4724B2485EE6CBC5L, (-1L), 0x4724B2485EE6CBC5L);
        int32_t l_300 = 0x1FE78B6BL;
        int32_t l_301 = 0x63C11ECBL;
        int32_t l_302[1];
        int16_t *l_345 = &p_499->g_61;
        uint32_t l_346 = 7UL;
        uint64_t l_398 = 0xBB6737B0DCED3189L;
        int i;
        for (i = 0; i < 1; i++)
            l_302[i] = (-1L);
        (*l_174) = (safe_mul_func_uint16_t_u_u(((0x39862261L || ((safe_add_func_int8_t_s_s(p_29, (((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_275.zxywzwxy)).s47)).yyyx, ((VECTOR(int16_t, 4))(l_276.yyyy))))).y >= (((**l_84) = ((*p_499->g_86) = ((VECTOR(int16_t, 8))(p_499->g_277.s1f33f703)).s7)) || ((*l_174) > 0x7DCDL))))) , (safe_mod_func_int16_t_s_s(p_29, (l_288 = (safe_div_func_int16_t_s_s((((*l_60) = p_28) || (safe_mod_func_int16_t_s_s((p_27 > (!((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(p_28, ((p_499->g_64[1][0] & 18446744073709551615UL) & p_28))), (*l_174))) == (*p_499->g_103)))), 1L))), (-10L)))))))) , p_27), p_28));
        if (l_288)
        { /* block id: 95 */
            int16_t l_289 = (-6L);
            VECTOR(int64_t, 8) l_295 = (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 0x7C1D8D492CE9E550L), 0x7C1D8D492CE9E550L), 0x7C1D8D492CE9E550L, (-2L), 0x7C1D8D492CE9E550L);
            int i;
            (*l_174) = (-4L);
            if (l_289)
                continue;
            if ((*p_499->g_242))
                break;
            p_27 |= ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(l_294.xx)).yxxyxyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x777FB0852BC7AE79L, 0x71478E56B6975B69L)))).yyxxxyyx)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_295.s5737)))), l_295.s7, 3L, 1L, 0x1EB0C2D3A3C200E4L, 0x7053EE6E3BA506B6L, ((VECTOR(int64_t, 4))(p_499->g_296.wwxw)), ((VECTOR(int64_t, 2))(l_297.se4)), 0x7D9AF88B4421247DL)).lo))).s7144006542614264, ((VECTOR(int64_t, 8))(l_298.sf1afa0b4)).s2361337073743753))).s3, p_499->g_230.y)) >= (l_295.s2 <= p_29));
        }
        else
        { /* block id: 100 */
            int32_t *l_299[5][8][6] = {{{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0}},{{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0}},{{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0}},{{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0}},{{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0},{&p_499->g_75,(void*)0,(void*)0,&p_499->g_75,&p_499->g_75,(void*)0}}};
            int32_t l_303 = (-1L);
            uint32_t l_310 = 4294967287UL;
            int32_t *l_348 = &p_499->g_175[2][0];
            int16_t ***l_371 = &l_84;
            uint64_t l_391[7][4][2] = {{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}}};
            int i, j, k;
            ++l_310;
            if ((*l_174))
            { /* block id: 102 */
                uint8_t *l_325 = &l_50;
                uint8_t *l_328 = (void*)0;
                uint8_t *l_329 = (void*)0;
                uint8_t *l_330 = (void*)0;
                uint8_t *l_331 = (void*)0;
                uint8_t *l_332 = (void*)0;
                uint8_t *l_333 = (void*)0;
                uint8_t *l_334 = (void*)0;
                uint8_t *l_335 = (void*)0;
                uint8_t *l_336[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint32_t l_342 = 0x0654CEB2L;
                int16_t l_347 = (-10L);
                int i;
                (*p_499->g_349) = ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551612UL, 8UL)), (p_499->g_211 = (safe_rshift_func_int16_t_s_s((p_499->g_146.s4 <= (+((safe_sub_func_uint32_t_u_u((((9L ^ (((VECTOR(uint16_t, 4))(65530UL, (FAKE_DIVERGE(p_499->local_2_offset, get_local_id(2), 10) <= ((*l_174) || ((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((++(*l_325)), (p_499->g_337.x = GROUP_DIVERGE(2, 1)))), ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(0x7D3F3A4E2ADE48FCL, l_342)), p_28)) > (p_28 <= GROUP_DIVERGE(0, 1))))), (safe_mod_func_int8_t_s_s((((*l_84) = l_345) == (l_346 , l_345)), p_499->g_256.z)))) <= p_499->g_256.z))), 3UL, 0xFB35L)).y , p_29)) >= p_29) == l_301), p_27)) && 0xE041L))), p_27))), l_342, 18446744073709551615UL, p_499->g_225.x, 0x56BE9B4C8C2C449FL, 2UL, p_499->g_121, p_28, ((VECTOR(uint64_t, 4))(0x9E93328005FB6EAAL)), 0x6D3643DDD8BBFF7EL, 0x4A6FA541254BD4C1L)))).se, l_347)) , l_348);
            }
            else
            { /* block id: 108 */
                int64_t l_372 = 0x2CD02E7B6411244DL;
                int8_t *l_373 = &l_304;
                int64_t *l_374 = (void*)0;
                int64_t *l_375[1];
                int32_t *l_376 = &l_300;
                int8_t *l_399 = (void*)0;
                int8_t *l_400 = &p_499->g_94;
                int i;
                for (i = 0; i < 1; i++)
                    l_375[i] = (void*)0;
                l_300 |= ((*l_348) = (&p_499->g_122 == (void*)0));
                l_376 = ((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_29, (FAKE_DIVERGE(p_499->global_0_offset, get_global_id(0), 10) > (l_302[0] &= (p_499->g_230.y = ((p_499->g_94 = ((*l_373) = (safe_add_func_uint32_t_u_u(0xF9531F5AL, (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(p_499->g_143, p_29)) >= (p_499->g_64[1][1] | p_499->g_73.s6)) , ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))((safe_div_func_uint32_t_u_u(8UL, ((*p_499->g_242) |= (safe_sub_func_uint16_t_u_u((((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_499->g_370.s73445772)).s50)).even , &p_499->g_85[1]) == l_371) >= p_28), 0x04C1L))))), (-6L), 3L, (-1L), (*p_499->g_86), (*l_174), 1L, 0x00D1L)).hi, (int16_t)l_372))).z), p_29)))))) == p_499->g_119)))))), p_29)) < (*p_499->g_172)) >= 0x3101L), 0x2F01A4F8L)), 0x3AFCFDFDL)) , l_372), p_499->g_277.sc)) , l_376);
                (*l_376) = (~((VECTOR(int32_t, 2))(p_499->g_377.xy)).odd);
                l_301 |= ((+(&p_499->g_86 != ((safe_add_func_uint64_t_u_u((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_499->g_380.s70ab)))).z <= (((safe_sub_func_uint8_t_u_u((((VECTOR(int16_t, 16))(0L, ((((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((+(safe_lshift_func_uint8_t_u_s(p_29, l_391[6][3][1]))), p_499->g_256.w)) < FAKE_DIVERGE(p_499->local_1_offset, get_local_id(1), 10)), p_28)), ((*l_345) = (((safe_mul_func_int8_t_s_s(((*l_373) ^= (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0x40L, 0UL)), l_297.s0))), ((*l_400) = l_398))) , p_27) , (*l_376))))) , (-1L)) <= 0xF415L) || 0x83D26581A0153F5DL), 0x14B1L, 9L, 0x7CDDL, ((VECTOR(int16_t, 4))(0x16DFL)), ((VECTOR(int16_t, 2))((-1L))), 0x252EL, (-3L), l_302[0], (-1L), 0x5326L)).s4 <= 65535UL), p_499->g_401)) , p_499->g_370.s4) <= (*l_376))) & p_499->g_123) , 0x53247902F61B0303L), p_29)) , (void*)0))) >= (*l_174));
            }
        }
        if (p_28)
            continue;
    }
    (*p_499->g_242) ^= (~((VECTOR(int32_t, 2))(l_402.s16)).odd);
    return (*l_174);
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_146 p_499->g_103 p_499->g_75 p_499->g_12 p_499->g_94 p_499->g_172 p_499->g_173
 * writes: p_499->g_75 p_499->g_85 p_499->g_166 p_499->g_168 p_499->g_169 p_499->g_94 p_499->g_173
 */
int16_t  func_34(int32_t  p_35, struct S0 * p_499)
{ /* block id: 37 */
    VECTOR(int32_t, 16) l_147 = (VECTOR(int32_t, 16))(0x772AC288L, (VECTOR(int32_t, 4))(0x772AC288L, (VECTOR(int32_t, 2))(0x772AC288L, 0x31F79D74L), 0x31F79D74L), 0x31F79D74L, 0x772AC288L, 0x31F79D74L, (VECTOR(int32_t, 2))(0x772AC288L, 0x31F79D74L), (VECTOR(int32_t, 2))(0x772AC288L, 0x31F79D74L), 0x772AC288L, 0x31F79D74L, 0x772AC288L, 0x31F79D74L);
    int8_t l_148 = 0x4CL;
    int32_t *l_149 = &p_499->g_75;
    uint16_t *l_152 = (void*)0;
    VECTOR(uint64_t, 8) l_153 = (VECTOR(uint64_t, 8))(0x3BE87DA6A6FC2D24L, (VECTOR(uint64_t, 4))(0x3BE87DA6A6FC2D24L, (VECTOR(uint64_t, 2))(0x3BE87DA6A6FC2D24L, 1UL), 1UL), 1UL, 0x3BE87DA6A6FC2D24L, 1UL);
    int8_t *l_158 = &l_148;
    int16_t **l_163[9][6][4] = {{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}},{{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86},{&p_499->g_86,&p_499->g_86,&p_499->g_86,&p_499->g_86}}};
    int16_t ***l_164 = &p_499->g_85[1];
    uint32_t *l_165 = &p_499->g_166;
    uint32_t *l_167 = &p_499->g_168;
    int8_t *l_170 = (void*)0;
    int8_t *l_171 = &p_499->g_94;
    int i, j, k;
    if ((atomic_inc(&p_499->l_atomic_input[15]) == 0))
    { /* block id: 39 */
        int8_t l_144[3][10][3] = {{{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L}},{{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L}},{{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L},{0x7FL,0L,9L}}};
        int8_t l_145 = 0x00L;
        int i, j, k;
        l_145 ^= l_144[0][2][0];
        unsigned int result = 0;
        int l_144_i0, l_144_i1, l_144_i2;
        for (l_144_i0 = 0; l_144_i0 < 3; l_144_i0++) {
            for (l_144_i1 = 0; l_144_i1 < 10; l_144_i1++) {
                for (l_144_i2 = 0; l_144_i2 < 3; l_144_i2++) {
                    result += l_144[l_144_i0][l_144_i1][l_144_i2];
                }
            }
        }
        result += l_145;
        atomic_add(&p_499->l_special_values[15], result);
    }
    else
    { /* block id: 41 */
        (1 + 1);
    }
    (*l_149) = (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7DD49A4EL, 1L)), 0x15E7397EL, 0x2E28EBADL)), 7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), 0x208B660CL)), 0x3E11D3B6L, (-7L))), ((VECTOR(int32_t, 2))(p_499->g_146.sb8)), 0x52317F37L)).s77)).lo, ((VECTOR(int32_t, 8))(l_147.sa7d6e7bb)), (-1L), 1L)).even)).s7 , (*p_499->g_103)) == p_499->g_12.s4) < l_148);
    (*p_499->g_172) ^= (safe_add_func_int16_t_s_s((l_152 == ((((VECTOR(uint64_t, 16))(l_153.s4762410116114276)).s4 > ((*l_149) & (safe_rshift_func_int8_t_s_s(((*l_171) ^= ((safe_mul_func_int8_t_s_s(((*l_158) = ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(0x46L, 1L)).xyxy, (int8_t)(*l_149)))).w), (((safe_lshift_func_uint8_t_u_u((&p_499->g_119 == (((safe_lshift_func_int8_t_s_u((GROUP_DIVERGE(2, 1) , (l_163[4][2][3] != ((~(*l_149)) , ((*l_164) = &p_499->g_86)))), 0)) ^ ((((p_499->g_169 = ((*l_149) , ((*l_167) = (+((*l_165) = 1UL))))) != (-8L)) , 18446744073709551609UL) , 18446744073709551614UL)) , l_158)), 1)) , (void*)0) != &p_499->g_87))) >= (*l_149))), 4)))) , &p_499->g_64[1][1])), (-1L)));
    return (*l_149);
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_123 p_499->g_127 p_499->g_73 p_499->g_94 p_499->g_75 p_499->l_comm_values p_499->g_103 p_499->g_143
 * writes: p_499->g_123 p_499->g_127 p_499->g_143 p_499->g_75
 */
int8_t  func_36(int16_t  p_37, int16_t  p_38, int8_t  p_39, int32_t  p_40, int32_t  p_41, struct S0 * p_499)
{ /* block id: 30 */
    int32_t *l_115 = &p_499->g_75;
    int32_t *l_116 = (void*)0;
    int32_t *l_117[6][10][4] = {{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}},{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}},{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}},{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}},{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}},{{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75},{&p_499->g_75,(void*)0,&p_499->g_75,&p_499->g_75}}};
    uint64_t *l_126 = &p_499->g_127;
    VECTOR(int32_t, 16) l_136 = (VECTOR(int32_t, 16))(0x405A1457L, (VECTOR(int32_t, 4))(0x405A1457L, (VECTOR(int32_t, 2))(0x405A1457L, 0x47933BFEL), 0x47933BFEL), 0x47933BFEL, 0x405A1457L, 0x47933BFEL, (VECTOR(int32_t, 2))(0x405A1457L, 0x47933BFEL), (VECTOR(int32_t, 2))(0x405A1457L, 0x47933BFEL), 0x405A1457L, 0x47933BFEL, 0x405A1457L, 0x47933BFEL);
    VECTOR(int32_t, 16) l_137 = (VECTOR(int32_t, 16))(0x3DB128D6L, (VECTOR(int32_t, 4))(0x3DB128D6L, (VECTOR(int32_t, 2))(0x3DB128D6L, 0x52EC9A0CL), 0x52EC9A0CL), 0x52EC9A0CL, 0x3DB128D6L, 0x52EC9A0CL, (VECTOR(int32_t, 2))(0x3DB128D6L, 0x52EC9A0CL), (VECTOR(int32_t, 2))(0x3DB128D6L, 0x52EC9A0CL), 0x3DB128D6L, 0x52EC9A0CL, 0x3DB128D6L, 0x52EC9A0CL);
    VECTOR(int32_t, 2) l_138 = (VECTOR(int32_t, 2))(0x475258A0L, 0x5470BB3AL);
    VECTOR(int32_t, 16) l_139 = (VECTOR(int32_t, 16))(0x56D68B9CL, (VECTOR(int32_t, 4))(0x56D68B9CL, (VECTOR(int32_t, 2))(0x56D68B9CL, 0x6F688DC7L), 0x6F688DC7L), 0x6F688DC7L, 0x56D68B9CL, 0x6F688DC7L, (VECTOR(int32_t, 2))(0x56D68B9CL, 0x6F688DC7L), (VECTOR(int32_t, 2))(0x56D68B9CL, 0x6F688DC7L), 0x56D68B9CL, 0x6F688DC7L, 0x56D68B9CL, 0x6F688DC7L);
    int16_t **l_140[10];
    VECTOR(int8_t, 8) l_141 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x7BL), 0x7BL), 0x7BL, 0L, 0x7BL);
    VECTOR(int8_t, 16) l_142 = (VECTOR(int8_t, 16))(0x74L, (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, (-10L)), (-10L)), (-10L), 0x74L, (-10L), (VECTOR(int8_t, 2))(0x74L, (-10L)), (VECTOR(int8_t, 2))(0x74L, (-10L)), 0x74L, (-10L), 0x74L, (-10L));
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_140[i] = &p_499->g_86;
    ++p_499->g_123;
    p_499->g_143 &= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(18446744073709551615UL, ((*l_126)++), p_41, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((*l_126) = (safe_add_func_uint16_t_u_u(p_499->g_73.s2, p_41))), ((VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL)), 0xDD045E2451B5D957L)))).yzzzyyzw)).s64)).yxxyxyyy, ((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))((p_499->g_123 | (((safe_add_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u((((VECTOR(int32_t, 2))(l_136.sbf)).even | ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_137.sc1)).xyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_138.yyxx)), 7L, ((VECTOR(int32_t, 2))(l_139.sb3)), 0x446842B3L)).lo))).odd))).xyyyxxxy)).s44)).even), ((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(p_499->g_94, ((void*)0 != l_140[3]), 0x6CL, ((VECTOR(int8_t, 8))(l_141.s25104207)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))((-1L), 8L)), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(l_142.s0e15510ce241ea34)).odd, ((VECTOR(int8_t, 4))(0x5DL, 0L, 0x5BL, 0x31L)).xyxzzzyz))).lo, ((VECTOR(int8_t, 4))((((VECTOR(uint64_t, 2))(0UL, 0x73B4463F65419F12L)).hi , (((VECTOR(uint16_t, 2))(0x0F34L, 65526UL)).odd & (&l_140[3] == (void*)0))), ((VECTOR(int8_t, 2))(0L)), (-8L)))))).hi))).xyyy)), 0x07L)).odd, ((VECTOR(int8_t, 8))(0x30L))))).s4370774760047741)))).s9 | 1L) <= p_499->g_73.s6) ^ (*l_115)) , p_40))) , FAKE_DIVERGE(p_499->local_0_offset, get_local_id(0), 10)), 0x53375787L)) == p_499->l_comm_values[(safe_mod_func_uint32_t_u_u(p_499->tid, 60))]) >= p_39)), 0xDFC2BB03F1312D13L, ((VECTOR(uint64_t, 8))(1UL)), 0xBBA2A9BA58C66C53L, ((VECTOR(uint64_t, 2))(0x6F4042E0B307BF79L)), ((VECTOR(uint64_t, 2))(0xAE0F3F866D6690D2L)), 18446744073709551610UL)), ((VECTOR(uint64_t, 16))(0x65652690A631AE8CL)), ((VECTOR(uint64_t, 16))(4UL))))).hi))).even)).lo, ((VECTOR(uint64_t, 2))(0x95C3721EA19B7F54L))))), 2UL, 2UL, 0x2E3D4A9B1A085592L)).s4410757216341326)))).s2 , (*p_499->g_103));
    (*l_115) = 0x5DAE8D4CL;
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_103
 * writes: p_499->g_75
 */
int16_t  func_46(int64_t  p_47, int16_t  p_48, uint32_t  p_49, struct S0 * p_499)
{ /* block id: 19 */
    int32_t *l_106[2];
    uint8_t l_107 = 0x9AL;
    int i;
    for (i = 0; i < 2; i++)
        l_106[i] = &p_499->g_75;
    (*p_499->g_103) = (safe_lshift_func_uint8_t_u_s(0x52L, 7));
    for (p_47 = 0; (p_47 != (-13)); p_47 = safe_sub_func_uint32_t_u_u(p_47, 3))
    { /* block id: 23 */
        uint64_t l_110 = 18446744073709551610UL;
        l_106[1] = &p_499->g_75;
        l_107++;
        l_110--;
    }
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_98
 * writes: p_499->g_98
 */
int16_t  func_51(uint64_t  p_52, uint32_t  p_53, uint8_t  p_54, uint64_t  p_55, struct S0 * p_499)
{ /* block id: 16 */
    int32_t *l_95 = &p_499->g_75;
    int32_t *l_96 = &p_499->g_75;
    int32_t *l_97[5];
    int i;
    for (i = 0; i < 5; i++)
        l_97[i] = &p_499->g_75;
    p_499->g_98++;
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_64 p_499->g_comm_values p_499->g_73 p_499->g_77 p_499->g_12
 * writes: p_499->g_64 p_499->g_75
 */
int16_t  func_58(int16_t  p_59, struct S0 * p_499)
{ /* block id: 7 */
    int16_t *l_62 = &p_499->g_61;
    uint16_t *l_63 = &p_499->g_64[1][1];
    int16_t *l_71 = &p_499->g_61;
    int16_t **l_70 = &l_71;
    uint8_t l_72 = 0x20L;
    int32_t *l_74 = &p_499->g_75;
    VECTOR(uint8_t, 4) l_76 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0UL), 0UL);
    VECTOR(int64_t, 4) l_79 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2BF2DCFCB68B63C9L), 0x2BF2DCFCB68B63C9L);
    VECTOR(uint8_t, 8) l_80 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL);
    int i;
    (*l_74) = (((*l_63) ^= ((void*)0 != l_62)) != func_65(((*l_70) = &p_499->g_61), (p_499->g_comm_values[p_499->tid] , l_72), (((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))((((VECTOR(int64_t, 8))(p_499->g_73.s57166110)).s0 , (((*l_74) = p_499->g_73.s0) > p_59)), ((VECTOR(uint8_t, 2))(0x88L, 250UL)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(l_76.xzxxzzxwzyxyxzyx)).s1e, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(8UL, 255UL)).yyyx)), ((VECTOR(uint8_t, 2))(p_499->g_77.s75)), ((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 2))(l_79.zz)).even)) >= 0xCD35A08CL), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_80.s20)).yyxy)), 250UL, 248UL, ((void*)0 != l_62), 0x99L, 1UL)).odd)).hi, ((VECTOR(uint8_t, 4))(0xA4L))))).even))), ((VECTOR(uint8_t, 2))(1UL)), 1UL)).hi))).wyyyyywz, ((VECTOR(uint8_t, 8))(0x5BL)), ((VECTOR(uint8_t, 8))(8UL))))).s7 && p_499->g_73.s5), &p_499->g_61, p_499));
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_499->g_12
 * writes:
 */
int16_t  func_65(int16_t * p_66, uint64_t  p_67, uint32_t  p_68, int16_t * p_69, struct S0 * p_499)
{ /* block id: 11 */
    return p_499->g_12.s3;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[52];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 52; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_comm_values[i] = 1;
    struct S0 c_500;
    struct S0* p_499 = &c_500;
    struct S0 c_501 = {
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L)), // p_499->g_12
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x53FDE750L), 0x53FDE750L), // p_499->g_25
        0x2F0CL, // p_499->g_61
        {{0x27E5L,0x27E5L},{0x27E5L,0x27E5L}}, // p_499->g_64
        (VECTOR(int64_t, 8))(0x166A3C8FCBD0D794L, (VECTOR(int64_t, 4))(0x166A3C8FCBD0D794L, (VECTOR(int64_t, 2))(0x166A3C8FCBD0D794L, 0x4E577E9FB133D7BFL), 0x4E577E9FB133D7BFL), 0x4E577E9FB133D7BFL, 0x166A3C8FCBD0D794L, 0x4E577E9FB133D7BFL), // p_499->g_73
        0x7325E6B7L, // p_499->g_75
        (VECTOR(uint8_t, 8))(0xCCL, (VECTOR(uint8_t, 4))(0xCCL, (VECTOR(uint8_t, 2))(0xCCL, 0xA9L), 0xA9L), 0xA9L, 0xCCL, 0xA9L), // p_499->g_77
        0x4D50L, // p_499->g_87
        &p_499->g_87, // p_499->g_86
        {&p_499->g_86,&p_499->g_86,&p_499->g_86}, // p_499->g_85
        3L, // p_499->g_94
        9UL, // p_499->g_98
        &p_499->g_75, // p_499->g_103
        1L, // p_499->g_114
        0x65D0453CL, // p_499->g_118
        0x65L, // p_499->g_119
        0L, // p_499->g_120
        3L, // p_499->g_121
        (-1L), // p_499->g_122
        1UL, // p_499->g_123
        2UL, // p_499->g_127
        0x47188FCF759CC73FL, // p_499->g_143
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2FAA03C2L), 0x2FAA03C2L), 0x2FAA03C2L, 0L, 0x2FAA03C2L, (VECTOR(int32_t, 2))(0L, 0x2FAA03C2L), (VECTOR(int32_t, 2))(0L, 0x2FAA03C2L), 0L, 0x2FAA03C2L, 0L, 0x2FAA03C2L), // p_499->g_146
        0UL, // p_499->g_166
        4294967295UL, // p_499->g_168
        0x46L, // p_499->g_169
        (-7L), // p_499->g_173
        &p_499->g_173, // p_499->g_172
        {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}, // p_499->g_175
        (VECTOR(int32_t, 4))(0x0F199D25L, (VECTOR(int32_t, 2))(0x0F199D25L, 0x43E86A65L), 0x43E86A65L), // p_499->g_208
        1UL, // p_499->g_211
        (VECTOR(uint64_t, 2))(0xDA368D0BCE42B7FCL, 18446744073709551615UL), // p_499->g_225
        (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, (-1L)), (-1L)), // p_499->g_228
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 8L), 8L), // p_499->g_230
        (VECTOR(uint16_t, 2))(1UL, 65527UL), // p_499->g_236
        &p_499->g_175[5][0], // p_499->g_242
        &p_499->g_242, // p_499->g_241
        (VECTOR(uint16_t, 4))(0xCC17L, (VECTOR(uint16_t, 2))(0xCC17L, 65530UL), 65530UL), // p_499->g_256
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_499->g_277
        (VECTOR(int64_t, 4))(0x04BEE72BB2E11873L, (VECTOR(int64_t, 2))(0x04BEE72BB2E11873L, 0x3B86A017D16861ABL), 0x3B86A017D16861ABL), // p_499->g_296
        (-7L), // p_499->g_309
        (VECTOR(int16_t, 2))(0x4FECL, (-9L)), // p_499->g_337
        &p_499->g_242, // p_499->g_349
        (VECTOR(uint64_t, 8))(0xCCA98710AFC94C86L, (VECTOR(uint64_t, 4))(0xCCA98710AFC94C86L, (VECTOR(uint64_t, 2))(0xCCA98710AFC94C86L, 0x09E457A067A92931L), 0x09E457A067A92931L), 0x09E457A067A92931L, 0xCCA98710AFC94C86L, 0x09E457A067A92931L), // p_499->g_370
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), // p_499->g_377
        (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x4512B4EDL), 0x4512B4EDL), 0x4512B4EDL, 5UL, 0x4512B4EDL, (VECTOR(uint32_t, 2))(5UL, 0x4512B4EDL), (VECTOR(uint32_t, 2))(5UL, 0x4512B4EDL), 5UL, 0x4512B4EDL, 5UL, 0x4512B4EDL), // p_499->g_380
        0xB94A2503CB891A35L, // p_499->g_401
        0x0BE5E19FL, // p_499->g_454
        18446744073709551614UL, // p_499->g_458
        (void*)0, // p_499->g_465
        (-5L), // p_499->g_474
        {{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}},{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}},{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}},{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}},{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}},{{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL},{0x0FL,0x0FL,(-7L),0x0BL}}}, // p_499->g_483
        (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0x164092DFL), 0x164092DFL), // p_499->g_488
        0, // p_499->v_collective
        sequence_input[get_global_id(0)], // p_499->global_0_offset
        sequence_input[get_global_id(1)], // p_499->global_1_offset
        sequence_input[get_global_id(2)], // p_499->global_2_offset
        sequence_input[get_local_id(0)], // p_499->local_0_offset
        sequence_input[get_local_id(1)], // p_499->local_1_offset
        sequence_input[get_local_id(2)], // p_499->local_2_offset
        sequence_input[get_group_id(0)], // p_499->group_0_offset
        sequence_input[get_group_id(1)], // p_499->group_1_offset
        sequence_input[get_group_id(2)], // p_499->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 60)), permutations[0][get_linear_local_id()])), // p_499->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_500 = c_501;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_499);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_499->g_12.s0, "p_499->g_12.s0", print_hash_value);
    transparent_crc(p_499->g_12.s1, "p_499->g_12.s1", print_hash_value);
    transparent_crc(p_499->g_12.s2, "p_499->g_12.s2", print_hash_value);
    transparent_crc(p_499->g_12.s3, "p_499->g_12.s3", print_hash_value);
    transparent_crc(p_499->g_12.s4, "p_499->g_12.s4", print_hash_value);
    transparent_crc(p_499->g_12.s5, "p_499->g_12.s5", print_hash_value);
    transparent_crc(p_499->g_12.s6, "p_499->g_12.s6", print_hash_value);
    transparent_crc(p_499->g_12.s7, "p_499->g_12.s7", print_hash_value);
    transparent_crc(p_499->g_25.x, "p_499->g_25.x", print_hash_value);
    transparent_crc(p_499->g_25.y, "p_499->g_25.y", print_hash_value);
    transparent_crc(p_499->g_25.z, "p_499->g_25.z", print_hash_value);
    transparent_crc(p_499->g_25.w, "p_499->g_25.w", print_hash_value);
    transparent_crc(p_499->g_61, "p_499->g_61", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_499->g_64[i][j], "p_499->g_64[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_499->g_73.s0, "p_499->g_73.s0", print_hash_value);
    transparent_crc(p_499->g_73.s1, "p_499->g_73.s1", print_hash_value);
    transparent_crc(p_499->g_73.s2, "p_499->g_73.s2", print_hash_value);
    transparent_crc(p_499->g_73.s3, "p_499->g_73.s3", print_hash_value);
    transparent_crc(p_499->g_73.s4, "p_499->g_73.s4", print_hash_value);
    transparent_crc(p_499->g_73.s5, "p_499->g_73.s5", print_hash_value);
    transparent_crc(p_499->g_73.s6, "p_499->g_73.s6", print_hash_value);
    transparent_crc(p_499->g_73.s7, "p_499->g_73.s7", print_hash_value);
    transparent_crc(p_499->g_75, "p_499->g_75", print_hash_value);
    transparent_crc(p_499->g_77.s0, "p_499->g_77.s0", print_hash_value);
    transparent_crc(p_499->g_77.s1, "p_499->g_77.s1", print_hash_value);
    transparent_crc(p_499->g_77.s2, "p_499->g_77.s2", print_hash_value);
    transparent_crc(p_499->g_77.s3, "p_499->g_77.s3", print_hash_value);
    transparent_crc(p_499->g_77.s4, "p_499->g_77.s4", print_hash_value);
    transparent_crc(p_499->g_77.s5, "p_499->g_77.s5", print_hash_value);
    transparent_crc(p_499->g_77.s6, "p_499->g_77.s6", print_hash_value);
    transparent_crc(p_499->g_77.s7, "p_499->g_77.s7", print_hash_value);
    transparent_crc(p_499->g_87, "p_499->g_87", print_hash_value);
    transparent_crc(p_499->g_94, "p_499->g_94", print_hash_value);
    transparent_crc(p_499->g_98, "p_499->g_98", print_hash_value);
    transparent_crc(p_499->g_114, "p_499->g_114", print_hash_value);
    transparent_crc(p_499->g_118, "p_499->g_118", print_hash_value);
    transparent_crc(p_499->g_119, "p_499->g_119", print_hash_value);
    transparent_crc(p_499->g_120, "p_499->g_120", print_hash_value);
    transparent_crc(p_499->g_121, "p_499->g_121", print_hash_value);
    transparent_crc(p_499->g_122, "p_499->g_122", print_hash_value);
    transparent_crc(p_499->g_123, "p_499->g_123", print_hash_value);
    transparent_crc(p_499->g_127, "p_499->g_127", print_hash_value);
    transparent_crc(p_499->g_143, "p_499->g_143", print_hash_value);
    transparent_crc(p_499->g_146.s0, "p_499->g_146.s0", print_hash_value);
    transparent_crc(p_499->g_146.s1, "p_499->g_146.s1", print_hash_value);
    transparent_crc(p_499->g_146.s2, "p_499->g_146.s2", print_hash_value);
    transparent_crc(p_499->g_146.s3, "p_499->g_146.s3", print_hash_value);
    transparent_crc(p_499->g_146.s4, "p_499->g_146.s4", print_hash_value);
    transparent_crc(p_499->g_146.s5, "p_499->g_146.s5", print_hash_value);
    transparent_crc(p_499->g_146.s6, "p_499->g_146.s6", print_hash_value);
    transparent_crc(p_499->g_146.s7, "p_499->g_146.s7", print_hash_value);
    transparent_crc(p_499->g_146.s8, "p_499->g_146.s8", print_hash_value);
    transparent_crc(p_499->g_146.s9, "p_499->g_146.s9", print_hash_value);
    transparent_crc(p_499->g_146.sa, "p_499->g_146.sa", print_hash_value);
    transparent_crc(p_499->g_146.sb, "p_499->g_146.sb", print_hash_value);
    transparent_crc(p_499->g_146.sc, "p_499->g_146.sc", print_hash_value);
    transparent_crc(p_499->g_146.sd, "p_499->g_146.sd", print_hash_value);
    transparent_crc(p_499->g_146.se, "p_499->g_146.se", print_hash_value);
    transparent_crc(p_499->g_146.sf, "p_499->g_146.sf", print_hash_value);
    transparent_crc(p_499->g_166, "p_499->g_166", print_hash_value);
    transparent_crc(p_499->g_168, "p_499->g_168", print_hash_value);
    transparent_crc(p_499->g_169, "p_499->g_169", print_hash_value);
    transparent_crc(p_499->g_173, "p_499->g_173", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_499->g_175[i][j], "p_499->g_175[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_499->g_208.x, "p_499->g_208.x", print_hash_value);
    transparent_crc(p_499->g_208.y, "p_499->g_208.y", print_hash_value);
    transparent_crc(p_499->g_208.z, "p_499->g_208.z", print_hash_value);
    transparent_crc(p_499->g_208.w, "p_499->g_208.w", print_hash_value);
    transparent_crc(p_499->g_211, "p_499->g_211", print_hash_value);
    transparent_crc(p_499->g_225.x, "p_499->g_225.x", print_hash_value);
    transparent_crc(p_499->g_225.y, "p_499->g_225.y", print_hash_value);
    transparent_crc(p_499->g_228.x, "p_499->g_228.x", print_hash_value);
    transparent_crc(p_499->g_228.y, "p_499->g_228.y", print_hash_value);
    transparent_crc(p_499->g_228.z, "p_499->g_228.z", print_hash_value);
    transparent_crc(p_499->g_228.w, "p_499->g_228.w", print_hash_value);
    transparent_crc(p_499->g_230.x, "p_499->g_230.x", print_hash_value);
    transparent_crc(p_499->g_230.y, "p_499->g_230.y", print_hash_value);
    transparent_crc(p_499->g_230.z, "p_499->g_230.z", print_hash_value);
    transparent_crc(p_499->g_230.w, "p_499->g_230.w", print_hash_value);
    transparent_crc(p_499->g_236.x, "p_499->g_236.x", print_hash_value);
    transparent_crc(p_499->g_236.y, "p_499->g_236.y", print_hash_value);
    transparent_crc(p_499->g_256.x, "p_499->g_256.x", print_hash_value);
    transparent_crc(p_499->g_256.y, "p_499->g_256.y", print_hash_value);
    transparent_crc(p_499->g_256.z, "p_499->g_256.z", print_hash_value);
    transparent_crc(p_499->g_256.w, "p_499->g_256.w", print_hash_value);
    transparent_crc(p_499->g_277.s0, "p_499->g_277.s0", print_hash_value);
    transparent_crc(p_499->g_277.s1, "p_499->g_277.s1", print_hash_value);
    transparent_crc(p_499->g_277.s2, "p_499->g_277.s2", print_hash_value);
    transparent_crc(p_499->g_277.s3, "p_499->g_277.s3", print_hash_value);
    transparent_crc(p_499->g_277.s4, "p_499->g_277.s4", print_hash_value);
    transparent_crc(p_499->g_277.s5, "p_499->g_277.s5", print_hash_value);
    transparent_crc(p_499->g_277.s6, "p_499->g_277.s6", print_hash_value);
    transparent_crc(p_499->g_277.s7, "p_499->g_277.s7", print_hash_value);
    transparent_crc(p_499->g_277.s8, "p_499->g_277.s8", print_hash_value);
    transparent_crc(p_499->g_277.s9, "p_499->g_277.s9", print_hash_value);
    transparent_crc(p_499->g_277.sa, "p_499->g_277.sa", print_hash_value);
    transparent_crc(p_499->g_277.sb, "p_499->g_277.sb", print_hash_value);
    transparent_crc(p_499->g_277.sc, "p_499->g_277.sc", print_hash_value);
    transparent_crc(p_499->g_277.sd, "p_499->g_277.sd", print_hash_value);
    transparent_crc(p_499->g_277.se, "p_499->g_277.se", print_hash_value);
    transparent_crc(p_499->g_277.sf, "p_499->g_277.sf", print_hash_value);
    transparent_crc(p_499->g_296.x, "p_499->g_296.x", print_hash_value);
    transparent_crc(p_499->g_296.y, "p_499->g_296.y", print_hash_value);
    transparent_crc(p_499->g_296.z, "p_499->g_296.z", print_hash_value);
    transparent_crc(p_499->g_296.w, "p_499->g_296.w", print_hash_value);
    transparent_crc(p_499->g_309, "p_499->g_309", print_hash_value);
    transparent_crc(p_499->g_337.x, "p_499->g_337.x", print_hash_value);
    transparent_crc(p_499->g_337.y, "p_499->g_337.y", print_hash_value);
    transparent_crc(p_499->g_370.s0, "p_499->g_370.s0", print_hash_value);
    transparent_crc(p_499->g_370.s1, "p_499->g_370.s1", print_hash_value);
    transparent_crc(p_499->g_370.s2, "p_499->g_370.s2", print_hash_value);
    transparent_crc(p_499->g_370.s3, "p_499->g_370.s3", print_hash_value);
    transparent_crc(p_499->g_370.s4, "p_499->g_370.s4", print_hash_value);
    transparent_crc(p_499->g_370.s5, "p_499->g_370.s5", print_hash_value);
    transparent_crc(p_499->g_370.s6, "p_499->g_370.s6", print_hash_value);
    transparent_crc(p_499->g_370.s7, "p_499->g_370.s7", print_hash_value);
    transparent_crc(p_499->g_377.x, "p_499->g_377.x", print_hash_value);
    transparent_crc(p_499->g_377.y, "p_499->g_377.y", print_hash_value);
    transparent_crc(p_499->g_377.z, "p_499->g_377.z", print_hash_value);
    transparent_crc(p_499->g_377.w, "p_499->g_377.w", print_hash_value);
    transparent_crc(p_499->g_380.s0, "p_499->g_380.s0", print_hash_value);
    transparent_crc(p_499->g_380.s1, "p_499->g_380.s1", print_hash_value);
    transparent_crc(p_499->g_380.s2, "p_499->g_380.s2", print_hash_value);
    transparent_crc(p_499->g_380.s3, "p_499->g_380.s3", print_hash_value);
    transparent_crc(p_499->g_380.s4, "p_499->g_380.s4", print_hash_value);
    transparent_crc(p_499->g_380.s5, "p_499->g_380.s5", print_hash_value);
    transparent_crc(p_499->g_380.s6, "p_499->g_380.s6", print_hash_value);
    transparent_crc(p_499->g_380.s7, "p_499->g_380.s7", print_hash_value);
    transparent_crc(p_499->g_380.s8, "p_499->g_380.s8", print_hash_value);
    transparent_crc(p_499->g_380.s9, "p_499->g_380.s9", print_hash_value);
    transparent_crc(p_499->g_380.sa, "p_499->g_380.sa", print_hash_value);
    transparent_crc(p_499->g_380.sb, "p_499->g_380.sb", print_hash_value);
    transparent_crc(p_499->g_380.sc, "p_499->g_380.sc", print_hash_value);
    transparent_crc(p_499->g_380.sd, "p_499->g_380.sd", print_hash_value);
    transparent_crc(p_499->g_380.se, "p_499->g_380.se", print_hash_value);
    transparent_crc(p_499->g_380.sf, "p_499->g_380.sf", print_hash_value);
    transparent_crc(p_499->g_401, "p_499->g_401", print_hash_value);
    transparent_crc(p_499->g_454, "p_499->g_454", print_hash_value);
    transparent_crc(p_499->g_458, "p_499->g_458", print_hash_value);
    transparent_crc(p_499->g_474, "p_499->g_474", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_499->g_483[i][j][k], "p_499->g_483[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_499->g_488.x, "p_499->g_488.x", print_hash_value);
    transparent_crc(p_499->g_488.y, "p_499->g_488.y", print_hash_value);
    transparent_crc(p_499->g_488.z, "p_499->g_488.z", print_hash_value);
    transparent_crc(p_499->g_488.w, "p_499->g_488.w", print_hash_value);
    transparent_crc(p_499->v_collective, "p_499->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 52; i++)
            transparent_crc(p_499->l_special_values[i], "p_499->l_special_values[i]", print_hash_value);
    transparent_crc(p_499->l_comm_values[get_linear_local_id()], "p_499->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_499->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()], "p_499->g_comm_values[get_linear_group_id() * 60 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
