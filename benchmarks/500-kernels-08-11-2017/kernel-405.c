// --atomics 62 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 50,23,3 -l 2,1,1
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

// Seed: 1730179331

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   volatile int16_t  f1;
};

union U1 {
   int16_t  f0;
   int8_t  f1;
};

union U2 {
   volatile uint32_t  f0;
   uint32_t  f1;
};

struct S3 {
    VECTOR(int32_t, 2) g_27;
    int32_t *g_26;
    volatile VECTOR(uint16_t, 16) g_57;
    VECTOR(int32_t, 2) g_59;
    union U2 g_61;
    int8_t g_69[8][4][1];
    int16_t g_83;
    uint32_t g_86;
    union U0 g_103;
    volatile VECTOR(int16_t, 8) g_114;
    volatile VECTOR(int16_t, 8) g_115;
    int8_t *g_120;
    union U0 g_144;
    union U1 g_161;
    union U1 *g_160;
    union U1 ** volatile g_162;
    union U0 *g_178[10][9][2];
    union U0 ** volatile g_177;
    union U0 g_203;
    int32_t g_205;
    VECTOR(uint16_t, 4) g_216;
    union U0 g_223;
    VECTOR(uint8_t, 4) g_233;
    VECTOR(int16_t, 16) g_235;
    VECTOR(int16_t, 4) g_236;
    union U0 g_239;
    volatile VECTOR(int8_t, 8) g_253;
    VECTOR(int32_t, 4) g_258;
    union U0 g_268;
    int32_t g_292;
    int32_t g_293;
    volatile union U2 g_297;
    union U2 *g_320[9][8][3];
    union U2 **g_319;
    uint64_t g_341;
    uint64_t * volatile g_340;
    uint64_t *g_342;
    int8_t g_343;
    int32_t g_345;
    VECTOR(uint16_t, 4) g_375;
    uint32_t g_406[1][8][10];
    int16_t g_451;
    union U1 g_458;
    union U2 g_467;
    union U2 g_469;
    int32_t * volatile g_477;
    int32_t ** volatile g_480;
    int32_t ** volatile g_481;
    int32_t * volatile g_485;
    union U0 g_490;
    int32_t * volatile g_517;
    int32_t * volatile g_518;
    volatile VECTOR(uint32_t, 4) g_523;
    VECTOR(int64_t, 8) g_531;
    VECTOR(uint32_t, 8) g_544;
    uint16_t *g_549;
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
int64_t  func_1(struct S3 * p_572);
uint8_t  func_2(int32_t  p_3, uint32_t  p_4, struct S3 * p_572);
uint64_t  func_7(int32_t  p_8, struct S3 * p_572);
int32_t * func_9(int16_t  p_10, uint64_t  p_11, int32_t  p_12, uint32_t  p_13, uint64_t  p_14, struct S3 * p_572);
int32_t  func_21(int8_t  p_22, int32_t * p_23, struct S3 * p_572);
int32_t * func_24(uint32_t  p_25, struct S3 * p_572);
union U2 * func_33(int32_t * p_34, uint32_t  p_35, uint32_t  p_36, uint8_t  p_37, struct S3 * p_572);
union U0  func_38(union U1  p_39, union U2 * p_40, union U2 * p_41, union U2 * p_42, struct S3 * p_572);
union U1  func_43(int32_t * p_44, uint64_t  p_45, uint64_t  p_46, int32_t  p_47, struct S3 * p_572);
int32_t * func_48(uint32_t  p_49, struct S3 * p_572);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_572->l_comm_values p_572->g_comm_values p_572->g_26 p_572->g_103.f0 p_572->g_481 p_572->g_485 p_572->g_177 p_572->g_178 p_572->g_523 p_572->g_531 p_572->g_120 p_572->g_343 p_572->g_544 p_572->g_549 p_572->g_340 p_572->g_341 p_572->g_216 p_572->g_258 p_572->g_223.f0
 * writes: p_572->g_103.f0 p_572->g_205 p_572->g_69 p_572->g_343 p_572->g_549
 */
int64_t  func_1(struct S3 * p_572)
{ /* block id: 4 */
    VECTOR(uint32_t, 8) l_524 = (VECTOR(uint32_t, 8))(0x25944325L, (VECTOR(uint32_t, 4))(0x25944325L, (VECTOR(uint32_t, 2))(0x25944325L, 0x2F361DA9L), 0x2F361DA9L), 0x2F361DA9L, 0x25944325L, 0x2F361DA9L);
    int32_t l_525 = (-9L);
    uint16_t *l_526[6][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_527 = 0x1B842A3AL;
    uint32_t l_528 = 0x771CAB60L;
    int8_t *l_536 = &p_572->g_343;
    int8_t *l_537 = &p_572->g_161.f1;
    int8_t *l_538 = &p_572->g_161.f1;
    int8_t *l_539 = (void*)0;
    int8_t *l_540 = &p_572->g_458.f1;
    int8_t *l_541 = &p_572->g_161.f1;
    int8_t *l_542[7][1];
    uint32_t l_543 = 0xD5B7D6F1L;
    uint16_t **l_550[2];
    int32_t *l_570[3];
    int32_t l_571 = 0x65CF0533L;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_542[i][j] = &p_572->g_161.f1;
    }
    for (i = 0; i < 2; i++)
        l_550[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_570[i] = (void*)0;
    l_571 &= (func_2((safe_lshift_func_int16_t_s_s((p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 2))] , (((func_7(p_572->g_comm_values[p_572->tid], p_572) , ((safe_mul_func_uint16_t_u_u((l_525 = ((((VECTOR(uint32_t, 2))(p_572->g_523.zx)).lo ^ ((VECTOR(uint32_t, 4))(l_524.s4374)).z) != FAKE_DIVERGE(p_572->group_1_offset, get_group_id(1), 10))), (++l_528))) ^ ((VECTOR(int64_t, 2))(p_572->g_531.s11)).even)) , (safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((l_543 |= ((*l_536) |= ((*p_572->g_120) = l_528))), ((((+(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_572->g_544.s53624605)).s03))))).even != (safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), 0x1228586FL)))) , ((((safe_sub_func_uint32_t_u_u(4294967287UL, l_528)) > (((p_572->g_549 = p_572->g_549) == (void*)0) && (-1L))) & (*p_572->g_340)) & p_572->g_216.x)) < l_524.s4) >= (-2L)))) == 0xCC4D72859C6750EEL), 0x4CL))) >= l_524.s1)), l_524.s3)), p_572->g_258.z, p_572) > p_572->g_223.f0);
    return p_572->g_216.w;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_2(int32_t  p_3, uint32_t  p_4, struct S3 * p_572)
{ /* block id: 231 */
    int32_t *l_551 = (void*)0;
    int32_t *l_552 = &p_572->g_205;
    int32_t l_553 = 0L;
    int32_t *l_554 = &l_553;
    int32_t *l_555 = &p_572->g_205;
    int32_t *l_556 = &p_572->g_205;
    int32_t *l_557 = (void*)0;
    int32_t *l_558 = (void*)0;
    int32_t *l_559 = &p_572->g_205;
    int32_t *l_560 = &l_553;
    int32_t *l_561 = &l_553;
    int32_t *l_562 = &p_572->g_205;
    int32_t *l_563 = &l_553;
    int32_t *l_564 = &p_572->g_205;
    int32_t *l_565 = &p_572->g_205;
    int32_t *l_566[5] = {&l_553,&l_553,&l_553,&l_553,&l_553};
    uint32_t l_567 = 4294967295UL;
    int i;
    --l_567;
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->l_comm_values p_572->g_26 p_572->g_103.f0 p_572->g_481 p_572->g_485 p_572->g_177 p_572->g_178
 * writes: p_572->g_103.f0 p_572->g_205
 */
uint64_t  func_7(int32_t  p_8, struct S3 * p_572)
{ /* block id: 5 */
    uint64_t l_17 = 0xBA31E468A07C694AL;
    int32_t *l_519[6][1][7] = {{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}},{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}},{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}},{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}},{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}},{{(void*)0,&p_572->g_205,(void*)0,(void*)0,&p_572->g_205,(void*)0,(void*)0}}};
    union U0 *l_520 = &p_572->g_203;
    int i, j, k;
    l_519[5][0][4] = func_9(p_8, (safe_sub_func_int8_t_s_s(0x44L, 8UL)), l_17, p_8, p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 2))], p_572);
    l_520 = (*p_572->g_177);
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_26 p_572->g_103.f0 p_572->g_481 p_572->g_485
 * writes: p_572->g_103.f0 p_572->g_205
 */
int32_t * func_9(int16_t  p_10, uint64_t  p_11, int32_t  p_12, uint32_t  p_13, uint64_t  p_14, struct S3 * p_572)
{ /* block id: 6 */
    int32_t *l_516 = (void*)0;
    for (p_10 = 0; (p_10 == (-14)); p_10--)
    { /* block id: 9 */
        VECTOR(int32_t, 2) l_20 = (VECTOR(int32_t, 2))(0x256C37FCL, (-9L));
        uint32_t l_515[10][8] = {{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL},{0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL,0xCA4133C9L,0xCA4133C9L,4294967295UL}};
        int i, j;
        l_515[3][6] = ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(l_20.xxyyxyxyyxxxxxyx)).sbb48, (int32_t)func_21(l_20.x, func_24(p_14, p_572), p_572)))).w;
        return (*p_572->g_481);
    }
    (*p_572->g_485) = p_14;
    return l_516;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_103.f0
 * writes: p_572->g_103.f0
 */
int32_t  func_21(int8_t  p_22, int32_t * p_23, struct S3 * p_572)
{ /* block id: 12 */
    uint16_t l_28 = 65535UL;
    int32_t l_461[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    union U1 l_465[2][1] = {{{0x1FB8L}},{{0x1FB8L}}};
    union U2 *l_466 = &p_572->g_467;
    int64_t l_510 = 0x570BF3AEC4088AABL;
    int i, j;
    l_28--;
    for (p_22 = (-12); (p_22 <= 3); p_22++)
    { /* block id: 16 */
        int16_t *l_450 = &p_572->g_451;
        VECTOR(uint16_t, 4) l_455 = (VECTOR(uint16_t, 4))(0xE58DL, (VECTOR(uint16_t, 2))(0xE58DL, 0xE846L), 0xE846L);
        uint16_t *l_456 = &l_28;
        uint8_t *l_457[2][10][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint8_t *l_460 = (void*)0;
        uint8_t **l_459 = &l_460;
        union U1 *l_464[5];
        union U2 *l_468 = &p_572->g_469;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_464[i] = &p_572->g_458;
        (1 + 1);
    }
    for (p_572->g_103.f0 = 0; (p_572->g_103.f0 >= 20); p_572->g_103.f0 = safe_add_func_int8_t_s_s(p_572->g_103.f0, 1))
    { /* block id: 208 */
        uint32_t l_498[10] = {4294967295UL,4UL,4294967295UL,4294967295UL,4UL,4294967295UL,4294967295UL,4UL,4294967295UL,4294967295UL};
        int32_t l_500 = (-4L);
        int32_t *l_501 = (void*)0;
        int32_t *l_502 = &l_461[4];
        int32_t *l_503 = &l_461[4];
        int32_t *l_504 = &l_500;
        int32_t *l_505 = &l_461[2];
        int32_t *l_506 = &l_461[9];
        int32_t *l_507 = &p_572->g_205;
        int32_t *l_508 = &l_500;
        int32_t *l_509[7];
        int64_t l_511[1][5][1] = {{{9L},{9L},{9L},{9L},{9L}}};
        uint64_t l_512 = 0x77196F73FD63874FL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_509[i] = (void*)0;
        for (p_22 = 0; (p_22 != 15); p_22++)
        { /* block id: 211 */
            int32_t *l_499 = &l_461[4];
            (*l_499) = l_498[4];
        }
        l_512--;
    }
    return l_461[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_26
 * writes:
 */
int32_t * func_24(uint32_t  p_25, struct S3 * p_572)
{ /* block id: 10 */
    return p_572->g_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_319 p_572->g_320
 * writes:
 */
union U2 * func_33(int32_t * p_34, uint32_t  p_35, uint32_t  p_36, uint8_t  p_37, struct S3 * p_572)
{ /* block id: 196 */
    union U2 *l_493 = &p_572->g_61;
    for (p_37 = 13; (p_37 >= 14); p_37 = safe_add_func_int64_t_s_s(p_37, 1))
    { /* block id: 199 */
        return (*p_572->g_319);
    }
    return l_493;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_239.f0 p_572->g_59 p_572->g_467 p_572->g_458.f0 p_572->g_481 p_572->g_485 p_572->g_258 p_572->g_490
 * writes: p_572->g_239.f0 p_572->g_258 p_572->g_26 p_572->g_205 p_572->g_59
 */
union U0  func_38(union U1  p_39, union U2 * p_40, union U2 * p_41, union U2 * p_42, struct S3 * p_572)
{ /* block id: 183 */
    int32_t *l_478 = (void*)0;
    int16_t *l_486 = (void*)0;
    int32_t *l_487 = &p_572->g_205;
    int32_t *l_488 = (void*)0;
    int32_t *l_489[9][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (p_572->g_239.f0 = (-17); (p_572->g_239.f0 == 12); p_572->g_239.f0++)
    { /* block id: 186 */
        uint16_t l_476 = 0UL;
        int32_t **l_479 = (void*)0;
        int32_t *l_482 = (void*)0;
        int32_t *l_483 = (void*)0;
        int32_t *l_484 = (void*)0;
        p_572->g_258.w = (safe_sub_func_int16_t_s_s((0x999B743CB0DFEA75L ^ (!((0x2B96L ^ p_39.f0) , (p_572->g_59.x != ((*p_41) , 0x062DDE09C0F09352L))))), (safe_add_func_uint32_t_u_u((l_476 == (7L & (0x465BL < p_572->g_458.f0))), p_39.f0))));
        (*p_572->g_481) = l_478;
        (*p_572->g_485) = (+p_39.f0);
    }
    p_572->g_258.w |= (p_572->g_59.x ^= ((*l_487) = (0x5937L | (p_39.f0 = (p_39.f0 ^ p_39.f0)))));
    return p_572->g_490;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_572->g_205
 */
union U1  func_43(int32_t * p_44, uint64_t  p_45, uint64_t  p_46, int32_t  p_47, struct S3 * p_572)
{ /* block id: 179 */
    int32_t *l_462 = &p_572->g_205;
    union U1 l_463 = {8L};
    (*l_462) = 1L;
    return l_463;
}


/* ------------------------------------------ */
/* 
 * reads : p_572->g_26 p_572->g_57 p_572->g_59 p_572->g_27 p_572->g_61 p_572->g_69 p_572->l_comm_values p_572->g_83 p_572->g_86 p_572->g_61.f1 p_572->g_103 p_572->g_comm_values p_572->g_114 p_572->g_115 p_572->g_120 p_572->g_144 p_572->g_144.f0 p_572->g_160 p_572->g_162 p_572->g_177 p_572->g_203 p_572->g_205 p_572->g_161.f0 p_572->g_61.f0 p_572->g_216 p_572->g_103.f0 p_572->g_233 p_572->g_235 p_572->g_236 p_572->g_239 p_572->g_253 p_572->g_258 p_572->g_161 p_572->g_268.f0 p_572->g_292 p_572->g_239.f0 p_572->g_297 p_572->g_319 p_572->g_340 p_572->g_342 p_572->g_343 p_572->g_345 p_572->g_341 p_572->g_375 p_572->g_178 p_572->g_406
 * writes: p_572->g_26 p_572->g_27 p_572->g_59 p_572->g_83 p_572->g_86 p_572->g_61.f1 p_572->g_120 p_572->g_69 p_572->g_160 p_572->g_178 p_572->g_205 p_572->g_161 p_572->g_258 p_572->g_216 p_572->g_293 p_572->g_comm_values p_572->g_343 p_572->g_341 p_572->g_235 p_572->g_406
 */
int32_t * func_48(uint32_t  p_49, struct S3 * p_572)
{ /* block id: 17 */
    int32_t **l_52[6] = {(void*)0,&p_572->g_26,(void*)0,(void*)0,&p_572->g_26,(void*)0};
    VECTOR(uint16_t, 4) l_58 = (VECTOR(uint16_t, 4))(0xE572L, (VECTOR(uint16_t, 2))(0xE572L, 0xE421L), 0xE421L);
    union U2 *l_60 = &p_572->g_61;
    int8_t *l_68[5][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint8_t l_70 = 255UL;
    union U2 *l_72 = (void*)0;
    union U2 **l_71 = &l_72;
    uint32_t l_79 = 4294967295UL;
    uint16_t *l_80 = (void*)0;
    uint16_t *l_81 = (void*)0;
    uint16_t *l_82[1];
    int8_t *l_121 = &p_572->g_69[3][2][0];
    union U1 l_133[2][9][8] = {{{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}}},{{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}},{{0x270AL},{0x09D2L},{9L},{0x270AL},{0x397FL},{-5L},{0x2038L},{9L}}}};
    int16_t l_149 = 3L;
    int16_t l_204 = (-1L);
    int32_t *l_206 = (void*)0;
    int8_t *l_217[10][5][5] = {{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}},{{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]},{&p_572->g_69[3][2][0],&p_572->g_69[4][0][0],(void*)0,&p_572->g_69[3][2][0],&p_572->g_69[0][2][0]}}};
    uint32_t l_246 = 4294967293UL;
    VECTOR(int32_t, 8) l_257 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    union U0 *l_267 = &p_572->g_268;
    int16_t l_308 = 1L;
    int64_t l_348 = 0x119EE3AA323E8D59L;
    uint64_t *l_353 = &p_572->g_341;
    int16_t *l_394 = &l_133[0][4][5].f0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_82[i] = (void*)0;
    p_572->g_26 = p_572->g_26;
    if ((atomic_inc(&p_572->g_atomic_input[62 * get_linear_group_id() + 18]) == 7))
    { /* block id: 20 */
        int8_t l_53 = (-1L);
        uint16_t l_54[10] = {65533UL,65535UL,65528UL,65535UL,65533UL,65533UL,65535UL,65528UL,65535UL,65533UL};
        int i;
        l_53 |= 0x4A7A22F0L;
        l_54[9]++;
        unsigned int result = 0;
        result += l_53;
        int l_54_i0;
        for (l_54_i0 = 0; l_54_i0 < 10; l_54_i0++) {
            result += l_54[l_54_i0];
        }
        atomic_add(&p_572->g_special_values[62 * get_linear_group_id() + 18], result);
    }
    else
    { /* block id: 23 */
        (1 + 1);
    }
    p_572->g_59.y = (((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x7689L, 0UL)).xyyyxxyxyxyyxyyy)))).sab1b, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xFFFBL, 65528UL)).yxyxyxyxxxxyyyyx)).sfc, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(7UL, 0x456CL)), 0x4FF2L, 0xE203L)).ywzzyzyyyzyxxxwx)).sa, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_572->g_57.sa0ff)).hi)), 0UL, 65535UL)).lo, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(l_58.zxww)), (uint16_t)((p_572->g_27.x &= ((VECTOR(int32_t, 2))(p_572->g_59.yy)).hi) == p_572->g_59.x)))).zzywxzxx)).s04)), 0xD8FFL, (((l_60 == ((*l_71) = (((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((1L & p_49), 3)), 2)) & p_572->g_57.s6) > ((p_572->g_26 != ((l_70 |= 1L) , func_24(p_49, p_572))) != 0x13L)), p_49)) , p_572->g_61) , (void*)0))) | 0x02L) >= p_572->g_69[3][2][0]), 6UL, ((VECTOR(uint16_t, 2))(0x09C3L)), 7UL)))).s24))), 65530UL, 0xCAB9L)), ((VECTOR(uint16_t, 4))(1UL))))), p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 2))], ((VECTOR(uint16_t, 8))(0xA47CL)), 0x4BECL, 0x6537L)).even))).s70)), ((VECTOR(uint16_t, 4))(0xF2C1L)), 0UL, 65535UL)).s16))))), 6UL, 65531UL)).zxyyzzxy)).s60)), 0x8955L, 65535UL)).xwxzxyywwxwxywyy, ((VECTOR(uint16_t, 16))(9UL))))).s27, ((VECTOR(uint16_t, 2))(0xEC88L))))).xxxy)))))).zzwyxzyzxzzzwwzy, (uint16_t)p_572->g_59.x))).se0, ((VECTOR(uint16_t, 2))(0xFCF3L))))).lo && p_49);
    if ((safe_add_func_int16_t_s_s((p_572->g_59.x > p_49), (p_572->g_83 ^= (safe_add_func_uint64_t_u_u(0x42F02481C6DCE702L, (safe_lshift_func_uint16_t_u_s(l_79, 8))))))))
    { /* block id: 31 */
        uint8_t l_84 = 0xCEL;
        uint32_t *l_85 = &p_572->g_86;
        int32_t l_89 = 0L;
        atomic_min(&p_572->l_atomic_reduction[0], (p_572->g_59.x = p_49) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_572->v_collective += p_572->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_84 = p_49;
        l_89 = ((((*l_85)++) || 0x4103A873L) , (&p_572->g_69[2][3][0] == (void*)0));
        p_572->g_59.x = ((safe_unary_minus_func_uint32_t_u(4294967295UL)) < l_89);
    }
    else
    { /* block id: 38 */
        uint16_t l_95 = 65535UL;
        int8_t *l_118 = &p_572->g_69[3][2][0];
        int8_t **l_119[5][2][5] = {{{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118},{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118}},{{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118},{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118}},{{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118},{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118}},{{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118},{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118}},{{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118},{(void*)0,(void*)0,&l_118,&l_68[1][3][0],&l_118}}};
        uint32_t *l_122 = &p_572->g_86;
        uint32_t **l_124 = &l_122;
        uint32_t ***l_123 = &l_124;
        union U1 *l_134 = &l_133[0][7][0];
        uint64_t l_139 = 0UL;
        int32_t l_165 = 0x5322444AL;
        int32_t l_168 = 2L;
        union U0 *l_222 = &p_572->g_223;
        int64_t l_296 = 0x08C9777D0D0EEF9DL;
        VECTOR(int32_t, 2) l_321 = (VECTOR(int32_t, 2))(0x2308A391L, 0x0C6545C9L);
        VECTOR(uint16_t, 16) l_329 = (VECTOR(uint16_t, 16))(0xB18DL, (VECTOR(uint16_t, 4))(0xB18DL, (VECTOR(uint16_t, 2))(0xB18DL, 1UL), 1UL), 1UL, 0xB18DL, 1UL, (VECTOR(uint16_t, 2))(0xB18DL, 1UL), (VECTOR(uint16_t, 2))(0xB18DL, 1UL), 0xB18DL, 1UL, 0xB18DL, 1UL);
        VECTOR(int64_t, 2) l_381 = (VECTOR(int64_t, 2))(0x3D6A5CE27F435956L, 0x6E4D21DA144566BAL);
        uint32_t l_399[3];
        int32_t *l_405 = (void*)0;
        uint8_t l_429 = 3UL;
        uint32_t l_432[2][8] = {{4294967290UL,2UL,4294967290UL,4294967290UL,2UL,4294967290UL,4294967290UL,2UL},{4294967290UL,2UL,4294967290UL,4294967290UL,2UL,4294967290UL,4294967290UL,2UL}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_399[i] = 1UL;
        for (l_70 = 0; (l_70 >= 30); ++l_70)
        { /* block id: 41 */
            int64_t l_96[1];
            int i;
            for (i = 0; i < 1; i++)
                l_96[i] = 0x6ADFD65E783BFB6AL;
            for (p_572->g_61.f1 = 0; (p_572->g_61.f1 != 58); p_572->g_61.f1++)
            { /* block id: 44 */
                l_96[0] ^= l_95;
            }
            if (p_49)
                continue;
        }
        (*l_123) = (((((p_572->g_61 , (safe_sub_func_uint16_t_u_u((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(3L, 0x10L)), ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_572->g_103 , (((*l_122) = ((safe_mod_func_int32_t_s_s(l_95, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0x8650L, 11)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_572->g_comm_values[p_572->tid], 7)), (((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(p_572->g_114.s5637)).yxyzzywxwxzxwyzz, ((VECTOR(int16_t, 8))(p_572->g_115.s36460236)).s3100110034040117))).s8 > (safe_sub_func_uint64_t_u_u(((l_68[0][3][0] == l_118) , ((p_572->g_120 = &p_572->g_69[6][0][0]) != l_121)), p_572->g_83))))))))) != l_95)) , 6L)), p_572->g_27.x)), 65529UL)) , 0x44L), 0x43L, p_49, ((VECTOR(int8_t, 2))(3L)), 1L)).s1 && FAKE_DIVERGE(p_572->local_0_offset, get_local_id(0), 10)), l_95))) != GROUP_DIVERGE(2, 1)) < p_572->g_27.x) | FAKE_DIVERGE(p_572->group_1_offset, get_group_id(1), 10)) , &l_122);
        if ((((safe_mul_func_int64_t_s_s((safe_div_func_int8_t_s_s(((*p_572->g_120) = 0x5FL), (((safe_rshift_func_uint8_t_u_s(l_95, 1)) | p_49) | (safe_mul_func_int8_t_s_s((((*l_134) = l_133[0][4][5]) , (safe_sub_func_uint64_t_u_u(l_95, (l_139 || (((VECTOR(int32_t, 2))(0x124D0BBBL, 0x6BFF1599L)).hi <= (safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((p_572->g_144 , (0UL | (FAKE_DIVERGE(p_572->global_0_offset, get_global_id(0), 10) ^ (safe_lshift_func_int8_t_s_s(((FAKE_DIVERGE(p_572->local_1_offset, get_local_id(1), 10) < (!(l_139 , l_149))) < 0x3AL), 2))))), l_139)), 1UL))))))), p_572->g_144.f0))))), 0UL)) >= 0x4FD1129CL) > p_49))
        { /* block id: 54 */
            int32_t l_154 = 0x63E7599DL;
            int32_t l_166 = 2L;
            int32_t l_167 = (-1L);
            int32_t l_170 = (-1L);
            uint16_t l_173 = 0UL;
            union U0 *l_176[3];
            int i;
            for (i = 0; i < 3; i++)
                l_176[i] = &p_572->g_144;
            for (l_95 = (-16); (l_95 < 50); l_95 = safe_add_func_int32_t_s_s(l_95, 5))
            { /* block id: 57 */
                uint8_t l_155 = 0x06L;
                int32_t l_163 = 0x3A4BFDF7L;
                int16_t l_179 = 1L;
                int32_t l_181 = 1L;
                int32_t l_182[6];
                int32_t *l_207[4][4] = {{&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166}};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_182[i] = 0x4DF13435L;
                for (p_572->g_61.f1 = (-19); (p_572->g_61.f1 >= 5); p_572->g_61.f1++)
                { /* block id: 60 */
                    int16_t l_164 = 0x5F1BL;
                    int32_t l_171 = (-3L);
                    l_155--;
                    for (l_139 = 10; (l_139 != 8); l_139--)
                    { /* block id: 64 */
                        int64_t l_169 = 0x230042110810DBFEL;
                        int8_t l_172 = 1L;
                        int32_t l_180 = (-2L);
                        int32_t l_183 = (-1L);
                        int32_t l_184[9][1][3] = {{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}},{{0x1B24F8DDL,0x1B24F8DDL,0x1B24F8DDL}}};
                        int64_t l_185[6][9] = {{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L},{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L},{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L},{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L},{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L},{9L,6L,0x38087D1A7AC5B852L,1L,0x38087D1A7AC5B852L,6L,9L,8L,0L}};
                        VECTOR(uint16_t, 8) l_186 = (VECTOR(uint16_t, 8))(0xB757L, (VECTOR(uint16_t, 4))(0xB757L, (VECTOR(uint16_t, 2))(0xB757L, 0x27C7L), 0x27C7L), 0x27C7L, 0xB757L, 0x27C7L);
                        int i, j, k;
                        (*p_572->g_162) = p_572->g_160;
                        l_173--;
                        (*p_572->g_177) = l_176[0];
                        l_186.s7--;
                    }
                    l_167 = (0xD3L < (safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 2))], 9UL)), (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((p_572->g_205 |= (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_95, ((((safe_mod_func_uint8_t_u_u((0x8AL <= ((safe_lshift_func_uint16_t_u_s((p_572->g_203 , (l_168 & p_572->g_115.s1)), (l_181 != 1UL))) >= l_95)), l_204)) < p_572->g_59.x) <= p_49) , (-1L)), l_182[5], 0x32C95BC6L, ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 4))(3L)), ((VECTOR(int32_t, 2))(1L)), (-2L), 0x622F4319L)).sf, l_171))), l_166)), p_572->g_161.f0)))));
                    return l_206;
                }
                l_207[1][1] = &l_168;
            }
            l_165 ^= (p_572->g_59.y ^= ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((~(safe_rshift_func_int16_t_s_u((l_139 > p_572->g_61.f0), (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(p_572->g_216.zyzzyyyzwyxwzwwx)).se, (((l_68[4][1][0] = l_121) != (l_217[6][3][4] = &p_572->g_69[7][2][0])) != p_49)))))) == ((safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((l_222 != (void*)0), (safe_lshift_func_int16_t_s_s(p_572->g_103.f0, (0x44L == (*p_572->g_120)))))), p_572->g_69[5][1][0])) > 6L)), 6UL)), p_572->g_86)) | l_166));
            p_572->g_26 = &p_572->g_205;
        }
        else
        { /* block id: 81 */
            int64_t l_226[10] = {0x6EAAE325C52ABAA0L,0L,0L,0L,0x6EAAE325C52ABAA0L,0x6EAAE325C52ABAA0L,0L,0L,0L,0x6EAAE325C52ABAA0L};
            int32_t l_271 = 1L;
            uint8_t l_314 = 255UL;
            int32_t *l_344[4][1][2] = {{{&p_572->g_345,&p_572->g_345}},{{&p_572->g_345,&p_572->g_345}},{{&p_572->g_345,&p_572->g_345}},{{&p_572->g_345,&p_572->g_345}}};
            uint8_t *l_346[8];
            int16_t *l_347[5];
            int32_t l_349 = 0x7A181BADL;
            int16_t l_382 = 0x2148L;
            int32_t l_412[7] = {0x6E21CD85L,0x6E21CD85L,0x6E21CD85L,0x6E21CD85L,0x6E21CD85L,0x6E21CD85L,0x6E21CD85L};
            uint8_t l_421 = 1UL;
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_346[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_347[i] = &l_149;
            if ((l_168 = (l_95 < l_226[3])))
            { /* block id: 83 */
                VECTOR(int16_t, 8) l_234 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L);
                int32_t l_261 = 0x5C364FBAL;
                union U2 **l_269 = &l_60;
                VECTOR(int8_t, 16) l_275 = (VECTOR(int8_t, 16))(0x49L, (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 0x3FL), 0x3FL), 0x3FL, 0x49L, 0x3FL, (VECTOR(int8_t, 2))(0x49L, 0x3FL), (VECTOR(int8_t, 2))(0x49L, 0x3FL), 0x49L, 0x3FL, 0x49L, 0x3FL);
                uint32_t l_276 = 0xB3579C4FL;
                int i;
                for (l_165 = 0; (l_165 > 6); l_165 = safe_add_func_int8_t_s_s(l_165, 3))
                { /* block id: 86 */
                    uint64_t l_244 = 7UL;
                    int32_t l_245 = (-5L);
                    uint32_t ***l_256 = &l_124;
                    union U2 **l_266 = &l_72;
                    int32_t l_272 = 0L;
                    uint32_t l_294 = 0x25D473E1L;
                    int16_t l_295 = (-1L);
                    if (p_49)
                        break;
                    p_572->g_27.x ^= (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((~(l_245 ^= (((VECTOR(uint8_t, 8))(p_572->g_233.wwxxywyw)).s2 | ((*l_118) = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_49, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((-1L), 0x56EAL, 8L, ((VECTOR(int16_t, 4))(l_234.s1723)), 3L)).s31)), ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(p_572->g_235.sdb94)).even, ((VECTOR(int16_t, 4))(p_572->g_236.zxyy)).hi))), ((((safe_add_func_int32_t_s_s(((p_572->g_239 , (void*)0) == (void*)0), ((safe_sub_func_int16_t_s_s((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, (-1L))), 0x2FD29CBA65D713EDL, 0x09E3AFAC9E9ED231L)))).x ^ p_572->g_83) , (safe_lshift_func_uint8_t_u_u(l_244, 5))) , l_244), 1UL)) , 0xE012E589L))) == 1UL) , l_226[8]) == l_165), ((VECTOR(int16_t, 8))(1L)), 0x37C3L, 0L)).sf954)).w >= p_49))))), l_246)), l_226[0]));
                    if (p_572->g_236.x)
                        break;
                    for (l_246 = 1; (l_246 > 60); l_246++)
                    { /* block id: 94 */
                        uint64_t *l_270[10][7] = {{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0},{&l_244,&l_244,&l_139,&l_244,&l_139,(void*)0,(void*)0}};
                        int32_t l_277 = 9L;
                        int16_t *l_289 = &p_572->g_83;
                        int i, j;
                        if (l_245)
                            break;
                        p_572->g_258.x = ((safe_mod_func_int32_t_s_s(((safe_div_func_int64_t_s_s((((((VECTOR(int8_t, 8))(p_572->g_253.s24543317)).s2 == (((+(safe_rshift_func_int8_t_s_u((*p_572->g_120), 0))) , l_256) != (((((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_257.s37054102)).s0075074416655563)).lo, ((VECTOR(int32_t, 16))(p_572->g_258.zxwxzywzxzwyzwzw)).odd, ((VECTOR(int32_t, 16))((((safe_add_func_uint32_t_u_u((--(***l_256)), p_49)) <= ((safe_sub_func_int64_t_s_s((l_266 != ((l_267 != (((*p_572->g_160) = (*p_572->g_160)) , l_267)) , l_269)), (l_271 = (((0x937F4E08CBFA4120L | 0x159F013895B77DECL) <= l_95) & FAKE_DIVERGE(p_572->local_2_offset, get_local_id(2), 10))))) < (*p_572->g_120))) || 0x3465385CL), l_245, 0L, p_49, ((VECTOR(int32_t, 8))(0L)), (-4L), ((VECTOR(int32_t, 2))((-1L))), 0x569AF1FDL)).odd))).s00, ((VECTOR(int32_t, 2))(0x2409AEBDL))))).yyxxyxyyyxyyxxxy)).hi, ((VECTOR(int32_t, 8))(8L)), ((VECTOR(int32_t, 8))(0x7893A2BEL))))), (-4L), p_49, ((VECTOR(int32_t, 2))(0x44AD2A17L)), 1L, ((VECTOR(int32_t, 2))(1L)), 0x4D222F85L)))), ((VECTOR(int32_t, 16))(0x445B1799L)), ((VECTOR(int32_t, 16))(0x5A4CC547L))))), ((VECTOR(int32_t, 16))(0x408B8954L))))), ((VECTOR(int32_t, 16))(0L))))).sf < 0x4A3021A6L) , (-4L)) , (void*)0))) & p_572->g_27.y) && l_168), p_49)) > 4L), l_234.s7)) <= 0x7216L);
                        p_572->g_59.y |= (l_272 = l_271);
                        l_168 = (p_572->g_59.x = (p_572->l_comm_values[(safe_mod_func_uint32_t_u_u(p_572->tid, 2))] <= ((safe_mul_func_uint16_t_u_u(p_49, (((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_275.s3a69)).hi))))))).even >= l_276) ^ l_277) >= (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((l_261 = (!(p_572->g_216.x = 0x2F18L))) > (safe_mul_func_uint16_t_u_u((p_572->g_293 = ((-4L) | (safe_rshift_func_int16_t_s_u(((*l_289) ^= (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(l_275.se)), 1))), (~(((((safe_add_func_int16_t_s_s(p_572->g_268.f0, p_49)) , p_572->g_292) & 0x43L) != p_572->g_57.s2) >= p_572->g_239.f0)))))), p_572->g_235.sc))), 5L)), l_294))))) != l_295)));
                    }
                }
                p_572->g_27.y |= 0x0D3A472BL;
                l_296 = (p_572->g_258.x = 0L);
            }
            else
            { /* block id: 113 */
                uint32_t l_301 = 0xC5DBEE81L;
                int64_t *l_306[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint64_t *l_307 = &l_139;
                int32_t l_309 = 0x69963AD5L;
                int i;
                l_309 |= (p_49 ^ (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((-1L), (p_572->g_297 , (safe_unary_minus_func_uint8_t_u(255UL))), 0x3CL, 0x2EL, (-1L), 0x13L, 2L, ((safe_sub_func_int16_t_s_s((((*l_307) = (l_301 , (FAKE_DIVERGE(p_572->local_2_offset, get_local_id(2), 10) ^ (p_572->g_comm_values[p_572->tid] = (safe_lshift_func_uint8_t_u_u(((-6L) ^ p_572->g_253.s7), ((!(((((((void*)0 != &p_572->g_26) , (safe_div_func_uint64_t_u_u(p_572->g_27.x, FAKE_DIVERGE(p_572->group_1_offset, get_group_id(1), 10)))) < (*p_572->g_120)) || p_49) < FAKE_DIVERGE(p_572->global_2_offset, get_global_id(2), 10)) || 4294967288UL)) >= p_49))))))) <= l_308), p_49)) != p_49), 0x15L, 1L, 0x00L, p_49, 0x4CL, 0x13L, 0x7EL, 7L)).lo)).s5 == GROUP_DIVERGE(2, 1)));
            }
            if ((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_314 == (safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(0x77E2210C2C05A03AL, (((p_572->g_319 != &p_572->g_320[4][3][1]) > (p_572->g_235.s7 = (FAKE_DIVERGE(p_572->local_1_offset, get_local_id(1), 10) && ((VECTOR(int32_t, 16))(((void*)0 != &p_572->g_205), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_321.xyyxyyxx)).s14)), (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_271 = ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 8))(65532UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_329.s1865fc83)).s01)), ((p_572->g_216.y , (safe_add_func_uint64_t_u_u(((*p_572->g_342) = (safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_572->g_27.x, ((l_321.x = (p_572->g_343 &= (((safe_mul_func_int8_t_s_s(((*p_572->g_120) &= (safe_mul_func_int8_t_s_s(p_49, p_49))), p_572->g_258.w)) , p_572->g_340) != p_572->g_342))) , 2L))), p_49))), p_572->g_345))) != 0x7011L), p_49, p_572->g_216.y, 0x644BL, 0x292CL)).s0)) > p_572->g_345)), l_314)), FAKE_DIVERGE(p_572->group_0_offset, get_group_id(0), 10))) , 0x05DCL), p_49)), ((VECTOR(int32_t, 2))((-2L))), p_572->g_216.y, 0x366470C1L, 6L, 0x76C30EC9L, 0x6D721803L, 0L, p_49, 1L, 0x5D1637CFL, 0L)).sa))) && p_572->g_239.f0))), p_49))) || p_572->g_144.f0), l_329.s3)), p_49)))
            { /* block id: 124 */
                uint16_t l_350 = 1UL;
                int32_t *l_357 = (void*)0;
                VECTOR(uint8_t, 8) l_374 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x23L), 0x23L), 0x23L, 247UL, 0x23L);
                uint16_t l_376 = 65535UL;
                uint8_t l_380 = 4UL;
                VECTOR(uint8_t, 2) l_384 = (VECTOR(uint8_t, 2))(0xEEL, 0x69L);
                union U1 l_385[9] = {{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL},{0x4ADBL}};
                union U0 **l_388 = &l_222;
                int32_t l_415 = (-2L);
                int32_t l_418 = 0L;
                int32_t l_420 = (-4L);
                VECTOR(int32_t, 2) l_424 = (VECTOR(int32_t, 2))(1L, 0x476B54B4L);
                int i;
                --l_350;
                if ((&p_572->g_341 == l_353))
                { /* block id: 126 */
                    uint32_t l_354 = 5UL;
                    l_165 |= p_49;
                    --l_354;
                    return l_357;
                }
                else
                { /* block id: 130 */
                    VECTOR(int16_t, 16) l_379 = (VECTOR(int16_t, 16))(0x7C8BL, (VECTOR(int16_t, 4))(0x7C8BL, (VECTOR(int16_t, 2))(0x7C8BL, 0x1D74L), 0x1D74L), 0x1D74L, 0x7C8BL, 0x1D74L, (VECTOR(int16_t, 2))(0x7C8BL, 0x1D74L), (VECTOR(int16_t, 2))(0x7C8BL, 0x1D74L), 0x7C8BL, 0x1D74L, 0x7C8BL, 0x1D74L);
                    VECTOR(uint16_t, 4) l_383 = (VECTOR(uint16_t, 4))(0x44CDL, (VECTOR(uint16_t, 2))(0x44CDL, 0x4CEAL), 0x4CEAL);
                    int32_t l_403 = 0x1DB3B173L;
                    int32_t l_404 = (-7L);
                    int32_t l_411[6] = {0x2AFFA064L,0L,0x2AFFA064L,0x2AFFA064L,0L,0x2AFFA064L};
                    int i;
                    l_271 = (safe_mul_func_int16_t_s_s((+(~(p_572->g_161.f0 = ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_572->global_1_offset, get_global_id(1), 10), ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((*p_572->g_160) , ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((*p_572->g_340) , ((VECTOR(uint8_t, 8))(l_374.s17631164)).s5) , (((VECTOR(uint16_t, 16))(p_572->g_375.zwxxwywyyyxyzxzy)).s9 , ((VECTOR(uint16_t, 2))(65531UL, 0x258EL)).odd)), (l_376 || (((VECTOR(int64_t, 8))(((p_49 | (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_379.s7827f66a1259b346)).s5, GROUP_DIVERGE(0, 1)))) <= l_380), 0x1AC1DE3F0D4D64ECL, ((VECTOR(int64_t, 4))(l_381.yyyx)), 8L, 0x5C3F3B8ECD33E0ACL)).s2 <= (l_379.se , l_382))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_383.yzzwwyzyzyxxzzyw)).s0d)).lo)) || ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(l_384.yxyxxxxy)).s66, ((VECTOR(uint8_t, 2))(0UL, 255UL))))).lo)), (l_385[8] , 0x333F1206L))), 0x60DD5479L)) > 0x14L))), 1)), p_49)) & l_349)))), p_49));
                    if (((safe_add_func_int8_t_s_s((*p_572->g_120), GROUP_DIVERGE(1, 1))) , 0x7BC36D1EL))
                    { /* block id: 133 */
                        int16_t **l_391 = &l_347[1];
                        int16_t *l_393[2];
                        int16_t **l_392[10][8][3] = {{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}},{{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]},{&l_393[0],&l_393[0],&l_393[0]}}};
                        uint32_t *l_400 = &p_572->g_61.f1;
                        uint32_t *l_401 = &p_572->g_61.f1;
                        uint32_t *l_402 = &l_79;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_393[i] = &l_133[0][4][5].f0;
                        l_404 |= ((l_379.s0 < (l_403 = ((0x1480F9DEL < p_572->g_341) > (((((void*)0 == l_388) ^ (l_168 = (((*l_402) |= ((safe_sub_func_int32_t_s_s((((l_394 = ((*l_391) = &p_572->g_83)) == &l_308) <= ((VECTOR(int32_t, 8))((-3L), 2L, 1L, (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0x55C4L, 0x1D5CL)), 4)) ^ p_572->g_83) > FAKE_DIVERGE(p_572->global_2_offset, get_global_id(2), 10)), 0x51B255A0L, p_49, 0L, 0L)).s2), p_572->g_233.z)) > l_399[0])) , 0UL))) , (*p_572->g_342)) > FAKE_DIVERGE(p_572->global_2_offset, get_global_id(2), 10))))) && p_572->g_343);
                        (*l_388) = (*p_572->g_177);
                    }
                    else
                    { /* block id: 141 */
                        l_405 = &p_572->g_205;
                        --p_572->g_406[0][1][3];
                    }
                    for (l_70 = 12; (l_70 == 27); ++l_70)
                    { /* block id: 147 */
                        int32_t l_413 = 0x0B91C37EL;
                        int32_t l_414 = 0L;
                        int32_t l_416 = 7L;
                        int32_t l_417 = 0x25F220E5L;
                        int32_t l_419[10][6] = {{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L},{0x008AC907L,0L,1L,7L,1L,0L}};
                        int i, j;
                        --l_421;
                        l_405 = &p_572->g_205;
                    }
                    l_168 = (p_572->g_comm_values[p_572->tid] && (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_424.xxxxyxxyxyyxxxyy)).scc08, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(1L, (-6L), 0x0189E5B4L, 0L))))))).zzzxywwwzyyxxzwy)).s6 == ((**l_124)--)));
                }
                l_412[1] = (-1L);
            }
            else
            { /* block id: 155 */
                int16_t l_427 = 0x5B12L;
                int32_t l_428[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_428[i] = 1L;
                l_427 |= (p_49 <= p_572->g_343);
                --l_429;
                --l_432[0][5];
            }
        }
        if ((atomic_inc(&p_572->l_atomic_input[31]) == 9))
        { /* block id: 162 */
            int32_t l_436 = (-1L);
            int32_t *l_435 = &l_436;
            int32_t *l_437[2];
            uint64_t l_438 = 0UL;
            uint32_t l_441 = 0x3455DF97L;
            uint16_t l_444 = 0x026AL;
            int i;
            for (i = 0; i < 2; i++)
                l_437[i] = &l_436;
            l_437[1] = l_435;
            l_438--;
            ++l_441;
            if (l_444)
            { /* block id: 166 */
                (*l_435) = 0x5DEC6CEBL;
            }
            else
            { /* block id: 168 */
                int8_t l_445 = 0x57L;
                (*l_435) = l_445;
            }
            unsigned int result = 0;
            result += l_436;
            result += l_438;
            result += l_441;
            result += l_444;
            atomic_add(&p_572->l_special_values[31], result);
        }
        else
        { /* block id: 171 */
            (1 + 1);
        }
    }
    return &p_572->g_205;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[62];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 62; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[62];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 62; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S3 c_573;
    struct S3* p_572 = &c_573;
    struct S3 c_574 = {
        (VECTOR(int32_t, 2))(0x1BB35B68L, 0x35300547L), // p_572->g_27
        (void*)0, // p_572->g_26
        (VECTOR(uint16_t, 16))(0xA2B8L, (VECTOR(uint16_t, 4))(0xA2B8L, (VECTOR(uint16_t, 2))(0xA2B8L, 0x1485L), 0x1485L), 0x1485L, 0xA2B8L, 0x1485L, (VECTOR(uint16_t, 2))(0xA2B8L, 0x1485L), (VECTOR(uint16_t, 2))(0xA2B8L, 0x1485L), 0xA2B8L, 0x1485L, 0xA2B8L, 0x1485L), // p_572->g_57
        (VECTOR(int32_t, 2))((-10L), 0x4EB9534DL), // p_572->g_59
        {1UL}, // p_572->g_61
        {{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}},{{(-3L)},{(-3L)},{(-3L)},{(-3L)}}}, // p_572->g_69
        1L, // p_572->g_83
        0xCAC18070L, // p_572->g_86
        {7UL}, // p_572->g_103
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_572->g_114
        (VECTOR(int16_t, 8))(0x190DL, (VECTOR(int16_t, 4))(0x190DL, (VECTOR(int16_t, 2))(0x190DL, 0x1A5DL), 0x1A5DL), 0x1A5DL, 0x190DL, 0x1A5DL), // p_572->g_115
        &p_572->g_69[5][0][0], // p_572->g_120
        {0x7C6EF001L}, // p_572->g_144
        {0x6F00L}, // p_572->g_161
        &p_572->g_161, // p_572->g_160
        &p_572->g_160, // p_572->g_162
        {{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}},{{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103},{&p_572->g_144,&p_572->g_103}}}, // p_572->g_178
        &p_572->g_178[5][5][1], // p_572->g_177
        {1UL}, // p_572->g_203
        9L, // p_572->g_205
        (VECTOR(uint16_t, 4))(0x0267L, (VECTOR(uint16_t, 2))(0x0267L, 0xF3BBL), 0xF3BBL), // p_572->g_216
        {0x7EF0A5C0L}, // p_572->g_223
        (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 255UL), 255UL), // p_572->g_233
        (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x69B4L), 0x69B4L), 0x69B4L, (-2L), 0x69B4L, (VECTOR(int16_t, 2))((-2L), 0x69B4L), (VECTOR(int16_t, 2))((-2L), 0x69B4L), (-2L), 0x69B4L, (-2L), 0x69B4L), // p_572->g_235
        (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L), // p_572->g_236
        {4294967295UL}, // p_572->g_239
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_572->g_253
        (VECTOR(int32_t, 4))(0x0B7CAE24L, (VECTOR(int32_t, 2))(0x0B7CAE24L, 0x18141A13L), 0x18141A13L), // p_572->g_258
        {0xA1F0ADB6L}, // p_572->g_268
        (-1L), // p_572->g_292
        0x7F692CF5L, // p_572->g_293
        {0UL}, // p_572->g_297
        {{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}},{{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61},{&p_572->g_61,&p_572->g_61,&p_572->g_61}}}, // p_572->g_320
        &p_572->g_320[4][3][1], // p_572->g_319
        18446744073709551608UL, // p_572->g_341
        &p_572->g_341, // p_572->g_340
        &p_572->g_341, // p_572->g_342
        0x42L, // p_572->g_343
        0x25A5D15FL, // p_572->g_345
        (VECTOR(uint16_t, 4))(0x3913L, (VECTOR(uint16_t, 2))(0x3913L, 0UL), 0UL), // p_572->g_375
        {{{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L},{0x7CAD3CB1L,4294967295UL,0xFB132041L,1UL,0xE539DC15L,1UL,0xFB132041L,4294967295UL,0x7CAD3CB1L,0xFB132041L}}}, // p_572->g_406
        0x1641L, // p_572->g_451
        {-9L}, // p_572->g_458
        {0x237DB2EBL}, // p_572->g_467
        {0x24024D2CL}, // p_572->g_469
        (void*)0, // p_572->g_477
        (void*)0, // p_572->g_480
        &p_572->g_26, // p_572->g_481
        &p_572->g_205, // p_572->g_485
        {0x3B966033L}, // p_572->g_490
        (void*)0, // p_572->g_517
        (void*)0, // p_572->g_518
        (VECTOR(uint32_t, 4))(0x0B9EEF0FL, (VECTOR(uint32_t, 2))(0x0B9EEF0FL, 0x073EB253L), 0x073EB253L), // p_572->g_523
        (VECTOR(int64_t, 8))(0x3EEFFC401F432DF5L, (VECTOR(int64_t, 4))(0x3EEFFC401F432DF5L, (VECTOR(int64_t, 2))(0x3EEFFC401F432DF5L, 0L), 0L), 0L, 0x3EEFFC401F432DF5L, 0L), // p_572->g_531
        (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xE7FEE352L), 0xE7FEE352L), 0xE7FEE352L, 4294967289UL, 0xE7FEE352L), // p_572->g_544
        (void*)0, // p_572->g_549
        0, // p_572->v_collective
        sequence_input[get_global_id(0)], // p_572->global_0_offset
        sequence_input[get_global_id(1)], // p_572->global_1_offset
        sequence_input[get_global_id(2)], // p_572->global_2_offset
        sequence_input[get_local_id(0)], // p_572->local_0_offset
        sequence_input[get_local_id(1)], // p_572->local_1_offset
        sequence_input[get_local_id(2)], // p_572->local_2_offset
        sequence_input[get_group_id(0)], // p_572->group_0_offset
        sequence_input[get_group_id(1)], // p_572->group_1_offset
        sequence_input[get_group_id(2)], // p_572->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_572->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_573 = c_574;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_572);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_572->g_27.x, "p_572->g_27.x", print_hash_value);
    transparent_crc(p_572->g_27.y, "p_572->g_27.y", print_hash_value);
    transparent_crc(p_572->g_57.s0, "p_572->g_57.s0", print_hash_value);
    transparent_crc(p_572->g_57.s1, "p_572->g_57.s1", print_hash_value);
    transparent_crc(p_572->g_57.s2, "p_572->g_57.s2", print_hash_value);
    transparent_crc(p_572->g_57.s3, "p_572->g_57.s3", print_hash_value);
    transparent_crc(p_572->g_57.s4, "p_572->g_57.s4", print_hash_value);
    transparent_crc(p_572->g_57.s5, "p_572->g_57.s5", print_hash_value);
    transparent_crc(p_572->g_57.s6, "p_572->g_57.s6", print_hash_value);
    transparent_crc(p_572->g_57.s7, "p_572->g_57.s7", print_hash_value);
    transparent_crc(p_572->g_57.s8, "p_572->g_57.s8", print_hash_value);
    transparent_crc(p_572->g_57.s9, "p_572->g_57.s9", print_hash_value);
    transparent_crc(p_572->g_57.sa, "p_572->g_57.sa", print_hash_value);
    transparent_crc(p_572->g_57.sb, "p_572->g_57.sb", print_hash_value);
    transparent_crc(p_572->g_57.sc, "p_572->g_57.sc", print_hash_value);
    transparent_crc(p_572->g_57.sd, "p_572->g_57.sd", print_hash_value);
    transparent_crc(p_572->g_57.se, "p_572->g_57.se", print_hash_value);
    transparent_crc(p_572->g_57.sf, "p_572->g_57.sf", print_hash_value);
    transparent_crc(p_572->g_59.x, "p_572->g_59.x", print_hash_value);
    transparent_crc(p_572->g_59.y, "p_572->g_59.y", print_hash_value);
    transparent_crc(p_572->g_61.f0, "p_572->g_61.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_572->g_69[i][j][k], "p_572->g_69[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_572->g_83, "p_572->g_83", print_hash_value);
    transparent_crc(p_572->g_86, "p_572->g_86", print_hash_value);
    transparent_crc(p_572->g_103.f0, "p_572->g_103.f0", print_hash_value);
    transparent_crc(p_572->g_114.s0, "p_572->g_114.s0", print_hash_value);
    transparent_crc(p_572->g_114.s1, "p_572->g_114.s1", print_hash_value);
    transparent_crc(p_572->g_114.s2, "p_572->g_114.s2", print_hash_value);
    transparent_crc(p_572->g_114.s3, "p_572->g_114.s3", print_hash_value);
    transparent_crc(p_572->g_114.s4, "p_572->g_114.s4", print_hash_value);
    transparent_crc(p_572->g_114.s5, "p_572->g_114.s5", print_hash_value);
    transparent_crc(p_572->g_114.s6, "p_572->g_114.s6", print_hash_value);
    transparent_crc(p_572->g_114.s7, "p_572->g_114.s7", print_hash_value);
    transparent_crc(p_572->g_115.s0, "p_572->g_115.s0", print_hash_value);
    transparent_crc(p_572->g_115.s1, "p_572->g_115.s1", print_hash_value);
    transparent_crc(p_572->g_115.s2, "p_572->g_115.s2", print_hash_value);
    transparent_crc(p_572->g_115.s3, "p_572->g_115.s3", print_hash_value);
    transparent_crc(p_572->g_115.s4, "p_572->g_115.s4", print_hash_value);
    transparent_crc(p_572->g_115.s5, "p_572->g_115.s5", print_hash_value);
    transparent_crc(p_572->g_115.s6, "p_572->g_115.s6", print_hash_value);
    transparent_crc(p_572->g_115.s7, "p_572->g_115.s7", print_hash_value);
    transparent_crc(p_572->g_144.f0, "p_572->g_144.f0", print_hash_value);
    transparent_crc(p_572->g_161.f0, "p_572->g_161.f0", print_hash_value);
    transparent_crc(p_572->g_203.f0, "p_572->g_203.f0", print_hash_value);
    transparent_crc(p_572->g_205, "p_572->g_205", print_hash_value);
    transparent_crc(p_572->g_216.x, "p_572->g_216.x", print_hash_value);
    transparent_crc(p_572->g_216.y, "p_572->g_216.y", print_hash_value);
    transparent_crc(p_572->g_216.z, "p_572->g_216.z", print_hash_value);
    transparent_crc(p_572->g_216.w, "p_572->g_216.w", print_hash_value);
    transparent_crc(p_572->g_223.f0, "p_572->g_223.f0", print_hash_value);
    transparent_crc(p_572->g_233.x, "p_572->g_233.x", print_hash_value);
    transparent_crc(p_572->g_233.y, "p_572->g_233.y", print_hash_value);
    transparent_crc(p_572->g_233.z, "p_572->g_233.z", print_hash_value);
    transparent_crc(p_572->g_233.w, "p_572->g_233.w", print_hash_value);
    transparent_crc(p_572->g_235.s0, "p_572->g_235.s0", print_hash_value);
    transparent_crc(p_572->g_235.s1, "p_572->g_235.s1", print_hash_value);
    transparent_crc(p_572->g_235.s2, "p_572->g_235.s2", print_hash_value);
    transparent_crc(p_572->g_235.s3, "p_572->g_235.s3", print_hash_value);
    transparent_crc(p_572->g_235.s4, "p_572->g_235.s4", print_hash_value);
    transparent_crc(p_572->g_235.s5, "p_572->g_235.s5", print_hash_value);
    transparent_crc(p_572->g_235.s6, "p_572->g_235.s6", print_hash_value);
    transparent_crc(p_572->g_235.s7, "p_572->g_235.s7", print_hash_value);
    transparent_crc(p_572->g_235.s8, "p_572->g_235.s8", print_hash_value);
    transparent_crc(p_572->g_235.s9, "p_572->g_235.s9", print_hash_value);
    transparent_crc(p_572->g_235.sa, "p_572->g_235.sa", print_hash_value);
    transparent_crc(p_572->g_235.sb, "p_572->g_235.sb", print_hash_value);
    transparent_crc(p_572->g_235.sc, "p_572->g_235.sc", print_hash_value);
    transparent_crc(p_572->g_235.sd, "p_572->g_235.sd", print_hash_value);
    transparent_crc(p_572->g_235.se, "p_572->g_235.se", print_hash_value);
    transparent_crc(p_572->g_235.sf, "p_572->g_235.sf", print_hash_value);
    transparent_crc(p_572->g_236.x, "p_572->g_236.x", print_hash_value);
    transparent_crc(p_572->g_236.y, "p_572->g_236.y", print_hash_value);
    transparent_crc(p_572->g_236.z, "p_572->g_236.z", print_hash_value);
    transparent_crc(p_572->g_236.w, "p_572->g_236.w", print_hash_value);
    transparent_crc(p_572->g_239.f0, "p_572->g_239.f0", print_hash_value);
    transparent_crc(p_572->g_253.s0, "p_572->g_253.s0", print_hash_value);
    transparent_crc(p_572->g_253.s1, "p_572->g_253.s1", print_hash_value);
    transparent_crc(p_572->g_253.s2, "p_572->g_253.s2", print_hash_value);
    transparent_crc(p_572->g_253.s3, "p_572->g_253.s3", print_hash_value);
    transparent_crc(p_572->g_253.s4, "p_572->g_253.s4", print_hash_value);
    transparent_crc(p_572->g_253.s5, "p_572->g_253.s5", print_hash_value);
    transparent_crc(p_572->g_253.s6, "p_572->g_253.s6", print_hash_value);
    transparent_crc(p_572->g_253.s7, "p_572->g_253.s7", print_hash_value);
    transparent_crc(p_572->g_258.x, "p_572->g_258.x", print_hash_value);
    transparent_crc(p_572->g_258.y, "p_572->g_258.y", print_hash_value);
    transparent_crc(p_572->g_258.z, "p_572->g_258.z", print_hash_value);
    transparent_crc(p_572->g_258.w, "p_572->g_258.w", print_hash_value);
    transparent_crc(p_572->g_268.f0, "p_572->g_268.f0", print_hash_value);
    transparent_crc(p_572->g_292, "p_572->g_292", print_hash_value);
    transparent_crc(p_572->g_293, "p_572->g_293", print_hash_value);
    transparent_crc(p_572->g_297.f0, "p_572->g_297.f0", print_hash_value);
    transparent_crc(p_572->g_341, "p_572->g_341", print_hash_value);
    transparent_crc(p_572->g_343, "p_572->g_343", print_hash_value);
    transparent_crc(p_572->g_345, "p_572->g_345", print_hash_value);
    transparent_crc(p_572->g_375.x, "p_572->g_375.x", print_hash_value);
    transparent_crc(p_572->g_375.y, "p_572->g_375.y", print_hash_value);
    transparent_crc(p_572->g_375.z, "p_572->g_375.z", print_hash_value);
    transparent_crc(p_572->g_375.w, "p_572->g_375.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_572->g_406[i][j][k], "p_572->g_406[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_572->g_451, "p_572->g_451", print_hash_value);
    transparent_crc(p_572->g_458.f0, "p_572->g_458.f0", print_hash_value);
    transparent_crc(p_572->g_467.f0, "p_572->g_467.f0", print_hash_value);
    transparent_crc(p_572->g_469.f0, "p_572->g_469.f0", print_hash_value);
    transparent_crc(p_572->g_490.f0, "p_572->g_490.f0", print_hash_value);
    transparent_crc(p_572->g_523.x, "p_572->g_523.x", print_hash_value);
    transparent_crc(p_572->g_523.y, "p_572->g_523.y", print_hash_value);
    transparent_crc(p_572->g_523.z, "p_572->g_523.z", print_hash_value);
    transparent_crc(p_572->g_523.w, "p_572->g_523.w", print_hash_value);
    transparent_crc(p_572->g_531.s0, "p_572->g_531.s0", print_hash_value);
    transparent_crc(p_572->g_531.s1, "p_572->g_531.s1", print_hash_value);
    transparent_crc(p_572->g_531.s2, "p_572->g_531.s2", print_hash_value);
    transparent_crc(p_572->g_531.s3, "p_572->g_531.s3", print_hash_value);
    transparent_crc(p_572->g_531.s4, "p_572->g_531.s4", print_hash_value);
    transparent_crc(p_572->g_531.s5, "p_572->g_531.s5", print_hash_value);
    transparent_crc(p_572->g_531.s6, "p_572->g_531.s6", print_hash_value);
    transparent_crc(p_572->g_531.s7, "p_572->g_531.s7", print_hash_value);
    transparent_crc(p_572->g_544.s0, "p_572->g_544.s0", print_hash_value);
    transparent_crc(p_572->g_544.s1, "p_572->g_544.s1", print_hash_value);
    transparent_crc(p_572->g_544.s2, "p_572->g_544.s2", print_hash_value);
    transparent_crc(p_572->g_544.s3, "p_572->g_544.s3", print_hash_value);
    transparent_crc(p_572->g_544.s4, "p_572->g_544.s4", print_hash_value);
    transparent_crc(p_572->g_544.s5, "p_572->g_544.s5", print_hash_value);
    transparent_crc(p_572->g_544.s6, "p_572->g_544.s6", print_hash_value);
    transparent_crc(p_572->g_544.s7, "p_572->g_544.s7", print_hash_value);
    transparent_crc(p_572->v_collective, "p_572->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 62; i++)
            transparent_crc(p_572->g_special_values[i + 62 * get_linear_group_id()], "p_572->g_special_values[i + 62 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 62; i++)
            transparent_crc(p_572->l_special_values[i], "p_572->l_special_values[i]", print_hash_value);
    transparent_crc(p_572->l_comm_values[get_linear_local_id()], "p_572->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_572->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_572->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
