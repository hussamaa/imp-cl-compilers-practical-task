// --atomics 35 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 66,91,1 -l 6,1,1
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

__constant uint32_t permutations[10][6] = {
{1,0,2,5,3,4}, // permutation 0
{1,5,0,2,3,4}, // permutation 1
{1,2,0,4,3,5}, // permutation 2
{2,4,5,1,0,3}, // permutation 3
{1,2,0,5,3,4}, // permutation 4
{5,3,1,4,0,2}, // permutation 5
{1,5,4,2,3,0}, // permutation 6
{4,0,5,3,2,1}, // permutation 7
{5,3,0,2,1,4}, // permutation 8
{1,5,2,0,3,4} // permutation 9
};

// Seed: 4016814795

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile uint32_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

struct S1 {
    VECTOR(int64_t, 2) g_4;
    uint32_t g_19[8];
    uint16_t g_27;
    volatile int32_t g_40;
    volatile int32_t * volatile g_39[8][9];
    int32_t g_48;
    int32_t *g_51[9];
    int32_t **g_50;
    int32_t **g_52;
    int32_t **g_99;
    volatile struct S0 g_100;
    volatile uint32_t *g_101[8][3][8];
    uint8_t g_126;
    int32_t g_156;
    int32_t *g_155;
    int32_t **g_154;
    volatile VECTOR(int32_t, 2) g_165;
    volatile struct S0 * volatile g_180;
    struct S0 g_208[9];
    struct S0 *g_211;
    int8_t g_216;
    uint64_t g_245;
    VECTOR(uint64_t, 2) g_250;
    volatile struct S0 g_259[3][9];
    VECTOR(uint16_t, 8) g_272;
    uint16_t *g_303;
    uint16_t **g_302[6][2][10];
    uint32_t g_307;
    struct S0 g_312;
    struct S0 g_318;
    int32_t g_347[3][3][10];
    int32_t *g_346;
    uint64_t *g_363;
    uint32_t * volatile g_372;
    uint32_t * volatile *g_371;
    uint32_t * volatile * volatile * volatile g_370;
    uint32_t * volatile * volatile * volatile *g_369;
    int16_t g_374;
    uint64_t g_381;
    volatile struct S0 g_386;
    int32_t g_451;
    int32_t * volatile g_452;
    volatile uint8_t g_454;
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
uint32_t  func_1(struct S1 * p_457);
int32_t  func_12(int8_t  p_13, int32_t  p_14, struct S1 * p_457);
uint16_t  func_15(uint8_t  p_16, uint32_t  p_17, struct S1 * p_457);
uint8_t  func_22(int64_t  p_23, int64_t  p_24, struct S1 * p_457);
int32_t  func_29(int64_t  p_30, uint32_t  p_31, uint8_t  p_32, uint64_t  p_33, uint32_t  p_34, struct S1 * p_457);
int32_t ** func_41(int16_t  p_42, uint32_t  p_43, int32_t * p_44, uint16_t * p_45, struct S1 * p_457);
uint32_t  func_62(int32_t  p_63, int64_t  p_64, struct S1 * p_457);
int32_t  func_65(uint32_t * p_66, int32_t ** p_67, int64_t  p_68, int16_t  p_69, int32_t *** p_70, struct S1 * p_457);
uint32_t * func_71(uint16_t  p_72, struct S1 * p_457);
int32_t  func_73(int32_t  p_74, uint16_t  p_75, uint32_t * p_76, int64_t  p_77, struct S1 * p_457);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_457->g_4 p_457->g_comm_values p_457->g_19 p_457->g_40 p_457->g_100 p_457->g_101 p_457->g_99 p_457->g_48 p_457->g_51 p_457->g_27 p_457->g_126 p_457->g_154 p_457->g_156 p_457->g_155 p_457->g_165 p_457->l_comm_values p_457->g_216 p_457->g_208.f0 p_457->g_259 p_457->g_208.f1 p_457->g_302 p_457->g_307 p_457->g_272 p_457->g_303 p_457->g_312 p_457->g_208.f2 p_457->g_208 p_457->g_245 p_457->g_346 p_457->g_363 p_457->g_318.f2 p_457->g_369 p_457->g_374 p_457->g_318.f0 p_457->g_347 p_457->g_318.f1 p_457->g_318.f3 p_457->g_386 p_457->g_451 p_457->g_452 p_457->g_454
 * writes: p_457->g_19 p_457->g_39 p_457->g_50 p_457->g_52 p_457->g_99 p_457->g_51 p_457->g_48 p_457->g_126 p_457->l_comm_values p_457->g_100 p_457->g_156 p_457->g_211 p_457->g_155 p_457->g_245 p_457->g_250 p_457->g_208 p_457->g_307 p_457->g_154 p_457->g_363 p_457->g_374 p_457->g_347 p_457->g_216 p_457->g_381 p_457->g_27 p_457->g_259 p_457->g_451 p_457->g_454
 */
uint32_t  func_1(struct S1 * p_457)
{ /* block id: 4 */
    uint32_t l_7 = 0x5EA6EDADL;
    uint32_t *l_18 = &p_457->g_19[4];
    uint16_t *l_25 = (void*)0;
    uint16_t *l_26[10];
    int32_t l_28 = 0L;
    int16_t l_37 = 0x57D5L;
    int64_t l_38 = 0x6B1F0CFADBACD6BCL;
    uint64_t l_375 = 0x5A62FA618256DCDBL;
    uint8_t *l_376 = &p_457->g_126;
    int8_t *l_380[4];
    int32_t *l_450 = &p_457->g_451;
    int32_t *l_453[8][4] = {{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]},{&p_457->g_451,&p_457->g_451,&p_457->g_347[0][1][3],&p_457->g_347[2][1][6]}};
    int i, j;
    for (i = 0; i < 10; i++)
        l_26[i] = &p_457->g_27;
    for (i = 0; i < 4; i++)
        l_380[i] = &p_457->g_216;
    (*p_457->g_452) = ((safe_sub_func_uint16_t_u_u((((((((((VECTOR(int64_t, 2))(p_457->g_4.yx)).hi < ((l_7 > (safe_lshift_func_uint8_t_u_u(l_7, l_7))) == (p_457->g_4.y != ((*l_450) ^= (safe_div_func_uint16_t_u_u(p_457->g_4.x, ((((*p_457->g_346) = (func_12((p_457->g_381 = (func_15(((GROUP_DIVERGE(1, 1) == p_457->g_comm_values[p_457->tid]) > (!p_457->g_4.y)), (((*l_18) = GROUP_DIVERGE(2, 1)) , (p_457->g_4.y , ((safe_mul_func_uint8_t_u_u(func_22((((l_28 = FAKE_DIVERGE(p_457->local_1_offset, get_local_id(1), 10)) > ((((((*l_376) = ((func_29((((~(safe_lshift_func_int8_t_s_s(0x46L, 4))) & l_7) | 0x4EL), l_7, l_37, l_7, l_38, p_457) != l_375) & (*p_457->g_303))) != p_457->g_312.f3) <= l_7) , p_457->g_318.f1) , 0x73C6L)) , p_457->g_100.f0), l_375, p_457), p_457->g_318.f3)) , l_7))), p_457) <= (-4L))), l_37, p_457) < GROUP_DIVERGE(1, 1))) > l_7) & p_457->g_318.f0))))))) && p_457->g_208[2].f4) , 4294967295UL) < 0x6A7CB516L) ^ 4294967295UL) != 0x52CEL) ^ p_457->g_318.f0), p_457->g_312.f3)) | (-8L));
    p_457->g_454++;
    return p_457->g_19[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_27 p_457->g_346 p_457->g_347 p_457->g_386
 * writes: p_457->g_27 p_457->g_259
 */
int32_t  func_12(int8_t  p_13, int32_t  p_14, struct S1 * p_457)
{ /* block id: 177 */
    uint16_t *l_384 = &p_457->g_27;
    uint16_t *l_385 = (void*)0;
    int32_t l_449 = 1L;
    for (p_457->g_27 = 0; (p_457->g_27 < 49); p_457->g_27 = safe_add_func_int32_t_s_s(p_457->g_27, 5))
    { /* block id: 180 */
        return (*p_457->g_346);
    }
    if (((l_384 = l_384) == l_385))
    { /* block id: 184 */
        volatile struct S0 *l_387 = &p_457->g_259[0][1];
        (*l_387) = p_457->g_386;
    }
    else
    { /* block id: 186 */
        if ((atomic_inc(&p_457->l_atomic_input[16]) == 0))
        { /* block id: 188 */
            uint64_t l_388[2];
            uint32_t l_389[7];
            int i;
            for (i = 0; i < 2; i++)
                l_388[i] = 0UL;
            for (i = 0; i < 7; i++)
                l_389[i] = 4294967287UL;
            if ((l_389[2] = (l_388[1] = (-4L))))
            { /* block id: 191 */
                int32_t l_391 = 0L;
                int32_t *l_390 = &l_391;
                int32_t *l_392 = &l_391;
                int64_t l_393 = 0x7516C75C1A993241L;
                uint8_t l_394 = 3UL;
                l_392 = l_390;
                if ((l_394 ^= l_393))
                { /* block id: 194 */
                    uint16_t l_395[1];
                    struct S0 l_398 = {0x27447785L,0x7BB83975L,2L,-1L,0xC7D23425L};/* VOLATILE GLOBAL l_398 */
                    struct S0 l_399 = {1L,1UL,0x434096A8L,5L,5UL};/* VOLATILE GLOBAL l_399 */
                    int i;
                    for (i = 0; i < 1; i++)
                        l_395[i] = 0UL;
                    l_395[0]++;
                    l_399 = l_398;
                    for (l_399.f0 = 15; (l_399.f0 <= (-9)); --l_399.f0)
                    { /* block id: 199 */
                        int32_t l_403 = 0x1BFDE971L;
                        int32_t *l_402 = &l_403;
                        struct S0 l_405 = {3L,4294967295UL,0x6DF2AB93L,0x3C6B7690L,4294967295UL};/* VOLATILE GLOBAL l_405 */
                        struct S0 *l_404[6][7][5] = {{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}},{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}},{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}},{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}},{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}},{{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405},{&l_405,(void*)0,(void*)0,&l_405,&l_405}}};
                        struct S0 *l_406[1][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int32_t l_407 = 4L;
                        int i, j, k;
                        l_390 = l_402;
                        l_406[0][6][1] = l_404[2][4][4];
                        (*l_402) = l_407;
                        (*l_390) = 0x7FBBD9EEL;
                    }
                    for (l_398.f4 = 19; (l_398.f4 == 17); l_398.f4 = safe_sub_func_uint8_t_u_u(l_398.f4, 1))
                    { /* block id: 207 */
                        VECTOR(int32_t, 4) l_410 = (VECTOR(int32_t, 4))(0x44F4880AL, (VECTOR(int32_t, 2))(0x44F4880AL, 9L), 9L);
                        VECTOR(int32_t, 16) l_411 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x02DD886BL), 0x02DD886BL), 0x02DD886BL, (-1L), 0x02DD886BL, (VECTOR(int32_t, 2))((-1L), 0x02DD886BL), (VECTOR(int32_t, 2))((-1L), 0x02DD886BL), (-1L), 0x02DD886BL, (-1L), 0x02DD886BL);
                        int32_t l_412 = 0x727884B7L;
                        int i;
                        (*l_392) ^= ((VECTOR(int32_t, 4))(l_410.yxyw)).w;
                        l_390 = (void*)0;
                        l_412 ^= ((*l_392) = ((VECTOR(int32_t, 4))(l_411.sf30e)).z);
                    }
                }
                else
                { /* block id: 213 */
                    uint16_t l_413[1];
                    int32_t l_416 = 3L;
                    uint32_t l_417 = 0x747239C1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_413[i] = 0x2251L;
                    ++l_413[0];
                    l_417--;
                    for (l_413[0] = (-5); (l_413[0] < 22); l_413[0]++)
                    { /* block id: 218 */
                        uint16_t l_422 = 0xCFA7L;
                        struct S0 l_423 = {-3L,1UL,-10L,0L,7UL};/* VOLATILE GLOBAL l_423 */
                        struct S0 l_424 = {0x43824493L,1UL,-4L,0x4CA09B3CL,0x671D208FL};/* VOLATILE GLOBAL l_424 */
                        int32_t l_426 = 0x26D52D5BL;
                        int32_t *l_425[3];
                        int32_t *l_427 = &l_426;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_425[i] = &l_426;
                        (1 + 1);
                    }
                    for (l_413[0] = 0; (l_413[0] == 51); l_413[0] = safe_add_func_int64_t_s_s(l_413[0], 2))
                    { /* block id: 227 */
                        int32_t *l_430 = (void*)0;
                        int8_t l_431 = 4L;
                        uint32_t l_432 = 0xB2EB11C6L;
                        struct S0 l_436[3][7] = {{{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL}},{{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL}},{{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{-3L,0UL,3L,1L,1UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL},{0L,0x4F7C7307L,0x6FB4FE91L,0L,4294967295UL}}};
                        struct S0 *l_435 = &l_436[2][3];
                        int i, j;
                        l_392 = l_430;
                        l_431 ^= ((*l_390) &= 0x7DF1D603L);
                        ++l_432;
                        l_435 = (void*)0;
                    }
                }
            }
            else
            { /* block id: 235 */
                int32_t l_437 = 0x4C689D67L;
                uint32_t l_438[8][3] = {{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL}};
                int16_t l_439[10];
                uint8_t l_440[2][7];
                VECTOR(uint16_t, 2) l_441 = (VECTOR(uint16_t, 2))(65530UL, 1UL);
                int32_t *l_442[7][4] = {{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437},{(void*)0,&l_437,(void*)0,&l_437}};
                VECTOR(int32_t, 4) l_443 = (VECTOR(int32_t, 4))(0x6145C247L, (VECTOR(int32_t, 2))(0x6145C247L, 0x33652D35L), 0x33652D35L);
                int16_t l_444 = (-8L);
                int32_t l_445 = 0L;
                int16_t l_446 = 0L;
                struct S0 l_447 = {0x63C59CDAL,4294967293UL,-9L,-1L,3UL};/* VOLATILE GLOBAL l_447 */
                struct S0 l_448[8][6][5] = {{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}},{{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}},{{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{0x2E286007L,0xD11FEA39L,0x54C2BEB7L,0L,4294967286UL},{2L,4294967291UL,8L,1L,0x185D281EL},{0x5BFECE15L,4294967287UL,1L,0x4F322514L,4294967295UL},{1L,0xF3C7DC82L,-3L,-10L,4294967295UL}}}};
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_439[i] = 0x5608L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_440[i][j] = 255UL;
                }
                l_441.x |= (l_440[0][0] = (l_439[4] = (l_438[5][0] = l_437)));
                l_442[4][1] = (void*)0;
                l_446 |= ((l_444 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(0x5CE0C4D5L, 0x1429B2B7L, 0x126DFC4CL, (-1L))).even, ((VECTOR(int32_t, 2))(l_443.zx))))).xyyxxxxyxyyyyyxx)).sf) , l_445);
                l_448[4][3][4] = l_447;
            }
            unsigned int result = 0;
            int l_388_i0;
            for (l_388_i0 = 0; l_388_i0 < 2; l_388_i0++) {
                result += l_388[l_388_i0];
            }
            int l_389_i0;
            for (l_389_i0 = 0; l_389_i0 < 7; l_389_i0++) {
                result += l_389[l_389_i0];
            }
            atomic_add(&p_457->l_special_values[16], result);
        }
        else
        { /* block id: 245 */
            (1 + 1);
        }
    }
    return l_449;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_15(uint8_t  p_16, uint32_t  p_17, struct S1 * p_457)
{ /* block id: 174 */
    uint16_t l_379 = 0UL;
    return l_379;
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_216 p_457->g_208.f1 p_457->g_100.f3
 * writes: p_457->g_216
 */
uint8_t  func_22(int64_t  p_23, int64_t  p_24, struct S1 * p_457)
{ /* block id: 170 */
    int8_t *l_377 = (void*)0;
    int8_t *l_378 = &p_457->g_216;
    atomic_min(&p_457->g_atomic_reduction[get_linear_group_id()], (((*l_378) ^= p_24) & p_457->g_208[2].f1));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_457->v_collective += p_457->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_457->g_100.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_19 p_457->g_40 p_457->g_4 p_457->g_comm_values p_457->g_100 p_457->g_101 p_457->g_99 p_457->g_48 p_457->g_51 p_457->g_27 p_457->g_126 p_457->g_154 p_457->g_156 p_457->g_155 p_457->g_165 p_457->l_comm_values p_457->g_216 p_457->g_208.f0 p_457->g_259 p_457->g_208.f1 p_457->g_302 p_457->g_307 p_457->g_272 p_457->g_303 p_457->g_312 p_457->g_208.f2 p_457->g_208 p_457->g_245 p_457->g_346 p_457->g_363 p_457->g_318.f2 p_457->g_369 p_457->g_374 p_457->g_318.f0 p_457->g_347
 * writes: p_457->g_39 p_457->g_50 p_457->g_52 p_457->g_99 p_457->g_51 p_457->g_48 p_457->g_126 p_457->l_comm_values p_457->g_100 p_457->g_156 p_457->g_211 p_457->g_155 p_457->g_19 p_457->g_245 p_457->g_250 p_457->g_208 p_457->g_307 p_457->g_154 p_457->g_363 p_457->g_374 p_457->g_347
 */
int32_t  func_29(int64_t  p_30, uint32_t  p_31, uint8_t  p_32, uint64_t  p_33, uint32_t  p_34, struct S1 * p_457)
{ /* block id: 7 */
    int32_t *l_47 = &p_457->g_48;
    int32_t **l_46[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_49[9] = {&l_46[4],&l_46[4],&l_46[4],&l_46[4],&l_46[4],&l_46[4],&l_46[4],&l_46[4],&l_46[4]};
    VECTOR(uint64_t, 16) l_53 = (VECTOR(uint64_t, 16))(0x6C248BDD0C5DF97FL, (VECTOR(uint64_t, 4))(0x6C248BDD0C5DF97FL, (VECTOR(uint64_t, 2))(0x6C248BDD0C5DF97FL, 3UL), 3UL), 3UL, 0x6C248BDD0C5DF97FL, 3UL, (VECTOR(uint64_t, 2))(0x6C248BDD0C5DF97FL, 3UL), (VECTOR(uint64_t, 2))(0x6C248BDD0C5DF97FL, 3UL), 0x6C248BDD0C5DF97FL, 3UL, 0x6C248BDD0C5DF97FL, 3UL);
    int32_t l_345 = 0x4188C626L;
    uint16_t *l_348 = (void*)0;
    int64_t *l_350 = (void*)0;
    struct S0 **l_358 = &p_457->g_211;
    struct S0 ***l_357 = &l_358;
    uint64_t **l_364 = &p_457->g_363;
    uint32_t *l_368[9][7] = {{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0},{&p_457->g_19[3],&p_457->g_19[4],(void*)0,&p_457->g_19[3],&p_457->g_19[0],&p_457->g_19[3],(void*)0}};
    uint32_t **l_367[1][7] = {{&l_368[6][5],&l_368[6][5],&l_368[6][5],&l_368[6][5],&l_368[6][5],&l_368[6][5],&l_368[6][5]}};
    uint32_t ***l_366 = &l_367[0][1];
    uint32_t ****l_365 = &l_366;
    int16_t *l_373 = &p_457->g_374;
    int i, j;
    p_457->g_39[7][8] = (void*)0;
    p_457->g_154 = func_41(((p_457->g_50 = l_46[8]) == (p_457->g_52 = (void*)0)), (((VECTOR(uint64_t, 16))(l_53.s28ffea059e6156cf)).s8 , (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((!func_62((((func_65(func_71(p_457->g_19[4], p_457), p_457->g_154, p_457->g_4.y, (0x353B77AA8E5AB056L || (safe_mul_func_uint8_t_u_u(0xB3L, ((safe_add_func_uint8_t_u_u(0x8DL, p_32)) | p_457->g_156)))), &p_457->g_154, p_457) , p_33) < p_32) , p_457->g_40), p_457->g_4.x, p_457)), l_345)), p_31)) <= p_32), 8)), 0x6EL))), p_457->g_346, l_348, p_457);
    (*p_457->g_346) = (((p_457->g_40 != ((((((*l_373) = (4L & (l_350 == ((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(((((safe_sub_func_int64_t_s_s((+0x1CABDCCE7D3FB5A2L), (((((VECTOR(int8_t, 2))((-4L), (-9L))).hi , l_357) != &l_358) <= ((+(safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((((((p_457->g_208[2].f3 , &p_33) == ((*l_364) = p_457->g_363)) & 0L) || p_33) , (*p_457->g_303)), 11)) >= 1UL), 7))) & p_457->g_318.f2)))) , l_365) == p_457->g_369) >= 18446744073709551610UL), p_30)) || 0x0009A503L) != p_32), p_32)) , l_350)))) >= GROUP_DIVERGE(0, 1)) <= FAKE_DIVERGE(p_457->group_2_offset, get_group_id(2), 10)) , p_457->g_374) > 0x673EADAFL)) & (*l_47)) && p_457->g_318.f0);
    return (*p_457->g_346);
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_154
 * writes: p_457->g_155
 */
int32_t ** func_41(int16_t  p_42, uint32_t  p_43, int32_t * p_44, uint16_t * p_45, struct S1 * p_457)
{ /* block id: 160 */
    int32_t *l_349 = (void*)0;
    (*p_457->g_154) = (l_349 = l_349);
    return &p_457->g_51[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_156 p_457->g_155 p_457->g_216 p_457->g_154 p_457->g_126 p_457->g_4 p_457->g_208.f0 p_457->g_100.f3 p_457->g_259 p_457->g_208.f1 p_457->g_302 p_457->g_307 p_457->g_272 p_457->g_303 p_457->g_27 p_457->g_312 p_457->g_208.f2 p_457->g_208 p_457->g_245
 * writes: p_457->g_211 p_457->g_155 p_457->g_156 p_457->g_19 p_457->g_245 p_457->g_250 p_457->g_208 p_457->g_307 p_457->g_126
 */
uint32_t  func_62(int32_t  p_63, int64_t  p_64, struct S1 * p_457)
{ /* block id: 76 */
    int32_t *l_187 = &p_457->g_156;
    int32_t *l_188 = &p_457->g_156;
    int32_t *l_189 = (void*)0;
    int32_t *l_190 = &p_457->g_156;
    int32_t *l_191 = (void*)0;
    int32_t *l_192[4] = {&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48};
    uint32_t l_193[7] = {0x37289F67L,0UL,0x37289F67L,0x37289F67L,0UL,0x37289F67L,0x37289F67L};
    uint64_t l_196 = 0xA23364FACB01487BL;
    struct S0 *l_209[8][9][3] = {{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}},{{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]},{&p_457->g_208[1],&p_457->g_208[4],&p_457->g_208[2]}}};
    uint32_t *l_214 = (void*)0;
    uint32_t **l_213 = &l_214;
    uint32_t ***l_212 = &l_213;
    uint64_t l_224 = 0x6B6089E21254F27DL;
    uint16_t l_247 = 9UL;
    VECTOR(uint64_t, 2) l_268 = (VECTOR(uint64_t, 2))(0x504CD6CF897E8EEBL, 1UL);
    uint16_t **l_305 = &p_457->g_303;
    int64_t *l_306 = (void*)0;
    VECTOR(uint32_t, 16) l_315 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    struct S0 **l_322 = (void*)0;
    struct S0 ***l_321 = &l_322;
    struct S0 **l_336[6][4] = {{(void*)0,&l_209[1][6][2],(void*)0,(void*)0},{(void*)0,&l_209[1][6][2],(void*)0,(void*)0},{(void*)0,&l_209[1][6][2],(void*)0,(void*)0},{(void*)0,&l_209[1][6][2],(void*)0,(void*)0},{(void*)0,&l_209[1][6][2],(void*)0,(void*)0},{(void*)0,&l_209[1][6][2],(void*)0,(void*)0}};
    VECTOR(int16_t, 16) l_344 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 2L), 2L), 2L, (-3L), 2L, (VECTOR(int16_t, 2))((-3L), 2L), (VECTOR(int16_t, 2))((-3L), 2L), (-3L), 2L, (-3L), 2L);
    int i, j, k;
    ++l_193[2];
    l_196 ^= (*l_188);
    if ((*p_457->g_155))
    { /* block id: 79 */
        int32_t l_203 = 0x0661EEF8L;
        uint32_t ***l_204 = (void*)0;
        struct S0 *l_207 = &p_457->g_208[2];
        struct S0 **l_210[5] = {&l_209[1][5][0],&l_209[1][5][0],&l_209[1][5][0],&l_209[1][5][0],&l_209[1][5][0]};
        uint32_t ****l_215 = &l_212;
        VECTOR(uint32_t, 8) l_219 = (VECTOR(uint32_t, 8))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x8748EB94L), 0x8748EB94L), 0x8748EB94L, 4294967286UL, 0x8748EB94L);
        VECTOR(uint8_t, 2) l_241 = (VECTOR(uint8_t, 2))(0xE1L, 1UL);
        struct S0 **l_242 = &l_207;
        int32_t l_248[6][4][6] = {{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}},{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}},{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}},{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}},{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}},{{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL},{0x0F8B982EL,0x05F67036L,(-2L),(-2L),0x05F67036L,0x0F8B982EL}}};
        int32_t l_310 = 0x26241198L;
        int32_t l_311 = 0x4BCB65FBL;
        struct S0 ***l_325 = &l_210[2];
        int i, j, k;
        atomic_add(&p_457->g_atomic_reduction[get_linear_group_id()], (GROUP_DIVERGE(0, 1) <= (safe_rshift_func_int8_t_s_s((*l_190), ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((+l_203), ((VECTOR(int16_t, 2))((-1L), 0x086BL)).even)), l_203)) > ((((((VECTOR(uint16_t, 16))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 1UL)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(1UL, 0xB252L, (l_203 && 0x34L), (l_204 == ((*l_215) = (((safe_mod_func_int32_t_s_s(((0UL || (l_207 != (p_457->g_211 = l_209[1][5][0]))) , 0x5AB99A0AL), FAKE_DIVERGE(p_457->global_2_offset, get_global_id(2), 10))) ^ p_457->g_156) , l_212))), 0x67F9L, 6UL, 0x92ACL, 65529UL, l_203, ((VECTOR(uint16_t, 4))(0xF7B4L)), GROUP_DIVERGE(1, 1), 0x1912L, 65526UL)).hi)).s57, ((VECTOR(uint16_t, 2))(0xFB0EL)), ((VECTOR(uint16_t, 2))(1UL))))).yyyx)), p_63, 4UL, ((VECTOR(uint16_t, 2))(0x2B0CL)), 1UL, ((VECTOR(uint16_t, 4))(5UL)))).sf != p_457->g_216) , p_63) && 0L) , 8UL))))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_457->v_collective += p_457->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        for (l_203 = 9; (l_203 != (-14)); --l_203)
        { /* block id: 85 */
            int32_t *l_227 = &p_457->g_156;
            int32_t l_230 = 0x4D5561ADL;
            int32_t l_246[9] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L),0L,(-1L)};
            int i;
            if (l_219.s7)
                break;
            for (l_196 = 16; (l_196 == 43); l_196++)
            { /* block id: 89 */
                struct S0 ***l_243 = &l_210[2];
                uint64_t *l_244 = &p_457->g_245;
                uint64_t *l_249 = (void*)0;
                uint64_t *l_251 = (void*)0;
                uint64_t *l_252 = (void*)0;
                uint64_t *l_253 = (void*)0;
                uint64_t *l_254 = (void*)0;
                uint64_t *l_255 = (void*)0;
                VECTOR(int32_t, 8) l_256 = (VECTOR(int32_t, 8))(0x38945477L, (VECTOR(int32_t, 4))(0x38945477L, (VECTOR(int32_t, 2))(0x38945477L, 0x3562337DL), 0x3562337DL), 0x3562337DL, 0x38945477L, 0x3562337DL);
                int32_t *l_257[1][2];
                uint16_t *l_258 = (void*)0;
                uint32_t l_269 = 0x526554AEL;
                int32_t l_285 = (-9L);
                uint16_t ***l_304 = (void*)0;
                int8_t *l_308[9][6] = {{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216},{&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216,&p_457->g_216}};
                uint16_t *l_309[2];
                struct S0 ****l_323 = (void*)0;
                struct S0 ****l_324[5];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_257[i][j] = &l_230;
                }
                for (i = 0; i < 2; i++)
                    l_309[i] = &l_247;
                for (i = 0; i < 5; i++)
                    l_324[i] = &l_321;
                if ((safe_sub_func_uint64_t_u_u((l_203 == l_224), (((safe_rshift_func_uint16_t_u_u((((((*p_457->g_154) = l_227) != (((((((+(safe_rshift_func_uint8_t_u_s(p_64, ((p_457->g_250.x = ((l_230 &= ((*l_227) = 0x4D0EAC3AL)) >= (0x4DL >= ((p_457->g_19[4] = p_64) > (l_248[3][0][0] = (safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((((safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s((((((*l_244) = (((VECTOR(uint8_t, 8))(l_241.yyxyyyyx)).s5 || (l_242 != ((*l_243) = &p_457->g_211)))) , 0x0899AF19L) , p_63) > (-2L)), GROUP_DIVERGE(2, 1))) == p_63), p_457->g_126)) , l_246[3]) >= p_63) & 1UL), p_457->g_4.x)), l_247)), 0x54ECB678L))))))) && 0x22B65A340AF47372L)))) == p_64) >= l_256.s7) ^ l_256.s3) , FAKE_DIVERGE(p_457->local_1_offset, get_local_id(1), 10)) ^ p_64) , l_257[0][0])) , p_457->g_208[2].f0) == p_457->g_100.f3), 8)) >= p_63) == p_63))))
                { /* block id: 98 */
                    if (((void*)0 == l_258))
                    { /* block id: 99 */
                        if (p_64)
                            break;
                        return p_64;
                    }
                    else
                    { /* block id: 102 */
                        (*l_207) = p_457->g_259[0][1];
                    }
                }
                else
                { /* block id: 105 */
                    int32_t ***l_277[6];
                    int16_t l_284 = 2L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_277[i] = (void*)0;
                    if (((VECTOR(int32_t, 4))(0x64C1123FL, (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_63, ((((safe_sub_func_uint8_t_u_u(((((void*)0 == &p_457->g_154) || l_219.s6) , (!(safe_mul_func_int16_t_s_s((((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 4))(l_268.yxyy)), ((VECTOR(uint64_t, 2))(3UL, 0xF49C646EDA6CDBEEL)).yyxx))).z != 0x3050BCC946377D89L), ((p_63 >= l_269) , (p_457->g_259[0][1].f2 , p_457->g_208[2].f4)))))), p_457->g_208[2].f3)) <= 18446744073709551606UL) && (*l_187)) || l_248[3][0][0]))), GROUP_DIVERGE(0, 1))), 6L, (-1L))).x)
                    { /* block id: 106 */
                        uint64_t *l_278[9][1] = {{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245},{&p_457->g_245}};
                        uint16_t *l_279 = (void*)0;
                        uint16_t *l_280[3][7][8] = {{{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247}},{{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247}},{{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247},{&l_247,&l_247,&l_247,&p_457->g_27,&p_457->g_27,&l_247,&l_247,&l_247}}};
                        int32_t l_281 = 0L;
                        int i, j, k;
                        (*p_457->g_154) = l_257[0][0];
                        if (p_63)
                            continue;
                        (*p_457->g_154) = l_191;
                    }
                    else
                    { /* block id: 111 */
                        (*l_227) ^= (((l_248[0][2][2] = (safe_div_func_uint16_t_u_u(p_457->g_208[2].f1, 1UL))) , p_63) >= 1UL);
                        l_248[3][0][0] ^= l_284;
                    }
                    if (l_219.s3)
                        continue;
                    if (l_285)
                        break;
                }
                (*l_227) &= p_63;
                l_311 &= ((l_310 &= (((p_64 > p_64) && (safe_sub_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s((((p_64 > ((((0x6B063BA38D604015L ^ ((((*l_213) = &p_457->g_19[4]) == l_227) < (safe_mul_func_int8_t_s_s(((*l_227) = ((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_457->g_307 &= (safe_lshift_func_int16_t_s_u(((((GROUP_DIVERGE(0, 1) <= (*l_227)) < (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((l_305 = p_457->g_302[1][1][4]) == &p_457->g_303), 1UL)), p_64))) , l_254) == l_306), (*l_227)))), p_457->g_259[0][1].f3)), 9)) & p_457->g_272.s1) > p_63) <= FAKE_DIVERGE(p_457->group_1_offset, get_group_id(1), 10))), GROUP_DIVERGE(2, 1))))) , 0xF332L) ^ 8UL) > p_63)) && (*l_227)) <= p_457->g_126), l_248[3][0][0])) > p_457->g_216) || GROUP_DIVERGE(1, 1)), p_63))) , (*p_457->g_303))) & 7L);
                l_311 ^= (p_457->g_312 , (((((p_63 > (p_64 & 0L)) && ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6DFC6391L, 0x38FB7B2CL)), 0L, 0x687A2438L)).zzxzzyxw)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(0x63C17BD7L, 0x0D75DFE7L)).xyxxyyyxxyyyyxyy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(4294967288UL, 0UL)), ((VECTOR(uint32_t, 8))(4294967287UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x22BBD3E6L, 0xCA20F610L)))).yxxxyyxy)).even)), p_64, 0x5662CE7BL, 0xF9F0E615L)).s76))), ((VECTOR(uint32_t, 2))(4294967295UL, 0xBDB63858L)), ((VECTOR(uint32_t, 2))(l_315.se7)), 0x7BE547BDL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(0x31B1A500L, GROUP_DIVERGE(1, 1), FAKE_DIVERGE(p_457->global_1_offset, get_global_id(1), 10), ((GROUP_DIVERGE(1, 1) | ((((safe_mul_func_uint8_t_u_u((~p_457->g_48), (p_457->g_318 , (safe_mul_func_int8_t_s_s((6L >= (p_457->g_19[6] &= ((l_325 = l_321) == &l_322))), p_457->g_318.f2))))) & p_457->g_318.f2) & 0x9FB8486F6E283BBBL) != l_241.y)) , l_248[3][0][0]), ((VECTOR(uint32_t, 4))(0x321581F9L)), 0xEE55952BL, 0UL, 4294967295UL, p_457->g_250.y, 4294967289UL, ((VECTOR(uint32_t, 2))(0UL)), 0UL)))).even)), 0x176B2358L)).even)).s3651314406702014))).s8f)).yyxxxyyyyyyxyxxx)).odd))).s6) & p_457->g_4.y) , (*l_227)) && p_63));
            }
            if (p_63)
                break;
            for (p_457->g_126 = (-8); (p_457->g_126 > 44); ++p_457->g_126)
            { /* block id: 133 */
                uint16_t l_328 = 65535UL;
                l_328 |= 0x30E170F5L;
                if ((safe_lshift_func_int8_t_s_u(p_457->g_208[2].f2, 7)))
                { /* block id: 135 */
                    uint32_t l_331 = 6UL;
                    return l_331;
                }
                else
                { /* block id: 137 */
                    int32_t l_332 = 0x5F5F9B72L;
                    (**l_242) = (*l_207);
                    if (l_332)
                        break;
                }
                (*l_188) = ((void*)0 != &p_457->g_216);
            }
        }
        return p_64;
    }
    else
    { /* block id: 145 */
        uint16_t l_337[4][7] = {{0x9ADBL,0x9ADBL,0x6B04L,65535UL,0xDE5DL,65535UL,0x6B04L},{0x9ADBL,0x9ADBL,0x6B04L,65535UL,0xDE5DL,65535UL,0x6B04L},{0x9ADBL,0x9ADBL,0x6B04L,65535UL,0xDE5DL,65535UL,0x6B04L},{0x9ADBL,0x9ADBL,0x6B04L,65535UL,0xDE5DL,65535UL,0x6B04L}};
        int i, j;
        for (l_196 = 0; (l_196 == 39); l_196 = safe_add_func_int32_t_s_s(l_196, 5))
        { /* block id: 148 */
            struct S0 **l_335 = &p_457->g_211;
            l_336[0][1] = ((*l_321) = l_335);
            --l_337[1][5];
        }
        for (p_457->g_245 = 29; (p_457->g_245 < 44); p_457->g_245 = safe_add_func_int8_t_s_s(p_457->g_245, 3))
        { /* block id: 155 */
            (*p_457->g_155) = ((safe_lshift_func_uint8_t_u_u(((-5L) & ((VECTOR(int16_t, 8))(l_344.s95da6e33)).s6), 2)) <= l_337[3][5]);
        }
    }
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_155 p_457->g_156 p_457->g_100 p_457->g_165 p_457->l_comm_values p_457->g_4 p_457->g_154
 * writes: p_457->g_100 p_457->g_156
 */
int32_t  func_65(uint32_t * p_66, int32_t ** p_67, int64_t  p_68, int16_t  p_69, int32_t *** p_70, struct S1 * p_457)
{ /* block id: 67 */
    uint16_t *l_166 = (void*)0;
    VECTOR(int32_t, 4) l_169 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x70D58FB9L), 0x70D58FB9L);
    uint32_t *l_173[3];
    uint32_t **l_172 = &l_173[0];
    uint32_t ***l_174 = &l_172;
    uint32_t **l_175 = (void*)0;
    uint32_t ***l_176 = (void*)0;
    uint32_t ***l_177 = &l_175;
    uint16_t *l_179 = (void*)0;
    uint16_t **l_178 = &l_179;
    volatile struct S0 *l_181[9][3][3] = {{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}},{{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100},{&p_457->g_100,&p_457->g_100,&p_457->g_100}}};
    VECTOR(int64_t, 4) l_184 = (VECTOR(int64_t, 4))(0x7FCB53B084D9010AL, (VECTOR(int64_t, 2))(0x7FCB53B084D9010AL, 0x141CCE74E1F02127L), 0x141CCE74E1F02127L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_173[i] = &p_457->g_19[1];
    p_457->g_100 = ((safe_mod_func_int32_t_s_s((**p_67), (p_457->g_100 , (safe_add_func_uint32_t_u_u(4294967295UL, ((p_69 > ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_457->g_165.yx)), 0x0F6A0003L, 0x1E847223L)).z) <= ((p_69 < p_69) > ((l_166 = l_166) == ((*l_178) = ((safe_add_func_int32_t_s_s(((~((p_68 = (((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(l_169.ww)).xxxyxyyy, ((VECTOR(uint32_t, 2))(3UL, 4294967295UL)).xxxxyxyy))).s3 > ((safe_lshift_func_int8_t_s_s((((*l_174) = l_172) == ((*l_177) = l_175)), 2)) ^ 2UL))) && p_457->l_comm_values[(safe_mod_func_uint32_t_u_u(p_457->tid, 6))])) <= p_457->g_4.y), l_169.x)) , (void*)0)))))))))) , p_457->g_100);
    (**p_457->g_154) &= (safe_rshift_func_int16_t_s_u(((l_169.w >= ((((VECTOR(int64_t, 4))(l_184.xxzw)).x > FAKE_DIVERGE(p_457->group_2_offset, get_group_id(2), 10)) > (safe_sub_func_int16_t_s_s(p_68, (p_457->g_100.f4 , 0x4176L))))) >= 0x454084CDL), 1));
    return l_169.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_40 p_457->g_4 p_457->g_comm_values p_457->g_100 p_457->g_101 p_457->g_99 p_457->g_48 p_457->g_51 p_457->g_27 p_457->g_19 p_457->g_126
 * writes: p_457->g_99 p_457->g_51 p_457->g_48 p_457->g_126 p_457->l_comm_values
 */
uint32_t * func_71(uint16_t  p_72, struct S1 * p_457)
{ /* block id: 11 */
    uint64_t l_78 = 9UL;
    VECTOR(uint32_t, 4) l_79 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xD253DE91L), 0xD253DE91L);
    int32_t l_84 = 0x5ED6FA3CL;
    VECTOR(int32_t, 16) l_85 = (VECTOR(int32_t, 16))(0x63243D00L, (VECTOR(int32_t, 4))(0x63243D00L, (VECTOR(int32_t, 2))(0x63243D00L, (-4L)), (-4L)), (-4L), 0x63243D00L, (-4L), (VECTOR(int32_t, 2))(0x63243D00L, (-4L)), (VECTOR(int32_t, 2))(0x63243D00L, (-4L)), 0x63243D00L, (-4L), 0x63243D00L, (-4L));
    uint16_t *l_90 = (void*)0;
    int32_t l_91 = 0x4681E8B0L;
    uint32_t *l_92 = &p_457->g_19[4];
    int32_t *l_102[4] = {&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48};
    uint32_t l_103 = 1UL;
    int i;
    l_103 ^= func_73(l_78, (((0x0A1C32FDL && ((VECTOR(uint32_t, 2))(l_79.zw)).lo) == p_457->g_40) | (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_79.w, l_84)), (((((VECTOR(int32_t, 8))(l_85.s8b3ad7d8)).s1 ^ (safe_mul_func_int8_t_s_s(0x08L, (safe_mod_func_int32_t_s_s(l_84, ((l_90 == (p_457->g_4.y , (void*)0)) , p_457->g_comm_values[p_457->tid])))))) && l_79.x) , l_91)))), l_92, l_84, p_457);
    (*p_457->g_99) = &l_84;
    for (p_457->g_48 = 24; (p_457->g_48 >= 12); --p_457->g_48)
    { /* block id: 20 */
        int32_t *l_110[2][5];
        int64_t l_113[6][5][4] = {{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}},{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}},{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}},{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}},{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}},{{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L},{0x543006B1119AB3FDL,0L,0L,0x2794E2E87BE0B665L}}};
        uint32_t l_116 = 0xF0C3C4A3L;
        uint16_t *l_141 = &p_457->g_27;
        VECTOR(int32_t, 2) l_150 = (VECTOR(int32_t, 2))(0x239097EBL, 0x7256AB4EL);
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_110[i][j] = &l_84;
        }
        for (p_72 = 27; (p_72 <= 38); p_72 = safe_add_func_uint32_t_u_u(p_72, 9))
        { /* block id: 23 */
            int64_t l_112 = 0x55E3ED103590CCA6L;
            int32_t l_114 = 1L;
            int32_t l_115[5][6] = {{(-4L),4L,(-1L),(-3L),(-1L),(-4L)},{(-4L),4L,(-1L),(-3L),(-1L),(-4L)},{(-4L),4L,(-1L),(-3L),(-1L),(-4L)},{(-4L),4L,(-1L),(-3L),(-1L),(-4L)},{(-4L),4L,(-1L),(-3L),(-1L),(-4L)}};
            int i, j;
            for (l_91 = 0; (l_91 != 27); ++l_91)
            { /* block id: 26 */
                l_110[1][2] = &l_91;
            }
            if ((atomic_inc(&p_457->g_atomic_input[35 * get_linear_group_id() + 22]) == 3))
            { /* block id: 30 */
                VECTOR(int32_t, 4) l_111 = (VECTOR(int32_t, 4))(0x420D7A79L, (VECTOR(int32_t, 2))(0x420D7A79L, 0x7C1939B7L), 0x7C1939B7L);
                int i;
                l_111.y = ((VECTOR(int32_t, 2))(l_111.wz)).even;
                unsigned int result = 0;
                result += l_111.w;
                result += l_111.z;
                result += l_111.y;
                result += l_111.x;
                atomic_add(&p_457->g_special_values[35 * get_linear_group_id() + 22], result);
            }
            else
            { /* block id: 32 */
                (1 + 1);
            }
            --l_116;
        }
        for (l_84 = 0; (l_84 <= (-27)); l_84 = safe_sub_func_uint16_t_u_u(l_84, 8))
        { /* block id: 39 */
            uint8_t *l_125 = &p_457->g_126;
            uint32_t **l_127 = &l_92;
            int32_t **l_129 = &l_110[1][2];
            int32_t ***l_128 = &l_129;
            int64_t *l_134 = &l_113[5][2][3];
            int64_t *l_135 = (void*)0;
            int64_t *l_136 = (void*)0;
            int64_t *l_137 = (void*)0;
            int64_t *l_138 = (void*)0;
            int64_t *l_139 = (void*)0;
            int64_t *l_140[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_142[1];
            int32_t l_153 = 0x0FC77D7EL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_142[i] = 0x2DA153D4L;
            l_142[0] &= ((safe_div_func_uint32_t_u_u(p_72, (safe_sub_func_uint8_t_u_u(((*l_125) = p_457->g_100.f0), (((*l_127) = &p_457->g_19[0]) == ((((**p_457->g_99) ^ (((*l_128) = &l_102[3]) != &l_102[0])) , ((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_457->global_0_offset, get_global_id(0), 10), ((((safe_sub_func_uint32_t_u_u(((((p_457->l_comm_values[(safe_mod_func_uint32_t_u_u(p_457->tid, 6))] = ((*l_134) = (***l_128))) , (l_141 == &p_72)) <= p_457->g_27) , p_457->g_4.x), p_457->g_19[4])) && 0x1CL) ^ p_72) || 0x62DEL))) == (**l_129))) , (void*)0)))))) , (**p_457->g_99));
            for (p_72 = 5; (p_72 >= 57); p_72++)
            { /* block id: 48 */
                for (l_103 = (-24); (l_103 <= 10); l_103 = safe_add_func_uint16_t_u_u(l_103, 3))
                { /* block id: 51 */
                    uint32_t *l_149[6][6][1] = {{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}},{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}},{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}},{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}},{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}},{{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]},{&p_457->g_19[4]}}};
                    int i, j, k;
                    for (p_457->g_126 = 10; (p_457->g_126 >= 59); ++p_457->g_126)
                    { /* block id: 54 */
                        return l_149[5][2][0];
                    }
                }
                l_142[0] = ((VECTOR(int32_t, 8))(l_150.xyyyyxyy)).s7;
                return l_92;
            }
            l_153 ^= (l_142[0] = (safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), 1)));
            (*p_457->g_99) = &l_84;
        }
    }
    return &p_457->g_19[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_457->g_100 p_457->g_101
 * writes: p_457->g_99
 */
int32_t  func_73(int32_t  p_74, uint16_t  p_75, uint32_t * p_76, int64_t  p_77, struct S1 * p_457)
{ /* block id: 12 */
    int32_t **l_96[6] = {&p_457->g_51[1],&p_457->g_51[1],&p_457->g_51[1],&p_457->g_51[1],&p_457->g_51[1],&p_457->g_51[1]};
    int32_t ***l_95[7][3] = {{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]},{&l_96[0],&l_96[2],&l_96[0]}};
    int i, j;
    p_74 = (&p_457->g_19[4] != ((safe_add_func_int32_t_s_s((l_95[5][0] != ((~p_75) , &l_96[4])), ((safe_div_func_uint16_t_u_u((&p_457->g_51[5] == (p_77 , (p_457->g_99 = &p_457->g_51[1]))), ((((VECTOR(int16_t, 16))(((p_457->g_100 , p_457->g_100) , 0x2F62L), ((VECTOR(int16_t, 4))(0L)), 0x2A93L, 1L, 1L, 0x1863L, ((VECTOR(int16_t, 4))((-3L))), ((VECTOR(int16_t, 2))(0x6650L)), 0x2C13L)).s5 || 0x9C00L) | 8UL))) <= p_77))) , p_457->g_101[1][2][7]));
    return p_75;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S1 c_458;
    struct S1* p_457 = &c_458;
    struct S1 c_459 = {
        (VECTOR(int64_t, 2))(0x16652D0DA0BDBDF7L, 7L), // p_457->g_4
        {1UL,0x9B8DB370L,1UL,1UL,0x9B8DB370L,1UL,1UL,0x9B8DB370L}, // p_457->g_19
        0x0D79L, // p_457->g_27
        0x75F9BA4AL, // p_457->g_40
        {{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40},{(void*)0,(void*)0,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40,&p_457->g_40}}, // p_457->g_39
        0L, // p_457->g_48
        {&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48,&p_457->g_48}, // p_457->g_51
        &p_457->g_51[1], // p_457->g_50
        (void*)0, // p_457->g_52
        &p_457->g_51[1], // p_457->g_99
        {0x52E95444L,0x7DDD9272L,4L,0x1BE0E570L,0x895DEA71L}, // p_457->g_100
        {{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}},{{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1},{&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1,&p_457->g_100.f1,&p_457->g_100.f1,(void*)0,&p_457->g_100.f1}}}, // p_457->g_101
        6UL, // p_457->g_126
        0x37E0EDF6L, // p_457->g_156
        &p_457->g_156, // p_457->g_155
        &p_457->g_155, // p_457->g_154
        (VECTOR(int32_t, 2))(1L, 0x41ADAE8AL), // p_457->g_165
        (void*)0, // p_457->g_180
        {{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL},{0x1E5F7F78L,0x238EB0DDL,0x0EA2144EL,0x69EF097FL,4294967292UL}}, // p_457->g_208
        &p_457->g_208[0], // p_457->g_211
        0L, // p_457->g_216
        2UL, // p_457->g_245
        (VECTOR(uint64_t, 2))(1UL, 7UL), // p_457->g_250
        {{{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L}},{{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L}},{{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{1L,0UL,0x3E666A5DL,0x2FFCCE80L,4294967295UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L},{0x688306B9L,4294967287UL,0x5657C292L,0x48E4329EL,1UL},{0x43B590ABL,0x07981FA9L,-5L,0x7D3D4BE4L,0x733F8677L}}}, // p_457->g_259
        (VECTOR(uint16_t, 8))(0xFCC7L, (VECTOR(uint16_t, 4))(0xFCC7L, (VECTOR(uint16_t, 2))(0xFCC7L, 65535UL), 65535UL), 65535UL, 0xFCC7L, 65535UL), // p_457->g_272
        &p_457->g_27, // p_457->g_303
        {{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}},{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}},{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}},{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}},{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}},{{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303},{(void*)0,(void*)0,(void*)0,&p_457->g_303,(void*)0,(void*)0,(void*)0,(void*)0,&p_457->g_303,&p_457->g_303}}}, // p_457->g_302
        0x51273418L, // p_457->g_307
        {1L,0x87AE34F9L,0L,0x3E0CBF07L,0x15293718L}, // p_457->g_312
        {1L,0UL,0x1901845FL,0x161D6296L,0x5A277039L}, // p_457->g_318
        {{{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL}},{{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL}},{{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL},{(-1L),0x3470FF04L,0x0AE903EDL,(-1L),0x63B456FDL,0x0AE903EDL,0x0AE903EDL,0x63B456FDL,(-1L),0x0AE903EDL}}}, // p_457->g_347
        &p_457->g_347[0][1][3], // p_457->g_346
        (void*)0, // p_457->g_363
        &p_457->g_19[4], // p_457->g_372
        &p_457->g_372, // p_457->g_371
        &p_457->g_371, // p_457->g_370
        &p_457->g_370, // p_457->g_369
        1L, // p_457->g_374
        7UL, // p_457->g_381
        {0x43C58341L,1UL,0x66064974L,3L,4294967288UL}, // p_457->g_386
        1L, // p_457->g_451
        &p_457->g_156, // p_457->g_452
        255UL, // p_457->g_454
        0, // p_457->v_collective
        sequence_input[get_global_id(0)], // p_457->global_0_offset
        sequence_input[get_global_id(1)], // p_457->global_1_offset
        sequence_input[get_global_id(2)], // p_457->global_2_offset
        sequence_input[get_local_id(0)], // p_457->local_0_offset
        sequence_input[get_local_id(1)], // p_457->local_1_offset
        sequence_input[get_local_id(2)], // p_457->local_2_offset
        sequence_input[get_group_id(0)], // p_457->group_0_offset
        sequence_input[get_group_id(1)], // p_457->group_1_offset
        sequence_input[get_group_id(2)], // p_457->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_457->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_458 = c_459;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_457);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_457->g_4.x, "p_457->g_4.x", print_hash_value);
    transparent_crc(p_457->g_4.y, "p_457->g_4.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_457->g_19[i], "p_457->g_19[i]", print_hash_value);

    }
    transparent_crc(p_457->g_27, "p_457->g_27", print_hash_value);
    transparent_crc(p_457->g_40, "p_457->g_40", print_hash_value);
    transparent_crc(p_457->g_48, "p_457->g_48", print_hash_value);
    transparent_crc(p_457->g_100.f0, "p_457->g_100.f0", print_hash_value);
    transparent_crc(p_457->g_100.f1, "p_457->g_100.f1", print_hash_value);
    transparent_crc(p_457->g_100.f2, "p_457->g_100.f2", print_hash_value);
    transparent_crc(p_457->g_100.f3, "p_457->g_100.f3", print_hash_value);
    transparent_crc(p_457->g_100.f4, "p_457->g_100.f4", print_hash_value);
    transparent_crc(p_457->g_126, "p_457->g_126", print_hash_value);
    transparent_crc(p_457->g_156, "p_457->g_156", print_hash_value);
    transparent_crc(p_457->g_165.x, "p_457->g_165.x", print_hash_value);
    transparent_crc(p_457->g_165.y, "p_457->g_165.y", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_457->g_208[i].f0, "p_457->g_208[i].f0", print_hash_value);
        transparent_crc(p_457->g_208[i].f1, "p_457->g_208[i].f1", print_hash_value);
        transparent_crc(p_457->g_208[i].f2, "p_457->g_208[i].f2", print_hash_value);
        transparent_crc(p_457->g_208[i].f3, "p_457->g_208[i].f3", print_hash_value);
        transparent_crc(p_457->g_208[i].f4, "p_457->g_208[i].f4", print_hash_value);

    }
    transparent_crc(p_457->g_216, "p_457->g_216", print_hash_value);
    transparent_crc(p_457->g_245, "p_457->g_245", print_hash_value);
    transparent_crc(p_457->g_250.x, "p_457->g_250.x", print_hash_value);
    transparent_crc(p_457->g_250.y, "p_457->g_250.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_457->g_259[i][j].f0, "p_457->g_259[i][j].f0", print_hash_value);
            transparent_crc(p_457->g_259[i][j].f1, "p_457->g_259[i][j].f1", print_hash_value);
            transparent_crc(p_457->g_259[i][j].f2, "p_457->g_259[i][j].f2", print_hash_value);
            transparent_crc(p_457->g_259[i][j].f3, "p_457->g_259[i][j].f3", print_hash_value);
            transparent_crc(p_457->g_259[i][j].f4, "p_457->g_259[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_457->g_272.s0, "p_457->g_272.s0", print_hash_value);
    transparent_crc(p_457->g_272.s1, "p_457->g_272.s1", print_hash_value);
    transparent_crc(p_457->g_272.s2, "p_457->g_272.s2", print_hash_value);
    transparent_crc(p_457->g_272.s3, "p_457->g_272.s3", print_hash_value);
    transparent_crc(p_457->g_272.s4, "p_457->g_272.s4", print_hash_value);
    transparent_crc(p_457->g_272.s5, "p_457->g_272.s5", print_hash_value);
    transparent_crc(p_457->g_272.s6, "p_457->g_272.s6", print_hash_value);
    transparent_crc(p_457->g_272.s7, "p_457->g_272.s7", print_hash_value);
    transparent_crc(p_457->g_307, "p_457->g_307", print_hash_value);
    transparent_crc(p_457->g_312.f0, "p_457->g_312.f0", print_hash_value);
    transparent_crc(p_457->g_312.f1, "p_457->g_312.f1", print_hash_value);
    transparent_crc(p_457->g_312.f2, "p_457->g_312.f2", print_hash_value);
    transparent_crc(p_457->g_312.f3, "p_457->g_312.f3", print_hash_value);
    transparent_crc(p_457->g_312.f4, "p_457->g_312.f4", print_hash_value);
    transparent_crc(p_457->g_318.f0, "p_457->g_318.f0", print_hash_value);
    transparent_crc(p_457->g_318.f1, "p_457->g_318.f1", print_hash_value);
    transparent_crc(p_457->g_318.f2, "p_457->g_318.f2", print_hash_value);
    transparent_crc(p_457->g_318.f3, "p_457->g_318.f3", print_hash_value);
    transparent_crc(p_457->g_318.f4, "p_457->g_318.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_457->g_347[i][j][k], "p_457->g_347[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_457->g_374, "p_457->g_374", print_hash_value);
    transparent_crc(p_457->g_381, "p_457->g_381", print_hash_value);
    transparent_crc(p_457->g_386.f0, "p_457->g_386.f0", print_hash_value);
    transparent_crc(p_457->g_386.f1, "p_457->g_386.f1", print_hash_value);
    transparent_crc(p_457->g_386.f2, "p_457->g_386.f2", print_hash_value);
    transparent_crc(p_457->g_386.f3, "p_457->g_386.f3", print_hash_value);
    transparent_crc(p_457->g_386.f4, "p_457->g_386.f4", print_hash_value);
    transparent_crc(p_457->g_451, "p_457->g_451", print_hash_value);
    transparent_crc(p_457->g_454, "p_457->g_454", print_hash_value);
    transparent_crc(p_457->v_collective, "p_457->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 35; i++)
            transparent_crc(p_457->g_special_values[i + 35 * get_linear_group_id()], "p_457->g_special_values[i + 35 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 35; i++)
            transparent_crc(p_457->l_special_values[i], "p_457->l_special_values[i]", print_hash_value);
    transparent_crc(p_457->l_comm_values[get_linear_local_id()], "p_457->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_457->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_457->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
