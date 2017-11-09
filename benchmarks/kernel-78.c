// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 76,53,1 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 909977695

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   volatile uint64_t  f4;
   uint16_t  f5;
   uint16_t  f6;
};

struct S1 {
   volatile uint64_t  f0;
   int16_t  f1;
};

struct S2 {
   volatile int8_t  f0;
   struct S0  f1;
   uint64_t  f2;
   int32_t  f3;
};

struct S3 {
   uint32_t  f0;
   int8_t  f1;
   uint8_t  f2;
   int16_t  f3;
   int64_t  f4;
   int16_t  f5;
   uint16_t  f6;
   int16_t  f7;
   volatile int32_t  f8;
};

struct S5 {
   volatile int8_t  f0;
   uint32_t  f1;
   volatile struct S3  f2;
};

struct S6 {
    uint32_t g_11;
    uint32_t g_32;
    struct S0 g_37[3][3][8];
    struct S0 *g_36;
    uint32_t g_44;
    int8_t g_61[3][1];
    VECTOR(int8_t, 2) g_62;
    VECTOR(int8_t, 2) g_64;
    VECTOR(int8_t, 16) g_65;
    volatile uint32_t **g_66;
    VECTOR(int8_t, 16) g_78;
    uint32_t **g_80;
    uint32_t ***g_79;
    int32_t g_82[7];
    int32_t * volatile g_96;
    struct S0 g_97;
    int64_t g_105;
    VECTOR(uint32_t, 8) g_107;
    VECTOR(uint32_t, 2) g_109;
    volatile struct S2 g_123;
    uint32_t *g_127;
    int32_t * volatile g_128[8][5][2];
    uint64_t g_134;
    struct S5 g_137[9];
    struct S5 * volatile g_138[3][6][10];
    struct S5 * volatile g_139[9];
    VECTOR(uint32_t, 4) g_160;
    volatile struct S1 g_183;
    uint32_t g_186;
    struct S0 *g_216;
    struct S0 g_256;
    struct S0 g_259[2][1];
    uint32_t *g_260;
    int32_t ** volatile g_261;
    struct S1 g_271;
    uint32_t g_274;
    struct S0 g_275;
    volatile VECTOR(uint16_t, 8) g_279;
    uint8_t g_292;
    uint64_t g_303;
    int8_t g_304;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S6 * p_305);
struct S0  func_2(uint32_t  p_3, struct S6 * p_305);
struct S1  func_12(uint64_t  p_13, uint32_t  p_14, uint32_t * p_15, uint32_t * p_16, struct S6 * p_305);
int64_t  func_17(int16_t  p_18, struct S6 * p_305);
struct S0 * func_19(int32_t  p_20, uint16_t  p_21, uint32_t * p_22, uint32_t  p_23, uint64_t  p_24, struct S6 * p_305);
uint32_t * func_27(uint32_t  p_28, uint32_t * p_29, struct S0 * p_30, struct S6 * p_305);
struct S0 * func_33(struct S0 * p_34, uint32_t * p_35, struct S6 * p_305);
uint32_t * func_38(uint32_t  p_39, uint16_t  p_40, uint32_t * p_41, uint32_t  p_42, struct S6 * p_305);
struct S0  func_49(int64_t  p_50, struct S6 * p_305);
uint16_t  func_51(int8_t  p_52, struct S0 * p_53, uint32_t * p_54, struct S6 * p_305);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_305->l_comm_values p_305->g_11 p_305->g_comm_values p_305->g_36 p_305->g_37.f1 p_305->g_44 p_305->g_37.f0 p_305->g_37.f4 p_305->g_62 p_305->g_64 p_305->g_65 p_305->g_66 p_305->g_78 p_305->g_32 p_305->g_79 p_305->g_82 p_305->g_96 p_305->g_97 p_305->g_37.f2 p_305->g_105 p_305->g_37 p_305->g_107 p_305->g_109 p_305->g_123 p_305->g_134 p_305->g_137 p_305->g_160 p_305->g_61 p_305->g_183 permutations p_305->g_256 p_305->g_271 p_305->g_274 p_305->g_275 p_305->g_279 p_305->g_292 p_305->g_303 p_305->g_304
 * writes: p_305->g_11 p_305->g_44 p_305->g_61 p_305->g_82 p_305->g_105 p_305->g_127 p_305->g_97.f5 p_305->g_134 p_305->g_137 p_305->g_186 p_305->g_37.f6 p_305->g_36 p_305->g_216 p_305->g_32 p_305->g_37.f5 p_305->g_37.f1 p_305->g_260 p_305->g_274 p_305->g_37 p_305->g_256.f6 p_305->g_292 p_305->g_271.f1 p_305->g_303 p_305->g_304
 */
uint64_t  func_1(struct S6 * p_305)
{ /* block id: 4 */
    uint32_t l_276[8][5] = {{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL},{1UL,4294967295UL,0x1DBCB66DL,0xAE517FE0L,4294967295UL}};
    uint32_t *l_277 = (void*)0;
    int32_t l_278 = 0x669FF21DL;
    int32_t *l_280[1][3][3] = {{{&p_305->g_82[0],&p_305->g_82[0],&p_305->g_82[0]},{&p_305->g_82[0],&p_305->g_82[0],&p_305->g_82[0]},{&p_305->g_82[0],&p_305->g_82[0],&p_305->g_82[0]}}};
    uint16_t *l_281 = (void*)0;
    uint16_t *l_282 = &p_305->g_256.f6;
    uint8_t *l_291 = &p_305->g_292;
    uint16_t l_297 = 8UL;
    int16_t *l_298 = (void*)0;
    int16_t *l_299 = &p_305->g_271.f1;
    uint8_t l_302[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_302[i] = 0UL;
    p_305->g_37[0][2][2] = func_2(p_305->l_comm_values[(safe_mod_func_uint32_t_u_u(p_305->tid, 1))], p_305);
    p_305->g_82[5] ^= ((l_276[1][1] == (l_278 = l_276[1][1])) & ((VECTOR(uint16_t, 2))(p_305->g_279.s15)).even);
    p_305->g_304 &= (p_305->g_303 &= (((*l_282)--) , (l_302[0] |= ((*p_305->g_96) = ((((*l_299) = ((safe_add_func_int32_t_s_s(0x35BD1C8FL, (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((~(--(*l_291))) == p_305->g_271.f0), (safe_rshift_func_int8_t_s_s(p_305->g_97.f2, l_297)))), p_305->g_97.f3)))) ^ 0x0DL)) < p_305->g_137[4].f1) , ((~(safe_add_func_int16_t_s_s(p_305->g_82[0], p_305->g_275.f3))) && p_305->g_123.f1.f3))))));
    return p_305->g_97.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_11 p_305->g_comm_values p_305->g_36 p_305->g_37.f1 p_305->g_44 p_305->g_37.f0 p_305->g_37.f4 p_305->g_62 p_305->g_64 p_305->g_65 p_305->g_66 p_305->g_78 p_305->g_32 p_305->g_79 p_305->g_82 p_305->g_96 p_305->g_97 p_305->g_37.f2 p_305->g_105 p_305->g_37 p_305->g_107 p_305->g_109 p_305->g_123 p_305->g_134 p_305->g_137 p_305->g_160 p_305->g_61 p_305->g_183 permutations p_305->g_256 p_305->g_271 p_305->g_274 p_305->g_275
 * writes: p_305->g_11 p_305->g_44 p_305->g_61 p_305->g_82 p_305->g_105 p_305->g_127 p_305->g_97.f5 p_305->g_134 p_305->g_137 p_305->g_186 p_305->g_37.f6 p_305->g_36 p_305->g_216 p_305->g_32 p_305->g_37.f5 p_305->g_37.f1 p_305->g_260 p_305->g_274
 */
struct S0  func_2(uint32_t  p_3, struct S6 * p_305)
{ /* block id: 5 */
    int32_t l_8 = 5L;
    uint32_t *l_9 = (void*)0;
    uint32_t *l_10 = &p_305->g_11;
    int8_t l_272 = 0x23L;
    int32_t *l_273[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_305->g_274 |= ((((((~(0xDD2EB2FC257A10DDL && GROUP_DIVERGE(1, 1))) >= 0x91L) || (safe_add_func_uint8_t_u_u((((*l_10) |= (safe_add_func_int16_t_s_s(0x1ACAL, l_8))) == p_3), (l_9 != (func_12(l_8, p_3, (((~func_17(l_8, p_305)) == l_8) , &p_305->g_32), &p_305->g_32, p_305) , l_10))))) | l_8) <= p_305->g_256.f1) && l_272);
    return p_305->g_275;
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_134 permutations p_305->g_82 p_305->g_44 p_305->g_32 p_305->g_37.f5 p_305->g_256 p_305->g_62 p_305->g_105 p_305->g_36 p_305->g_37 p_305->g_109 p_305->g_123 p_305->g_78 p_305->g_comm_values p_305->g_137 p_305->g_183 p_305->g_107 p_305->g_271
 * writes: p_305->g_134 p_305->g_32 p_305->g_37.f5 p_305->g_37.f1 p_305->g_260 p_305->g_105 p_305->g_127 p_305->g_97.f5 p_305->g_137 p_305->g_82 p_305->g_186 p_305->g_37.f6
 */
struct S1  func_12(uint64_t  p_13, uint32_t  p_14, uint32_t * p_15, uint32_t * p_16, struct S6 * p_305)
{ /* block id: 79 */
    uint32_t l_243 = 1UL;
    uint32_t *l_248 = &p_305->g_44;
    uint16_t *l_251 = &p_305->g_37[0][2][2].f5;
    int32_t l_254 = (-10L);
    VECTOR(uint64_t, 2) l_255 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL);
    uint32_t *l_257 = &p_305->g_37[0][2][2].f1;
    struct S0 *l_258 = &p_305->g_259[0][0];
    int32_t *l_263 = &l_254;
    int32_t **l_262 = &l_263;
    int32_t *l_264 = &p_305->g_82[0];
    int32_t *l_265 = &p_305->g_82[2];
    int32_t *l_266[9][5] = {{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]},{&p_305->g_82[5],(void*)0,&p_305->g_82[0],(void*)0,&p_305->g_82[5]}};
    int8_t l_267 = 0x1FL;
    uint16_t l_268 = 65535UL;
    int i, j;
    for (p_305->g_134 = 0; (p_305->g_134 != 30); ++p_305->g_134)
    { /* block id: 82 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_305->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u(l_243, 10))][(safe_mod_func_uint32_t_u_u(p_305->tid, 1))]));
        if (permutations[(safe_mod_func_uint32_t_u_u(l_243, 10))][(safe_mod_func_uint32_t_u_u(p_305->tid, 1))])
            break;
    }
    (*l_262) = func_38((safe_mul_func_uint8_t_u_u(p_305->g_82[4], p_305->g_44)), ((++(*p_16)) > (((l_248 == (p_305->g_260 = func_27(p_14, (((*l_257) = ((((l_254 = ((*l_251)++)) < 0x3E54L) , ((VECTOR(uint64_t, 8))(l_255.yxxyyyxy)).s7) > (p_305->g_256 , (0xE58F154AL < GROUP_DIVERGE(1, 1))))) , (p_14 , p_16)), l_258, p_305))) , l_248) == (void*)0)), &l_243, l_255.y, p_305);
    --l_268;
    return p_305->g_271;
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_comm_values p_305->g_36 p_305->g_37.f1 p_305->g_44 p_305->g_37.f0 p_305->g_37.f4 p_305->g_62 p_305->g_64 p_305->g_65 p_305->g_66 p_305->g_78 p_305->g_32 p_305->g_79 p_305->g_82 p_305->g_96 p_305->g_97 p_305->g_37.f2 p_305->g_105 p_305->g_37 p_305->g_107 p_305->g_109 p_305->g_123 p_305->g_134 p_305->g_137 p_305->g_160 p_305->g_61 p_305->g_183
 * writes: p_305->g_44 p_305->g_61 p_305->g_82 p_305->g_105 p_305->g_127 p_305->g_97.f5 p_305->g_134 p_305->g_137 p_305->g_186 p_305->g_37.f6 p_305->g_36 p_305->g_216
 */
int64_t  func_17(int16_t  p_18, struct S6 * p_305)
{ /* block id: 7 */
    uint32_t *l_31 = &p_305->g_32;
    uint32_t *l_43 = &p_305->g_44;
    int32_t l_45 = (-7L);
    int32_t l_46 = 1L;
    VECTOR(uint32_t, 8) l_48 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL);
    uint32_t **l_98 = (void*)0;
    uint32_t *l_99 = &p_305->g_32;
    struct S0 **l_213 = &p_305->g_36;
    struct S0 *l_215 = &p_305->g_37[0][2][2];
    struct S0 **l_214[1][4][4] = {{{&l_215,&l_215,(void*)0,&l_215},{&l_215,&l_215,(void*)0,&l_215},{&l_215,&l_215,(void*)0,&l_215},{&l_215,&l_215,(void*)0,&l_215}}};
    uint32_t **l_229 = &l_31;
    int i, j, k;
    (*l_213) = func_19(p_305->g_comm_values[p_305->tid], (safe_mul_func_uint8_t_u_u(((((*l_229) = func_27(p_18, l_31, (p_305->g_216 = ((*l_213) = func_33(p_305->g_36, func_38((l_46 = (l_45 = ((*l_43) &= p_305->g_37[0][2][2].f1))), (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 16))(l_48.s2463651624226374)).s8)), (l_99 = (func_49(l_48.s4, p_305) , l_31)), p_305->g_37[0][2][2].f2, p_305), p_305))), p_305)) != l_43) ^ 0x555B662DL), l_48.s0)), &p_305->g_32, l_48.s7, l_48.s2, p_305);
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0 * func_19(int32_t  p_20, uint16_t  p_21, uint32_t * p_22, uint32_t  p_23, uint64_t  p_24, struct S6 * p_305)
{ /* block id: 74 */
    int32_t *l_230 = (void*)0;
    int32_t *l_231 = (void*)0;
    int32_t *l_232 = (void*)0;
    int32_t *l_233 = &p_305->g_82[5];
    int32_t *l_234 = (void*)0;
    int32_t *l_235 = &p_305->g_82[2];
    int32_t *l_236 = &p_305->g_82[5];
    int32_t *l_237[3][7] = {{&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6]},{&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6]},{&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6],&p_305->g_82[5],&p_305->g_82[6],&p_305->g_82[6]}};
    uint64_t l_238[7] = {6UL,18446744073709551612UL,6UL,6UL,18446744073709551612UL,6UL,6UL};
    int i, j;
    l_238[3]--;
    return &p_305->g_37[0][2][2];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_27(uint32_t  p_28, uint32_t * p_29, struct S0 * p_30, struct S6 * p_305)
{ /* block id: 70 */
    int32_t *l_217 = &p_305->g_82[5];
    int32_t *l_218 = &p_305->g_82[0];
    int32_t *l_219 = &p_305->g_82[5];
    int32_t *l_220 = &p_305->g_82[0];
    int32_t *l_221 = &p_305->g_82[5];
    int32_t *l_222 = (void*)0;
    int32_t *l_223 = &p_305->g_82[4];
    int32_t *l_224 = (void*)0;
    int32_t *l_225[8][4][8] = {{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&p_305->g_82[5],&p_305->g_82[5],&p_305->g_82[2],(void*)0,(void*)0,(void*)0}}};
    uint32_t l_226 = 8UL;
    int i, j, k;
    ++l_226;
    return &p_305->g_32;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0 * func_33(struct S0 * p_34, uint32_t * p_35, struct S6 * p_305)
{ /* block id: 66 */
    return &p_305->g_37[2][2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_62 p_305->g_105 p_305->g_36 p_305->g_37 p_305->g_107 p_305->g_109 p_305->g_123 p_305->g_78 p_305->g_comm_values p_305->g_32 p_305->g_82 p_305->g_97.f5 p_305->g_134 p_305->g_137 p_305->g_160 p_305->g_64 p_305->g_61 p_305->g_97.f0 p_305->g_183
 * writes: p_305->g_105 p_305->g_127 p_305->g_97.f5 p_305->g_134 p_305->g_137 p_305->g_61 p_305->g_82 p_305->g_186 p_305->g_37.f6
 */
uint32_t * func_38(uint32_t  p_39, uint16_t  p_40, uint32_t * p_41, uint32_t  p_42, struct S6 * p_305)
{ /* block id: 31 */
    int64_t *l_104 = &p_305->g_105;
    VECTOR(uint32_t, 4) l_106 = (VECTOR(uint32_t, 4))(0x2E41012EL, (VECTOR(uint32_t, 2))(0x2E41012EL, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 2) l_108 = (VECTOR(uint32_t, 2))(0x621A5245L, 0x2D51D326L);
    VECTOR(uint32_t, 8) l_110 = (VECTOR(uint32_t, 8))(0xDE3CFF6BL, (VECTOR(uint32_t, 4))(0xDE3CFF6BL, (VECTOR(uint32_t, 2))(0xDE3CFF6BL, 0xEFA7DB85L), 0xEFA7DB85L), 0xEFA7DB85L, 0xDE3CFF6BL, 0xEFA7DB85L);
    VECTOR(uint8_t, 8) l_119 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xA1L), 0xA1L), 0xA1L, 1UL, 0xA1L);
    VECTOR(int16_t, 2) l_126 = (VECTOR(int16_t, 2))(0x0E3FL, (-5L));
    int32_t l_129 = 0x52445B51L;
    int32_t l_147 = 0x429FBC57L;
    VECTOR(uint16_t, 8) l_188 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD7E8L), 0xD7E8L), 0xD7E8L, 0UL, 0xD7E8L);
    uint32_t *l_193 = (void*)0;
    uint32_t **l_192[4] = {&l_193,&l_193,&l_193,&l_193};
    int32_t l_202 = 0x29FBC235L;
    int32_t l_205 = 0x3E87EE97L;
    int32_t l_206 = (-1L);
    int32_t l_207 = 1L;
    int i;
    l_129 = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((((((*l_104) ^= p_305->g_62.x) , (((((*p_305->g_36) , ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_106.zyzz)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_305->g_107.s14653271)))), ((VECTOR(uint32_t, 2))(l_108.yx)), 4294967295UL, 0x1F8B52B2L)).lo, ((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_305->g_109.xxxxyxyy)).even)).yxywywzzwzzzxxww, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(8UL, 4294967295UL)))).xxyxyyxyyxyyyxxy))))), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xB105AB9CL, 0UL)).xxxyyyyx)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x9E116460L, ((VECTOR(uint32_t, 2))(l_110.s44)), 0xAEB5C81FL)).ywwyyxwzyzxxzwyy)).lo))).s2371322300723623))).even))).s7) , p_305->g_109.y) && ((((((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_42 || ((((VECTOR(uint8_t, 16))(l_119.s6532723254063433)).s4 >= ((((safe_unary_minus_func_uint16_t_u((l_108.x >= ((safe_mod_func_int16_t_s_s((((p_305->g_123 , (void*)0) == ((safe_lshift_func_uint8_t_u_s((((VECTOR(int16_t, 2))(l_126.yx)).even < 0xD490L), 1)) , (p_305->g_127 = &p_42))) && 0x32L), 0x7827L)) & 18446744073709551612UL)))) > l_110.s5) <= l_108.x) == p_305->g_78.s1)) != p_305->g_comm_values[p_305->tid])), 5)), p_305->g_78.s4)), p_305->g_32)) | l_106.x) & 65535UL) , l_108.x) <= p_305->g_32) != p_305->g_78.s1)) | p_305->g_82[3])) != l_108.x) || p_305->g_123.f1.f3) ^ 0xB133L), 2)), 255UL)) || 0x6DA4L);
    for (p_305->g_97.f5 = 15; (p_305->g_97.f5 <= 8); p_305->g_97.f5--)
    { /* block id: 37 */
        int32_t *l_132 = &p_305->g_82[1];
        int32_t **l_133 = &l_132;
        struct S5 *l_140 = &p_305->g_137[4];
        uint8_t l_165 = 0UL;
        uint32_t l_169 = 4294967288UL;
        int8_t l_173 = (-1L);
        VECTOR(int16_t, 16) l_184 = (VECTOR(int16_t, 16))(0x023EL, (VECTOR(int16_t, 4))(0x023EL, (VECTOR(int16_t, 2))(0x023EL, 0x3CBAL), 0x3CBAL), 0x3CBAL, 0x023EL, 0x3CBAL, (VECTOR(int16_t, 2))(0x023EL, 0x3CBAL), (VECTOR(int16_t, 2))(0x023EL, 0x3CBAL), 0x023EL, 0x3CBAL, 0x023EL, 0x3CBAL);
        int32_t l_200 = 4L;
        int32_t l_203 = 0x4325F09CL;
        int32_t l_208 = 0x67E13960L;
        int32_t l_209[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
        int i, j;
        (*l_133) = l_132;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_305->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u((--p_305->g_134), 10))][(safe_mod_func_uint32_t_u_u(p_305->tid, 1))]));
        (*l_140) = p_305->g_137[4];
        if (p_40)
        { /* block id: 44 */
            int32_t l_148 = 0x3A6158B8L;
            int8_t *l_166 = (void*)0;
            int8_t *l_167 = &p_305->g_61[0][0];
            (*l_132) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-7L), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x15L, (safe_div_func_uint64_t_u_u(p_305->g_123.f1.f6, l_147)))), (p_40 ^ (l_148 > l_108.y)))) , (safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((((((VECTOR(uint32_t, 2))(p_305->g_160.wz)).lo < (0x25L > p_39)) == (((safe_lshift_func_int8_t_s_s(((*l_167) ^= (((safe_mod_func_uint16_t_u_u(p_42, 0x6255L)) || l_165) != p_305->g_64.y)), 1)) & p_305->g_137[4].f2.f3) < p_305->g_109.x)) > l_148), (-7L))) && p_305->g_123.f1.f4), 4)), p_305->g_97.f0)) < p_40), l_148)) , p_305->g_107.s5)))), 0x5A5AL, 0x656CL, ((VECTOR(int16_t, 2))((-1L))), 0x6AE4L, 0x0386L, 0x0902L)), ((VECTOR(int16_t, 8))(0x202DL)), ((VECTOR(int16_t, 8))((-1L)))))).s56, ((VECTOR(uint16_t, 2))(65535UL))))), (-9L))))).z;
            if (l_126.x)
                break;
        }
        else
        { /* block id: 48 */
            int32_t *l_168[4];
            uint32_t l_172 = 4294967291UL;
            uint32_t l_210 = 0x197A3459L;
            int i;
            for (i = 0; i < 4; i++)
                l_168[i] = &l_129;
            --l_169;
            if (l_172)
                break;
            if (l_173)
                continue;
            for (p_305->g_134 = 0; (p_305->g_134 > 16); p_305->g_134 = safe_add_func_uint8_t_u_u(p_305->g_134, 5))
            { /* block id: 54 */
                uint64_t l_182 = 0x84D33B254463AE84L;
                int16_t *l_185[4];
                uint16_t *l_187 = (void*)0;
                uint16_t *l_189 = &p_305->g_37[0][2][2].f6;
                int32_t l_201 = 2L;
                int32_t l_204[1];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_185[i] = (void*)0;
                for (i = 0; i < 1; i++)
                    l_204[i] = 0x3F19644BL;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_305->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((p_305->g_186 = (safe_sub_func_int16_t_s_s(l_182, (p_305->g_183 , ((VECTOR(int16_t, 16))(l_184.s39660c891040d20a)).sd)))) <= ((*l_189) = (l_106.w >= (p_305->g_107.s7 ^ ((VECTOR(uint16_t, 8))((*l_132), (l_129 ^= p_305->g_37[0][2][2].f5), ((VECTOR(uint16_t, 4))(l_188.s2125)), 1UL, 0x491FL)).s4)))), (safe_add_func_uint32_t_u_u(((void*)0 != l_192[0]), (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_305->global_1_offset, get_global_id(1), 10), 0xAAFF1BAEL, 0x24C83F1CL, 4294967290UL)).w | ((GROUP_DIVERGE(0, 1) <= (safe_mul_func_uint8_t_u_u(l_106.y, 0x0DL))) <= p_305->g_134)), p_305->g_107.s4)), p_305->g_107.s4)))))) && p_40), 1L)), 10))][(safe_mod_func_uint32_t_u_u(p_305->tid, 1))]));
                l_210++;
            }
        }
    }
    return l_193;
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_37.f0 p_305->g_37.f4 p_305->g_62 p_305->g_64 p_305->g_65 p_305->g_66 p_305->g_78 p_305->g_32 p_305->g_79 p_305->g_37.f1 p_305->g_82 p_305->g_96 p_305->g_97
 * writes: p_305->g_61 p_305->g_82
 */
struct S0  func_49(int64_t  p_50, struct S6 * p_305)
{ /* block id: 11 */
    uint32_t *l_55 = &p_305->g_37[0][2][2].f1;
    uint32_t **l_56 = &l_55;
    (*p_305->g_96) = (((VECTOR(uint16_t, 2))(1UL, 65535UL)).hi != func_51(((18446744073709551609UL && p_305->g_37[0][2][2].f0) <= p_50), &p_305->g_37[1][0][0], ((*l_56) = l_55), p_305));
    return p_305->g_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_305->g_37.f4 p_305->g_62 p_305->g_64 p_305->g_65 p_305->g_66 p_305->g_78 p_305->g_32 p_305->g_79 p_305->g_37.f1 p_305->g_82
 * writes: p_305->g_61 p_305->g_82
 */
uint16_t  func_51(int8_t  p_52, struct S0 * p_53, uint32_t * p_54, struct S6 * p_305)
{ /* block id: 13 */
    int8_t *l_59 = (void*)0;
    int8_t *l_60 = &p_305->g_61[0][0];
    VECTOR(int8_t, 8) l_63 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x68L), 0x68L), 0x68L, (-1L), 0x68L);
    uint32_t *l_68 = &p_305->g_37[0][2][2].f1;
    uint32_t **l_67 = &l_68;
    uint32_t **l_70 = &l_68;
    uint32_t ***l_69 = &l_70;
    uint32_t **l_72 = &l_68;
    uint32_t ***l_71 = &l_72;
    VECTOR(int8_t, 2) l_73 = (VECTOR(int8_t, 2))(0L, 0x5AL);
    VECTOR(int8_t, 16) l_74 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1DL), 0x1DL), 0x1DL, (-1L), 0x1DL, (VECTOR(int8_t, 2))((-1L), 0x1DL), (VECTOR(int8_t, 2))((-1L), 0x1DL), (-1L), 0x1DL, (-1L), 0x1DL);
    VECTOR(int8_t, 4) l_77 = (VECTOR(int8_t, 4))(0x18L, (VECTOR(int8_t, 2))(0x18L, (-5L)), (-5L));
    int32_t *l_81 = &p_305->g_82[5];
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = &p_305->g_82[5];
    int32_t *l_85 = &p_305->g_82[2];
    int32_t *l_86 = &p_305->g_82[2];
    int32_t *l_87 = &p_305->g_82[5];
    int32_t *l_88 = &p_305->g_82[6];
    int32_t *l_89[8];
    uint16_t l_90 = 3UL;
    int i;
    for (i = 0; i < 8; i++)
        l_89[i] = &p_305->g_82[5];
    (*l_81) = ((safe_lshift_func_int8_t_s_s((p_52 < ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(0x0AL, 0x65L))))).xxxxxyxy)).s61)).hi), ((GROUP_DIVERGE(1, 1) , (((*l_60) = p_305->g_37[0][2][2].f4) | ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_305->g_62.yxyxxxyy)), ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_63.s17643005)).s4612076751064640)).s3d34, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_305->g_64.yxxx)).yxwzywxyzyyyxyxw)).s2590, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))(p_305->g_65.sb8)).yyyy, ((VECTOR(int8_t, 4))((p_305->g_66 == ((*l_71) = ((*l_69) = (l_67 = l_67)))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x14L, 0x65L)).yyxxxxyxyxyxxxyy)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(0x1DL, 1L)).yxyx, ((VECTOR(int8_t, 2))(l_73.xx)).yyyx))), ((VECTOR(int8_t, 4))(l_74.sbeb4))))).xwyzyzxzywxxxzyw, (int8_t)(safe_mod_func_int8_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_77.wy)), (-1L), 0x71L)).wzyyyzyzxzxwzwxz, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))(p_305->g_78.s3f)), ((VECTOR(int8_t, 4))(((p_305->g_32 , p_305->g_79) != (void*)0), ((((p_52 , ((-3L) | 0x8F2DL)) || p_52) <= 0x18C2A7CEL) != 0x08F9A2F9BC035BBAL), 0x05L, 0x22L)).odd))).xxyxyyyyyyxyyxxy, ((VECTOR(int8_t, 16))(0x7FL))))).hi, ((VECTOR(int8_t, 8))(0x07L)), ((VECTOR(int8_t, 8))(1L))))).hi)))).w >= 0xA9L), p_305->g_37[0][2][2].f1)), (int8_t)(-1L)))).sb, 1L, (-1L), (-1L), p_52, 0x15L, 2L, (-4L))), ((VECTOR(int8_t, 8))((-1L)))))).odd, ((VECTOR(int8_t, 4))(0L)), ((VECTOR(int8_t, 4))(0x03L))))))).wyxyzyyyyywwwyww))).lo, ((VECTOR(int8_t, 8))(1L))))).s7636400513620475)).s8661, ((VECTOR(int8_t, 4))((-4L))), ((VECTOR(int8_t, 4))(8L))))).lo)), 1L)), ((VECTOR(int8_t, 4))((-1L)))))).yyzwwxwzwwwxzwxw, ((VECTOR(int8_t, 16))(0x1BL))))).s0a34))).xyzzwwzyzxzxxzzw)).odd)).s67, ((VECTOR(int8_t, 2))(0x3AL)), ((VECTOR(int8_t, 2))(0L))))).hi, 0x71L, ((VECTOR(int8_t, 2))(0x3DL)), p_52, (-10L), 0x1EL, 1L)).sd)) | (-1L)))) < p_305->g_78.sf);
    (*l_81) ^= p_52;
    l_90++;
    for (p_52 = (-17); (p_52 > (-18)); p_52 = safe_sub_func_uint64_t_u_u(p_52, 6))
    { /* block id: 23 */
        uint8_t l_95 = 0x2AL;
        l_95 = 0x6879FA2DL;
        (*l_81) ^= 0L;
    }
    return p_52;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S6 c_306;
    struct S6* p_305 = &c_306;
    struct S6 c_307 = {
        0x5BED8572L, // p_305->g_11
        0xA05008D6L, // p_305->g_32
        {{{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}}},{{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}}},{{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}},{{0xC8167BA9L,4294967294UL,0xBB91E255L,0x18227FD5L,1UL,0xC438L,0x8743L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0x3BCAB384L,4294967290UL,0UL,0xF3B0A6BAL,0xE8EBF9D6D6F57B8DL,65531UL,0UL},{0x21365D5AL,0UL,4294967286UL,0UL,18446744073709551613UL,0x6659L,0x0EA8L},{0xCCAA7A75L,0UL,0x180C4898L,1UL,18446744073709551615UL,1UL,0x0188L},{1UL,0UL,1UL,0x864EA5F7L,0x67713999EA342190L,0UL,1UL}}}}, // p_305->g_37
        &p_305->g_37[0][2][2], // p_305->g_36
        0xEF4C81FAL, // p_305->g_44
        {{1L},{1L},{1L}}, // p_305->g_61
        (VECTOR(int8_t, 2))(0x3EL, 0x2AL), // p_305->g_62
        (VECTOR(int8_t, 2))((-10L), (-8L)), // p_305->g_64
        (VECTOR(int8_t, 16))(0x4EL, (VECTOR(int8_t, 4))(0x4EL, (VECTOR(int8_t, 2))(0x4EL, 0x4AL), 0x4AL), 0x4AL, 0x4EL, 0x4AL, (VECTOR(int8_t, 2))(0x4EL, 0x4AL), (VECTOR(int8_t, 2))(0x4EL, 0x4AL), 0x4EL, 0x4AL, 0x4EL, 0x4AL), // p_305->g_65
        (void*)0, // p_305->g_66
        (VECTOR(int8_t, 16))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 0x02L), 0x02L), 0x02L, 0x51L, 0x02L, (VECTOR(int8_t, 2))(0x51L, 0x02L), (VECTOR(int8_t, 2))(0x51L, 0x02L), 0x51L, 0x02L, 0x51L, 0x02L), // p_305->g_78
        (void*)0, // p_305->g_80
        &p_305->g_80, // p_305->g_79
        {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}, // p_305->g_82
        &p_305->g_82[5], // p_305->g_96
        {0xB37AD106L,4294967291UL,0x3F765756L,0x4DA32A0AL,0x601C580CF4D97D38L,0x8DFBL,0x4EFDL}, // p_305->g_97
        0x449BE158439F2745L, // p_305->g_105
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xCEDA3AAEL), 0xCEDA3AAEL), 0xCEDA3AAEL, 4294967295UL, 0xCEDA3AAEL), // p_305->g_107
        (VECTOR(uint32_t, 2))(0xA53DBADBL, 0xCADA2DF3L), // p_305->g_109
        {-1L,{0xFADE91FDL,0xA6B179F2L,4UL,1UL,0xA8BD2F6D19666DB7L,0UL,0x316BL},0xF5D29D3D43A10804L,0x38D8FEC6L}, // p_305->g_123
        (void*)0, // p_305->g_127
        {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_305->g_128
        0x6D31D169B56A995AL, // p_305->g_134
        {{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}},{-2L,0x0FDF59F0L,{0UL,-1L,0xACL,-1L,0x529FFD0D49603CDAL,0x1237L,0xF549L,0x116DL,0x552267BAL}}}, // p_305->g_137
        {{{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0}},{{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0}},{{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0},{(void*)0,&p_305->g_137[5],&p_305->g_137[8],&p_305->g_137[4],&p_305->g_137[7],&p_305->g_137[7],&p_305->g_137[4],&p_305->g_137[8],&p_305->g_137[5],(void*)0}}}, // p_305->g_138
        {&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4],&p_305->g_137[4]}, // p_305->g_139
        (VECTOR(uint32_t, 4))(0x93BBACFCL, (VECTOR(uint32_t, 2))(0x93BBACFCL, 0xDEF1E067L), 0xDEF1E067L), // p_305->g_160
        {0UL,0x0522L}, // p_305->g_183
        0x0756A289L, // p_305->g_186
        &p_305->g_97, // p_305->g_216
        {4294967291UL,0x252DD61BL,1UL,0x79D365FEL,18446744073709551608UL,3UL,65535UL}, // p_305->g_256
        {{{0x1C85E13AL,0x8C5826D9L,4294967286UL,0UL,0xD9BAEF49DB35D3D2L,0xD123L,0xAFFFL}},{{0x1C85E13AL,0x8C5826D9L,4294967286UL,0UL,0xD9BAEF49DB35D3D2L,0xD123L,0xAFFFL}}}, // p_305->g_259
        &p_305->g_97.f1, // p_305->g_260
        (void*)0, // p_305->g_261
        {5UL,0x6693L}, // p_305->g_271
        4294967288UL, // p_305->g_274
        {0UL,4294967289UL,0x6ED7C2E3L,0x7BEB07EFL,0UL,0xF8C5L,65535UL}, // p_305->g_275
        (VECTOR(uint16_t, 8))(0x2609L, (VECTOR(uint16_t, 4))(0x2609L, (VECTOR(uint16_t, 2))(0x2609L, 7UL), 7UL), 7UL, 0x2609L, 7UL), // p_305->g_279
        0x35L, // p_305->g_292
        18446744073709551615UL, // p_305->g_303
        (-9L), // p_305->g_304
        0, // p_305->v_collective
        sequence_input[get_global_id(0)], // p_305->global_0_offset
        sequence_input[get_global_id(1)], // p_305->global_1_offset
        sequence_input[get_global_id(2)], // p_305->global_2_offset
        sequence_input[get_local_id(0)], // p_305->local_0_offset
        sequence_input[get_local_id(1)], // p_305->local_1_offset
        sequence_input[get_local_id(2)], // p_305->local_2_offset
        sequence_input[get_group_id(0)], // p_305->group_0_offset
        sequence_input[get_group_id(1)], // p_305->group_1_offset
        sequence_input[get_group_id(2)], // p_305->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_305->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_306 = c_307;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_305);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_305->g_11, "p_305->g_11", print_hash_value);
    transparent_crc(p_305->g_32, "p_305->g_32", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_305->g_37[i][j][k].f0, "p_305->g_37[i][j][k].f0", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f1, "p_305->g_37[i][j][k].f1", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f2, "p_305->g_37[i][j][k].f2", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f3, "p_305->g_37[i][j][k].f3", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f4, "p_305->g_37[i][j][k].f4", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f5, "p_305->g_37[i][j][k].f5", print_hash_value);
                transparent_crc(p_305->g_37[i][j][k].f6, "p_305->g_37[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_305->g_44, "p_305->g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_305->g_61[i][j], "p_305->g_61[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_305->g_62.x, "p_305->g_62.x", print_hash_value);
    transparent_crc(p_305->g_62.y, "p_305->g_62.y", print_hash_value);
    transparent_crc(p_305->g_64.x, "p_305->g_64.x", print_hash_value);
    transparent_crc(p_305->g_64.y, "p_305->g_64.y", print_hash_value);
    transparent_crc(p_305->g_65.s0, "p_305->g_65.s0", print_hash_value);
    transparent_crc(p_305->g_65.s1, "p_305->g_65.s1", print_hash_value);
    transparent_crc(p_305->g_65.s2, "p_305->g_65.s2", print_hash_value);
    transparent_crc(p_305->g_65.s3, "p_305->g_65.s3", print_hash_value);
    transparent_crc(p_305->g_65.s4, "p_305->g_65.s4", print_hash_value);
    transparent_crc(p_305->g_65.s5, "p_305->g_65.s5", print_hash_value);
    transparent_crc(p_305->g_65.s6, "p_305->g_65.s6", print_hash_value);
    transparent_crc(p_305->g_65.s7, "p_305->g_65.s7", print_hash_value);
    transparent_crc(p_305->g_65.s8, "p_305->g_65.s8", print_hash_value);
    transparent_crc(p_305->g_65.s9, "p_305->g_65.s9", print_hash_value);
    transparent_crc(p_305->g_65.sa, "p_305->g_65.sa", print_hash_value);
    transparent_crc(p_305->g_65.sb, "p_305->g_65.sb", print_hash_value);
    transparent_crc(p_305->g_65.sc, "p_305->g_65.sc", print_hash_value);
    transparent_crc(p_305->g_65.sd, "p_305->g_65.sd", print_hash_value);
    transparent_crc(p_305->g_65.se, "p_305->g_65.se", print_hash_value);
    transparent_crc(p_305->g_65.sf, "p_305->g_65.sf", print_hash_value);
    transparent_crc(p_305->g_78.s0, "p_305->g_78.s0", print_hash_value);
    transparent_crc(p_305->g_78.s1, "p_305->g_78.s1", print_hash_value);
    transparent_crc(p_305->g_78.s2, "p_305->g_78.s2", print_hash_value);
    transparent_crc(p_305->g_78.s3, "p_305->g_78.s3", print_hash_value);
    transparent_crc(p_305->g_78.s4, "p_305->g_78.s4", print_hash_value);
    transparent_crc(p_305->g_78.s5, "p_305->g_78.s5", print_hash_value);
    transparent_crc(p_305->g_78.s6, "p_305->g_78.s6", print_hash_value);
    transparent_crc(p_305->g_78.s7, "p_305->g_78.s7", print_hash_value);
    transparent_crc(p_305->g_78.s8, "p_305->g_78.s8", print_hash_value);
    transparent_crc(p_305->g_78.s9, "p_305->g_78.s9", print_hash_value);
    transparent_crc(p_305->g_78.sa, "p_305->g_78.sa", print_hash_value);
    transparent_crc(p_305->g_78.sb, "p_305->g_78.sb", print_hash_value);
    transparent_crc(p_305->g_78.sc, "p_305->g_78.sc", print_hash_value);
    transparent_crc(p_305->g_78.sd, "p_305->g_78.sd", print_hash_value);
    transparent_crc(p_305->g_78.se, "p_305->g_78.se", print_hash_value);
    transparent_crc(p_305->g_78.sf, "p_305->g_78.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_305->g_82[i], "p_305->g_82[i]", print_hash_value);

    }
    transparent_crc(p_305->g_97.f0, "p_305->g_97.f0", print_hash_value);
    transparent_crc(p_305->g_97.f1, "p_305->g_97.f1", print_hash_value);
    transparent_crc(p_305->g_97.f2, "p_305->g_97.f2", print_hash_value);
    transparent_crc(p_305->g_97.f3, "p_305->g_97.f3", print_hash_value);
    transparent_crc(p_305->g_97.f4, "p_305->g_97.f4", print_hash_value);
    transparent_crc(p_305->g_97.f5, "p_305->g_97.f5", print_hash_value);
    transparent_crc(p_305->g_97.f6, "p_305->g_97.f6", print_hash_value);
    transparent_crc(p_305->g_105, "p_305->g_105", print_hash_value);
    transparent_crc(p_305->g_107.s0, "p_305->g_107.s0", print_hash_value);
    transparent_crc(p_305->g_107.s1, "p_305->g_107.s1", print_hash_value);
    transparent_crc(p_305->g_107.s2, "p_305->g_107.s2", print_hash_value);
    transparent_crc(p_305->g_107.s3, "p_305->g_107.s3", print_hash_value);
    transparent_crc(p_305->g_107.s4, "p_305->g_107.s4", print_hash_value);
    transparent_crc(p_305->g_107.s5, "p_305->g_107.s5", print_hash_value);
    transparent_crc(p_305->g_107.s6, "p_305->g_107.s6", print_hash_value);
    transparent_crc(p_305->g_107.s7, "p_305->g_107.s7", print_hash_value);
    transparent_crc(p_305->g_109.x, "p_305->g_109.x", print_hash_value);
    transparent_crc(p_305->g_109.y, "p_305->g_109.y", print_hash_value);
    transparent_crc(p_305->g_123.f0, "p_305->g_123.f0", print_hash_value);
    transparent_crc(p_305->g_123.f1.f0, "p_305->g_123.f1.f0", print_hash_value);
    transparent_crc(p_305->g_123.f1.f1, "p_305->g_123.f1.f1", print_hash_value);
    transparent_crc(p_305->g_123.f1.f2, "p_305->g_123.f1.f2", print_hash_value);
    transparent_crc(p_305->g_123.f1.f3, "p_305->g_123.f1.f3", print_hash_value);
    transparent_crc(p_305->g_123.f1.f4, "p_305->g_123.f1.f4", print_hash_value);
    transparent_crc(p_305->g_123.f1.f5, "p_305->g_123.f1.f5", print_hash_value);
    transparent_crc(p_305->g_123.f1.f6, "p_305->g_123.f1.f6", print_hash_value);
    transparent_crc(p_305->g_123.f2, "p_305->g_123.f2", print_hash_value);
    transparent_crc(p_305->g_123.f3, "p_305->g_123.f3", print_hash_value);
    transparent_crc(p_305->g_134, "p_305->g_134", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_305->g_137[i].f0, "p_305->g_137[i].f0", print_hash_value);
        transparent_crc(p_305->g_137[i].f1, "p_305->g_137[i].f1", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f0, "p_305->g_137[i].f2.f0", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f1, "p_305->g_137[i].f2.f1", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f2, "p_305->g_137[i].f2.f2", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f3, "p_305->g_137[i].f2.f3", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f4, "p_305->g_137[i].f2.f4", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f5, "p_305->g_137[i].f2.f5", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f6, "p_305->g_137[i].f2.f6", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f7, "p_305->g_137[i].f2.f7", print_hash_value);
        transparent_crc(p_305->g_137[i].f2.f8, "p_305->g_137[i].f2.f8", print_hash_value);

    }
    transparent_crc(p_305->g_160.x, "p_305->g_160.x", print_hash_value);
    transparent_crc(p_305->g_160.y, "p_305->g_160.y", print_hash_value);
    transparent_crc(p_305->g_160.z, "p_305->g_160.z", print_hash_value);
    transparent_crc(p_305->g_160.w, "p_305->g_160.w", print_hash_value);
    transparent_crc(p_305->g_183.f0, "p_305->g_183.f0", print_hash_value);
    transparent_crc(p_305->g_183.f1, "p_305->g_183.f1", print_hash_value);
    transparent_crc(p_305->g_186, "p_305->g_186", print_hash_value);
    transparent_crc(p_305->g_256.f0, "p_305->g_256.f0", print_hash_value);
    transparent_crc(p_305->g_256.f1, "p_305->g_256.f1", print_hash_value);
    transparent_crc(p_305->g_256.f2, "p_305->g_256.f2", print_hash_value);
    transparent_crc(p_305->g_256.f3, "p_305->g_256.f3", print_hash_value);
    transparent_crc(p_305->g_256.f4, "p_305->g_256.f4", print_hash_value);
    transparent_crc(p_305->g_256.f5, "p_305->g_256.f5", print_hash_value);
    transparent_crc(p_305->g_256.f6, "p_305->g_256.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_305->g_259[i][j].f0, "p_305->g_259[i][j].f0", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f1, "p_305->g_259[i][j].f1", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f2, "p_305->g_259[i][j].f2", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f3, "p_305->g_259[i][j].f3", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f4, "p_305->g_259[i][j].f4", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f5, "p_305->g_259[i][j].f5", print_hash_value);
            transparent_crc(p_305->g_259[i][j].f6, "p_305->g_259[i][j].f6", print_hash_value);

        }
    }
    transparent_crc(p_305->g_271.f0, "p_305->g_271.f0", print_hash_value);
    transparent_crc(p_305->g_271.f1, "p_305->g_271.f1", print_hash_value);
    transparent_crc(p_305->g_274, "p_305->g_274", print_hash_value);
    transparent_crc(p_305->g_275.f0, "p_305->g_275.f0", print_hash_value);
    transparent_crc(p_305->g_275.f1, "p_305->g_275.f1", print_hash_value);
    transparent_crc(p_305->g_275.f2, "p_305->g_275.f2", print_hash_value);
    transparent_crc(p_305->g_275.f3, "p_305->g_275.f3", print_hash_value);
    transparent_crc(p_305->g_275.f4, "p_305->g_275.f4", print_hash_value);
    transparent_crc(p_305->g_275.f5, "p_305->g_275.f5", print_hash_value);
    transparent_crc(p_305->g_275.f6, "p_305->g_275.f6", print_hash_value);
    transparent_crc(p_305->g_279.s0, "p_305->g_279.s0", print_hash_value);
    transparent_crc(p_305->g_279.s1, "p_305->g_279.s1", print_hash_value);
    transparent_crc(p_305->g_279.s2, "p_305->g_279.s2", print_hash_value);
    transparent_crc(p_305->g_279.s3, "p_305->g_279.s3", print_hash_value);
    transparent_crc(p_305->g_279.s4, "p_305->g_279.s4", print_hash_value);
    transparent_crc(p_305->g_279.s5, "p_305->g_279.s5", print_hash_value);
    transparent_crc(p_305->g_279.s6, "p_305->g_279.s6", print_hash_value);
    transparent_crc(p_305->g_279.s7, "p_305->g_279.s7", print_hash_value);
    transparent_crc(p_305->g_292, "p_305->g_292", print_hash_value);
    transparent_crc(p_305->g_303, "p_305->g_303", print_hash_value);
    transparent_crc(p_305->g_304, "p_305->g_304", print_hash_value);
    transparent_crc(p_305->v_collective, "p_305->v_collective", print_hash_value);
    transparent_crc(p_305->l_comm_values[get_linear_local_id()], "p_305->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_305->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_305->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
