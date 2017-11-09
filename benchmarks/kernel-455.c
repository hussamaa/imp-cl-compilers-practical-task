// --atomics 10 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,44,2 -l 7,1,1
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
{4,0,1,3,2,6,5}, // permutation 0
{6,0,5,4,2,1,3}, // permutation 1
{3,0,1,6,2,4,5}, // permutation 2
{5,6,2,3,4,1,0}, // permutation 3
{1,3,5,4,2,0,6}, // permutation 4
{4,2,0,1,5,3,6}, // permutation 5
{2,0,6,5,3,1,4}, // permutation 6
{1,0,5,6,4,3,2}, // permutation 7
{1,6,0,4,5,3,2}, // permutation 8
{2,0,5,6,4,1,3} // permutation 9
};

// Seed: 4119874437

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   volatile int64_t  f3;
};

union U1 {
   int64_t  f0;
};

struct S2 {
    int16_t g_13;
    int8_t g_60;
    int64_t g_71;
    uint32_t g_73;
    uint32_t *g_72;
    int32_t g_75;
    int8_t g_89[7];
    volatile uint8_t g_94;
    int32_t g_115;
    int64_t g_124;
    int32_t * volatile g_133[5][5];
    uint32_t g_149;
    volatile VECTOR(int64_t, 8) g_152;
    uint64_t g_155;
    uint8_t g_158;
    uint16_t g_160;
    VECTOR(int32_t, 8) g_162;
    VECTOR(uint16_t, 16) g_175;
    VECTOR(int64_t, 16) g_182;
    struct S0 g_188;
    struct S0 g_195[10];
    int16_t g_199[10];
    int16_t *g_198;
    VECTOR(int8_t, 2) g_232;
    union U1 g_235;
    volatile VECTOR(uint8_t, 4) g_240;
    volatile VECTOR(uint8_t, 2) g_241;
    int32_t g_248;
    volatile struct S0 g_251;
    uint8_t *g_278;
    uint8_t **g_277;
    uint8_t g_281;
    int64_t *g_299;
    volatile VECTOR(int16_t, 2) g_302;
    volatile VECTOR(uint32_t, 16) g_307;
    int32_t *g_312[8];
    int32_t ** volatile g_311;
    int32_t ** volatile g_319;
    struct S0 g_320;
    volatile VECTOR(uint8_t, 16) g_328;
    int16_t g_351;
    int32_t g_353;
    volatile VECTOR(uint16_t, 16) g_366;
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
uint32_t  func_1(struct S2 * p_370);
int16_t  func_6(uint64_t  p_7, int64_t  p_8, struct S2 * p_370);
int64_t  func_23(int16_t * p_24, uint32_t  p_25, int8_t  p_26, uint8_t  p_27, int16_t * p_28, struct S2 * p_370);
uint16_t  func_29(int16_t * p_30, int16_t * p_31, struct S2 * p_370);
int16_t * func_32(int16_t  p_33, struct S2 * p_370);
int16_t  func_34(int16_t * p_35, int16_t * p_36, struct S2 * p_370);
union U1  func_37(int64_t  p_38, int8_t  p_39, struct S2 * p_370);
int8_t  func_44(int16_t * p_45, int16_t * p_46, struct S2 * p_370);
int16_t * func_52(int64_t  p_53, struct S2 * p_370);
uint8_t  func_61(int16_t * p_62, int16_t  p_63, uint32_t * p_64, uint64_t  p_65, uint32_t * p_66, struct S2 * p_370);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_370->l_comm_values p_370->g_13 p_370->g_comm_values p_370->g_71 p_370->g_72 p_370->g_94 p_370->g_75 p_370->g_89 p_370->g_115 p_370->g_160 p_370->g_152 p_370->g_155 p_370->g_149 p_370->g_188 p_370->g_198 p_370->g_199 p_370->g_162 p_370->g_232 p_370->g_235 p_370->g_240 p_370->g_241 p_370->g_195.f3 p_370->g_248 p_370->g_251 p_370->g_73 p_370->g_277 p_370->g_281 p_370->g_124 p_370->g_278 p_370->g_60 p_370->g_311 p_370->g_312 p_370->g_319 p_370->g_195 p_370->g_320.f2 p_370->g_328 p_370->g_351 p_370->g_320.f3 p_370->g_366
 * writes: p_370->g_13 p_370->g_60 p_370->g_71 p_370->g_94 p_370->g_75 p_370->g_115 p_370->g_124 p_370->g_73 p_370->g_160 p_370->g_155 p_370->g_149 p_370->g_188 p_370->g_195 p_370->g_133 p_370->g_89 p_370->g_232 p_370->g_158 p_370->g_248 p_370->g_277 p_370->g_281 p_370->g_312 p_370->g_320 p_370->g_351 p_370->g_353 p_370->g_199 p_370->l_comm_values
 */
uint32_t  func_1(struct S2 * p_370)
{ /* block id: 4 */
    int64_t l_11[2][5] = {{0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L},{0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L,0x73F17E2F9D44C039L}};
    int16_t *l_12 = &p_370->g_13;
    VECTOR(int32_t, 2) l_18 = (VECTOR(int32_t, 2))(5L, 0x0112DEF9L);
    int64_t *l_122 = (void*)0;
    int64_t *l_123 = &p_370->g_124;
    uint8_t *l_197 = &p_370->g_188.f2;
    int32_t l_243 = 1L;
    int8_t *l_246 = &p_370->g_89[2];
    int32_t *l_247 = &p_370->g_248;
    int32_t *l_252 = (void*)0;
    int32_t *l_253[3];
    VECTOR(int32_t, 4) l_254 = (VECTOR(int32_t, 4))(0x19047CAEL, (VECTOR(int32_t, 2))(0x19047CAEL, 5L), 5L);
    uint32_t l_280 = 0x0941A963L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_253[i] = (void*)0;
    (*l_247) |= (p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))] >= (safe_rshift_func_int8_t_s_s(((*l_246) = ((safe_mul_func_int16_t_s_s(func_6(((safe_lshift_func_uint16_t_u_u((((*l_12) &= l_11[1][2]) , (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((l_18.x &= 0x28L) , ((safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint8_t_u_u(((func_23(&p_370->g_13, l_18.y, l_18.x, ((*l_197) = (((*l_12) = (-9L)) || func_29(l_12, func_32(func_34((func_37(((*l_123) = (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s(func_44(&p_370->g_13, &p_370->g_13, p_370), 0xF6L)), p_370->g_89[1]))), p_370->g_89[5], p_370) , l_12), l_12, p_370), p_370), p_370))), p_370->g_198, p_370) , (void*)0) == (void*)0), 0x44L)))) && l_18.y))) <= 0x8B2F7F30CB5C31CDL)) ^ 1UL), l_11[0][2])), l_11[1][2]))), 10)) >= 0xFB4EE82F1A96DB85L), l_243, p_370), 0x42A2L)) <= l_11[0][3])), 5)));
    if ((safe_add_func_uint8_t_u_u((p_370->g_232.y && ((*l_247) = p_370->g_comm_values[p_370->tid])), ((GROUP_DIVERGE(1, 1) < (p_370->g_251 , (l_254.z = 0x6EC75F0FL))) , p_370->g_188.f3))))
    { /* block id: 117 */
        uint8_t l_255 = 0xFDL;
        VECTOR(int16_t, 16) l_300 = (VECTOR(int16_t, 16))(0x4B1AL, (VECTOR(int16_t, 4))(0x4B1AL, (VECTOR(int16_t, 2))(0x4B1AL, 0x6BBAL), 0x6BBAL), 0x6BBAL, 0x4B1AL, 0x6BBAL, (VECTOR(int16_t, 2))(0x4B1AL, 0x6BBAL), (VECTOR(int16_t, 2))(0x4B1AL, 0x6BBAL), 0x4B1AL, 0x6BBAL, 0x4B1AL, 0x6BBAL);
        VECTOR(int16_t, 16) l_301 = (VECTOR(int16_t, 16))(0x6CBAL, (VECTOR(int16_t, 4))(0x6CBAL, (VECTOR(int16_t, 2))(0x6CBAL, 8L), 8L), 8L, 0x6CBAL, 8L, (VECTOR(int16_t, 2))(0x6CBAL, 8L), (VECTOR(int16_t, 2))(0x6CBAL, 8L), 0x6CBAL, 8L, 0x6CBAL, 8L);
        int i;
        atomic_min(&p_370->g_atomic_reduction[get_linear_group_id()], 0x32876024L);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_370->v_collective += p_370->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_255--;
        for (l_243 = (-7); (l_243 > 0); l_243 = safe_add_func_int8_t_s_s(l_243, 1))
        { /* block id: 122 */
            int64_t l_262 = 0x431AB23EFC6D4665L;
            int32_t l_268 = 0x37B44586L;
            int16_t *l_276 = &p_370->g_199[3];
            for (p_370->g_188.f2 = (-17); (p_370->g_188.f2 > 45); p_370->g_188.f2 = safe_add_func_int16_t_s_s(p_370->g_188.f2, 5))
            { /* block id: 125 */
                int32_t l_266 = 0x69AD41C8L;
                int32_t l_267 = 1L;
                int64_t **l_298 = (void*)0;
                int64_t *l_308 = (void*)0;
                int64_t *l_309 = &l_11[0][1];
                uint32_t l_310 = 0UL;
                if (l_262)
                    break;
                for (p_370->g_71 = 0; (p_370->g_71 == (-27)); p_370->g_71 = safe_sub_func_uint8_t_u_u(p_370->g_71, 1))
                { /* block id: 129 */
                    uint16_t l_265[6] = {7UL,7UL,7UL,7UL,7UL,7UL};
                    uint32_t l_269 = 0xC7234715L;
                    uint8_t ***l_279[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_279[i] = &p_370->g_277;
                    if (l_265[1])
                        break;
                    l_269--;
                    for (p_370->g_73 = 0; (p_370->g_73 >= 34); ++p_370->g_73)
                    { /* block id: 134 */
                        return (*p_370->g_72);
                    }
                    p_370->g_281 ^= ((*l_247) |= ((((safe_sub_func_uint8_t_u_u(((p_370->g_199[2] , (l_276 = l_12)) == (((&l_197 != (p_370->g_277 = p_370->g_277)) == (*p_370->g_72)) , (void*)0)), (((p_370->g_188.f0 && l_280) , (void*)0) == &p_370->g_160))) & l_267) ^ 0xC1E3L) >= GROUP_DIVERGE(2, 1)));
                }
                (*l_247) = (safe_mul_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((+(((((p_370->g_155 = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x41C5570A1090F2FBL, (safe_add_func_int16_t_s_s((0x98676DEBL ^ (*p_370->g_72)), (((void*)0 != &l_267) >= (l_268 = (safe_mul_func_uint16_t_u_u((&p_370->g_124 == (p_370->g_299 = &p_370->g_124)), ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(l_300.s22)).xyxxyxxxxxxyyxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_301.saede)).odd)).yyxxyxyx)).s01)).yxxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_370->g_302.xy)).xyxyyyxyyxxyxyxy)).s21b3, ((VECTOR(int16_t, 4))((-3L), ((safe_rshift_func_int8_t_s_s(0x09L, (((*l_309) ^= (safe_add_func_int32_t_s_s(l_267, (((VECTOR(uint32_t, 8))(p_370->g_307.s1e47b0ff)).s5 <= l_266)))) >= 0x15D31673F8D64596L))) , 0x3151L), 1L, 0x1096L))))), 0x2EA4L, (*p_370->g_198), (*p_370->g_198), 0x1AB8L, 0L, ((VECTOR(int16_t, 4))(0x2BE9L)), (*p_370->g_198), (-1L), (-1L)))))).s0)))))), 18446744073709551607UL, 0x22C3EF8E918BFD08L)), 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0xA621DDADD1EA786AL)), 1UL)).s6) >= p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))]) & 2UL) < p_370->g_124) || (**p_370->g_277))), p_370->g_60)), GROUP_DIVERGE(1, 1))), 0x71L)) | 0x1CFDA8591A7F8073L), (*p_370->g_278))), l_255)) != 0x6AB51653EB9E2F45L) && (*p_370->g_198)), l_310));
            }
            (*p_370->g_311) = &l_243;
        }
    }
    else
    { /* block id: 150 */
        int32_t *l_313 = &l_243;
        int32_t **l_314 = (void*)0;
        int32_t **l_315[5] = {&p_370->g_312[3],&p_370->g_312[3],&p_370->g_312[3],&p_370->g_312[3],&p_370->g_312[3]};
        int i;
        l_253[2] = l_313;
        (*p_370->g_311) = (*p_370->g_311);
    }
    for (p_370->g_149 = 0; (p_370->g_149 < 17); ++p_370->g_149)
    { /* block id: 156 */
        int8_t l_318 = 2L;
        int32_t l_357[10][5][1] = {{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}},{{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L},{0x3AA9E2D5L}}};
        uint8_t l_369 = 0x3AL;
        int i, j, k;
        if ((**p_370->g_311))
            break;
        (**p_370->g_311) |= l_318;
        if ((~l_318))
        { /* block id: 159 */
            (*p_370->g_319) = (*p_370->g_311);
            p_370->g_320 = ((!(-9L)) , p_370->g_195[7]);
        }
        else
        { /* block id: 162 */
            uint16_t l_350 = 0xFA89L;
            for (p_370->g_188.f0 = 0; (p_370->g_188.f0 >= 14); ++p_370->g_188.f0)
            { /* block id: 165 */
                uint32_t l_325 = 0xF2FB0723L;
                for (p_370->g_320.f2 = 0; (p_370->g_320.f2 <= 17); p_370->g_320.f2 = safe_add_func_int32_t_s_s(p_370->g_320.f2, 1))
                { /* block id: 168 */
                    uint32_t l_339[9] = {0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L,0xC0D49853L};
                    int32_t *l_352 = &p_370->g_353;
                    uint16_t *l_354 = &p_370->g_160;
                    int32_t l_355 = 0x3FB0A9CFL;
                    uint8_t *l_356 = &p_370->g_158;
                    int32_t l_358 = (-5L);
                    VECTOR(int32_t, 16) l_359 = (VECTOR(int32_t, 16))(0x725935DAL, (VECTOR(int32_t, 4))(0x725935DAL, (VECTOR(int32_t, 2))(0x725935DAL, 0L), 0L), 0L, 0x725935DAL, 0L, (VECTOR(int32_t, 2))(0x725935DAL, 0L), (VECTOR(int32_t, 2))(0x725935DAL, 0L), 0x725935DAL, 0L, 0x725935DAL, 0L);
                    int i;
                    l_359.sd ^= (((l_325 ^ (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_370->g_328.s8d896da5)).s40))))), (safe_div_func_int8_t_s_s(0x01L, (safe_mod_func_int32_t_s_s((-1L), (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((l_339[0] == (safe_mul_func_uint8_t_u_u((0xBE29L | (((*l_356) = (l_355 = (p_370->g_195[4].f2 = (((*p_370->g_278) = (safe_mul_func_int16_t_s_s(((FAKE_DIVERGE(p_370->group_2_offset, get_group_id(2), 10) , 0L) <= ((safe_lshift_func_int16_t_s_u(((0xA3B0L < ((*l_354) |= (safe_mul_func_uint8_t_u_u(((*p_370->g_277) == (((*l_352) = (p_370->g_351 ^= ((safe_sub_func_uint8_t_u_u(l_350, 5L)) & (*p_370->g_198)))) , (*p_370->g_277))), l_350)))) && p_370->g_320.f3), GROUP_DIVERGE(0, 1))) & GROUP_DIVERGE(1, 1))), FAKE_DIVERGE(p_370->group_2_offset, get_group_id(2), 10)))) , (**p_370->g_277))))) >= 0x0DL)), l_350))) != l_339[8]), p_370->g_60)) <= l_318), l_357[7][3][0])), p_370->g_195[4].f1)))))), (*l_247), 0x9AL, ((VECTOR(uint8_t, 4))(0UL)), 0xC8L, (*p_370->g_278), (**p_370->g_277), 3UL, l_358, 0xBCL, 0UL)).s9, l_350))) && l_339[0]) | (*p_370->g_198));
                    l_369 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(0x06A7L, (((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(1UL, ((*l_354) = ((p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))] = (((((+((**p_370->g_277) || ((0xF34AL != ((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(9UL, 65535UL)))).xyxx)).yxwzzyzxzyxxzwyw))).sc) == (0x62C5FE58L | (*p_370->g_72))))) >= (-5L)) , ((VECTOR(uint32_t, 2))(0xD06CBE39L, 1UL)).lo) < (**p_370->g_319)) && (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_370->g_366.sc154cd35)).s6, ((*p_370->g_198) |= (((safe_sub_func_uint8_t_u_u((l_350 , 0xDCL), (**p_370->g_277))) , (void*)0) != (void*)0)))))) || p_370->g_251.f2)))) ^ (*p_370->g_278)), 0x2FBBL)) | l_318) , 9L), ((VECTOR(int16_t, 4))(0x4DCAL)), 0L, 0x507AL)).lo, ((VECTOR(uint16_t, 4))(0xBF86L))))), ((VECTOR(int32_t, 4))(0x08284C36L))))), ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 4))(0x61345A46L))))))).z;
                }
                if (l_357[7][3][0])
                    continue;
            }
        }
    }
    return (*p_370->g_72);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_370->g_133
 */
int16_t  func_6(uint64_t  p_7, int64_t  p_8, struct S2 * p_370)
{ /* block id: 109 */
    int32_t *l_245 = &p_370->g_75;
    int32_t **l_244[10][6] = {{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245},{&l_245,&l_245,&l_245,&l_245,&l_245,&l_245}};
    int i, j;
    p_370->g_133[2][3] = &p_370->g_75;
    p_370->g_133[4][4] = &p_370->g_75;
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_188.f2 p_370->g_75 p_370->g_152 p_370->g_198 p_370->g_199 p_370->g_162 p_370->g_89 p_370->g_232 p_370->g_235 p_370->g_188.f1 p_370->g_240 p_370->g_241 p_370->g_195.f3
 * writes: p_370->g_133 p_370->g_188.f2 p_370->g_75 p_370->g_89 p_370->g_232 p_370->g_158
 */
int64_t  func_23(int16_t * p_24, uint32_t  p_25, int8_t  p_26, uint8_t  p_27, int16_t * p_28, struct S2 * p_370)
{ /* block id: 83 */
    int32_t *l_200 = (void*)0;
    int32_t **l_201 = &l_200;
    int32_t **l_202[7];
    int16_t l_216 = 0x4FD4L;
    int i;
    for (i = 0; i < 7; i++)
        l_202[i] = (void*)0;
    p_370->g_133[2][3] = ((*l_201) = l_200);
    if (p_25)
    { /* block id: 86 */
        int8_t l_206[4] = {0x61L,0x61L,0x61L,0x61L};
        int32_t l_207 = 1L;
        int32_t l_208[5] = {1L,1L,1L,1L,1L};
        uint8_t l_209 = 0x71L;
        int i;
        for (p_370->g_188.f2 = (-5); (p_370->g_188.f2 > 1); ++p_370->g_188.f2)
        { /* block id: 89 */
            int64_t l_205 = 0L;
            int32_t l_218 = 0L;
            int32_t l_219 = 0x4D80A836L;
            int32_t l_222 = 0x3B42F938L;
            VECTOR(int32_t, 8) l_224 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x14779510L), 0x14779510L), 0x14779510L, (-10L), 0x14779510L);
            uint64_t l_227[1];
            int8_t *l_233 = &p_370->g_89[1];
            int8_t *l_234[2];
            uint8_t *l_238 = &p_370->g_158;
            uint8_t **l_239 = &l_238;
            int i;
            for (i = 0; i < 1; i++)
                l_227[i] = 18446744073709551615UL;
            for (i = 0; i < 2; i++)
                l_234[i] = (void*)0;
            l_205 &= p_27;
            l_209++;
            for (p_370->g_75 = 0; (p_370->g_75 < 28); ++p_370->g_75)
            { /* block id: 94 */
                uint64_t l_214 = 0x4567EDCCD7B2C775L;
                int32_t l_215 = 5L;
                int32_t l_217 = 0x05402489L;
                int32_t l_220 = 0x7EF87257L;
                int32_t l_221 = 0x47EEFFE8L;
                int32_t l_223 = 0L;
                int32_t l_225 = (-1L);
                int32_t l_226[3][2] = {{0x76D7A7CCL,(-1L)},{0x76D7A7CCL,(-1L)},{0x76D7A7CCL,(-1L)}};
                int i, j;
                l_215 = ((p_370->g_152.s5 , ((*p_370->g_198) , l_214)) & p_370->g_162.s5);
                if (l_216)
                    continue;
                l_227[0]--;
            }
            l_224.s4 ^= ((p_370->g_89[4] , ((safe_lshift_func_int8_t_s_u((p_370->g_232.x = ((*l_233) = ((VECTOR(int8_t, 4))(p_370->g_232.yxxy)).x)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 0x4CL)), 0x58L, 0xCBL)), p_26, (p_370->g_235 , p_370->g_188.f1), 0UL, 1UL)).s5261255752500707)).sb)) , &p_370->g_94)) != ((safe_lshift_func_uint8_t_u_u(2UL, ((*l_238) = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(7UL, 252UL)).xxxx)).z))) , ((*l_239) = &p_370->g_158)));
        }
    }
    else
    { /* block id: 105 */
        uint8_t l_242 = 9UL;
        l_242 |= (((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(246UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_370->g_240.zx)).yyxxyyyy)).s30))), 247UL)).y, 0x00L, 255UL, 7UL)).lo, ((VECTOR(uint8_t, 4))(p_370->g_241.yxxy)).lo))).hi ^ (-6L));
    }
    return p_370->g_195[4].f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_188
 * writes: p_370->g_195
 */
uint16_t  func_29(int16_t * p_30, int16_t * p_31, struct S2 * p_370)
{ /* block id: 79 */
    uint8_t l_196 = 0x8FL;
    p_370->g_195[4] = p_370->g_188;
    return l_196;
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_188
 * writes: p_370->g_188
 */
int16_t * func_32(int16_t  p_33, struct S2 * p_370)
{ /* block id: 71 */
    struct S0 *l_189 = &p_370->g_188;
    int16_t *l_194 = &p_370->g_13;
    (*l_189) = p_370->g_188;
    for (p_370->g_188.f0 = 26; (p_370->g_188.f0 == 50); p_370->g_188.f0++)
    { /* block id: 75 */
        int32_t *l_193 = (void*)0;
        int32_t **l_192 = &l_193;
        (*l_192) = &p_370->g_75;
    }
    return l_194;
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_75 p_370->g_13 p_370->g_115 p_370->l_comm_values p_370->g_160 p_370->g_71 p_370->g_152 p_370->g_155 p_370->g_149 p_370->g_89 p_370->g_comm_values p_370->g_94
 * writes: p_370->g_75 p_370->g_73 p_370->g_115 p_370->g_160 p_370->g_155 p_370->g_149
 */
int16_t  func_34(int16_t * p_35, int16_t * p_36, struct S2 * p_370)
{ /* block id: 37 */
    uint16_t l_134 = 7UL;
    int32_t *l_169[2][3];
    int32_t *l_170 = &p_370->g_115;
    uint32_t *l_184 = &p_370->g_149;
    int32_t l_187 = 0x64D51499L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_169[i][j] = &p_370->g_115;
    }
    for (p_370->g_75 = 0; (p_370->g_75 > 26); ++p_370->g_75)
    { /* block id: 40 */
        uint16_t l_132 = 65535UL;
        int32_t l_156 = 0L;
        int32_t l_167 = 0L;
        for (p_370->g_73 = 0; (p_370->g_73 > 59); ++p_370->g_73)
        { /* block id: 43 */
            if (l_132)
                break;
            l_134 = p_370->g_13;
        }
        for (p_370->g_73 = 0; (p_370->g_73 != 17); p_370->g_73 = safe_add_func_uint16_t_u_u(p_370->g_73, 2))
        { /* block id: 49 */
            int32_t *l_137 = &p_370->g_115;
            int64_t *l_144 = &p_370->g_124;
            uint32_t *l_147 = (void*)0;
            uint32_t *l_148[5];
            VECTOR(int64_t, 2) l_153 = (VECTOR(int64_t, 2))(0L, (-7L));
            uint64_t *l_154 = &p_370->g_155;
            uint8_t *l_157 = &p_370->g_158;
            uint16_t *l_159 = &p_370->g_160;
            int32_t *l_161 = (void*)0;
            int32_t *l_163 = (void*)0;
            int32_t *l_164 = (void*)0;
            int32_t *l_165 = (void*)0;
            int32_t *l_166 = (void*)0;
            int32_t **l_168[8][8] = {{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0},{&l_166,&l_165,&l_165,&l_166,(void*)0,&l_163,&l_163,(void*)0}};
            VECTOR(uint32_t, 16) l_183 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x102A3EB5L), 0x102A3EB5L), 0x102A3EB5L, 4294967290UL, 0x102A3EB5L, (VECTOR(uint32_t, 2))(4294967290UL, 0x102A3EB5L), (VECTOR(uint32_t, 2))(4294967290UL, 0x102A3EB5L), 4294967290UL, 0x102A3EB5L, 4294967290UL, 0x102A3EB5L);
            int i, j;
            for (i = 0; i < 5; i++)
                l_148[i] = &p_370->g_149;
            (*l_137) &= (l_137 != (void*)0);
            l_167 ^= (((*l_159) &= ((((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 2))(0x0277B54EL, 0xA6927BAFL)).xxxyyyyyxyxxyyxx, (uint32_t)(safe_sub_func_int32_t_s_s((0x39L && ((*l_157) = (safe_rshift_func_uint16_t_u_s((l_156 = ((((*l_144) = p_370->g_71) , (+(l_132 , 0xDD756E63157454CDL))) >= ((safe_mul_func_uint8_t_u_u((((--p_370->g_149) >= ((*l_137) = ((l_144 != &p_370->g_71) , (((*p_35) &= (((VECTOR(int64_t, 16))(p_370->g_152.s7225422551332303)).s5 & 0x25FA6A51F097456AL)) >= FAKE_DIVERGE(p_370->global_0_offset, get_global_id(0), 10))))) < (p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))] , (((*l_154) ^= (((VECTOR(int64_t, 2))(l_153.xy)).lo < p_370->g_comm_values[p_370->tid])) ^ p_370->g_comm_values[p_370->tid]))), p_370->g_comm_values[p_370->tid])) & l_134))), 14)))), l_132))))).even)).s71, (uint32_t)(*p_370->g_72)))).xyyyxyyy)).s2, l_132)) , l_132) & p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))]) ^ FAKE_DIVERGE(p_370->local_0_offset, get_local_id(0), 10))) & p_370->g_71);
            (*l_137) = (+(((((l_156 |= 0x7D6ECED9L) ^ (((((l_169[1][2] = (void*)0) != (l_170 = &p_370->g_75)) , (!(safe_div_func_int8_t_s_s((((l_167 < 0x698A8858L) , (safe_add_func_uint64_t_u_u((((((VECTOR(uint16_t, 8))(p_370->g_175.s26123d7b)).s4 != (+((safe_rshift_func_int16_t_s_u((FAKE_DIVERGE(p_370->group_0_offset, get_group_id(0), 10) != p_370->g_152.s4), (safe_sub_func_uint64_t_u_u((--(*l_154)), ((VECTOR(int64_t, 8))(p_370->g_182.s65c1e2d5)).s4)))) | (p_370->g_149 &= ((VECTOR(uint32_t, 4))(l_183.sba54)).x)))) || (l_169[1][2] == (l_184 = l_166))) & ((VECTOR(uint64_t, 4))(0x3CC60E83F7990D59L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((safe_mod_func_uint32_t_u_u(l_167, 0x1B001829L)) , p_370->g_comm_values[p_370->tid]), ((VECTOR(uint64_t, 2))(1UL)), 0x293BDCD76EB741D2L)).hi)), 18446744073709551611UL)).z), l_187))) ^ p_370->g_89[4]), p_370->l_comm_values[(safe_mod_func_uint32_t_u_u(p_370->tid, 7))])))) >= p_370->g_comm_values[p_370->tid]) & 0x11C804560B182A6EL)) , l_167) , 6UL) && p_370->g_75));
        }
    }
    (*l_170) = (*l_170);
    return p_370->g_94;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U1  func_37(int64_t  p_38, int8_t  p_39, struct S2 * p_370)
{ /* block id: 33 */
    int32_t *l_125[6] = {&p_370->g_115,(void*)0,&p_370->g_115,&p_370->g_115,(void*)0,&p_370->g_115};
    int32_t **l_126 = &l_125[2];
    union U1 l_127[4][8][8] = {{{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}}},{{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}}},{{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}}},{{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}},{{0L},{0x1694381BEE42B754L},{0x4AE08EB45E8E9F82L},{8L},{-1L},{-9L},{-5L},{-10L}}}};
    int i, j, k;
    (*l_126) = l_125[1];
    (*l_126) = (*l_126);
    return l_127[1][0][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_comm_values p_370->g_71 p_370->g_13 p_370->g_72 p_370->g_94 p_370->g_75 p_370->g_89 p_370->g_115
 * writes: p_370->g_60 p_370->g_71 p_370->g_94 p_370->g_75 p_370->g_115
 */
int8_t  func_44(int16_t * p_45, int16_t * p_46, struct S2 * p_370)
{ /* block id: 8 */
    VECTOR(uint32_t, 4) l_47 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x7B1AA435L), 0x7B1AA435L);
    VECTOR(uint32_t, 4) l_48 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x4AD4DB1DL), 0x4AD4DB1DL);
    uint16_t l_56 = 0x2F23L;
    uint32_t *l_57 = (void*)0;
    uint32_t *l_58 = (void*)0;
    uint32_t *l_59[10];
    int16_t *l_67 = &p_370->g_13;
    int64_t *l_70 = &p_370->g_71;
    int32_t *l_117 = &p_370->g_75;
    int64_t l_121 = 1L;
    int i;
    for (i = 0; i < 10; i++)
        l_59[i] = (void*)0;
    (*l_117) = (((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(l_47.xy)).xxyxyyxx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_48.wx)).yyyxyxxxyxyyyyxy)).hi, ((VECTOR(uint32_t, 4))(((((safe_add_func_uint8_t_u_u(l_47.x, p_370->g_comm_values[p_370->tid])) != (p_45 != ((safe_unary_minus_func_int32_t_s(p_370->g_comm_values[p_370->tid])) , func_52((safe_sub_func_uint32_t_u_u((((p_370->g_60 = l_56) , func_61(l_67, (~(+(p_370->g_comm_values[p_370->tid] < (l_47.z , (safe_lshift_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) || (((*l_70) |= l_56) ^ p_370->g_13)), 5)))))), p_370->g_72, l_47.y, l_58, p_370)) < p_370->g_89[4]), 0L)), p_370)))) ^ GROUP_DIVERGE(1, 1)) < l_47.w), 0xFF4CBEB0L, 0x519BE197L, 0x74DCC0C0L)).wzzxyzzw))).s7 , (-10L));
    if ((atomic_inc(&p_370->g_atomic_input[10 * get_linear_group_id() + 7]) == 0))
    { /* block id: 26 */
        int32_t l_119 = (-7L);
        int32_t *l_118 = &l_119;
        int32_t *l_120 = &l_119;
        l_120 = l_118;
        unsigned int result = 0;
        result += l_119;
        atomic_add(&p_370->g_special_values[10 * get_linear_group_id() + 7], result);
    }
    else
    { /* block id: 28 */
        (1 + 1);
    }
    return l_121;
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_75 p_370->g_115
 * writes: p_370->g_115
 */
int16_t * func_52(int64_t  p_53, struct S2 * p_370)
{ /* block id: 21 */
    uint16_t l_101 = 0xEFA6L;
    int32_t *l_114 = &p_370->g_115;
    int16_t *l_116[9][5] = {{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13},{&p_370->g_13,(void*)0,(void*)0,(void*)0,&p_370->g_13}};
    int i, j;
    (*l_114) ^= ((l_101 > ((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_53, (safe_div_func_int16_t_s_s((p_370->g_75 , (-9L)), (safe_add_func_int32_t_s_s(0x7641D31AL, (safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u(((p_53 > p_53) , p_53), (l_101 && (-1L)))) == 1UL) == l_101), l_101)))))))), 5)) != p_53)) , 0L);
    return l_116[5][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_370->g_94 p_370->g_75
 * writes: p_370->g_94 p_370->g_75
 */
uint8_t  func_61(int16_t * p_62, int16_t  p_63, uint32_t * p_64, uint64_t  p_65, uint32_t * p_66, struct S2 * p_370)
{ /* block id: 11 */
    int32_t *l_74 = &p_370->g_75;
    int32_t *l_76 = (void*)0;
    int32_t *l_77 = &p_370->g_75;
    int32_t *l_78 = &p_370->g_75;
    int32_t *l_79 = &p_370->g_75;
    int32_t *l_80 = (void*)0;
    int32_t *l_81 = &p_370->g_75;
    int32_t *l_82 = &p_370->g_75;
    int8_t l_83 = 0x2AL;
    int32_t *l_84 = &p_370->g_75;
    int32_t *l_85 = &p_370->g_75;
    int32_t *l_86 = &p_370->g_75;
    int32_t *l_87 = &p_370->g_75;
    int32_t l_88 = (-7L);
    int32_t *l_90 = &l_88;
    int32_t l_91 = 0L;
    int32_t *l_92 = &l_88;
    int32_t *l_93[6][8] = {{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0},{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0},{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0},{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0},{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0},{(void*)0,(void*)0,&l_91,&l_91,(void*)0,&l_91,&l_91,(void*)0}};
    int i, j;
    --p_370->g_94;
    for (l_83 = 0; (l_83 >= 24); l_83++)
    { /* block id: 15 */
        p_370->g_75 ^= 0x44ADEF08L;
        (*l_92) = (p_370->g_75 = (*l_84));
    }
    return p_65;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S2 c_371;
    struct S2* p_370 = &c_371;
    struct S2 c_372 = {
        1L, // p_370->g_13
        0x33L, // p_370->g_60
        (-7L), // p_370->g_71
        0x92197989L, // p_370->g_73
        &p_370->g_73, // p_370->g_72
        (-9L), // p_370->g_75
        {0x33L,0x33L,0x33L,0x33L,0x33L,0x33L,0x33L}, // p_370->g_89
        0x9DL, // p_370->g_94
        1L, // p_370->g_115
        (-4L), // p_370->g_124
        {{&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115},{&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115},{&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115},{&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115},{&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115}}, // p_370->g_133
        0xA2BCDE28L, // p_370->g_149
        (VECTOR(int64_t, 8))(0x36D62ACC67245343L, (VECTOR(int64_t, 4))(0x36D62ACC67245343L, (VECTOR(int64_t, 2))(0x36D62ACC67245343L, 0L), 0L), 0L, 0x36D62ACC67245343L, 0L), // p_370->g_152
        1UL, // p_370->g_155
        1UL, // p_370->g_158
        65535UL, // p_370->g_160
        (VECTOR(int32_t, 8))(0x0246A680L, (VECTOR(int32_t, 4))(0x0246A680L, (VECTOR(int32_t, 2))(0x0246A680L, (-1L)), (-1L)), (-1L), 0x0246A680L, (-1L)), // p_370->g_162
        (VECTOR(uint16_t, 16))(0xFC34L, (VECTOR(uint16_t, 4))(0xFC34L, (VECTOR(uint16_t, 2))(0xFC34L, 65531UL), 65531UL), 65531UL, 0xFC34L, 65531UL, (VECTOR(uint16_t, 2))(0xFC34L, 65531UL), (VECTOR(uint16_t, 2))(0xFC34L, 65531UL), 0xFC34L, 65531UL, 0xFC34L, 65531UL), // p_370->g_175
        (VECTOR(int64_t, 16))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x17BC323D9690AA63L), 0x17BC323D9690AA63L), 0x17BC323D9690AA63L, 7L, 0x17BC323D9690AA63L, (VECTOR(int64_t, 2))(7L, 0x17BC323D9690AA63L), (VECTOR(int64_t, 2))(7L, 0x17BC323D9690AA63L), 7L, 0x17BC323D9690AA63L, 7L, 0x17BC323D9690AA63L), // p_370->g_182
        {0UL,0x6FF152E6D4CF9D2CL,0xAAL,-1L}, // p_370->g_188
        {{4294967290UL,18446744073709551615UL,0x21L,3L},{0x08ECFB4AL,0x8077A4E5EF4969E8L,246UL,0x36DA4907F26B1156L},{4294967290UL,18446744073709551615UL,0x21L,3L},{4294967290UL,18446744073709551615UL,0x21L,3L},{0x08ECFB4AL,0x8077A4E5EF4969E8L,246UL,0x36DA4907F26B1156L},{4294967290UL,18446744073709551615UL,0x21L,3L},{4294967290UL,18446744073709551615UL,0x21L,3L},{0x08ECFB4AL,0x8077A4E5EF4969E8L,246UL,0x36DA4907F26B1156L},{4294967290UL,18446744073709551615UL,0x21L,3L},{4294967290UL,18446744073709551615UL,0x21L,3L}}, // p_370->g_195
        {0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L,0x2DD0L}, // p_370->g_199
        &p_370->g_199[2], // p_370->g_198
        (VECTOR(int8_t, 2))(0x6AL, 3L), // p_370->g_232
        {0x3AF473B4E5F67253L}, // p_370->g_235
        (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 248UL), 248UL), // p_370->g_240
        (VECTOR(uint8_t, 2))(0x80L, 0x51L), // p_370->g_241
        0x2493D74DL, // p_370->g_248
        {0xA292EE64L,0xF43359C2F6A36950L,0xC5L,4L}, // p_370->g_251
        &p_370->g_188.f2, // p_370->g_278
        &p_370->g_278, // p_370->g_277
        252UL, // p_370->g_281
        (void*)0, // p_370->g_299
        (VECTOR(int16_t, 2))(0L, (-1L)), // p_370->g_302
        (VECTOR(uint32_t, 16))(0xA01716A9L, (VECTOR(uint32_t, 4))(0xA01716A9L, (VECTOR(uint32_t, 2))(0xA01716A9L, 4294967294UL), 4294967294UL), 4294967294UL, 0xA01716A9L, 4294967294UL, (VECTOR(uint32_t, 2))(0xA01716A9L, 4294967294UL), (VECTOR(uint32_t, 2))(0xA01716A9L, 4294967294UL), 0xA01716A9L, 4294967294UL, 0xA01716A9L, 4294967294UL), // p_370->g_307
        {&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115,&p_370->g_115}, // p_370->g_312
        &p_370->g_312[3], // p_370->g_311
        &p_370->g_312[3], // p_370->g_319
        {0x021B9E9FL,0x41C69828AE5848D3L,1UL,0L}, // p_370->g_320
        (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 250UL), 250UL), 250UL, 249UL, 250UL, (VECTOR(uint8_t, 2))(249UL, 250UL), (VECTOR(uint8_t, 2))(249UL, 250UL), 249UL, 250UL, 249UL, 250UL), // p_370->g_328
        0L, // p_370->g_351
        0L, // p_370->g_353
        (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x9D4DL), 0x9D4DL), 0x9D4DL, 6UL, 0x9D4DL, (VECTOR(uint16_t, 2))(6UL, 0x9D4DL), (VECTOR(uint16_t, 2))(6UL, 0x9D4DL), 6UL, 0x9D4DL, 6UL, 0x9D4DL), // p_370->g_366
        0, // p_370->v_collective
        sequence_input[get_global_id(0)], // p_370->global_0_offset
        sequence_input[get_global_id(1)], // p_370->global_1_offset
        sequence_input[get_global_id(2)], // p_370->global_2_offset
        sequence_input[get_local_id(0)], // p_370->local_0_offset
        sequence_input[get_local_id(1)], // p_370->local_1_offset
        sequence_input[get_local_id(2)], // p_370->local_2_offset
        sequence_input[get_group_id(0)], // p_370->group_0_offset
        sequence_input[get_group_id(1)], // p_370->group_1_offset
        sequence_input[get_group_id(2)], // p_370->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_370->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_371 = c_372;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_370);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_370->g_13, "p_370->g_13", print_hash_value);
    transparent_crc(p_370->g_60, "p_370->g_60", print_hash_value);
    transparent_crc(p_370->g_71, "p_370->g_71", print_hash_value);
    transparent_crc(p_370->g_73, "p_370->g_73", print_hash_value);
    transparent_crc(p_370->g_75, "p_370->g_75", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_370->g_89[i], "p_370->g_89[i]", print_hash_value);

    }
    transparent_crc(p_370->g_94, "p_370->g_94", print_hash_value);
    transparent_crc(p_370->g_115, "p_370->g_115", print_hash_value);
    transparent_crc(p_370->g_124, "p_370->g_124", print_hash_value);
    transparent_crc(p_370->g_149, "p_370->g_149", print_hash_value);
    transparent_crc(p_370->g_152.s0, "p_370->g_152.s0", print_hash_value);
    transparent_crc(p_370->g_152.s1, "p_370->g_152.s1", print_hash_value);
    transparent_crc(p_370->g_152.s2, "p_370->g_152.s2", print_hash_value);
    transparent_crc(p_370->g_152.s3, "p_370->g_152.s3", print_hash_value);
    transparent_crc(p_370->g_152.s4, "p_370->g_152.s4", print_hash_value);
    transparent_crc(p_370->g_152.s5, "p_370->g_152.s5", print_hash_value);
    transparent_crc(p_370->g_152.s6, "p_370->g_152.s6", print_hash_value);
    transparent_crc(p_370->g_152.s7, "p_370->g_152.s7", print_hash_value);
    transparent_crc(p_370->g_155, "p_370->g_155", print_hash_value);
    transparent_crc(p_370->g_158, "p_370->g_158", print_hash_value);
    transparent_crc(p_370->g_160, "p_370->g_160", print_hash_value);
    transparent_crc(p_370->g_162.s0, "p_370->g_162.s0", print_hash_value);
    transparent_crc(p_370->g_162.s1, "p_370->g_162.s1", print_hash_value);
    transparent_crc(p_370->g_162.s2, "p_370->g_162.s2", print_hash_value);
    transparent_crc(p_370->g_162.s3, "p_370->g_162.s3", print_hash_value);
    transparent_crc(p_370->g_162.s4, "p_370->g_162.s4", print_hash_value);
    transparent_crc(p_370->g_162.s5, "p_370->g_162.s5", print_hash_value);
    transparent_crc(p_370->g_162.s6, "p_370->g_162.s6", print_hash_value);
    transparent_crc(p_370->g_162.s7, "p_370->g_162.s7", print_hash_value);
    transparent_crc(p_370->g_175.s0, "p_370->g_175.s0", print_hash_value);
    transparent_crc(p_370->g_175.s1, "p_370->g_175.s1", print_hash_value);
    transparent_crc(p_370->g_175.s2, "p_370->g_175.s2", print_hash_value);
    transparent_crc(p_370->g_175.s3, "p_370->g_175.s3", print_hash_value);
    transparent_crc(p_370->g_175.s4, "p_370->g_175.s4", print_hash_value);
    transparent_crc(p_370->g_175.s5, "p_370->g_175.s5", print_hash_value);
    transparent_crc(p_370->g_175.s6, "p_370->g_175.s6", print_hash_value);
    transparent_crc(p_370->g_175.s7, "p_370->g_175.s7", print_hash_value);
    transparent_crc(p_370->g_175.s8, "p_370->g_175.s8", print_hash_value);
    transparent_crc(p_370->g_175.s9, "p_370->g_175.s9", print_hash_value);
    transparent_crc(p_370->g_175.sa, "p_370->g_175.sa", print_hash_value);
    transparent_crc(p_370->g_175.sb, "p_370->g_175.sb", print_hash_value);
    transparent_crc(p_370->g_175.sc, "p_370->g_175.sc", print_hash_value);
    transparent_crc(p_370->g_175.sd, "p_370->g_175.sd", print_hash_value);
    transparent_crc(p_370->g_175.se, "p_370->g_175.se", print_hash_value);
    transparent_crc(p_370->g_175.sf, "p_370->g_175.sf", print_hash_value);
    transparent_crc(p_370->g_182.s0, "p_370->g_182.s0", print_hash_value);
    transparent_crc(p_370->g_182.s1, "p_370->g_182.s1", print_hash_value);
    transparent_crc(p_370->g_182.s2, "p_370->g_182.s2", print_hash_value);
    transparent_crc(p_370->g_182.s3, "p_370->g_182.s3", print_hash_value);
    transparent_crc(p_370->g_182.s4, "p_370->g_182.s4", print_hash_value);
    transparent_crc(p_370->g_182.s5, "p_370->g_182.s5", print_hash_value);
    transparent_crc(p_370->g_182.s6, "p_370->g_182.s6", print_hash_value);
    transparent_crc(p_370->g_182.s7, "p_370->g_182.s7", print_hash_value);
    transparent_crc(p_370->g_182.s8, "p_370->g_182.s8", print_hash_value);
    transparent_crc(p_370->g_182.s9, "p_370->g_182.s9", print_hash_value);
    transparent_crc(p_370->g_182.sa, "p_370->g_182.sa", print_hash_value);
    transparent_crc(p_370->g_182.sb, "p_370->g_182.sb", print_hash_value);
    transparent_crc(p_370->g_182.sc, "p_370->g_182.sc", print_hash_value);
    transparent_crc(p_370->g_182.sd, "p_370->g_182.sd", print_hash_value);
    transparent_crc(p_370->g_182.se, "p_370->g_182.se", print_hash_value);
    transparent_crc(p_370->g_182.sf, "p_370->g_182.sf", print_hash_value);
    transparent_crc(p_370->g_188.f0, "p_370->g_188.f0", print_hash_value);
    transparent_crc(p_370->g_188.f1, "p_370->g_188.f1", print_hash_value);
    transparent_crc(p_370->g_188.f2, "p_370->g_188.f2", print_hash_value);
    transparent_crc(p_370->g_188.f3, "p_370->g_188.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_370->g_195[i].f0, "p_370->g_195[i].f0", print_hash_value);
        transparent_crc(p_370->g_195[i].f1, "p_370->g_195[i].f1", print_hash_value);
        transparent_crc(p_370->g_195[i].f2, "p_370->g_195[i].f2", print_hash_value);
        transparent_crc(p_370->g_195[i].f3, "p_370->g_195[i].f3", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_370->g_199[i], "p_370->g_199[i]", print_hash_value);

    }
    transparent_crc(p_370->g_232.x, "p_370->g_232.x", print_hash_value);
    transparent_crc(p_370->g_232.y, "p_370->g_232.y", print_hash_value);
    transparent_crc(p_370->g_235.f0, "p_370->g_235.f0", print_hash_value);
    transparent_crc(p_370->g_240.x, "p_370->g_240.x", print_hash_value);
    transparent_crc(p_370->g_240.y, "p_370->g_240.y", print_hash_value);
    transparent_crc(p_370->g_240.z, "p_370->g_240.z", print_hash_value);
    transparent_crc(p_370->g_240.w, "p_370->g_240.w", print_hash_value);
    transparent_crc(p_370->g_241.x, "p_370->g_241.x", print_hash_value);
    transparent_crc(p_370->g_241.y, "p_370->g_241.y", print_hash_value);
    transparent_crc(p_370->g_248, "p_370->g_248", print_hash_value);
    transparent_crc(p_370->g_251.f0, "p_370->g_251.f0", print_hash_value);
    transparent_crc(p_370->g_251.f1, "p_370->g_251.f1", print_hash_value);
    transparent_crc(p_370->g_251.f2, "p_370->g_251.f2", print_hash_value);
    transparent_crc(p_370->g_251.f3, "p_370->g_251.f3", print_hash_value);
    transparent_crc(p_370->g_281, "p_370->g_281", print_hash_value);
    transparent_crc(p_370->g_302.x, "p_370->g_302.x", print_hash_value);
    transparent_crc(p_370->g_302.y, "p_370->g_302.y", print_hash_value);
    transparent_crc(p_370->g_307.s0, "p_370->g_307.s0", print_hash_value);
    transparent_crc(p_370->g_307.s1, "p_370->g_307.s1", print_hash_value);
    transparent_crc(p_370->g_307.s2, "p_370->g_307.s2", print_hash_value);
    transparent_crc(p_370->g_307.s3, "p_370->g_307.s3", print_hash_value);
    transparent_crc(p_370->g_307.s4, "p_370->g_307.s4", print_hash_value);
    transparent_crc(p_370->g_307.s5, "p_370->g_307.s5", print_hash_value);
    transparent_crc(p_370->g_307.s6, "p_370->g_307.s6", print_hash_value);
    transparent_crc(p_370->g_307.s7, "p_370->g_307.s7", print_hash_value);
    transparent_crc(p_370->g_307.s8, "p_370->g_307.s8", print_hash_value);
    transparent_crc(p_370->g_307.s9, "p_370->g_307.s9", print_hash_value);
    transparent_crc(p_370->g_307.sa, "p_370->g_307.sa", print_hash_value);
    transparent_crc(p_370->g_307.sb, "p_370->g_307.sb", print_hash_value);
    transparent_crc(p_370->g_307.sc, "p_370->g_307.sc", print_hash_value);
    transparent_crc(p_370->g_307.sd, "p_370->g_307.sd", print_hash_value);
    transparent_crc(p_370->g_307.se, "p_370->g_307.se", print_hash_value);
    transparent_crc(p_370->g_307.sf, "p_370->g_307.sf", print_hash_value);
    transparent_crc(p_370->g_320.f0, "p_370->g_320.f0", print_hash_value);
    transparent_crc(p_370->g_320.f1, "p_370->g_320.f1", print_hash_value);
    transparent_crc(p_370->g_320.f2, "p_370->g_320.f2", print_hash_value);
    transparent_crc(p_370->g_320.f3, "p_370->g_320.f3", print_hash_value);
    transparent_crc(p_370->g_328.s0, "p_370->g_328.s0", print_hash_value);
    transparent_crc(p_370->g_328.s1, "p_370->g_328.s1", print_hash_value);
    transparent_crc(p_370->g_328.s2, "p_370->g_328.s2", print_hash_value);
    transparent_crc(p_370->g_328.s3, "p_370->g_328.s3", print_hash_value);
    transparent_crc(p_370->g_328.s4, "p_370->g_328.s4", print_hash_value);
    transparent_crc(p_370->g_328.s5, "p_370->g_328.s5", print_hash_value);
    transparent_crc(p_370->g_328.s6, "p_370->g_328.s6", print_hash_value);
    transparent_crc(p_370->g_328.s7, "p_370->g_328.s7", print_hash_value);
    transparent_crc(p_370->g_328.s8, "p_370->g_328.s8", print_hash_value);
    transparent_crc(p_370->g_328.s9, "p_370->g_328.s9", print_hash_value);
    transparent_crc(p_370->g_328.sa, "p_370->g_328.sa", print_hash_value);
    transparent_crc(p_370->g_328.sb, "p_370->g_328.sb", print_hash_value);
    transparent_crc(p_370->g_328.sc, "p_370->g_328.sc", print_hash_value);
    transparent_crc(p_370->g_328.sd, "p_370->g_328.sd", print_hash_value);
    transparent_crc(p_370->g_328.se, "p_370->g_328.se", print_hash_value);
    transparent_crc(p_370->g_328.sf, "p_370->g_328.sf", print_hash_value);
    transparent_crc(p_370->g_351, "p_370->g_351", print_hash_value);
    transparent_crc(p_370->g_353, "p_370->g_353", print_hash_value);
    transparent_crc(p_370->g_366.s0, "p_370->g_366.s0", print_hash_value);
    transparent_crc(p_370->g_366.s1, "p_370->g_366.s1", print_hash_value);
    transparent_crc(p_370->g_366.s2, "p_370->g_366.s2", print_hash_value);
    transparent_crc(p_370->g_366.s3, "p_370->g_366.s3", print_hash_value);
    transparent_crc(p_370->g_366.s4, "p_370->g_366.s4", print_hash_value);
    transparent_crc(p_370->g_366.s5, "p_370->g_366.s5", print_hash_value);
    transparent_crc(p_370->g_366.s6, "p_370->g_366.s6", print_hash_value);
    transparent_crc(p_370->g_366.s7, "p_370->g_366.s7", print_hash_value);
    transparent_crc(p_370->g_366.s8, "p_370->g_366.s8", print_hash_value);
    transparent_crc(p_370->g_366.s9, "p_370->g_366.s9", print_hash_value);
    transparent_crc(p_370->g_366.sa, "p_370->g_366.sa", print_hash_value);
    transparent_crc(p_370->g_366.sb, "p_370->g_366.sb", print_hash_value);
    transparent_crc(p_370->g_366.sc, "p_370->g_366.sc", print_hash_value);
    transparent_crc(p_370->g_366.sd, "p_370->g_366.sd", print_hash_value);
    transparent_crc(p_370->g_366.se, "p_370->g_366.se", print_hash_value);
    transparent_crc(p_370->g_366.sf, "p_370->g_366.sf", print_hash_value);
    transparent_crc(p_370->v_collective, "p_370->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 10; i++)
            transparent_crc(p_370->g_special_values[i + 10 * get_linear_group_id()], "p_370->g_special_values[i + 10 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_370->l_comm_values[get_linear_local_id()], "p_370->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_370->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_370->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
