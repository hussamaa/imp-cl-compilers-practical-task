// --atomics 41 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 94,88,1 -l 1,44,1
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

__constant uint32_t permutations[10][44] = {
{8,0,18,42,2,33,5,40,37,23,25,19,12,24,3,32,31,4,16,6,1,17,36,35,9,26,30,22,20,34,10,29,7,38,39,15,14,41,28,21,11,27,43,13}, // permutation 0
{10,14,43,25,31,23,8,17,39,27,12,37,3,0,24,26,6,16,18,19,4,29,15,22,28,41,42,20,33,13,32,40,21,9,36,7,11,38,2,30,35,1,34,5}, // permutation 1
{16,32,34,23,2,29,35,42,24,5,33,36,19,8,38,39,14,13,0,40,41,20,6,10,30,15,11,3,28,26,21,1,27,7,31,37,18,22,4,9,17,25,12,43}, // permutation 2
{28,23,36,32,26,24,11,3,22,34,19,25,15,31,20,17,14,43,18,27,16,6,4,29,39,1,35,42,8,0,7,9,30,21,37,12,2,10,38,5,40,33,13,41}, // permutation 3
{18,5,7,29,0,16,12,35,11,3,41,40,39,24,33,17,10,30,27,8,4,31,25,14,37,32,2,42,20,34,13,23,19,21,38,15,1,26,43,9,6,28,22,36}, // permutation 4
{33,36,7,2,13,4,29,24,28,17,3,21,1,15,27,10,9,32,22,16,38,20,31,8,41,39,23,14,5,37,0,25,26,43,34,35,18,11,30,6,19,40,12,42}, // permutation 5
{16,40,13,20,41,22,3,36,43,9,17,30,34,37,7,8,11,18,33,28,23,15,42,39,1,32,14,2,27,21,31,29,10,26,0,19,25,12,5,38,35,24,6,4}, // permutation 6
{36,6,15,41,43,38,12,24,2,34,35,28,13,40,1,33,10,26,18,29,4,30,32,25,21,0,42,31,9,5,22,8,3,37,27,39,14,16,11,20,19,23,7,17}, // permutation 7
{6,43,12,38,35,16,11,42,33,20,18,39,7,19,26,3,14,5,21,30,1,31,34,17,10,23,13,9,22,0,2,29,41,28,40,15,32,25,37,4,24,8,27,36}, // permutation 8
{5,22,3,24,4,6,39,14,42,19,20,13,37,18,28,35,43,26,11,32,16,9,0,12,8,41,7,29,31,15,34,33,38,17,36,40,23,10,27,1,21,25,30,2} // permutation 9
};

// Seed: 2757117918

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint16_t  f0;
   uint16_t  f1;
   int8_t  f2;
   volatile int8_t  f3;
   uint32_t  f4;
   volatile uint32_t  f5;
   int32_t  f6;
   volatile int32_t  f7;
};

struct S1 {
    uint32_t g_11[8];
    uint32_t g_28;
    volatile VECTOR(uint32_t, 16) g_36;
    int64_t g_74;
    int64_t g_77;
    VECTOR(uint32_t, 8) g_90;
    int8_t g_92;
    VECTOR(int32_t, 16) g_95;
    VECTOR(int8_t, 2) g_97;
    volatile int64_t g_101;
    volatile int64_t *g_100;
    VECTOR(int32_t, 8) g_113;
    VECTOR(int32_t, 2) g_115;
    int32_t *g_127;
    int32_t **g_126;
    uint8_t g_145;
    uint32_t g_159;
    VECTOR(int16_t, 8) g_177;
    int32_t g_182;
    int32_t g_197;
    VECTOR(uint64_t, 16) g_245;
    VECTOR(uint64_t, 8) g_249;
    int8_t g_272[7][5];
    uint8_t g_284;
    VECTOR(uint16_t, 2) g_294;
    VECTOR(uint8_t, 8) g_308;
    VECTOR(uint32_t, 2) g_311;
    VECTOR(uint32_t, 2) g_312;
    VECTOR(uint32_t, 16) g_315;
    uint32_t g_327;
    int8_t g_328[5][5][6];
    VECTOR(int32_t, 8) g_351;
    uint32_t *g_367;
    uint32_t *g_396;
    uint64_t *g_412;
    uint64_t **g_411;
    uint64_t *** volatile g_410;
    VECTOR(int32_t, 2) g_429;
    VECTOR(uint8_t, 16) g_433;
    VECTOR(uint8_t, 2) g_434;
    int16_t * volatile g_444;
    uint32_t **g_457;
    struct S0 g_465;
    uint32_t *g_468;
    uint32_t *g_469[6][10];
    volatile struct S0 g_505;
    int32_t * volatile g_509;
    int32_t * volatile g_510;
    uint16_t g_516;
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
uint32_t  func_1(struct S1 * p_522);
int32_t  func_2(uint32_t  p_3, int32_t  p_4, int16_t  p_5, uint8_t  p_6, struct S1 * p_522);
uint32_t * func_19(int64_t  p_20, uint64_t  p_21, uint32_t * p_22, struct S1 * p_522);
uint32_t * func_23(int16_t  p_24, struct S1 * p_522);
uint32_t  func_33(uint32_t * p_34, int32_t  p_35, struct S1 * p_522);
int64_t  func_44(uint32_t * p_45, uint32_t * p_46, uint32_t * p_47, struct S1 * p_522);
uint32_t * func_48(int8_t  p_49, int8_t  p_50, int16_t  p_51, int8_t  p_52, uint32_t * p_53, struct S1 * p_522);
int8_t  func_56(uint32_t  p_57, struct S1 * p_522);
int32_t * func_58(uint32_t * p_59, int32_t * p_60, int32_t * p_61, int64_t  p_62, int64_t  p_63, struct S1 * p_522);
uint32_t * func_64(int32_t  p_65, uint64_t  p_66, int32_t * p_67, uint32_t  p_68, uint32_t  p_69, struct S1 * p_522);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_522->g_11 p_522->g_comm_values p_522->l_comm_values p_522->g_36 p_522->g_28 p_522->g_90 p_522->g_77 p_522->g_95 p_522->g_97 p_522->g_100 p_522->g_74 p_522->g_113 p_522->g_115 p_522->g_145 p_522->g_159 p_522->g_92 p_522->g_177 p_522->g_284 p_522->g_182 p_522->g_308 p_522->g_197 p_522->g_294 p_522->g_127 p_522->g_367 p_522->g_328 p_522->g_351 p_522->g_396 p_522->g_327 p_522->g_410 p_522->g_429 p_522->g_312 p_522->g_444 p_522->g_434 p_522->g_465 p_522->g_457 p_522->g_469 p_522->g_505 p_522->g_510 p_522->g_516
 * writes: p_522->g_11 p_522->g_77 p_522->g_92 p_522->g_90 p_522->g_28 p_522->g_126 p_522->g_145 p_522->g_159 p_522->g_127 p_522->g_182 p_522->g_197 p_522->g_284 p_522->g_272 p_522->g_74 p_522->g_95 p_522->g_308 p_522->g_367 p_522->g_351 p_522->g_396 p_522->g_411 p_522->g_328 p_522->g_457 p_522->g_465 p_522->g_468 p_522->g_505 p_522->g_516
 */
uint32_t  func_1(struct S1 * p_522)
{ /* block id: 4 */
    uint32_t l_7 = 0x7BF48C44L;
    uint32_t *l_10 = &p_522->g_11[7];
    VECTOR(int32_t, 2) l_14 = (VECTOR(int32_t, 2))(0x4746A1C1L, 1L);
    uint32_t **l_467[5][7] = {{&l_10,(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0},{&l_10,(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0},{&l_10,(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0},{&l_10,(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0},{&l_10,(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0}};
    int32_t *l_508 = (void*)0;
    int8_t l_511 = 5L;
    int32_t *l_512 = (void*)0;
    int32_t *l_513 = (void*)0;
    int32_t *l_514 = &p_522->g_182;
    int32_t *l_515 = (void*)0;
    int32_t *l_519[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_520 = 18446744073709551608UL;
    uint16_t l_521[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_521[i] = 0UL;
    (*p_522->g_510) = func_2(l_7, ((safe_mod_func_uint32_t_u_u(4294967290UL, (l_14.y = ((*l_10)--)))) & l_7), p_522->g_comm_values[p_522->tid], (safe_sub_func_int32_t_s_s(l_7, (((VECTOR(int16_t, 4))(0x1FBCL, 1L, 0L, 0x076AL)).x > ((p_522->g_468 = func_19(p_522->g_comm_values[p_522->tid], p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))], func_23(p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))], p_522), p_522)) != p_522->g_469[2][4])))), p_522);
    ++p_522->g_516;
    l_520 &= (*p_522->g_510);
    return l_521[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_465.f1 p_522->g_28 p_522->g_36 p_522->g_11 p_522->g_434 p_522->l_comm_values p_522->g_182 p_522->g_505
 * writes: p_522->g_465.f1 p_522->g_182 p_522->g_28 p_522->g_505
 */
int32_t  func_2(uint32_t  p_3, int32_t  p_4, int16_t  p_5, uint8_t  p_6, struct S1 * p_522)
{ /* block id: 197 */
    int32_t l_470 = 0x3C90BA02L;
    uint16_t *l_475 = (void*)0;
    uint16_t *l_476 = &p_522->g_465.f1;
    int16_t *l_479[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_480 = 0L;
    uint32_t l_481 = 0x724C6E1CL;
    int32_t *l_482 = &p_522->g_182;
    VECTOR(uint32_t, 16) l_489 = (VECTOR(uint32_t, 16))(0xF8F0F764L, (VECTOR(uint32_t, 4))(0xF8F0F764L, (VECTOR(uint32_t, 2))(0xF8F0F764L, 7UL), 7UL), 7UL, 0xF8F0F764L, 7UL, (VECTOR(uint32_t, 2))(0xF8F0F764L, 7UL), (VECTOR(uint32_t, 2))(0xF8F0F764L, 7UL), 0xF8F0F764L, 7UL, 0xF8F0F764L, 7UL);
    uint32_t l_494 = 0x023BC7E0L;
    struct S0 *l_499 = (void*)0;
    uint32_t l_502[9][7] = {{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L},{0x92686166L,0x92686166L,0x9951ECC1L,0xA863BDB5L,0x11836BE1L,0xA863BDB5L,0x9951ECC1L}};
    int i, j;
    l_470 |= (FAKE_DIVERGE(p_522->group_2_offset, get_group_id(2), 10) ^ p_4);
    (*l_482) = (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))((safe_mod_func_int8_t_s_s(((((*l_476) &= l_470) | ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((((VECTOR(uint32_t, 16))(l_470, ((l_470 & (safe_lshift_func_uint16_t_u_s(0x7AD4L, (p_5 &= 1L)))) < l_480), l_481, ((l_481 >= p_4) && p_522->g_28), 1UL, l_480, 0UL, p_522->g_36.sb, 3UL, ((VECTOR(uint32_t, 2))(5UL)), 0x8B36D16CL, 3UL, p_522->g_11[7], 0x5BD93798L, 0x479375C1L)).sb , p_522->g_434.x), ((VECTOR(int16_t, 2))(1L)), 0x7451L)).lo)).yyxx, ((VECTOR(int16_t, 4))(0x5DF2L))))).z) != p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))]), 0x40L)), 1L, 0x1DL, ((VECTOR(int8_t, 2))(0x4AL)), 0x0BL, 2L, 0L)).s6, l_470)) , l_480) & 0L);
    for (l_470 = 0; (l_470 >= 6); ++l_470)
    { /* block id: 204 */
        int32_t *l_485 = (void*)0;
        int32_t **l_486 = &l_485;
        (*l_486) = l_485;
        for (p_522->g_28 = 0; (p_522->g_28 > 57); p_522->g_28 = safe_add_func_int64_t_s_s(p_522->g_28, 3))
        { /* block id: 208 */
            (*l_482) &= p_3;
        }
        (*l_486) = &l_470;
    }
    for (p_4 = 0; (p_4 != 18); ++p_4)
    { /* block id: 216 */
        volatile struct S0 *l_506 = &p_522->g_505;
        int64_t l_507 = 0x6ECE3BE316F0D3EAL;
        (*l_506) = p_522->g_505;
        if (l_507)
            continue;
    }
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_444 p_522->g_28 p_522->g_294 p_522->g_396 p_522->g_434 p_522->g_465 p_522->g_457
 * writes: p_522->g_328 p_522->g_457 p_522->g_284 p_522->g_465
 */
uint32_t * func_19(int64_t  p_20, uint64_t  p_21, uint32_t * p_22, struct S1 * p_522)
{ /* block id: 187 */
    VECTOR(uint8_t, 2) l_435 = (VECTOR(uint8_t, 2))(0x9BL, 8UL);
    VECTOR(uint8_t, 2) l_438 = (VECTOR(uint8_t, 2))(2UL, 1UL);
    VECTOR(int8_t, 16) l_439 = (VECTOR(int8_t, 16))(0x40L, (VECTOR(int8_t, 4))(0x40L, (VECTOR(int8_t, 2))(0x40L, 1L), 1L), 1L, 0x40L, 1L, (VECTOR(int8_t, 2))(0x40L, 1L), (VECTOR(int8_t, 2))(0x40L, 1L), 0x40L, 1L, 0x40L, 1L);
    int32_t *l_440 = (void*)0;
    int32_t **l_441 = &l_440;
    uint32_t **l_453[3][5] = {{&p_522->g_396,&p_522->g_396,&p_522->g_367,&p_522->g_396,&p_522->g_396},{&p_522->g_396,&p_522->g_396,&p_522->g_367,&p_522->g_396,&p_522->g_396},{&p_522->g_396,&p_522->g_396,&p_522->g_367,&p_522->g_396,&p_522->g_396}};
    uint32_t **l_455 = &p_522->g_367;
    uint32_t ***l_454 = &l_455;
    uint32_t ***l_456[3][5][7] = {{{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]}},{{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]}},{{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]},{&l_453[1][0],&l_453[1][0],&l_453[1][0],(void*)0,&l_453[1][0],&l_453[1][1],&l_453[0][2]}}};
    int32_t l_462 = (-6L);
    uint8_t *l_463 = &p_522->g_284;
    int32_t l_464 = 9L;
    struct S0 *l_466 = &p_522->g_465;
    int i, j, k;
    (*l_441) = p_22;
    l_464 |= (safe_lshift_func_int8_t_s_u((((((void*)0 == p_522->g_444) != ((*l_463) = (safe_sub_func_uint16_t_u_u((&l_440 == (void*)0), ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(0x25EEL, ((VECTOR(uint16_t, 2))(0xACC1L, 1UL)), 0xF8FDL, (safe_lshift_func_uint16_t_u_u(((**l_441) <= ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((p_522->g_328[3][0][5] = 1L), ((((((l_453[1][0] != (p_522->g_457 = ((*l_454) = &p_522->g_396))) , (((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(65527UL, p_522->g_294.x)) || (**l_441)), 0x5C036F068E2ABDF3L)) , p_22) == (**l_454))) & FAKE_DIVERGE(p_522->group_1_offset, get_group_id(1), 10)) , 254UL) >= (**l_441)) | l_462))), p_21)) || (**l_441))), p_522->g_434.y)), 1UL, 0UL, 6UL)).s2540001224536561, ((VECTOR(uint16_t, 16))(65535UL))))).s8)))) && (-1L)) , 0L), 1));
    (*l_466) = p_522->g_465;
    return (*p_522->g_457);
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_36 p_522->l_comm_values p_522->g_28 p_522->g_90 p_522->g_77 p_522->g_95 p_522->g_97 p_522->g_100 p_522->g_74 p_522->g_comm_values p_522->g_113 p_522->g_115 p_522->g_145 p_522->g_159 p_522->g_92 p_522->g_177 p_522->g_284 p_522->g_182 p_522->g_308 p_522->g_197 p_522->g_294 p_522->g_127 p_522->g_367 p_522->g_328 p_522->g_351 p_522->g_396 p_522->g_327 p_522->g_410 p_522->g_429 p_522->g_312
 * writes: p_522->g_77 p_522->g_92 p_522->g_90 p_522->g_28 p_522->g_126 p_522->g_145 p_522->g_159 p_522->g_127 p_522->g_182 p_522->g_197 p_522->g_284 p_522->g_272 p_522->g_74 p_522->g_95 p_522->g_308 p_522->g_367 p_522->g_351 p_522->g_396 p_522->g_411
 */
uint32_t * func_23(int16_t  p_24, struct S1 * p_522)
{ /* block id: 7 */
    uint32_t *l_27 = &p_522->g_28;
    int32_t l_43 = 9L;
    uint32_t l_403 = 0UL;
    int64_t *l_404 = (void*)0;
    int64_t *l_405 = &p_522->g_77;
    int32_t l_406 = 1L;
    uint32_t **l_407[7][7][4] = {{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}},{{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27},{&p_522->g_396,&p_522->g_367,&l_27,&l_27}}};
    VECTOR(int64_t, 16) l_427 = (VECTOR(int64_t, 16))(0x459130D6AE2613E5L, (VECTOR(int64_t, 4))(0x459130D6AE2613E5L, (VECTOR(int64_t, 2))(0x459130D6AE2613E5L, (-1L)), (-1L)), (-1L), 0x459130D6AE2613E5L, (-1L), (VECTOR(int64_t, 2))(0x459130D6AE2613E5L, (-1L)), (VECTOR(int64_t, 2))(0x459130D6AE2613E5L, (-1L)), 0x459130D6AE2613E5L, (-1L), 0x459130D6AE2613E5L, (-1L));
    int i, j, k;
    for (p_24 = 23; (p_24 > (-3)); p_24 = safe_sub_func_int16_t_s_s(p_24, 6))
    { /* block id: 10 */
        return l_27;
    }
    l_406 = ((l_43 = ((safe_sub_func_int64_t_s_s(((*l_405) = (safe_sub_func_uint32_t_u_u(0xBD29A2A6L, func_33(l_27, (((VECTOR(uint32_t, 4))(p_522->g_36.sc3d0)).w == (p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))] != (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((~(safe_rshift_func_int8_t_s_s((l_43 > func_44((p_522->g_367 = (l_43 , func_48((~p_24), ((void*)0 == l_27), (safe_rshift_func_int8_t_s_u(func_56(l_43, p_522), 7)), p_522->g_177.s4, p_522->g_367, p_522))), l_27, p_522->g_396, p_522)), l_403))), p_522->g_294.x)) > p_24), l_403)))), p_522)))), 0UL)) != l_403)) && l_43);
    if (((p_522->g_396 = (void*)0) != (void*)0))
    { /* block id: 178 */
        int32_t *l_408[10] = {(void*)0,&l_406,(void*)0,(void*)0,&l_406,(void*)0,(void*)0,&l_406,(void*)0,(void*)0};
        uint64_t **l_409 = (void*)0;
        VECTOR(int32_t, 4) l_428 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-4L)), (-4L));
        int32_t **l_432 = &l_408[1];
        int i;
        p_522->g_95.sf = 8L;
        (*p_522->g_410) = l_409;
        l_406 ^= (safe_lshift_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u(0x1EE5L, 7)) < p_24) || (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_522->g_294.y, ((l_403 > GROUP_DIVERGE(1, 1)) >= (safe_add_func_uint32_t_u_u(0xB7E5992DL, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x9E34645FL, 0x6706623FL)), ((VECTOR(uint32_t, 8))((+(safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_427.sf4)).lo, 0x7EDB117B1E129D29L))), 7UL, 0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_428.zw)).yyyyxyyxxyxxyxxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_522->g_429.yy)), (safe_div_func_uint32_t_u_u((0x67L >= 0x52L), (p_522->g_312.y , p_24))), l_427.sb, 0x57BF47F1L, ((VECTOR(int32_t, 2))(0x57344329L)), p_24, 2L, (-1L), 0x42D70EF0L, ((VECTOR(int32_t, 2))(0x4A6C03CAL)), ((VECTOR(int32_t, 2))(1L)), 0x1B40688EL)), ((VECTOR(int32_t, 16))(0L))))).even))).s20)), 0xA4948DF7L, 0x125C4F4CL, 0x1BBABF51L)), ((VECTOR(uint32_t, 4))(4294967291UL)), 0x80ED6A21L, 4294967295UL)).s3))))) != 2UL), (-5L))), 13))) ^ 0x6AL), 11));
        (*l_432) = (void*)0;
    }
    else
    { /* block id: 183 */
        return &p_522->g_28;
    }
    return &p_522->g_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_367 p_522->g_28
 * writes:
 */
uint32_t  func_33(uint32_t * p_34, int32_t  p_35, struct S1 * p_522)
{ /* block id: 172 */
    return (*p_522->g_367);
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_327 p_522->g_351 p_522->g_90
 * writes: p_522->g_351
 */
int64_t  func_44(uint32_t * p_45, uint32_t * p_46, uint32_t * p_47, struct S1 * p_522)
{ /* block id: 168 */
    int32_t l_397 = (-9L);
    int32_t *l_398[1][6][4];
    int8_t l_399 = 0x33L;
    uint16_t l_400 = 0xE5D7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
                l_398[i][j][k] = &p_522->g_182;
        }
    }
    ++l_400;
    p_522->g_351.s1 &= p_522->g_327;
    return p_522->g_90.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_197 p_522->g_95 p_522->g_308 p_522->g_328 p_522->g_113 p_522->g_351 p_522->g_294 p_522->g_177 p_522->g_28 p_522->g_182
 * writes: p_522->g_197 p_522->g_95 p_522->g_308 p_522->g_182
 */
uint32_t * func_48(int8_t  p_49, int8_t  p_50, int16_t  p_51, int8_t  p_52, uint32_t * p_53, struct S1 * p_522)
{ /* block id: 157 */
    uint16_t l_370[8] = {65535UL,65530UL,65535UL,65535UL,65530UL,65535UL,65535UL,65530UL};
    uint8_t *l_375[10][9] = {{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284},{&p_522->g_284,&p_522->g_145,(void*)0,&p_522->g_284,(void*)0,&p_522->g_284,&p_522->g_284,&p_522->g_145,&p_522->g_284}};
    VECTOR(uint32_t, 16) l_387 = (VECTOR(uint32_t, 16))(0xF1E723DDL, (VECTOR(uint32_t, 4))(0xF1E723DDL, (VECTOR(uint32_t, 2))(0xF1E723DDL, 4UL), 4UL), 4UL, 0xF1E723DDL, 4UL, (VECTOR(uint32_t, 2))(0xF1E723DDL, 4UL), (VECTOR(uint32_t, 2))(0xF1E723DDL, 4UL), 0xF1E723DDL, 4UL, 0xF1E723DDL, 4UL);
    uint32_t *l_391[8] = {(void*)0,&p_522->g_327,(void*)0,(void*)0,&p_522->g_327,(void*)0,(void*)0,&p_522->g_327};
    uint32_t l_392 = 0xD87206CAL;
    int64_t *l_393 = &p_522->g_77;
    int32_t *l_394 = (void*)0;
    int32_t *l_395 = &p_522->g_182;
    int i, j;
    for (p_522->g_197 = (-10); (p_522->g_197 != (-16)); p_522->g_197 = safe_sub_func_uint8_t_u_u(p_522->g_197, 5))
    { /* block id: 160 */
        int32_t *l_371 = (void*)0;
        int32_t *l_372 = (void*)0;
        int32_t *l_373 = (void*)0;
        int32_t *l_374 = (void*)0;
        p_522->g_95.sb |= l_370[4];
    }
    (*l_395) = ((p_522->g_308.s2--) < (safe_mod_func_uint16_t_u_u((((((void*)0 == l_375[5][1]) ^ (((safe_add_func_int32_t_s_s(((p_522->g_328[4][1][0] == (safe_mod_func_uint16_t_u_u((+(safe_unary_minus_func_uint8_t_u((~((p_522->g_113.s1 <= (((safe_add_func_int16_t_s_s((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_387.s32)), 3UL, 9UL)).w > (safe_unary_minus_func_int64_t_s(0x4F8D047BAFCFDFD8L))), ((((p_52 != p_522->g_351.s7) , (safe_mul_func_uint16_t_u_u((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(4L, (-3L), (p_51 & p_50), p_51, (-4L), ((VECTOR(int16_t, 2))(0x291BL)), 1L)).odd, (int16_t)l_370[4]))))).x || 65529UL) == p_522->g_328[4][4][1]) | 5UL), l_387.sd))) , l_391[2]) == (void*)0))) < l_370[3]) , 7L)) , p_51))))), p_49))) != l_392), GROUP_DIVERGE(0, 1))) || p_522->g_294.x) , p_522->g_177.s7)) , l_393) != (void*)0), p_522->g_28)));
    (*l_395) = (*l_395);
    return &p_522->g_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_28 p_522->l_comm_values p_522->g_90 p_522->g_77 p_522->g_95 p_522->g_97 p_522->g_100 p_522->g_74 p_522->g_comm_values p_522->g_113 p_522->g_115 p_522->g_145 p_522->g_159 p_522->g_92 p_522->g_177 p_522->g_284 p_522->g_182 p_522->g_308 p_522->g_197 p_522->g_294 p_522->g_127
 * writes: p_522->g_77 p_522->g_92 p_522->g_90 p_522->g_28 p_522->g_126 p_522->g_145 p_522->g_159 p_522->g_127 p_522->g_182 p_522->g_197 p_522->g_284 p_522->g_272 p_522->g_74
 */
int8_t  func_56(uint32_t  p_57, struct S1 * p_522)
{ /* block id: 13 */
    uint32_t *l_72 = &p_522->g_28;
    int64_t *l_73[5][4][4] = {{{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74}},{{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74}},{{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74}},{{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74}},{{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74},{&p_522->g_74,&p_522->g_74,&p_522->g_74,&p_522->g_74}}};
    int32_t l_75 = (-8L);
    int64_t *l_76[4];
    int32_t l_78 = 0L;
    int32_t **l_366 = &p_522->g_127;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_76[i] = &p_522->g_77;
    (*l_366) = func_58(func_64((safe_mul_func_uint8_t_u_u((((l_72 != l_72) || ((void*)0 == l_72)) >= ((p_522->g_77 = (((void*)0 == l_72) ^ (p_522->g_28 , ((l_75 &= (-5L)) , (((0x1887L >= p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))]) , l_75) && p_57))))) ^ GROUP_DIVERGE(1, 1))), 255UL)), p_522->g_28, l_72, p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))], l_78, p_522), &l_78, &l_78, l_78, l_78, p_522);
    return p_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_28 p_522->g_90 p_522->g_115 p_522->g_95 p_522->g_145 p_522->g_159 p_522->g_92 p_522->g_177 p_522->g_97 p_522->g_284 p_522->g_182 p_522->g_308 p_522->g_197 p_522->g_294 p_522->g_127
 * writes: p_522->g_28 p_522->g_92 p_522->g_126 p_522->g_145 p_522->g_159 p_522->g_127 p_522->g_90 p_522->g_182 p_522->g_197 p_522->g_284 p_522->g_272 p_522->g_74
 */
int32_t * func_58(uint32_t * p_59, int32_t * p_60, int32_t * p_61, int64_t  p_62, int64_t  p_63, struct S1 * p_522)
{ /* block id: 30 */
    VECTOR(int64_t, 2) l_135 = (VECTOR(int64_t, 2))(0x19F12A095ECA5D8FL, 0L);
    VECTOR(uint64_t, 2) l_142 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x66C539E36F4042E0L);
    int32_t l_148 = 0x54E2A72BL;
    int32_t l_149 = (-1L);
    VECTOR(int16_t, 4) l_189 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1F67L), 0x1F67L);
    int32_t l_204 = 0x102F24D4L;
    int32_t l_206[8][8][4] = {{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}},{{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L},{0x50BCE42BL,0x092BAF12L,1L,0x5901D547L}}};
    uint64_t l_239 = 18446744073709551615UL;
    int32_t **l_242 = &p_522->g_127;
    int64_t *l_248 = (void*)0;
    int64_t **l_247[9][6][4] = {{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}},{{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0},{&l_248,&l_248,&l_248,(void*)0}}};
    VECTOR(uint64_t, 8) l_266 = (VECTOR(uint64_t, 8))(0x1F94C5C2B410F99FL, (VECTOR(uint64_t, 4))(0x1F94C5C2B410F99FL, (VECTOR(uint64_t, 2))(0x1F94C5C2B410F99FL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x1F94C5C2B410F99FL, 18446744073709551615UL);
    uint32_t *l_267 = (void*)0;
    int64_t l_275 = 0x6C77CF5F04EFC569L;
    VECTOR(uint16_t, 8) l_292 = (VECTOR(uint16_t, 8))(0x8B3DL, (VECTOR(uint16_t, 4))(0x8B3DL, (VECTOR(uint16_t, 2))(0x8B3DL, 4UL), 4UL), 4UL, 0x8B3DL, 4UL);
    int16_t *l_329 = (void*)0;
    int i, j, k;
    for (p_522->g_28 = 0; (p_522->g_28 < 29); p_522->g_28 = safe_add_func_int8_t_s_s(p_522->g_28, 4))
    { /* block id: 33 */
        uint16_t l_140 = 0x698FL;
        VECTOR(uint16_t, 16) l_141 = (VECTOR(uint16_t, 16))(0x7EC6L, (VECTOR(uint16_t, 4))(0x7EC6L, (VECTOR(uint16_t, 2))(0x7EC6L, 1UL), 1UL), 1UL, 0x7EC6L, 1UL, (VECTOR(uint16_t, 2))(0x7EC6L, 1UL), (VECTOR(uint16_t, 2))(0x7EC6L, 1UL), 0x7EC6L, 1UL, 0x7EC6L, 1UL);
        int32_t l_147 = 0x5AE8A67AL;
        VECTOR(int16_t, 2) l_179 = (VECTOR(int16_t, 2))(0x5523L, 0x3A6FL);
        uint64_t *l_196 = (void*)0;
        int32_t l_214 = 9L;
        int32_t l_236 = (-1L);
        int8_t l_237 = 0x7FL;
        VECTOR(int32_t, 2) l_238 = (VECTOR(int32_t, 2))(0x26CCDBE3L, 0x5697769FL);
        int i;
        for (p_522->g_92 = (-7); (p_522->g_92 != (-11)); --p_522->g_92)
        { /* block id: 36 */
            int32_t *l_125 = (void*)0;
            int32_t **l_124[3][6][10] = {{{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0}},{{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0}},{{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0},{&l_125,&l_125,&l_125,&l_125,&l_125,(void*)0,&l_125,&l_125,&l_125,(void*)0}}};
            int i, j, k;
            p_522->g_126 = l_124[2][5][6];
        }
        if ((safe_unary_minus_func_int16_t_s((p_522->g_90.s1 || (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((((-1L) >= (((((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_135.xyyxxxxx)).s44)), ((VECTOR(int64_t, 2))(0L, 0x16DF6E3992C773C3L))))).lo , (safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((l_140 | l_140), p_522->g_115.x)) >= p_522->g_95.sa) == l_140), ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_141.s1d1488185611dfc2)).sbb)))).xyyy)).w || l_141.sf) >= ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_142.yyxyyyyyyxxxxxyy)).odd)).s06))), 0x6690D2E268365652L, 0x0A631AE8C0A6948EL)).y)))) != (~(p_63 == 0UL))) <= p_522->g_95.sb)) ^ l_135.y), p_62)), l_141.s5)), 0x73L))))))
        { /* block id: 39 */
            uint8_t l_143 = 0x8CL;
            uint8_t *l_144[5] = {&p_522->g_145,&p_522->g_145,&p_522->g_145,&p_522->g_145,&p_522->g_145};
            int32_t l_146 = 0L;
            uint64_t *l_156 = (void*)0;
            uint64_t *l_157 = (void*)0;
            uint64_t *l_158[3][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int i, j, k;
            (*p_60) &= ((l_143 != ((p_62 >= p_63) > (--p_522->g_145))) != l_142.y);
            if ((*p_60))
                continue;
            (*p_61) = ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(p_62, (0L | ((p_522->g_159--) | p_62)))), p_522->g_115.x)) < ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(1L, 0x76L)).xyxyxxxx, ((VECTOR(int8_t, 2))(0x5DL, (-4L))).yyxyxyyy))).s1063700441762134)))).s1);
            for (p_522->g_159 = (-13); (p_522->g_159 <= 11); p_522->g_159 = safe_add_func_uint64_t_u_u(p_522->g_159, 4))
            { /* block id: 47 */
                int32_t *l_164 = (void*)0;
                p_522->g_127 = l_164;
                if ((*p_60))
                    continue;
            }
        }
        else
        { /* block id: 51 */
            uint32_t *l_171 = (void*)0;
            uint32_t *l_172[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t *l_178 = (void*)0;
            int16_t *l_180 = (void*)0;
            int16_t *l_181 = (void*)0;
            int32_t l_185 = 0x4292AF6BL;
            int16_t *l_186 = (void*)0;
            int16_t *l_187 = (void*)0;
            int16_t *l_188[5][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t *l_198 = &p_522->g_145;
            int i, j;
            (*p_60) &= 3L;
            for (p_522->g_92 = 20; (p_522->g_92 < 16); p_522->g_92 = safe_sub_func_int8_t_s_s(p_522->g_92, 8))
            { /* block id: 55 */
                return p_60;
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_522->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(((!(&p_61 == &p_522->g_127)) || ((*l_198) = (2UL && ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((p_522->g_90.s5++), ((((~(l_149 = (safe_mul_func_uint8_t_u_u(p_63, (p_522->g_95.se && ((VECTOR(int16_t, 16))(p_522->g_177.s5065017525330445)).sf))))) || FAKE_DIVERGE(p_522->local_2_offset, get_local_id(2), 10)) <= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_179.yxxy)), (p_522->g_182 = (-10L)), 0x5E2EL, 7L, 1L)).s45)), 0x22C4L, 0L)), ((VECTOR(int16_t, 4))(0x53EEL, (l_147 = (safe_lshift_func_uint16_t_u_s(l_185, l_141.sb))), 0x4E8AL, 0x3A16L)))).s67, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(l_189.xzyxyyywzywywwxz)).sef, ((VECTOR(int16_t, 8))((p_522->g_197 = (l_148 = (((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((((((l_147 = (safe_sub_func_int64_t_s_s((l_196 == (void*)0), FAKE_DIVERGE(p_522->local_2_offset, get_local_id(2), 10)))) || 0x65F44572L) >= p_62) , FAKE_DIVERGE(p_522->local_2_offset, get_local_id(2), 10)) && l_142.x) == 0L), p_522->g_28)), p_63)) >= p_62) == 0x07287C90L))), 0x6336L, p_63, p_522->g_97.x, l_179.x, ((VECTOR(int16_t, 2))(0x1742L)), 0L)).s35)))))).xxyxyxxyxyyxxxyy)).sa) , (*p_60)))) , 0x59L), 1)) <= 0x0C0586A2L)))), GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 4))(1UL)), 0xCC298D85L, 0xF07D2D84L, 0x84C8C450L, 0xFAD9A2AEL, GROUP_DIVERGE(2, 1), 4294967295UL, 1UL, FAKE_DIVERGE(p_522->group_0_offset, get_group_id(0), 10), 0xC908283CL, 0UL)).s34ce, ((VECTOR(uint32_t, 4))(1UL))))).y, 10))][(safe_mod_func_uint32_t_u_u(p_522->tid, 44))]));
        }
        for (l_149 = 25; (l_149 > (-21)); l_149 = safe_sub_func_uint16_t_u_u(l_149, 9))
        { /* block id: 72 */
            int32_t *l_201 = (void*)0;
            int32_t *l_202 = &l_147;
            int32_t *l_203 = (void*)0;
            int32_t *l_205 = &l_148;
            int32_t *l_207 = (void*)0;
            int32_t *l_208 = &l_148;
            int32_t *l_209 = &l_206[7][7][1];
            int32_t *l_210 = &l_147;
            int32_t l_211 = 0x05FCF2FEL;
            int32_t *l_212 = &l_206[1][4][2];
            int32_t *l_213 = &l_147;
            int32_t *l_215 = &l_148;
            int32_t *l_216 = &l_204;
            int32_t *l_217 = &l_206[4][3][3];
            int32_t *l_218 = (void*)0;
            int32_t *l_219 = &l_214;
            int32_t *l_220 = &p_522->g_182;
            int32_t *l_221 = (void*)0;
            int32_t *l_222 = (void*)0;
            int32_t *l_223 = &l_206[4][3][3];
            int32_t *l_224 = &l_147;
            int32_t *l_225 = &l_211;
            int32_t *l_226 = (void*)0;
            int32_t *l_227 = (void*)0;
            int32_t *l_228 = &l_147;
            int32_t *l_229 = &l_211;
            int32_t *l_230 = (void*)0;
            int32_t *l_231 = &l_148;
            int32_t *l_232 = (void*)0;
            int32_t *l_233 = &p_522->g_182;
            int32_t *l_234 = &l_214;
            int32_t *l_235[5][4] = {{&l_206[1][7][0],&l_206[5][0][2],&l_206[1][7][0],&l_206[1][7][0]},{&l_206[1][7][0],&l_206[5][0][2],&l_206[1][7][0],&l_206[1][7][0]},{&l_206[1][7][0],&l_206[5][0][2],&l_206[1][7][0],&l_206[1][7][0]},{&l_206[1][7][0],&l_206[5][0][2],&l_206[1][7][0],&l_206[1][7][0]},{&l_206[1][7][0],&l_206[5][0][2],&l_206[1][7][0],&l_206[1][7][0]}};
            int i, j;
            l_239--;
        }
    }
    (*l_242) = &p_522->g_182;
    for (p_522->g_159 = 25; (p_522->g_159 == 17); p_522->g_159--)
    { /* block id: 79 */
        VECTOR(uint64_t, 4) l_246 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL), 1UL);
        uint32_t *l_269 = &p_522->g_28;
        uint32_t **l_268 = &l_269;
        int8_t *l_270 = &p_522->g_92;
        int8_t *l_271 = &p_522->g_272[1][1];
        int8_t l_273 = 2L;
        uint8_t *l_274 = &p_522->g_145;
        VECTOR(uint16_t, 8) l_293 = (VECTOR(uint16_t, 8))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x6533L), 0x6533L), 0x6533L, 65527UL, 0x6533L);
        VECTOR(int16_t, 2) l_322 = (VECTOR(int16_t, 2))((-9L), 0L);
        int16_t **l_365 = &l_329;
        int i;
        if (((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),uint64_t,((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(p_522->g_245.s4cc2631a32069cc7)).s28, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_246.xy)).xxxx)).y, ((l_247[0][0][0] == (void*)0) <= l_246.w), ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_522->g_249.s43)), 18446744073709551615UL, 0x834FB5A8C57C3C31L)), ((VECTOR(uint64_t, 4))(9UL, ((((0x0468L >= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(0x1BE1L, 0x9E0BL, 0x208AL, 1UL)).xwxzzzyy, ((VECTOR(uint16_t, 16))(0UL, GROUP_DIVERGE(0, 1), ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((*l_274) = ((safe_mul_func_int8_t_s_s(p_522->g_97.y, (l_273 = (((*l_271) = (safe_sub_func_int64_t_s_s((0x04DE0A3D1CDC3E10L | GROUP_DIVERGE(1, 1)), (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u(0x9FF5L, (safe_lshift_func_int8_t_s_u(((*l_270) = (((((255UL | (safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 4))(l_266.s2634)), ((((*l_268) = (l_267 = &p_522->g_28)) != (void*)0) || p_522->g_95.sc), 0x0F9884C0950837F9L, 0xB02E225A0D352A7FL)).s2, 0xAC62B9862261CC5EL)), p_522->g_97.x))) , 0x70E5621DL) < 0x53EAC9B5L) > p_63) , 0x19L)), 5)))) , l_246.w) , l_246.w), p_522->g_95.s0))))) & 0x6EL)))) > 0x40E75EA0L)), l_275, ((VECTOR(uint8_t, 4))(255UL)), 8UL, 246UL)).s7233074750234134)).sa, p_63)) , (**l_242)), ((VECTOR(uint16_t, 8))(65532UL)), 0UL, 65535UL, p_62, 65530UL, 1UL)).odd))), (**l_242), 65535UL, 1UL, 1UL, ((VECTOR(uint16_t, 4))(1UL)))).sbb, ((VECTOR(uint16_t, 2))(0x19E3L)), ((VECTOR(uint16_t, 2))(0UL))))).yyyy, ((VECTOR(uint16_t, 4))(65534UL))))).x) < (*p_61)) && l_246.y) ^ l_246.z), 0UL, 0x456AD2E3053518A4L)), (**l_242), 0UL, ((VECTOR(uint64_t, 4))(0xF249876400BEA74FL)), 0xEF8C8917F77FB085L, 5UL)).sae, ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 2))(1UL))))), (**l_242), 1UL, 18446744073709551611UL, (**l_242), 0xFC1D8D492CE9E550L, FAKE_DIVERGE(p_522->global_1_offset, get_global_id(1), 10), p_522->g_90.s1, ((VECTOR(uint64_t, 2))(0x4FC1EB0C2D3A3C20L)), 0x4AEF053EE6E3BA50L, 0x647CE60284BEE72BL, 0xE1187358BB86A017L)).sd1))), ((VECTOR(uint64_t, 2))(0UL))))).yxyy)))), 18446744073709551615UL, 1UL, 0UL, 1UL)).s24)).xyxx)), ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 4))(0x5E4B87D9AF88B442L))))).yzxwywwy, (uint64_t)p_522->g_245.s5, (uint64_t)p_62))).s6172422717623260)).s2e6c)).w , 0xB693B70FBF4B7DB3L) < p_522->g_115.y))
        { /* block id: 86 */
            uint64_t l_285 = 0UL;
            for (p_63 = 0; (p_63 <= (-12)); p_63 = safe_sub_func_uint16_t_u_u(p_63, 5))
            { /* block id: 89 */
                uint8_t *l_282 = (void*)0;
                uint8_t *l_283 = &p_522->g_284;
                l_285 |= (safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((p_522->g_90.s1 ^= (*p_59)), (*p_61))) , p_63) && ((*l_283) &= ((*l_274) |= FAKE_DIVERGE(p_522->local_0_offset, get_local_id(0), 10)))), (GROUP_DIVERGE(2, 1) & ((VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL)).odd)));
            }
            if ((*p_60))
                continue;
        }
        else
        { /* block id: 96 */
            int32_t *l_288 = &l_206[7][3][0];
            VECTOR(uint16_t, 16) l_323 = (VECTOR(uint16_t, 16))(0x110EL, (VECTOR(uint16_t, 4))(0x110EL, (VECTOR(uint16_t, 2))(0x110EL, 1UL), 1UL), 1UL, 0x110EL, 1UL, (VECTOR(uint16_t, 2))(0x110EL, 1UL), (VECTOR(uint16_t, 2))(0x110EL, 1UL), 0x110EL, 1UL, 0x110EL, 1UL);
            int i;
            for (p_522->g_28 = 26; (p_522->g_28 < 53); p_522->g_28 = safe_add_func_int8_t_s_s(p_522->g_28, 1))
            { /* block id: 99 */
                int16_t l_289[8];
                uint64_t l_303 = 0xEF59AC140D512D91L;
                int i;
                for (i = 0; i < 8; i++)
                    l_289[i] = (-1L);
                (*l_242) = l_288;
                if (l_289[1])
                    continue;
                for (p_62 = 1; (p_62 <= 10); ++p_62)
                { /* block id: 104 */
                    uint32_t *l_316 = (void*)0;
                    uint32_t *l_317[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    uint32_t *l_326 = &p_522->g_327;
                    uint64_t *l_330[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t l_331 = 1L;
                    int16_t *l_344 = &l_289[7];
                    int i, j;
                    (*p_61) = (((VECTOR(uint16_t, 8))(0UL, 3UL, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_292.s74)).xxxxyyyy)).s60, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(2UL, 0x8F11L)).yyxyyyyx, ((VECTOR(uint16_t, 2))(0x69D7L, 0xE77DL)).yxxxxxyx, ((VECTOR(uint16_t, 8))(0xADE8L, ((VECTOR(uint16_t, 4))(l_293.s7406)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_522->g_294.yyyx)).odd)), 0xD07AL))))).s11))), ((VECTOR(uint16_t, 4))((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((p_522->g_249.s0 = ((l_303 == (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(p_522->g_308.s5346)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(250UL, 0xF9L)), 0x76L, 1UL)).lo))))).odd , ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((-1L), 0x58D6L, (safe_div_func_int32_t_s_s((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_522->g_311.yyxy)).xwyyywyx)).s42, ((VECTOR(uint32_t, 4))(p_522->g_312.yyxx)).lo))))), 0xBC26506CL, 0x8072FBC8L)).w , ((((**l_242) <= 0x639DFC46F1B900C2L) > ((safe_mod_func_int32_t_s_s(0L, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_522->g_315.sc9)).yxyxyxxxyxxxyyxx)).s8020)).xzzwyxxw, (uint32_t)(p_522->g_312.x = (p_522->g_90.s0 = ((l_149 = l_246.z) > 6L))), (uint32_t)((p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))] , (((((safe_sub_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_322.xy)).xxxy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_323.se3)).yyxyyxyx)).lo))).wzzxwxxzyzwzyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((((*l_274) = ((safe_add_func_uint64_t_u_u((p_522->g_95.se <= (((p_522->g_328[4][4][1] = ((*l_326) = ((p_522->g_315.sd = 0xA5BF75F0L) | (**l_242)))) , p_522->g_115.y) , 0x45L)), (*l_288))) <= 0xDE7397DB6861744CL)) & p_522->g_312.y), ((VECTOR(int32_t, 2))(0L)), 8L)).yzzxxzxxwxyzzxyz))))), ((VECTOR(int32_t, 16))(9L)), ((VECTOR(int32_t, 16))(0x458C416EL))))).hi, ((VECTOR(int32_t, 8))(0x664B730BL))))).odd)).w, (*l_288))) > p_522->g_comm_values[p_522->tid]) > 246UL) || 0UL), 0x5895EBCAL)) <= (*p_522->g_127)) != 1L) <= p_62) , &l_289[1])) != l_329)))).s1)) && 0x5AB8L)) , (*p_60))), l_289[1])), ((VECTOR(int16_t, 2))(8L)), 0x25EFL, 0x125EL, l_273, p_62, ((VECTOR(int16_t, 2))(0x4AABL)), 4L, (-1L), 0x042CL, 0x1495L, (-1L))).s5c)).xxyxxxyxyxyyxyxy, ((VECTOR(int16_t, 16))((-1L))), ((VECTOR(int16_t, 16))(0x66EDL))))).sa), 8)), 5))) && p_522->g_28)) > p_63), 0x4225L)), l_331)) != p_62), l_331)), 0x76BCL)), 65529UL, 1UL, 0x689BL)).z, (*l_288), 65535UL, 0x8FD3L)).s7 & p_522->g_182);
                    (*l_288) = ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((((*p_60) <= (*p_61)) > (*p_60)) < (((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(1UL, (FAKE_DIVERGE(p_522->group_1_offset, get_group_id(1), 10) && p_522->g_308.s2))), ((*l_271) = (safe_mul_func_int16_t_s_s((+((p_522->g_97.y , ((safe_rshift_func_int8_t_s_s(((*l_288) && (((*l_344) = (&p_522->g_127 != (void*)0)) , p_522->g_197)), 1)) , p_522->g_294.y)) , p_62)), p_62))))) == l_246.w) > 0x53L)) || 0x0A69L), 0x52D7L)), p_62)) != p_62);
                    (*p_60) = (safe_rshift_func_uint8_t_u_s(l_331, 7));
                }
            }
            if ((*l_288))
                continue;
        }
        if ((*p_522->g_127))
            break;
        for (p_522->g_74 = (-25); (p_522->g_74 <= (-1)); ++p_522->g_74)
        { /* block id: 125 */
            for (l_273 = 0; (l_273 <= 14); l_273 = safe_add_func_uint32_t_u_u(l_273, 7))
            { /* block id: 128 */
                (*p_522->g_127) |= (*p_60);
                (*p_61) = ((VECTOR(int32_t, 8))(p_522->g_351.s43425217)).s7;
                if ((atomic_inc(&p_522->l_atomic_input[8]) == 1))
                { /* block id: 132 */
                    int32_t l_352[9][3][9] = {{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}},{{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL},{0L,0L,0x7CF90810L,0x6B18DD72L,0L,0L,0x04CE56A2L,4L,0x55F9869BL}}};
                    int i, j, k;
                    for (l_352[5][0][2] = 0; (l_352[5][0][2] <= (-3)); l_352[5][0][2] = safe_sub_func_int32_t_s_s(l_352[5][0][2], 3))
                    { /* block id: 135 */
                        uint16_t l_355 = 65535UL;
                        uint8_t l_356 = 253UL;
                        int32_t l_358 = 0x49E2A8F9L;
                        int32_t *l_357 = &l_358;
                        int32_t *l_359 = (void*)0;
                        int32_t *l_360[8][2][1] = {{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}},{{&l_358},{&l_358}}};
                        int32_t *l_361 = (void*)0;
                        int32_t *l_362[1];
                        int32_t *l_363 = &l_358;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_362[i] = &l_358;
                        l_356 = l_355;
                        l_360[5][1][0] = (l_359 = (l_357 = (void*)0));
                        l_363 = (l_362[0] = l_361);
                    }
                    unsigned int result = 0;
                    int l_352_i0, l_352_i1, l_352_i2;
                    for (l_352_i0 = 0; l_352_i0 < 9; l_352_i0++) {
                        for (l_352_i1 = 0; l_352_i1 < 3; l_352_i1++) {
                            for (l_352_i2 = 0; l_352_i2 < 9; l_352_i2++) {
                                result += l_352[l_352_i0][l_352_i1][l_352_i2];
                            }
                        }
                    }
                    atomic_add(&p_522->l_special_values[8], result);
                }
                else
                { /* block id: 143 */
                    (1 + 1);
                }
            }
            if (((void*)0 == l_274))
            { /* block id: 147 */
                return p_60;
            }
            else
            { /* block id: 149 */
                int16_t **l_364 = &l_329;
                l_365 = l_364;
            }
        }
    }
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_522->g_90 p_522->g_77 p_522->g_95 p_522->g_97 p_522->g_100 p_522->g_74 p_522->g_comm_values p_522->g_28 p_522->l_comm_values p_522->g_113 p_522->g_115
 * writes: p_522->g_77 p_522->g_92 p_522->g_90 p_522->g_28
 */
uint32_t * func_64(int32_t  p_65, uint64_t  p_66, int32_t * p_67, uint32_t  p_68, uint32_t  p_69, struct S1 * p_522)
{ /* block id: 16 */
    uint16_t l_85 = 65535UL;
    int8_t *l_91 = &p_522->g_92;
    VECTOR(uint8_t, 4) l_96 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 251UL), 251UL);
    int32_t *l_98[8][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int64_t *l_99 = (void*)0;
    uint32_t *l_102[2];
    uint16_t *l_109 = &l_85;
    uint32_t l_112 = 0x0626F2ACL;
    int64_t *l_117 = &p_522->g_77;
    int i, j;
    for (i = 0; i < 2; i++)
        l_102[i] = (void*)0;
    (*p_67) = (safe_mod_func_int32_t_s_s((((safe_div_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(0x6AADB6CDL, (p_522->g_90.s6 = ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(l_85, (0x4F1E5EB9L <= (safe_sub_func_int64_t_s_s(l_85, ((((((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_522->g_90.s6356)).yzwwwzwyzywywwww)).s2, ((((*l_91) = ((-1L) ^ (p_522->g_77 |= (-1L)))) == ((safe_lshift_func_uint8_t_u_s((((VECTOR(int32_t, 2))(p_522->g_95.s41)).odd <= ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(0xE9L, 0x42L)).yxyxxxyx, ((VECTOR(uint8_t, 2))(l_96.wy)).xyyxxyyy))))).s1 != (((((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(p_522->g_97.xxxxxxxxxyyxyxxx)), (int8_t)(((((((void*)0 == l_91) , ((void*)0 != l_98[2][0])) ^ (-1L)) , l_99) == p_522->g_100) == p_69)))).even)).s04)).yxxyyxyx)).s3 && p_522->g_97.y) && p_66) <= p_68) == p_66) , p_522->g_74) , p_522->g_comm_values[p_522->tid]) == p_522->g_90.s4)) & p_522->g_28)), 7)) <= p_69)) != 8UL))) ^ p_522->g_28) >= (*p_67)) > p_68) && p_522->g_95.sa) , p_522->g_74)))), ((VECTOR(uint32_t, 4))(0xF8B81D3EL)), 0xE87F6124L, 4294967295UL)).s46))), ((VECTOR(uint32_t, 2))(0xAF4752A8L))))), 0xA380BAD3L, 0UL)).odd, ((VECTOR(uint32_t, 2))(0xDCCCE59DL))))).lo))) , p_522->g_97.y) != p_522->g_97.y), p_522->g_95.s0)) >= p_522->g_28) & p_522->l_comm_values[(safe_mod_func_uint32_t_u_u(p_522->tid, 44))]), p_522->g_97.x));
    if (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((&p_65 == l_102[0]), (safe_mod_func_uint16_t_u_u(((*l_109) = p_66), p_522->g_74)))), (((safe_mul_func_int16_t_s_s(p_522->g_90.s0, ((((~l_112) | p_522->g_90.s4) != 0x172D9DFC09A20D7CL) , (l_99 == l_99)))) , p_522->g_90.s1) == p_68))) , (*p_67)))
    { /* block id: 22 */
        VECTOR(int32_t, 4) l_114 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x04092CE2L), 0x04092CE2L);
        int64_t **l_116 = &l_99;
        int8_t *l_118 = &p_522->g_92;
        int i;
        (*p_67) = ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_522->g_113.s25761602)).odd, ((VECTOR(int32_t, 8))(l_114.wyyyywxz)).even, ((VECTOR(int32_t, 4))(p_522->g_115.xyxy))))).wxzywxzxzywzwxxw, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x14393331L, ((l_117 = ((*l_116) = &p_522->g_77)) != (void*)0), 0x05281CD2L, 0x0979A2FCL)), ((void*)0 != &l_99), (l_118 != ((l_116 == ((p_522->g_113.s6 , p_66) , &l_117)) , &p_522->g_92)), 0x2C684B15L, 0x60249F71L)).odd)).zzwxxxzwyxxxxyzy, ((VECTOR(int32_t, 16))(0x5734C793L)), ((VECTOR(int32_t, 16))(9L))))).sebfb, ((VECTOR(int32_t, 4))(0x2806100EL))))).ywyxwyxxzzwywyzx)).sd6, ((VECTOR(int32_t, 2))(0x552EC9A0L))))).xxyxyyyxyyyyyxyx))))).odd)).even, ((VECTOR(int32_t, 4))(0x5258A080L))))), ((VECTOR(int32_t, 4))(9L))))).x;
    }
    else
    { /* block id: 26 */
        uint32_t *l_119 = &p_522->g_28;
        return l_119;
    }
    return &p_522->g_28;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[41];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 41; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_comm_values[i] = 1;
    struct S1 c_523;
    struct S1* p_522 = &c_523;
    struct S1 c_524 = {
        {0xA07563FFL,4294967295UL,0xA07563FFL,0xA07563FFL,4294967295UL,0xA07563FFL,0xA07563FFL,4294967295UL}, // p_522->g_11
        0x062A4B15L, // p_522->g_28
        (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967294UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967294UL, 4294967295UL, 4294967294UL, 4294967295UL), // p_522->g_36
        0x2D9B6EF5427E5571L, // p_522->g_74
        0x11A46C428827C80CL, // p_522->g_77
        (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0xABE65260L), 0xABE65260L), 0xABE65260L, 4294967290UL, 0xABE65260L), // p_522->g_90
        (-1L), // p_522->g_92
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2B569F13L), 0x2B569F13L), 0x2B569F13L, 0L, 0x2B569F13L, (VECTOR(int32_t, 2))(0L, 0x2B569F13L), (VECTOR(int32_t, 2))(0L, 0x2B569F13L), 0L, 0x2B569F13L, 0L, 0x2B569F13L), // p_522->g_95
        (VECTOR(int8_t, 2))((-1L), (-9L)), // p_522->g_97
        0L, // p_522->g_101
        &p_522->g_101, // p_522->g_100
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3C58D0DBL), 0x3C58D0DBL), 0x3C58D0DBL, (-1L), 0x3C58D0DBL), // p_522->g_113
        (VECTOR(int32_t, 2))((-6L), 0x1A7D10A6L), // p_522->g_115
        (void*)0, // p_522->g_127
        &p_522->g_127, // p_522->g_126
        0xB4L, // p_522->g_145
        0x5D3BE87DL, // p_522->g_159
        (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0L), 0L), 0L, (-10L), 0L), // p_522->g_177
        0x74B7467CL, // p_522->g_182
        0x28F93799L, // p_522->g_197
        (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x249701AE2718014CL), 0x249701AE2718014CL), 0x249701AE2718014CL, 18446744073709551608UL, 0x249701AE2718014CL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x249701AE2718014CL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x249701AE2718014CL), 18446744073709551608UL, 0x249701AE2718014CL, 18446744073709551608UL, 0x249701AE2718014CL), // p_522->g_245
        (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xB0CDB7F7F900F8B0L), 0xB0CDB7F7F900F8B0L), 0xB0CDB7F7F900F8B0L, 18446744073709551606UL, 0xB0CDB7F7F900F8B0L), // p_522->g_249
        {{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)},{(-1L),0x37L,0x37L,(-1L),(-1L)}}, // p_522->g_272
        1UL, // p_522->g_284
        (VECTOR(uint16_t, 2))(1UL, 0xFCD8L), // p_522->g_294
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_522->g_308
        (VECTOR(uint32_t, 2))(1UL, 0x5958A52BL), // p_522->g_311
        (VECTOR(uint32_t, 2))(4294967295UL, 8UL), // p_522->g_312
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0x146579B1L), 0x146579B1L), 0x146579B1L, 4294967293UL, 0x146579B1L, (VECTOR(uint32_t, 2))(4294967293UL, 0x146579B1L), (VECTOR(uint32_t, 2))(4294967293UL, 0x146579B1L), 4294967293UL, 0x146579B1L, 4294967293UL, 0x146579B1L), // p_522->g_315
        0x3BC8AFDAL, // p_522->g_327
        {{{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL}},{{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL}},{{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL}},{{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL}},{{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL},{0x7CL,0x78L,0x7DL,0x44L,0x19L,0x7FL}}}, // p_522->g_328
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_522->g_351
        (void*)0, // p_522->g_367
        (void*)0, // p_522->g_396
        (void*)0, // p_522->g_412
        &p_522->g_412, // p_522->g_411
        &p_522->g_411, // p_522->g_410
        (VECTOR(int32_t, 2))(0x662965D9L, 0L), // p_522->g_429
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL), // p_522->g_433
        (VECTOR(uint8_t, 2))(255UL, 248UL), // p_522->g_434
        (void*)0, // p_522->g_444
        (void*)0, // p_522->g_457
        {1UL,65535UL,0x5AL,0x59L,0xC7659C3DL,0UL,-1L,-1L}, // p_522->g_465
        (void*)0, // p_522->g_468
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_522->g_469
        {0xB78CL,0x3A30L,0x2DL,-1L,4294967295UL,4294967290UL,1L,0x4096DE22L}, // p_522->g_505
        (void*)0, // p_522->g_509
        &p_522->g_182, // p_522->g_510
        1UL, // p_522->g_516
        0, // p_522->v_collective
        sequence_input[get_global_id(0)], // p_522->global_0_offset
        sequence_input[get_global_id(1)], // p_522->global_1_offset
        sequence_input[get_global_id(2)], // p_522->global_2_offset
        sequence_input[get_local_id(0)], // p_522->local_0_offset
        sequence_input[get_local_id(1)], // p_522->local_1_offset
        sequence_input[get_local_id(2)], // p_522->local_2_offset
        sequence_input[get_group_id(0)], // p_522->group_0_offset
        sequence_input[get_group_id(1)], // p_522->group_1_offset
        sequence_input[get_group_id(2)], // p_522->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 44)), permutations[0][get_linear_local_id()])), // p_522->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_523 = c_524;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_522);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_522->g_11[i], "p_522->g_11[i]", print_hash_value);

    }
    transparent_crc(p_522->g_28, "p_522->g_28", print_hash_value);
    transparent_crc(p_522->g_36.s0, "p_522->g_36.s0", print_hash_value);
    transparent_crc(p_522->g_36.s1, "p_522->g_36.s1", print_hash_value);
    transparent_crc(p_522->g_36.s2, "p_522->g_36.s2", print_hash_value);
    transparent_crc(p_522->g_36.s3, "p_522->g_36.s3", print_hash_value);
    transparent_crc(p_522->g_36.s4, "p_522->g_36.s4", print_hash_value);
    transparent_crc(p_522->g_36.s5, "p_522->g_36.s5", print_hash_value);
    transparent_crc(p_522->g_36.s6, "p_522->g_36.s6", print_hash_value);
    transparent_crc(p_522->g_36.s7, "p_522->g_36.s7", print_hash_value);
    transparent_crc(p_522->g_36.s8, "p_522->g_36.s8", print_hash_value);
    transparent_crc(p_522->g_36.s9, "p_522->g_36.s9", print_hash_value);
    transparent_crc(p_522->g_36.sa, "p_522->g_36.sa", print_hash_value);
    transparent_crc(p_522->g_36.sb, "p_522->g_36.sb", print_hash_value);
    transparent_crc(p_522->g_36.sc, "p_522->g_36.sc", print_hash_value);
    transparent_crc(p_522->g_36.sd, "p_522->g_36.sd", print_hash_value);
    transparent_crc(p_522->g_36.se, "p_522->g_36.se", print_hash_value);
    transparent_crc(p_522->g_36.sf, "p_522->g_36.sf", print_hash_value);
    transparent_crc(p_522->g_74, "p_522->g_74", print_hash_value);
    transparent_crc(p_522->g_77, "p_522->g_77", print_hash_value);
    transparent_crc(p_522->g_90.s0, "p_522->g_90.s0", print_hash_value);
    transparent_crc(p_522->g_90.s1, "p_522->g_90.s1", print_hash_value);
    transparent_crc(p_522->g_90.s2, "p_522->g_90.s2", print_hash_value);
    transparent_crc(p_522->g_90.s3, "p_522->g_90.s3", print_hash_value);
    transparent_crc(p_522->g_90.s4, "p_522->g_90.s4", print_hash_value);
    transparent_crc(p_522->g_90.s5, "p_522->g_90.s5", print_hash_value);
    transparent_crc(p_522->g_90.s6, "p_522->g_90.s6", print_hash_value);
    transparent_crc(p_522->g_90.s7, "p_522->g_90.s7", print_hash_value);
    transparent_crc(p_522->g_92, "p_522->g_92", print_hash_value);
    transparent_crc(p_522->g_95.s0, "p_522->g_95.s0", print_hash_value);
    transparent_crc(p_522->g_95.s1, "p_522->g_95.s1", print_hash_value);
    transparent_crc(p_522->g_95.s2, "p_522->g_95.s2", print_hash_value);
    transparent_crc(p_522->g_95.s3, "p_522->g_95.s3", print_hash_value);
    transparent_crc(p_522->g_95.s4, "p_522->g_95.s4", print_hash_value);
    transparent_crc(p_522->g_95.s5, "p_522->g_95.s5", print_hash_value);
    transparent_crc(p_522->g_95.s6, "p_522->g_95.s6", print_hash_value);
    transparent_crc(p_522->g_95.s7, "p_522->g_95.s7", print_hash_value);
    transparent_crc(p_522->g_95.s8, "p_522->g_95.s8", print_hash_value);
    transparent_crc(p_522->g_95.s9, "p_522->g_95.s9", print_hash_value);
    transparent_crc(p_522->g_95.sa, "p_522->g_95.sa", print_hash_value);
    transparent_crc(p_522->g_95.sb, "p_522->g_95.sb", print_hash_value);
    transparent_crc(p_522->g_95.sc, "p_522->g_95.sc", print_hash_value);
    transparent_crc(p_522->g_95.sd, "p_522->g_95.sd", print_hash_value);
    transparent_crc(p_522->g_95.se, "p_522->g_95.se", print_hash_value);
    transparent_crc(p_522->g_95.sf, "p_522->g_95.sf", print_hash_value);
    transparent_crc(p_522->g_97.x, "p_522->g_97.x", print_hash_value);
    transparent_crc(p_522->g_97.y, "p_522->g_97.y", print_hash_value);
    transparent_crc(p_522->g_101, "p_522->g_101", print_hash_value);
    transparent_crc(p_522->g_113.s0, "p_522->g_113.s0", print_hash_value);
    transparent_crc(p_522->g_113.s1, "p_522->g_113.s1", print_hash_value);
    transparent_crc(p_522->g_113.s2, "p_522->g_113.s2", print_hash_value);
    transparent_crc(p_522->g_113.s3, "p_522->g_113.s3", print_hash_value);
    transparent_crc(p_522->g_113.s4, "p_522->g_113.s4", print_hash_value);
    transparent_crc(p_522->g_113.s5, "p_522->g_113.s5", print_hash_value);
    transparent_crc(p_522->g_113.s6, "p_522->g_113.s6", print_hash_value);
    transparent_crc(p_522->g_113.s7, "p_522->g_113.s7", print_hash_value);
    transparent_crc(p_522->g_115.x, "p_522->g_115.x", print_hash_value);
    transparent_crc(p_522->g_115.y, "p_522->g_115.y", print_hash_value);
    transparent_crc(p_522->g_145, "p_522->g_145", print_hash_value);
    transparent_crc(p_522->g_159, "p_522->g_159", print_hash_value);
    transparent_crc(p_522->g_177.s0, "p_522->g_177.s0", print_hash_value);
    transparent_crc(p_522->g_177.s1, "p_522->g_177.s1", print_hash_value);
    transparent_crc(p_522->g_177.s2, "p_522->g_177.s2", print_hash_value);
    transparent_crc(p_522->g_177.s3, "p_522->g_177.s3", print_hash_value);
    transparent_crc(p_522->g_177.s4, "p_522->g_177.s4", print_hash_value);
    transparent_crc(p_522->g_177.s5, "p_522->g_177.s5", print_hash_value);
    transparent_crc(p_522->g_177.s6, "p_522->g_177.s6", print_hash_value);
    transparent_crc(p_522->g_177.s7, "p_522->g_177.s7", print_hash_value);
    transparent_crc(p_522->g_182, "p_522->g_182", print_hash_value);
    transparent_crc(p_522->g_197, "p_522->g_197", print_hash_value);
    transparent_crc(p_522->g_245.s0, "p_522->g_245.s0", print_hash_value);
    transparent_crc(p_522->g_245.s1, "p_522->g_245.s1", print_hash_value);
    transparent_crc(p_522->g_245.s2, "p_522->g_245.s2", print_hash_value);
    transparent_crc(p_522->g_245.s3, "p_522->g_245.s3", print_hash_value);
    transparent_crc(p_522->g_245.s4, "p_522->g_245.s4", print_hash_value);
    transparent_crc(p_522->g_245.s5, "p_522->g_245.s5", print_hash_value);
    transparent_crc(p_522->g_245.s6, "p_522->g_245.s6", print_hash_value);
    transparent_crc(p_522->g_245.s7, "p_522->g_245.s7", print_hash_value);
    transparent_crc(p_522->g_245.s8, "p_522->g_245.s8", print_hash_value);
    transparent_crc(p_522->g_245.s9, "p_522->g_245.s9", print_hash_value);
    transparent_crc(p_522->g_245.sa, "p_522->g_245.sa", print_hash_value);
    transparent_crc(p_522->g_245.sb, "p_522->g_245.sb", print_hash_value);
    transparent_crc(p_522->g_245.sc, "p_522->g_245.sc", print_hash_value);
    transparent_crc(p_522->g_245.sd, "p_522->g_245.sd", print_hash_value);
    transparent_crc(p_522->g_245.se, "p_522->g_245.se", print_hash_value);
    transparent_crc(p_522->g_245.sf, "p_522->g_245.sf", print_hash_value);
    transparent_crc(p_522->g_249.s0, "p_522->g_249.s0", print_hash_value);
    transparent_crc(p_522->g_249.s1, "p_522->g_249.s1", print_hash_value);
    transparent_crc(p_522->g_249.s2, "p_522->g_249.s2", print_hash_value);
    transparent_crc(p_522->g_249.s3, "p_522->g_249.s3", print_hash_value);
    transparent_crc(p_522->g_249.s4, "p_522->g_249.s4", print_hash_value);
    transparent_crc(p_522->g_249.s5, "p_522->g_249.s5", print_hash_value);
    transparent_crc(p_522->g_249.s6, "p_522->g_249.s6", print_hash_value);
    transparent_crc(p_522->g_249.s7, "p_522->g_249.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_522->g_272[i][j], "p_522->g_272[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_522->g_284, "p_522->g_284", print_hash_value);
    transparent_crc(p_522->g_294.x, "p_522->g_294.x", print_hash_value);
    transparent_crc(p_522->g_294.y, "p_522->g_294.y", print_hash_value);
    transparent_crc(p_522->g_308.s0, "p_522->g_308.s0", print_hash_value);
    transparent_crc(p_522->g_308.s1, "p_522->g_308.s1", print_hash_value);
    transparent_crc(p_522->g_308.s2, "p_522->g_308.s2", print_hash_value);
    transparent_crc(p_522->g_308.s3, "p_522->g_308.s3", print_hash_value);
    transparent_crc(p_522->g_308.s4, "p_522->g_308.s4", print_hash_value);
    transparent_crc(p_522->g_308.s5, "p_522->g_308.s5", print_hash_value);
    transparent_crc(p_522->g_308.s6, "p_522->g_308.s6", print_hash_value);
    transparent_crc(p_522->g_308.s7, "p_522->g_308.s7", print_hash_value);
    transparent_crc(p_522->g_311.x, "p_522->g_311.x", print_hash_value);
    transparent_crc(p_522->g_311.y, "p_522->g_311.y", print_hash_value);
    transparent_crc(p_522->g_312.x, "p_522->g_312.x", print_hash_value);
    transparent_crc(p_522->g_312.y, "p_522->g_312.y", print_hash_value);
    transparent_crc(p_522->g_315.s0, "p_522->g_315.s0", print_hash_value);
    transparent_crc(p_522->g_315.s1, "p_522->g_315.s1", print_hash_value);
    transparent_crc(p_522->g_315.s2, "p_522->g_315.s2", print_hash_value);
    transparent_crc(p_522->g_315.s3, "p_522->g_315.s3", print_hash_value);
    transparent_crc(p_522->g_315.s4, "p_522->g_315.s4", print_hash_value);
    transparent_crc(p_522->g_315.s5, "p_522->g_315.s5", print_hash_value);
    transparent_crc(p_522->g_315.s6, "p_522->g_315.s6", print_hash_value);
    transparent_crc(p_522->g_315.s7, "p_522->g_315.s7", print_hash_value);
    transparent_crc(p_522->g_315.s8, "p_522->g_315.s8", print_hash_value);
    transparent_crc(p_522->g_315.s9, "p_522->g_315.s9", print_hash_value);
    transparent_crc(p_522->g_315.sa, "p_522->g_315.sa", print_hash_value);
    transparent_crc(p_522->g_315.sb, "p_522->g_315.sb", print_hash_value);
    transparent_crc(p_522->g_315.sc, "p_522->g_315.sc", print_hash_value);
    transparent_crc(p_522->g_315.sd, "p_522->g_315.sd", print_hash_value);
    transparent_crc(p_522->g_315.se, "p_522->g_315.se", print_hash_value);
    transparent_crc(p_522->g_315.sf, "p_522->g_315.sf", print_hash_value);
    transparent_crc(p_522->g_327, "p_522->g_327", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_522->g_328[i][j][k], "p_522->g_328[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_522->g_351.s0, "p_522->g_351.s0", print_hash_value);
    transparent_crc(p_522->g_351.s1, "p_522->g_351.s1", print_hash_value);
    transparent_crc(p_522->g_351.s2, "p_522->g_351.s2", print_hash_value);
    transparent_crc(p_522->g_351.s3, "p_522->g_351.s3", print_hash_value);
    transparent_crc(p_522->g_351.s4, "p_522->g_351.s4", print_hash_value);
    transparent_crc(p_522->g_351.s5, "p_522->g_351.s5", print_hash_value);
    transparent_crc(p_522->g_351.s6, "p_522->g_351.s6", print_hash_value);
    transparent_crc(p_522->g_351.s7, "p_522->g_351.s7", print_hash_value);
    transparent_crc(p_522->g_429.x, "p_522->g_429.x", print_hash_value);
    transparent_crc(p_522->g_429.y, "p_522->g_429.y", print_hash_value);
    transparent_crc(p_522->g_433.s0, "p_522->g_433.s0", print_hash_value);
    transparent_crc(p_522->g_433.s1, "p_522->g_433.s1", print_hash_value);
    transparent_crc(p_522->g_433.s2, "p_522->g_433.s2", print_hash_value);
    transparent_crc(p_522->g_433.s3, "p_522->g_433.s3", print_hash_value);
    transparent_crc(p_522->g_433.s4, "p_522->g_433.s4", print_hash_value);
    transparent_crc(p_522->g_433.s5, "p_522->g_433.s5", print_hash_value);
    transparent_crc(p_522->g_433.s6, "p_522->g_433.s6", print_hash_value);
    transparent_crc(p_522->g_433.s7, "p_522->g_433.s7", print_hash_value);
    transparent_crc(p_522->g_433.s8, "p_522->g_433.s8", print_hash_value);
    transparent_crc(p_522->g_433.s9, "p_522->g_433.s9", print_hash_value);
    transparent_crc(p_522->g_433.sa, "p_522->g_433.sa", print_hash_value);
    transparent_crc(p_522->g_433.sb, "p_522->g_433.sb", print_hash_value);
    transparent_crc(p_522->g_433.sc, "p_522->g_433.sc", print_hash_value);
    transparent_crc(p_522->g_433.sd, "p_522->g_433.sd", print_hash_value);
    transparent_crc(p_522->g_433.se, "p_522->g_433.se", print_hash_value);
    transparent_crc(p_522->g_433.sf, "p_522->g_433.sf", print_hash_value);
    transparent_crc(p_522->g_434.x, "p_522->g_434.x", print_hash_value);
    transparent_crc(p_522->g_434.y, "p_522->g_434.y", print_hash_value);
    transparent_crc(p_522->g_465.f0, "p_522->g_465.f0", print_hash_value);
    transparent_crc(p_522->g_465.f1, "p_522->g_465.f1", print_hash_value);
    transparent_crc(p_522->g_465.f2, "p_522->g_465.f2", print_hash_value);
    transparent_crc(p_522->g_465.f3, "p_522->g_465.f3", print_hash_value);
    transparent_crc(p_522->g_465.f4, "p_522->g_465.f4", print_hash_value);
    transparent_crc(p_522->g_465.f5, "p_522->g_465.f5", print_hash_value);
    transparent_crc(p_522->g_465.f6, "p_522->g_465.f6", print_hash_value);
    transparent_crc(p_522->g_465.f7, "p_522->g_465.f7", print_hash_value);
    transparent_crc(p_522->g_505.f0, "p_522->g_505.f0", print_hash_value);
    transparent_crc(p_522->g_505.f1, "p_522->g_505.f1", print_hash_value);
    transparent_crc(p_522->g_505.f2, "p_522->g_505.f2", print_hash_value);
    transparent_crc(p_522->g_505.f3, "p_522->g_505.f3", print_hash_value);
    transparent_crc(p_522->g_505.f4, "p_522->g_505.f4", print_hash_value);
    transparent_crc(p_522->g_505.f5, "p_522->g_505.f5", print_hash_value);
    transparent_crc(p_522->g_505.f6, "p_522->g_505.f6", print_hash_value);
    transparent_crc(p_522->g_505.f7, "p_522->g_505.f7", print_hash_value);
    transparent_crc(p_522->g_516, "p_522->g_516", print_hash_value);
    transparent_crc(p_522->v_collective, "p_522->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 41; i++)
            transparent_crc(p_522->l_special_values[i], "p_522->l_special_values[i]", print_hash_value);
    transparent_crc(p_522->l_comm_values[get_linear_local_id()], "p_522->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_522->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()], "p_522->g_comm_values[get_linear_group_id() * 44 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
