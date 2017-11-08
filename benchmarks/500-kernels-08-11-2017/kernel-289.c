// --atomics 48 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 86,12,2 -l 1,12,2
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

__constant uint32_t permutations[10][24] = {
{22,17,20,2,15,13,1,19,4,5,14,0,11,18,9,3,6,12,16,10,7,23,8,21}, // permutation 0
{1,18,12,23,4,6,11,13,7,14,15,17,2,8,3,19,5,22,16,20,9,21,10,0}, // permutation 1
{1,3,11,8,12,10,7,14,13,2,15,0,9,5,16,21,17,4,20,19,6,23,22,18}, // permutation 2
{23,7,12,11,21,20,3,9,14,0,6,5,18,16,22,4,10,8,15,17,19,1,13,2}, // permutation 3
{12,19,15,11,4,6,0,2,17,20,23,14,7,8,9,21,22,1,13,5,16,3,18,10}, // permutation 4
{18,22,19,5,7,15,12,4,20,8,11,23,6,17,1,13,21,16,10,9,3,0,2,14}, // permutation 5
{1,17,8,10,7,18,20,5,14,19,0,11,22,13,12,21,23,3,2,15,6,9,16,4}, // permutation 6
{7,13,16,18,19,23,5,22,2,0,11,14,6,20,10,3,8,1,15,9,21,12,17,4}, // permutation 7
{23,16,1,11,2,9,19,22,0,18,15,14,5,8,10,21,12,20,17,4,13,7,6,3}, // permutation 8
{14,0,15,11,22,4,9,12,3,23,7,2,17,10,19,6,20,16,18,5,8,1,13,21} // permutation 9
};

// Seed: 3104644894

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   uint32_t  f1;
};

struct S1 {
   struct S0  f0;
   volatile uint64_t  f1;
   struct S0  f2;
   volatile struct S0  f3;
   uint8_t  f4;
   int64_t  f5;
   volatile int32_t  f6;
   int64_t  f7;
   volatile uint32_t  f8;
   uint32_t  f9;
};

union U2 {
   volatile int16_t  f0;
   int64_t  f1;
   uint64_t  f2;
};

struct S3 {
    int32_t g_3;
    int32_t *g_79[4];
    int32_t **g_78;
    uint64_t g_84;
    int32_t ***g_88;
    int32_t **g_93[1];
    int32_t g_96;
    struct S1 g_101;
    int32_t g_115;
    volatile struct S1 g_141;
    struct S1 *g_163[5][1][2];
    VECTOR(int8_t, 16) g_200;
    VECTOR(uint8_t, 8) g_203;
    VECTOR(int32_t, 2) g_218;
    volatile VECTOR(uint8_t, 8) g_219;
    int8_t *g_223;
    uint16_t g_240;
    struct S0 g_249;
    union U2 g_272;
    union U2 *g_271;
    union U2 ** volatile g_270[9];
    volatile int32_t g_284;
    volatile VECTOR(uint64_t, 8) g_300;
    VECTOR(int64_t, 4) g_305;
    struct S1 g_310;
    struct S1 g_313;
    struct S1 *g_312;
    VECTOR(int16_t, 16) g_320;
    VECTOR(int32_t, 2) g_341;
    volatile VECTOR(int8_t, 4) g_363;
    uint32_t g_376;
    volatile VECTOR(uint32_t, 16) g_381;
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
struct S0  func_1(struct S3 * p_385);
int32_t ** func_17(uint8_t  p_18, int64_t  p_19, struct S3 * p_385);
int32_t ** func_22(int32_t ** p_23, int32_t ** p_24, struct S3 * p_385);
int32_t ** func_25(int8_t  p_26, uint32_t  p_27, uint64_t  p_28, struct S3 * p_385);
uint64_t  func_34(uint32_t  p_35, struct S0  p_36, struct S3 * p_385);
uint32_t  func_37(uint64_t  p_38, uint64_t  p_39, int32_t ** p_40, struct S3 * p_385);
int32_t ** func_41(int64_t  p_42, struct S0  p_43, int8_t  p_44, struct S3 * p_385);
int32_t ** func_54(int32_t ** p_55, struct S3 * p_385);
int32_t  func_56(int32_t ** p_57, int32_t * p_58, int32_t * p_59, struct S3 * p_385);
int16_t  func_60(int32_t * p_61, int32_t ** p_62, int8_t  p_63, int32_t ** p_64, struct S3 * p_385);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_385->g_3 p_385->l_comm_values p_385->g_78 p_385->g_comm_values p_385->g_84 p_385->g_101 p_385->g_141 p_385->g_115 p_385->g_218 p_385->g_219 p_385->g_223 p_385->g_249 p_385->g_79 p_385->g_313.f9 p_385->g_341 p_385->g_310.f0.f0 p_385->g_363 p_385->g_310.f5 p_385->g_200 p_385->g_240 p_385->g_313.f0.f0 p_385->g_310.f2.f0 p_385->g_381
 * writes: p_385->g_78 p_385->g_84 p_385->g_88 p_385->g_93 p_385->g_96 p_385->g_101 p_385->g_141 p_385->g_115 p_385->g_163 p_385->g_223 p_385->g_3 p_385->g_272.f2 p_385->g_79 p_385->g_376
 */
struct S0  func_1(struct S3 * p_385)
{ /* block id: 4 */
    int32_t *l_2 = &p_385->g_3;
    int32_t *l_4 = &p_385->g_3;
    int32_t *l_5 = &p_385->g_3;
    int32_t *l_6 = &p_385->g_3;
    int32_t *l_7 = &p_385->g_3;
    int32_t *l_8 = &p_385->g_3;
    int32_t l_9 = 1L;
    int32_t *l_10 = &l_9;
    int32_t *l_11 = &p_385->g_3;
    int32_t *l_12 = &p_385->g_3;
    int32_t *l_13[7][6] = {{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9},{&l_9,&l_9,(void*)0,&l_9,(void*)0,&l_9}};
    uint8_t l_14[7] = {0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL,0x7CL};
    uint16_t l_31 = 0xFC53L;
    int32_t ***l_92 = &p_385->g_78;
    int32_t *l_94 = (void*)0;
    int32_t *l_95 = &p_385->g_96;
    struct S0 l_97 = {-1L,0x71666784L};
    uint64_t l_255 = 0x3254CCA481A4CEB5L;
    VECTOR(int16_t, 4) l_316 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-6L)), (-6L));
    VECTOR(int16_t, 2) l_319 = (VECTOR(int16_t, 2))(0x39F0L, 0L);
    int16_t l_339 = 0x205EL;
    int64_t l_362 = (-2L);
    int16_t l_378 = 0x44D9L;
    uint32_t *l_382[7][8] = {{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1},{&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1,&p_385->g_313.f2.f1,(void*)0,(void*)0,&p_385->g_313.f2.f1}};
    uint32_t **l_383 = &l_382[4][2];
    int64_t l_384 = 0x34B9E1732B45C6E0L;
    int i, j;
    l_14[0]++;
    p_385->g_93[0] = func_17((*l_12), (((safe_mul_func_uint8_t_u_u((((*l_92) = func_22(func_25(((safe_mul_func_int8_t_s_s(((*l_4) , ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x13L, 0x36L)), ((VECTOR(int8_t, 2))(0x25L, (-6L)))))).even), ((l_31 > (safe_sub_func_uint32_t_u_u((0L && func_34(func_37(p_385->l_comm_values[(safe_mod_func_uint32_t_u_u(p_385->tid, 24))], p_385->g_3, func_41(((((((*l_95) = (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint8_t_u_u((((*l_92) = func_54(&l_10, p_385)) == (p_385->g_93[0] = &p_385->g_79[0])), p_385->g_comm_values[p_385->tid])) , 0x53L))) > 0L), (*l_4))), (*l_12)))) , (*l_92)) != &p_385->g_79[0]) <= 0L) , p_385->g_84), l_97, (*l_12), p_385), p_385), p_385->g_249, p_385)), p_385->g_218.y))) != p_385->g_249.f1))) == l_255), p_385->g_249.f0, (*l_6), p_385), &l_12, p_385)) != (void*)0), p_385->g_3)) ^ (*l_12)) && (**p_385->g_78)), p_385);
    for (p_385->g_115 = 0; (p_385->g_115 < 1); ++p_385->g_115)
    { /* block id: 164 */
        uint32_t l_301 = 7UL;
        struct S1 *l_309 = &p_385->g_310;
        int32_t l_335 = (-1L);
        VECTOR(int32_t, 2) l_371 = (VECTOR(int32_t, 2))(0x70D3EAEDL, 1L);
        int8_t *l_374 = &l_97.f0;
        uint32_t *l_375 = &p_385->g_376;
        uint16_t *l_377 = &l_31;
        int i;
        for (p_385->g_101.f5 = 25; (p_385->g_101.f5 != (-19)); p_385->g_101.f5 = safe_sub_func_uint64_t_u_u(p_385->g_101.f5, 4))
        { /* block id: 167 */
            uint64_t *l_302 = &l_255;
            int8_t *l_308 = &p_385->g_101.f0.f0;
            struct S1 **l_311 = &p_385->g_163[3][0][1];
            int32_t l_321[1][6] = {{0x7488A5B8L,0x7488A5B8L,0x7488A5B8L,0x7488A5B8L,0x7488A5B8L,0x7488A5B8L}};
            int i, j;
            l_321[0][4] ^= (((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_385->g_300.s7116714115737147)).sa2)).yxxyxyyyyyyyyyxx))).s0 >= (((l_301 , (((++(*l_302)) , (((VECTOR(int64_t, 16))((-8L), ((VECTOR(int64_t, 8))(p_385->g_305.xxyzzwzz)), 0x71E18DB2BDD87A6FL, ((safe_sub_func_int64_t_s_s(0x13FBC1D3AE5E2163L, (((*l_308) |= l_301) && (((*l_311) = l_309) != p_385->g_312)))) <= (p_385->g_101.f5 , (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_316.xzyzxyzw)).s3, (safe_mul_func_int16_t_s_s((&p_385->g_271 == &p_385->g_271), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(l_319.xyyxyyxyxyxxxxyx)).odd, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_385->g_320.s64e9a4ac59e105ea)))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))((-10L), 0x521FL)).xxyyxxxxxyyyxxxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(0L, 1L)).xyxxyxyxyxxxxxyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((9UL > (*l_12)), 0L, 1L, 0L, 0x5CF1L, 0x71CDL, 0x0CB8L, (-1L))).s3, ((VECTOR(int16_t, 2))((-5L))), 0x23ADL)).zzywwyyzwwyyxyzz, ((VECTOR(int16_t, 16))(0x11EEL))))).s539b)).odd)).xxyyxyyyxxyyxyyx))).s9aed)).yxxxxwyxwwxxzzyy))).even))).s7617634032761565)).s7)))))), (-1L), ((VECTOR(int64_t, 4))(5L)))).sb , p_385->g_313.f9)) | p_385->g_218.y)) , (void*)0) == (void*)0));
        }
        if ((**p_385->g_78))
        { /* block id: 173 */
            if ((atomic_inc(&p_385->l_atomic_input[31]) == 4))
            { /* block id: 175 */
                int32_t l_322 = 0x45B8A790L;
                int32_t *l_323 = &l_322;
                int32_t l_324 = (-4L);
                uint32_t l_325[4][6][6] = {{{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L}},{{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L}},{{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L}},{{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L},{4294967291UL,6UL,7UL,0x1DE38B37L,6UL,0x1DE38B37L}}};
                int64_t l_328 = 3L;
                uint16_t l_329 = 65535UL;
                uint32_t l_330 = 2UL;
                int i, j, k;
                l_322 = (-5L);
                l_323 = (void*)0;
                l_325[2][2][4]--;
                l_330 = (l_328 , l_329);
                unsigned int result = 0;
                result += l_322;
                result += l_324;
                int l_325_i0, l_325_i1, l_325_i2;
                for (l_325_i0 = 0; l_325_i0 < 4; l_325_i0++) {
                    for (l_325_i1 = 0; l_325_i1 < 6; l_325_i1++) {
                        for (l_325_i2 = 0; l_325_i2 < 6; l_325_i2++) {
                            result += l_325[l_325_i0][l_325_i1][l_325_i2];
                        }
                    }
                }
                result += l_328;
                result += l_329;
                result += l_330;
                atomic_add(&p_385->l_special_values[31], result);
            }
            else
            { /* block id: 180 */
                (1 + 1);
            }
        }
        else
        { /* block id: 183 */
            uint32_t l_336[3];
            int32_t *l_340 = &l_9;
            int i;
            for (i = 0; i < 3; i++)
                l_336[i] = 1UL;
            for (l_97.f0 = 0; (l_97.f0 == (-28)); --l_97.f0)
            { /* block id: 186 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_385->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[(safe_mod_func_uint32_t_u_u(0x454076ECL, 10))][(safe_mod_func_uint32_t_u_u(p_385->tid, 24))]));
                for (p_385->g_272.f2 = (-5); (p_385->g_272.f2 != 56); p_385->g_272.f2 = safe_add_func_uint64_t_u_u(p_385->g_272.f2, 7))
                { /* block id: 192 */
                    l_335 ^= (***l_92);
                    l_336[1]++;
                }
                if (l_339)
                    break;
                (**l_92) = l_340;
            }
            (*l_12) = 0x70F76432L;
        }
        l_371.y = ((*l_12) = ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(p_385->g_341.xy)).yyxxyxxxyyxyxxyx, ((VECTOR(int32_t, 4))(8L, (-1L), 0x5A4D1C13L, 0x7856934DL)).yyzxzwxxxxxwzywz, ((VECTOR(int32_t, 16))((((safe_mul_func_uint16_t_u_u(((*l_377) = (safe_sub_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_385->g_310.f0.f0, ((((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_mul_func_int16_t_s_s((-10L), (((*l_375) = (safe_div_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((~((safe_rshift_func_uint16_t_u_s(0UL, 5)) , l_362)), 8)) >= p_385->g_101.f4), 65535UL)), ((VECTOR(int8_t, 2))(p_385->g_363.yw)), 1L)).x, (safe_unary_minus_func_int8_t_s((p_385->g_101.f2.f0 , ((*l_374) = (GROUP_DIVERGE(0, 1) | (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))((-1L), (((((safe_lshift_func_int8_t_s_u(((((VECTOR(int32_t, 16))(l_371.xyyyyxyyyyyyyyyx)).s4 && (l_371.y ^ (((safe_mul_func_uint16_t_u_u(l_335, p_385->g_341.y)) == p_385->g_310.f5) , 1UL))) ^ p_385->g_200.se), l_371.x)) == 0x0A563E88AE772741L) > p_385->g_3) != p_385->g_240) >= 0L), (-1L), 9L, (-1L), (*l_11), (-9L), 1L)).s4, l_301)), l_371.y))))))))), (*l_7)))) <= 0x445BB5EEL))), p_385->g_141.f3.f1, 0xABL, 0UL, 0UL, ((VECTOR(uint8_t, 2))(0xFAL)), 252UL, 0xABL, 0x60L, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 4))(5UL)))).lo)).lo, ((VECTOR(uint8_t, 4))(0x54L))))).zxzzwywxyxzwxzww, ((VECTOR(uint8_t, 16))(0xF0L))))))).lo, ((VECTOR(uint8_t, 8))(255UL))))).s5, l_371.x)) && p_385->g_141.f8) < 0x41BC1076D39F78FCL) , p_385->g_313.f0.f0))) > (*l_7)), p_385->g_310.f2.f0))), l_371.x)) && l_378) & l_335), (*l_7), 0x746F8E3EL, (-10L), 0L, (*l_2), l_371.x, ((VECTOR(int32_t, 4))(0x10F595FEL)), (*l_2), ((VECTOR(int32_t, 2))(0x2B8844F9L)), 0x222F4AFBL, (-3L)))))).hi, ((VECTOR(int32_t, 8))(0x0B588075L))))).s6);
    }
    l_384 &= ((**p_385->g_78) = (((VECTOR(uint32_t, 16))(p_385->g_381.s5e10aec7e8ddaf3d)).s6 || (p_385->g_79[1] == ((*l_383) = l_382[4][2]))));
    return l_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_78 p_385->g_79
 * writes: p_385->g_3
 */
int32_t ** func_17(uint8_t  p_18, int64_t  p_19, struct S3 * p_385)
{ /* block id: 158 */
    int32_t l_294 = 0L;
    int32_t **l_295[10] = {&p_385->g_79[3],&p_385->g_79[0],&p_385->g_79[3],&p_385->g_79[3],&p_385->g_79[0],&p_385->g_79[3],&p_385->g_79[3],&p_385->g_79[0],&p_385->g_79[3],&p_385->g_79[3]};
    int i;
    (**p_385->g_78) = (safe_lshift_func_uint8_t_u_s(l_294, 1));
    return l_295[9];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_22(int32_t ** p_23, int32_t ** p_24, struct S3 * p_385)
{ /* block id: 154 */
    uint32_t l_290 = 0UL;
    int32_t **l_291 = &p_385->g_79[0];
    l_290 |= (-1L);
    return l_291;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t ** func_25(int8_t  p_26, uint32_t  p_27, uint64_t  p_28, struct S3 * p_385)
{ /* block id: 135 */
    int32_t l_268 = (-1L);
    union U2 *l_269 = (void*)0;
    union U2 *l_273 = (void*)0;
    int32_t l_274 = 5L;
    int32_t *l_275 = &p_385->g_115;
    int32_t l_276[8] = {(-1L),0x4E232310L,(-1L),(-1L),0x4E232310L,(-1L),(-1L),0x4E232310L};
    int32_t *l_277 = &p_385->g_115;
    int32_t *l_278 = &l_276[1];
    int32_t *l_279 = (void*)0;
    int32_t *l_280 = (void*)0;
    int32_t *l_281[8][5] = {{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0},{(void*)0,&l_276[1],&l_276[1],(void*)0,(void*)0}};
    int32_t l_282[2][8] = {{0x2337BE4DL,0x1EE3A12CL,(-3L),0x1EE3A12CL,0x2337BE4DL,0x2337BE4DL,0x1EE3A12CL,(-3L)},{0x2337BE4DL,0x1EE3A12CL,(-3L),0x1EE3A12CL,0x2337BE4DL,0x2337BE4DL,0x1EE3A12CL,(-3L)}};
    int16_t l_283 = (-8L);
    int32_t l_285 = (-1L);
    int32_t l_286 = 0x3B10A9F4L;
    uint32_t l_287 = 0x9298F746L;
    int i, j;
    if ((atomic_inc(&p_385->g_atomic_input[48 * get_linear_group_id() + 15]) == 4))
    { /* block id: 137 */
        int32_t l_256 = (-9L);
        VECTOR(int32_t, 16) l_266 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x411244D6L), 0x411244D6L), 0x411244D6L, 0L, 0x411244D6L, (VECTOR(int32_t, 2))(0L, 0x411244D6L), (VECTOR(int32_t, 2))(0L, 0x411244D6L), 0L, 0x411244D6L, 0L, 0x411244D6L);
        int64_t l_267 = 1L;
        int i;
        for (l_256 = (-5); (l_256 <= 29); l_256 = safe_add_func_int16_t_s_s(l_256, 7))
        { /* block id: 140 */
            int16_t l_259 = 0L;
            int32_t l_261 = 0L;
            int32_t *l_260 = &l_261;
            int32_t *l_262[4][5][4] = {{{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0}},{{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0}},{{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0}},{{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0},{&l_261,(void*)0,&l_261,(void*)0}}};
            int8_t l_263[2];
            struct S0 l_264[7][9][4] = {{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}},{{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}},{{0x56L,0x8116AEC9L},{0x49L,0xDCF6CB5FL},{0L,0xE2A8F953L},{0x34L,0x0046D7A7L}}}};
            struct S0 l_265 = {0x2EL,1UL};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_263[i] = 0L;
            l_262[1][1][1] = (l_259 , (l_260 = (void*)0));
            l_263[1] ^= (-2L);
            l_265 = l_264[6][8][2];
        }
        l_267 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_266.sbb534f3b)).s6604704175367615)).s0;
        unsigned int result = 0;
        result += l_256;
        result += l_266.sf;
        result += l_266.se;
        result += l_266.sd;
        result += l_266.sc;
        result += l_266.sb;
        result += l_266.sa;
        result += l_266.s9;
        result += l_266.s8;
        result += l_266.s7;
        result += l_266.s6;
        result += l_266.s5;
        result += l_266.s4;
        result += l_266.s3;
        result += l_266.s2;
        result += l_266.s1;
        result += l_266.s0;
        result += l_267;
        atomic_add(&p_385->g_special_values[48 * get_linear_group_id() + 15], result);
    }
    else
    { /* block id: 147 */
        (1 + 1);
    }
    l_268 ^= 0x0400582BL;
    l_273 = l_269;
    --l_287;
    return &p_385->g_79[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_78
 * writes:
 */
uint64_t  func_34(uint32_t  p_35, struct S0  p_36, struct S3 * p_385)
{ /* block id: 129 */
    int64_t l_250[3][4];
    int32_t *l_251 = (void*)0;
    int32_t *l_252[4];
    uint8_t l_253 = 0xC0L;
    uint32_t l_254[8][4][2] = {{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}},{{1UL,6UL},{1UL,6UL},{1UL,6UL},{1UL,6UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_250[i][j] = 0x3042CCA94956CA15L;
    }
    for (i = 0; i < 4; i++)
        l_252[i] = (void*)0;
    l_254[2][1][1] = (l_253 = l_250[0][0]);
    (*p_385->g_78) = l_252[0];
    (*p_385->g_78) = l_252[0];
    return p_36.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_78 p_385->g_141 p_385->g_115 p_385->g_101.f9 p_385->g_101.f4 p_385->g_101.f5 p_385->g_218 p_385->g_219 p_385->g_223 p_385->g_comm_values
 * writes: p_385->g_141 p_385->g_115 p_385->g_101.f4 p_385->g_163 p_385->g_96 p_385->g_84 p_385->g_223
 */
uint32_t  func_37(uint64_t  p_38, uint64_t  p_39, int32_t ** p_40, struct S3 * p_385)
{ /* block id: 39 */
    int32_t *l_114 = &p_385->g_115;
    int32_t *l_116 = &p_385->g_115;
    int32_t *l_117 = &p_385->g_115;
    int32_t l_118 = 0x192C773CL;
    int32_t l_119 = 0L;
    int32_t *l_120 = &l_118;
    int32_t *l_121 = &l_119;
    int32_t *l_122[5] = {&l_118,&l_118,&l_118,&l_118,&l_118};
    int8_t l_123 = 0x05L;
    int32_t l_124 = 1L;
    int64_t l_125 = (-1L);
    int16_t l_126[4][9][1] = {{{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)}},{{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)}},{{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)}},{{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)},{(-8L)}}};
    int32_t l_127 = 0x5B778E50L;
    uint32_t l_128 = 0UL;
    int16_t l_173 = (-9L);
    struct S1 *l_196 = (void*)0;
    int i, j, k;
    l_128++;
    (*l_121) = 0x62B0B001L;
    for (l_128 = 0; (l_128 > 34); l_128++)
    { /* block id: 44 */
        uint8_t l_133 = 1UL;
        int32_t l_152 = 1L;
        struct S1 *l_162 = &p_385->g_101;
        uint64_t l_172 = 0x03745B357F9CDE62L;
        int32_t l_179 = 0x499AF200L;
        int32_t l_181[3][1];
        VECTOR(int32_t, 4) l_192 = (VECTOR(int32_t, 4))(0x245CCDECL, (VECTOR(int32_t, 2))(0x245CCDECL, 6L), 6L);
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_181[i][j] = 1L;
        }
        ++l_133;
        for (l_118 = (-17); (l_118 != 16); l_118 = safe_add_func_int32_t_s_s(l_118, 8))
        { /* block id: 48 */
            uint8_t l_138 = 0x33L;
            int32_t l_174[9];
            int32_t l_182 = 0x27E377B8L;
            uint64_t *l_190[8] = {&p_385->g_84,&p_385->g_84,&p_385->g_84,&p_385->g_84,&p_385->g_84,&p_385->g_84,&p_385->g_84,&p_385->g_84};
            VECTOR(uint32_t, 4) l_195 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xFC9AF348L), 0xFC9AF348L);
            int32_t l_209 = (-1L);
            uint8_t l_246 = 1UL;
            int i;
            for (i = 0; i < 9; i++)
                l_174[i] = 0L;
            l_138++;
            (*p_385->g_78) = (void*)0;
            if (p_38)
            { /* block id: 51 */
                volatile struct S1 *l_142 = &p_385->g_141;
                int32_t *l_145 = &l_119;
                (*l_142) = p_385->g_141;
                for (p_39 = 28; (p_39 <= 53); p_39 = safe_add_func_int8_t_s_s(p_39, 1))
                { /* block id: 55 */
                    if (p_39)
                        break;
                    l_145 = l_145;
                }
                (*l_116) |= ((safe_unary_minus_func_uint32_t_u(p_385->g_141.f0.f1)) > GROUP_DIVERGE(2, 1));
            }
            else
            { /* block id: 60 */
                uint32_t l_153 = 4294967290UL;
                VECTOR(uint8_t, 2) l_171 = (VECTOR(uint8_t, 2))(0x2AL, 0UL);
                int32_t l_175 = 0x051CDA06L;
                int32_t l_177 = (-1L);
                int32_t l_178 = 0x41797A03L;
                int32_t l_180[4][10] = {{0x7F900F8BL,1L,6L,1L,0x7F900F8BL,0x7F900F8BL,1L,6L,1L,0x7F900F8BL},{0x7F900F8BL,1L,6L,1L,0x7F900F8BL,0x7F900F8BL,1L,6L,1L,0x7F900F8BL},{0x7F900F8BL,1L,6L,1L,0x7F900F8BL,0x7F900F8BL,1L,6L,1L,0x7F900F8BL},{0x7F900F8BL,1L,6L,1L,0x7F900F8BL,0x7F900F8BL,1L,6L,1L,0x7F900F8BL}};
                uint32_t l_183 = 0UL;
                VECTOR(uint32_t, 16) l_191 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x0B42B693L), 0x0B42B693L), 0x0B42B693L, 8UL, 0x0B42B693L, (VECTOR(uint32_t, 2))(8UL, 0x0B42B693L), (VECTOR(uint32_t, 2))(8UL, 0x0B42B693L), 8UL, 0x0B42B693L, 8UL, 0x0B42B693L);
                int32_t *l_208[9][9] = {{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182},{&l_182,&l_127,&p_385->g_96,&l_182,(void*)0,&l_182,&p_385->g_96,&l_127,&l_182}};
                VECTOR(uint16_t, 8) l_220 = (VECTOR(uint16_t, 8))(0xA12FL, (VECTOR(uint16_t, 4))(0xA12FL, (VECTOR(uint16_t, 2))(0xA12FL, 0x405FL), 0x405FL), 0x405FL, 0xA12FL, 0x405FL);
                int i, j;
                for (p_38 = 0; (p_38 == 23); p_38 = safe_add_func_uint16_t_u_u(p_38, 1))
                { /* block id: 63 */
                    uint64_t l_149 = 0UL;
                    struct S1 *l_170 = &p_385->g_101;
                    l_149 |= (~((VECTOR(int32_t, 2))((-2L), 0x53C6D8B2L)).odd);
                    for (p_385->g_101.f4 = 0; (p_385->g_101.f4 < 60); p_385->g_101.f4++)
                    { /* block id: 67 */
                        int i, j;
                        if (p_39)
                            break;
                        ++l_153;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_385->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[(safe_mod_func_uint32_t_u_u(0x6F79C2ECL, 10))][(safe_mod_func_uint32_t_u_u(p_385->tid, 24))]));
                    }
                    if ((l_175 &= (l_174[5] = ((*l_114) = (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((GROUP_DIVERGE(2, 1) != l_153) > ((safe_mul_func_uint16_t_u_u(((void*)0 != l_162), (p_39 > (((p_385->g_163[3][0][1] = &p_385->g_101) == (void*)0) || (safe_sub_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u((((VECTOR(int8_t, 16))((((p_38 , l_170) != &p_385->g_101) , 0x06L), l_171.y, ((VECTOR(int8_t, 2))(6L)), (-4L), 0x79L, 1L, ((VECTOR(int8_t, 2))((-2L))), ((VECTOR(int8_t, 2))(0x11L)), p_385->g_141.f8, l_172, 1L, 8L, (-4L))).s9 | p_38), p_39)) || l_149) || l_171.y), GROUP_DIVERGE(1, 1))), l_173)))))) < 0x780BL)), p_39)), p_385->g_101.f9)) ^ p_385->g_101.f4) < (-1L))))))
                    { /* block id: 78 */
                        (*p_385->g_78) = (void*)0;
                    }
                    else
                    { /* block id: 80 */
                        uint8_t l_176 = 252UL;
                        if (l_176)
                            break;
                    }
                }
                ++l_183;
                for (p_385->g_96 = (-28); (p_385->g_96 <= (-14)); p_385->g_96 = safe_add_func_uint32_t_u_u(p_385->g_96, 1))
                { /* block id: 87 */
                    int32_t *l_206[5] = {&l_182,&l_182,&l_182,&l_182,&l_182};
                    int32_t l_212 = (-5L);
                    int16_t l_213[7];
                    int8_t **l_224 = &p_385->g_223;
                    int8_t *l_226[4][2][4] = {{{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0},{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0}},{{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0},{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0}},{{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0},{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0}},{{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0},{&p_385->g_101.f0.f0,&l_123,&p_385->g_101.f0.f0,&p_385->g_101.f0.f0}}};
                    int8_t **l_225 = &l_226[3][0][3];
                    uint8_t *l_231[1];
                    uint32_t *l_232 = &l_153;
                    uint16_t *l_239[4][2][4];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_213[i] = 0x1447L;
                    for (i = 0; i < 1; i++)
                        l_231[i] = &l_138;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_239[i][j][k] = &p_385->g_240;
                        }
                    }
                    for (p_385->g_84 = 7; (p_385->g_84 > 3); --p_385->g_84)
                    { /* block id: 90 */
                        struct S1 **l_197 = &p_385->g_163[3][0][1];
                        int32_t **l_207 = &l_206[1];
                        int8_t *l_210 = (void*)0;
                        int8_t *l_211 = &l_123;
                        uint32_t *l_214 = (void*)0;
                        uint32_t *l_215 = &l_183;
                        if (p_39)
                            break;
                        (*l_121) |= (l_190[6] == (((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(l_191.sb70fbf4b7db3398e)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(l_192.zxwzzwwwxxxwwxwy)).sf5))).xxxx)).yxyyxzzz))).s7 , (void*)0));
                        l_174[4] = ((p_385->g_141.f6 == ((FAKE_DIVERGE(p_385->group_2_offset, get_group_id(2), 10) != ((void*)0 == &l_124)) >= (((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_195.xxzwxxwzzzzzyyzw)).sc1)))))).yxxyxyyxxxyxxyxx, ((VECTOR(uint32_t, 16))(0xEE16EF41L, (~((((*l_197) = l_196) != (((*l_215) = (safe_mod_func_uint16_t_u_u((p_38 >= ((p_385->g_101.f0.f0 || ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))((-10L), (-5L))).xyxyyyyx, ((VECTOR(int8_t, 2))(0x5DL, 0x48L)).yxxyyxyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_385->g_200.s20e179949b4f073f)).sffa6)).yyyxzyxz))).s2) && ((safe_mul_func_int8_t_s_s(p_39, (((VECTOR(uint8_t, 8))(p_385->g_203.s74104626)).s7 >= ((*l_211) = (p_385->g_101.f2.f0 &= (l_174[8] > (l_209 = ((*l_116) ^= ((*l_121) = (((safe_lshift_func_uint8_t_u_s((((*l_207) = l_206[3]) != l_208[0][0]), p_38)) ^ 0xC26506CFL) ^ p_385->g_comm_values[p_385->tid])))))))))) ^ l_212))), l_213[4]))) , l_196)) ^ 0x46L)), ((VECTOR(uint32_t, 4))(0x9E747BB8L)), l_180[3][0], ((VECTOR(uint32_t, 8))(0x752941ABL)), 0x35029D74L)), ((VECTOR(uint32_t, 16))(0x1FDCF0F1L))))).s0 < l_174[1]))) == p_38);
                        (*p_385->g_78) = &l_174[5];
                    }
                    for (l_175 = 0; (l_175 >= (-28)); l_175 = safe_sub_func_int64_t_s_s(l_175, 8))
                    { /* block id: 106 */
                        return p_385->g_101.f5;
                    }
                    if (((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x3700E47CL, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x3A200067L, 0x2BEE661AL)), ((VECTOR(int32_t, 2))(p_385->g_218.xx)), ((VECTOR(int32_t, 4))((((VECTOR(uint8_t, 8))(p_385->g_219.s44232013)).s5 < (((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(1L, (-7L))).xxyxyyyx, ((VECTOR(uint16_t, 4))(6UL, ((VECTOR(uint16_t, 2))(l_220.s65)), 2UL)).zwxzyxwx))).s4 != (((safe_add_func_uint8_t_u_u(p_38, (((*l_225) = ((*l_224) = p_385->g_223)) == (void*)0))) < ((~((*l_232) |= (((*l_116) = (safe_lshift_func_uint16_t_u_u(p_39, 0))) & GROUP_DIVERGE(1, 1)))) > (((safe_rshift_func_int16_t_s_s(((1L < (p_385->g_comm_values[p_385->tid] > (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_39, 2)), 0x1AB6L)))) > (l_209 = p_38)), 11)) | 0xC5951356L) >= p_39))) != 0xAA446003412AC16EL))), ((VECTOR(int32_t, 2))(0x458C416EL)), 8L)).even))), 0x30BE3127L)).hi)).xxxxyxyxyyyyyyyx))).se)
                    { /* block id: 114 */
                        l_180[1][6] = 0x47F2ABCDL;
                    }
                    else
                    { /* block id: 116 */
                        uint16_t l_243[5] = {0xEE79L,0xEE79L,0xEE79L,0xEE79L,0xEE79L};
                        int i;
                        if (l_191.sa)
                            break;
                        (*l_116) = (safe_rshift_func_int16_t_s_u(p_39, 5));
                        l_243[4]--;
                        if (l_174[5])
                            continue;
                    }
                }
            }
            ++l_246;
        }
        if ((*l_116))
            break;
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_78 p_385->g_101
 * writes: p_385->g_101
 */
int32_t ** func_41(int64_t  p_42, struct S0  p_43, int8_t  p_44, struct S3 * p_385)
{ /* block id: 23 */
    int32_t **l_113 = (void*)0;
    for (p_44 = 0; (p_44 >= 29); ++p_44)
    { /* block id: 26 */
        int32_t ***l_100[4];
        struct S1 *l_102 = &p_385->g_101;
        int i;
        for (i = 0; i < 4; i++)
            l_100[i] = (void*)0;
        (**p_385->g_78) = ((void*)0 == l_100[0]);
        (*l_102) = p_385->g_101;
        if ((atomic_inc(&p_385->l_atomic_input[44]) == 0))
        { /* block id: 30 */
            uint64_t l_103 = 2UL;
            int32_t l_105 = 0x41EA34FDL;
            int32_t *l_104 = &l_105;
            int32_t *l_106 = &l_105;
            int32_t *l_107 = &l_105;
            int32_t *l_108 = &l_105;
            int64_t l_109 = 1L;
            uint16_t l_110 = 65527UL;
            l_106 = (l_103 , l_104);
            l_108 = l_107;
            l_110--;
            unsigned int result = 0;
            result += l_103;
            result += l_105;
            result += l_109;
            result += l_110;
            atomic_add(&p_385->l_special_values[44], result);
        }
        else
        { /* block id: 34 */
            (1 + 1);
        }
    }
    return l_113;
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_3 p_385->g_78 p_385->l_comm_values p_385->g_comm_values p_385->g_84
 * writes: p_385->g_78 p_385->g_84 p_385->g_88
 */
int32_t ** func_54(int32_t ** p_55, struct S3 * p_385)
{ /* block id: 6 */
    VECTOR(int64_t, 4) l_65 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
    int32_t *l_67 = &p_385->g_3;
    int32_t **l_66 = &l_67;
    int32_t ***l_80 = &p_385->g_78;
    int32_t **l_81[10][4][4] = {{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}},{{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67},{&p_385->g_79[3],&p_385->g_79[0],(void*)0,&l_67}}};
    VECTOR(uint32_t, 2) l_82 = (VECTOR(uint32_t, 2))(0xF7513D96L, 3UL);
    uint64_t *l_83 = &p_385->g_84;
    int32_t ****l_87[1][2][10] = {{{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80},{&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80}}};
    uint32_t l_89 = 0xC94FE33CL;
    int i, j, k;
    (**p_55) = func_56((((*l_83) |= (func_60((*p_55), (((VECTOR(int64_t, 16))(l_65.zyywywzwwwyxyxyz)).s7 , l_66), (safe_sub_func_uint32_t_u_u((((**l_66) > ((0x10L | 6L) > ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((**l_66) > (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((**l_66), 10)) | ((((((VECTOR(int8_t, 8))((-1L), (((*l_80) = p_385->g_78) != (l_81[4][2][0] = p_55)), 0L, 4L, 0x35L, ((VECTOR(int8_t, 2))(0x00L)), (-2L))).s5 >= (*l_67)) > p_385->l_comm_values[(safe_mod_func_uint32_t_u_u(p_385->tid, 24))]) < (**l_66)) & 0x5F13F3F2L)), (*l_67)))) >= (**l_66)) || p_385->g_3), p_385->g_comm_values[p_385->tid])), l_82.x)) < p_385->g_3))) && (**p_55)), (**p_55))), &l_67, p_385) <= 0x6F21L)) , p_55), &p_385->g_3, (*l_66), p_385);
    (**p_55) = (safe_lshift_func_int16_t_s_s((p_385->g_3 , (FAKE_DIVERGE(p_385->group_1_offset, get_group_id(1), 10) != (FAKE_DIVERGE(p_385->group_1_offset, get_group_id(1), 10) >= (&p_55 == (p_385->g_88 = &l_81[2][0][3]))))), 6));
    --l_89;
    return p_55;
}


/* ------------------------------------------ */
/* 
 * reads : p_385->g_3 l_10 l_9
 * writes: l_9
 */
int32_t  func_56(int32_t ** p_57, int32_t * p_58, int32_t * p_59, struct S3 * p_385)
{ /* block id: 12 */
    (**p_57) |= (*p_58);
    return (*p_59);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_60(int32_t * p_61, int32_t ** p_62, int8_t  p_63, int32_t ** p_64, struct S3 * p_385)
{ /* block id: 9 */
    return p_63;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[48];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 48; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[24];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 24; i++)
            l_comm_values[i] = 1;
    struct S3 c_386;
    struct S3* p_385 = &c_386;
    struct S3 c_387 = {
        0L, // p_385->g_3
        {&p_385->g_3,&p_385->g_3,&p_385->g_3,&p_385->g_3}, // p_385->g_79
        &p_385->g_79[0], // p_385->g_78
        0xE94942BEBA84720AL, // p_385->g_84
        &p_385->g_78, // p_385->g_88
        {(void*)0}, // p_385->g_93
        (-10L), // p_385->g_96
        {{0x08L,2UL},5UL,{1L,0x78C483DFL},{0x23L,0x19F56D68L},0x9CL,1L,-2L,0x5C7B32EC46842B3FL,0x87B302CBL,4294967286UL}, // p_385->g_101
        (-3L), // p_385->g_115
        {{-1L,0UL},18446744073709551614UL,{0L,0x07D2D848L},{1L,0x0B201384L},0UL,0x5096FAD9A2AEA371L,0L,-1L,4294967291UL,0UL}, // p_385->g_141
        {{{&p_385->g_101,&p_385->g_101}},{{&p_385->g_101,&p_385->g_101}},{{&p_385->g_101,&p_385->g_101}},{{&p_385->g_101,&p_385->g_101}},{{&p_385->g_101,&p_385->g_101}}}, // p_385->g_163
        (VECTOR(int8_t, 16))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x11L), 0x11L), 0x11L, 0x50L, 0x11L, (VECTOR(int8_t, 2))(0x50L, 0x11L), (VECTOR(int8_t, 2))(0x50L, 0x11L), 0x50L, 0x11L, 0x50L, 0x11L), // p_385->g_200
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL), // p_385->g_203
        (VECTOR(int32_t, 2))(1L, 0x2FEF980BL), // p_385->g_218
        (VECTOR(uint8_t, 8))(0xBDL, (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 0x51L), 0x51L), 0x51L, 0xBDL, 0x51L), // p_385->g_219
        (void*)0, // p_385->g_223
        0x31C7L, // p_385->g_240
        {0x6EL,0xF9E39800L}, // p_385->g_249
        {0x61B2L}, // p_385->g_272
        &p_385->g_272, // p_385->g_271
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_385->g_270
        0L, // p_385->g_284
        (VECTOR(uint64_t, 8))(0x9D63D44AFADEB7AFL, (VECTOR(uint64_t, 4))(0x9D63D44AFADEB7AFL, (VECTOR(uint64_t, 2))(0x9D63D44AFADEB7AFL, 0x7484187CCFE374C4L), 0x7484187CCFE374C4L), 0x7484187CCFE374C4L, 0x9D63D44AFADEB7AFL, 0x7484187CCFE374C4L), // p_385->g_300
        (VECTOR(int64_t, 4))(0x39C0E08F3CAAF556L, (VECTOR(int64_t, 2))(0x39C0E08F3CAAF556L, (-1L)), (-1L)), // p_385->g_305
        {{0x7DL,0UL},0x1317378FAE77A61DL,{0L,4294967286UL},{0x15L,0UL},0xA1L,0x3BFCFBDA3A3E9E86L,0x4DC55534L,0x4D6729FBCA9A8349L,3UL,0x9D77180EL}, // p_385->g_310
        {{0x18L,0xC484A317L},0x3A7620C6CBE86884L,{-2L,0x843B1B65L},{6L,4294967293UL},0x43L,-1L,-3L,0x0EC9D7C94A8C7270L,4294967290UL,0UL}, // p_385->g_313
        &p_385->g_313, // p_385->g_312
        (VECTOR(int16_t, 16))(0x6746L, (VECTOR(int16_t, 4))(0x6746L, (VECTOR(int16_t, 2))(0x6746L, (-1L)), (-1L)), (-1L), 0x6746L, (-1L), (VECTOR(int16_t, 2))(0x6746L, (-1L)), (VECTOR(int16_t, 2))(0x6746L, (-1L)), 0x6746L, (-1L), 0x6746L, (-1L)), // p_385->g_320
        (VECTOR(int32_t, 2))(0x0B7B1764L, 1L), // p_385->g_341
        (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0L), 0L), // p_385->g_363
        0x39A690A1L, // p_385->g_376
        (VECTOR(uint32_t, 16))(0x40E1DD6DL, (VECTOR(uint32_t, 4))(0x40E1DD6DL, (VECTOR(uint32_t, 2))(0x40E1DD6DL, 0xFB65A3C7L), 0xFB65A3C7L), 0xFB65A3C7L, 0x40E1DD6DL, 0xFB65A3C7L, (VECTOR(uint32_t, 2))(0x40E1DD6DL, 0xFB65A3C7L), (VECTOR(uint32_t, 2))(0x40E1DD6DL, 0xFB65A3C7L), 0x40E1DD6DL, 0xFB65A3C7L, 0x40E1DD6DL, 0xFB65A3C7L), // p_385->g_381
        0, // p_385->v_collective
        sequence_input[get_global_id(0)], // p_385->global_0_offset
        sequence_input[get_global_id(1)], // p_385->global_1_offset
        sequence_input[get_global_id(2)], // p_385->global_2_offset
        sequence_input[get_local_id(0)], // p_385->local_0_offset
        sequence_input[get_local_id(1)], // p_385->local_1_offset
        sequence_input[get_local_id(2)], // p_385->local_2_offset
        sequence_input[get_group_id(0)], // p_385->group_0_offset
        sequence_input[get_group_id(1)], // p_385->group_1_offset
        sequence_input[get_group_id(2)], // p_385->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 24)), permutations[0][get_linear_local_id()])), // p_385->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_386 = c_387;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_385);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_385->g_3, "p_385->g_3", print_hash_value);
    transparent_crc(p_385->g_84, "p_385->g_84", print_hash_value);
    transparent_crc(p_385->g_96, "p_385->g_96", print_hash_value);
    transparent_crc(p_385->g_101.f0.f0, "p_385->g_101.f0.f0", print_hash_value);
    transparent_crc(p_385->g_101.f0.f1, "p_385->g_101.f0.f1", print_hash_value);
    transparent_crc(p_385->g_101.f1, "p_385->g_101.f1", print_hash_value);
    transparent_crc(p_385->g_101.f2.f0, "p_385->g_101.f2.f0", print_hash_value);
    transparent_crc(p_385->g_101.f2.f1, "p_385->g_101.f2.f1", print_hash_value);
    transparent_crc(p_385->g_101.f3.f0, "p_385->g_101.f3.f0", print_hash_value);
    transparent_crc(p_385->g_101.f3.f1, "p_385->g_101.f3.f1", print_hash_value);
    transparent_crc(p_385->g_101.f4, "p_385->g_101.f4", print_hash_value);
    transparent_crc(p_385->g_101.f5, "p_385->g_101.f5", print_hash_value);
    transparent_crc(p_385->g_101.f6, "p_385->g_101.f6", print_hash_value);
    transparent_crc(p_385->g_101.f7, "p_385->g_101.f7", print_hash_value);
    transparent_crc(p_385->g_101.f8, "p_385->g_101.f8", print_hash_value);
    transparent_crc(p_385->g_101.f9, "p_385->g_101.f9", print_hash_value);
    transparent_crc(p_385->g_115, "p_385->g_115", print_hash_value);
    transparent_crc(p_385->g_141.f0.f0, "p_385->g_141.f0.f0", print_hash_value);
    transparent_crc(p_385->g_141.f0.f1, "p_385->g_141.f0.f1", print_hash_value);
    transparent_crc(p_385->g_141.f1, "p_385->g_141.f1", print_hash_value);
    transparent_crc(p_385->g_141.f2.f0, "p_385->g_141.f2.f0", print_hash_value);
    transparent_crc(p_385->g_141.f2.f1, "p_385->g_141.f2.f1", print_hash_value);
    transparent_crc(p_385->g_141.f3.f0, "p_385->g_141.f3.f0", print_hash_value);
    transparent_crc(p_385->g_141.f3.f1, "p_385->g_141.f3.f1", print_hash_value);
    transparent_crc(p_385->g_141.f4, "p_385->g_141.f4", print_hash_value);
    transparent_crc(p_385->g_141.f5, "p_385->g_141.f5", print_hash_value);
    transparent_crc(p_385->g_141.f6, "p_385->g_141.f6", print_hash_value);
    transparent_crc(p_385->g_141.f7, "p_385->g_141.f7", print_hash_value);
    transparent_crc(p_385->g_141.f8, "p_385->g_141.f8", print_hash_value);
    transparent_crc(p_385->g_141.f9, "p_385->g_141.f9", print_hash_value);
    transparent_crc(p_385->g_200.s0, "p_385->g_200.s0", print_hash_value);
    transparent_crc(p_385->g_200.s1, "p_385->g_200.s1", print_hash_value);
    transparent_crc(p_385->g_200.s2, "p_385->g_200.s2", print_hash_value);
    transparent_crc(p_385->g_200.s3, "p_385->g_200.s3", print_hash_value);
    transparent_crc(p_385->g_200.s4, "p_385->g_200.s4", print_hash_value);
    transparent_crc(p_385->g_200.s5, "p_385->g_200.s5", print_hash_value);
    transparent_crc(p_385->g_200.s6, "p_385->g_200.s6", print_hash_value);
    transparent_crc(p_385->g_200.s7, "p_385->g_200.s7", print_hash_value);
    transparent_crc(p_385->g_200.s8, "p_385->g_200.s8", print_hash_value);
    transparent_crc(p_385->g_200.s9, "p_385->g_200.s9", print_hash_value);
    transparent_crc(p_385->g_200.sa, "p_385->g_200.sa", print_hash_value);
    transparent_crc(p_385->g_200.sb, "p_385->g_200.sb", print_hash_value);
    transparent_crc(p_385->g_200.sc, "p_385->g_200.sc", print_hash_value);
    transparent_crc(p_385->g_200.sd, "p_385->g_200.sd", print_hash_value);
    transparent_crc(p_385->g_200.se, "p_385->g_200.se", print_hash_value);
    transparent_crc(p_385->g_200.sf, "p_385->g_200.sf", print_hash_value);
    transparent_crc(p_385->g_203.s0, "p_385->g_203.s0", print_hash_value);
    transparent_crc(p_385->g_203.s1, "p_385->g_203.s1", print_hash_value);
    transparent_crc(p_385->g_203.s2, "p_385->g_203.s2", print_hash_value);
    transparent_crc(p_385->g_203.s3, "p_385->g_203.s3", print_hash_value);
    transparent_crc(p_385->g_203.s4, "p_385->g_203.s4", print_hash_value);
    transparent_crc(p_385->g_203.s5, "p_385->g_203.s5", print_hash_value);
    transparent_crc(p_385->g_203.s6, "p_385->g_203.s6", print_hash_value);
    transparent_crc(p_385->g_203.s7, "p_385->g_203.s7", print_hash_value);
    transparent_crc(p_385->g_218.x, "p_385->g_218.x", print_hash_value);
    transparent_crc(p_385->g_218.y, "p_385->g_218.y", print_hash_value);
    transparent_crc(p_385->g_219.s0, "p_385->g_219.s0", print_hash_value);
    transparent_crc(p_385->g_219.s1, "p_385->g_219.s1", print_hash_value);
    transparent_crc(p_385->g_219.s2, "p_385->g_219.s2", print_hash_value);
    transparent_crc(p_385->g_219.s3, "p_385->g_219.s3", print_hash_value);
    transparent_crc(p_385->g_219.s4, "p_385->g_219.s4", print_hash_value);
    transparent_crc(p_385->g_219.s5, "p_385->g_219.s5", print_hash_value);
    transparent_crc(p_385->g_219.s6, "p_385->g_219.s6", print_hash_value);
    transparent_crc(p_385->g_219.s7, "p_385->g_219.s7", print_hash_value);
    transparent_crc(p_385->g_240, "p_385->g_240", print_hash_value);
    transparent_crc(p_385->g_249.f0, "p_385->g_249.f0", print_hash_value);
    transparent_crc(p_385->g_249.f1, "p_385->g_249.f1", print_hash_value);
    transparent_crc(p_385->g_284, "p_385->g_284", print_hash_value);
    transparent_crc(p_385->g_300.s0, "p_385->g_300.s0", print_hash_value);
    transparent_crc(p_385->g_300.s1, "p_385->g_300.s1", print_hash_value);
    transparent_crc(p_385->g_300.s2, "p_385->g_300.s2", print_hash_value);
    transparent_crc(p_385->g_300.s3, "p_385->g_300.s3", print_hash_value);
    transparent_crc(p_385->g_300.s4, "p_385->g_300.s4", print_hash_value);
    transparent_crc(p_385->g_300.s5, "p_385->g_300.s5", print_hash_value);
    transparent_crc(p_385->g_300.s6, "p_385->g_300.s6", print_hash_value);
    transparent_crc(p_385->g_300.s7, "p_385->g_300.s7", print_hash_value);
    transparent_crc(p_385->g_305.x, "p_385->g_305.x", print_hash_value);
    transparent_crc(p_385->g_305.y, "p_385->g_305.y", print_hash_value);
    transparent_crc(p_385->g_305.z, "p_385->g_305.z", print_hash_value);
    transparent_crc(p_385->g_305.w, "p_385->g_305.w", print_hash_value);
    transparent_crc(p_385->g_310.f0.f0, "p_385->g_310.f0.f0", print_hash_value);
    transparent_crc(p_385->g_310.f0.f1, "p_385->g_310.f0.f1", print_hash_value);
    transparent_crc(p_385->g_310.f1, "p_385->g_310.f1", print_hash_value);
    transparent_crc(p_385->g_310.f2.f0, "p_385->g_310.f2.f0", print_hash_value);
    transparent_crc(p_385->g_310.f2.f1, "p_385->g_310.f2.f1", print_hash_value);
    transparent_crc(p_385->g_310.f3.f0, "p_385->g_310.f3.f0", print_hash_value);
    transparent_crc(p_385->g_310.f3.f1, "p_385->g_310.f3.f1", print_hash_value);
    transparent_crc(p_385->g_310.f4, "p_385->g_310.f4", print_hash_value);
    transparent_crc(p_385->g_310.f5, "p_385->g_310.f5", print_hash_value);
    transparent_crc(p_385->g_310.f6, "p_385->g_310.f6", print_hash_value);
    transparent_crc(p_385->g_310.f7, "p_385->g_310.f7", print_hash_value);
    transparent_crc(p_385->g_310.f8, "p_385->g_310.f8", print_hash_value);
    transparent_crc(p_385->g_310.f9, "p_385->g_310.f9", print_hash_value);
    transparent_crc(p_385->g_313.f0.f0, "p_385->g_313.f0.f0", print_hash_value);
    transparent_crc(p_385->g_313.f0.f1, "p_385->g_313.f0.f1", print_hash_value);
    transparent_crc(p_385->g_313.f1, "p_385->g_313.f1", print_hash_value);
    transparent_crc(p_385->g_313.f2.f0, "p_385->g_313.f2.f0", print_hash_value);
    transparent_crc(p_385->g_313.f2.f1, "p_385->g_313.f2.f1", print_hash_value);
    transparent_crc(p_385->g_313.f3.f0, "p_385->g_313.f3.f0", print_hash_value);
    transparent_crc(p_385->g_313.f3.f1, "p_385->g_313.f3.f1", print_hash_value);
    transparent_crc(p_385->g_313.f4, "p_385->g_313.f4", print_hash_value);
    transparent_crc(p_385->g_313.f5, "p_385->g_313.f5", print_hash_value);
    transparent_crc(p_385->g_313.f6, "p_385->g_313.f6", print_hash_value);
    transparent_crc(p_385->g_313.f7, "p_385->g_313.f7", print_hash_value);
    transparent_crc(p_385->g_313.f8, "p_385->g_313.f8", print_hash_value);
    transparent_crc(p_385->g_313.f9, "p_385->g_313.f9", print_hash_value);
    transparent_crc(p_385->g_320.s0, "p_385->g_320.s0", print_hash_value);
    transparent_crc(p_385->g_320.s1, "p_385->g_320.s1", print_hash_value);
    transparent_crc(p_385->g_320.s2, "p_385->g_320.s2", print_hash_value);
    transparent_crc(p_385->g_320.s3, "p_385->g_320.s3", print_hash_value);
    transparent_crc(p_385->g_320.s4, "p_385->g_320.s4", print_hash_value);
    transparent_crc(p_385->g_320.s5, "p_385->g_320.s5", print_hash_value);
    transparent_crc(p_385->g_320.s6, "p_385->g_320.s6", print_hash_value);
    transparent_crc(p_385->g_320.s7, "p_385->g_320.s7", print_hash_value);
    transparent_crc(p_385->g_320.s8, "p_385->g_320.s8", print_hash_value);
    transparent_crc(p_385->g_320.s9, "p_385->g_320.s9", print_hash_value);
    transparent_crc(p_385->g_320.sa, "p_385->g_320.sa", print_hash_value);
    transparent_crc(p_385->g_320.sb, "p_385->g_320.sb", print_hash_value);
    transparent_crc(p_385->g_320.sc, "p_385->g_320.sc", print_hash_value);
    transparent_crc(p_385->g_320.sd, "p_385->g_320.sd", print_hash_value);
    transparent_crc(p_385->g_320.se, "p_385->g_320.se", print_hash_value);
    transparent_crc(p_385->g_320.sf, "p_385->g_320.sf", print_hash_value);
    transparent_crc(p_385->g_341.x, "p_385->g_341.x", print_hash_value);
    transparent_crc(p_385->g_341.y, "p_385->g_341.y", print_hash_value);
    transparent_crc(p_385->g_363.x, "p_385->g_363.x", print_hash_value);
    transparent_crc(p_385->g_363.y, "p_385->g_363.y", print_hash_value);
    transparent_crc(p_385->g_363.z, "p_385->g_363.z", print_hash_value);
    transparent_crc(p_385->g_363.w, "p_385->g_363.w", print_hash_value);
    transparent_crc(p_385->g_376, "p_385->g_376", print_hash_value);
    transparent_crc(p_385->g_381.s0, "p_385->g_381.s0", print_hash_value);
    transparent_crc(p_385->g_381.s1, "p_385->g_381.s1", print_hash_value);
    transparent_crc(p_385->g_381.s2, "p_385->g_381.s2", print_hash_value);
    transparent_crc(p_385->g_381.s3, "p_385->g_381.s3", print_hash_value);
    transparent_crc(p_385->g_381.s4, "p_385->g_381.s4", print_hash_value);
    transparent_crc(p_385->g_381.s5, "p_385->g_381.s5", print_hash_value);
    transparent_crc(p_385->g_381.s6, "p_385->g_381.s6", print_hash_value);
    transparent_crc(p_385->g_381.s7, "p_385->g_381.s7", print_hash_value);
    transparent_crc(p_385->g_381.s8, "p_385->g_381.s8", print_hash_value);
    transparent_crc(p_385->g_381.s9, "p_385->g_381.s9", print_hash_value);
    transparent_crc(p_385->g_381.sa, "p_385->g_381.sa", print_hash_value);
    transparent_crc(p_385->g_381.sb, "p_385->g_381.sb", print_hash_value);
    transparent_crc(p_385->g_381.sc, "p_385->g_381.sc", print_hash_value);
    transparent_crc(p_385->g_381.sd, "p_385->g_381.sd", print_hash_value);
    transparent_crc(p_385->g_381.se, "p_385->g_381.se", print_hash_value);
    transparent_crc(p_385->g_381.sf, "p_385->g_381.sf", print_hash_value);
    transparent_crc(p_385->v_collective, "p_385->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 48; i++)
            transparent_crc(p_385->g_special_values[i + 48 * get_linear_group_id()], "p_385->g_special_values[i + 48 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 48; i++)
            transparent_crc(p_385->l_special_values[i], "p_385->l_special_values[i]", print_hash_value);
    transparent_crc(p_385->l_comm_values[get_linear_local_id()], "p_385->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_385->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()], "p_385->g_comm_values[get_linear_group_id() * 24 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
