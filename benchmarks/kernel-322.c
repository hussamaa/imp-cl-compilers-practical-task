// --atomics 3 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 10,15,35 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 1383270115

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   int8_t  f3;
   uint16_t  f4;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    union U0 g_25;
    int32_t g_30;
    int32_t g_33;
    int16_t g_52;
    int32_t g_65;
    VECTOR(int16_t, 4) g_79;
    int32_t g_84;
    int32_t *g_111;
    int32_t *g_112;
    int16_t g_113;
    uint16_t g_128[8];
    int64_t *g_144;
    uint64_t g_154;
    volatile uint64_t g_161;
    VECTOR(uint8_t, 2) g_170;
    volatile VECTOR(int32_t, 4) g_188;
    volatile VECTOR(int64_t, 4) g_192;
    volatile VECTOR(int64_t, 4) g_194;
    volatile VECTOR(int64_t, 16) g_195;
    volatile VECTOR(int64_t, 4) g_196;
    int32_t g_205;
    int32_t * volatile g_204[5];
    VECTOR(uint8_t, 8) g_220;
    int32_t *g_226;
    int32_t **g_225;
    int32_t *** volatile g_224;
    VECTOR(int32_t, 2) g_235;
    VECTOR(int32_t, 16) g_251;
    VECTOR(int8_t, 2) g_254;
    int32_t * volatile g_365;
    int8_t *g_370;
    int8_t **g_369;
    VECTOR(uint64_t, 16) g_376;
    VECTOR(int64_t, 4) g_388;
    int16_t *g_389[5][10];
    int32_t * volatile g_403;
    VECTOR(int64_t, 2) g_452;
    volatile VECTOR(int16_t, 2) g_514;
    volatile uint16_t g_530;
    VECTOR(int16_t, 16) g_557;
    VECTOR(int8_t, 16) g_558;
    VECTOR(int16_t, 8) g_597;
    VECTOR(int8_t, 16) g_600;
    volatile VECTOR(int8_t, 2) g_601;
    int32_t ** volatile g_609;
    volatile int32_t g_645;
    uint32_t g_647;
    uint16_t g_648;
    int32_t ** volatile g_650;
    uint32_t g_662[1][6][1];
    VECTOR(uint8_t, 2) g_672;
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
uint32_t  func_1(struct S1 * p_690);
int32_t * func_8(int32_t * p_9, uint64_t  p_10, struct S1 * p_690);
int32_t * func_11(union U0  p_12, int32_t * p_13, struct S1 * p_690);
union U0  func_14(int8_t  p_15, struct S1 * p_690);
int8_t  func_20(union U0  p_21, int32_t  p_22, int32_t  p_23, uint64_t  p_24, struct S1 * p_690);
int32_t * func_37(int32_t * p_38, uint32_t  p_39, int64_t  p_40, int32_t  p_41, int32_t * p_42, struct S1 * p_690);
int32_t * func_43(int32_t  p_44, uint32_t  p_45, int32_t * p_46, uint8_t  p_47, int32_t * p_48, struct S1 * p_690);
int32_t  func_49(int16_t  p_50, struct S1 * p_690);
int32_t * func_71(int32_t * p_72, int32_t * p_73, uint32_t  p_74, struct S1 * p_690);
int32_t * func_80(int32_t * p_81, uint64_t  p_82, struct S1 * p_690);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_690->g_5 p_690->g_79 p_690->g_65 p_690->g_111
 * writes: p_690->g_5 p_690->g_65
 */
uint32_t  func_1(struct S1 * p_690)
{ /* block id: 4 */
    uint32_t l_28[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    int32_t l_256 = 0x34304A75L;
    int32_t *l_675 = &l_256;
    int32_t *l_676 = &p_690->g_5;
    int32_t *l_677 = (void*)0;
    int32_t *l_678 = &p_690->g_65;
    int32_t *l_679 = &p_690->g_5;
    int32_t *l_680 = &p_690->g_65;
    int32_t *l_681 = &p_690->g_205;
    int32_t *l_682 = &p_690->g_5;
    int32_t *l_683 = &p_690->g_5;
    int32_t *l_684 = (void*)0;
    int32_t *l_685[5] = {&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65};
    int32_t l_686 = 1L;
    uint32_t l_687 = 4294967290UL;
    int i;
    for (p_690->g_5 = 0; (p_690->g_5 <= (-15)); p_690->g_5 = safe_sub_func_int32_t_s_s(p_690->g_5, 1))
    { /* block id: 7 */
        int32_t *l_29 = &p_690->g_30;
        int32_t *l_31 = (void*)0;
        int32_t *l_32 = &p_690->g_33;
        int32_t l_34[4] = {0x46C8951BL,0x46C8951BL,0x46C8951BL,0x46C8951BL};
        int32_t *l_255[3];
        int8_t *l_257 = (void*)0;
        int8_t *l_258 = &p_690->g_25.f3;
        int i;
        for (i = 0; i < 3; i++)
            l_255[i] = &p_690->g_65;
        (1 + 1);
    }
    if ((safe_div_func_uint16_t_u_u(p_690->g_79.z, l_256)))
    { /* block id: 339 */
        uint64_t l_653 = 0xB7366947DB3AF95FL;
        return l_653;
    }
    else
    { /* block id: 341 */
        VECTOR(int8_t, 16) l_658 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x56L), 0x56L), 0x56L, (-1L), 0x56L, (VECTOR(int8_t, 2))((-1L), 0x56L), (VECTOR(int8_t, 2))((-1L), 0x56L), (-1L), 0x56L, (-1L), 0x56L);
        int32_t *l_659[3];
        int i;
        for (i = 0; i < 3; i++)
            l_659[i] = &p_690->g_84;
        for (p_690->g_65 = 27; (p_690->g_65 == 26); p_690->g_65--)
        { /* block id: 344 */
            int32_t l_663 = 0x47C642AEL;
            int32_t **l_673 = (void*)0;
            int32_t **l_674 = &p_690->g_112;
            (1 + 1);
        }
        (*p_690->g_111) = 0L;
    }
    l_687--;
    return (*l_678);
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_403 p_690->g_25.f3 p_690->g_128 p_690->l_comm_values p_690->g_113 p_690->g_452 p_690->g_369 p_690->g_370 p_690->g_254 p_690->g_65 p_690->g_194 p_690->g_79 p_690->g_226 p_690->g_645 p_690->g_647 p_690->g_648 p_690->g_224 p_690->g_33 p_690->g_609 p_690->g_111
 * writes: p_690->g_65 p_690->g_25.f1 p_690->g_254 p_690->l_comm_values p_690->g_647 p_690->g_225 p_690->g_112
 */
int32_t * func_8(int32_t * p_9, uint64_t  p_10, struct S1 * p_690)
{ /* block id: 242 */
    int8_t l_401 = (-4L);
    VECTOR(int64_t, 16) l_406 = (VECTOR(int64_t, 16))(0x2DAE3BD2129802A1L, (VECTOR(int64_t, 4))(0x2DAE3BD2129802A1L, (VECTOR(int64_t, 2))(0x2DAE3BD2129802A1L, (-1L)), (-1L)), (-1L), 0x2DAE3BD2129802A1L, (-1L), (VECTOR(int64_t, 2))(0x2DAE3BD2129802A1L, (-1L)), (VECTOR(int64_t, 2))(0x2DAE3BD2129802A1L, (-1L)), 0x2DAE3BD2129802A1L, (-1L), 0x2DAE3BD2129802A1L, (-1L));
    VECTOR(int64_t, 2) l_407 = (VECTOR(int64_t, 2))(0x689C13B04F1B9D26L, 4L);
    uint16_t l_424 = 0xAAB1L;
    int64_t *l_453 = (void*)0;
    int64_t *l_454 = (void*)0;
    int64_t *l_455 = (void*)0;
    int64_t *l_456[4][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_457 = 0x633EDC65L;
    int32_t **l_468 = &p_690->g_226;
    VECTOR(uint32_t, 2) l_483 = (VECTOR(uint32_t, 2))(0x23A53F82L, 0x706BBD29L);
    VECTOR(int16_t, 2) l_555 = (VECTOR(int16_t, 2))(4L, 0x4CF6L);
    VECTOR(int16_t, 16) l_556 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x566DL), 0x566DL), 0x566DL, 0L, 0x566DL, (VECTOR(int16_t, 2))(0L, 0x566DL), (VECTOR(int16_t, 2))(0L, 0x566DL), 0L, 0x566DL, 0L, 0x566DL);
    uint16_t l_580 = 0UL;
    int32_t l_624[8][8][1] = {{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}}};
    uint64_t l_625[3];
    int16_t l_631 = (-6L);
    uint16_t *l_638[8][9] = {{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]},{&l_580,&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&p_690->g_128[3],&l_580,(void*)0,&p_690->g_128[3]}};
    uint16_t **l_637 = &l_638[0][3];
    VECTOR(uint32_t, 16) l_643 = (VECTOR(uint32_t, 16))(0x95411E68L, (VECTOR(uint32_t, 4))(0x95411E68L, (VECTOR(uint32_t, 2))(0x95411E68L, 0x5D2DE04AL), 0x5D2DE04AL), 0x5D2DE04AL, 0x95411E68L, 0x5D2DE04AL, (VECTOR(uint32_t, 2))(0x95411E68L, 0x5D2DE04AL), (VECTOR(uint32_t, 2))(0x95411E68L, 0x5D2DE04AL), 0x95411E68L, 0x5D2DE04AL, 0x95411E68L, 0x5D2DE04AL);
    int32_t l_644 = (-1L);
    uint32_t *l_646[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_649 = &p_690->g_112;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_625[i] = 18446744073709551608UL;
    if (l_401)
    { /* block id: 243 */
        VECTOR(uint32_t, 4) l_402 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), 4294967295UL);
        int i;
        (*p_690->g_403) = l_402.x;
    }
    else
    { /* block id: 245 */
        VECTOR(int64_t, 4) l_408 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x577AFF9587E2E0DDL), 0x577AFF9587E2E0DDL);
        int32_t **l_420 = &p_690->g_112;
        int32_t ***l_419 = &l_420;
        uint32_t *l_421 = &p_690->g_25.f1;
        int32_t l_422 = (-7L);
        VECTOR(uint8_t, 2) l_423 = (VECTOR(uint8_t, 2))(0x27L, 0x17L);
        int32_t *l_425 = &p_690->g_65;
        int8_t *l_426 = (void*)0;
        int8_t *l_427[7] = {&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401};
        int64_t *l_428 = (void*)0;
        int64_t *l_429 = (void*)0;
        int64_t *l_430[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_431 = 0x0903708AL;
        int i;
        l_431 |= (safe_add_func_int64_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(5L, 1L, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_406.s72)))).xxxxxyxyyxxxxyxy)).s1c, ((VECTOR(int64_t, 16))(l_407.yyyxxxyyyxyxxxxy)).saf))))).yyyy))), ((VECTOR(int64_t, 2))(l_408.yx)), (p_690->l_comm_values[(safe_mod_func_uint32_t_u_u(p_690->tid, 2))] |= ((((safe_div_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0x8704L, (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((p_690->g_254.y = (safe_mod_func_uint32_t_u_u(((*l_421) = (&p_690->g_204[1] == ((*l_419) = (p_690->g_25.f3 , &p_690->g_111)))), ((*l_425) = ((((l_422 = l_406.s3) == (((VECTOR(uint8_t, 4))(l_423.yyxx)).x , p_10)) >= 0x0A75DFBF66B208CFL) || (l_424 > 0L)))))) > 0x11L), p_10)), l_406.sd)), 0x980EL, 65528UL)).z, 0x6779L)) , 0x6ECB2DCB8E8178F7L), p_690->g_128[1])) == p_10) , p_10) <= p_10)), ((VECTOR(int64_t, 2))(1L)), p_10, l_407.y, ((VECTOR(int64_t, 2))(0x55CD401BC52D92E5L)), 0x16E33CF5190F697BL)), ((VECTOR(int64_t, 16))(0x7716862B55BD7198L)), ((VECTOR(int64_t, 16))(0x4BF593E0B7A38470L))))).odd)).s2 <= p_10), p_690->g_113));
        if ((atomic_inc(&p_690->l_atomic_input[2]) == 7))
        { /* block id: 254 */
            int32_t l_432 = 1L;
            int32_t *l_437[4][5][7] = {{{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432}},{{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432}},{{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432}},{{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432},{(void*)0,&l_432,(void*)0,&l_432,(void*)0,&l_432,&l_432}}};
            int32_t *l_438[4][3][7] = {{{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432,&l_432,&l_432,&l_432}}};
            uint32_t l_439 = 0UL;
            int64_t l_448 = (-1L);
            int32_t l_449 = 0L;
            int i, j, k;
            for (l_432 = 0; (l_432 > (-29)); --l_432)
            { /* block id: 257 */
                uint32_t l_435 = 0x162A5384L;
                int8_t l_436 = 5L;
                l_436 = (l_435 = (-1L));
            }
            l_438[0][1][1] = l_437[2][0][2];
            if (l_439)
            { /* block id: 262 */
                VECTOR(int32_t, 2) l_440 = (VECTOR(int32_t, 2))(0x01ACA9A6L, 0L);
                VECTOR(int32_t, 8) l_441 = (VECTOR(int32_t, 8))(0x32FE35AFL, (VECTOR(int32_t, 4))(0x32FE35AFL, (VECTOR(int32_t, 2))(0x32FE35AFL, (-1L)), (-1L)), (-1L), 0x32FE35AFL, (-1L));
                VECTOR(int32_t, 2) l_442 = (VECTOR(int32_t, 2))((-1L), (-2L));
                int16_t l_443[10][1] = {{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L},{0x3403L}};
                int8_t l_444 = 0x56L;
                int32_t l_445 = 2L;
                int i, j;
                l_440.x = (l_445 &= ((VECTOR(int32_t, 16))((-1L), 0x668A2873L, ((VECTOR(int32_t, 2))(l_440.yy)), 0x7FE23489L, 0x4B908F12L, 0x1193C48FL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_441.s7213)).odd)), ((VECTOR(int32_t, 2))(l_442.xy)), l_443[8][0], l_444, 0x277FB132L, 0x1371214BL, 0x1B573E32L)).s7);
            }
            else
            { /* block id: 265 */
                VECTOR(int32_t, 4) l_446 = (VECTOR(int32_t, 4))(0x59505210L, (VECTOR(int32_t, 2))(0x59505210L, 0x49912EF2L), 0x49912EF2L);
                uint32_t l_447 = 4294967287UL;
                int i;
                l_447 &= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_446.zxww)).lo)).hi;
            }
            l_449 ^= l_448;
            unsigned int result = 0;
            result += l_432;
            result += l_439;
            result += l_448;
            result += l_449;
            atomic_add(&p_690->l_special_values[2], result);
        }
        else
        { /* block id: 269 */
            (1 + 1);
        }
    }
    if ((safe_add_func_int64_t_s_s((l_457 ^= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(5L, 0x2DC88F44EBD9F340L)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_690->g_452.yxyyxxxxxxxxyyyx)))))).s30))), (-9L), 0x4AB1AF46A5CFA9DFL)).odd)).yyxxyxxx))).s44, ((VECTOR(int64_t, 2))(5L, 0L))))), 1L, (-7L))).x), GROUP_DIVERGE(1, 1))))
    { /* block id: 274 */
        int32_t ***l_469 = &l_468;
        int32_t l_474 = 0x1B33173AL;
        int32_t *l_475 = &p_690->g_65;
        int32_t l_476 = (-9L);
        int8_t *l_479 = &l_401;
        VECTOR(int16_t, 8) l_515 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3D4AL), 0x3D4AL), 0x3D4AL, 0L, 0x3D4AL);
        VECTOR(int8_t, 8) l_518 = (VECTOR(int8_t, 8))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 0x29L), 0x29L), 0x29L, 0x77L, 0x29L);
        VECTOR(int16_t, 2) l_554 = (VECTOR(int16_t, 2))(0x1BFFL, 8L);
        VECTOR(uint8_t, 2) l_559 = (VECTOR(uint8_t, 2))(0UL, 0x04L);
        int32_t l_589 = (-6L);
        int32_t l_590 = 0x7A02942AL;
        int32_t l_591 = 1L;
        VECTOR(int8_t, 4) l_602 = (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, 0x74L), 0x74L);
        int8_t *l_618 = &l_401;
        int i;
        if (((safe_add_func_uint8_t_u_u((((((p_690->g_128[2] , (safe_div_func_int64_t_s_s((l_476 ^= (l_457 = (safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((((*p_690->g_369) == (void*)0) < (((safe_div_func_int32_t_s_s(l_406.s8, 0x496A92C1L)) >= (&p_690->g_226 == ((*l_469) = l_468))) || ((((*l_475) = (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((safe_mod_func_uint64_t_u_u((p_10 > (((func_14(p_10, p_690) , 0x40D2A98ECECE4411L) ^ p_10) >= p_10)), l_474)), 0L, 0x08L, 0L)))), p_10, 3L, (-10L), (-1L), 0x40L, ((VECTOR(int8_t, 2))(0x6CL)), 0x00L, l_407.x, ((VECTOR(int8_t, 2))(0L)), 0L)).lo)).s63)).yxyxxyyxxyyyyxyx)).s4, p_10))) || l_457) , p_690->g_254.y))) >= p_10), l_474)) & p_10), 0x5966L)))), l_474))) == p_690->g_128[3]) <= p_10) == p_10) > 1L), (-1L))) <= l_474))
        { /* block id: 279 */
            VECTOR(uint32_t, 4) l_482 = (VECTOR(uint32_t, 4))(0xEA6BC2D7L, (VECTOR(uint32_t, 2))(0xEA6BC2D7L, 1UL), 1UL);
            int32_t l_538 = 1L;
            VECTOR(uint8_t, 2) l_560 = (VECTOR(uint8_t, 2))(0x09L, 5UL);
            uint32_t l_592 = 0xDB405B9BL;
            VECTOR(int8_t, 8) l_605 = (VECTOR(int8_t, 8))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 0L), 0L), 0L, 0x40L, 0L);
            VECTOR(int8_t, 4) l_606 = (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, (-4L)), (-4L));
            uint8_t *l_608 = (void*)0;
            int i;
            l_476 |= (*p_690->g_403);
            for (l_474 = 0; (l_474 == (-21)); l_474 = safe_sub_func_int16_t_s_s(l_474, 8))
            { /* block id: 283 */
                int32_t *l_508 = &p_690->g_205;
                int8_t ***l_509 = &p_690->g_369;
                uint8_t *l_523[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                uint16_t l_552 = 8UL;
                int32_t l_588[6][4][2] = {{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}},{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}},{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}},{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}},{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}},{{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL},{0x3CBD8B73L,0x2A68788CL}}};
                int16_t *l_607 = &p_690->g_52;
                int i, j, k;
                (1 + 1);
            }
        }
        else
        { /* block id: 322 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_690->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((1L <= (*l_475)), (((p_10 != (255UL ^ (p_690->g_194.z , (safe_lshift_func_uint8_t_u_s((GROUP_DIVERGE(2, 1) ^ (9UL >= (safe_mul_func_uint8_t_u_u(p_690->g_79.x, 0x1EL)))), ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((-1L), 0x2FL, 0L, 0L)).xwyyyzzw)).s0140217167737151, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 4))(l_424, 0x64L, (-1L), 0x26L)).yyxwwxywxxxyzwyz, ((VECTOR(int8_t, 16))(0x66L))))), ((VECTOR(int8_t, 16))(0x61L))))).s8))))) , (void*)0) == l_618))), p_10)), 10))][(safe_mod_func_uint32_t_u_u(p_690->tid, 2))]));
        }
    }
    else
    { /* block id: 327 */
        int32_t *l_619 = &l_457;
        int32_t *l_620 = &p_690->g_65;
        int32_t *l_621 = (void*)0;
        int32_t *l_622 = &l_457;
        int32_t *l_623[2];
        uint64_t l_628 = 0x42C298801DA727CCL;
        uint8_t l_632[8][8] = {{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL},{0UL,0x81L,0UL,0UL,0x81L,0UL,0xFAL,0UL}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_623[i] = (void*)0;
        ++l_625[2];
        --l_628;
        --l_632[2][1];
    }
    (*l_649) = func_80(func_37((*l_468), (p_690->g_647 |= ((((safe_lshift_func_int16_t_s_s(((((*l_637) = &l_424) == ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(0x2B76L, 10)), (l_631 ^ 0x646176BEL))) , &l_580)) > l_624[5][4][0]), 2)) < p_10) & (((VECTOR(uint32_t, 4))(l_643.s960c)).z , ((((l_468 != &p_690->g_226) == l_644) > 0x32L) > p_690->g_645))) | 0x755B8C471CADE01FL)), p_10, p_690->g_648, (*l_468), p_690), p_690->g_33, p_690);
    return (*p_690->g_609);
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_365 p_690->g_65 p_690->g_369 p_690->g_376 p_690->g_370 p_690->g_220 p_690->g_79 p_690->g_388 p_690->g_111 p_690->g_5 p_690->g_113
 * writes: p_690->g_65 p_690->g_369 p_690->g_220 p_690->g_comm_values p_690->g_389 p_690->g_113
 */
int32_t * func_11(union U0  p_12, int32_t * p_13, struct S1 * p_690)
{ /* block id: 216 */
    VECTOR(int32_t, 16) l_366 = (VECTOR(int32_t, 16))(0x6CA1EB8CL, (VECTOR(int32_t, 4))(0x6CA1EB8CL, (VECTOR(int32_t, 2))(0x6CA1EB8CL, 0x68413501L), 0x68413501L), 0x68413501L, 0x6CA1EB8CL, 0x68413501L, (VECTOR(int32_t, 2))(0x6CA1EB8CL, 0x68413501L), (VECTOR(int32_t, 2))(0x6CA1EB8CL, 0x68413501L), 0x6CA1EB8CL, 0x68413501L, 0x6CA1EB8CL, 0x68413501L);
    int8_t **l_373 = &p_690->g_370;
    uint8_t *l_377 = (void*)0;
    VECTOR(int64_t, 8) l_387 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 2L), 2L), 2L, 0L, 2L);
    int32_t *l_400 = (void*)0;
    int i;
    (*p_13) ^= (safe_mod_func_int64_t_s_s(p_12.f0, (p_12.f0 , 1UL)));
    (*p_690->g_365) &= ((*p_13) = (0x2E0908E6L == FAKE_DIVERGE(p_690->local_1_offset, get_local_id(1), 10)));
    if (((VECTOR(int32_t, 8))(l_366.s30974d87)).s3)
    { /* block id: 220 */
        int8_t **l_372 = &p_690->g_370;
        int8_t ***l_371[1][4] = {{&l_372,&l_372,&l_372,&l_372}};
        uint8_t **l_378 = &l_377;
        VECTOR(int64_t, 8) l_381 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 7L), 7L), 7L, 0L, 7L);
        VECTOR(int64_t, 2) l_382 = (VECTOR(int64_t, 2))((-1L), 7L);
        int64_t *l_383 = (void*)0;
        int64_t *l_384 = (void*)0;
        int64_t *l_385 = (void*)0;
        int64_t *l_386 = (void*)0;
        int16_t *l_390 = &p_690->g_52;
        int32_t l_391 = 1L;
        int32_t *l_392[5][4] = {{(void*)0,&p_690->g_5,&l_391,(void*)0},{(void*)0,&p_690->g_5,&l_391,(void*)0},{(void*)0,&p_690->g_5,&l_391,(void*)0},{(void*)0,&p_690->g_5,&l_391,(void*)0},{(void*)0,&p_690->g_5,&l_391,(void*)0}};
        uint16_t l_393 = 0UL;
        int i, j;
        atomic_or(&p_690->g_atomic_reduction[get_linear_group_id()], ((((((VECTOR(int16_t, 4))((((1UL <= (((l_373 = (p_690->g_369 = p_690->g_369)) == ((safe_mod_func_int64_t_s_s(((p_690->g_389[1][4] = (((((VECTOR(uint64_t, 2))(p_690->g_376.s6c)).odd >= (((l_366.sa , p_690->g_370) != ((*l_378) = l_377)) && (safe_lshift_func_int8_t_s_u(p_12.f0, (p_690->g_220.s2 |= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(3UL, 0x63L)), 0xF6L, 248UL)).z))))) | ((p_690->g_79.w , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(0x66353F31BB729DD3L, ((VECTOR(int64_t, 8))(l_381.s16614041)).s6, ((VECTOR(int64_t, 2))(l_382.xx)), (p_690->g_comm_values[p_690->tid] = l_381.s1), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_387.s7222)).y, ((VECTOR(int64_t, 2))(1L, 0x42BB65246299686DL)), 0x754F3BCDFE71D498L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_690->g_388.xzwx)))))), (int64_t)(0x7A181BADL || l_381.s4)))).lo)).lo, (int64_t)p_12.f0))), 6L)).s66)))), (-1L), 0x25ED643687EE1269L)))).w) < p_690->g_79.x)) , &p_690->g_52)) == l_390), l_381.s4)) , &p_690->g_370)) < l_366.s3)) , (-1L)) >= 18446744073709551609UL), p_12.f0, 0x1FC6L, 0x6E99L)).x ^ 0x717FL) > 1L) || p_690->g_79.z) , (*p_690->g_111)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_690->v_collective += p_690->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_393++;
        for (p_12.f0 = 0; (p_12.f0 <= (-27)); --p_12.f0)
        { /* block id: 231 */
            return &p_690->g_5;
        }
    }
    else
    { /* block id: 234 */
        for (p_690->g_113 = 0; (p_690->g_113 <= (-19)); p_690->g_113--)
        { /* block id: 237 */
            return p_13;
        }
    }
    return l_400;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0  func_14(int8_t  p_15, struct S1 * p_690)
{ /* block id: 122 */
    union U0 l_362[5][7] = {{{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL}},{{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL}},{{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL}},{{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL}},{{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL},{0x7B0583BFL},{0x4830114DL},{0x4830114DL}}};
    int i, j;
    if ((atomic_inc(&p_690->l_atomic_input[1]) == 7))
    { /* block id: 124 */
        uint64_t l_259[6] = {0x0BE39DC0D136BAE7L,0xDDC5846502CA6F65L,0x0BE39DC0D136BAE7L,0x0BE39DC0D136BAE7L,0xDDC5846502CA6F65L,0x0BE39DC0D136BAE7L};
        uint32_t l_260 = 0x2DB2D0B9L;
        int32_t *l_329 = (void*)0;
        VECTOR(int16_t, 4) l_330 = (VECTOR(int16_t, 4))(0x6FB1L, (VECTOR(int16_t, 2))(0x6FB1L, (-7L)), (-7L));
        int i;
        if ((l_260 = l_259[4]))
        { /* block id: 126 */
            int32_t l_262 = (-1L);
            int32_t *l_261 = &l_262;
            int32_t *l_263 = &l_262;
            int32_t *l_264 = &l_262;
            int32_t *l_265 = &l_262;
            int32_t *l_266 = &l_262;
            int32_t *l_267 = &l_262;
            int32_t *l_268 = &l_262;
            uint16_t l_271 = 0x503CL;
            uint16_t *l_270 = &l_271;
            uint16_t **l_269 = &l_270;
            uint16_t **l_272 = &l_270;
            int8_t l_273 = 0x78L;
            l_264 = (l_263 = (l_261 = (void*)0));
            l_268 = (l_267 = (l_266 = l_265));
            l_272 = l_269;
            if ((l_273 = 0L))
            { /* block id: 135 */
                uint16_t l_274 = 65535UL;
                uint32_t l_275 = 0x12D69AF1L;
                int64_t l_304 = 0x76BEEB7112F18913L;
                (*l_267) &= l_274;
                if (l_275)
                { /* block id: 137 */
                    int32_t l_276 = 0x09AEBDD5L;
                    VECTOR(int16_t, 4) l_283 = (VECTOR(int16_t, 4))(0x1799L, (VECTOR(int16_t, 2))(0x1799L, (-1L)), (-1L));
                    uint32_t l_284 = 0x4F74A302L;
                    int8_t l_290 = 0x01L;
                    uint32_t l_291 = 0x686A528BL;
                    int i;
                    for (l_276 = 0; (l_276 != 16); l_276++)
                    { /* block id: 140 */
                        VECTOR(int8_t, 4) l_279 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x6AL), 0x6AL);
                        uint32_t l_280 = 4294967295UL;
                        int i;
                        --l_280;
                    }
                    if (((l_283.x , (l_284 = 4294967293UL)) , ((*l_268) = (-2L))))
                    { /* block id: 145 */
                        int32_t l_286 = (-9L);
                        int32_t *l_285 = &l_286;
                        int32_t *l_287[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_267 = l_285;
                        l_287[3] = (l_266 = l_287[3]);
                        l_267 = (void*)0;
                    }
                    else
                    { /* block id: 150 */
                        uint32_t l_288 = 0xA3E0D74FL;
                        int16_t l_289 = 0x35F9L;
                        (*l_266) |= l_288;
                        l_289 &= ((*l_266) = 0x241E7763L);
                    }
                    (*l_268) |= l_290;
                    l_276 = l_291;
                }
                else
                { /* block id: 157 */
                    VECTOR(int32_t, 16) l_292 = (VECTOR(int32_t, 16))(0x7848F689L, (VECTOR(int32_t, 4))(0x7848F689L, (VECTOR(int32_t, 2))(0x7848F689L, 0x40DEA73EL), 0x40DEA73EL), 0x40DEA73EL, 0x7848F689L, 0x40DEA73EL, (VECTOR(int32_t, 2))(0x7848F689L, 0x40DEA73EL), (VECTOR(int32_t, 2))(0x7848F689L, 0x40DEA73EL), 0x7848F689L, 0x40DEA73EL, 0x7848F689L, 0x40DEA73EL);
                    int32_t l_293 = (-6L);
                    uint64_t l_294 = 18446744073709551614UL;
                    int64_t l_297 = 1L;
                    VECTOR(uint16_t, 16) l_298 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), 65530UL), 65530UL, 0UL, 65530UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), (VECTOR(uint16_t, 2))(0UL, 65530UL), 0UL, 65530UL, 0UL, 65530UL);
                    int8_t *l_302 = (void*)0;
                    int8_t **l_301 = &l_302;
                    int8_t **l_303 = (void*)0;
                    int i;
                    (*l_268) = ((VECTOR(int32_t, 2))(l_292.se1)).even;
                    l_294++;
                    ++l_298.sf;
                    l_303 = l_301;
                }
                (*l_268) |= l_304;
            }
            else
            { /* block id: 164 */
                uint8_t l_305 = 4UL;
                --l_305;
                for (l_305 = 0; (l_305 == 54); l_305++)
                { /* block id: 168 */
                    VECTOR(int32_t, 4) l_310 = (VECTOR(int32_t, 4))(0x724CAD0BL, (VECTOR(int32_t, 2))(0x724CAD0BL, 0L), 0L);
                    int i;
                    (*l_266) |= ((VECTOR(int32_t, 4))(l_310.yyyx)).y;
                }
            }
        }
        else
        { /* block id: 172 */
            int32_t l_311 = 0L;
            uint8_t l_312 = 0x38L;
            uint32_t l_315 = 0xCB5EA101L;
            VECTOR(int64_t, 4) l_316 = (VECTOR(int64_t, 4))(0x7F1BEE34228D4045L, (VECTOR(int64_t, 2))(0x7F1BEE34228D4045L, 6L), 6L);
            VECTOR(int32_t, 2) l_317 = (VECTOR(int32_t, 2))(0x2C1F1BCAL, 0L);
            int32_t l_319[10] = {0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL,0x2F8B529CL};
            int32_t *l_318 = &l_319[3];
            int32_t *l_320 = (void*)0;
            uint64_t l_321 = 0x6810A47875CFD7D5L;
            int64_t l_322 = (-1L);
            uint16_t l_323[5][9][1] = {{{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L}},{{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L}},{{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L}},{{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L}},{{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L},{0x5C84L}}};
            VECTOR(int32_t, 2) l_324 = (VECTOR(int32_t, 2))((-6L), 0x500D3A47L);
            uint32_t l_325[6] = {0x010339ABL,0x12EFF393L,0x010339ABL,0x010339ABL,0x12EFF393L,0x010339ABL};
            int64_t l_326 = 1L;
            uint8_t l_327[8][4][2] = {{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}},{{255UL,1UL},{255UL,1UL},{255UL,1UL},{255UL,1UL}}};
            VECTOR(int32_t, 4) l_328 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 1L), 1L);
            int i, j, k;
            ++l_312;
            l_317.x = (l_316.x = l_315);
            l_320 = l_318;
            (*l_318) |= (l_321 , ((l_322 , GROUP_DIVERGE(1, 1)) , (l_323[2][0][0] , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_324.xyxx)), (l_327[1][3][1] = (l_326 = (l_325[5] = 0L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_328.zz)).xyxxxxyx)), 0L, 0x783CF02EL, (-7L))).s52))).yyxx)).w)));
        }
        l_329 = l_329;
        if (l_330.x)
        { /* block id: 183 */
            int32_t l_331 = 7L;
            for (l_331 = 1; (l_331 < (-8)); --l_331)
            { /* block id: 186 */
                uint16_t l_334 = 65535UL;
                int16_t l_335 = 0x4667L;
                VECTOR(int32_t, 16) l_336 = (VECTOR(int32_t, 16))(0x0B1E7827L, (VECTOR(int32_t, 4))(0x0B1E7827L, (VECTOR(int32_t, 2))(0x0B1E7827L, 0x15C670C3L), 0x15C670C3L), 0x15C670C3L, 0x0B1E7827L, 0x15C670C3L, (VECTOR(int32_t, 2))(0x0B1E7827L, 0x15C670C3L), (VECTOR(int32_t, 2))(0x0B1E7827L, 0x15C670C3L), 0x0B1E7827L, 0x15C670C3L, 0x0B1E7827L, 0x15C670C3L);
                uint16_t l_337 = 0UL;
                int16_t l_338 = (-10L);
                int32_t *l_339 = (void*)0;
                uint32_t l_340 = 0xDD8FAB95L;
                uint16_t l_341 = 0x5812L;
                int16_t l_342 = 0x4699L;
                uint64_t l_343 = 0x8666FD07E57CFAD9L;
                uint32_t l_344 = 0x5B6B452FL;
                uint8_t l_345 = 0x71L;
                int32_t l_347 = 1L;
                int32_t *l_346 = &l_347;
                int32_t *l_348 = &l_347;
                int32_t *l_349[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_349[i] = &l_347;
                l_329 = (l_334 , (l_335 , (void*)0));
                l_338 |= (l_337 |= l_336.s5);
                l_329 = l_339;
                l_349[0] = (l_348 = ((l_340 = 0x2EBB88A4L) , (l_346 = (l_339 = (l_329 = (((l_341 , l_342) , (l_344 = l_343)) , (l_345 , (void*)0)))))));
            }
        }
        else
        { /* block id: 199 */
            int8_t l_350 = (-6L);
            if (l_350)
            { /* block id: 200 */
                int32_t l_351 = 0x408928B4L;
                int32_t l_352 = 0x70455387L;
                uint32_t l_353 = 0xAAD7EE6BL;
                int32_t l_354 = 2L;
                int64_t l_355 = (-1L);
                int16_t l_356 = 1L;
                l_352 = l_351;
                l_356 &= (l_355 = (l_354 &= l_353));
            }
            else
            { /* block id: 205 */
                int32_t l_357 = 0L;
                int16_t l_358 = (-10L);
                uint64_t l_359 = 0xC6545C969D0910C1L;
                uint8_t l_360 = 5UL;
                uint16_t l_361[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_361[i] = 0UL;
                l_359 = (l_358 = l_357);
                l_329 = (void*)0;
                l_361[0] = l_360;
            }
        }
        unsigned int result = 0;
        int l_259_i0;
        for (l_259_i0 = 0; l_259_i0 < 6; l_259_i0++) {
            result += l_259[l_259_i0];
        }
        result += l_260;
        result += l_330.w;
        result += l_330.z;
        result += l_330.y;
        result += l_330.x;
        atomic_add(&p_690->l_special_values[1], result);
    }
    else
    { /* block id: 212 */
        (1 + 1);
    }
    return l_362[2][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_33 p_690->g_111 p_690->g_65 p_690->g_112 p_690->g_161 p_690->g_170 p_690->g_comm_values p_690->g_128 p_690->g_188 p_690->g_192 p_690->g_194 p_690->g_195 p_690->g_196 p_690->l_comm_values p_690->g_79 p_690->g_113 p_690->g_2 p_690->g_220 p_690->g_224 p_690->g_235 p_690->g_205 p_690->g_25 p_690->g_251
 * writes: p_690->g_52 p_690->g_33 p_690->g_112 p_690->g_161 p_690->g_154 p_690->g_65 p_690->g_113 p_690->g_225 p_690->g_111 p_690->g_25.f4
 */
int8_t  func_20(union U0  p_21, int32_t  p_22, int32_t  p_23, uint64_t  p_24, struct S1 * p_690)
{ /* block id: 10 */
    int32_t **l_169[7] = {(void*)0,&p_690->g_111,(void*)0,(void*)0,&p_690->g_111,(void*)0,(void*)0};
    int32_t *l_172 = &p_690->g_25.f0;
    VECTOR(int32_t, 8) l_236 = (VECTOR(int32_t, 8))(0x449502B8L, (VECTOR(int32_t, 4))(0x449502B8L, (VECTOR(int32_t, 2))(0x449502B8L, 0x740358BFL), 0x740358BFL), 0x740358BFL, 0x449502B8L, 0x740358BFL);
    int i;
    for (p_21.f0 = 2; (p_21.f0 <= 6); p_21.f0 = safe_add_func_uint8_t_u_u(p_21.f0, 9))
    { /* block id: 13 */
        int16_t *l_51 = &p_690->g_52;
        VECTOR(int32_t, 2) l_164 = (VECTOR(int32_t, 2))((-1L), (-1L));
        uint64_t l_171 = 0xDAE2F31F1FEEA04FL;
        int32_t *l_173 = &p_690->g_65;
        VECTOR(int32_t, 4) l_237 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x235149B1L), 0x235149B1L);
        int32_t ***l_248 = &p_690->g_225;
        uint8_t l_249 = 0UL;
        uint16_t *l_250 = &p_690->g_25.f4;
        int i;
        p_690->g_111 = func_37(func_43((func_49(((*l_51) = 5L), p_690) , (&p_690->g_52 == (void*)0)), ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_164.xxyxyyxx)))).s5 && ((VECTOR(uint32_t, 16))((safe_div_func_uint32_t_u_u(((&p_690->g_111 == &p_690->g_111) != ((l_171 = ((FAKE_DIVERGE(p_690->group_1_offset, get_group_id(1), 10) < ((void*)0 != l_169[1])) <= (((VECTOR(uint8_t, 4))(p_690->g_170.yxxx)).x ^ (p_690->g_comm_values[p_690->tid] ^ l_164.y)))) | 0x144FEC2EL)), 0x831CB3A6L)), ((VECTOR(uint32_t, 8))(0x3F69FC18L)), ((VECTOR(uint32_t, 4))(0x13AD8628L)), 0xE1DEEF00L, 0x05E8D5C6L, 0xD10CDFC8L)).s8) ^ p_24), l_172, l_164.x, l_173, p_690), p_21.f0, p_22, p_23, l_173, p_690);
        l_164.x &= ((*l_173) = ((((safe_sub_func_uint8_t_u_u(p_690->g_79.w, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(0x5E16L, ((*l_250) = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0x9351L, p_24, 0x854DL, 65534UL, ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))((-1L), 0x61929B63L)).xxxx, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_690->g_235.yxxyyyxx)).odd)))).wyxzyyxyyyywwzwz)).even)))).s00)), ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_236.s6774)).z, (-7L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))((-2L), (-7L), (&p_690->g_5 != &p_690->g_4), p_24, 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(l_237.ywyxyyxw)).lo, (int32_t)(*l_173)))).wxywyxxy)), (safe_div_func_uint16_t_u_u((+(((safe_mod_func_int16_t_s_s((+(safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_s(p_690->g_235.x, (*l_173))) , l_248) != &p_690->g_225), 0)), p_690->g_205))), (*l_173))) < p_690->g_192.z) & p_23)), GROUP_DIVERGE(1, 1))), 0x2B920CD7L, 0x3219C894L)).even, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))).s62)).yyxxxxxyxxyxyyyy, ((VECTOR(int32_t, 16))(0x5C183433L)), ((VECTOR(int32_t, 16))(0x3293D30DL))))).s6f)), p_21.f0, l_249, 0x1B6E637CL, 1L)).hi)).wyyxwyyxzzxzyxzy, ((VECTOR(int32_t, 16))(0L))))).s12))).yxyx))), (-7L), (-3L), 0x5BA9E3A8L, 4L)).s1 , p_690->g_194.y) , p_24), 0UL, 0x3A2DL, 0xABA2L, p_24, ((VECTOR(uint16_t, 2))(1UL)), 65533UL, ((VECTOR(uint16_t, 2))(0x9513L)), 4UL, 0x13C8L)).odd)).s5623670205204324)).scaac)).z))), 5)), p_690->g_220.s2)))) && p_690->g_113) , p_690->g_25) , 1L));
        return (*l_173);
    }
    (*p_690->g_111) &= ((VECTOR(int32_t, 16))(p_690->g_251.s45e6835eb3eb111e)).sf;
    (*p_690->g_111) = (safe_lshift_func_int8_t_s_u(p_24, 4));
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_224
 * writes: p_690->g_225
 */
int32_t * func_37(int32_t * p_38, uint32_t  p_39, int64_t  p_40, int32_t  p_41, int32_t * p_42, struct S1 * p_690)
{ /* block id: 107 */
    int8_t l_223 = (-1L);
    l_223 = p_39;
    (*p_690->g_224) = &p_38;
    return &p_690->g_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_128 p_690->g_188 p_690->g_192 p_690->g_194 p_690->g_195 p_690->g_196 p_690->l_comm_values p_690->g_79 p_690->g_65 p_690->g_113 p_690->g_2 p_690->g_220
 * writes: p_690->g_154 p_690->g_65 p_690->g_113
 */
int32_t * func_43(int32_t  p_44, uint32_t  p_45, int32_t * p_46, uint8_t  p_47, int32_t * p_48, struct S1 * p_690)
{ /* block id: 86 */
    uint8_t *l_176 = (void*)0;
    uint8_t *l_177 = (void*)0;
    uint8_t *l_178 = (void*)0;
    uint8_t *l_179 = (void*)0;
    int32_t l_180 = 0x6E634B27L;
    VECTOR(int32_t, 2) l_183 = (VECTOR(int32_t, 2))(0x2FCD55C4L, 0x23B3A300L);
    VECTOR(int32_t, 16) l_184 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-3L)), (-3L)), (-3L), (-10L), (-3L), (VECTOR(int32_t, 2))((-10L), (-3L)), (VECTOR(int32_t, 2))((-10L), (-3L)), (-10L), (-3L), (-10L), (-3L));
    VECTOR(int32_t, 4) l_187 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x48D39528L), 0x48D39528L);
    uint64_t *l_189 = &p_690->g_154;
    VECTOR(int64_t, 2) l_193 = (VECTOR(int64_t, 2))(0x7ECD135445221C50L, (-1L));
    VECTOR(int64_t, 16) l_197 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x664A167C121851E4L), 0x664A167C121851E4L), 0x664A167C121851E4L, 0L, 0x664A167C121851E4L, (VECTOR(int64_t, 2))(0L, 0x664A167C121851E4L), (VECTOR(int64_t, 2))(0L, 0x664A167C121851E4L), 0L, 0x664A167C121851E4L, 0L, 0x664A167C121851E4L);
    VECTOR(int64_t, 16) l_198 = (VECTOR(int64_t, 16))(0x165F41A635642BD7L, (VECTOR(int64_t, 4))(0x165F41A635642BD7L, (VECTOR(int64_t, 2))(0x165F41A635642BD7L, 0x3B51E3D7954E52F0L), 0x3B51E3D7954E52F0L), 0x3B51E3D7954E52F0L, 0x165F41A635642BD7L, 0x3B51E3D7954E52F0L, (VECTOR(int64_t, 2))(0x165F41A635642BD7L, 0x3B51E3D7954E52F0L), (VECTOR(int64_t, 2))(0x165F41A635642BD7L, 0x3B51E3D7954E52F0L), 0x165F41A635642BD7L, 0x3B51E3D7954E52F0L, 0x165F41A635642BD7L, 0x3B51E3D7954E52F0L);
    int32_t l_201 = 0x37CD069BL;
    int16_t *l_202 = &p_690->g_113;
    int32_t *l_203 = (void*)0;
    VECTOR(uint8_t, 16) l_218 = (VECTOR(uint8_t, 16))(0xE6L, (VECTOR(uint8_t, 4))(0xE6L, (VECTOR(uint8_t, 2))(0xE6L, 0x31L), 0x31L), 0x31L, 0xE6L, 0x31L, (VECTOR(uint8_t, 2))(0xE6L, 0x31L), (VECTOR(uint8_t, 2))(0xE6L, 0x31L), 0xE6L, 0x31L, 0xE6L, 0x31L);
    VECTOR(uint8_t, 16) l_219 = (VECTOR(uint8_t, 16))(0xADL, (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0x19L), 0x19L), 0x19L, 0xADL, 0x19L, (VECTOR(uint8_t, 2))(0xADL, 0x19L), (VECTOR(uint8_t, 2))(0xADL, 0x19L), 0xADL, 0x19L, 0xADL, 0x19L);
    uint8_t *l_221 = (void*)0;
    uint8_t *l_222[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_222[i] = (void*)0;
    l_184.sc = ((l_183.x = (safe_lshift_func_int8_t_s_u((p_45 ^ ((*l_202) |= (((l_180 ^= p_690->g_128[3]) || (safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x7AAE967BL, 8L)))).xxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_183.xxyyxxyx)).hi, ((VECTOR(int32_t, 16))(l_184.s68b3316501709b17)).s5917))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x3ABBA9BFL, 2L)))), (-9L), (-10L))).odd)), (p_47 , (+((((*p_48) = ((0xEEB50B726DB9416FL != (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(l_187.zzyzzyxxzwzwxxwx)).s8343, ((VECTOR(uint32_t, 2))(0x74867D23L, 0xD607CDC4L)).xyxx))))).w, (((l_187.x & (0x4544L ^ (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_690->g_188.zxzx)).lo)).lo , 0L))) || ((((*l_189) = 0x00E2D96BE51E0490L) , ((((safe_mod_func_int32_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(p_690->g_192.xyxywyzwzzxzxxyw)).s6ab1, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_193.yxyy)), ((VECTOR(int64_t, 2))(1L, (-8L))), (-4L), 0x6B424801CA476E1AL)).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_690->g_194.yzyz)).hi)).xxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_690->g_195.s5cf6a8d655e74b05)).sa5)).xyyxxxyy)).s26, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(p_690->g_196.wzxw)).odd, ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_197.s14f8bb17)).s74)).xyyy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x7A8BC2D749873380L, 0x51A7AC5B85297743L)).yyyxyxyxxxxxyxyx)).s18e0))).hi)))))).yxyyxyyxxyyxyxyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_198.sb0b8d696a46f0d94)).hi)).lo, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(1L, 7L, 0L, (((safe_sub_func_uint8_t_u_u(l_197.sf, l_183.y)) | p_690->l_comm_values[(safe_mod_func_uint32_t_u_u(p_690->tid, 2))]) & 0x12FD8B41L), ((VECTOR(int64_t, 2))(0x32F8380B90F0D37CL)), (-10L), 1L)))).s76, ((VECTOR(int64_t, 2))(1L))))).yyxxyyyx)).even)).xywwxyyxwwywwzxz)).even, ((VECTOR(int64_t, 8))((-7L)))))).hi))), l_193.y, l_201, (-1L), 0x06DE7BFBAB55B0BAL)).s4606522627105737, ((VECTOR(int64_t, 16))((-2L)))))), ((VECTOR(int64_t, 16))(0x2B75B0D0E80A38D9L))))).s6e)).yyxx))).zzyxzwxwxzzxzyxz)).sb98a))))).w != 1L), 0x1130A590L)) < l_197.s4) || p_45) | l_183.y)) < 0UL)) < 0x74E6FDF3L)))) | p_690->g_79.z)) < l_198.sc) , (*p_48)))), ((VECTOR(int32_t, 2))(3L)), 0x6D631EF2L)).odd))))).wzzyxwywwwxwywxx)).s3b)).yxxyyyyyyyyxxyyy)))).sc61e))), ((VECTOR(uint32_t, 4))(3UL))))).w < 7L), (-3L)))) > FAKE_DIVERGE(p_690->global_2_offset, get_global_id(2), 10)))), 2))) >= 0x40L);
    for (l_180 = 0; (l_180 == 28); l_180++)
    { /* block id: 95 */
        int32_t *l_208[6][8] = {{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65},{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65},{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65},{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65},{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65},{&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65,&p_690->g_65,&p_690->g_205,&p_690->g_205,&p_690->g_65}};
        int32_t **l_209 = &l_203;
        int i, j;
        l_183.y &= ((l_184.s1 &= (*p_48)) || 0x624F3D5BL);
        if ((*p_48))
            continue;
        l_203 = (void*)0;
        (*l_209) = p_46;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_690->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((((VECTOR(uint16_t, 16))(0xEDC7L, (p_690->g_128[3] & p_45), 6UL, 4UL, ((VECTOR(uint16_t, 2))(1UL, 0x6F7DL)), 65533UL, (safe_add_func_uint16_t_u_u(((void*)0 == l_202), (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_198.s7, ((safe_rshift_func_uint8_t_u_s((p_690->g_2 && (-1L)), 5)) , ((p_47 = ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_218.s2c)), 247UL, 0x84L)), ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(l_219.s45)).yyxxyxxyyyyyxxyx, ((VECTOR(uint8_t, 4))(p_690->g_220.s7347)).xwxzzyzzwxwwxzxx))).s257e))).x) ^ p_690->g_128[3])))), p_690->l_comm_values[(safe_mod_func_uint32_t_u_u(p_690->tid, 2))])))), ((VECTOR(uint16_t, 2))(0xCFB2L)), ((VECTOR(uint16_t, 4))(65535UL)), 0xD87EL, 65535UL)).se ^ FAKE_DIVERGE(p_690->local_1_offset, get_local_id(1), 10)), 10))][(safe_mod_func_uint32_t_u_u(p_690->tid, 2))]));
    return &p_690->g_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_33 p_690->g_111 p_690->g_65 p_690->g_112 p_690->g_161
 * writes: p_690->g_33 p_690->g_112 p_690->g_161
 */
int32_t  func_49(int16_t  p_50, struct S1 * p_690)
{ /* block id: 15 */
    volatile int32_t *l_55 = (void*)0;
    int32_t l_66 = (-9L);
    int32_t *l_155 = &p_690->g_30;
    int32_t *l_157 = &p_690->g_65;
    int32_t l_158 = 0x05757710L;
    int32_t *l_159 = (void*)0;
    int32_t *l_160[10] = {&l_66,&l_66,(void*)0,&l_66,&l_66,&l_66,&l_66,(void*)0,&l_66,&l_66};
    int i;
    for (p_690->g_33 = 0; (p_690->g_33 >= (-15)); --p_690->g_33)
    { /* block id: 18 */
        int32_t l_67 = 7L;
        int32_t **l_156[7];
        int i;
        for (i = 0; i < 7; i++)
            l_156[i] = &p_690->g_111;
        l_55 = &p_690->g_2;
    }
    p_690->g_112 = &l_66;
    (*p_690->g_112) |= (*p_690->g_111);
    ++p_690->g_161;
    return p_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_690->g_79 p_690->g_4 p_690->g_65 p_690->g_25.f0 p_690->g_113
 * writes: p_690->g_comm_values p_690->g_111 p_690->g_112 p_690->g_113
 */
int32_t * func_71(int32_t * p_72, int32_t * p_73, uint32_t  p_74, struct S1 * p_690)
{ /* block id: 40 */
    uint32_t l_100 = 0xA88BB409L;
    VECTOR(int64_t, 4) l_101 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-7L)), (-7L));
    int32_t *l_102 = &p_690->g_30;
    VECTOR(uint32_t, 8) l_107 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x85BA07B4L), 0x85BA07B4L), 0x85BA07B4L, 4294967295UL, 0x85BA07B4L);
    int64_t *l_108[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_110[9] = {&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65,&p_690->g_65};
    int32_t **l_109[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    p_690->g_113 ^= ((p_690->g_79.y != l_100) <= (0xCBL && ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_101.xx)).xxyxxyyxyyyyyxxy)).s8 | (8L || ((p_690->g_112 = (p_690->g_111 = func_80(l_102, (((FAKE_DIVERGE(p_690->group_2_offset, get_group_id(2), 10) , p_690->g_4) >= (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((0x2E0EFCF3L < ((VECTOR(uint32_t, 16))(l_107.s5734306076731702)).s0), ((!((((p_690->g_comm_values[p_690->tid] = 0x7A619A7386F5C60DL) > (p_72 != (void*)0)) , p_74) < 0x89L)) , p_690->g_65))), p_690->g_25.f0))) , GROUP_DIVERGE(2, 1)), p_690))) != (void*)0))) , FAKE_DIVERGE(p_690->group_0_offset, get_group_id(0), 10))));
    return &p_690->g_5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_80(int32_t * p_81, uint64_t  p_82, struct S1 * p_690)
{ /* block id: 35 */
    volatile int32_t *l_89[1];
    volatile int32_t **l_88 = &l_89[0];
    int i;
    for (i = 0; i < 1; i++)
        l_89[i] = &p_690->g_2;
    (*l_88) = &p_690->g_4;
    return &p_690->g_33;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_691;
    struct S1* p_690 = &c_691;
    struct S1 c_692 = {
        (-1L), // p_690->g_2
        0x537AD435L, // p_690->g_3
        0x4B363F9EL, // p_690->g_4
        0L, // p_690->g_5
        {0L}, // p_690->g_25
        5L, // p_690->g_30
        (-1L), // p_690->g_33
        (-1L), // p_690->g_52
        (-6L), // p_690->g_65
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x4E41L), 0x4E41L), // p_690->g_79
        0x61C9C8A0L, // p_690->g_84
        &p_690->g_65, // p_690->g_111
        (void*)0, // p_690->g_112
        0x3C0BL, // p_690->g_113
        {0x1A60L,0x1A60L,0x1A60L,0x1A60L,0x1A60L,0x1A60L,0x1A60L,0x1A60L}, // p_690->g_128
        (void*)0, // p_690->g_144
        0UL, // p_690->g_154
        1UL, // p_690->g_161
        (VECTOR(uint8_t, 2))(7UL, 0xB0L), // p_690->g_170
        (VECTOR(int32_t, 4))(0x1F7A47DFL, (VECTOR(int32_t, 2))(0x1F7A47DFL, 1L), 1L), // p_690->g_188
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x74D63770DE910D81L), 0x74D63770DE910D81L), // p_690->g_192
        (VECTOR(int64_t, 4))(0x378321BB0FE560EEL, (VECTOR(int64_t, 2))(0x378321BB0FE560EEL, (-1L)), (-1L)), // p_690->g_194
        (VECTOR(int64_t, 16))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x56FB2AC54307DC9CL), 0x56FB2AC54307DC9CL), 0x56FB2AC54307DC9CL, 3L, 0x56FB2AC54307DC9CL, (VECTOR(int64_t, 2))(3L, 0x56FB2AC54307DC9CL), (VECTOR(int64_t, 2))(3L, 0x56FB2AC54307DC9CL), 3L, 0x56FB2AC54307DC9CL, 3L, 0x56FB2AC54307DC9CL), // p_690->g_195
        (VECTOR(int64_t, 4))(0x3393A02F1619DF5AL, (VECTOR(int64_t, 2))(0x3393A02F1619DF5AL, 0x4D68DE2A5173ACA9L), 0x4D68DE2A5173ACA9L), // p_690->g_196
        (-1L), // p_690->g_205
        {&p_690->g_205,&p_690->g_205,&p_690->g_205,&p_690->g_205,&p_690->g_205}, // p_690->g_204
        (VECTOR(uint8_t, 8))(0xF8L, (VECTOR(uint8_t, 4))(0xF8L, (VECTOR(uint8_t, 2))(0xF8L, 1UL), 1UL), 1UL, 0xF8L, 1UL), // p_690->g_220
        &p_690->g_25.f0, // p_690->g_226
        &p_690->g_226, // p_690->g_225
        &p_690->g_225, // p_690->g_224
        (VECTOR(int32_t, 2))(1L, 0x25A2D44BL), // p_690->g_235
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_690->g_251
        (VECTOR(int8_t, 2))(0x01L, 7L), // p_690->g_254
        &p_690->g_65, // p_690->g_365
        &p_690->g_25.f3, // p_690->g_370
        &p_690->g_370, // p_690->g_369
        (VECTOR(uint64_t, 16))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x086B05DC31DE0409L), 0x086B05DC31DE0409L), 0x086B05DC31DE0409L, 7UL, 0x086B05DC31DE0409L, (VECTOR(uint64_t, 2))(7UL, 0x086B05DC31DE0409L), (VECTOR(uint64_t, 2))(7UL, 0x086B05DC31DE0409L), 7UL, 0x086B05DC31DE0409L, 7UL, 0x086B05DC31DE0409L), // p_690->g_376
        (VECTOR(int64_t, 4))(0x578F634048F9B615L, (VECTOR(int64_t, 2))(0x578F634048F9B615L, 1L), 1L), // p_690->g_388
        {{&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_52},{&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_52},{&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_52},{&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_52},{&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_52,&p_690->g_113,&p_690->g_113,&p_690->g_52,&p_690->g_52}}, // p_690->g_389
        &p_690->g_65, // p_690->g_403
        (VECTOR(int64_t, 2))(0x5A4FC068C5628850L, 7L), // p_690->g_452
        (VECTOR(int16_t, 2))((-5L), 7L), // p_690->g_514
        0UL, // p_690->g_530
        (VECTOR(int16_t, 16))(0x03F4L, (VECTOR(int16_t, 4))(0x03F4L, (VECTOR(int16_t, 2))(0x03F4L, 0x14D7L), 0x14D7L), 0x14D7L, 0x03F4L, 0x14D7L, (VECTOR(int16_t, 2))(0x03F4L, 0x14D7L), (VECTOR(int16_t, 2))(0x03F4L, 0x14D7L), 0x03F4L, 0x14D7L, 0x03F4L, 0x14D7L), // p_690->g_557
        (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, (-9L)), (-9L)), (-9L), 0x0FL, (-9L), (VECTOR(int8_t, 2))(0x0FL, (-9L)), (VECTOR(int8_t, 2))(0x0FL, (-9L)), 0x0FL, (-9L), 0x0FL, (-9L)), // p_690->g_558
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L)), // p_690->g_597
        (VECTOR(int8_t, 16))(0x6DL, (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x0CL), 0x0CL), 0x0CL, 0x6DL, 0x0CL, (VECTOR(int8_t, 2))(0x6DL, 0x0CL), (VECTOR(int8_t, 2))(0x6DL, 0x0CL), 0x6DL, 0x0CL, 0x6DL, 0x0CL), // p_690->g_600
        (VECTOR(int8_t, 2))(0x17L, 0x59L), // p_690->g_601
        &p_690->g_111, // p_690->g_609
        0L, // p_690->g_645
        0x40178D31L, // p_690->g_647
        0xBA91L, // p_690->g_648
        &p_690->g_112, // p_690->g_650
        {{{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}}, // p_690->g_662
        (VECTOR(uint8_t, 2))(0x31L, 0xF8L), // p_690->g_672
        0, // p_690->v_collective
        sequence_input[get_global_id(0)], // p_690->global_0_offset
        sequence_input[get_global_id(1)], // p_690->global_1_offset
        sequence_input[get_global_id(2)], // p_690->global_2_offset
        sequence_input[get_local_id(0)], // p_690->local_0_offset
        sequence_input[get_local_id(1)], // p_690->local_1_offset
        sequence_input[get_local_id(2)], // p_690->local_2_offset
        sequence_input[get_group_id(0)], // p_690->group_0_offset
        sequence_input[get_group_id(1)], // p_690->group_1_offset
        sequence_input[get_group_id(2)], // p_690->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_690->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_691 = c_692;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_690);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_690->g_2, "p_690->g_2", print_hash_value);
    transparent_crc(p_690->g_3, "p_690->g_3", print_hash_value);
    transparent_crc(p_690->g_4, "p_690->g_4", print_hash_value);
    transparent_crc(p_690->g_5, "p_690->g_5", print_hash_value);
    transparent_crc(p_690->g_25.f0, "p_690->g_25.f0", print_hash_value);
    transparent_crc(p_690->g_30, "p_690->g_30", print_hash_value);
    transparent_crc(p_690->g_33, "p_690->g_33", print_hash_value);
    transparent_crc(p_690->g_52, "p_690->g_52", print_hash_value);
    transparent_crc(p_690->g_65, "p_690->g_65", print_hash_value);
    transparent_crc(p_690->g_79.x, "p_690->g_79.x", print_hash_value);
    transparent_crc(p_690->g_79.y, "p_690->g_79.y", print_hash_value);
    transparent_crc(p_690->g_79.z, "p_690->g_79.z", print_hash_value);
    transparent_crc(p_690->g_79.w, "p_690->g_79.w", print_hash_value);
    transparent_crc(p_690->g_84, "p_690->g_84", print_hash_value);
    transparent_crc(p_690->g_113, "p_690->g_113", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_690->g_128[i], "p_690->g_128[i]", print_hash_value);

    }
    transparent_crc(p_690->g_154, "p_690->g_154", print_hash_value);
    transparent_crc(p_690->g_161, "p_690->g_161", print_hash_value);
    transparent_crc(p_690->g_170.x, "p_690->g_170.x", print_hash_value);
    transparent_crc(p_690->g_170.y, "p_690->g_170.y", print_hash_value);
    transparent_crc(p_690->g_188.x, "p_690->g_188.x", print_hash_value);
    transparent_crc(p_690->g_188.y, "p_690->g_188.y", print_hash_value);
    transparent_crc(p_690->g_188.z, "p_690->g_188.z", print_hash_value);
    transparent_crc(p_690->g_188.w, "p_690->g_188.w", print_hash_value);
    transparent_crc(p_690->g_192.x, "p_690->g_192.x", print_hash_value);
    transparent_crc(p_690->g_192.y, "p_690->g_192.y", print_hash_value);
    transparent_crc(p_690->g_192.z, "p_690->g_192.z", print_hash_value);
    transparent_crc(p_690->g_192.w, "p_690->g_192.w", print_hash_value);
    transparent_crc(p_690->g_194.x, "p_690->g_194.x", print_hash_value);
    transparent_crc(p_690->g_194.y, "p_690->g_194.y", print_hash_value);
    transparent_crc(p_690->g_194.z, "p_690->g_194.z", print_hash_value);
    transparent_crc(p_690->g_194.w, "p_690->g_194.w", print_hash_value);
    transparent_crc(p_690->g_195.s0, "p_690->g_195.s0", print_hash_value);
    transparent_crc(p_690->g_195.s1, "p_690->g_195.s1", print_hash_value);
    transparent_crc(p_690->g_195.s2, "p_690->g_195.s2", print_hash_value);
    transparent_crc(p_690->g_195.s3, "p_690->g_195.s3", print_hash_value);
    transparent_crc(p_690->g_195.s4, "p_690->g_195.s4", print_hash_value);
    transparent_crc(p_690->g_195.s5, "p_690->g_195.s5", print_hash_value);
    transparent_crc(p_690->g_195.s6, "p_690->g_195.s6", print_hash_value);
    transparent_crc(p_690->g_195.s7, "p_690->g_195.s7", print_hash_value);
    transparent_crc(p_690->g_195.s8, "p_690->g_195.s8", print_hash_value);
    transparent_crc(p_690->g_195.s9, "p_690->g_195.s9", print_hash_value);
    transparent_crc(p_690->g_195.sa, "p_690->g_195.sa", print_hash_value);
    transparent_crc(p_690->g_195.sb, "p_690->g_195.sb", print_hash_value);
    transparent_crc(p_690->g_195.sc, "p_690->g_195.sc", print_hash_value);
    transparent_crc(p_690->g_195.sd, "p_690->g_195.sd", print_hash_value);
    transparent_crc(p_690->g_195.se, "p_690->g_195.se", print_hash_value);
    transparent_crc(p_690->g_195.sf, "p_690->g_195.sf", print_hash_value);
    transparent_crc(p_690->g_196.x, "p_690->g_196.x", print_hash_value);
    transparent_crc(p_690->g_196.y, "p_690->g_196.y", print_hash_value);
    transparent_crc(p_690->g_196.z, "p_690->g_196.z", print_hash_value);
    transparent_crc(p_690->g_196.w, "p_690->g_196.w", print_hash_value);
    transparent_crc(p_690->g_205, "p_690->g_205", print_hash_value);
    transparent_crc(p_690->g_220.s0, "p_690->g_220.s0", print_hash_value);
    transparent_crc(p_690->g_220.s1, "p_690->g_220.s1", print_hash_value);
    transparent_crc(p_690->g_220.s2, "p_690->g_220.s2", print_hash_value);
    transparent_crc(p_690->g_220.s3, "p_690->g_220.s3", print_hash_value);
    transparent_crc(p_690->g_220.s4, "p_690->g_220.s4", print_hash_value);
    transparent_crc(p_690->g_220.s5, "p_690->g_220.s5", print_hash_value);
    transparent_crc(p_690->g_220.s6, "p_690->g_220.s6", print_hash_value);
    transparent_crc(p_690->g_220.s7, "p_690->g_220.s7", print_hash_value);
    transparent_crc(p_690->g_235.x, "p_690->g_235.x", print_hash_value);
    transparent_crc(p_690->g_235.y, "p_690->g_235.y", print_hash_value);
    transparent_crc(p_690->g_251.s0, "p_690->g_251.s0", print_hash_value);
    transparent_crc(p_690->g_251.s1, "p_690->g_251.s1", print_hash_value);
    transparent_crc(p_690->g_251.s2, "p_690->g_251.s2", print_hash_value);
    transparent_crc(p_690->g_251.s3, "p_690->g_251.s3", print_hash_value);
    transparent_crc(p_690->g_251.s4, "p_690->g_251.s4", print_hash_value);
    transparent_crc(p_690->g_251.s5, "p_690->g_251.s5", print_hash_value);
    transparent_crc(p_690->g_251.s6, "p_690->g_251.s6", print_hash_value);
    transparent_crc(p_690->g_251.s7, "p_690->g_251.s7", print_hash_value);
    transparent_crc(p_690->g_251.s8, "p_690->g_251.s8", print_hash_value);
    transparent_crc(p_690->g_251.s9, "p_690->g_251.s9", print_hash_value);
    transparent_crc(p_690->g_251.sa, "p_690->g_251.sa", print_hash_value);
    transparent_crc(p_690->g_251.sb, "p_690->g_251.sb", print_hash_value);
    transparent_crc(p_690->g_251.sc, "p_690->g_251.sc", print_hash_value);
    transparent_crc(p_690->g_251.sd, "p_690->g_251.sd", print_hash_value);
    transparent_crc(p_690->g_251.se, "p_690->g_251.se", print_hash_value);
    transparent_crc(p_690->g_251.sf, "p_690->g_251.sf", print_hash_value);
    transparent_crc(p_690->g_254.x, "p_690->g_254.x", print_hash_value);
    transparent_crc(p_690->g_254.y, "p_690->g_254.y", print_hash_value);
    transparent_crc(p_690->g_376.s0, "p_690->g_376.s0", print_hash_value);
    transparent_crc(p_690->g_376.s1, "p_690->g_376.s1", print_hash_value);
    transparent_crc(p_690->g_376.s2, "p_690->g_376.s2", print_hash_value);
    transparent_crc(p_690->g_376.s3, "p_690->g_376.s3", print_hash_value);
    transparent_crc(p_690->g_376.s4, "p_690->g_376.s4", print_hash_value);
    transparent_crc(p_690->g_376.s5, "p_690->g_376.s5", print_hash_value);
    transparent_crc(p_690->g_376.s6, "p_690->g_376.s6", print_hash_value);
    transparent_crc(p_690->g_376.s7, "p_690->g_376.s7", print_hash_value);
    transparent_crc(p_690->g_376.s8, "p_690->g_376.s8", print_hash_value);
    transparent_crc(p_690->g_376.s9, "p_690->g_376.s9", print_hash_value);
    transparent_crc(p_690->g_376.sa, "p_690->g_376.sa", print_hash_value);
    transparent_crc(p_690->g_376.sb, "p_690->g_376.sb", print_hash_value);
    transparent_crc(p_690->g_376.sc, "p_690->g_376.sc", print_hash_value);
    transparent_crc(p_690->g_376.sd, "p_690->g_376.sd", print_hash_value);
    transparent_crc(p_690->g_376.se, "p_690->g_376.se", print_hash_value);
    transparent_crc(p_690->g_376.sf, "p_690->g_376.sf", print_hash_value);
    transparent_crc(p_690->g_388.x, "p_690->g_388.x", print_hash_value);
    transparent_crc(p_690->g_388.y, "p_690->g_388.y", print_hash_value);
    transparent_crc(p_690->g_388.z, "p_690->g_388.z", print_hash_value);
    transparent_crc(p_690->g_388.w, "p_690->g_388.w", print_hash_value);
    transparent_crc(p_690->g_452.x, "p_690->g_452.x", print_hash_value);
    transparent_crc(p_690->g_452.y, "p_690->g_452.y", print_hash_value);
    transparent_crc(p_690->g_514.x, "p_690->g_514.x", print_hash_value);
    transparent_crc(p_690->g_514.y, "p_690->g_514.y", print_hash_value);
    transparent_crc(p_690->g_530, "p_690->g_530", print_hash_value);
    transparent_crc(p_690->g_557.s0, "p_690->g_557.s0", print_hash_value);
    transparent_crc(p_690->g_557.s1, "p_690->g_557.s1", print_hash_value);
    transparent_crc(p_690->g_557.s2, "p_690->g_557.s2", print_hash_value);
    transparent_crc(p_690->g_557.s3, "p_690->g_557.s3", print_hash_value);
    transparent_crc(p_690->g_557.s4, "p_690->g_557.s4", print_hash_value);
    transparent_crc(p_690->g_557.s5, "p_690->g_557.s5", print_hash_value);
    transparent_crc(p_690->g_557.s6, "p_690->g_557.s6", print_hash_value);
    transparent_crc(p_690->g_557.s7, "p_690->g_557.s7", print_hash_value);
    transparent_crc(p_690->g_557.s8, "p_690->g_557.s8", print_hash_value);
    transparent_crc(p_690->g_557.s9, "p_690->g_557.s9", print_hash_value);
    transparent_crc(p_690->g_557.sa, "p_690->g_557.sa", print_hash_value);
    transparent_crc(p_690->g_557.sb, "p_690->g_557.sb", print_hash_value);
    transparent_crc(p_690->g_557.sc, "p_690->g_557.sc", print_hash_value);
    transparent_crc(p_690->g_557.sd, "p_690->g_557.sd", print_hash_value);
    transparent_crc(p_690->g_557.se, "p_690->g_557.se", print_hash_value);
    transparent_crc(p_690->g_557.sf, "p_690->g_557.sf", print_hash_value);
    transparent_crc(p_690->g_558.s0, "p_690->g_558.s0", print_hash_value);
    transparent_crc(p_690->g_558.s1, "p_690->g_558.s1", print_hash_value);
    transparent_crc(p_690->g_558.s2, "p_690->g_558.s2", print_hash_value);
    transparent_crc(p_690->g_558.s3, "p_690->g_558.s3", print_hash_value);
    transparent_crc(p_690->g_558.s4, "p_690->g_558.s4", print_hash_value);
    transparent_crc(p_690->g_558.s5, "p_690->g_558.s5", print_hash_value);
    transparent_crc(p_690->g_558.s6, "p_690->g_558.s6", print_hash_value);
    transparent_crc(p_690->g_558.s7, "p_690->g_558.s7", print_hash_value);
    transparent_crc(p_690->g_558.s8, "p_690->g_558.s8", print_hash_value);
    transparent_crc(p_690->g_558.s9, "p_690->g_558.s9", print_hash_value);
    transparent_crc(p_690->g_558.sa, "p_690->g_558.sa", print_hash_value);
    transparent_crc(p_690->g_558.sb, "p_690->g_558.sb", print_hash_value);
    transparent_crc(p_690->g_558.sc, "p_690->g_558.sc", print_hash_value);
    transparent_crc(p_690->g_558.sd, "p_690->g_558.sd", print_hash_value);
    transparent_crc(p_690->g_558.se, "p_690->g_558.se", print_hash_value);
    transparent_crc(p_690->g_558.sf, "p_690->g_558.sf", print_hash_value);
    transparent_crc(p_690->g_597.s0, "p_690->g_597.s0", print_hash_value);
    transparent_crc(p_690->g_597.s1, "p_690->g_597.s1", print_hash_value);
    transparent_crc(p_690->g_597.s2, "p_690->g_597.s2", print_hash_value);
    transparent_crc(p_690->g_597.s3, "p_690->g_597.s3", print_hash_value);
    transparent_crc(p_690->g_597.s4, "p_690->g_597.s4", print_hash_value);
    transparent_crc(p_690->g_597.s5, "p_690->g_597.s5", print_hash_value);
    transparent_crc(p_690->g_597.s6, "p_690->g_597.s6", print_hash_value);
    transparent_crc(p_690->g_597.s7, "p_690->g_597.s7", print_hash_value);
    transparent_crc(p_690->g_600.s0, "p_690->g_600.s0", print_hash_value);
    transparent_crc(p_690->g_600.s1, "p_690->g_600.s1", print_hash_value);
    transparent_crc(p_690->g_600.s2, "p_690->g_600.s2", print_hash_value);
    transparent_crc(p_690->g_600.s3, "p_690->g_600.s3", print_hash_value);
    transparent_crc(p_690->g_600.s4, "p_690->g_600.s4", print_hash_value);
    transparent_crc(p_690->g_600.s5, "p_690->g_600.s5", print_hash_value);
    transparent_crc(p_690->g_600.s6, "p_690->g_600.s6", print_hash_value);
    transparent_crc(p_690->g_600.s7, "p_690->g_600.s7", print_hash_value);
    transparent_crc(p_690->g_600.s8, "p_690->g_600.s8", print_hash_value);
    transparent_crc(p_690->g_600.s9, "p_690->g_600.s9", print_hash_value);
    transparent_crc(p_690->g_600.sa, "p_690->g_600.sa", print_hash_value);
    transparent_crc(p_690->g_600.sb, "p_690->g_600.sb", print_hash_value);
    transparent_crc(p_690->g_600.sc, "p_690->g_600.sc", print_hash_value);
    transparent_crc(p_690->g_600.sd, "p_690->g_600.sd", print_hash_value);
    transparent_crc(p_690->g_600.se, "p_690->g_600.se", print_hash_value);
    transparent_crc(p_690->g_600.sf, "p_690->g_600.sf", print_hash_value);
    transparent_crc(p_690->g_601.x, "p_690->g_601.x", print_hash_value);
    transparent_crc(p_690->g_601.y, "p_690->g_601.y", print_hash_value);
    transparent_crc(p_690->g_645, "p_690->g_645", print_hash_value);
    transparent_crc(p_690->g_647, "p_690->g_647", print_hash_value);
    transparent_crc(p_690->g_648, "p_690->g_648", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_690->g_662[i][j][k], "p_690->g_662[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_690->g_672.x, "p_690->g_672.x", print_hash_value);
    transparent_crc(p_690->g_672.y, "p_690->g_672.y", print_hash_value);
    transparent_crc(p_690->v_collective, "p_690->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 3; i++)
            transparent_crc(p_690->l_special_values[i], "p_690->l_special_values[i]", print_hash_value);
    transparent_crc(p_690->l_comm_values[get_linear_local_id()], "p_690->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_690->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_690->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
