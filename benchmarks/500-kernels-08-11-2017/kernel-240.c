// --atomics 89 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 21,99,1 -l 7,1,1
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
{2,0,5,6,3,1,4}, // permutation 0
{1,5,6,4,2,0,3}, // permutation 1
{3,2,5,6,4,0,1}, // permutation 2
{2,0,3,6,5,4,1}, // permutation 3
{4,6,1,2,3,5,0}, // permutation 4
{4,5,3,2,6,0,1}, // permutation 5
{4,0,2,6,1,5,3}, // permutation 6
{5,2,4,1,0,3,6}, // permutation 7
{1,3,4,2,6,5,0}, // permutation 8
{4,0,6,3,1,2,5} // permutation 9
};

// Seed: 226709764

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile uint64_t  f1;
   int64_t  f2;
};

union U1 {
   uint64_t  f0;
   int16_t  f1;
};

union U2 {
   int64_t  f0;
   volatile int64_t  f1;
   int8_t  f2;
};

struct S3 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4[7][6];
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7;
    volatile int32_t g_8;
    int32_t g_9[4];
    int32_t g_54;
    int32_t g_58;
    uint64_t g_76;
    struct S0 g_86;
    VECTOR(uint8_t, 16) g_99;
    uint16_t g_121;
    uint16_t g_123;
    int32_t g_126;
    union U1 g_128;
    union U1 *g_130[8][1][9];
    VECTOR(int8_t, 2) g_164;
    struct S0 g_172;
    struct S0 g_174;
    int32_t g_186;
    VECTOR(uint8_t, 8) g_189;
    struct S0 *g_191[5];
    struct S0 ** volatile g_190[4];
    int32_t *g_199;
    int32_t ** volatile g_198;
    int32_t *g_208[6][4];
    VECTOR(int16_t, 8) g_210;
    int8_t g_214;
    volatile VECTOR(int32_t, 8) g_224;
    volatile union U2 g_225;
    int32_t g_240;
    int32_t * volatile g_241;
    uint32_t g_270;
    uint64_t g_273[3][2];
    uint32_t g_277[5][5][9];
    int32_t ** volatile g_289;
    int32_t ** volatile g_290;
    union U1 **g_299;
    union U1 *** volatile g_298[3][1][3];
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
int64_t  func_1(struct S3 * p_303);
int16_t  func_15(uint8_t  p_16, int8_t  p_17, int64_t  p_18, struct S3 * p_303);
int32_t  func_23(int64_t  p_24, int32_t  p_25, int32_t  p_26, uint32_t  p_27, struct S3 * p_303);
int8_t  func_28(uint32_t  p_29, int16_t  p_30, uint8_t  p_31, struct S3 * p_303);
int32_t * func_39(int32_t * p_40, int32_t * p_41, int32_t * p_42, int32_t * p_43, struct S3 * p_303);
int32_t * func_44(int32_t * p_45, uint32_t  p_46, struct S3 * p_303);
int64_t  func_49(int16_t  p_50, struct S3 * p_303);
struct S0 * func_70(uint8_t  p_71, struct S3 * p_303);
uint8_t  func_72(uint64_t  p_73, int32_t * p_74, struct S3 * p_303);
uint16_t  func_82(uint32_t  p_83, struct S3 * p_303);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_303->g_9 p_303->g_3 p_303->g_8 p_303->g_76 p_303->g_86 p_303->g_58 p_303->l_comm_values p_303->g_4 p_303->g_comm_values p_303->g_123 p_303->g_126 p_303->g_54 p_303->g_186 p_303->g_189 p_303->g_198 p_303->g_199 p_303->g_210 p_303->g_214 p_303->g_224 p_303->g_225 p_303->g_164 p_303->g_172.f2 p_303->g_7 p_303->g_241 p_303->g_99 p_303->g_5 p_303->g_273 p_303->g_240 p_303->g_277 p_303->g_128.f0 p_303->g_208 p_303->g_290 p_303->g_172.f0 p_303->g_174.f2 p_303->g_299 p_303->g_174.f1
 * writes: p_303->g_9 p_303->g_54 p_303->g_76 p_303->g_86 p_303->g_58 p_303->g_121 p_303->g_123 p_303->g_126 p_303->g_130 p_303->g_189 p_303->g_191 p_303->g_199 p_303->g_208 p_303->g_128.f1 p_303->g_214 p_303->g_240 p_303->g_128.f0 p_303->g_273 p_303->g_277 p_303->g_299
 */
int64_t  func_1(struct S3 * p_303)
{ /* block id: 4 */
    int16_t l_14 = (-3L);
    uint64_t l_302 = 0xCD1F5E8067396CACL;
    for (p_303->g_9[1] = (-1); (p_303->g_9[1] != 11); ++p_303->g_9[1])
    { /* block id: 7 */
        union U1 l_34 = {0x58CDC14C38D679BDL};
        uint64_t l_291 = 1UL;
        atomic_max(&p_303->l_atomic_reduction[0], (((safe_lshift_func_int16_t_s_u((l_14 > p_303->g_3), 15)) , (func_15((((0xA8551B32L ^ (l_14 != ((safe_mod_func_int32_t_s_s(func_23((func_28(((safe_mul_func_uint16_t_u_u(((l_34 , (-9L)) != l_34.f0), (safe_div_func_int32_t_s_s(p_303->g_8, (((safe_mod_func_int64_t_s_s(p_303->g_9[1], 0xFAE07DF7DC23988FL)) , p_303->g_9[3]) || l_14))))) > p_303->g_9[3]), p_303->g_9[1], p_303->g_9[1], p_303) < l_34.f0), l_34.f0, l_291, l_291, p_303), l_14)) <= p_303->g_172.f0))) >= p_303->l_comm_values[(safe_mod_func_uint32_t_u_u(p_303->tid, 7))]) , p_303->g_comm_values[p_303->tid]), p_303->g_210.s2, l_14, p_303) <= p_303->g_9[1])) >= p_303->g_174.f2) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_303->v_collective += p_303->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_302 = l_14;
        if ((*p_303->g_241))
            continue;
        (*p_303->g_299) = (void*)0;
    }
    return p_303->g_174.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_198 p_303->g_199
 * writes: p_303->g_299 p_303->g_199
 */
int16_t  func_15(uint8_t  p_16, int8_t  p_17, int64_t  p_18, struct S3 * p_303)
{ /* block id: 100 */
    uint16_t l_295 = 0UL;
    union U1 **l_296 = &p_303->g_130[2][0][6];
    union U1 ***l_297 = &l_296;
    union U1 ***l_300 = &p_303->g_299;
    int32_t **l_301 = &p_303->g_199;
    l_295 = ((void*)0 != &p_303->g_214);
    (*l_300) = ((*l_297) = l_296);
    (*l_301) = (*p_303->g_198);
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_23(int64_t  p_24, int32_t  p_25, int32_t  p_26, uint32_t  p_27, struct S3 * p_303)
{ /* block id: 97 */
    uint8_t l_292 = 0x10L;
    --l_292;
    return l_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_76 p_303->g_86 p_303->g_58 p_303->l_comm_values p_303->g_4 p_303->g_9 p_303->g_comm_values p_303->g_123 p_303->g_126 p_303->g_54 p_303->g_186 p_303->g_189 p_303->g_198 p_303->g_199 p_303->g_210 p_303->g_214 p_303->g_224 p_303->g_225 p_303->g_164 p_303->g_172.f2 p_303->g_7 p_303->g_241 p_303->g_99 p_303->g_5 p_303->g_273 p_303->g_240 p_303->g_277 p_303->g_128.f0 p_303->g_208 p_303->g_290
 * writes: p_303->g_54 p_303->g_76 p_303->g_86 p_303->g_58 p_303->g_121 p_303->g_123 p_303->g_126 p_303->g_130 p_303->g_189 p_303->g_191 p_303->g_199 p_303->g_208 p_303->g_128.f1 p_303->g_214 p_303->g_240 p_303->g_128.f0 p_303->g_273 p_303->g_277
 */
int8_t  func_28(uint32_t  p_29, int16_t  p_30, uint8_t  p_31, struct S3 * p_303)
{ /* block id: 8 */
    int32_t l_51 = 1L;
    VECTOR(int16_t, 2) l_209 = (VECTOR(int16_t, 2))(0x4A28L, 1L);
    int16_t *l_211 = &p_303->g_128.f1;
    int16_t *l_212 = (void*)0;
    int32_t l_213 = 0x6E913CB2L;
    int i;
    (*p_303->g_290) = func_39(func_44(&p_303->g_9[1], (safe_add_func_int64_t_s_s(func_49(l_51, p_303), (p_303->g_214 |= (p_30 > ((-2L) ^ (l_51 <= (l_213 = ((*l_211) = ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_209.yxxxyyxxyxyyxxyy)))).se2)).xxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_303->g_210.s0275)).even)).yyxx))).w)))))))), p_303), &p_303->g_9[3], &l_51, &l_51, p_303);
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_99 p_303->g_5 p_303->g_210 p_303->g_273 p_303->g_164 p_303->g_240 p_303->g_189 p_303->g_277 p_303->g_128.f0 p_303->g_208
 * writes: p_303->g_121 p_303->g_128.f0 p_303->g_273 p_303->g_277 p_303->g_208
 */
int32_t * func_39(int32_t * p_40, int32_t * p_41, int32_t * p_42, int32_t * p_43, struct S3 * p_303)
{ /* block id: 74 */
    VECTOR(uint16_t, 2) l_246 = (VECTOR(uint16_t, 2))(8UL, 5UL);
    uint64_t **l_249 = (void*)0;
    uint64_t *l_251 = &p_303->g_76;
    uint64_t **l_250 = &l_251;
    VECTOR(int32_t, 16) l_256 = (VECTOR(int32_t, 16))(0x339C02D8L, (VECTOR(int32_t, 4))(0x339C02D8L, (VECTOR(int32_t, 2))(0x339C02D8L, 0x2F7D3FE8L), 0x2F7D3FE8L), 0x2F7D3FE8L, 0x339C02D8L, 0x2F7D3FE8L, (VECTOR(int32_t, 2))(0x339C02D8L, 0x2F7D3FE8L), (VECTOR(int32_t, 2))(0x339C02D8L, 0x2F7D3FE8L), 0x339C02D8L, 0x2F7D3FE8L, 0x339C02D8L, 0x2F7D3FE8L);
    uint16_t *l_257 = &p_303->g_121;
    VECTOR(int16_t, 8) l_264 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
    uint32_t *l_269[9][5] = {{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270},{&p_303->g_270,(void*)0,&p_303->g_270,&p_303->g_270,&p_303->g_270}};
    int32_t l_271 = 1L;
    uint64_t *l_272 = &p_303->g_273[1][0];
    VECTOR(uint32_t, 2) l_274 = (VECTOR(uint32_t, 2))(4294967287UL, 0x751AF70AL);
    int32_t l_275 = 0x28E6F8E1L;
    int32_t *l_276[6] = {&p_303->g_126,&p_303->g_126,&p_303->g_126,&p_303->g_126,&p_303->g_126,&p_303->g_126};
    int32_t **l_283 = &p_303->g_208[3][0];
    int32_t l_284 = (-1L);
    int16_t l_285[3][5];
    uint64_t l_286[4][10][3] = {{{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL}},{{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL}},{{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL}},{{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL},{0xF715648FCB349FEEL,0UL,0xF715648FCB349FEEL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_285[i][j] = 1L;
    }
    p_303->g_277[2][4][4] ^= ((safe_add_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((l_275 = ((((VECTOR(uint16_t, 16))(l_246.xxxxyyxxyxxyyyxx)).s5 > (((safe_div_func_uint8_t_u_u((((*p_43) == (((((*l_250) = (void*)0) != ((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((l_256.s8 = l_246.x), ((*l_257) = l_246.y))) == ((*l_272) &= (p_303->g_128.f0 = (safe_div_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((l_271 = (((((+1L) != ((0x305FL ^ ((VECTOR(int16_t, 4))(l_264.s3305)).w) != 0x438B65CF7F315CCFL)) | (safe_mod_func_int64_t_s_s((-2L), (safe_sub_func_int8_t_s_s(l_264.s6, l_264.s4))))) >= l_264.s6) | l_246.x)) , p_303->g_99.sc), p_303->g_5)) & p_303->g_210.s5), 0x3CA5CE4E5EDCD1CEL))))) <= 8UL), 2)) , l_272)) <= (*p_43)) & 0xBA2EC1DA39915C5FL)) < 1UL), l_246.y)) & l_246.y) , l_274.y)) || (-1L))) && 0UL), p_303->g_164.y)) >= p_303->g_240) | (-1L)), p_303->g_189.s6)) <= p_303->g_210.s1);
    for (l_275 = 0; (l_275 >= 29); ++l_275)
    { /* block id: 85 */
        int32_t *l_282[10] = {&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186,&p_303->g_186};
        int i;
        for (p_303->g_128.f0 = 0; (p_303->g_128.f0 > 40); p_303->g_128.f0++)
        { /* block id: 88 */
            return l_282[1];
        }
    }
    (*l_283) = (void*)0;
    --l_286[3][2][1];
    return (*l_283);
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_224 p_303->g_225 p_303->g_199 p_303->g_9 p_303->g_164 p_303->g_172.f2 p_303->g_7 p_303->g_186 p_303->g_198 p_303->g_241
 * writes: p_303->g_199 p_303->g_76 p_303->g_86.f2 p_303->g_214 p_303->g_240 p_303->g_54
 */
int32_t * func_44(int32_t * p_45, uint32_t  p_46, struct S3 * p_303)
{ /* block id: 58 */
    int32_t **l_215 = &p_303->g_199;
    VECTOR(int32_t, 8) l_223 = (VECTOR(int32_t, 8))(0x26B5CAA7L, (VECTOR(int32_t, 4))(0x26B5CAA7L, (VECTOR(int32_t, 2))(0x26B5CAA7L, 0L), 0L), 0L, 0x26B5CAA7L, 0L);
    union U1 l_226[5] = {{0x62704DB0D09343FEL},{0x62704DB0D09343FEL},{0x62704DB0D09343FEL},{0x62704DB0D09343FEL},{0x62704DB0D09343FEL}};
    uint64_t *l_231 = &p_303->g_76;
    VECTOR(int64_t, 2) l_233 = (VECTOR(int64_t, 2))(0x7A59681A192B8C82L, 0x1CF8BAB20AB79123L);
    VECTOR(int64_t, 16) l_234 = (VECTOR(int64_t, 16))(0x3F31F2D73772E757L, (VECTOR(int64_t, 4))(0x3F31F2D73772E757L, (VECTOR(int64_t, 2))(0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL), 0x5ABB3DD9F28A0E0DL), 0x5ABB3DD9F28A0E0DL, 0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL, (VECTOR(int64_t, 2))(0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL), (VECTOR(int64_t, 2))(0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL), 0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL, 0x3F31F2D73772E757L, 0x5ABB3DD9F28A0E0DL);
    uint32_t l_237 = 0x46D65B00L;
    int64_t *l_238 = &p_303->g_86.f2;
    int8_t *l_239 = &p_303->g_214;
    int i;
    (*l_215) = p_45;
    if ((atomic_inc(&p_303->l_atomic_input[6]) == 5))
    { /* block id: 61 */
        uint32_t l_216 = 0x2E1F9CA2L;
        struct S0 **l_219 = (void*)0;
        struct S0 l_222 = {0x233FF738L,18446744073709551615UL,0x188D95DDA2071F14L};/* VOLATILE GLOBAL l_222 */
        struct S0 *l_221 = &l_222;
        struct S0 **l_220 = &l_221;
        l_216--;
        l_220 = (l_219 = (void*)0);
        unsigned int result = 0;
        result += l_216;
        result += l_222.f0;
        result += l_222.f1;
        result += l_222.f2;
        atomic_add(&p_303->l_special_values[6], result);
    }
    else
    { /* block id: 65 */
        (1 + 1);
    }
    (*p_303->g_241) = (FAKE_DIVERGE(p_303->local_0_offset, get_local_id(0), 10) <= ((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_223.s6340717475653031)).s8f1b)).w & 0xC31A17AFL) <= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(p_303->g_224.s26)).xxyy, ((VECTOR(int32_t, 8))((p_303->g_225 , (l_226[1] , (p_303->g_240 = (safe_mul_func_uint16_t_u_u((((GROUP_DIVERGE(1, 1) | (((safe_rshift_func_int8_t_s_u(((**l_215) , (**l_215)), GROUP_DIVERGE(2, 1))) < (((*l_231) = FAKE_DIVERGE(p_303->local_0_offset, get_local_id(0), 10)) , p_303->g_164.y)) , ((-1L) >= GROUP_DIVERGE(1, 1)))) && ((*l_239) = ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(18446744073709551615UL, 0xCB5513274FA118B2L, 0xAAC5D9CE6212CEEAL, 18446744073709551611UL)).hi)).xyyyxyxx))).odd)).yzwxwyyzxwxzyxwz)).s9c43)).y | (safe_unary_minus_func_uint64_t_u(((p_303->g_172.f2 <= ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(l_233.yyxy)).hi, ((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(l_234.sac)), 0x3AB5C4C33CC853F9L)).hi, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x58D94FF488365C31L, 1L)), ((*l_238) = ((safe_lshift_func_uint8_t_u_s((**l_215), p_46)) & l_237)), (-3L), 1L, p_303->g_7, 7L, 0x6B3EBBC57AD62F63L, ((VECTOR(int64_t, 8))(0x42B1DA7329BD33FCL)))).s02))).even) ^ (**l_215))))) < p_303->g_186))) >= 4294967295UL), p_46))))), (**p_303->g_198), 2L, 0x536D2C72L, 3L, ((VECTOR(int32_t, 2))((-2L))), 2L)).even))).odd)).hi));
    return (*l_215);
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_76 p_303->g_86 p_303->g_58 p_303->l_comm_values p_303->g_4 p_303->g_9 p_303->g_comm_values p_303->g_123 p_303->g_126 p_303->g_54 p_303->g_186 p_303->g_189 p_303->g_198 p_303->g_199
 * writes: p_303->g_54 p_303->g_76 p_303->g_86 p_303->g_58 p_303->g_121 p_303->g_123 p_303->g_126 p_303->g_130 p_303->g_189 p_303->g_191 p_303->g_199 p_303->g_208
 */
int64_t  func_49(int16_t  p_50, struct S3 * p_303)
{ /* block id: 9 */
    uint64_t l_195 = 0UL;
    int32_t *l_201 = (void*)0;
    int32_t **l_202 = (void*)0;
    int32_t **l_203 = &p_303->g_199;
    int32_t **l_204 = &l_201;
    int32_t **l_205 = &p_303->g_199;
    int32_t **l_206 = &p_303->g_199;
    int32_t **l_207[4][7][8] = {{{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199}},{{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199}},{{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199}},{{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199},{&p_303->g_199,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199,&p_303->g_199,(void*)0,&p_303->g_199}}};
    int i, j, k;
    for (p_50 = 0; (p_50 < (-22)); p_50--)
    { /* block id: 12 */
        int16_t l_60 = 0x4012L;
        int32_t l_63 = 0x17B6EB5CL;
        int32_t l_64 = 6L;
        int32_t l_65 = 0x1913D709L;
        int32_t l_66 = 0x3D7B92BBL;
        uint32_t l_67 = 0xF9AB13FDL;
        int32_t *l_193 = &p_303->g_126;
        int32_t *l_194 = &p_303->g_126;
        for (p_303->g_54 = 2; (p_303->g_54 <= (-12)); p_303->g_54--)
        { /* block id: 15 */
            int32_t *l_57 = &p_303->g_58;
            int32_t *l_59 = (void*)0;
            int32_t *l_61 = &p_303->g_58;
            int32_t *l_62[6] = {&p_303->g_54,&p_303->g_9[0],&p_303->g_54,&p_303->g_54,&p_303->g_9[0],&p_303->g_54};
            uint64_t *l_75 = &p_303->g_76;
            struct S0 **l_192 = &p_303->g_191[3];
            int i;
            ++l_67;
            (*l_192) = func_70(func_72(((*l_75) &= GROUP_DIVERGE(1, 1)), &p_303->g_54, p_303), p_303);
        }
        l_195--;
        (*p_303->g_198) = &l_63;
        (*p_303->g_199) |= (safe_unary_minus_func_uint8_t_u(p_303->g_58));
    }
    p_303->g_54 = (((*l_204) = l_201) != (p_303->g_208[3][0] = &p_303->g_126));
    return p_303->g_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_86 p_303->g_76 p_303->g_58 p_303->l_comm_values p_303->g_4 p_303->g_99 p_303->g_8 p_303->g_9 p_303->g_comm_values p_303->g_123 p_303->g_164 p_303->g_126 p_303->g_172.f0 p_303->g_54 p_303->g_186 p_303->g_189
 * writes: p_303->g_86 p_303->g_58 p_303->g_121 p_303->g_123 p_303->g_126 p_303->g_130 p_303->g_99 p_303->g_128.f1 p_303->g_164 p_303->g_189
 */
struct S0 * func_70(uint8_t  p_71, struct S3 * p_303)
{ /* block id: 20 */
    int32_t *l_88 = &p_303->g_9[2];
    int32_t *l_89 = &p_303->g_58;
    VECTOR(uint8_t, 2) l_96 = (VECTOR(uint8_t, 2))(0UL, 0x52L);
    VECTOR(uint8_t, 8) l_97 = (VECTOR(uint8_t, 8))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 0x7FL), 0x7FL), 0x7FL, 0xC9L, 0x7FL);
    VECTOR(uint8_t, 2) l_98 = (VECTOR(uint8_t, 2))(0xAFL, 255UL);
    uint8_t *l_100 = (void*)0;
    uint8_t *l_101 = (void*)0;
    uint8_t *l_102 = (void*)0;
    struct S0 *l_105[2][7][5] = {{{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86}},{{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86},{&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86,&p_303->g_86}}};
    int32_t **l_108 = &l_88;
    VECTOR(int8_t, 16) l_110 = (VECTOR(int8_t, 16))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, (-1L)), (-1L)), (-1L), 0x79L, (-1L), (VECTOR(int8_t, 2))(0x79L, (-1L)), (VECTOR(int8_t, 2))(0x79L, (-1L)), 0x79L, (-1L), 0x79L, (-1L));
    struct S0 **l_111 = &l_105[1][0][2];
    int64_t *l_118 = (void*)0;
    int64_t *l_119[2][9][9] = {{{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0}},{{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0},{(void*)0,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,&p_303->g_86.f2,(void*)0,(void*)0,&p_303->g_86.f2,(void*)0}}};
    uint16_t *l_120 = &p_303->g_121;
    uint16_t *l_122[10][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
    int32_t l_124 = (-5L);
    int32_t *l_125 = &p_303->g_126;
    union U1 *l_127[4][4][8] = {{{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128}},{{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128}},{{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128}},{{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128},{&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128,&p_303->g_128}}};
    union U1 **l_129[7] = {&l_127[0][1][1],&l_127[0][1][1],&l_127[0][1][1],&l_127[0][1][1],&l_127[0][1][1],&l_127[0][1][1],&l_127[0][1][1]};
    VECTOR(int32_t, 4) l_133 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x0109A6A1L), 0x0109A6A1L);
    union U1 *l_144[4];
    VECTOR(int8_t, 16) l_163 = (VECTOR(int8_t, 16))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x28L), 0x28L), 0x28L, 0x43L, 0x28L, (VECTOR(int8_t, 2))(0x43L, 0x28L), (VECTOR(int8_t, 2))(0x43L, 0x28L), 0x43L, 0x28L, 0x43L, 0x28L);
    VECTOR(int8_t, 8) l_165 = (VECTOR(int8_t, 8))(0x32L, (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 0x12L), 0x12L), 0x12L, 0x32L, 0x12L);
    struct S0 *l_171 = &p_303->g_172;
    struct S0 **l_170 = &l_171;
    struct S0 *l_173 = &p_303->g_174;
    int16_t *l_175 = (void*)0;
    int16_t *l_176 = (void*)0;
    int16_t *l_177 = &p_303->g_128.f1;
    uint32_t l_178 = 0UL;
    int8_t *l_179 = (void*)0;
    int8_t *l_180 = (void*)0;
    int8_t *l_181 = (void*)0;
    int8_t *l_182 = (void*)0;
    int8_t *l_183 = (void*)0;
    uint64_t l_184[6][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
    VECTOR(int16_t, 8) l_185 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1404L), 0x1404L), 0x1404L, 1L, 0x1404L);
    int32_t *l_187 = (void*)0;
    int32_t *l_188 = &l_124;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_144[i] = &p_303->g_128;
    (*l_89) &= (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(0L, func_82((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x2A36L, 0x5D35L)).yyxxyxxyxyyxyyyx)).s9 , (safe_lshift_func_uint16_t_u_u(0x83D5L, 6))), p_303))), ((p_303->g_76 , l_88) != (void*)0)));
    (*l_89) = (safe_div_func_int64_t_s_s(((p_303->l_comm_values[(safe_mod_func_uint32_t_u_u(p_303->tid, 7))] < ((p_303->g_4[3][1] , (!((safe_div_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(0x9BL, 0x8DL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(l_96.yx)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_97.s0640)).zxyxxwzwwzywxyzw)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(l_98.yxyyyyxxxxxxyxxy)).s3b, ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(247UL, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(0xE1L, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_303->g_99.s30c50d1b5cefcb9d)).s1c)).xyyxxxxy, (uint8_t)(*l_89)))), (p_71 = 3UL), 0UL, 0x48L, (safe_lshift_func_uint16_t_u_u((l_105[1][0][2] != l_105[1][3][1]), ((18446744073709551615UL == (*l_89)) == 0x43BBL))), ((VECTOR(uint8_t, 2))(0x47L)), 0UL)).odd, ((VECTOR(uint8_t, 8))(0UL)), ((VECTOR(uint8_t, 8))(0UL))))), 1UL, 0x41L, 9UL, 0xF6L, 0x8AL, 1UL, 0x46L)).even, ((VECTOR(uint8_t, 8))(0x7DL)), ((VECTOR(uint8_t, 8))(251UL))))), ((VECTOR(uint8_t, 8))(0xDFL))))).lo)), 0xA6L, ((VECTOR(uint8_t, 2))(6UL)), 1UL)), ((VECTOR(uint8_t, 8))(0xDBL))))).s71))).xyyxyyxxyxyxyxyx, ((VECTOR(uint8_t, 16))(6UL))))).sa9)), 0UL, 0UL)).hi))), p_303->g_99.sd, p_71, ((VECTOR(uint8_t, 4))(0x52L)), p_303->g_8, 0UL, 0x49L, 0x34L, 0xA9L, 0x7CL)).odd, (uint8_t)9UL))).s4, 6L)) > (*l_88)), (*l_89))) > 0x6CB4C16660493B4FL))) != 9L)) < p_303->g_comm_values[p_303->tid]), (*l_88)));
    p_303->g_130[2][0][6] = (((*l_125) = (safe_rshift_func_int16_t_s_u(((l_89 != ((*l_108) = l_89)) && (((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(l_110.scb14)).x)) == (((*l_111) = l_105[0][4][0]) == &p_303->g_86)) <= (l_124 = (safe_lshift_func_int16_t_s_u((0x5572L < (((p_303->g_123 ^= ((*l_120) = (6L ^ (safe_mul_func_uint8_t_u_u(255UL, (((*l_88) = (65535UL == p_71)) || 5UL)))))) && 0xE84FL) > 1L)), FAKE_DIVERGE(p_303->group_2_offset, get_group_id(2), 10)))))), p_71))) , l_127[0][2][0]);
    p_303->g_189.s0 &= ((*l_188) ^= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_133.xz)).hi, (safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((p_303->g_9[2] && (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x5D34L, (-7L))).odd, ((safe_add_func_int8_t_s_s(p_71, (((VECTOR(uint16_t, 8))((((GROUP_DIVERGE(2, 1) >= ((l_144[2] = &p_303->g_128) != (p_303->g_130[2][0][6] = &p_303->g_128))) != ((((p_303->g_164.y = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((p_303->g_99.s0--), (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u(((((((*l_177) = ((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(l_163.sf5)).yyyxxyyx, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(p_303->g_164.xyxyxyxxyyyyyxxx)).lo)))))).s3 >= (+((**l_111) , ((VECTOR(int8_t, 8))(l_165.s22354011)).s7))) | (((((~(safe_lshift_func_uint16_t_u_u((((void*)0 != l_122[9][0][2]) & (safe_lshift_func_int16_t_s_u((((*l_170) = (*l_111)) != (l_173 = ((((((p_303->g_86.f0 ^ 1UL) ^ 0x423DL) >= p_303->g_164.y) & (*l_125)) > p_303->g_172.f0) , (*l_111)))), p_303->g_86.f2))), 9))) && (**l_108)) > (*l_88)) | 1UL) < (*l_125)))) <= p_303->g_76) || (*l_88)) ^ p_303->g_9[3]) <= p_71), p_71)) | (*l_88)) >= 0xC9L) , p_71), (**l_108))), p_71)) <= p_71) & 0x4B9702ABL), (*l_88))) , p_71), (*l_125))), l_178)))), p_71))) > 8L) >= (*l_88)) | (-8L))) > (*l_88)), 0x2490L, p_71, l_184[3][1], ((VECTOR(uint16_t, 2))(8UL)), 0xB44BL, 65535UL)).s6 >= 9L))) , (*l_125))))), p_303->g_54)), l_185.s2)), p_303->g_186)))));
    return &p_303->g_86;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_72(uint64_t  p_73, int32_t * p_74, struct S3 * p_303)
{ /* block id: 18 */
    uint32_t l_77 = 0xA4C4AE3BL;
    return l_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_303->g_86
 * writes: p_303->g_86
 */
uint16_t  func_82(uint32_t  p_83, struct S3 * p_303)
{ /* block id: 21 */
    struct S0 *l_87 = &p_303->g_86;
    (*l_87) = p_303->g_86;
    return p_83;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S3 c_304;
    struct S3* p_303 = &c_304;
    struct S3 c_305 = {
        1L, // p_303->g_2
        0x5DBC3707L, // p_303->g_3
        {{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L},{0L,0x3A86BA47L,0x730CC2FDL,0x7AC12265L,0x3A86BA47L,0x7AC12265L}}, // p_303->g_4
        0x1CB4E76AL, // p_303->g_5
        0x6E5A9864L, // p_303->g_6
        (-1L), // p_303->g_7
        0L, // p_303->g_8
        {(-1L),(-1L),(-1L),(-1L)}, // p_303->g_9
        0x4E9DB3FAL, // p_303->g_54
        1L, // p_303->g_58
        0UL, // p_303->g_76
        {1L,18446744073709551615UL,-1L}, // p_303->g_86
        (VECTOR(uint8_t, 16))(0x34L, (VECTOR(uint8_t, 4))(0x34L, (VECTOR(uint8_t, 2))(0x34L, 0x8BL), 0x8BL), 0x8BL, 0x34L, 0x8BL, (VECTOR(uint8_t, 2))(0x34L, 0x8BL), (VECTOR(uint8_t, 2))(0x34L, 0x8BL), 0x34L, 0x8BL, 0x34L, 0x8BL), // p_303->g_99
        0x9C2BL, // p_303->g_121
        0xE1FDL, // p_303->g_123
        1L, // p_303->g_126
        {0x66CDFB547BDC28BEL}, // p_303->g_128
        {{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}},{{&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128,(void*)0,&p_303->g_128}}}, // p_303->g_130
        (VECTOR(int8_t, 2))(0L, 0x24L), // p_303->g_164
        {1L,0x84E04F8DB93C28B9L,0x0DAA4619C9193DE1L}, // p_303->g_172
        {0x0B635356L,0x0B5F74D8AA762861L,-9L}, // p_303->g_174
        (-1L), // p_303->g_186
        (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 1UL), 1UL), 1UL, 248UL, 1UL), // p_303->g_189
        {&p_303->g_174,&p_303->g_174,&p_303->g_174,&p_303->g_174,&p_303->g_174}, // p_303->g_191
        {&p_303->g_191[4],&p_303->g_191[4],&p_303->g_191[4],&p_303->g_191[4]}, // p_303->g_190
        &p_303->g_9[0], // p_303->g_199
        &p_303->g_199, // p_303->g_198
        {{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126},{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126},{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126},{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126},{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126},{&p_303->g_126,&p_303->g_9[3],&p_303->g_126,&p_303->g_126}}, // p_303->g_208
        (VECTOR(int16_t, 8))(0x353FL, (VECTOR(int16_t, 4))(0x353FL, (VECTOR(int16_t, 2))(0x353FL, (-3L)), (-3L)), (-3L), 0x353FL, (-3L)), // p_303->g_210
        0x1FL, // p_303->g_214
        (VECTOR(int32_t, 8))(0x1070C8B1L, (VECTOR(int32_t, 4))(0x1070C8B1L, (VECTOR(int32_t, 2))(0x1070C8B1L, 0x3CE05E50L), 0x3CE05E50L), 0x3CE05E50L, 0x1070C8B1L, 0x3CE05E50L), // p_303->g_224
        {0x1E5B4BAF5F1EEABFL}, // p_303->g_225
        0L, // p_303->g_240
        &p_303->g_54, // p_303->g_241
        9UL, // p_303->g_270
        {{0UL,0UL},{0UL,0UL},{0UL,0UL}}, // p_303->g_273
        {{{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL}},{{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL}},{{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL}},{{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL}},{{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL},{0UL,0x2BD604E9L,0x53933E59L,0x8FEF89A3L,0x43B99A6AL,0x1EB57BD7L,0x5D7C6081L,4294967289UL,6UL}}}, // p_303->g_277
        (void*)0, // p_303->g_289
        &p_303->g_199, // p_303->g_290
        &p_303->g_130[2][0][6], // p_303->g_299
        {{{&p_303->g_299,&p_303->g_299,&p_303->g_299}},{{&p_303->g_299,&p_303->g_299,&p_303->g_299}},{{&p_303->g_299,&p_303->g_299,&p_303->g_299}}}, // p_303->g_298
        0, // p_303->v_collective
        sequence_input[get_global_id(0)], // p_303->global_0_offset
        sequence_input[get_global_id(1)], // p_303->global_1_offset
        sequence_input[get_global_id(2)], // p_303->global_2_offset
        sequence_input[get_local_id(0)], // p_303->local_0_offset
        sequence_input[get_local_id(1)], // p_303->local_1_offset
        sequence_input[get_local_id(2)], // p_303->local_2_offset
        sequence_input[get_group_id(0)], // p_303->group_0_offset
        sequence_input[get_group_id(1)], // p_303->group_1_offset
        sequence_input[get_group_id(2)], // p_303->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_303->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_304 = c_305;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_303);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_303->g_2, "p_303->g_2", print_hash_value);
    transparent_crc(p_303->g_3, "p_303->g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_303->g_4[i][j], "p_303->g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_303->g_5, "p_303->g_5", print_hash_value);
    transparent_crc(p_303->g_6, "p_303->g_6", print_hash_value);
    transparent_crc(p_303->g_7, "p_303->g_7", print_hash_value);
    transparent_crc(p_303->g_8, "p_303->g_8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_303->g_9[i], "p_303->g_9[i]", print_hash_value);

    }
    transparent_crc(p_303->g_54, "p_303->g_54", print_hash_value);
    transparent_crc(p_303->g_58, "p_303->g_58", print_hash_value);
    transparent_crc(p_303->g_76, "p_303->g_76", print_hash_value);
    transparent_crc(p_303->g_86.f0, "p_303->g_86.f0", print_hash_value);
    transparent_crc(p_303->g_86.f1, "p_303->g_86.f1", print_hash_value);
    transparent_crc(p_303->g_86.f2, "p_303->g_86.f2", print_hash_value);
    transparent_crc(p_303->g_99.s0, "p_303->g_99.s0", print_hash_value);
    transparent_crc(p_303->g_99.s1, "p_303->g_99.s1", print_hash_value);
    transparent_crc(p_303->g_99.s2, "p_303->g_99.s2", print_hash_value);
    transparent_crc(p_303->g_99.s3, "p_303->g_99.s3", print_hash_value);
    transparent_crc(p_303->g_99.s4, "p_303->g_99.s4", print_hash_value);
    transparent_crc(p_303->g_99.s5, "p_303->g_99.s5", print_hash_value);
    transparent_crc(p_303->g_99.s6, "p_303->g_99.s6", print_hash_value);
    transparent_crc(p_303->g_99.s7, "p_303->g_99.s7", print_hash_value);
    transparent_crc(p_303->g_99.s8, "p_303->g_99.s8", print_hash_value);
    transparent_crc(p_303->g_99.s9, "p_303->g_99.s9", print_hash_value);
    transparent_crc(p_303->g_99.sa, "p_303->g_99.sa", print_hash_value);
    transparent_crc(p_303->g_99.sb, "p_303->g_99.sb", print_hash_value);
    transparent_crc(p_303->g_99.sc, "p_303->g_99.sc", print_hash_value);
    transparent_crc(p_303->g_99.sd, "p_303->g_99.sd", print_hash_value);
    transparent_crc(p_303->g_99.se, "p_303->g_99.se", print_hash_value);
    transparent_crc(p_303->g_99.sf, "p_303->g_99.sf", print_hash_value);
    transparent_crc(p_303->g_121, "p_303->g_121", print_hash_value);
    transparent_crc(p_303->g_123, "p_303->g_123", print_hash_value);
    transparent_crc(p_303->g_126, "p_303->g_126", print_hash_value);
    transparent_crc(p_303->g_128.f0, "p_303->g_128.f0", print_hash_value);
    transparent_crc(p_303->g_164.x, "p_303->g_164.x", print_hash_value);
    transparent_crc(p_303->g_164.y, "p_303->g_164.y", print_hash_value);
    transparent_crc(p_303->g_172.f0, "p_303->g_172.f0", print_hash_value);
    transparent_crc(p_303->g_172.f1, "p_303->g_172.f1", print_hash_value);
    transparent_crc(p_303->g_172.f2, "p_303->g_172.f2", print_hash_value);
    transparent_crc(p_303->g_174.f0, "p_303->g_174.f0", print_hash_value);
    transparent_crc(p_303->g_174.f1, "p_303->g_174.f1", print_hash_value);
    transparent_crc(p_303->g_174.f2, "p_303->g_174.f2", print_hash_value);
    transparent_crc(p_303->g_186, "p_303->g_186", print_hash_value);
    transparent_crc(p_303->g_189.s0, "p_303->g_189.s0", print_hash_value);
    transparent_crc(p_303->g_189.s1, "p_303->g_189.s1", print_hash_value);
    transparent_crc(p_303->g_189.s2, "p_303->g_189.s2", print_hash_value);
    transparent_crc(p_303->g_189.s3, "p_303->g_189.s3", print_hash_value);
    transparent_crc(p_303->g_189.s4, "p_303->g_189.s4", print_hash_value);
    transparent_crc(p_303->g_189.s5, "p_303->g_189.s5", print_hash_value);
    transparent_crc(p_303->g_189.s6, "p_303->g_189.s6", print_hash_value);
    transparent_crc(p_303->g_189.s7, "p_303->g_189.s7", print_hash_value);
    transparent_crc(p_303->g_210.s0, "p_303->g_210.s0", print_hash_value);
    transparent_crc(p_303->g_210.s1, "p_303->g_210.s1", print_hash_value);
    transparent_crc(p_303->g_210.s2, "p_303->g_210.s2", print_hash_value);
    transparent_crc(p_303->g_210.s3, "p_303->g_210.s3", print_hash_value);
    transparent_crc(p_303->g_210.s4, "p_303->g_210.s4", print_hash_value);
    transparent_crc(p_303->g_210.s5, "p_303->g_210.s5", print_hash_value);
    transparent_crc(p_303->g_210.s6, "p_303->g_210.s6", print_hash_value);
    transparent_crc(p_303->g_210.s7, "p_303->g_210.s7", print_hash_value);
    transparent_crc(p_303->g_214, "p_303->g_214", print_hash_value);
    transparent_crc(p_303->g_224.s0, "p_303->g_224.s0", print_hash_value);
    transparent_crc(p_303->g_224.s1, "p_303->g_224.s1", print_hash_value);
    transparent_crc(p_303->g_224.s2, "p_303->g_224.s2", print_hash_value);
    transparent_crc(p_303->g_224.s3, "p_303->g_224.s3", print_hash_value);
    transparent_crc(p_303->g_224.s4, "p_303->g_224.s4", print_hash_value);
    transparent_crc(p_303->g_224.s5, "p_303->g_224.s5", print_hash_value);
    transparent_crc(p_303->g_224.s6, "p_303->g_224.s6", print_hash_value);
    transparent_crc(p_303->g_224.s7, "p_303->g_224.s7", print_hash_value);
    transparent_crc(p_303->g_225.f0, "p_303->g_225.f0", print_hash_value);
    transparent_crc(p_303->g_240, "p_303->g_240", print_hash_value);
    transparent_crc(p_303->g_270, "p_303->g_270", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_303->g_273[i][j], "p_303->g_273[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_303->g_277[i][j][k], "p_303->g_277[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_303->v_collective, "p_303->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 89; i++)
            transparent_crc(p_303->l_special_values[i], "p_303->l_special_values[i]", print_hash_value);
    transparent_crc(p_303->l_comm_values[get_linear_local_id()], "p_303->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_303->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_303->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
