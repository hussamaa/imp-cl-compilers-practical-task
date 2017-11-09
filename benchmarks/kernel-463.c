// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 57,59,1 -l 19,1,1
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

__constant uint32_t permutations[10][19] = {
{1,9,4,14,15,6,2,13,12,0,16,10,3,8,17,18,7,11,5}, // permutation 0
{3,12,8,14,7,9,4,13,15,6,17,1,0,5,18,10,2,11,16}, // permutation 1
{11,18,15,1,17,6,3,7,14,5,2,8,10,0,9,13,12,16,4}, // permutation 2
{16,10,6,13,9,4,11,3,12,5,18,14,2,17,0,8,1,7,15}, // permutation 3
{2,3,14,6,11,1,4,18,12,7,5,9,10,8,17,0,16,13,15}, // permutation 4
{7,14,17,12,3,5,13,8,2,16,11,18,6,4,15,9,0,1,10}, // permutation 5
{9,8,13,11,4,7,17,1,0,12,14,16,15,5,2,10,3,18,6}, // permutation 6
{11,16,14,4,18,1,12,17,2,3,9,15,7,6,0,5,8,13,10}, // permutation 7
{9,7,14,5,2,11,0,6,18,10,8,13,12,16,17,4,3,1,15}, // permutation 8
{7,6,0,3,4,16,17,15,18,12,5,9,13,8,2,1,11,14,10} // permutation 9
};

// Seed: 1138674148

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int64_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
};

struct S1 {
   int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   int32_t  f3;
};

struct S2 {
   uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   volatile uint32_t  f3;
   struct S0  f4;
   uint64_t  f5;
};

struct S3 {
    uint32_t g_13;
    struct S1 g_20;
    struct S0 g_32;
    VECTOR(uint8_t, 2) g_34;
    VECTOR(uint8_t, 8) g_35;
    VECTOR(uint8_t, 2) g_36;
    int32_t g_248[2];
    volatile int32_t *g_250;
    volatile int32_t * volatile *g_249;
    struct S2 g_260;
    uint32_t *g_262;
    uint32_t ** volatile g_261;
    uint64_t g_306;
    VECTOR(int16_t, 8) g_318;
    uint64_t g_325;
    int32_t *g_329;
    VECTOR(int32_t, 8) g_330;
    int32_t **g_342;
    int32_t *** volatile g_341;
    int32_t * volatile g_345;
    uint8_t g_352;
    VECTOR(uint16_t, 2) g_359;
    volatile VECTOR(uint8_t, 2) g_364;
    VECTOR(uint16_t, 8) g_373;
    VECTOR(int16_t, 2) g_374;
    VECTOR(int8_t, 2) g_391;
    int32_t g_402;
    volatile VECTOR(uint64_t, 2) g_434;
    int32_t *g_441;
    int32_t **g_440;
    int32_t **g_444;
    int32_t **g_445;
    uint64_t g_448;
    volatile int8_t g_459;
    volatile int8_t * volatile g_458;
    int32_t * volatile * volatile *g_499;
    int32_t * volatile * volatile **g_498;
    volatile int8_t g_503;
    volatile int8_t *g_502;
    int32_t * volatile g_506;
    int32_t *g_510;
    VECTOR(uint8_t, 4) g_548;
    uint32_t g_588;
    volatile struct S1 g_596[2];
    volatile struct S1 *g_595;
    volatile struct S1 ** volatile g_594;
    struct S0 g_626;
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
struct S0  func_1(struct S3 * p_627);
int32_t * func_2(int32_t * p_3, uint64_t  p_4, struct S3 * p_627);
int32_t * func_5(uint32_t  p_6, int32_t * p_7, int32_t  p_8, int32_t  p_9, int32_t * p_10, struct S3 * p_627);
int16_t  func_16(uint32_t * p_17, int32_t * p_18, struct S3 * p_627);
struct S1  func_21(uint32_t  p_22, struct S3 * p_627);
uint32_t * func_24(int32_t  p_25, uint8_t  p_26, uint32_t * p_27, uint32_t * p_28, uint16_t  p_29, struct S3 * p_627);
int32_t * func_244(int8_t  p_245, struct S3 * p_627);
int32_t * func_251(uint32_t ** p_252, uint64_t  p_253, struct S3 * p_627);
uint32_t ** func_254(int32_t * p_255, struct S3 * p_627);
int32_t * func_256(int32_t  p_257, struct S3 * p_627);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_627->g_13 p_627->g_20 p_627->g_32 p_627->g_34 p_627->g_35 p_627->g_36 p_627->g_249 p_627->g_260 p_627->g_261 p_627->g_comm_values p_627->l_comm_values p_627->g_318 p_627->g_248 p_627->g_330 p_627->g_325 p_627->g_250 p_627->g_341 p_627->g_329 p_627->g_352 p_627->g_262 p_627->g_359 p_627->g_364 p_627->g_373 p_627->g_374 p_627->g_391 p_627->g_434 p_627->g_440 p_627->g_448 p_627->g_458 p_627->g_402 p_627->g_498 p_627->g_502 p_627->g_510 p_627->g_441 p_627->g_459 p_627->g_548 p_627->g_594 p_627->g_595 p_627->g_596 p_627->g_626
 * writes: p_627->g_13 p_627->g_32.f1 p_627->g_248 p_627->g_250 p_627->g_306 p_627->g_325 p_627->g_329 p_627->g_20.f3 p_627->g_20.f2 p_627->g_342 p_627->g_352 p_627->g_359 p_627->g_20 p_627->g_402 p_627->g_444 p_627->g_445 p_627->g_510 p_627->g_260.f2 p_627->g_588 p_627->g_506 p_627->g_373
 */
struct S0  func_1(struct S3 * p_627)
{ /* block id: 4 */
    uint32_t *l_11 = (void*)0;
    uint32_t *l_12 = &p_627->g_13;
    VECTOR(int32_t, 4) l_19 = (VECTOR(int32_t, 4))(0x4D2B5F79L, (VECTOR(int32_t, 2))(0x4D2B5F79L, 0x2DB82134L), 0x2DB82134L);
    uint32_t *l_33 = &p_627->g_20.f1;
    int32_t **l_617 = &p_627->g_329;
    int i;
    (*l_617) = func_2(((*l_617) = func_5((((*l_12)--) || ((((func_16(((((VECTOR(int32_t, 16))(l_19.zwwyxwyxyxzwxwyz)).sf , p_627->g_20) , (func_21(l_19.z, p_627) , func_24((p_627->g_32.f1 = (safe_div_func_int32_t_s_s(p_627->g_20.f1, (p_627->g_32 , p_627->g_20.f0)))), p_627->g_20.f2, l_33, (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(p_627->g_34.xyyyyyxyyxyxyyyy)).sba27, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(p_627->g_35.s0740)).odd, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_627->g_36.xxxxxxxxxxxxyyyy)).s6657)).zzwyxyzxywwyzzww))).sad))))).yxxy))).odd)), 0x40L, 255UL)).z , &p_627->g_13), l_19.w, p_627))), p_627->g_441, p_627) <= 0x2387L) && l_19.y) | 0x17L) != p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 19))])), p_627->g_262, l_19.x, l_19.w, p_627->g_441, p_627)), p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 19))], p_627);
    return p_627->g_626;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_510
 * writes: p_627->g_248
 */
int32_t * func_2(int32_t * p_3, uint64_t  p_4, struct S3 * p_627)
{ /* block id: 341 */
    uint8_t l_624 = 255UL;
    int32_t *l_625 = &p_627->g_248[1];
    if ((atomic_inc(&p_627->g_atomic_input[15 * get_linear_group_id() + 11]) == 6))
    { /* block id: 343 */
        uint32_t l_618[3][7] = {{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL,0UL},{0UL,4294967295UL,0UL,0UL,4294967295UL,0UL,0UL}};
        uint32_t l_619 = 7UL;
        int32_t l_621[6][4] = {{4L,(-5L),0x7A223983L,(-5L)},{4L,(-5L),0x7A223983L,(-5L)},{4L,(-5L),0x7A223983L,(-5L)},{4L,(-5L),0x7A223983L,(-5L)},{4L,(-5L),0x7A223983L,(-5L)},{4L,(-5L),0x7A223983L,(-5L)}};
        int32_t *l_620 = &l_621[5][1];
        int32_t *l_622[3][4][5] = {{{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]}},{{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]}},{{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]},{(void*)0,&l_621[5][1],&l_621[0][1],&l_621[3][1],&l_621[2][0]}}};
        int32_t *l_623 = (void*)0;
        int i, j, k;
        l_619 |= l_618[1][1];
        l_623 = (l_622[1][1][2] = l_620);
        unsigned int result = 0;
        int l_618_i0, l_618_i1;
        for (l_618_i0 = 0; l_618_i0 < 3; l_618_i0++) {
            for (l_618_i1 = 0; l_618_i1 < 7; l_618_i1++) {
                result += l_618[l_618_i0][l_618_i1];
            }
        }
        result += l_619;
        int l_621_i0, l_621_i1;
        for (l_621_i0 = 0; l_621_i0 < 6; l_621_i0++) {
            for (l_621_i1 = 0; l_621_i1 < 4; l_621_i1++) {
                result += l_621[l_621_i0][l_621_i1];
            }
        }
        atomic_add(&p_627->g_special_values[15 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 347 */
        (1 + 1);
    }
    (*p_627->g_510) = l_624;
    return l_625;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_458 p_627->g_459 p_627->g_548 p_627->g_329 p_627->g_248 p_627->g_260.f2 p_627->g_13 p_627->g_260 p_627->g_402 p_627->g_374 p_627->g_352 p_627->g_325 p_627->g_594 p_627->g_373 p_627->g_391 p_627->g_595 p_627->g_596 p_627->g_20.f2 p_627->g_20.f1
 * writes: p_627->g_248 p_627->g_260.f2 p_627->g_13 p_627->g_329 p_627->g_20.f1 p_627->g_402 p_627->g_352 p_627->g_588 p_627->g_325 p_627->g_20.f0 p_627->g_20 p_627->g_506 p_627->g_373
 */
int32_t * func_5(uint32_t  p_6, int32_t * p_7, int32_t  p_8, int32_t  p_9, int32_t * p_10, struct S3 * p_627)
{ /* block id: 295 */
    VECTOR(uint16_t, 2) l_549 = (VECTOR(uint16_t, 2))(65526UL, 5UL);
    VECTOR(uint16_t, 4) l_550 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 8UL), 8UL);
    int32_t *l_556 = &p_627->g_248[0];
    int32_t l_566 = 0x5D557CF8L;
    struct S1 *l_583[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*p_627->g_329) &= (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((*p_627->g_458), (!((VECTOR(uint8_t, 2))(p_627->g_548.zx)).lo))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(l_549.xxyxyyyx)), ((VECTOR(uint16_t, 2))(l_550.wz)).xyxyyyyx))).lo)).even)).lo));
    for (p_627->g_260.f2 = 11; (p_627->g_260.f2 >= (-1)); p_627->g_260.f2 = safe_sub_func_uint64_t_u_u(p_627->g_260.f2, 5))
    { /* block id: 299 */
        int32_t *l_558 = &p_627->g_248[0];
        int32_t l_572 = 0x2890163BL;
        struct S1 *l_584 = (void*)0;
        VECTOR(uint16_t, 8) l_613 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL);
        int i;
        for (p_627->g_13 = (-11); (p_627->g_13 > 4); p_627->g_13++)
        { /* block id: 302 */
            uint64_t l_555 = 18446744073709551615UL;
            int32_t **l_557 = &p_627->g_329;
            uint32_t *l_559 = &p_627->g_20.f1;
            struct S1 l_564[3][1] = {{{-4L,0x10F6E1DBL,18446744073709551612UL,0x56E6B243L}},{{-4L,0x10F6E1DBL,18446744073709551612UL,0x56E6B243L}},{{-4L,0x10F6E1DBL,18446744073709551612UL,0x56E6B243L}}};
            int32_t **l_565 = (void*)0;
            int i, j;
            (*l_556) ^= (l_555 > (((*l_559) = (((18446744073709551610UL || p_8) , ((*l_557) = l_556)) == l_558)) <= 0x2ED01CF8L));
            (*l_556) = (((p_8 & ((p_627->g_260 , (*l_558)) != ((*p_10) && ((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_627->group_1_offset, get_group_id(1), 10), (safe_mod_func_uint16_t_u_u(((((*l_558) , (((65535UL || (~(((l_564[0][0] , p_9) == (((VECTOR(int64_t, 2))(0x6E6CFA08203B5311L, 0L)).even >= GROUP_DIVERGE(0, 1))) == (l_566 = ((*p_10) = ((void*)0 != l_565)))))) ^ (*l_558)) >= (**l_557))) == 0x00L) > p_627->g_374.y), (-6L))))) , (*l_558))))) > 4294967292UL) && (*l_558));
        }
        for (p_627->g_352 = 0; (p_627->g_352 < 24); p_627->g_352++)
        { /* block id: 312 */
            int32_t *l_569 = &p_627->g_248[0];
            int32_t *l_570 = &p_627->g_248[1];
            int32_t *l_571[5] = {&l_566,&l_566,&l_566,&l_566,&l_566};
            uint64_t l_573 = 1UL;
            int32_t *l_576 = (void*)0;
            int i;
            --l_573;
            return l_576;
        }
        for (l_572 = 0; (l_572 < (-25)); l_572 = safe_sub_func_uint8_t_u_u(l_572, 1))
        { /* block id: 318 */
            uint16_t *l_579 = (void*)0;
            int32_t l_580 = 0x14B44F58L;
            struct S1 **l_585 = (void*)0;
            struct S1 **l_586 = &l_584;
            uint32_t *l_587 = &p_627->g_588;
            uint64_t *l_589 = &p_627->g_325;
            int8_t *l_592 = &p_627->g_20.f0;
            VECTOR(int16_t, 8) l_606 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
            int i;
            if (((((void*)0 != l_579) && l_580) && (((safe_lshift_func_int8_t_s_u(((*l_592) = ((p_6 < FAKE_DIVERGE(p_627->group_0_offset, get_group_id(0), 10)) <= (func_21(((*l_587) = (((*l_558) , l_583[6]) == ((*l_586) = l_584))), p_627) , ((*l_589)++)))), 2)) , (((*p_627->g_458) ^ 1L) & 0x39A3872E5443F873L)) && 4L)))
            { /* block id: 323 */
                int32_t **l_593[9][3] = {{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510},{(void*)0,&l_558,&p_627->g_510}};
                int i, j;
                p_627->g_20 = func_21(p_8, p_627);
                p_627->g_506 = &p_9;
            }
            else
            { /* block id: 326 */
                volatile struct S1 ** volatile l_597[1];
                int32_t l_602 = (-1L);
                uint16_t *l_603 = (void*)0;
                int64_t *l_614 = (void*)0;
                int64_t *l_615 = (void*)0;
                int64_t *l_616[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 1; i++)
                    l_597[i] = &p_627->g_595;
                l_597[0] = p_627->g_594;
                l_566 = (safe_sub_func_int8_t_s_s(p_6, ((((safe_sub_func_uint64_t_u_u(((*l_589) = ((p_627->g_373.s3--) != ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_606.s5073)))).y)), (l_580 = (0x7F0BL ^ ((l_580 < ((*l_556) = ((((*l_556) | ((*p_10) = ((safe_rshift_func_int16_t_s_u(p_627->g_391.x, 1)) , ((*p_627->g_595) , (safe_mul_func_uint16_t_u_u(0x1D1FL, ((VECTOR(uint16_t, 16))(l_613.s2335511660361161)).s4)))))) | (FAKE_DIVERGE(p_627->global_0_offset, get_global_id(0), 10) > 1UL)) <= p_8))) | p_9))))) != p_627->g_20.f2) == p_627->g_20.f1) , 0x64L)));
                if ((*p_10))
                    break;
            }
        }
        return &p_627->g_248[0];
    }
    return &p_627->g_248[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_20.f1
 * writes: p_627->g_20.f1
 */
int16_t  func_16(uint32_t * p_17, int32_t * p_18, struct S3 * p_627)
{ /* block id: 271 */
    int8_t l_542 = (-4L);
    for (p_627->g_20.f1 = (-23); (p_627->g_20.f1 <= 53); ++p_627->g_20.f1)
    { /* block id: 274 */
        if ((atomic_inc(&p_627->l_atomic_input[4]) == 5))
        { /* block id: 276 */
            int32_t l_518 = (-1L);
            uint8_t l_519 = 9UL;
            uint32_t l_522 = 4294967287UL;
            ++l_519;
            if (l_522)
            { /* block id: 278 */
                int8_t l_523 = 0x1AL;
                uint16_t l_524[6][2][9] = {{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}},{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}},{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}},{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}},{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}},{{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL},{0x7FE5L,0x8257L,0x47A8L,0x0A66L,0x225CL,2UL,0xFF14L,0xA0C9L,0x9A6CL}}};
                int i, j, k;
                --l_524[2][0][4];
            }
            else
            { /* block id: 280 */
                int64_t l_527[9] = {0x6E97808C9F697C40L,1L,0x6E97808C9F697C40L,0x6E97808C9F697C40L,1L,0x6E97808C9F697C40L,0x6E97808C9F697C40L,1L,0x6E97808C9F697C40L};
                struct S2 l_529[5] = {{0x92B8BC56L,4294967295UL,1L,0x3ED0E2C8L,{0x41782CCB97464843L,0x359B0A2AL,0UL},18446744073709551613UL},{0x92B8BC56L,4294967295UL,1L,0x3ED0E2C8L,{0x41782CCB97464843L,0x359B0A2AL,0UL},18446744073709551613UL},{0x92B8BC56L,4294967295UL,1L,0x3ED0E2C8L,{0x41782CCB97464843L,0x359B0A2AL,0UL},18446744073709551613UL},{0x92B8BC56L,4294967295UL,1L,0x3ED0E2C8L,{0x41782CCB97464843L,0x359B0A2AL,0UL},18446744073709551613UL},{0x92B8BC56L,4294967295UL,1L,0x3ED0E2C8L,{0x41782CCB97464843L,0x359B0A2AL,0UL},18446744073709551613UL}};
                struct S2 *l_528 = &l_529[3];
                struct S2 *l_530 = &l_529[1];
                int64_t l_531 = 0x6C9D46951A9C635AL;
                int32_t l_532 = 0x1EAD5379L;
                uint32_t l_533[6] = {0x849EC070L,0x849EC070L,0x849EC070L,0x849EC070L,0x849EC070L,0x849EC070L};
                int8_t l_534[6][7] = {{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L},{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L},{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L},{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L},{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L},{0L,0x33L,0x34L,0x14L,0x3EL,0x14L,0x34L}};
                int32_t l_535 = 0x77714190L;
                uint16_t l_536 = 0x1B75L;
                uint32_t l_537 = 0x2D85ADDFL;
                int32_t l_538 = 0L;
                uint32_t l_539 = 4294967290UL;
                int i, j;
                l_530 = (l_527[1] , (l_528 = (void*)0));
                l_534[3][2] |= (l_531 , (l_533[5] |= l_532));
                l_537 &= (l_536 = l_535);
                --l_539;
            }
            unsigned int result = 0;
            result += l_518;
            result += l_519;
            result += l_522;
            atomic_add(&p_627->l_special_values[4], result);
        }
        else
        { /* block id: 289 */
            (1 + 1);
        }
        if (l_542)
            break;
    }
    return l_542;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S1  func_21(uint32_t  p_22, struct S3 * p_627)
{ /* block id: 6 */
    struct S1 l_23 = {4L,0x2C9BF5E4L,0x8D955A61940C9BA5L,0x04204102L};
    return l_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_249 p_627->g_35 p_627->g_260 p_627->g_261 p_627->g_comm_values p_627->g_34 p_627->g_20.f0 p_627->g_32.f2 p_627->l_comm_values p_627->g_318 p_627->g_248 p_627->g_20.f3 p_627->g_330 p_627->g_325 p_627->g_250 p_627->g_20.f2 p_627->g_32.f1 p_627->g_341 p_627->g_36 p_627->g_329 p_627->g_352 p_627->g_262 p_627->g_359 p_627->g_364 p_627->g_373 p_627->g_374 p_627->g_391 p_627->g_13 p_627->g_434 p_627->g_440 p_627->g_448 p_627->g_458 p_627->g_402 p_627->g_498 p_627->g_502 p_627->g_510
 * writes: p_627->g_13 p_627->g_248 p_627->g_250 p_627->g_306 p_627->g_325 p_627->g_329 p_627->g_20.f3 p_627->g_20.f2 p_627->g_32.f1 p_627->g_342 p_627->g_352 p_627->g_359 p_627->g_20 p_627->g_402 p_627->g_444 p_627->g_445 p_627->g_510
 */
uint32_t * func_24(int32_t  p_25, uint8_t  p_26, uint32_t * p_27, uint32_t * p_28, uint16_t  p_29, struct S3 * p_627)
{ /* block id: 9 */
    int32_t *l_247[5] = {&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0]};
    int32_t **l_246 = &l_247[4];
    int i;
    if ((atomic_inc(&p_627->g_atomic_input[15 * get_linear_group_id() + 3]) == 1))
    { /* block id: 11 */
        int32_t l_37 = 0x6724D257L;
        struct S2 l_38 = {0xBFF9046EL,4294967295UL,-10L,1UL,{0x2AC012777FC3FE76L,0L,0x24A04C7CL},0xA7B2E0AD50A0C201L};/* VOLATILE GLOBAL l_38 */
        int32_t *l_39 = &l_37;
        int32_t *l_40 = &l_37;
        l_40 = ((l_37 , l_38) , l_39);
        for (l_38.f0 = 0; (l_38.f0 > 50); l_38.f0 = safe_add_func_uint8_t_u_u(l_38.f0, 3))
        { /* block id: 15 */
            uint32_t l_43[7] = {0x06A54EE8L,0x20E6E86CL,0x06A54EE8L,0x06A54EE8L,0x20E6E86CL,0x06A54EE8L,0x06A54EE8L};
            int i;
            --l_43[2];
            for (l_43[2] = 0; (l_43[2] == 59); l_43[2]++)
            { /* block id: 19 */
                int32_t l_48 = (-5L);
                for (l_48 = 0; (l_48 >= (-25)); l_48 = safe_sub_func_int32_t_s_s(l_48, 8))
                { /* block id: 22 */
                    int16_t l_51[10] = {0x313FL,1L,0x313FL,0x313FL,1L,0x313FL,0x313FL,1L,0x313FL,0x313FL};
                    int i;
                    if ((l_51[0] |= 0L))
                    { /* block id: 24 */
                        uint64_t l_52 = 18446744073709551612UL;
                        int32_t l_55[10] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                        int16_t l_56 = (-1L);
                        uint16_t l_57[9][6][2] = {{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}},{{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L},{0x6E66L,0xE3B7L}}};
                        int i, j, k;
                        l_52--;
                        --l_57[3][5][1];
                    }
                    else
                    { /* block id: 27 */
                        int32_t l_60 = 0L;
                        int16_t l_61 = 0x3593L;
                        (*l_40) &= l_60;
                        l_61 |= 0x740323AAL;
                    }
                }
            }
        }
        for (l_37 = 0; (l_37 > (-14)); --l_37)
        { /* block id: 36 */
            int32_t l_64[6] = {0x04697E54L,0x04697E54L,0x04697E54L,0x04697E54L,0x04697E54L,0x04697E54L};
            int64_t l_65 = 0x1B820FDEBFC8A300L;
            int8_t l_66 = 0x66L;
            int i;
            l_66 |= (l_65 &= l_64[4]);
            for (l_64[4] = 0; (l_64[4] <= (-10)); l_64[4] = safe_sub_func_uint8_t_u_u(l_64[4], 7))
            { /* block id: 41 */
                struct S2 l_69 = {2UL,0xE66DBAC6L,1L,0x0EDDB647L,{0x0CB415C855A4044AL,2L,4294967290UL},0xFFD3C4F9076B3EC5L};/* VOLATILE GLOBAL l_69 */
                VECTOR(int32_t, 2) l_70 = (VECTOR(int32_t, 2))(1L, 0x5AF80CEFL);
                uint32_t l_71 = 0x325EC3E4L;
                int16_t l_104[1][1];
                uint32_t l_105 = 4294967293UL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_104[i][j] = 0x547BL;
                }
                if ((l_69 , ((GROUP_DIVERGE(0, 1) , FAKE_DIVERGE(p_627->group_1_offset, get_group_id(1), 10)) , (l_71 = ((VECTOR(int32_t, 16))(l_70.xyyyyxxxxxxyxxyy)).sb))))
                { /* block id: 43 */
                    int32_t l_72 = 0L;
                    uint16_t l_73 = 0x5347L;
                    int8_t l_76 = 0x0CL;
                    uint16_t l_77 = 65534UL;
                    int32_t *l_80 = &l_72;
                    VECTOR(int32_t, 2) l_81 = (VECTOR(int32_t, 2))(0x48DD589EL, 6L);
                    int i;
                    --l_73;
                    --l_77;
                    l_39 = l_80;
                    (*l_39) ^= ((VECTOR(int32_t, 4))(l_81.xxxx)).z;
                }
                else
                { /* block id: 48 */
                    VECTOR(int16_t, 2) l_82 = (VECTOR(int16_t, 2))((-1L), 0x765DL);
                    int64_t l_83 = 0x7F6818A95D68046AL;
                    VECTOR(uint32_t, 2) l_84 = (VECTOR(uint32_t, 2))(0x615E2BE9L, 9UL);
                    VECTOR(uint32_t, 8) l_85 = (VECTOR(uint32_t, 8))(0xB1C4CF87L, (VECTOR(uint32_t, 4))(0xB1C4CF87L, (VECTOR(uint32_t, 2))(0xB1C4CF87L, 0x496E341DL), 0x496E341DL), 0x496E341DL, 0xB1C4CF87L, 0x496E341DL);
                    uint32_t l_86 = 0x66CB4C16L;
                    uint32_t l_87 = 0UL;
                    int32_t l_88 = (-4L);
                    struct S0 l_89 = {0x0995AFD930511C70L,-1L,4294967295UL};/* VOLATILE GLOBAL l_89 */
                    uint32_t l_90[8] = {0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L,0xBA6DCB14L};
                    VECTOR(uint8_t, 2) l_91 = (VECTOR(uint8_t, 2))(5UL, 1UL);
                    VECTOR(uint8_t, 4) l_92 = (VECTOR(uint8_t, 4))(0x08L, (VECTOR(uint8_t, 2))(0x08L, 0x57L), 0x57L);
                    uint32_t l_93 = 0x141CCEB6L;
                    int32_t l_94[4] = {2L,2L,2L,2L};
                    uint16_t l_95 = 1UL;
                    uint64_t l_96 = 0x29369BD42CCF7F33L;
                    int64_t l_97 = 0x7025C2D45B905804L;
                    int8_t l_98 = (-10L);
                    int8_t l_99 = 1L;
                    int32_t *l_100 = &l_94[0];
                    VECTOR(int64_t, 8) l_101 = (VECTOR(int64_t, 8))(0x598C9EDF83F4F48EL, (VECTOR(int64_t, 4))(0x598C9EDF83F4F48EL, (VECTOR(int64_t, 2))(0x598C9EDF83F4F48EL, 0L), 0L), 0L, 0x598C9EDF83F4F48EL, 0L);
                    int8_t l_102 = 0x31L;
                    struct S0 l_103 = {0L,0x1772C44EL,0xF5B4EA81L};/* VOLATILE GLOBAL l_103 */
                    int i;
                    l_70.y &= ((VECTOR(int32_t, 16))(0x1F957098L, 0x102D4ECAL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_82.xx)), 0x3ABBL, (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(4294967295UL, 4294967295UL, (l_83 , FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10)), 1UL, ((VECTOR(uint32_t, 8))(0xE06325DDL, ((VECTOR(uint32_t, 4))(l_84.xyxx)), 1UL, 1UL, 0x179BD3B1L)), 4294967293UL, 4294967287UL, 0UL, 0x7690A484L)).hi, ((VECTOR(uint32_t, 4))(l_85.s2145)).wxwxwyxz))).s3271674060104571, ((VECTOR(uint32_t, 4))((l_88 |= (l_87 = l_86)), ((VECTOR(uint32_t, 2))(0x7D55B84CL, 0x31A558FFL)), 1UL)).wzyxwyxyywxyxywx))).s0 , l_89) , l_90[2]), 0UL, ((VECTOR(uint8_t, 8))(l_91.yxxxxxxx)), 1UL, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 2))(l_92.zw)).yyyxyyyy, (uint8_t)l_93))).odd, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(0x02L, ((VECTOR(uint8_t, 8))(0UL, (l_94[0] = 249UL), l_95, ((VECTOR(uint8_t, 4))(1UL)), 0x36L)), l_96, ((VECTOR(uint8_t, 4))(1UL)), 0x80L, 251UL)).sf646))), ((VECTOR(uint8_t, 4))(0UL))))), 0UL)).even)).s5 , l_97), ((VECTOR(int16_t, 4))(0x58D7L)), 0x0C8AL, ((VECTOR(int16_t, 4))(7L)), l_98, 0x1C2BL, 0x10E1L)), ((VECTOR(uint16_t, 16))(0x7F23L))))).se452)), ((VECTOR(int32_t, 2))(0x13E1FD80L)), ((VECTOR(int32_t, 2))(0x02054360L)), ((VECTOR(int32_t, 2))(0x0291DA39L)), 1L, l_99, (-1L), 0x58353C78L)).s9;
                    l_40 = l_100;
                    l_38.f4 = ((l_102 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_101.s60374733)).s67)))).lo) , l_103);
                }
                l_105 |= l_104[0][0];
            }
        }
        for (l_37 = 0; (l_37 != (-10)); l_37 = safe_sub_func_uint16_t_u_u(l_37, 3))
        { /* block id: 62 */
            uint32_t l_108[10];
            struct S0 l_198 = {0x2399D5E12A271547L,0x1B12DA38L,7UL};/* VOLATILE GLOBAL l_198 */
            uint8_t l_199 = 5UL;
            struct S2 l_200 = {0xF1FF036BL,0xE91BB188L,0x75BA48F3C6CE5F64L,0xC0DB7EC5L,{0x08E5A82F8B99F19BL,0x18C47F8CL,7UL},0x7B01EF6679340A2AL};/* VOLATILE GLOBAL l_200 */
            int32_t l_201 = (-1L);
            uint8_t l_202[4] = {255UL,255UL,255UL,255UL};
            uint8_t l_203 = 255UL;
            uint64_t l_204[6][9] = {{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL},{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL},{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL},{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL},{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL},{0xDA88B9B96571B35FL,18446744073709551610UL,18446744073709551610UL,0xDA88B9B96571B35FL,0x1D9D73837DE6D6B8L,18446744073709551615UL,18446744073709551615UL,0x1D9D73837DE6D6B8L,0xDA88B9B96571B35FL}};
            int i, j;
            for (i = 0; i < 10; i++)
                l_108[i] = 0xE018F5FBL;
            if (l_108[1])
            { /* block id: 63 */
                int64_t l_109[7] = {0x17B476EADDFB1779L,0x22336EAB1F273F2FL,0x17B476EADDFB1779L,0x17B476EADDFB1779L,0x22336EAB1F273F2FL,0x17B476EADDFB1779L,0x17B476EADDFB1779L};
                uint16_t l_110[7][2];
                VECTOR(int32_t, 2) l_125 = (VECTOR(int32_t, 2))(0x6361316CL, (-1L));
                VECTOR(int32_t, 8) l_126 = (VECTOR(int32_t, 8))(0x57C3C58EL, (VECTOR(int32_t, 4))(0x57C3C58EL, (VECTOR(int32_t, 2))(0x57C3C58EL, 0x1D0698F7L), 0x1D0698F7L), 0x1D0698F7L, 0x57C3C58EL, 0x1D0698F7L);
                VECTOR(int32_t, 2) l_127 = (VECTOR(int32_t, 2))(0x3A672A2EL, 1L);
                uint32_t l_128 = 0x9919FE58L;
                VECTOR(int32_t, 16) l_129 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x028F5B55L), 0x028F5B55L), 0x028F5B55L, (-6L), 0x028F5B55L, (VECTOR(int32_t, 2))((-6L), 0x028F5B55L), (VECTOR(int32_t, 2))((-6L), 0x028F5B55L), (-6L), 0x028F5B55L, (-6L), 0x028F5B55L);
                uint32_t l_130[1];
                VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))(0x2A3D4019L, 0x70258B70L);
                uint32_t l_132 = 0x1FBA9B0EL;
                uint32_t l_133 = 4294967295UL;
                int32_t l_134 = (-1L);
                uint16_t l_135 = 0xC919L;
                VECTOR(int32_t, 4) l_136 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x6DFB2153L), 0x6DFB2153L);
                int8_t l_137 = (-5L);
                uint32_t l_138 = 4294967289UL;
                uint16_t l_139 = 1UL;
                int16_t l_140 = 9L;
                int16_t l_141 = 0x27D7L;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_110[i][j] = 0xACE5L;
                }
                for (i = 0; i < 1; i++)
                    l_130[i] = 4294967291UL;
                if (((l_109[4] = 0x2DA50C60L) , l_110[4][1]))
                { /* block id: 65 */
                    uint32_t l_111 = 1UL;
                    uint32_t l_112 = 0x1BA722A3L;
                    int32_t l_114 = 0x00109A6AL;
                    int32_t *l_113 = &l_114;
                    l_39 = (l_111 , (l_112 , l_113));
                }
                else
                { /* block id: 67 */
                    uint16_t l_115 = 65533UL;
                    int32_t l_118 = 1L;
                    VECTOR(int32_t, 2) l_119 = (VECTOR(int32_t, 2))((-1L), 6L);
                    int i;
                    l_115++;
                    l_118 &= (-2L);
                    if (((VECTOR(int32_t, 16))(l_119.yyyyyxyyxyxxyxyx)).sc)
                    { /* block id: 70 */
                        struct S1 l_120 = {0x75L,4294967294UL,18446744073709551614UL,0x66105D75L};
                        struct S1 l_121 = {0x18L,0x3EB03636L,9UL,0L};
                        l_121 = l_120;
                    }
                    else
                    { /* block id: 72 */
                        int8_t l_122 = 5L;
                        int32_t l_124 = 0x0A3390C0L;
                        int32_t *l_123 = &l_124;
                        l_40 = (l_39 = (void*)0);
                        l_118 |= l_122;
                        l_123 = (l_39 = l_123);
                    }
                }
                l_128 ^= (GROUP_DIVERGE(2, 1) , ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(l_125.xyyyxyxy)), 8L, 0x2E7EE4ACL, ((VECTOR(int32_t, 8))(l_126.s51302456)).s5, ((VECTOR(int32_t, 4))(l_127.yyyx)))).se);
                if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_129.sec)), (-4L), (-1L))).even)).even, l_130[0], 0x555B1A04L, 8L)), (-3L), 0x5B20BFABL, l_131.y, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(1L, l_132, 0x715622FDL, (l_140 |= ((VECTOR(int32_t, 8))((-5L), (l_127.x = 0x34D5399EL), l_133, (l_135 = l_134), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_136.wxyzyxxxzzyyyxzw)).s94, ((VECTOR(int32_t, 2))((-1L), (-8L)))))), 0x763DAB8FL, l_137, (l_139 = (l_125.y &= l_138)), 4L, 0x3173B0BAL, 0x2A123F68L)).s4736036602543036, ((VECTOR(int32_t, 16))(0L))))).s56, ((VECTOR(int32_t, 2))((-1L)))))).yyyx, ((VECTOR(int32_t, 4))(0x0AA76286L))))))))))).s1), ((VECTOR(int32_t, 4))(0x48C82E53L)), ((VECTOR(int32_t, 2))(0x19967109L)), ((VECTOR(int32_t, 4))(0x5ABA5DBCL)), 0x0104BDE1L, 0x50DB1F33L)).sd1, ((VECTOR(int32_t, 2))(0x0ED9186FL)), ((VECTOR(int32_t, 2))(1L))))).xxxyyxxy)), 0x3C61942FL)).s87e4)).ywxyzzwyxwwyzzxy, (int32_t)l_141))).s71, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 2))(0x48B57BA1L)), ((VECTOR(int32_t, 2))((-6L)))))), 0x46BC9B9DL, 0x7053ABDBL)).y)
                { /* block id: 86 */
                    int32_t l_142 = 4L;
                    VECTOR(uint32_t, 8) l_170 = (VECTOR(uint32_t, 8))(0x32E4EA20L, (VECTOR(uint32_t, 4))(0x32E4EA20L, (VECTOR(uint32_t, 2))(0x32E4EA20L, 0x76FD2365L), 0x76FD2365L), 0x76FD2365L, 0x32E4EA20L, 0x76FD2365L);
                    VECTOR(uint32_t, 16) l_171 = (VECTOR(uint32_t, 16))(0x0C31A17AL, (VECTOR(uint32_t, 4))(0x0C31A17AL, (VECTOR(uint32_t, 2))(0x0C31A17AL, 0x34C5E8B8L), 0x34C5E8B8L), 0x34C5E8B8L, 0x0C31A17AL, 0x34C5E8B8L, (VECTOR(uint32_t, 2))(0x0C31A17AL, 0x34C5E8B8L), (VECTOR(uint32_t, 2))(0x0C31A17AL, 0x34C5E8B8L), 0x0C31A17AL, 0x34C5E8B8L, 0x0C31A17AL, 0x34C5E8B8L);
                    VECTOR(int32_t, 4) l_172 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L));
                    uint32_t l_173[4];
                    VECTOR(int32_t, 2) l_174 = (VECTOR(int32_t, 2))((-1L), 0x18711890L);
                    VECTOR(int32_t, 4) l_175 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0L), 0L);
                    VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 1L), 1L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_173[i] = 4294967287UL;
                    for (l_142 = 8; (l_142 > (-12)); l_142--)
                    { /* block id: 89 */
                        int32_t *l_145[9];
                        uint32_t l_148 = 0xD2A7965DL;
                        uint32_t *l_147 = &l_148;
                        uint32_t **l_146 = &l_147;
                        VECTOR(int64_t, 2) l_149 = (VECTOR(int64_t, 2))(0x2AB673122300B125L, 0L);
                        uint64_t l_150[1];
                        struct S2 l_151 = {0UL,4294967287UL,0x6C3F422AACBB44B8L,0xFC6A774EL,{0x67B04F094863BCAAL,8L,4294967288UL},18446744073709551607UL};/* VOLATILE GLOBAL l_151 */
                        uint8_t l_152 = 1UL;
                        VECTOR(uint32_t, 16) l_153 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), 4294967291UL), 4294967291UL, 4294967295UL, 4294967291UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967291UL), 4294967295UL, 4294967291UL, 4294967295UL, 4294967291UL);
                        VECTOR(int64_t, 2) l_154 = (VECTOR(int64_t, 2))(0x3E34102941B660CBL, 0x480C949A0C9D9835L);
                        uint8_t l_155 = 0xDBL;
                        int64_t l_156 = 0x26B0373C0282D235L;
                        uint32_t l_157 = 5UL;
                        int64_t l_158[1];
                        int32_t l_159[2];
                        int64_t l_160[6] = {1L,1L,1L,1L,1L,1L};
                        int32_t l_161 = 0L;
                        uint8_t l_162[5][3][6] = {{{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L}},{{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L}},{{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L}},{{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L}},{{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L},{0x3FL,9UL,0x36L,0xF1L,0xE2L,0xE2L}}};
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_145[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                            l_150[i] = 1UL;
                        for (i = 0; i < 1; i++)
                            l_158[i] = 0L;
                        for (i = 0; i < 2; i++)
                            l_159[i] = 0x080B996AL;
                        l_39 = l_145[8];
                        l_146 = l_146;
                        l_125.y &= ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-1L), ((VECTOR(int64_t, 2))(l_149.yx)), 7L, (l_109[0] &= l_150[0]), 0x72209DD69673EEE6L, 1L, 1L, 0x430530C7A2D7FE98L, 6L, 0x358F46018AEFFB06L, 0x72490424AEAB2E5FL, (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((l_151 , (l_152 , l_153.s7)), 0x1A8A250D85C2BE57L, ((VECTOR(int64_t, 8))(l_154.xyxxyyyx)), (l_157 = (l_109[0] = ((VECTOR(int64_t, 8))(0x50B9E8D0F59D7E22L, (l_149.x ^= l_155), l_156, 0x48821C202275D252L, ((VECTOR(int64_t, 2))(0x71C437321204FD57L)), 0x656744AC8F83BE11L, 0L)).s7)), l_158[0], l_159[0], ((VECTOR(int64_t, 2))(0L)), 0x1764C40407284809L)).s04)))), 1L)).sbd)), 0x06F38ED03E113581L, 0x2974AF1B99297C0AL)).y , FAKE_DIVERGE(p_627->global_1_offset, get_global_id(1), 10)) , 0x3D0280CFL);
                        ++l_162[3][0][3];
                    }
                    for (l_142 = 11; (l_142 > (-12)); l_142 = safe_sub_func_int16_t_s_s(l_142, 7))
                    { /* block id: 101 */
                        int8_t l_167 = 0x00L;
                        int64_t l_168 = 0L;
                        int16_t l_169 = 0x17F5L;
                        l_168 |= l_167;
                        l_127.y |= l_169;
                    }
                    if (((l_134 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 1UL)), 0x88D95DDAL, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 2))(4294967295UL, 0xC731BA76L)), 0xD2739A24L)).odd)).yxxx)))).even, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 16))(l_170.s4743267726354227)).sa5e9, (uint32_t)((VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL)).lo))), ((VECTOR(uint32_t, 4))(l_171.s525e))))).even))), GROUP_DIVERGE(0, 1), 4294967295UL, 0x50A6E4D9L)).odd)).hi)).xyxxxyyyxyxyxxyx)).s5 , (-4L))) , ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(l_172.zw)).xxyyxyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-10L), 0x194EB943L)).xyyy)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_173[2], 0x200B00CFL, 0x2C32F726L, 7L)).odd, ((VECTOR(int32_t, 8))(0x5A364DE6L, ((VECTOR(int32_t, 2))((-1L), 0x5F1352EBL)), ((VECTOR(int32_t, 4))(4L, ((VECTOR(int32_t, 2))(l_174.yy)), 0x5368092EL)), 0x6647D65CL)).s26))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(l_175.yx)).xxyyxxyx))))), 0L, (-7L))).lo))).s51, ((VECTOR(int32_t, 16))(l_176.yzzzxyyyxzzzyzxz)).sea))).odd))
                    { /* block id: 106 */
                        uint64_t l_177 = 0x38AD5E783D5683CAL;
                        int16_t l_180 = 0x326DL;
                        uint16_t l_181 = 65531UL;
                        l_177++;
                        l_181 &= l_180;
                    }
                    else
                    { /* block id: 109 */
                        uint32_t l_184 = 1UL;
                        uint32_t *l_183 = &l_184;
                        uint32_t **l_182[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        uint32_t **l_185 = (void*)0;
                        uint32_t **l_186 = &l_183;
                        uint32_t **l_187 = &l_183;
                        int32_t l_189 = 1L;
                        int32_t *l_188 = &l_189;
                        int16_t l_190 = 1L;
                        int i, j, k;
                        l_187 = (l_186 = (l_185 = l_182[4][6][0]));
                        l_40 = l_188;
                        l_190 = ((*l_188) = 0x33CC853FL);
                    }
                }
                else
                { /* block id: 117 */
                    int32_t l_191 = 1L;
                    uint64_t l_192 = 0x4B50EF8E2C787117L;
                    l_191 = 0x1B1E4FE6L;
                    l_127.x |= l_192;
                }
            }
            else
            { /* block id: 121 */
                uint64_t l_193 = 1UL;
                int32_t l_194 = 1L;
                if ((l_193 , l_194))
                { /* block id: 122 */
                    uint32_t l_195 = 4294967295UL;
                    uint32_t l_196 = 0xF7B13930L;
                    l_196 = l_195;
                }
                else
                { /* block id: 124 */
                    struct S2 l_197 = {9UL,0x3DB9C2B1L,1L,7UL,{0x533FC0249AFE3BE9L,0x369C0D2DL,4294967294UL},18446744073709551615UL};/* VOLATILE GLOBAL l_197 */
                    l_38 = l_197;
                }
            }
            l_38.f4 = l_198;
            if ((l_204[0][7] = (l_199 , ((l_200 , 0x0EF07762L) , (l_203 = (l_202[3] = l_201))))))
            { /* block id: 132 */
                int32_t *l_205 = (void*)0;
                uint64_t l_206 = 18446744073709551613UL;
                uint32_t l_207 = 1UL;
                VECTOR(int8_t, 8) l_234 = (VECTOR(int8_t, 8))(0x5AL, (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x5AL), 0x5AL), 0x5AL, 0x5AL, 0x5AL);
                uint16_t l_235 = 65535UL;
                int32_t **l_236 = &l_205;
                int32_t **l_237 = &l_205;
                int i;
                l_40 = l_205;
                if ((l_207 = l_206))
                { /* block id: 135 */
                    int64_t l_208 = 0x749ECA4B766E8CD0L;
                    uint64_t l_209 = 0x141DA182B40DBB42L;
                    l_209++;
                }
                else
                { /* block id: 137 */
                    uint64_t l_212 = 0xD2193D004A956464L;
                    VECTOR(int16_t, 2) l_215 = (VECTOR(int16_t, 2))((-1L), 0x2CB7L);
                    VECTOR(uint16_t, 4) l_216 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 2UL), 2UL);
                    VECTOR(uint16_t, 8) l_217 = (VECTOR(uint16_t, 8))(0xFD1AL, (VECTOR(uint16_t, 4))(0xFD1AL, (VECTOR(uint16_t, 2))(0xFD1AL, 0x2296L), 0x2296L), 0x2296L, 0xFD1AL, 0x2296L);
                    VECTOR(uint16_t, 2) l_218 = (VECTOR(uint16_t, 2))(0xBA2EL, 1UL);
                    uint16_t l_219 = 65534UL;
                    uint64_t l_220 = 0x9EBD8DD007751AF7L;
                    int32_t l_221 = 0x7064817DL;
                    uint8_t l_222 = 0x65L;
                    VECTOR(uint16_t, 16) l_223 = (VECTOR(uint16_t, 16))(0xF8E1L, (VECTOR(uint16_t, 4))(0xF8E1L, (VECTOR(uint16_t, 2))(0xF8E1L, 0x3FD4L), 0x3FD4L), 0x3FD4L, 0xF8E1L, 0x3FD4L, (VECTOR(uint16_t, 2))(0xF8E1L, 0x3FD4L), (VECTOR(uint16_t, 2))(0xF8E1L, 0x3FD4L), 0xF8E1L, 0x3FD4L, 0xF8E1L, 0x3FD4L);
                    VECTOR(uint16_t, 16) l_224 = (VECTOR(uint16_t, 16))(0x2D6FL, (VECTOR(uint16_t, 4))(0x2D6FL, (VECTOR(uint16_t, 2))(0x2D6FL, 65535UL), 65535UL), 65535UL, 0x2D6FL, 65535UL, (VECTOR(uint16_t, 2))(0x2D6FL, 65535UL), (VECTOR(uint16_t, 2))(0x2D6FL, 65535UL), 0x2D6FL, 65535UL, 0x2D6FL, 65535UL);
                    int32_t l_225[5][7][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
                    uint32_t l_226 = 4294967295UL;
                    int16_t l_227 = 0x3A2CL;
                    VECTOR(int32_t, 4) l_228 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x26A31B5FL), 0x26A31B5FL);
                    int32_t l_229 = 0L;
                    int32_t l_230[5][5] = {{(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L)}};
                    uint32_t l_233 = 0x8BE13376L;
                    uint32_t *l_232 = &l_233;
                    uint32_t **l_231 = &l_232;
                    int i, j, k;
                    l_212++;
                    l_201 ^= ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_215.xy)), ((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 2))(l_216.yy)).xxyyxxyxxxxyyxyx, ((VECTOR(uint16_t, 8))(l_217.s24365252)).s3727543012767720, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_218.yy)), 2UL, 0xDEA1L, (l_222 = (l_219 , (l_221 = l_220))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_223.sf5b5c5c848cc07b7)).s8506)), 65528UL, ((VECTOR(uint16_t, 4))(l_224.saeea)), 0x6215L, 6UL))))).seb))), ((VECTOR(int32_t, 16))((l_225[3][1][0] , 0L), ((l_108[1] &= l_226) , l_227), 0x31F2CF1AL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_228.xxxxwzxwywzwxxyw)).sef)).yyyy)), l_229, 1L, (-1L), (-1L), l_230[4][0], ((VECTOR(int32_t, 4))((-9L))))).s09))).hi;
                    l_231 = (void*)0;
                }
                l_201 |= (l_235 = l_234.s0);
                l_237 = l_236;
            }
            else
            { /* block id: 148 */
                int32_t l_238 = 1L;
                for (l_238 = 0; (l_238 < (-22)); --l_238)
                { /* block id: 151 */
                    VECTOR(uint32_t, 4) l_241 = (VECTOR(uint32_t, 4))(0xFEF89A33L, (VECTOR(uint32_t, 2))(0xFEF89A33L, 4294967295UL), 4294967295UL);
                    VECTOR(int32_t, 16) l_242 = (VECTOR(int32_t, 16))(0x1213A395L, (VECTOR(int32_t, 4))(0x1213A395L, (VECTOR(int32_t, 2))(0x1213A395L, 0x33E59652L), 0x33E59652L), 0x33E59652L, 0x1213A395L, 0x33E59652L, (VECTOR(int32_t, 2))(0x1213A395L, 0x33E59652L), (VECTOR(int32_t, 2))(0x1213A395L, 0x33E59652L), 0x1213A395L, 0x33E59652L, 0x1213A395L, 0x33E59652L);
                    uint8_t l_243 = 255UL;
                    int i;
                    l_243 &= (l_201 = (((VECTOR(uint32_t, 4))(l_241.zwyw)).w , ((VECTOR(int32_t, 8))(4L, ((VECTOR(int32_t, 4))(l_242.s6118)), ((VECTOR(int32_t, 2))(0L, (-1L))), 0x60817985L)).s2));
                }
            }
        }
        unsigned int result = 0;
        result += l_37;
        result += l_38.f0;
        result += l_38.f1;
        result += l_38.f2;
        result += l_38.f3;
        result += l_38.f4.f0;
        result += l_38.f4.f1;
        result += l_38.f4.f2;
        result += l_38.f5;
        atomic_add(&p_627->g_special_values[15 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 157 */
        (1 + 1);
    }
    (*l_246) = func_244((l_246 != p_627->g_249), p_627);
    for (p_627->g_20.f3 = 8; (p_627->g_20.f3 < (-19)); p_627->g_20.f3 = safe_sub_func_int32_t_s_s(p_627->g_20.f3, 1))
    { /* block id: 267 */
        (*p_627->g_249) = (void*)0;
    }
    return l_247[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_35 p_627->g_260 p_627->g_261 p_627->g_comm_values p_627->g_34 p_627->g_20.f0 p_627->g_249 p_627->g_32.f2 p_627->l_comm_values p_627->g_318 p_627->g_248 p_627->g_20.f3 p_627->g_330 p_627->g_325 p_627->g_250 p_627->g_20.f2 p_627->g_32.f1 p_627->g_341 p_627->g_36 p_627->g_329 p_627->g_352 p_627->g_262 p_627->g_359 p_627->g_364 p_627->g_373 p_627->g_374 p_627->g_391 p_627->g_13 p_627->g_434 p_627->g_440 p_627->g_448 p_627->g_458 p_627->g_402 p_627->g_498 p_627->g_502 p_627->g_510
 * writes: p_627->g_13 p_627->g_248 p_627->g_250 p_627->g_306 p_627->g_325 p_627->g_329 p_627->g_20.f3 p_627->g_20.f2 p_627->g_32.f1 p_627->g_342 p_627->g_352 p_627->g_359 p_627->g_20 p_627->g_402 p_627->g_444 p_627->g_445 p_627->g_510
 */
int32_t * func_244(int8_t  p_245, struct S3 * p_627)
{ /* block id: 160 */
    int32_t **l_508[5] = {&p_627->g_329,&p_627->g_329,&p_627->g_329,&p_627->g_329,&p_627->g_329};
    int32_t *l_509[5] = {&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0]};
    uint8_t l_511 = 0xD2L;
    int i;
    p_627->g_510 = (l_509[2] = func_251(func_254(func_256(p_245, p_627), p_627), p_245, p_627));
    l_511--;
    (*p_627->g_329) = (*p_627->g_510);
    return &p_627->g_248[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_36 p_627->g_329 p_627->g_352 p_627->g_248 p_627->g_261 p_627->g_262 p_627->g_359 p_627->g_364 p_627->g_373 p_627->g_374 p_627->g_325 p_627->g_391 p_627->g_13 p_627->g_260.f1 p_627->g_20.f3 p_627->g_318 p_627->g_35 p_627->g_260 p_627->g_comm_values p_627->g_34 p_627->g_20.f0 p_627->g_249 p_627->g_32.f2 p_627->g_434 p_627->g_440 p_627->g_448 p_627->g_32.f1 p_627->g_458 p_627->g_402 p_627->g_498 p_627->g_502
 * writes: p_627->g_248 p_627->g_352 p_627->g_359 p_627->g_20 p_627->g_325 p_627->g_402 p_627->g_13 p_627->g_250 p_627->g_444 p_627->g_445 p_627->g_32.f1
 */
int32_t * func_251(uint32_t ** p_252, uint64_t  p_253, struct S3 * p_627)
{ /* block id: 200 */
    int32_t *l_344 = (void*)0;
    int32_t l_346 = 1L;
    int32_t ***l_349 = (void*)0;
    struct S1 l_360[2] = {{1L,0x44963142L,0xD29603D7216562BAL,-10L},{1L,0x44963142L,0xD29603D7216562BAL,-10L}};
    int32_t l_417 = 0x6BE4FE29L;
    int32_t l_418 = 4L;
    int32_t l_419[2][4][9] = {{{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)}},{{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)},{(-1L),7L,(-1L),(-1L),7L,(-1L),(-1L),7L,(-1L)}}};
    uint32_t l_420 = 4294967295UL;
    int32_t *l_424 = (void*)0;
    int32_t **l_423 = &l_424;
    VECTOR(uint64_t, 4) l_435 = (VECTOR(uint64_t, 4))(0x626CDAE7ECEFA8F7L, (VECTOR(uint64_t, 2))(0x626CDAE7ECEFA8F7L, 0UL), 0UL);
    int8_t *l_501 = &l_360[1].f0;
    uint8_t l_504 = 0x07L;
    int i, j, k;
    l_346 ^= ((*p_627->g_329) = (p_627->g_36.x <= p_253));
    if (l_346)
    { /* block id: 203 */
        int32_t ***l_351 = &p_627->g_342;
        int32_t ****l_350 = &l_351;
        int32_t *l_355 = &l_346;
        int64_t l_398 = (-7L);
        int32_t l_415 = 1L;
        VECTOR(int32_t, 2) l_416 = (VECTOR(int32_t, 2))(0L, 0x7520941FL);
        int32_t **l_431 = &l_344;
        int i;
        p_627->g_352 ^= (safe_mul_func_uint16_t_u_u((l_349 == ((*l_350) = &p_627->g_342)), p_253));
        if ((*p_627->g_329))
        { /* block id: 206 */
            uint16_t *l_358[10][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
            struct S1 *l_361[1];
            uint64_t *l_375 = &p_627->g_325;
            VECTOR(uint64_t, 16) l_380 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3E9FBA819C30D7C4L), 0x3E9FBA819C30D7C4L), 0x3E9FBA819C30D7C4L, 18446744073709551615UL, 0x3E9FBA819C30D7C4L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3E9FBA819C30D7C4L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3E9FBA819C30D7C4L), 18446744073709551615UL, 0x3E9FBA819C30D7C4L, 18446744073709551615UL, 0x3E9FBA819C30D7C4L);
            VECTOR(uint16_t, 4) l_396 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x4B1AL), 0x4B1AL);
            int32_t l_397 = 1L;
            int8_t *l_399 = &l_360[1].f0;
            int32_t l_400 = 0x2D9FAC47L;
            int32_t *l_401 = &p_627->g_402;
            int32_t *l_403 = &l_397;
            int32_t *l_404 = &l_346;
            int32_t *l_405 = &l_397;
            int32_t *l_406 = &l_346;
            int16_t l_407 = 0x62B0L;
            int32_t *l_408 = &p_627->g_248[0];
            int32_t *l_409 = &p_627->g_248[1];
            int32_t *l_410 = (void*)0;
            int32_t *l_411 = &l_346;
            int32_t *l_412 = (void*)0;
            int32_t *l_413 = &p_627->g_248[0];
            int32_t *l_414[5];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_361[i] = &l_360[1];
            for (i = 0; i < 5; i++)
                l_414[i] = &l_397;
            (*p_627->g_329) = (safe_lshift_func_int8_t_s_s(((void*)0 == (*p_627->g_261)), ((((((void*)0 != l_355) , ((safe_rshift_func_uint8_t_u_s((((void*)0 != &p_627->g_262) || (p_627->g_359.x ^= p_253)), 0)) >= (p_253 != p_253))) < p_253) != p_627->g_36.x) == p_253)));
            (*p_627->g_329) = (((l_360[1] = (p_627->g_20 = l_360[1])) , ((*l_401) = (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_627->g_364.xyyyyyyx)).s2, (safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((!((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(p_627->g_373.s70573603)).s2, ((((*l_375) &= (p_253 || ((VECTOR(int16_t, 4))(p_627->g_374.xyxy)).x)) == (safe_div_func_uint16_t_u_u(1UL, (safe_mod_func_uint8_t_u_u(p_253, ((VECTOR(int8_t, 8))(((*l_355) = ((p_627->g_374.x >= ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_380.s66)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 8))((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_355) & 0UL), 2)), (*l_355))) , (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((*l_399) = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x20L, 8L)), ((VECTOR(int8_t, 2))(p_627->g_391.xy)), (safe_mod_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((l_397 = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_396.wzwyyywzywxwwwyz)))).s9), p_253)) >= 1UL) , p_253), p_627->g_13)), l_398, (-1L), 0x4FL)), 0x5FL, 0L, 0x2AL, ((VECTOR(int8_t, 2))(0x3BL)), ((VECTOR(int8_t, 2))(0L)), 3L)).s1), 255UL)), p_627->g_260.f1))) >= 0x7C95F5A43B8E29CEL), p_253)), ((VECTOR(uint64_t, 2))(0UL)), 5UL, ((VECTOR(uint64_t, 2))(1UL)), 7UL, 0x92D8DB87215AE6E5L)).s74, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), 0xEA0DA7A9E23ADA1FL, 1UL)).lo)), p_253, p_253, 0x300DB4193C3336E5L, 1UL)).s0) != 2UL)), p_627->g_20.f3, ((VECTOR(int8_t, 2))(0x18L)), 0x0AL, ((VECTOR(int8_t, 2))(0x04L)), 0x2BL)).s4))))) && (-1L)))), p_627->g_318.s0)) != p_627->g_391.y) < 4L) | p_253)), 1)), l_400)))))) , 0x63ABEA54L);
            l_420--;
            (*l_411) |= (p_627->g_391.y | p_627->g_359.x);
        }
        else
        { /* block id: 219 */
            int32_t **l_425 = &l_424;
            l_425 = l_423;
            if ((atomic_inc(&p_627->g_atomic_input[15 * get_linear_group_id() + 0]) == 7))
            { /* block id: 222 */
                uint32_t l_426[9][3] = {{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL},{0x6B0E186AL,4294967293UL,0x6B0E186AL}};
                int32_t l_427 = 1L;
                int16_t l_428[9][10] = {{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL},{0x44AFL,0x19AEL,(-1L),(-6L),0x19AEL,(-6L),(-1L),0x19AEL,0x44AFL,0x44AFL}};
                struct S1 l_429[1] = {{-1L,0UL,0x225985319E86FB2DL,0L}};
                struct S1 l_430[2][7] = {{{0x0CL,6UL,7UL,0x01CBCF88L},{9L,0xF35D8E2CL,18446744073709551611UL,-2L},{0x0CL,6UL,7UL,0x01CBCF88L},{0x0CL,6UL,7UL,0x01CBCF88L},{9L,0xF35D8E2CL,18446744073709551611UL,-2L},{0x0CL,6UL,7UL,0x01CBCF88L},{0x0CL,6UL,7UL,0x01CBCF88L}},{{0x0CL,6UL,7UL,0x01CBCF88L},{9L,0xF35D8E2CL,18446744073709551611UL,-2L},{0x0CL,6UL,7UL,0x01CBCF88L},{0x0CL,6UL,7UL,0x01CBCF88L},{9L,0xF35D8E2CL,18446744073709551611UL,-2L},{0x0CL,6UL,7UL,0x01CBCF88L},{0x0CL,6UL,7UL,0x01CBCF88L}}};
                int i, j;
                l_430[0][4] = ((l_428[2][4] = (l_427 = l_426[1][2])) , l_429[0]);
                unsigned int result = 0;
                int l_426_i0, l_426_i1;
                for (l_426_i0 = 0; l_426_i0 < 9; l_426_i0++) {
                    for (l_426_i1 = 0; l_426_i1 < 3; l_426_i1++) {
                        result += l_426[l_426_i0][l_426_i1];
                    }
                }
                result += l_427;
                int l_428_i0, l_428_i1;
                for (l_428_i0 = 0; l_428_i0 < 9; l_428_i0++) {
                    for (l_428_i1 = 0; l_428_i1 < 10; l_428_i1++) {
                        result += l_428[l_428_i0][l_428_i1];
                    }
                }
                int l_429_i0;
                for (l_429_i0 = 0; l_429_i0 < 1; l_429_i0++) {
                    result += l_429[l_429_i0].f0;
                    result += l_429[l_429_i0].f1;
                    result += l_429[l_429_i0].f2;
                    result += l_429[l_429_i0].f3;
                }
                int l_430_i0, l_430_i1;
                for (l_430_i0 = 0; l_430_i0 < 2; l_430_i0++) {
                    for (l_430_i1 = 0; l_430_i1 < 7; l_430_i1++) {
                        result += l_430[l_430_i0][l_430_i1].f0;
                        result += l_430[l_430_i0][l_430_i1].f1;
                        result += l_430[l_430_i0][l_430_i1].f2;
                        result += l_430[l_430_i0][l_430_i1].f3;
                    }
                }
                atomic_add(&p_627->g_special_values[15 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 226 */
                (1 + 1);
            }
        }
        (*l_431) = func_256(p_627->g_374.y, p_627);
    }
    else
    { /* block id: 231 */
        uint64_t *l_432[6];
        int32_t l_433[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int32_t ***l_442[4];
        int32_t **l_443 = &p_627->g_441;
        int32_t *l_449 = &p_627->g_248[0];
        VECTOR(uint64_t, 4) l_457 = (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0UL), 0UL);
        uint8_t l_471 = 1UL;
        int32_t *l_474 = &l_419[0][2][2];
        int i;
        for (i = 0; i < 6; i++)
            l_432[i] = &p_627->g_20.f2;
        for (i = 0; i < 4; i++)
            l_442[i] = &l_423;
        l_449 = ((l_433[4] = 0x90481C5094B244F7L) , (((p_627->g_35.s1 && (65532UL == (((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_627->g_434.yxxx)), p_627->g_364.x, p_627->g_248[0], ((VECTOR(uint64_t, 4))(l_435.zxyz)), ((VECTOR(uint64_t, 4))((safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((p_627->g_260.f4 , (p_627->g_444 = (l_443 = p_627->g_440))) == (p_627->g_445 = &p_627->g_441)), ((safe_mod_func_int32_t_s_s(l_433[4], 0x280AB89AL)) >= 4294967289UL))), FAKE_DIVERGE(p_627->group_0_offset, get_group_id(0), 10))), p_253, 8UL, 0xE6E26F5817B000F9L)), 0xD8912CC2FFF96C59L, 0x6A3FE16B1E33C11EL)), ((VECTOR(uint64_t, 16))(0x9426B6EFB406AF33L)), ((VECTOR(uint64_t, 16))(18446744073709551615UL))))), ((VECTOR(uint64_t, 16))(18446744073709551606UL))))).s1 , p_253))) != p_627->g_448) , (void*)0));
        for (p_627->g_32.f1 = 10; (p_627->g_32.f1 != (-9)); p_627->g_32.f1--)
        { /* block id: 239 */
            int16_t l_454 = 0x1032L;
            VECTOR(uint8_t, 8) l_464 = (VECTOR(uint8_t, 8))(0xC7L, (VECTOR(uint8_t, 4))(0xC7L, (VECTOR(uint8_t, 2))(0xC7L, 1UL), 1UL), 1UL, 0xC7L, 1UL);
            int32_t l_472 = 0x4C9A09EBL;
            int8_t *l_473 = &p_627->g_20.f0;
            int i;
            (*p_627->g_329) ^= ((safe_add_func_int64_t_s_s(p_253, (p_253 , l_454))) , (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_457.wyww)).z, (~((((void*)0 == p_627->g_458) <= p_627->g_260.f1) > (FAKE_DIVERGE(p_627->group_0_offset, get_group_id(0), 10) != (((((void*)0 == &p_627->g_20) , (safe_rshift_func_uint16_t_u_u((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-9L), 5L)).yyyxxxyyxxxxyxxy)).hi))))).s4 || ((safe_rshift_func_int8_t_s_u(((*l_473) = ((l_472 |= (((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_464.s3623172331616674)).hi)), ((VECTOR(uint8_t, 4))(((((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((VECTOR(int8_t, 4))(0L, ((safe_add_func_uint64_t_u_u(p_253, l_464.s1)) , 0x42L), 0x64L, 0L)).y > l_454), 14)), 0xDA68L)) ^ l_471) , l_457.y) || 7L), 248UL, 0x92L, 249UL)), 0xA3L, p_253, 0UL, 0x51L)), ((VECTOR(uint8_t, 16))(0xF7L))))).se | l_464.s3)) <= (-1L))), 1)) , p_627->g_391.y)), 12))) < l_454) & p_627->g_374.x)))))));
        }
        return &p_627->g_248[0];
    }
    for (p_627->g_402 = 0; (p_627->g_402 >= (-10)); --p_627->g_402)
    { /* block id: 248 */
        uint8_t *l_489 = &p_627->g_352;
        uint8_t *l_490 = (void*)0;
        uint8_t *l_491 = (void*)0;
        uint8_t *l_492 = (void*)0;
        int32_t l_493 = 8L;
        int32_t l_500 = 4L;
        int32_t l_505 = 0x4E68C9AEL;
        int32_t *l_507 = &l_417;
        (*l_344) = (p_253 != (GROUP_DIVERGE(0, 1) >= p_253));
        (*l_344) = 1L;
        (*l_344) |= (&p_627->g_459 != (void*)0);
        (*l_507) = (p_253 > ((l_500 = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10), 7)) , (safe_div_func_uint32_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_627->g_32.f2, (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(0x181EL, 0x661CL, (safe_rshift_func_uint8_t_u_s((l_493 |= ((*l_489) = 0x4DL)), (((((VECTOR(uint32_t, 8))(0x13B6E636L, (((0x5EF9L == (safe_lshift_func_uint8_t_u_u((((&p_627->g_249 != ((0x02L & (p_627->g_318.s0 == ((*l_344) = (safe_mul_func_uint16_t_u_u(((p_627->g_498 == (void*)0) , p_253), 0x1448L))))) , (void*)0)) , p_253) < l_500), 2))) , l_501) == p_627->g_502), l_500, 0x2A337B01L, ((VECTOR(uint32_t, 4))(4294967295UL)))).s5 | p_253) && p_253) | l_500))), ((VECTOR(int16_t, 2))(7L)), (-4L), 1L, 0x5354L)).lo, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))((-9L)))))).wzwzyzyy)).even, ((VECTOR(int16_t, 4))(6L))))))).w == p_627->g_34.x))), l_504)), p_627->g_20.f3))), GROUP_DIVERGE(2, 1)))) | l_505));
    }
    return &p_627->g_248[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_260.f4 p_627->g_330 p_627->g_325 p_627->g_249 p_627->g_250 p_627->g_20.f3 p_627->g_20.f2 p_627->g_32.f1 p_627->g_248 p_627->g_341
 * writes: p_627->g_329 p_627->g_248 p_627->g_325 p_627->g_250 p_627->g_20.f3 p_627->g_20.f2 p_627->g_32.f1 p_627->g_342
 */
uint32_t ** func_254(int32_t * p_255, struct S3 * p_627)
{ /* block id: 176 */
    int32_t *l_328 = &p_627->g_248[1];
    int32_t **l_327[9] = {&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328,&l_328};
    uint32_t **l_343 = &p_627->g_262;
    int i;
    p_627->g_329 = (p_627->g_260.f4 , p_255);
    (*p_255) = ((VECTOR(int32_t, 8))(p_627->g_330.s20067107)).s1;
    for (p_627->g_325 = 0; (p_627->g_325 == 45); p_627->g_325 = safe_add_func_uint8_t_u_u(p_627->g_325, 2))
    { /* block id: 181 */
        int32_t l_339 = 1L;
        (*p_627->g_249) = (*p_627->g_249);
        for (p_627->g_20.f3 = (-14); (p_627->g_20.f3 >= (-9)); p_627->g_20.f3 = safe_add_func_uint32_t_u_u(p_627->g_20.f3, 7))
        { /* block id: 185 */
            for (p_627->g_20.f2 = 0; (p_627->g_20.f2 == 22); p_627->g_20.f2 = safe_add_func_int64_t_s_s(p_627->g_20.f2, 4))
            { /* block id: 188 */
                int32_t *l_340 = &l_339;
                for (p_627->g_32.f1 = (-19); (p_627->g_32.f1 <= (-27)); p_627->g_32.f1 = safe_sub_func_int32_t_s_s(p_627->g_32.f1, 2))
                { /* block id: 191 */
                    (*p_255) &= l_339;
                    l_340 = p_255;
                }
            }
        }
    }
    (*p_627->g_341) = &p_255;
    return l_343;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_35 p_627->g_260 p_627->g_261 p_627->g_comm_values p_627->g_34 p_627->g_20.f0 p_627->g_249 p_627->g_32.f2 p_627->l_comm_values p_627->g_318 p_627->g_248 p_627->g_20.f3
 * writes: p_627->g_13 p_627->g_248 p_627->g_250 p_627->g_306 p_627->g_325
 */
int32_t * func_256(int32_t  p_257, struct S3 * p_627)
{ /* block id: 161 */
    uint16_t l_268 = 5UL;
    int32_t *l_273 = &p_627->g_248[0];
    uint32_t **l_274 = &p_627->g_262;
    int32_t **l_275 = &l_273;
    int32_t *l_277 = &p_627->g_248[0];
    int32_t **l_276 = &l_277;
    int32_t *l_278 = &p_627->g_248[0];
    int32_t *l_279 = (void*)0;
    int32_t *l_280 = (void*)0;
    int32_t *l_281[6] = {&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0],&p_627->g_248[0]};
    int32_t l_282 = 9L;
    int32_t l_283 = 0x6DA58A44L;
    int16_t l_284 = (-3L);
    uint32_t l_285[9][2] = {{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L},{0xE1303015L,0xE1303015L}};
    VECTOR(int32_t, 4) l_300 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
    uint64_t *l_305 = &p_627->g_306;
    VECTOR(uint8_t, 16) l_307 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 254UL), 254UL), 254UL, 255UL, 254UL, (VECTOR(uint8_t, 2))(255UL, 254UL), (VECTOR(uint8_t, 2))(255UL, 254UL), 255UL, 254UL, 255UL, 254UL);
    VECTOR(uint8_t, 8) l_310 = (VECTOR(uint8_t, 8))(0x7DL, (VECTOR(uint8_t, 4))(0x7DL, (VECTOR(uint8_t, 2))(0x7DL, 0x55L), 0x55L), 0x55L, 0x7DL, 0x55L);
    int32_t *l_319 = &l_283;
    uint32_t *l_320 = (void*)0;
    uint32_t *l_321 = &p_627->g_13;
    uint16_t *l_322 = &l_268;
    uint64_t *l_323 = (void*)0;
    uint64_t *l_324 = &p_627->g_325;
    int32_t l_326 = 9L;
    int i, j;
    (*p_627->g_249) = (((safe_add_func_uint16_t_u_u(((p_627->g_13 = p_627->g_35.s4) & ((p_627->g_260 , p_627->g_261) != ((safe_rshift_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(l_268)), ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((+(((*l_273) = (((&p_627->g_262 == (void*)0) || (p_627->g_260.f0 & p_627->g_comm_values[p_627->tid])) == 0x6B3B867074C7D2C4L)) <= p_257)), p_627->g_34.x)), 2)) & p_627->g_260.f4.f1))) && p_627->g_20.f0) >= (-4L)) | 4294967287UL) < p_257), 2)) , l_274))), GROUP_DIVERGE(2, 1))) || (-1L)) , (void*)0);
    (*l_276) = ((*l_275) = &p_627->g_248[1]);
    l_285[2][0]--;
    (*l_319) = (+(((safe_mul_func_uint16_t_u_u((0xCFL != (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((p_627->g_32.f2 & GROUP_DIVERGE(1, 1)) || ((VECTOR(int32_t, 8))(l_300.wwzxwwwz)).s0) & ((safe_sub_func_int32_t_s_s((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 2))(0x396242BDF68D6B1CL, (-1L))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(p_627->g_260.f4.f1, 0x57C8C645B7BFBE90L, 8L, 1L)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x68A62B9273867A1AL, 0x66CE93E1AF96DA55L, 0x145B06901F26A276L, (safe_add_func_uint64_t_u_u(((*l_305) = p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 19))]), ((*l_324) = ((l_305 == l_305) | ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(l_307.s22f1986f)).s1631752230533413, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((((*l_322) ^= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_310.s2031450706173764)).sb, ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967290UL, 1UL)))).odd, (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s((((*l_273) = (((((*l_321) = (~((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_627->g_318.s42)).xyyy)).z | p_627->g_260.f5) <= (3L >= ((((*l_276) = (void*)0) != l_319) , p_627->g_35.s2))))) > (-5L)) , p_257) == (*l_278))) < 4L))) < p_257) || p_257), p_257)))), p_257)) > FAKE_DIVERGE(p_627->local_2_offset, get_local_id(2), 10))))) , GROUP_DIVERGE(1, 1)), 0xBFL, 6UL, 0x25L, 255UL, ((VECTOR(uint8_t, 4))(2UL)), ((VECTOR(uint8_t, 2))(0x34L)), 0xB0L, ((VECTOR(uint8_t, 2))(0x94L)), 255UL, 1UL)))).s5b)).yxxxyyxxyxxxxyyy))).hi)).odd, ((VECTOR(uint8_t, 4))(7UL))))).odd, ((VECTOR(uint8_t, 2))(255UL))))), 1UL, 0xAA6CL, p_257, 0UL, 0xE452L, 0xA6C1L)).s6)))), p_627->g_35.s3, p_627->g_20.f3, 0x61CFDD80B24052D8L, 0x386287025BAF7115L)).s6254737177417312)).s8d))).xyxxyyyy)))), ((VECTOR(int64_t, 4))((-2L))), 0x057034A2D40E8E46L)).s00ec, ((VECTOR(int64_t, 4))(1L))))).odd)))).hi < GROUP_DIVERGE(0, 1)), GROUP_DIVERGE(2, 1))) && p_257)), 2)), 4)) , p_257), p_627->g_comm_values[p_627->tid])) <= 2UL) , p_627->g_35.s2) ^ (-7L)), p_257)) == p_627->g_35.s5), l_326))), p_627->g_318.s4)) < p_627->g_35.s1) <= 0x430F2E4CC1448BC1L));
    return &p_627->g_248[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S3 c_628;
    struct S3* p_627 = &c_628;
    struct S3 c_629 = {
        0UL, // p_627->g_13
        {-10L,0x932E3CA3L,18446744073709551615UL,0x6F49C23EL}, // p_627->g_20
        {0x5ADB51FD9AB8A87EL,0x02BC9063L,4294967295UL}, // p_627->g_32
        (VECTOR(uint8_t, 2))(0x93L, 246UL), // p_627->g_34
        (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0x29L), 0x29L), 0x29L, 0xE7L, 0x29L), // p_627->g_35
        (VECTOR(uint8_t, 2))(0x95L, 0xF4L), // p_627->g_36
        {0x4BD57DC6L,0x4BD57DC6L}, // p_627->g_248
        (void*)0, // p_627->g_250
        &p_627->g_250, // p_627->g_249
        {0UL,0xA5A51E6BL,0x7F7FB4EBCAFB7451L,0xF5524AC2L,{0x39416D76BB398669L,0x3BF9B92BL,0UL},18446744073709551607UL}, // p_627->g_260
        (void*)0, // p_627->g_262
        &p_627->g_262, // p_627->g_261
        3UL, // p_627->g_306
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5045L), 0x5045L), 0x5045L, 0L, 0x5045L), // p_627->g_318
        0x9D51BEF540C17C14L, // p_627->g_325
        &p_627->g_248[1], // p_627->g_329
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2B20B747L), 0x2B20B747L), 0x2B20B747L, 1L, 0x2B20B747L), // p_627->g_330
        &p_627->g_329, // p_627->g_342
        &p_627->g_342, // p_627->g_341
        (void*)0, // p_627->g_345
        246UL, // p_627->g_352
        (VECTOR(uint16_t, 2))(0xD7CAL, 0x5293L), // p_627->g_359
        (VECTOR(uint8_t, 2))(0xF9L, 1UL), // p_627->g_364
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x11C0L), 0x11C0L), 0x11C0L, 1UL, 0x11C0L), // p_627->g_373
        (VECTOR(int16_t, 2))((-7L), 0x40A6L), // p_627->g_374
        (VECTOR(int8_t, 2))(1L, 0x61L), // p_627->g_391
        8L, // p_627->g_402
        (VECTOR(uint64_t, 2))(0x7F8EA9105C732B72L, 0UL), // p_627->g_434
        &p_627->g_402, // p_627->g_441
        &p_627->g_441, // p_627->g_440
        &p_627->g_441, // p_627->g_444
        &p_627->g_441, // p_627->g_445
        9UL, // p_627->g_448
        0x7FL, // p_627->g_459
        &p_627->g_459, // p_627->g_458
        (void*)0, // p_627->g_499
        &p_627->g_499, // p_627->g_498
        0x41L, // p_627->g_503
        &p_627->g_503, // p_627->g_502
        (void*)0, // p_627->g_506
        &p_627->g_248[1], // p_627->g_510
        (VECTOR(uint8_t, 4))(0xA9L, (VECTOR(uint8_t, 2))(0xA9L, 8UL), 8UL), // p_627->g_548
        0xAC087C24L, // p_627->g_588
        {{0x0DL,4294967287UL,0x603E85C732DEDE17L,0x797CEF86L},{0x0DL,4294967287UL,0x603E85C732DEDE17L,0x797CEF86L}}, // p_627->g_596
        &p_627->g_596[0], // p_627->g_595
        &p_627->g_595, // p_627->g_594
        {2L,0L,0x9039E2E2L}, // p_627->g_626
        0, // p_627->v_collective
        sequence_input[get_global_id(0)], // p_627->global_0_offset
        sequence_input[get_global_id(1)], // p_627->global_1_offset
        sequence_input[get_global_id(2)], // p_627->global_2_offset
        sequence_input[get_local_id(0)], // p_627->local_0_offset
        sequence_input[get_local_id(1)], // p_627->local_1_offset
        sequence_input[get_local_id(2)], // p_627->local_2_offset
        sequence_input[get_group_id(0)], // p_627->group_0_offset
        sequence_input[get_group_id(1)], // p_627->group_1_offset
        sequence_input[get_group_id(2)], // p_627->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_627->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_628 = c_629;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_627);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_627->g_13, "p_627->g_13", print_hash_value);
    transparent_crc(p_627->g_20.f0, "p_627->g_20.f0", print_hash_value);
    transparent_crc(p_627->g_20.f1, "p_627->g_20.f1", print_hash_value);
    transparent_crc(p_627->g_20.f2, "p_627->g_20.f2", print_hash_value);
    transparent_crc(p_627->g_20.f3, "p_627->g_20.f3", print_hash_value);
    transparent_crc(p_627->g_32.f0, "p_627->g_32.f0", print_hash_value);
    transparent_crc(p_627->g_32.f1, "p_627->g_32.f1", print_hash_value);
    transparent_crc(p_627->g_32.f2, "p_627->g_32.f2", print_hash_value);
    transparent_crc(p_627->g_34.x, "p_627->g_34.x", print_hash_value);
    transparent_crc(p_627->g_34.y, "p_627->g_34.y", print_hash_value);
    transparent_crc(p_627->g_35.s0, "p_627->g_35.s0", print_hash_value);
    transparent_crc(p_627->g_35.s1, "p_627->g_35.s1", print_hash_value);
    transparent_crc(p_627->g_35.s2, "p_627->g_35.s2", print_hash_value);
    transparent_crc(p_627->g_35.s3, "p_627->g_35.s3", print_hash_value);
    transparent_crc(p_627->g_35.s4, "p_627->g_35.s4", print_hash_value);
    transparent_crc(p_627->g_35.s5, "p_627->g_35.s5", print_hash_value);
    transparent_crc(p_627->g_35.s6, "p_627->g_35.s6", print_hash_value);
    transparent_crc(p_627->g_35.s7, "p_627->g_35.s7", print_hash_value);
    transparent_crc(p_627->g_36.x, "p_627->g_36.x", print_hash_value);
    transparent_crc(p_627->g_36.y, "p_627->g_36.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_627->g_248[i], "p_627->g_248[i]", print_hash_value);

    }
    transparent_crc(p_627->g_260.f0, "p_627->g_260.f0", print_hash_value);
    transparent_crc(p_627->g_260.f1, "p_627->g_260.f1", print_hash_value);
    transparent_crc(p_627->g_260.f2, "p_627->g_260.f2", print_hash_value);
    transparent_crc(p_627->g_260.f3, "p_627->g_260.f3", print_hash_value);
    transparent_crc(p_627->g_260.f4.f0, "p_627->g_260.f4.f0", print_hash_value);
    transparent_crc(p_627->g_260.f4.f1, "p_627->g_260.f4.f1", print_hash_value);
    transparent_crc(p_627->g_260.f4.f2, "p_627->g_260.f4.f2", print_hash_value);
    transparent_crc(p_627->g_260.f5, "p_627->g_260.f5", print_hash_value);
    transparent_crc(p_627->g_306, "p_627->g_306", print_hash_value);
    transparent_crc(p_627->g_318.s0, "p_627->g_318.s0", print_hash_value);
    transparent_crc(p_627->g_318.s1, "p_627->g_318.s1", print_hash_value);
    transparent_crc(p_627->g_318.s2, "p_627->g_318.s2", print_hash_value);
    transparent_crc(p_627->g_318.s3, "p_627->g_318.s3", print_hash_value);
    transparent_crc(p_627->g_318.s4, "p_627->g_318.s4", print_hash_value);
    transparent_crc(p_627->g_318.s5, "p_627->g_318.s5", print_hash_value);
    transparent_crc(p_627->g_318.s6, "p_627->g_318.s6", print_hash_value);
    transparent_crc(p_627->g_318.s7, "p_627->g_318.s7", print_hash_value);
    transparent_crc(p_627->g_325, "p_627->g_325", print_hash_value);
    transparent_crc(p_627->g_330.s0, "p_627->g_330.s0", print_hash_value);
    transparent_crc(p_627->g_330.s1, "p_627->g_330.s1", print_hash_value);
    transparent_crc(p_627->g_330.s2, "p_627->g_330.s2", print_hash_value);
    transparent_crc(p_627->g_330.s3, "p_627->g_330.s3", print_hash_value);
    transparent_crc(p_627->g_330.s4, "p_627->g_330.s4", print_hash_value);
    transparent_crc(p_627->g_330.s5, "p_627->g_330.s5", print_hash_value);
    transparent_crc(p_627->g_330.s6, "p_627->g_330.s6", print_hash_value);
    transparent_crc(p_627->g_330.s7, "p_627->g_330.s7", print_hash_value);
    transparent_crc(p_627->g_352, "p_627->g_352", print_hash_value);
    transparent_crc(p_627->g_359.x, "p_627->g_359.x", print_hash_value);
    transparent_crc(p_627->g_359.y, "p_627->g_359.y", print_hash_value);
    transparent_crc(p_627->g_364.x, "p_627->g_364.x", print_hash_value);
    transparent_crc(p_627->g_364.y, "p_627->g_364.y", print_hash_value);
    transparent_crc(p_627->g_373.s0, "p_627->g_373.s0", print_hash_value);
    transparent_crc(p_627->g_373.s1, "p_627->g_373.s1", print_hash_value);
    transparent_crc(p_627->g_373.s2, "p_627->g_373.s2", print_hash_value);
    transparent_crc(p_627->g_373.s3, "p_627->g_373.s3", print_hash_value);
    transparent_crc(p_627->g_373.s4, "p_627->g_373.s4", print_hash_value);
    transparent_crc(p_627->g_373.s5, "p_627->g_373.s5", print_hash_value);
    transparent_crc(p_627->g_373.s6, "p_627->g_373.s6", print_hash_value);
    transparent_crc(p_627->g_373.s7, "p_627->g_373.s7", print_hash_value);
    transparent_crc(p_627->g_374.x, "p_627->g_374.x", print_hash_value);
    transparent_crc(p_627->g_374.y, "p_627->g_374.y", print_hash_value);
    transparent_crc(p_627->g_391.x, "p_627->g_391.x", print_hash_value);
    transparent_crc(p_627->g_391.y, "p_627->g_391.y", print_hash_value);
    transparent_crc(p_627->g_402, "p_627->g_402", print_hash_value);
    transparent_crc(p_627->g_434.x, "p_627->g_434.x", print_hash_value);
    transparent_crc(p_627->g_434.y, "p_627->g_434.y", print_hash_value);
    transparent_crc(p_627->g_448, "p_627->g_448", print_hash_value);
    transparent_crc(p_627->g_459, "p_627->g_459", print_hash_value);
    transparent_crc(p_627->g_503, "p_627->g_503", print_hash_value);
    transparent_crc(p_627->g_548.x, "p_627->g_548.x", print_hash_value);
    transparent_crc(p_627->g_548.y, "p_627->g_548.y", print_hash_value);
    transparent_crc(p_627->g_548.z, "p_627->g_548.z", print_hash_value);
    transparent_crc(p_627->g_548.w, "p_627->g_548.w", print_hash_value);
    transparent_crc(p_627->g_588, "p_627->g_588", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_627->g_596[i].f0, "p_627->g_596[i].f0", print_hash_value);
        transparent_crc(p_627->g_596[i].f1, "p_627->g_596[i].f1", print_hash_value);
        transparent_crc(p_627->g_596[i].f2, "p_627->g_596[i].f2", print_hash_value);
        transparent_crc(p_627->g_596[i].f3, "p_627->g_596[i].f3", print_hash_value);

    }
    transparent_crc(p_627->g_626.f0, "p_627->g_626.f0", print_hash_value);
    transparent_crc(p_627->g_626.f1, "p_627->g_626.f1", print_hash_value);
    transparent_crc(p_627->g_626.f2, "p_627->g_626.f2", print_hash_value);
    transparent_crc(p_627->v_collective, "p_627->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 15; i++)
            transparent_crc(p_627->g_special_values[i + 15 * get_linear_group_id()], "p_627->g_special_values[i + 15 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 15; i++)
            transparent_crc(p_627->l_special_values[i], "p_627->l_special_values[i]", print_hash_value);
    transparent_crc(p_627->l_comm_values[get_linear_local_id()], "p_627->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_627->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_627->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
