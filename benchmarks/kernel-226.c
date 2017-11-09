// --atomics 40 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,69,1 -l 51,1,1
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

__constant uint32_t permutations[10][51] = {
{50,43,47,6,0,39,12,5,27,29,18,41,1,14,49,38,23,16,9,31,3,11,33,48,4,32,15,34,7,40,26,45,25,44,35,17,30,20,19,36,28,13,46,2,21,24,10,8,42,37,22}, // permutation 0
{28,0,10,16,22,35,46,20,31,43,44,7,38,48,4,42,37,29,2,32,11,19,39,15,50,40,47,27,13,33,36,3,25,30,45,14,26,49,23,34,1,6,8,9,41,18,5,12,24,21,17}, // permutation 1
{18,19,43,28,4,5,36,13,9,16,35,10,22,49,6,1,39,8,12,7,3,27,30,15,46,44,34,23,31,42,20,24,38,41,37,45,11,26,48,21,40,0,14,47,50,25,2,17,33,32,29}, // permutation 2
{14,6,15,7,0,30,2,33,46,25,23,20,16,32,47,4,35,31,39,17,24,22,44,9,5,49,50,28,41,3,26,45,13,37,21,10,38,11,36,12,1,8,27,34,48,18,42,40,43,29,19}, // permutation 3
{26,23,13,40,15,37,30,47,28,18,6,27,25,32,35,14,0,11,34,21,39,33,48,36,4,29,8,17,1,49,42,7,45,22,43,31,50,9,3,12,38,44,41,20,10,24,46,2,5,19,16}, // permutation 4
{16,17,6,26,10,21,33,29,41,9,2,43,3,36,24,38,30,47,4,5,35,20,1,25,39,32,44,48,46,45,28,15,40,31,12,42,14,23,0,34,19,22,49,11,18,8,7,37,13,27,50}, // permutation 5
{21,11,24,1,46,19,40,36,41,3,28,22,45,37,23,16,33,13,48,8,6,50,35,4,20,7,5,2,12,26,31,18,32,30,49,15,0,43,39,9,14,47,38,44,25,29,17,27,10,42,34}, // permutation 6
{15,28,25,4,40,24,3,46,36,6,29,1,44,30,22,37,41,13,43,35,21,38,48,12,23,50,0,26,2,27,49,11,47,5,20,18,7,8,16,9,42,32,45,31,17,19,14,33,39,10,34}, // permutation 7
{7,37,28,44,18,47,9,31,34,16,32,17,6,43,20,19,10,0,15,46,24,35,41,14,48,29,49,4,42,45,40,25,38,36,11,23,2,22,12,1,5,13,8,33,30,50,27,39,3,26,21}, // permutation 8
{34,13,43,22,26,28,37,45,40,50,29,0,47,24,15,23,31,25,46,7,9,19,16,12,21,35,32,5,49,8,44,38,20,30,27,3,17,4,1,6,33,18,39,48,10,11,14,36,42,41,2} // permutation 9
};

// Seed: 2181839744

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint64_t  f0;
};

union U1 {
   int64_t  f0;
   int32_t  f1;
   uint32_t  f2;
   int64_t  f3;
};

struct S2 {
    int32_t g_11;
    int32_t *g_10[2];
    union U0 g_31;
    uint16_t g_37[10];
    int16_t g_51;
    int8_t g_83;
    VECTOR(uint8_t, 16) g_97;
    volatile VECTOR(uint32_t, 8) g_105;
    int32_t g_111;
    int16_t g_119[2];
    VECTOR(uint16_t, 8) g_122;
    int64_t g_125;
    volatile VECTOR(int16_t, 16) g_139;
    int16_t *g_144;
    VECTOR(int16_t, 16) g_145;
    volatile VECTOR(uint16_t, 4) g_150;
    union U1 g_155;
    union U1 *g_156;
    int32_t * volatile g_167;
    uint16_t * volatile g_169;
    uint16_t * volatile * volatile g_168;
    uint32_t g_196;
    int32_t g_201;
    union U1 g_204;
    union U1 *g_203;
    VECTOR(uint16_t, 16) g_216;
    uint32_t *g_225[8][8][4];
    VECTOR(uint64_t, 8) g_243;
    uint8_t *g_298;
    VECTOR(uint32_t, 2) g_305;
    union U0 g_353[5][9][3];
    int32_t g_381;
    int32_t *g_388;
    int16_t g_397;
    volatile int16_t g_425;
    volatile VECTOR(int32_t, 16) g_494;
    union U1 **g_519[8][6][5];
    VECTOR(uint32_t, 8) g_540;
    VECTOR(uint8_t, 16) g_544;
    VECTOR(uint8_t, 16) g_545;
    volatile VECTOR(uint8_t, 2) g_547;
    VECTOR(uint64_t, 4) g_585;
    int32_t ** volatile g_623[1];
    union U0 *g_628;
    union U0 **g_627;
    union U0 *** volatile g_626;
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
uint16_t  func_1(struct S2 * p_633);
int32_t * func_2(int32_t * p_3, struct S2 * p_633);
int32_t * func_4(int32_t * p_5, int32_t * p_6, uint8_t  p_7, int32_t * p_8, uint64_t  p_9, struct S2 * p_633);
int32_t * func_12(int32_t * p_13, struct S2 * p_633);
int32_t * func_22(int64_t  p_23, int32_t * p_24, int32_t * p_25, uint32_t  p_26, struct S2 * p_633);
union U0  func_27(int8_t  p_28, uint32_t  p_29, int32_t  p_30, struct S2 * p_633);
uint64_t  func_32(int32_t * p_33, uint16_t  p_34, struct S2 * p_633);
union U1 * func_56(int16_t * p_57, int16_t * p_58, union U1 * p_59, struct S2 * p_633);
int16_t * func_60(int64_t  p_61, int64_t  p_62, struct S2 * p_633);
int64_t  func_68(int32_t  p_69, int16_t * p_70, int32_t * p_71, struct S2 * p_633);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_633->g_10 p_633->g_comm_values p_633->g_11 p_633->g_31 p_633->l_comm_values p_633->g_51 p_633->g_37 p_633->g_168 p_633->g_119 p_633->g_145 p_633->g_203 p_633->g_204 p_633->g_155 p_633->g_144 p_633->g_201 p_633->g_150 p_633->g_298 p_633->g_97 p_633->g_196 p_633->g_353 p_633->g_105 p_633->g_111 p_633->g_216 p_633->g_169 p_633->g_381 p_633->g_494 p_633->g_243 p_633->g_305 p_633->g_204.f1 p_633->g_540 p_633->g_544 p_633->g_545 p_633->g_547 p_633->g_122 p_633->g_585 p_633->g_626
 * writes: p_633->g_11 p_633->g_37 p_633->g_51 p_633->l_comm_values p_633->g_83 p_633->g_111 p_633->g_155.f3 p_633->g_144 p_633->g_201 p_633->g_204.f3 p_633->g_203 p_633->g_167 p_633->g_97 p_633->g_196 p_633->g_388 p_633->g_122 p_633->g_381 p_633->g_125 p_633->g_243 p_633->g_10 p_633->g_204 p_633->g_155 p_633->g_519 p_633->g_119 p_633->g_627
 */
uint16_t  func_1(struct S2 * p_633)
{ /* block id: 4 */
    uint32_t l_379 = 0x5F284144L;
    int32_t *l_380 = &p_633->g_381;
    VECTOR(int16_t, 16) l_384 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), (-9L)), (-9L)), (-9L), (-4L), (-9L), (VECTOR(int16_t, 2))((-4L), (-9L)), (VECTOR(int16_t, 2))((-4L), (-9L)), (-4L), (-9L), (-4L), (-9L));
    union U1 l_385 = {0x39AD78DBAA02277AL};
    int32_t *l_386[2][5] = {{&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381},{&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381}};
    int32_t **l_387 = (void*)0;
    uint64_t l_389 = 0x7620FA5E4E82A16EL;
    int64_t l_390[2];
    uint16_t *l_391 = (void*)0;
    uint16_t *l_392 = (void*)0;
    uint16_t *l_393[1][8][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t l_394 = (-6L);
    int32_t **l_622 = (void*)0;
    union U0 *l_625 = (void*)0;
    union U0 **l_624[10] = {(void*)0,&l_625,&l_625,&l_625,(void*)0,(void*)0,&l_625,&l_625,&l_625,(void*)0};
    int32_t l_629 = (-1L);
    uint16_t l_630 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_390[i] = 8L;
    l_386[1][3] = (p_633->g_10[1] = func_2(func_4(p_633->g_10[1], func_12(&p_633->g_11, p_633), l_379, (l_380 = p_633->g_10[1]), ((safe_lshift_func_int16_t_s_u(l_379, (!(((VECTOR(int16_t, 16))(l_384.s4f80f2628a4cdd33)).sb && (p_633->g_122.s1 = ((((l_385 , (l_386[1][3] == (p_633->g_388 = (void*)0))) || FAKE_DIVERGE(p_633->local_2_offset, get_local_id(2), 10)) > l_389) > l_390[1])))))) >= l_394), p_633), p_633));
    (*p_633->g_626) = l_624[7];
    --l_630;
    return (**p_633->g_168);
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_201 p_633->g_11 p_633->g_381 p_633->g_37 p_633->g_144 p_633->g_119 p_633->g_51 p_633->g_168 p_633->g_169 p_633->g_203 p_633->g_10 p_633->g_494 p_633->g_111 p_633->g_243 p_633->g_305 p_633->g_204.f1 p_633->g_540 p_633->g_544 p_633->g_545 p_633->g_547 p_633->g_122 p_633->g_196 p_633->g_145 p_633->g_585 p_633->g_97 p_633->g_298 p_633->g_comm_values p_633->g_31 p_633->l_comm_values p_633->g_204 p_633->g_155 p_633->g_150 p_633->g_353 p_633->g_105 p_633->g_216
 * writes: p_633->g_381 p_633->g_243 p_633->g_10 p_633->g_204 p_633->g_155 p_633->g_519 p_633->g_119 p_633->g_51 p_633->g_201 p_633->g_11 p_633->g_37 p_633->l_comm_values p_633->g_83 p_633->g_111 p_633->g_144 p_633->g_203 p_633->g_167 p_633->g_97 p_633->g_196
 */
int32_t * func_2(int32_t * p_3, struct S2 * p_633)
{ /* block id: 243 */
    int32_t *l_455 = &p_633->g_381;
    VECTOR(uint64_t, 16) l_464 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL), 0UL, 18446744073709551615UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL);
    union U1 l_486 = {1L};
    int8_t *l_493[7] = {&p_633->g_83,&p_633->g_83,&p_633->g_83,&p_633->g_83,&p_633->g_83,&p_633->g_83,&p_633->g_83};
    int16_t l_507 = 2L;
    union U1 **l_517[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 8) l_527 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
    VECTOR(uint32_t, 2) l_531 = (VECTOR(uint32_t, 2))(0x2D59A596L, 0UL);
    VECTOR(uint32_t, 16) l_535 = (VECTOR(uint32_t, 16))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xD930F1B7L), 0xD930F1B7L), 0xD930F1B7L, 9UL, 0xD930F1B7L, (VECTOR(uint32_t, 2))(9UL, 0xD930F1B7L), (VECTOR(uint32_t, 2))(9UL, 0xD930F1B7L), 9UL, 0xD930F1B7L, 9UL, 0xD930F1B7L);
    VECTOR(uint32_t, 16) l_536 = (VECTOR(uint32_t, 16))(0xC6934721L, (VECTOR(uint32_t, 4))(0xC6934721L, (VECTOR(uint32_t, 2))(0xC6934721L, 0x6EB60100L), 0x6EB60100L), 0x6EB60100L, 0xC6934721L, 0x6EB60100L, (VECTOR(uint32_t, 2))(0xC6934721L, 0x6EB60100L), (VECTOR(uint32_t, 2))(0xC6934721L, 0x6EB60100L), 0xC6934721L, 0x6EB60100L, 0xC6934721L, 0x6EB60100L);
    VECTOR(uint32_t, 16) l_537 = (VECTOR(uint32_t, 16))(0x0ADAFCADL, (VECTOR(uint32_t, 4))(0x0ADAFCADL, (VECTOR(uint32_t, 2))(0x0ADAFCADL, 0x327191F6L), 0x327191F6L), 0x327191F6L, 0x0ADAFCADL, 0x327191F6L, (VECTOR(uint32_t, 2))(0x0ADAFCADL, 0x327191F6L), (VECTOR(uint32_t, 2))(0x0ADAFCADL, 0x327191F6L), 0x0ADAFCADL, 0x327191F6L, 0x0ADAFCADL, 0x327191F6L);
    VECTOR(uint32_t, 8) l_538 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
    VECTOR(uint32_t, 8) l_539 = (VECTOR(uint32_t, 8))(0xCE57162DL, (VECTOR(uint32_t, 4))(0xCE57162DL, (VECTOR(uint32_t, 2))(0xCE57162DL, 1UL), 1UL), 1UL, 0xCE57162DL, 1UL);
    VECTOR(uint8_t, 16) l_543 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x52L), 0x52L), 0x52L, 0UL, 0x52L, (VECTOR(uint8_t, 2))(0UL, 0x52L), (VECTOR(uint8_t, 2))(0UL, 0x52L), 0UL, 0x52L, 0UL, 0x52L);
    VECTOR(int8_t, 16) l_548 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0L), 0L), 0L, 0x0FL, 0L, (VECTOR(int8_t, 2))(0x0FL, 0L), (VECTOR(int8_t, 2))(0x0FL, 0L), 0x0FL, 0L, 0x0FL, 0L);
    uint32_t **l_584 = &p_633->g_225[0][5][1];
    int32_t l_595 = 1L;
    int32_t l_596 = 8L;
    int32_t l_597 = 9L;
    int32_t l_598 = 5L;
    int32_t l_599 = 1L;
    int32_t l_600[1][8][5] = {{{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L},{0x502DE896L,0x565349CFL,(-1L),0x565349CFL,0x502DE896L}}};
    int64_t l_604 = 0L;
    uint32_t l_612 = 0UL;
    int i, j, k;
    if (((*l_455) |= (*p_3)))
    { /* block id: 245 */
        int32_t l_460[7] = {0x056C8A49L,0x056C8A49L,0x056C8A49L,0x056C8A49L,0x056C8A49L,0x056C8A49L,0x056C8A49L};
        int32_t l_461 = 0x10B4AC55L;
        VECTOR(uint64_t, 4) l_462 = (VECTOR(uint64_t, 4))(0x096EA7130D26D23DL, (VECTOR(uint64_t, 2))(0x096EA7130D26D23DL, 0xD75FA9A253E111ABL), 0xD75FA9A253E111ABL);
        VECTOR(uint64_t, 16) l_463 = (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 2UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(2UL, 18446744073709551607UL), 2UL, 18446744073709551607UL, 2UL, 18446744073709551607UL);
        VECTOR(uint32_t, 4) l_471 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL);
        int32_t l_480 = (-1L);
        int32_t **l_481 = &p_633->g_10[1];
        int64_t *l_490 = (void*)0;
        int64_t **l_489 = &l_490;
        uint64_t *l_495 = (void*)0;
        uint64_t *l_496 = (void*)0;
        uint64_t *l_497 = (void*)0;
        uint8_t l_504 = 0x96L;
        VECTOR(uint32_t, 4) l_528 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0xA002F523L), 0xA002F523L);
        VECTOR(uint32_t, 4) l_529 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL);
        VECTOR(uint32_t, 16) l_533 = (VECTOR(uint32_t, 16))(0x52FA3FE3L, (VECTOR(uint32_t, 4))(0x52FA3FE3L, (VECTOR(uint32_t, 2))(0x52FA3FE3L, 0x84C35E79L), 0x84C35E79L), 0x84C35E79L, 0x52FA3FE3L, 0x84C35E79L, (VECTOR(uint32_t, 2))(0x52FA3FE3L, 0x84C35E79L), (VECTOR(uint32_t, 2))(0x52FA3FE3L, 0x84C35E79L), 0x52FA3FE3L, 0x84C35E79L, 0x52FA3FE3L, 0x84C35E79L);
        uint32_t **l_583 = &p_633->g_225[2][6][2];
        VECTOR(uint16_t, 16) l_590 = (VECTOR(uint16_t, 16))(0xF7F5L, (VECTOR(uint16_t, 4))(0xF7F5L, (VECTOR(uint16_t, 2))(0xF7F5L, 65535UL), 65535UL), 65535UL, 0xF7F5L, 65535UL, (VECTOR(uint16_t, 2))(0xF7F5L, 65535UL), (VECTOR(uint16_t, 2))(0xF7F5L, 65535UL), 0xF7F5L, 65535UL, 0xF7F5L, 65535UL);
        int i;
        (*l_455) = (safe_rshift_func_int8_t_s_u(((((safe_mod_func_int8_t_s_s(p_633->g_37[0], (((-3L) != (l_461 ^= l_460[6])) && (+((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(0xD34C6A6857EF306FL, 0x9988432961066453L, 0x536DD762057EC2F8L, 0xDD66B4300DF22565L)).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(l_462.wzzzxwyz))))).s75))))).yyxyxxxy)))).s3577046115244162)).s9 > (p_633->g_243.s5 = ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(l_463.s63cc6b557ceb5a32)).even, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_464.s76f7)))).even))).xyxyyyyx, (uint64_t)(safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_471.ww)).even, (safe_mul_func_uint16_t_u_u(((*p_3) > ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((*l_455), p_633->g_11)), (*l_455))) , ((safe_mul_func_uint16_t_u_u(l_480, (*p_633->g_144))) < 0x75L))), 0xC171L)))) , l_460[6]), (*l_455))), l_480)))))))).s3)) != FAKE_DIVERGE(p_633->group_1_offset, get_group_id(1), 10)))))) || (**p_633->g_168)) , (*l_455)) > 2UL), 1));
        (*l_481) = p_3;
        if (((safe_mod_func_uint64_t_u_u((((((((*p_633->g_203) = l_486) , (safe_lshift_func_uint16_t_u_s(((**l_481) , (((*l_489) = &p_633->g_125) != &p_633->g_125)), 14))) != ((safe_lshift_func_uint8_t_u_u(((((l_493[5] != (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_633->g_494.s8c)).yxxxxxxyyyyxyxxy)).s0 , ((p_633->g_243.s1 ^= p_633->g_111) , (((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s((*l_455), (((VECTOR(uint32_t, 4))(0UL, 0xA423597BL, 5UL, 0x5F04D594L)).z >= ((((1UL || (**l_481)) == 0xE0L) <= (**p_633->g_168)) >= (*p_3))))) > 7L) == (**l_481)), (*p_633->g_144))), (-1L))) , (*l_455)) , (void*)0)))) <= 0x37F2D005L) > (**l_481)) != l_504), (*l_455))) == 0x47D3L)) == p_633->g_305.x) ^ 0x8F7EL) < GROUP_DIVERGE(1, 1)), GROUP_DIVERGE(2, 1))) ^ (*l_455)))
        { /* block id: 253 */
            int32_t *l_505 = &l_460[1];
            int32_t *l_506 = &p_633->g_381;
            int32_t *l_508 = &p_633->g_381;
            int32_t *l_509 = (void*)0;
            uint64_t l_510 = 0x6A521B65DA271598L;
            ++l_510;
        }
        else
        { /* block id: 255 */
            VECTOR(uint32_t, 16) l_532 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
            VECTOR(uint8_t, 8) l_546 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
            uint32_t *l_551 = (void*)0;
            int32_t *l_591 = &l_480;
            int32_t *l_592 = (void*)0;
            int32_t *l_593 = &p_633->g_201;
            int32_t *l_594[9] = {&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381,&p_633->g_381};
            uint32_t l_601 = 4294967286UL;
            int i;
            for (p_633->g_204.f1 = 0; (p_633->g_204.f1 < (-6)); p_633->g_204.f1 = safe_sub_func_uint8_t_u_u(p_633->g_204.f1, 9))
            { /* block id: 258 */
                union U1 ***l_518[5][10] = {{&l_517[2],(void*)0,&l_517[3],(void*)0,&l_517[3],(void*)0,&l_517[2],&l_517[3],&l_517[3],&l_517[3]},{&l_517[2],(void*)0,&l_517[3],(void*)0,&l_517[3],(void*)0,&l_517[2],&l_517[3],&l_517[3],&l_517[3]},{&l_517[2],(void*)0,&l_517[3],(void*)0,&l_517[3],(void*)0,&l_517[2],&l_517[3],&l_517[3],&l_517[3]},{&l_517[2],(void*)0,&l_517[3],(void*)0,&l_517[3],(void*)0,&l_517[2],&l_517[3],&l_517[3],&l_517[3]},{&l_517[2],(void*)0,&l_517[3],(void*)0,&l_517[3],(void*)0,&l_517[2],&l_517[3],&l_517[3],&l_517[3]}};
                int32_t l_520 = 0x417D7BF7L;
                VECTOR(uint32_t, 4) l_530 = (VECTOR(uint32_t, 4))(0x6CB069B1L, (VECTOR(uint32_t, 2))(0x6CB069B1L, 9UL), 9UL);
                VECTOR(uint32_t, 4) l_534 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0UL), 0UL);
                int16_t *l_552 = (void*)0;
                int16_t *l_553 = &l_507;
                int32_t *l_554 = (void*)0;
                int32_t *l_555 = (void*)0;
                int32_t l_556 = (-2L);
                uint8_t *l_557 = &l_504;
                int i, j;
                if ((safe_mul_func_int8_t_s_s((&p_633->g_156 != (p_633->g_519[1][4][3] = l_517[3])), (((l_520 && (safe_div_func_int64_t_s_s(1L, (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((**l_481), (((((*l_557) ^= (((*l_455) = ((VECTOR(int32_t, 2))(0x1D7C0417L, (-9L))).lo) , (((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(l_527.s1030)).xwyxzywyzzxzyyyz, ((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(l_528.zxwyxzwxwwzxyyzw)), ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x3E5D4793L, 4294967288UL)).yxyxyyxxyxyxyyxy)).odd, ((VECTOR(uint32_t, 2))(0x5C98CB16L, 4294967293UL)).yxxxyxyy))).s7775576570623313, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_529.xz)), 0x088B8B65L, 0x394B2935L)).xzxzwywywzwwxywx))))))))).s9 == (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_530.xxzwyyxz)))).s6400104330074574, ((VECTOR(uint32_t, 2))(0x852C9A39L, 4294967290UL)).yxxxyxxxyyxyxyxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 2))(l_531.yx)).xxxyyyxyyxyyxyxx, ((VECTOR(uint32_t, 2))(l_532.s33)).xyyyxxxyyxyxyyyy))).s6cd6)).xxxxwxyzwzzwywzy))).sde)), 0x5D5CF194L, 0UL)), 9UL, ((VECTOR(uint32_t, 2))(l_533.s84)), 0UL)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(l_534.zyzy)).xwxwwxww, ((VECTOR(uint32_t, 2))(l_535.s5d)).yxxxyxxy))).s2051254036316066)).lo)).s46)), 4294967293UL, 0xE7295EE2L)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_536.s4d1ebfb3)).s1726213137426505)).lo, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_537.sf8b8)).wwzyxyzxywyyxyzw)).s9c, ((VECTOR(uint32_t, 8))(l_538.s40403055)).s01, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 2))(0x890479B2L, 0x844ECE63L)).yxyxyyxxxyyyxxxx, ((VECTOR(uint32_t, 16))(((l_520 = (((VECTOR(uint64_t, 16))(1UL, 0UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(l_539.s0146)).hi, ((VECTOR(uint32_t, 4))(p_633->g_540.s4564)).hi))))).xyyy)), (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(l_543.s78)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_633->g_544.s65cc)), l_534.w, (**l_481), 255UL, 254UL)).s7220340077147216)).sf375)).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_633->g_545.s86))))))).xxxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_546.s6017)), 0x69L, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(0xA0L, ((VECTOR(uint8_t, 2))(p_633->g_547.xx)), 0xCAL)), ((VECTOR(uint8_t, 8))(2UL, 0x68L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((&p_633->g_144 == (((*l_553) |= ((*p_633->g_144) ^= ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_548.s54)).xyyy)), (safe_lshift_func_uint8_t_u_s(((&p_633->g_196 == l_551) , FAKE_DIVERGE(p_633->local_1_offset, get_local_id(1), 10)), 3)), ((VECTOR(int8_t, 2))(0x6BL)), 0x0FL)).s2 <= (**l_481)) & (**l_481)))) , (void*)0)) && (**l_481)), l_532.sa, 255UL, ((VECTOR(uint8_t, 2))(0x21L)), 0xCBL, 247UL, 0x73L)).s0035604505200042)).hi)).s01, ((VECTOR(uint8_t, 2))(255UL))))), 254UL, 4UL, 0xE9L, 0x78L)).hi))), (*l_455), 0xFBL, 255UL, 255UL, FAKE_DIVERGE(p_633->group_1_offset, get_group_id(1), 10), 4UL, 0x73L)).lo)).hi))).x, FAKE_DIVERGE(p_633->local_1_offset, get_local_id(1), 10))), 1UL, 18446744073709551615UL, 18446744073709551607UL, 0x90186C594D69BD1CL, GROUP_DIVERGE(1, 1), l_532.s4, 0x0910284DAB6C1702L, 18446744073709551615UL, 0UL)).s8 | p_633->g_122.s6)) , l_546.s0), l_556, 0x34943E8CL, 4294967288UL, 4294967295UL, ((VECTOR(uint32_t, 8))(0x99A131E4L)), ((VECTOR(uint32_t, 2))(4294967295UL)), 0x284E976AL)), ((VECTOR(uint32_t, 16))(0UL))))).sb8))).yxyyyyxx))).s01)), 4294967289UL, 0x5D744FBFL)).odd)).s2 >= 1UL)))) <= p_633->g_243.s0) , p_633->g_196) == GROUP_DIVERGE(2, 1)))), FAKE_DIVERGE(p_633->group_0_offset, get_group_id(0), 10)))))) <= p_633->g_145.sb) , p_633->g_540.s4))))
                { /* block id: 265 */
                    (*l_481) = p_3;
                }
                else
                { /* block id: 267 */
                    if ((**l_481))
                        break;
                    if ((atomic_inc(&p_633->g_atomic_input[40 * get_linear_group_id() + 32]) == 0))
                    { /* block id: 270 */
                        VECTOR(int32_t, 8) l_558 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-5L)), (-5L)), (-5L), (-1L), (-5L));
                        VECTOR(int32_t, 4) l_559 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3ADC26CFL), 0x3ADC26CFL);
                        VECTOR(int32_t, 16) l_560 = (VECTOR(int32_t, 16))(0x08637B25L, (VECTOR(int32_t, 4))(0x08637B25L, (VECTOR(int32_t, 2))(0x08637B25L, 0L), 0L), 0L, 0x08637B25L, 0L, (VECTOR(int32_t, 2))(0x08637B25L, 0L), (VECTOR(int32_t, 2))(0x08637B25L, 0L), 0x08637B25L, 0L, 0x08637B25L, 0L);
                        VECTOR(int64_t, 4) l_561 = (VECTOR(int64_t, 4))(0x5FB85BADBB25D3F3L, (VECTOR(int64_t, 2))(0x5FB85BADBB25D3F3L, 8L), 8L);
                        VECTOR(int32_t, 2) l_562 = (VECTOR(int32_t, 2))(0x02BE02CBL, 0x16232B41L);
                        uint16_t l_563 = 2UL;
                        int32_t l_564 = 0x2B689DD3L;
                        uint64_t l_565 = 2UL;
                        int32_t l_566 = 0x1354AB61L;
                        uint32_t l_567 = 4294967295UL;
                        uint8_t l_568[4];
                        uint8_t l_569[2][4] = {{0x4EL,0x4EL,0x4EL,0x4EL},{0x4EL,0x4EL,0x4EL,0x4EL}};
                        uint8_t l_570 = 0xF6L;
                        uint8_t l_571 = 1UL;
                        int16_t l_572 = 0x60A8L;
                        uint8_t l_573 = 3UL;
                        uint64_t l_574 = 0x87F399F7BEAC821CL;
                        uint64_t l_575 = 0x63F278B8A3F4AA7EL;
                        uint64_t l_576 = 18446744073709551612UL;
                        VECTOR(int32_t, 4) l_577 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x67184C82L), 0x67184C82L);
                        int32_t *l_578 = (void*)0;
                        int32_t *l_579 = (void*)0;
                        int32_t *l_580[1][2];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_568[i] = 251UL;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_580[i][j] = (void*)0;
                        }
                        l_576 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_558.s5761044044504223)).hi)))).s0555557141020762)).sb82e, (int32_t)4L))).even, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(l_559.wzzxwzxx)).s7352413072673104, (int32_t)8L))).sf8, ((VECTOR(int32_t, 8))(l_560.s15460353)).s02))), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), 1L, l_561.z, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(l_562.yyyxyyxx)).s4133552561253615, (int32_t)l_563))).s2664, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4FB97681L, 0x7428E93DL)).xyyxyyyxyxyyxxxy)).sc2)).xxxx, (int32_t)l_564, (int32_t)((VECTOR(int32_t, 4))(l_565, ((VECTOR(int32_t, 2))(0L, (-1L))).odd, (-2L), 0x59CB7857L)).x))).ywxxzwyzwxzwwxwx)), ((VECTOR(int32_t, 8))(((l_566 , (l_568[1] = l_567)) , (l_569[1][1] , l_570)), ((VECTOR(int32_t, 2))(0x145C6073L)), l_571, l_572, 0x786907F4L, (-4L), 0x49CC9435L)).s1136041037252006))).sd45d))), l_573, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x6590033CL)), ((VECTOR(int32_t, 4))((-9L))), ((VECTOR(int32_t, 2))(0L)), 4L)))).hi, ((VECTOR(int32_t, 8))((-1L)))))), 0L, (-1L), l_574, 0x15E28EF6L, l_575, 0x54F91312L, 0x01178D0DL, 0x7D3A69D1L)).sc8)), ((VECTOR(int32_t, 2))(0x3FD5E07FL)), (-1L))).s04)).yyxy, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))((-6L)))))), 0x3B0528C7L)))).s5;
                        l_580[0][1] = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_577.zyzz)))).y , (l_579 = l_578));
                        unsigned int result = 0;
                        result += l_558.s7;
                        result += l_558.s6;
                        result += l_558.s5;
                        result += l_558.s4;
                        result += l_558.s3;
                        result += l_558.s2;
                        result += l_558.s1;
                        result += l_558.s0;
                        result += l_559.w;
                        result += l_559.z;
                        result += l_559.y;
                        result += l_559.x;
                        result += l_560.sf;
                        result += l_560.se;
                        result += l_560.sd;
                        result += l_560.sc;
                        result += l_560.sb;
                        result += l_560.sa;
                        result += l_560.s9;
                        result += l_560.s8;
                        result += l_560.s7;
                        result += l_560.s6;
                        result += l_560.s5;
                        result += l_560.s4;
                        result += l_560.s3;
                        result += l_560.s2;
                        result += l_560.s1;
                        result += l_560.s0;
                        result += l_561.w;
                        result += l_561.z;
                        result += l_561.y;
                        result += l_561.x;
                        result += l_562.y;
                        result += l_562.x;
                        result += l_563;
                        result += l_564;
                        result += l_565;
                        result += l_566;
                        result += l_567;
                        int l_568_i0;
                        for (l_568_i0 = 0; l_568_i0 < 4; l_568_i0++) {
                            result += l_568[l_568_i0];
                        }
                        int l_569_i0, l_569_i1;
                        for (l_569_i0 = 0; l_569_i0 < 2; l_569_i0++) {
                            for (l_569_i1 = 0; l_569_i1 < 4; l_569_i1++) {
                                result += l_569[l_569_i0][l_569_i1];
                            }
                        }
                        result += l_570;
                        result += l_571;
                        result += l_572;
                        result += l_573;
                        result += l_574;
                        result += l_575;
                        result += l_576;
                        result += l_577.w;
                        result += l_577.z;
                        result += l_577.y;
                        result += l_577.x;
                        atomic_add(&p_633->g_special_values[40 * get_linear_group_id() + 32], result);
                    }
                    else
                    { /* block id: 275 */
                        (1 + 1);
                    }
                }
            }
            (*l_455) = (((**p_633->g_168) == (((l_584 = l_583) != ((((VECTOR(uint64_t, 2))(p_633->g_585.wx)).even != (((**l_481) & (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_590.s50d319cd8a6b86cf)))).sa4))).hi, 13)), p_633->g_97.s0))) & 0x6211L)) , l_583)) <= (((*l_455) ^ (l_493[5] == p_633->g_298)) > 1UL))) || (*l_455));
            --l_601;
            l_604 |= (*p_3);
        }
        for (l_595 = 1; (l_595 < (-25)); --l_595)
        { /* block id: 287 */
            return p_3;
        }
    }
    else
    { /* block id: 290 */
        int8_t l_607[9] = {0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L};
        int32_t *l_608 = &l_597;
        int32_t l_609 = (-9L);
        int32_t *l_610 = (void*)0;
        int32_t *l_611[8][9] = {{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598},{&p_633->g_11,(void*)0,&l_597,&l_598,(void*)0,&p_633->g_11,&l_598,(void*)0,&l_598}};
        int i, j;
        --l_612;
        if ((atomic_inc(&p_633->g_atomic_input[40 * get_linear_group_id() + 20]) == 8))
        { /* block id: 293 */
            union U0 l_616 = {0x7DB9FF62942D74A6L};/* VOLATILE GLOBAL l_616 */
            union U0 *l_615 = &l_616;
            l_615 = (void*)0;
            unsigned int result = 0;
            result += l_616.f0;
            atomic_add(&p_633->g_special_values[40 * get_linear_group_id() + 20], result);
        }
        else
        { /* block id: 295 */
            (1 + 1);
        }
    }
    for (p_633->g_51 = 0; (p_633->g_51 != (-25)); --p_633->g_51)
    { /* block id: 301 */
        (*p_3) ^= ((*l_455) , ((VECTOR(int32_t, 2))((-8L), (-1L))).hi);
        if ((*p_3))
            break;
    }
    for (l_595 = 0; (l_595 > (-12)); l_595 = safe_sub_func_int16_t_s_s(l_595, 6))
    { /* block id: 307 */
        int32_t **l_621[1];
        int i;
        for (i = 0; i < 1; i++)
            l_621[i] = &l_455;
        p_3 = func_12(p_3, p_633);
    }
    return &p_633->g_201;
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_51 p_633->g_11 p_633->g_105 p_633->g_168 p_633->g_169 p_633->g_201
 * writes: p_633->g_51 p_633->g_388 p_633->g_11 p_633->g_381 p_633->g_204.f3 p_633->g_201 p_633->g_83 p_633->g_125
 */
int32_t * func_4(int32_t * p_5, int32_t * p_6, uint8_t  p_7, int32_t * p_8, uint64_t  p_9, struct S2 * p_633)
{ /* block id: 183 */
    VECTOR(int64_t, 2) l_395 = (VECTOR(int64_t, 2))((-1L), 0x1987C9B9BBFCA88EL);
    int32_t *l_396[10] = {&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11};
    uint64_t l_398 = 2UL;
    int8_t l_410 = 6L;
    int32_t *l_454[5];
    int i;
    for (i = 0; i < 5; i++)
        l_454[i] = &p_633->g_11;
    l_398--;
    for (p_633->g_51 = 0; (p_633->g_51 < 4); p_633->g_51 = safe_add_func_int32_t_s_s(p_633->g_51, 8))
    { /* block id: 187 */
        int32_t **l_403 = &l_396[7];
        int16_t *l_408 = &p_633->g_397;
        uint8_t l_409 = 248UL;
        int32_t l_430 = 0x47C05366L;
        int32_t l_431[8] = {0x2CC251EAL,0x48954E16L,0x2CC251EAL,0x2CC251EAL,0x48954E16L,0x2CC251EAL,0x2CC251EAL,0x48954E16L};
        int32_t l_440 = 9L;
        int i;
        if ((*p_5))
            break;
        p_633->g_388 = ((*l_403) = l_396[1]);
        (*p_5) = (((safe_rshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((((0x936FC2E1EBCDDBD7L | p_633->g_105.s7) < ((FAKE_DIVERGE(p_633->local_1_offset, get_local_id(1), 10) , (p_9 , p_9)) == 0xB0C3L)) , (*p_633->g_168)) != (void*)0), ((VECTOR(uint16_t, 2))(0x51DFL, 0x2501L)).lo)) && (((p_9 , l_408) == (void*)0) > p_7)) != l_409), 0)) | p_7) ^ l_410);
        for (p_633->g_381 = 0; (p_633->g_381 <= 3); p_633->g_381 = safe_add_func_uint64_t_u_u(p_633->g_381, 5))
        { /* block id: 194 */
            uint64_t l_417 = 0UL;
            int32_t l_429 = 0x244E1420L;
            if ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_417, (*p_5))), 0x1DF72A45L)))
            { /* block id: 195 */
                uint64_t l_426 = 0x055AF3381D518E42L;
                VECTOR(int32_t, 16) l_433 = (VECTOR(int32_t, 16))(0x17B92EF5L, (VECTOR(int32_t, 4))(0x17B92EF5L, (VECTOR(int32_t, 2))(0x17B92EF5L, 0x191B87DEL), 0x191B87DEL), 0x191B87DEL, 0x17B92EF5L, 0x191B87DEL, (VECTOR(int32_t, 2))(0x17B92EF5L, 0x191B87DEL), (VECTOR(int32_t, 2))(0x17B92EF5L, 0x191B87DEL), 0x17B92EF5L, 0x191B87DEL, 0x17B92EF5L, 0x191B87DEL);
                uint16_t l_435 = 65534UL;
                int i;
                for (p_633->g_204.f3 = 0; (p_633->g_204.f3 >= (-11)); p_633->g_204.f3 = safe_sub_func_int32_t_s_s(p_633->g_204.f3, 4))
                { /* block id: 198 */
                    uint8_t l_420 = 249UL;
                    int32_t *l_423 = &p_633->g_201;
                    int32_t l_432[9] = {0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L,0x19AF0EF3L};
                    int i;
                    l_420++;
                    (*l_403) = &p_633->g_11;
                    if ((*p_8))
                    { /* block id: 201 */
                        return l_423;
                    }
                    else
                    { /* block id: 203 */
                        int16_t l_424 = 0L;
                        int32_t l_434 = (-7L);
                        --l_426;
                        --l_435;
                    }
                    for (l_430 = 0; (l_430 < 17); l_430 = safe_add_func_int8_t_s_s(l_430, 8))
                    { /* block id: 209 */
                        p_6 = &l_429;
                        (*l_423) ^= l_440;
                        if ((*p_8))
                            break;
                    }
                }
                if ((atomic_inc(&p_633->g_atomic_input[40 * get_linear_group_id() + 25]) == 5))
                { /* block id: 216 */
                    int32_t l_441 = 8L;
                    for (l_441 = 0; (l_441 >= 21); l_441++)
                    { /* block id: 219 */
                        int32_t *l_444 = (void*)0;
                        int32_t *l_445 = (void*)0;
                        uint32_t l_446 = 0x68E99B17L;
                        uint32_t l_447 = 0xCEDC0E32L;
                        l_445 = l_444;
                        l_447 ^= l_446;
                    }
                    unsigned int result = 0;
                    result += l_441;
                    atomic_add(&p_633->g_special_values[40 * get_linear_group_id() + 25], result);
                }
                else
                { /* block id: 223 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 226 */
                for (p_633->g_83 = 15; (p_633->g_83 > (-24)); p_633->g_83--)
                { /* block id: 229 */
                    for (p_633->g_125 = 0; (p_633->g_125 != (-24)); p_633->g_125 = safe_sub_func_int64_t_s_s(p_633->g_125, 1))
                    { /* block id: 232 */
                        (*l_403) = (void*)0;
                    }
                    (*l_403) = (*l_403);
                    return &p_633->g_201;
                }
            }
        }
    }
    (*p_5) = (safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_633->global_2_offset, get_global_id(2), 10), 15));
    return l_454[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_comm_values p_633->g_11 p_633->g_31 p_633->l_comm_values p_633->g_51 p_633->g_37 p_633->g_168 p_633->g_119 p_633->g_145 p_633->g_203 p_633->g_204 p_633->g_155 p_633->g_144 p_633->g_201 p_633->g_150 p_633->g_298 p_633->g_97 p_633->g_196 p_633->g_353 p_633->g_10 p_633->g_105 p_633->g_111 p_633->g_216
 * writes: p_633->g_11 p_633->g_37 p_633->g_51 p_633->l_comm_values p_633->g_83 p_633->g_111 p_633->g_155.f3 p_633->g_144 p_633->g_201 p_633->g_204.f3 p_633->g_203 p_633->g_167 p_633->g_97 p_633->g_196
 */
int32_t * func_12(int32_t * p_13, struct S2 * p_633)
{ /* block id: 5 */
    int32_t *l_14 = &p_633->g_11;
    int32_t *l_15[7][9] = {{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11},{&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11}};
    int8_t l_16 = 0x4CL;
    VECTOR(uint8_t, 2) l_17 = (VECTOR(uint8_t, 2))(0x1EL, 253UL);
    uint16_t *l_36 = &p_633->g_37[5];
    uint32_t l_38 = 1UL;
    int64_t l_354 = 1L;
    uint32_t l_355 = 4294967295UL;
    int8_t l_356 = 0x48L;
    VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))(0x08EC3B6FL, (VECTOR(int32_t, 2))(0x08EC3B6FL, 0x4D8C874EL), 0x4D8C874EL);
    union U1 *l_369 = &p_633->g_204;
    uint8_t *l_372[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_373[4];
    uint32_t *l_374 = &p_633->g_196;
    uint32_t l_377 = 8UL;
    uint32_t l_378[5];
    int i, j;
    for (i = 0; i < 4; i++)
        l_373[i] = 0x17BCL;
    for (i = 0; i < 5; i++)
        l_378[i] = 0xD5DF423FL;
    --l_17.x;
    if (((((safe_div_func_uint32_t_u_u((p_13 == (p_633->g_comm_values[p_633->tid] , func_22((p_633->g_11 , ((*l_14) , (func_27(((((void*)0 != p_13) ^ ((*l_36) = ((p_633->g_31 , ((func_32(&p_633->g_11, p_633->g_11, p_633) != 18446744073709551615UL) != p_633->g_comm_values[p_633->tid])) , p_633->l_comm_values[(safe_mod_func_uint32_t_u_u(p_633->tid, 51))]))) < FAKE_DIVERGE(p_633->group_2_offset, get_group_id(2), 10)), p_633->g_comm_values[p_633->tid], l_38, p_633) , (*l_14)))), p_633->g_10[1], l_15[5][1], l_354, p_633))), l_355)) & l_356) > FAKE_DIVERGE(p_633->local_0_offset, get_local_id(0), 10)) || p_633->g_105.s5))
    { /* block id: 159 */
        int16_t l_360 = (-10L);
        for (p_633->g_111 = 0; (p_633->g_111 == (-19)); p_633->g_111--)
        { /* block id: 162 */
            int64_t *l_359[10];
            int i, j;
            for (i = 0; i < 10; i++)
                l_359[i] = &p_633->g_155.f3;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_633->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[(safe_mod_func_uint32_t_u_u((((p_633->g_204.f3 = (l_360 = (-3L))) , p_13) == p_13), 10))][(safe_mod_func_uint32_t_u_u(p_633->tid, 51))]));
            if ((*p_13))
                break;
            if (l_360)
                continue;
            if ((*p_13))
                break;
        }
    }
    else
    { /* block id: 172 */
        uint32_t l_361 = 4294967295UL;
        l_361--;
    }
    l_378[3] ^= ((func_27(p_633->g_145.s1, (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_366.yyzxxzxzxwxzyzxz)).s2, ((safe_lshift_func_uint8_t_u_u((&p_633->g_204 != l_369), ((*l_14) = (safe_lshift_func_uint16_t_u_s((*l_14), 10))))) || (*l_14)))), l_373[2], p_633) , ((*l_14) >= ((*l_374)--))) , (((((*l_14) = GROUP_DIVERGE(1, 1)) || (((VECTOR(int8_t, 2))(0x45L, 0x6AL)).lo , ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(0x2DL, l_377, 0x05L, 1L)).xwyyxyzzwwwywwww, ((VECTOR(int8_t, 16))(1L))))).lo)).lo, ((VECTOR(int8_t, 4))(0x5AL))))), 8L, ((VECTOR(int8_t, 4))(0x0EL)), ((VECTOR(int8_t, 2))(0L)), 6L, 0x29L, (-7L), 1L, 0x6FL)), ((VECTOR(int8_t, 16))(0x10L))))).sa2, ((VECTOR(int8_t, 2))((-10L)))))), ((VECTOR(int8_t, 2))(4L))))).odd)) > p_633->g_216.sf) , (*p_13)));
    return &p_633->g_11;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_22(int64_t  p_23, int32_t * p_24, int32_t * p_25, uint32_t  p_26, struct S2 * p_633)
{ /* block id: 157 */
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_51 p_633->g_11 p_633->g_37 p_633->g_168 p_633->g_119 p_633->g_145 p_633->g_203 p_633->g_204 p_633->g_155 p_633->g_144 p_633->g_201 p_633->g_150 p_633->g_298 p_633->g_97 p_633->g_196 p_633->g_353
 * writes: p_633->g_11 p_633->g_51 p_633->l_comm_values p_633->g_83 p_633->g_111 p_633->g_37 p_633->g_155.f3 p_633->g_144 p_633->g_201 p_633->g_204.f3 p_633->g_203 p_633->g_167 p_633->g_97
 */
union U0  func_27(int8_t  p_28, uint32_t  p_29, int32_t  p_30, struct S2 * p_633)
{ /* block id: 11 */
    int32_t *l_63 = &p_633->g_11;
    int32_t l_251 = 1L;
    int32_t l_254 = (-1L);
    int32_t l_256 = 0x694F91D4L;
    int32_t l_259 = (-2L);
    int16_t l_263 = 0x44D0L;
    int32_t l_264[5][4][7] = {{{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)}},{{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)}},{{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)}},{{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)}},{{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)},{0x16C2F90AL,(-1L),2L,0x25ECAED4L,0x5E2A7E6AL,1L,(-1L)}}};
    VECTOR(int32_t, 4) l_276 = (VECTOR(int32_t, 4))(0x0B169A76L, (VECTOR(int32_t, 2))(0x0B169A76L, 0x79E9E735L), 0x79E9E735L);
    int16_t *l_293 = &p_633->g_119[1];
    uint8_t l_311 = 254UL;
    int i, j, k;
    for (p_28 = (-7); (p_28 == (-22)); --p_28)
    { /* block id: 14 */
        int32_t l_55 = 2L;
        VECTOR(uint32_t, 16) l_80 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xD6E0D248L), 0xD6E0D248L), 0xD6E0D248L, 4294967295UL, 0xD6E0D248L, (VECTOR(uint32_t, 2))(4294967295UL, 0xD6E0D248L), (VECTOR(uint32_t, 2))(4294967295UL, 0xD6E0D248L), 4294967295UL, 0xD6E0D248L, 4294967295UL, 0xD6E0D248L);
        int8_t l_247 = 0x0BL;
        int32_t l_248 = 0x32A5C887L;
        int32_t l_249 = 5L;
        int32_t l_250 = (-5L);
        int32_t l_253 = (-1L);
        int32_t l_255 = 7L;
        int32_t l_257 = 0x19B247C1L;
        int32_t l_258 = 0x7C3847FEL;
        int32_t l_260 = 0x36310204L;
        int32_t l_261 = 0x61BB21BBL;
        int32_t l_262 = 0x5ED7D3D8L;
        int32_t l_265[1];
        int16_t *l_289 = &p_633->g_119[0];
        union U1 l_306 = {0x53FBA25CA382A8CAL};
        int i;
        for (i = 0; i < 1; i++)
            l_265[i] = 1L;
        if ((atomic_inc(&p_633->g_atomic_input[40 * get_linear_group_id() + 37]) == 5))
        { /* block id: 16 */
            int32_t l_42 = 9L;
            int32_t *l_41[7][1][8] = {{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}},{{&l_42,&l_42,(void*)0,&l_42,&l_42,&l_42,(void*)0,&l_42}}};
            uint8_t l_43 = 3UL;
            VECTOR(int32_t, 4) l_44 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x01F9D3F5L), 0x01F9D3F5L);
            uint32_t l_45[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_45[i] = 1UL;
            l_41[5][0][2] = (GROUP_DIVERGE(1, 1) , (void*)0);
            l_43 ^= 0x44FE3780L;
            l_45[1] = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_44.xwzyzywz)).s5676324374003757)).s802f)).hi)).yyxx)))).z;
            unsigned int result = 0;
            result += l_42;
            result += l_43;
            result += l_44.w;
            result += l_44.z;
            result += l_44.y;
            result += l_44.x;
            int l_45_i0;
            for (l_45_i0 = 0; l_45_i0 < 2; l_45_i0++) {
                result += l_45[l_45_i0];
            }
            atomic_add(&p_633->g_special_values[40 * get_linear_group_id() + 37], result);
        }
        else
        { /* block id: 20 */
            (1 + 1);
        }
        for (p_633->g_11 = 0; (p_633->g_11 == 28); p_633->g_11++)
        { /* block id: 25 */
            int16_t *l_50 = &p_633->g_51;
            int32_t l_54 = (-7L);
            int32_t l_252[10][3][8] = {{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}},{{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L},{3L,3L,0x37D6F02AL,0L,(-1L),0L,0x37D6F02AL,3L}}};
            int64_t l_267 = (-1L);
            VECTOR(uint16_t, 4) l_295 = (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x040CL), 0x040CL);
            uint8_t *l_299 = (void*)0;
            int32_t *l_300[4];
            int8_t l_316 = 0x57L;
            uint16_t *l_317 = &p_633->g_37[5];
            int64_t *l_318 = &p_633->g_125;
            uint8_t *l_319 = (void*)0;
            uint8_t *l_320[7];
            uint16_t l_321 = 65535UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_300[i] = &l_264[2][2][0];
            for (i = 0; i < 7; i++)
                l_320[i] = (void*)0;
            if ((safe_mod_func_int16_t_s_s(((*l_50) = (p_30 != 0xA33FL)), (safe_div_func_uint8_t_u_u(l_54, l_55)))))
            { /* block id: 27 */
                int64_t *l_64 = (void*)0;
                int64_t *l_65 = (void*)0;
                int64_t *l_66 = (void*)0;
                int64_t *l_67[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int8_t *l_81 = (void*)0;
                int8_t *l_82 = &p_633->g_83;
                uint16_t *l_90[9] = {(void*)0,&p_633->g_37[9],(void*)0,(void*)0,&p_633->g_37[9],(void*)0,(void*)0,&p_633->g_37[9],(void*)0};
                VECTOR(int32_t, 8) l_91 = (VECTOR(int32_t, 8))(0x1B769E50L, (VECTOR(int32_t, 4))(0x1B769E50L, (VECTOR(int32_t, 2))(0x1B769E50L, (-4L)), (-4L)), (-4L), 0x1B769E50L, (-4L));
                int32_t *l_92 = &l_54;
                int64_t *l_159 = &p_633->g_155.f3;
                union U1 **l_245 = &p_633->g_203;
                int32_t *l_246[6][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int16_t l_266 = (-6L);
                uint16_t l_268 = 0x08A4L;
                int i, j, k;
                (*l_245) = func_56(&p_633->g_51, func_60((p_633->l_comm_values[(safe_mod_func_uint32_t_u_u(p_633->tid, 51))] = (l_63 != &p_30)), ((*l_159) = func_68(((*l_92) = (p_30 = (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((&p_633->g_37[9] != &p_633->g_37[5]) >= (safe_lshift_func_uint8_t_u_u(((((VECTOR(uint32_t, 8))(l_80.s76030dee)).s2 || p_29) , (((*l_82) = p_28) != (safe_rshift_func_uint16_t_u_u((l_91.s2 = (safe_div_func_int64_t_s_s(((safe_div_func_int16_t_s_s((0x7B7A8BFCL > 1UL), 0x2BA1L)) || p_28), p_633->g_51))), 12)))), GROUP_DIVERGE(0, 1)))), l_54)), p_29)) | 0x455787DF3DEF630FL), 0)))), l_50, l_63, p_633)), p_633), p_633->g_203, p_633);
                --l_268;
            }
            else
            { /* block id: 92 */
                int32_t **l_271 = &l_63;
                int32_t *l_273 = (void*)0;
                int32_t **l_272[9] = {&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273,&l_273};
                int i;
                p_633->g_167 = ((*l_271) = &p_30);
                (*l_63) |= 0x7E01DA99L;
                (*l_63) = 0x10F0A78AL;
                for (l_259 = 0; (l_259 >= 24); l_259 = safe_add_func_uint8_t_u_u(l_259, 1))
                { /* block id: 99 */
                    uint32_t l_294 = 0x97538096L;
                    (1 + 1);
                }
            }
            l_250 = ((safe_sub_func_int32_t_s_s((((p_633->g_97.s1 |= ((p_30 = (((VECTOR(int64_t, 2))(0L, (-8L))).even < (p_633->g_298 != l_299))) <= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(((*l_318) = (safe_sub_func_uint16_t_u_u(((*l_317) &= (safe_sub_func_int8_t_s_s((((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))(p_633->g_305.xxxyxyyxyyyxyyxy)), ((VECTOR(uint32_t, 2))(0x17655FDFL, 3UL)).yxxxxyyyyxxxyxyy))).s7 & ((VECTOR(uint64_t, 4))(18446744073709551615UL, 18446744073709551615UL, 0x96E4FF2E12BC1A5BL, 18446744073709551608UL)).x), ((0x4FD4L < (((*p_633->g_203) = l_306) , FAKE_DIVERGE(p_633->group_2_offset, get_group_id(2), 10))) | (((safe_rshift_func_uint16_t_u_s((p_29 <= (l_311 == 0x68318557L)), (((((((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((0x6DC8L || (~(((((p_633->g_145.s6 < 18446744073709551615UL) || p_28) ^ 1UL) , p_29) > p_28))) , 0x12L) | p_29), GROUP_DIVERGE(1, 1))), 2)) || 0x867E8981D3EAD75AL) & 4294967295UL) ^ (*p_633->g_144)) && l_249) == 0x1D2DL) , l_316))) & 0L) == 0x5ED8L))))), p_28))), p_28, ((VECTOR(int64_t, 4))(0x0715677B58E60A46L)), 0L, 0L)).s3220045042156435, (int64_t)0x5EE00CD75C92E5A9L))).s0821, ((VECTOR(int64_t, 4))(0x2B530F2C12D0700DL))))).wwyxyywxyxywwyyz)).se && p_29))) < p_633->g_196) != p_29), p_28)) == p_28);
            l_321--;
        }
        (*l_63) &= (-2L);
    }
    if ((atomic_inc(&p_633->l_atomic_input[38]) == 6))
    { /* block id: 125 */
        int32_t l_325 = 0x6455D9A9L;
        int32_t *l_324[5] = {&l_325,&l_325,&l_325,&l_325,&l_325};
        int32_t *l_326 = (void*)0;
        int i;
        l_326 = l_324[2];
        for (l_325 = (-27); (l_325 <= (-19)); l_325 = safe_add_func_uint64_t_u_u(l_325, 4))
        { /* block id: 129 */
            uint32_t l_329 = 4294967295UL;
            int32_t l_330[8][4] = {{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L},{0L,1L,1L,0L}};
            int16_t l_331 = 0x010AL;
            int32_t l_332[9][10] = {{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L},{8L,8L,(-4L),2L,0x04D0E4DCL,0x68BBA003L,0x158B6CB3L,0x20DEDAFEL,0x158B6CB3L,0x68BBA003L}};
            int32_t l_333 = 0x379EE0FBL;
            uint16_t l_334 = 0x1DA2L;
            uint8_t l_335 = 3UL;
            uint32_t l_336 = 0x4EB9D772L;
            int i, j;
            l_324[2] = (void*)0;
            l_334 ^= ((l_331 ^= (l_329 , l_330[5][2])) , ((l_333 = l_332[5][0]) , 0L));
            l_336 ^= l_335;
        }
        for (l_325 = 0; (l_325 < 4); ++l_325)
        { /* block id: 138 */
            int32_t l_339 = 3L;
            int32_t l_352 = 0x4D7DFA84L;
            for (l_339 = 0; (l_339 != 18); l_339 = safe_add_func_uint64_t_u_u(l_339, 6))
            { /* block id: 141 */
                int64_t l_342 = 5L;
                uint64_t l_343[7];
                int16_t l_344 = (-10L);
                int16_t l_345 = 0x4ABFL;
                uint32_t l_346 = 1UL;
                int i;
                for (i = 0; i < 7; i++)
                    l_343[i] = 0x9BD7691855961EB2L;
                l_343[6] = l_342;
                l_344 = 0L;
                l_346 = l_345;
                for (l_342 = 0; (l_342 <= (-3)); l_342 = safe_sub_func_int8_t_s_s(l_342, 2))
                { /* block id: 147 */
                    uint16_t l_349 = 0UL;
                    ++l_349;
                }
            }
            l_339 = l_352;
        }
        unsigned int result = 0;
        result += l_325;
        atomic_add(&p_633->l_special_values[38], result);
    }
    else
    { /* block id: 153 */
        (1 + 1);
    }
    return p_633->g_353[2][6][1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_633->g_11
 */
uint64_t  func_32(int32_t * p_33, uint16_t  p_34, struct S2 * p_633)
{ /* block id: 7 */
    int64_t l_35 = 1L;
    (*p_33) = l_35;
    return l_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_204 p_633->g_51 p_633->g_216 p_633->g_83 p_633->g_144 p_633->g_201 p_633->g_204.f3 p_633->g_150 p_633->g_243 p_633->g_155 p_633->g_119
 * writes: p_633->g_225 p_633->g_201 p_633->g_204.f3
 */
union U1 * func_56(int16_t * p_57, int16_t * p_58, union U1 * p_59, struct S2 * p_633)
{ /* block id: 77 */
    VECTOR(int64_t, 2) l_211 = (VECTOR(int64_t, 2))(0x7F5F9C3501AD261EL, 7L);
    uint16_t *l_222[2];
    uint16_t **l_221[6][2][4] = {{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}},{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}},{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}},{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}},{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}},{{&l_222[1],&l_222[1],&l_222[1],&l_222[1]},{&l_222[1],&l_222[1],&l_222[1],&l_222[1]}}};
    uint32_t *l_223 = &p_633->g_196;
    uint32_t **l_224[10][2] = {{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223},{(void*)0,&l_223}};
    uint32_t *l_226 = &p_633->g_196;
    int32_t *l_227 = &p_633->g_201;
    int32_t l_236[5][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
    uint32_t l_237 = 4UL;
    int32_t l_240 = 0L;
    VECTOR(int8_t, 2) l_241 = (VECTOR(int8_t, 2))(0x27L, 0x41L);
    VECTOR(int8_t, 4) l_242 = (VECTOR(int8_t, 4))(0x63L, (VECTOR(int8_t, 2))(0x63L, 0x65L), 0x65L);
    VECTOR(uint64_t, 4) l_244 = (VECTOR(uint64_t, 4))(0x5FB812E36782FDE8L, (VECTOR(uint64_t, 2))(0x5FB812E36782FDE8L, 18446744073709551615UL), 18446744073709551615UL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_222[i] = (void*)0;
    (*l_227) ^= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((*p_59) , (safe_div_func_uint32_t_u_u(((0x6A5DDA62993E52E9L >= (((VECTOR(int64_t, 4))(l_211.yyyx)).y != ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((*p_57), (safe_sub_func_uint32_t_u_u((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x481BL, 0x7A73L)).xxyyxxxx)).s31, ((VECTOR(uint16_t, 8))(p_633->g_216.s160d31ff)).s24))))).hi , ((p_633->g_83 >= ((!(safe_lshift_func_int16_t_s_u((*p_633->g_144), 3))) | (safe_rshift_func_uint8_t_u_s(l_211.y, 2)))) , l_221[2][1][2])) == &l_222[1]) , ((p_633->g_225[0][5][1] = l_223) == l_226)), 0x290C5504L)), 0x2805L, 0x47C1L)).zzywyzyw)))).s43, ((VECTOR(int16_t, 2))(1L))))).even, l_211.x)) , l_211.x))) & l_211.x), 4294967295UL))), l_211.x)), (*p_633->g_144)));
    for (p_633->g_204.f3 = 9; (p_633->g_204.f3 == (-5)); p_633->g_204.f3 = safe_sub_func_int8_t_s_s(p_633->g_204.f3, 6))
    { /* block id: 82 */
        int32_t *l_232 = &p_633->g_201;
        int32_t *l_233 = &p_633->g_201;
        int32_t *l_234 = &p_633->g_201;
        int32_t *l_235[9] = {&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11,&p_633->g_11};
        int i;
        (*l_227) = (((p_57 = (void*)0) == (void*)0) ^ (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))((-1L), 0x67D7L, 0x7813L, 2L)).w, 14)));
        ++l_237;
    }
    (*l_227) = (p_633->g_150.x == ((l_240 && ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))((*l_227), (*l_227), 0x24L, (-1L))).yzzwzxzzwxxwyyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))((*l_227), (-8L), 0x0BL, (*l_227), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(l_241.yxyx)).yxwzzwxwwyzwywzx))).s702a)).xxxywwwx)).s3, 0L, 0L, 0x4FL)).lo, ((VECTOR(int8_t, 2))(l_242.zw)).yyyy))), (+((*l_227) || ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(p_633->g_243.s7100724646316362)).lo, ((VECTOR(uint64_t, 16))(l_244.wxzyyzyyyyywwxzw)).odd))).s3)), ((*p_633->g_144) , ((l_224[9][0] = &l_226) != (void*)0)), (-1L), (-4L), 0x1AL, ((VECTOR(int8_t, 2))(0x35L)), ((VECTOR(int8_t, 2))(0x2EL)), 0x5CL, 1L, 0x38L))))).se056, ((VECTOR(int8_t, 4))((-3L)))))).lo, ((VECTOR(uint8_t, 2))(255UL))))))), ((VECTOR(int16_t, 2))(0x7622L)), ((VECTOR(int16_t, 2))(0x5EA7L))))).even) != (*l_227)));
    return &p_633->g_155;
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_168 p_633->g_119 p_633->g_comm_values p_633->g_155.f3 p_633->g_37 p_633->g_196 p_633->g_145
 * writes: p_633->g_144 p_633->g_196
 */
int16_t * func_60(int64_t  p_61, int64_t  p_62, struct S2 * p_633)
{ /* block id: 60 */
    uint16_t *l_160 = (void*)0;
    uint16_t **l_161 = (void*)0;
    uint16_t *l_162 = &p_633->g_37[6];
    int32_t l_163[8][4] = {{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L},{1L,2L,2L,2L}};
    VECTOR(uint16_t, 16) l_189 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
    uint8_t l_197 = 255UL;
    int32_t l_199 = 0x3978347AL;
    int i, j;
    l_163[7][1] |= ((l_160 != (l_162 = (void*)0)) , 1L);
    for (p_61 = 19; (p_61 < (-6)); p_61 = safe_sub_func_int32_t_s_s(p_61, 1))
    { /* block id: 65 */
        int16_t l_166 = 0x3DD2L;
        uint16_t **l_170 = &l_162;
        int32_t *l_175 = &l_163[7][1];
        int32_t **l_176 = &l_175;
        int32_t *l_178 = (void*)0;
        int32_t **l_177 = &l_178;
        int16_t **l_183[9][6][4] = {{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}},{{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144},{&p_633->g_144,&p_633->g_144,&p_633->g_144,&p_633->g_144}}};
        uint32_t *l_194 = (void*)0;
        uint32_t *l_195 = &p_633->g_196;
        int32_t *l_198 = &l_163[2][0];
        int32_t *l_200[2][5] = {{&p_633->g_201,&p_633->g_201,&p_633->g_201,&p_633->g_201,&p_633->g_201},{&p_633->g_201,&p_633->g_201,&p_633->g_201,&p_633->g_201,&p_633->g_201}};
        uint16_t l_202 = 0x96EEL;
        int i, j, k;
        l_163[0][2] = (l_166 || l_163[7][1]);
        l_202 = ((p_633->g_168 != l_170) <= (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((((*l_176) = l_175) != ((*l_177) = &p_633->g_11)), 0xA269L)), ((((((((l_199 = ((safe_lshift_func_int8_t_s_s(((p_633->g_144 = &p_633->g_51) != ((safe_rshift_func_int8_t_s_u(p_633->g_119[1], 4)) , &p_633->g_119[1])), 3)) || (((*l_198) = (safe_sub_func_int8_t_s_s((((VECTOR(uint32_t, 8))(((*l_195) |= (safe_unary_minus_func_int16_t_s(((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(l_189.sdb80f26fc9603b0c)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((~((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_633->g_comm_values[p_633->tid] & p_62), FAKE_DIVERGE(p_633->local_0_offset, get_local_id(0), 10))), 0x7705L)) != 0x05L)), 0xC490L, p_61, 0x8AECL, p_61, 0xF92AL, 65535UL, 65535UL)).s0661514670247211))))).se != p_633->g_155.f3) >= p_633->g_37[4])))), ((VECTOR(uint32_t, 4))(7UL)), p_61, 0x2F86AFBFL, 4UL)).s7 < 3UL), l_197))) > 0x3DC80103L))) , p_61) > 0x607AL) || 0xB072L) , 0xD18F8EAD33D034B4L) == p_61) ^ p_62) > p_633->g_145.s1))));
        l_199 = (-1L);
    }
    return &p_633->g_119[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_633->g_97 p_633->g_51 p_633->g_11 p_633->g_105 p_633->g_comm_values p_633->g_37 p_633->g_122 p_633->g_125 p_633->g_111 p_633->g_139 p_633->g_145 p_633->g_150 p_633->g_144
 * writes: p_633->g_83 p_633->g_97 p_633->g_119 p_633->g_122 p_633->g_125 p_633->g_111 p_633->g_37 p_633->g_144 p_633->g_156 p_633->g_51
 */
int64_t  func_68(int32_t  p_69, int16_t * p_70, int32_t * p_71, struct S2 * p_633)
{ /* block id: 33 */
    VECTOR(uint16_t, 8) l_94 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x871CL), 0x871CL), 0x871CL, 6UL, 0x871CL);
    VECTOR(uint32_t, 4) l_104 = (VECTOR(uint32_t, 4))(0x927B072BL, (VECTOR(uint32_t, 2))(0x927B072BL, 0UL), 0UL);
    int8_t *l_106 = &p_633->g_83;
    uint8_t *l_107 = (void*)0;
    uint8_t *l_108 = (void*)0;
    int32_t l_109 = 0x31636316L;
    uint8_t *l_110[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_112 = 0x20BB848FL;
    int32_t l_113 = 0x75F9727AL;
    int32_t l_114 = 0x181B607EL;
    int32_t l_115[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int16_t *l_118 = &p_633->g_119[1];
    uint16_t *l_123 = (void*)0;
    int64_t *l_124 = &p_633->g_125;
    int64_t *l_126[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_127 = &l_113;
    uint16_t *l_135 = (void*)0;
    uint16_t *l_136 = &p_633->g_37[6];
    VECTOR(int16_t, 8) l_140 = (VECTOR(int16_t, 8))(0x1A0EL, (VECTOR(int16_t, 4))(0x1A0EL, (VECTOR(int16_t, 2))(0x1A0EL, 0x6350L), 0x6350L), 0x6350L, 0x1A0EL, 0x6350L);
    int16_t *l_141 = &p_633->g_51;
    int16_t **l_142 = (void*)0;
    int16_t **l_143[3][10] = {{&l_141,&l_118,&l_118,(void*)0,&l_141,&l_141,(void*)0,(void*)0,(void*)0,&l_141},{&l_141,&l_118,&l_118,(void*)0,&l_141,&l_141,(void*)0,(void*)0,(void*)0,&l_141},{&l_141,&l_118,&l_118,(void*)0,&l_141,&l_141,(void*)0,(void*)0,(void*)0,&l_141}};
    VECTOR(int16_t, 4) l_146 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2E10L), 0x2E10L);
    VECTOR(int16_t, 2) l_147 = (VECTOR(int16_t, 2))(0x23ECL, 0x7B64L);
    union U1 *l_154 = &p_633->g_155;
    union U1 **l_153[5][5] = {{&l_154,&l_154,&l_154,&l_154,&l_154},{&l_154,&l_154,&l_154,&l_154,&l_154},{&l_154,&l_154,&l_154,&l_154,&l_154},{&l_154,&l_154,&l_154,&l_154,&l_154},{&l_154,&l_154,&l_154,&l_154,&l_154}};
    union U1 *l_157[5] = {&p_633->g_155,&p_633->g_155,&p_633->g_155,&p_633->g_155,&p_633->g_155};
    int32_t *l_158 = &l_115[6];
    int i, j;
    (*l_127) = (safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 4))(l_94.s7660)), (uint16_t)(((safe_lshift_func_uint8_t_u_u(250UL, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(p_633->g_97.s33)).xxxxxxyy))).s3)) , ((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_633->group_2_offset, get_group_id(2), 10), ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((*p_70), ((*l_118) = ((((!(*p_71)) < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_104.ywzx)), ((VECTOR(uint32_t, 2))(p_633->g_105.s26)), 1UL, 4294967289UL)).s5) && (((*l_106) = p_633->g_comm_values[p_633->tid]) <= 0xDAL)) | (p_633->g_97.s1--))))), (safe_add_func_int8_t_s_s(((l_112 ^= (p_633->g_37[5] | (p_633->g_122.s4 = ((VECTOR(uint16_t, 16))(p_633->g_122.s5363555275334662)).se))) < ((((l_109 = (l_115[6] = ((*l_124) = p_69))) , l_94.s2) || ((l_114 = (1UL == l_113)) > p_633->g_125)) <= p_69)), 0x28L)))) ^ l_113))) == p_633->g_11)) ^ l_104.z), (uint16_t)p_69))).w));
    for (p_633->g_111 = 0; (p_633->g_111 >= (-2)); p_633->g_111--)
    { /* block id: 46 */
        uint16_t l_130 = 65531UL;
        l_130--;
        if ((*p_71))
            break;
    }
    (*l_127) = (safe_add_func_int32_t_s_s(1L, (((--(*l_136)) ^ ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(p_633->g_139.s95bfae32fe6cd9d4)).s3cf3)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(0x7827L, 0L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((*p_70), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(l_140.s7667670407244766)).s19))), 0x06A0L, ((l_107 == l_108) == (l_141 != (p_633->g_144 = p_70))), 0x1E1CL, 0x45D0L, 0x0454L)))).s75))).yyxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_633->g_145.s1fe2)), ((*l_118) = ((VECTOR(int16_t, 16))(l_146.zzywyzxxxzxyxwyw)).sc), ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(9L, 0x209BL, 0x5C42L, 0x7EECL)).hi, (int16_t)((VECTOR(int16_t, 4))(l_147.yxyy)).w, (int16_t)(&p_633->g_11 == ((((*l_124) = (safe_lshift_func_uint16_t_u_u(((((((VECTOR(uint16_t, 16))(p_633->g_150.xzywywwxzywzxzwy)).sd >= ((*p_633->g_144) = (safe_lshift_func_uint8_t_u_u(((p_633->g_156 = (void*)0) == &p_633->g_155), 6)))) ^ p_69) , l_157[1]) != (void*)0), 3))) , (*l_127)) , (void*)0))))), 0L)).s61, ((VECTOR(int16_t, 2))(0L))))).xyxxyxyy, ((VECTOR(int16_t, 8))(0L))))).odd))))).even)).odd) , (*l_127))));
    (*l_158) ^= (*l_127);
    return p_69;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_comm_values[i] = 1;
    struct S2 c_634;
    struct S2* p_633 = &c_634;
    struct S2 c_635 = {
        (-1L), // p_633->g_11
        {&p_633->g_11,&p_633->g_11}, // p_633->g_10
        {0UL}, // p_633->g_31
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_633->g_37
        0x0EF1L, // p_633->g_51
        0x29L, // p_633->g_83
        (VECTOR(uint8_t, 16))(0x4EL, (VECTOR(uint8_t, 4))(0x4EL, (VECTOR(uint8_t, 2))(0x4EL, 0x8FL), 0x8FL), 0x8FL, 0x4EL, 0x8FL, (VECTOR(uint8_t, 2))(0x4EL, 0x8FL), (VECTOR(uint8_t, 2))(0x4EL, 0x8FL), 0x4EL, 0x8FL, 0x4EL, 0x8FL), // p_633->g_97
        (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xE2B5FF26L), 0xE2B5FF26L), 0xE2B5FF26L, 4294967295UL, 0xE2B5FF26L), // p_633->g_105
        (-1L), // p_633->g_111
        {0x199DL,0x199DL}, // p_633->g_119
        (VECTOR(uint16_t, 8))(0xFEB6L, (VECTOR(uint16_t, 4))(0xFEB6L, (VECTOR(uint16_t, 2))(0xFEB6L, 1UL), 1UL), 1UL, 0xFEB6L, 1UL), // p_633->g_122
        (-2L), // p_633->g_125
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int16_t, 2))((-1L), (-6L)), (VECTOR(int16_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L)), // p_633->g_139
        &p_633->g_119[1], // p_633->g_144
        (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int16_t, 2))((-2L), 0L), (VECTOR(int16_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L), // p_633->g_145
        (VECTOR(uint16_t, 4))(0x8046L, (VECTOR(uint16_t, 2))(0x8046L, 0xA15EL), 0xA15EL), // p_633->g_150
        {0x5B0B106958104EEDL}, // p_633->g_155
        (void*)0, // p_633->g_156
        (void*)0, // p_633->g_167
        &p_633->g_37[5], // p_633->g_169
        &p_633->g_169, // p_633->g_168
        0xB89C927EL, // p_633->g_196
        2L, // p_633->g_201
        {0x2ED0E2EEFEA89C39L}, // p_633->g_204
        &p_633->g_204, // p_633->g_203
        (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0xD09DL), 0xD09DL), 0xD09DL, 3UL, 0xD09DL, (VECTOR(uint16_t, 2))(3UL, 0xD09DL), (VECTOR(uint16_t, 2))(3UL, 0xD09DL), 3UL, 0xD09DL, 3UL, 0xD09DL), // p_633->g_216
        {{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}},{{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196},{&p_633->g_196,&p_633->g_196,&p_633->g_196,&p_633->g_196}}}, // p_633->g_225
        (VECTOR(uint64_t, 8))(0xAD097FBBC7000DFBL, (VECTOR(uint64_t, 4))(0xAD097FBBC7000DFBL, (VECTOR(uint64_t, 2))(0xAD097FBBC7000DFBL, 0x179703896E17EB04L), 0x179703896E17EB04L), 0x179703896E17EB04L, 0xAD097FBBC7000DFBL, 0x179703896E17EB04L), // p_633->g_243
        (void*)0, // p_633->g_298
        (VECTOR(uint32_t, 2))(1UL, 3UL), // p_633->g_305
        {{{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}}},{{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}}},{{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}}},{{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}}},{{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}},{{0x1600E4EE1541A47FL},{0x78BEB16D0730CCCBL},{1UL}}}}, // p_633->g_353
        0x7E62C02FL, // p_633->g_381
        &p_633->g_381, // p_633->g_388
        0x1E30L, // p_633->g_397
        0x09D4L, // p_633->g_425
        (VECTOR(int32_t, 16))(0x5698DE07L, (VECTOR(int32_t, 4))(0x5698DE07L, (VECTOR(int32_t, 2))(0x5698DE07L, 0x54E2FF5EL), 0x54E2FF5EL), 0x54E2FF5EL, 0x5698DE07L, 0x54E2FF5EL, (VECTOR(int32_t, 2))(0x5698DE07L, 0x54E2FF5EL), (VECTOR(int32_t, 2))(0x5698DE07L, 0x54E2FF5EL), 0x5698DE07L, 0x54E2FF5EL, 0x5698DE07L, 0x54E2FF5EL), // p_633->g_494
        {{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}},{{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203},{&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_156,&p_633->g_203}}}, // p_633->g_519
        (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0x361F700FL), 0x361F700FL), 0x361F700FL, 3UL, 0x361F700FL), // p_633->g_540
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL, (VECTOR(uint8_t, 2))(0UL, 6UL), (VECTOR(uint8_t, 2))(0UL, 6UL), 0UL, 6UL, 0UL, 6UL), // p_633->g_544
        (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 5UL), 5UL), 5UL, 254UL, 5UL, (VECTOR(uint8_t, 2))(254UL, 5UL), (VECTOR(uint8_t, 2))(254UL, 5UL), 254UL, 5UL, 254UL, 5UL), // p_633->g_545
        (VECTOR(uint8_t, 2))(1UL, 0x8DL), // p_633->g_547
        (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0xE04D5FAC63E6A97BL), 0xE04D5FAC63E6A97BL), // p_633->g_585
        {&p_633->g_388}, // p_633->g_623
        (void*)0, // p_633->g_628
        &p_633->g_628, // p_633->g_627
        &p_633->g_627, // p_633->g_626
        0, // p_633->v_collective
        sequence_input[get_global_id(0)], // p_633->global_0_offset
        sequence_input[get_global_id(1)], // p_633->global_1_offset
        sequence_input[get_global_id(2)], // p_633->global_2_offset
        sequence_input[get_local_id(0)], // p_633->local_0_offset
        sequence_input[get_local_id(1)], // p_633->local_1_offset
        sequence_input[get_local_id(2)], // p_633->local_2_offset
        sequence_input[get_group_id(0)], // p_633->group_0_offset
        sequence_input[get_group_id(1)], // p_633->group_1_offset
        sequence_input[get_group_id(2)], // p_633->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[0][get_linear_local_id()])), // p_633->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_634 = c_635;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_633);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_633->g_11, "p_633->g_11", print_hash_value);
    transparent_crc(p_633->g_31.f0, "p_633->g_31.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_633->g_37[i], "p_633->g_37[i]", print_hash_value);

    }
    transparent_crc(p_633->g_51, "p_633->g_51", print_hash_value);
    transparent_crc(p_633->g_83, "p_633->g_83", print_hash_value);
    transparent_crc(p_633->g_97.s0, "p_633->g_97.s0", print_hash_value);
    transparent_crc(p_633->g_97.s1, "p_633->g_97.s1", print_hash_value);
    transparent_crc(p_633->g_97.s2, "p_633->g_97.s2", print_hash_value);
    transparent_crc(p_633->g_97.s3, "p_633->g_97.s3", print_hash_value);
    transparent_crc(p_633->g_97.s4, "p_633->g_97.s4", print_hash_value);
    transparent_crc(p_633->g_97.s5, "p_633->g_97.s5", print_hash_value);
    transparent_crc(p_633->g_97.s6, "p_633->g_97.s6", print_hash_value);
    transparent_crc(p_633->g_97.s7, "p_633->g_97.s7", print_hash_value);
    transparent_crc(p_633->g_97.s8, "p_633->g_97.s8", print_hash_value);
    transparent_crc(p_633->g_97.s9, "p_633->g_97.s9", print_hash_value);
    transparent_crc(p_633->g_97.sa, "p_633->g_97.sa", print_hash_value);
    transparent_crc(p_633->g_97.sb, "p_633->g_97.sb", print_hash_value);
    transparent_crc(p_633->g_97.sc, "p_633->g_97.sc", print_hash_value);
    transparent_crc(p_633->g_97.sd, "p_633->g_97.sd", print_hash_value);
    transparent_crc(p_633->g_97.se, "p_633->g_97.se", print_hash_value);
    transparent_crc(p_633->g_97.sf, "p_633->g_97.sf", print_hash_value);
    transparent_crc(p_633->g_105.s0, "p_633->g_105.s0", print_hash_value);
    transparent_crc(p_633->g_105.s1, "p_633->g_105.s1", print_hash_value);
    transparent_crc(p_633->g_105.s2, "p_633->g_105.s2", print_hash_value);
    transparent_crc(p_633->g_105.s3, "p_633->g_105.s3", print_hash_value);
    transparent_crc(p_633->g_105.s4, "p_633->g_105.s4", print_hash_value);
    transparent_crc(p_633->g_105.s5, "p_633->g_105.s5", print_hash_value);
    transparent_crc(p_633->g_105.s6, "p_633->g_105.s6", print_hash_value);
    transparent_crc(p_633->g_105.s7, "p_633->g_105.s7", print_hash_value);
    transparent_crc(p_633->g_111, "p_633->g_111", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_633->g_119[i], "p_633->g_119[i]", print_hash_value);

    }
    transparent_crc(p_633->g_122.s0, "p_633->g_122.s0", print_hash_value);
    transparent_crc(p_633->g_122.s1, "p_633->g_122.s1", print_hash_value);
    transparent_crc(p_633->g_122.s2, "p_633->g_122.s2", print_hash_value);
    transparent_crc(p_633->g_122.s3, "p_633->g_122.s3", print_hash_value);
    transparent_crc(p_633->g_122.s4, "p_633->g_122.s4", print_hash_value);
    transparent_crc(p_633->g_122.s5, "p_633->g_122.s5", print_hash_value);
    transparent_crc(p_633->g_122.s6, "p_633->g_122.s6", print_hash_value);
    transparent_crc(p_633->g_122.s7, "p_633->g_122.s7", print_hash_value);
    transparent_crc(p_633->g_125, "p_633->g_125", print_hash_value);
    transparent_crc(p_633->g_139.s0, "p_633->g_139.s0", print_hash_value);
    transparent_crc(p_633->g_139.s1, "p_633->g_139.s1", print_hash_value);
    transparent_crc(p_633->g_139.s2, "p_633->g_139.s2", print_hash_value);
    transparent_crc(p_633->g_139.s3, "p_633->g_139.s3", print_hash_value);
    transparent_crc(p_633->g_139.s4, "p_633->g_139.s4", print_hash_value);
    transparent_crc(p_633->g_139.s5, "p_633->g_139.s5", print_hash_value);
    transparent_crc(p_633->g_139.s6, "p_633->g_139.s6", print_hash_value);
    transparent_crc(p_633->g_139.s7, "p_633->g_139.s7", print_hash_value);
    transparent_crc(p_633->g_139.s8, "p_633->g_139.s8", print_hash_value);
    transparent_crc(p_633->g_139.s9, "p_633->g_139.s9", print_hash_value);
    transparent_crc(p_633->g_139.sa, "p_633->g_139.sa", print_hash_value);
    transparent_crc(p_633->g_139.sb, "p_633->g_139.sb", print_hash_value);
    transparent_crc(p_633->g_139.sc, "p_633->g_139.sc", print_hash_value);
    transparent_crc(p_633->g_139.sd, "p_633->g_139.sd", print_hash_value);
    transparent_crc(p_633->g_139.se, "p_633->g_139.se", print_hash_value);
    transparent_crc(p_633->g_139.sf, "p_633->g_139.sf", print_hash_value);
    transparent_crc(p_633->g_145.s0, "p_633->g_145.s0", print_hash_value);
    transparent_crc(p_633->g_145.s1, "p_633->g_145.s1", print_hash_value);
    transparent_crc(p_633->g_145.s2, "p_633->g_145.s2", print_hash_value);
    transparent_crc(p_633->g_145.s3, "p_633->g_145.s3", print_hash_value);
    transparent_crc(p_633->g_145.s4, "p_633->g_145.s4", print_hash_value);
    transparent_crc(p_633->g_145.s5, "p_633->g_145.s5", print_hash_value);
    transparent_crc(p_633->g_145.s6, "p_633->g_145.s6", print_hash_value);
    transparent_crc(p_633->g_145.s7, "p_633->g_145.s7", print_hash_value);
    transparent_crc(p_633->g_145.s8, "p_633->g_145.s8", print_hash_value);
    transparent_crc(p_633->g_145.s9, "p_633->g_145.s9", print_hash_value);
    transparent_crc(p_633->g_145.sa, "p_633->g_145.sa", print_hash_value);
    transparent_crc(p_633->g_145.sb, "p_633->g_145.sb", print_hash_value);
    transparent_crc(p_633->g_145.sc, "p_633->g_145.sc", print_hash_value);
    transparent_crc(p_633->g_145.sd, "p_633->g_145.sd", print_hash_value);
    transparent_crc(p_633->g_145.se, "p_633->g_145.se", print_hash_value);
    transparent_crc(p_633->g_145.sf, "p_633->g_145.sf", print_hash_value);
    transparent_crc(p_633->g_150.x, "p_633->g_150.x", print_hash_value);
    transparent_crc(p_633->g_150.y, "p_633->g_150.y", print_hash_value);
    transparent_crc(p_633->g_150.z, "p_633->g_150.z", print_hash_value);
    transparent_crc(p_633->g_150.w, "p_633->g_150.w", print_hash_value);
    transparent_crc(p_633->g_196, "p_633->g_196", print_hash_value);
    transparent_crc(p_633->g_201, "p_633->g_201", print_hash_value);
    transparent_crc(p_633->g_216.s0, "p_633->g_216.s0", print_hash_value);
    transparent_crc(p_633->g_216.s1, "p_633->g_216.s1", print_hash_value);
    transparent_crc(p_633->g_216.s2, "p_633->g_216.s2", print_hash_value);
    transparent_crc(p_633->g_216.s3, "p_633->g_216.s3", print_hash_value);
    transparent_crc(p_633->g_216.s4, "p_633->g_216.s4", print_hash_value);
    transparent_crc(p_633->g_216.s5, "p_633->g_216.s5", print_hash_value);
    transparent_crc(p_633->g_216.s6, "p_633->g_216.s6", print_hash_value);
    transparent_crc(p_633->g_216.s7, "p_633->g_216.s7", print_hash_value);
    transparent_crc(p_633->g_216.s8, "p_633->g_216.s8", print_hash_value);
    transparent_crc(p_633->g_216.s9, "p_633->g_216.s9", print_hash_value);
    transparent_crc(p_633->g_216.sa, "p_633->g_216.sa", print_hash_value);
    transparent_crc(p_633->g_216.sb, "p_633->g_216.sb", print_hash_value);
    transparent_crc(p_633->g_216.sc, "p_633->g_216.sc", print_hash_value);
    transparent_crc(p_633->g_216.sd, "p_633->g_216.sd", print_hash_value);
    transparent_crc(p_633->g_216.se, "p_633->g_216.se", print_hash_value);
    transparent_crc(p_633->g_216.sf, "p_633->g_216.sf", print_hash_value);
    transparent_crc(p_633->g_243.s0, "p_633->g_243.s0", print_hash_value);
    transparent_crc(p_633->g_243.s1, "p_633->g_243.s1", print_hash_value);
    transparent_crc(p_633->g_243.s2, "p_633->g_243.s2", print_hash_value);
    transparent_crc(p_633->g_243.s3, "p_633->g_243.s3", print_hash_value);
    transparent_crc(p_633->g_243.s4, "p_633->g_243.s4", print_hash_value);
    transparent_crc(p_633->g_243.s5, "p_633->g_243.s5", print_hash_value);
    transparent_crc(p_633->g_243.s6, "p_633->g_243.s6", print_hash_value);
    transparent_crc(p_633->g_243.s7, "p_633->g_243.s7", print_hash_value);
    transparent_crc(p_633->g_305.x, "p_633->g_305.x", print_hash_value);
    transparent_crc(p_633->g_305.y, "p_633->g_305.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_633->g_353[i][j][k].f0, "p_633->g_353[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_633->g_381, "p_633->g_381", print_hash_value);
    transparent_crc(p_633->g_397, "p_633->g_397", print_hash_value);
    transparent_crc(p_633->g_425, "p_633->g_425", print_hash_value);
    transparent_crc(p_633->g_494.s0, "p_633->g_494.s0", print_hash_value);
    transparent_crc(p_633->g_494.s1, "p_633->g_494.s1", print_hash_value);
    transparent_crc(p_633->g_494.s2, "p_633->g_494.s2", print_hash_value);
    transparent_crc(p_633->g_494.s3, "p_633->g_494.s3", print_hash_value);
    transparent_crc(p_633->g_494.s4, "p_633->g_494.s4", print_hash_value);
    transparent_crc(p_633->g_494.s5, "p_633->g_494.s5", print_hash_value);
    transparent_crc(p_633->g_494.s6, "p_633->g_494.s6", print_hash_value);
    transparent_crc(p_633->g_494.s7, "p_633->g_494.s7", print_hash_value);
    transparent_crc(p_633->g_494.s8, "p_633->g_494.s8", print_hash_value);
    transparent_crc(p_633->g_494.s9, "p_633->g_494.s9", print_hash_value);
    transparent_crc(p_633->g_494.sa, "p_633->g_494.sa", print_hash_value);
    transparent_crc(p_633->g_494.sb, "p_633->g_494.sb", print_hash_value);
    transparent_crc(p_633->g_494.sc, "p_633->g_494.sc", print_hash_value);
    transparent_crc(p_633->g_494.sd, "p_633->g_494.sd", print_hash_value);
    transparent_crc(p_633->g_494.se, "p_633->g_494.se", print_hash_value);
    transparent_crc(p_633->g_494.sf, "p_633->g_494.sf", print_hash_value);
    transparent_crc(p_633->g_540.s0, "p_633->g_540.s0", print_hash_value);
    transparent_crc(p_633->g_540.s1, "p_633->g_540.s1", print_hash_value);
    transparent_crc(p_633->g_540.s2, "p_633->g_540.s2", print_hash_value);
    transparent_crc(p_633->g_540.s3, "p_633->g_540.s3", print_hash_value);
    transparent_crc(p_633->g_540.s4, "p_633->g_540.s4", print_hash_value);
    transparent_crc(p_633->g_540.s5, "p_633->g_540.s5", print_hash_value);
    transparent_crc(p_633->g_540.s6, "p_633->g_540.s6", print_hash_value);
    transparent_crc(p_633->g_540.s7, "p_633->g_540.s7", print_hash_value);
    transparent_crc(p_633->g_544.s0, "p_633->g_544.s0", print_hash_value);
    transparent_crc(p_633->g_544.s1, "p_633->g_544.s1", print_hash_value);
    transparent_crc(p_633->g_544.s2, "p_633->g_544.s2", print_hash_value);
    transparent_crc(p_633->g_544.s3, "p_633->g_544.s3", print_hash_value);
    transparent_crc(p_633->g_544.s4, "p_633->g_544.s4", print_hash_value);
    transparent_crc(p_633->g_544.s5, "p_633->g_544.s5", print_hash_value);
    transparent_crc(p_633->g_544.s6, "p_633->g_544.s6", print_hash_value);
    transparent_crc(p_633->g_544.s7, "p_633->g_544.s7", print_hash_value);
    transparent_crc(p_633->g_544.s8, "p_633->g_544.s8", print_hash_value);
    transparent_crc(p_633->g_544.s9, "p_633->g_544.s9", print_hash_value);
    transparent_crc(p_633->g_544.sa, "p_633->g_544.sa", print_hash_value);
    transparent_crc(p_633->g_544.sb, "p_633->g_544.sb", print_hash_value);
    transparent_crc(p_633->g_544.sc, "p_633->g_544.sc", print_hash_value);
    transparent_crc(p_633->g_544.sd, "p_633->g_544.sd", print_hash_value);
    transparent_crc(p_633->g_544.se, "p_633->g_544.se", print_hash_value);
    transparent_crc(p_633->g_544.sf, "p_633->g_544.sf", print_hash_value);
    transparent_crc(p_633->g_545.s0, "p_633->g_545.s0", print_hash_value);
    transparent_crc(p_633->g_545.s1, "p_633->g_545.s1", print_hash_value);
    transparent_crc(p_633->g_545.s2, "p_633->g_545.s2", print_hash_value);
    transparent_crc(p_633->g_545.s3, "p_633->g_545.s3", print_hash_value);
    transparent_crc(p_633->g_545.s4, "p_633->g_545.s4", print_hash_value);
    transparent_crc(p_633->g_545.s5, "p_633->g_545.s5", print_hash_value);
    transparent_crc(p_633->g_545.s6, "p_633->g_545.s6", print_hash_value);
    transparent_crc(p_633->g_545.s7, "p_633->g_545.s7", print_hash_value);
    transparent_crc(p_633->g_545.s8, "p_633->g_545.s8", print_hash_value);
    transparent_crc(p_633->g_545.s9, "p_633->g_545.s9", print_hash_value);
    transparent_crc(p_633->g_545.sa, "p_633->g_545.sa", print_hash_value);
    transparent_crc(p_633->g_545.sb, "p_633->g_545.sb", print_hash_value);
    transparent_crc(p_633->g_545.sc, "p_633->g_545.sc", print_hash_value);
    transparent_crc(p_633->g_545.sd, "p_633->g_545.sd", print_hash_value);
    transparent_crc(p_633->g_545.se, "p_633->g_545.se", print_hash_value);
    transparent_crc(p_633->g_545.sf, "p_633->g_545.sf", print_hash_value);
    transparent_crc(p_633->g_547.x, "p_633->g_547.x", print_hash_value);
    transparent_crc(p_633->g_547.y, "p_633->g_547.y", print_hash_value);
    transparent_crc(p_633->g_585.x, "p_633->g_585.x", print_hash_value);
    transparent_crc(p_633->g_585.y, "p_633->g_585.y", print_hash_value);
    transparent_crc(p_633->g_585.z, "p_633->g_585.z", print_hash_value);
    transparent_crc(p_633->g_585.w, "p_633->g_585.w", print_hash_value);
    transparent_crc(p_633->v_collective, "p_633->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 40; i++)
            transparent_crc(p_633->g_special_values[i + 40 * get_linear_group_id()], "p_633->g_special_values[i + 40 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 40; i++)
            transparent_crc(p_633->l_special_values[i], "p_633->l_special_values[i]", print_hash_value);
    transparent_crc(p_633->l_comm_values[get_linear_local_id()], "p_633->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_633->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()], "p_633->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
