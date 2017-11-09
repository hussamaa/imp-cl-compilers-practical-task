// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 63,57,1 -l 21,1,1
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

__constant uint32_t permutations[10][21] = {
{9,18,16,2,3,6,17,15,8,14,19,7,20,10,13,0,1,5,11,12,4}, // permutation 0
{5,12,0,11,16,10,13,18,20,9,8,2,17,14,1,7,3,4,6,15,19}, // permutation 1
{10,7,12,18,3,0,1,8,5,14,6,13,2,15,4,20,19,9,17,11,16}, // permutation 2
{6,3,20,16,2,19,1,10,5,11,8,12,4,15,0,13,17,7,18,14,9}, // permutation 3
{1,0,18,11,7,20,14,6,12,8,16,4,2,3,9,17,5,13,19,10,15}, // permutation 4
{5,0,4,17,19,7,14,13,3,18,8,2,16,11,9,10,12,20,15,6,1}, // permutation 5
{12,5,10,6,20,7,18,11,16,15,2,4,17,0,3,9,8,1,14,13,19}, // permutation 6
{11,8,3,1,2,17,16,18,13,6,15,10,5,12,7,14,0,9,19,4,20}, // permutation 7
{4,12,1,2,14,0,9,3,13,8,5,16,11,7,18,6,20,17,15,19,10}, // permutation 8
{18,16,11,15,13,4,12,2,10,0,14,5,9,7,19,17,6,8,1,20,3} // permutation 9
};

// Seed: 699526192

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int16_t  f0;
   volatile int32_t  f1;
   uint32_t  f2;
   int32_t  f3;
   uint64_t  f4;
   volatile uint64_t  f5;
   uint8_t  f6;
   volatile uint32_t  f7;
   uint32_t  f8;
};

union U1 {
   int8_t * f0;
   int32_t  f1;
   volatile int64_t  f2;
};

union U2 {
   int8_t * f0;
   uint32_t  f1;
   int16_t  f2;
};

union U3 {
   volatile int8_t * volatile  f0;
   uint32_t  f1;
   int8_t * f2;
};

union U4 {
   int64_t  f0;
};

struct S5 {
    VECTOR(int64_t, 4) g_7;
    int32_t g_28;
    int32_t *g_27;
    int32_t g_42;
    VECTOR(uint32_t, 8) g_52;
    int32_t g_77[2];
    int8_t g_83;
    int8_t *g_82;
    uint8_t g_108[2][6][4];
    struct S0 g_111;
    struct S0 g_112[2];
    int32_t g_115;
    volatile struct S0 g_129;
    int8_t **g_130;
    union U2 g_134;
    uint16_t g_145;
    VECTOR(uint32_t, 4) g_156;
    volatile union U1 g_162;
    volatile union U3 g_169;
    union U4 *g_176;
    union U4 **g_175[7][7];
    union U4 *** volatile g_174;
    uint64_t g_186;
    VECTOR(int32_t, 4) g_199;
    int32_t g_215;
    volatile struct S0 * volatile g_241[10];
    volatile struct S0 g_242;
    int8_t ***g_252;
    int32_t ** volatile g_259;
    union U3 g_274;
    struct S0 *g_389[2];
    volatile VECTOR(int32_t, 2) g_390;
    struct S0 **g_399;
    uint32_t g_412;
    int64_t *g_418;
    volatile VECTOR(uint64_t, 4) g_419;
    volatile VECTOR(int32_t, 4) g_421;
    VECTOR(int32_t, 16) g_424;
    int32_t *g_436[4][2];
    int32_t ** volatile g_435;
    int32_t g_439;
    volatile union U1 g_440;
    VECTOR(int32_t, 4) g_443;
    VECTOR(uint16_t, 4) g_447;
    VECTOR(int8_t, 2) g_458;
    int8_t g_478;
    volatile union U3 g_551;
    uint32_t *g_567;
    VECTOR(int64_t, 8) g_576;
    union U1 g_580;
    volatile struct S0 g_581[7][5];
    volatile struct S0 g_582[6][8][2];
    volatile struct S0 g_591;
    int16_t g_596;
    int16_t *g_595[4][3][6];
    VECTOR(int8_t, 8) g_599;
    int32_t g_607;
    volatile VECTOR(uint32_t, 4) g_620;
    VECTOR(int16_t, 8) g_621;
    VECTOR(uint8_t, 4) g_671;
    int32_t ** volatile g_676;
    volatile uint64_t g_682;
    VECTOR(uint32_t, 4) g_691;
    VECTOR(uint32_t, 16) g_692;
    volatile VECTOR(uint32_t, 2) g_696;
    VECTOR(uint32_t, 8) g_697;
    VECTOR(uint64_t, 8) g_714;
    int64_t g_773;
    int64_t g_776;
    volatile int32_t g_777;
    volatile struct S0 g_781;
    volatile struct S0 g_782;
    volatile union U1 g_791;
    union U1 g_794;
    union U1 g_795;
    uint32_t g_805;
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
uint32_t  func_1(struct S5 * p_810);
int32_t * func_9(union U2  p_10, struct S5 * p_810);
union U1  func_11(uint32_t  p_12, uint32_t  p_13, uint32_t  p_14, int32_t * p_15, uint64_t  p_16, struct S5 * p_810);
uint32_t  func_17(int16_t  p_18, int64_t  p_19, int32_t  p_20, int8_t * p_21, struct S5 * p_810);
int16_t  func_22(int32_t * p_23, uint32_t  p_24, int16_t  p_25, int8_t * p_26, struct S5 * p_810);
uint32_t  func_29(int64_t  p_30, uint8_t  p_31, int32_t * p_32, struct S5 * p_810);
int64_t  func_33(union U4  p_34, int16_t  p_35, int32_t * p_36, struct S5 * p_810);
uint32_t  func_55(int64_t  p_56, int8_t * p_57, uint16_t  p_58, struct S5 * p_810);
uint32_t  func_61(uint32_t  p_62, int8_t * p_63, int8_t * p_64, uint64_t  p_65, struct S5 * p_810);
int32_t * func_67(int32_t  p_68, uint16_t  p_69, int64_t  p_70, int32_t  p_71, struct S5 * p_810);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_810->g_comm_values p_810->g_7 p_810->g_27 p_810->g_28 p_810->g_42 p_810->g_52 p_810->g_82 p_810->g_108 p_810->g_111 p_810->g_129 p_810->g_134 p_810->g_145 p_810->g_174 p_810->g_186 p_810->g_199 p_810->g_112.f1 p_810->g_112.f6 p_810->g_112.f2 p_810->g_130 p_810->g_83 p_810->g_419 p_810->g_242.f0 p_810->g_421 p_810->g_424 p_810->g_112.f8 p_810->g_435 p_810->g_439 p_810->g_440 p_810->g_443 p_810->g_447 p_810->g_458 p_810->g_274 p_810->g_478 p_810->g_156 p_810->g_162 p_810->g_412 p_810->g_576 p_810->g_580 p_810->g_581 permutations p_810->g_591 p_810->g_595 p_810->g_599 p_810->g_596 p_810->g_607 p_810->g_582.f7 p_810->g_620 p_810->g_621 p_810->g_671 p_810->g_676 p_810->g_682 p_810->g_691 p_810->g_692 p_810->g_696 p_810->g_697 p_810->g_714 p_810->g_390 p_810->g_582.f6 p_810->g_781 p_810->g_791 p_810->g_794 p_810->g_795 p_810->g_805
 * writes: p_810->g_7 p_810->g_77 p_810->g_108 p_810->g_112 p_810->g_111.f4 p_810->g_130 p_810->g_145 p_810->g_28 p_810->g_175 p_810->g_186 p_810->g_215 p_810->g_242 p_810->g_252 p_810->g_111.f8 p_810->g_399 p_810->g_418 p_810->g_436 p_810->g_439 p_810->g_134.f1 p_810->g_111.f6 p_810->g_567 p_810->g_412 p_810->g_111.f2 p_810->g_582 permutations p_810->g_595 p_810->g_83 p_810->g_596 p_810->g_42 p_810->g_27 p_810->g_682 p_810->g_607 p_810->g_782 p_810->g_805
 */
uint32_t  func_1(struct S5 * p_810)
{ /* block id: 4 */
    int8_t l_6 = 0x72L;
    int32_t l_8 = 0x7E80D68FL;
    int8_t l_39 = 1L;
    union U4 l_40[7][8][2] = {{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}},{{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}},{{-3L},{0x42EF39980A6F85D5L}}}};
    union U2 l_796 = {0};
    int32_t **l_809 = &p_810->g_436[1][1];
    int i, j, k;
    l_8 = (p_810->g_7.z = (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_810->g_comm_values[p_810->tid], l_6)), 0x5409884CL)));
    (*l_809) = func_9((func_11(p_810->g_comm_values[p_810->tid], p_810->g_7.y, func_17(func_22(p_810->g_27, (p_810->g_134.f1 = func_29(func_33(((l_6 <= ((VECTOR(int32_t, 16))((safe_mod_func_int16_t_s_s(((&l_8 == &p_810->g_28) ^ (l_6 <= (&p_810->g_28 != (void*)0))), 0x0B13L)), 0L, l_39, 1L, 0x705618D7L, 0x04EDB553L, 0x1F6ED734L, (*p_810->g_27), (*p_810->g_27), ((VECTOR(int32_t, 4))(0x16F77D90L)), (*p_810->g_27), 0x10F6DAE1L, (-3L))).s0) , l_40[0][5][0]), p_810->g_7.w, &p_810->g_28, p_810), l_39, &p_810->g_42, p_810)), p_810->g_7.x, &l_39, p_810), p_810->g_156.z, l_40[0][5][0].f0, &l_6, p_810), &p_810->g_42, p_810->g_52.s5, p_810) , l_796), p_810);
    return l_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_805
 * writes: p_810->g_805
 */
int32_t * func_9(union U2  p_10, struct S5 * p_810)
{ /* block id: 307 */
    int32_t *l_797 = (void*)0;
    int32_t *l_798 = (void*)0;
    int32_t *l_799 = &p_810->g_439;
    int32_t *l_800 = (void*)0;
    int32_t *l_801 = &p_810->g_42;
    int32_t *l_802[3];
    int32_t l_803 = 0x7D780089L;
    int8_t l_804 = 6L;
    int32_t **l_808 = &l_798;
    int i;
    for (i = 0; i < 3; i++)
        l_802[i] = &p_810->g_439;
    ++p_810->g_805;
    (*l_808) = l_802[1];
    return &p_810->g_607;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_162 p_810->g_412 p_810->g_443 p_810->g_111.f6 p_810->g_576 p_810->g_111.f2 p_810->g_27 p_810->g_580 p_810->g_581 permutations p_810->g_591 p_810->g_595 p_810->g_599 p_810->g_82 p_810->g_83 p_810->g_42 p_810->g_596 p_810->g_607 p_810->g_447 p_810->g_582.f7 p_810->g_620 p_810->g_621 p_810->g_111.f1 p_810->g_28 p_810->g_421 p_810->g_671 p_810->g_112.f2 p_810->g_424 p_810->g_676 p_810->g_682 p_810->g_691 p_810->g_692 p_810->g_696 p_810->g_697 p_810->g_714 p_810->g_390 p_810->g_582.f6 p_810->g_781 p_810->g_791 p_810->g_794 p_810->g_795
 * writes: p_810->g_567 p_810->g_412 p_810->g_111.f2 p_810->g_28 p_810->g_582 permutations p_810->g_112.f6 p_810->g_595 p_810->g_83 p_810->g_596 p_810->g_112.f2 p_810->g_42 p_810->g_27 p_810->g_682 p_810->g_607 p_810->g_782
 */
union U1  func_11(uint32_t  p_12, uint32_t  p_13, uint32_t  p_14, int32_t * p_15, uint64_t  p_16, struct S5 * p_810)
{ /* block id: 220 */
    uint16_t l_523 = 0x275EL;
    int32_t *l_550 = &p_810->g_77[1];
    int8_t **l_556[8][10][1] = {{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}},{{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82},{&p_810->g_82}}};
    int8_t ***l_557 = (void*)0;
    int8_t ***l_558 = (void*)0;
    int8_t **l_559[8] = {&p_810->g_82,&p_810->g_82,&p_810->g_82,&p_810->g_82,&p_810->g_82,&p_810->g_82,&p_810->g_82,&p_810->g_82};
    uint8_t *l_560 = &p_810->g_112[1].f6;
    uint16_t *l_563 = &l_523;
    int32_t l_564 = 0x4C2AE236L;
    uint32_t *l_566[2][10] = {{&p_810->g_412,&p_810->g_412,(void*)0,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,(void*)0,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,(void*)0,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,(void*)0,&p_810->g_412,&p_810->g_412}};
    uint32_t **l_565[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    union U4 l_585 = {8L};
    VECTOR(int8_t, 8) l_598 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x47L), 0x47L), 0x47L, 3L, 0x47L);
    uint32_t l_641 = 7UL;
    union U2 *l_645 = &p_810->g_134;
    VECTOR(int32_t, 8) l_705 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0061928CL), 0x0061928CL), 0x0061928CL, (-1L), 0x0061928CL);
    struct S0 ***l_717[7] = {(void*)0,&p_810->g_399,(void*)0,(void*)0,&p_810->g_399,(void*)0,(void*)0};
    int16_t l_742 = 0x0FC4L;
    uint32_t l_770 = 4294967295UL;
    int32_t l_774 = 0x610E5104L;
    int i, j, k;
    for (p_13 = 25; (p_13 > 38); ++p_13)
    { /* block id: 223 */
        int32_t *l_519 = &p_810->g_42;
        int32_t *l_520 = &p_810->g_439;
        int32_t *l_521 = (void*)0;
        int32_t *l_522[1];
        int i;
        for (i = 0; i < 1; i++)
            l_522[i] = (void*)0;
        --l_523;
        return p_810->g_162;
    }
    if ((atomic_inc(&p_810->g_atomic_input[47 * get_linear_group_id() + 0]) == 3))
    { /* block id: 228 */
        uint8_t l_526 = 0xF5L;
        uint8_t l_527 = 0xF4L;
        uint8_t l_528[7] = {0x89L,0x89L,0x89L,0x89L,0x89L,0x89L,0x89L};
        VECTOR(int8_t, 4) l_529 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L));
        VECTOR(uint8_t, 8) l_530 = (VECTOR(uint8_t, 8))(0xF9L, (VECTOR(uint8_t, 4))(0xF9L, (VECTOR(uint8_t, 2))(0xF9L, 0xBFL), 0xBFL), 0xBFL, 0xF9L, 0xBFL);
        VECTOR(uint8_t, 16) l_531 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0UL), 0UL), 0UL, 247UL, 0UL, (VECTOR(uint8_t, 2))(247UL, 0UL), (VECTOR(uint8_t, 2))(247UL, 0UL), 247UL, 0UL, 247UL, 0UL);
        VECTOR(uint8_t, 8) l_532 = (VECTOR(uint8_t, 8))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 255UL), 255UL), 255UL, 251UL, 255UL);
        VECTOR(uint8_t, 4) l_533 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x24L), 0x24L);
        VECTOR(uint8_t, 4) l_534 = (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 0x86L), 0x86L);
        int32_t l_535 = (-4L);
        int32_t l_536 = 0L;
        int16_t l_537[5][8][6] = {{{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L}},{{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L}},{{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L}},{{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L}},{{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L},{0x0A24L,0x60D5L,0x60D5L,0x0A24L,0x100CL,5L}}};
        int32_t l_538 = (-8L);
        int32_t l_539 = 0x1B8214B2L;
        uint32_t l_540 = 0x15836DDEL;
        uint8_t l_543 = 255UL;
        VECTOR(uint16_t, 16) l_544 = (VECTOR(uint16_t, 16))(0xA094L, (VECTOR(uint16_t, 4))(0xA094L, (VECTOR(uint16_t, 2))(0xA094L, 0x9007L), 0x9007L), 0x9007L, 0xA094L, 0x9007L, (VECTOR(uint16_t, 2))(0xA094L, 0x9007L), (VECTOR(uint16_t, 2))(0xA094L, 0x9007L), 0xA094L, 0x9007L, 0xA094L, 0x9007L);
        VECTOR(uint16_t, 8) l_545 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x0F01L), 0x0F01L), 0x0F01L, 65535UL, 0x0F01L);
        int32_t l_546 = 0x116DE381L;
        uint64_t l_547 = 0xF9C68149F9E67C7FL;
        int32_t l_548 = 0x1AA8AF26L;
        int64_t l_549[9][7][4] = {{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}},{{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L},{1L,0x4B4FD9D7DA4DE453L,0x582DB0618AB0D5A1L,0x5466897A3F542FB1L}}};
        int i, j, k;
        l_549[2][0][3] &= ((VECTOR(int32_t, 8))(0x4969F31AL, l_526, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))((-6L), ((l_527 , l_528[0]) , (-2L)), 0x40L, 5L)), ((VECTOR(int8_t, 16))(l_529.wwzxywwyxyzyzzzx)).sfafc))).ywyzxyyyxxzzwyzy)).s8e87, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(0xF8L, ((VECTOR(uint8_t, 2))(l_530.s71)), 1UL, 0xD5L, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_531.sccc9)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_532.s00256634)))).s54, ((VECTOR(uint8_t, 2))(l_533.xz))))), 0xFBL)).s4430504623607135, (uint8_t)0x82L))).sdf, ((VECTOR(uint8_t, 4))((l_535 |= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(4UL, 255UL)), 1UL, 1UL)), 9UL, ((VECTOR(uint8_t, 2))(l_534.wz)), 0xBDL)).even)).y), (--l_540), 255UL, 0x46L)).hi))), 0xBAL)))), 1UL, 3UL, 1UL, 0x66L)).odd))).xywwwxww, ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 8))(l_543, 0xC744L, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 16))(1UL, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(0x78DEL, 0x24C9L)).yxyx, ((VECTOR(uint16_t, 16))(l_544.se778353011701e58)).scb2a))).y, ((VECTOR(uint16_t, 4))(l_545.s4134)), (l_546 , l_547), 4UL, ((VECTOR(uint16_t, 8))(0x7BD4L)))).s2c, (uint16_t)l_548, (uint16_t)FAKE_DIVERGE(p_810->group_1_offset, get_group_id(1), 10)))), ((VECTOR(uint16_t, 2))(65533UL)), 0UL, 0UL)).s5242431337556131, ((VECTOR(uint16_t, 16))(65535UL)), ((VECTOR(uint16_t, 16))(0x7F9EL))))).lo, ((VECTOR(uint16_t, 8))(65535UL))))))))))).s12, ((VECTOR(int32_t, 2))(0x548B3A6AL))))), 0x2C865821L, 0x2783863EL, 2L, (-4L))).s3;
        unsigned int result = 0;
        result += l_526;
        result += l_527;
        int l_528_i0;
        for (l_528_i0 = 0; l_528_i0 < 7; l_528_i0++) {
            result += l_528[l_528_i0];
        }
        result += l_529.w;
        result += l_529.z;
        result += l_529.y;
        result += l_529.x;
        result += l_530.s7;
        result += l_530.s6;
        result += l_530.s5;
        result += l_530.s4;
        result += l_530.s3;
        result += l_530.s2;
        result += l_530.s1;
        result += l_530.s0;
        result += l_531.sf;
        result += l_531.se;
        result += l_531.sd;
        result += l_531.sc;
        result += l_531.sb;
        result += l_531.sa;
        result += l_531.s9;
        result += l_531.s8;
        result += l_531.s7;
        result += l_531.s6;
        result += l_531.s5;
        result += l_531.s4;
        result += l_531.s3;
        result += l_531.s2;
        result += l_531.s1;
        result += l_531.s0;
        result += l_532.s7;
        result += l_532.s6;
        result += l_532.s5;
        result += l_532.s4;
        result += l_532.s3;
        result += l_532.s2;
        result += l_532.s1;
        result += l_532.s0;
        result += l_533.w;
        result += l_533.z;
        result += l_533.y;
        result += l_533.x;
        result += l_534.w;
        result += l_534.z;
        result += l_534.y;
        result += l_534.x;
        result += l_535;
        result += l_536;
        int l_537_i0, l_537_i1, l_537_i2;
        for (l_537_i0 = 0; l_537_i0 < 5; l_537_i0++) {
            for (l_537_i1 = 0; l_537_i1 < 8; l_537_i1++) {
                for (l_537_i2 = 0; l_537_i2 < 6; l_537_i2++) {
                    result += l_537[l_537_i0][l_537_i1][l_537_i2];
                }
            }
        }
        result += l_538;
        result += l_539;
        result += l_540;
        result += l_543;
        result += l_544.sf;
        result += l_544.se;
        result += l_544.sd;
        result += l_544.sc;
        result += l_544.sb;
        result += l_544.sa;
        result += l_544.s9;
        result += l_544.s8;
        result += l_544.s7;
        result += l_544.s6;
        result += l_544.s5;
        result += l_544.s4;
        result += l_544.s3;
        result += l_544.s2;
        result += l_544.s1;
        result += l_544.s0;
        result += l_545.s7;
        result += l_545.s6;
        result += l_545.s5;
        result += l_545.s4;
        result += l_545.s3;
        result += l_545.s2;
        result += l_545.s1;
        result += l_545.s0;
        result += l_546;
        result += l_547;
        result += l_548;
        int l_549_i0, l_549_i1, l_549_i2;
        for (l_549_i0 = 0; l_549_i0 < 9; l_549_i0++) {
            for (l_549_i1 = 0; l_549_i1 < 7; l_549_i1++) {
                for (l_549_i2 = 0; l_549_i2 < 4; l_549_i2++) {
                    result += l_549[l_549_i0][l_549_i1][l_549_i2];
                }
            }
        }
        atomic_add(&p_810->g_special_values[47 * get_linear_group_id() + 0], result);
    }
    else
    { /* block id: 232 */
        (1 + 1);
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_810->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[(safe_mod_func_uint32_t_u_u((&p_810->g_412 != (p_810->g_567 = l_550)), 10))][(safe_mod_func_uint32_t_u_u(p_810->tid, 21))]));
    for (p_810->g_412 = 0; (p_810->g_412 < 38); p_810->g_412++)
    { /* block id: 245 */
        uint8_t l_605 = 0UL;
        uint32_t **l_631 = &l_566[1][0];
        int32_t l_635 = 9L;
        union U2 *l_644[1];
        VECTOR(int64_t, 16) l_657 = (VECTOR(int64_t, 16))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L, (VECTOR(int64_t, 2))((-8L), 0L), (VECTOR(int64_t, 2))((-8L), 0L), (-8L), 0L, (-8L), 0L);
        VECTOR(uint16_t, 16) l_693 = (VECTOR(uint16_t, 16))(0xB49BL, (VECTOR(uint16_t, 4))(0xB49BL, (VECTOR(uint16_t, 2))(0xB49BL, 0xAE92L), 0xAE92L), 0xAE92L, 0xB49BL, 0xAE92L, (VECTOR(uint16_t, 2))(0xB49BL, 0xAE92L), (VECTOR(uint16_t, 2))(0xB49BL, 0xAE92L), 0xB49BL, 0xAE92L, 0xB49BL, 0xAE92L);
        VECTOR(uint32_t, 8) l_694 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 8UL), 8UL), 8UL, 4294967295UL, 8UL);
        VECTOR(uint32_t, 2) l_695 = (VECTOR(uint32_t, 2))(0x69337381L, 0UL);
        VECTOR(uint32_t, 16) l_702 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x9E6DBA83L), 0x9E6DBA83L), 0x9E6DBA83L, 1UL, 0x9E6DBA83L, (VECTOR(uint32_t, 2))(1UL, 0x9E6DBA83L), (VECTOR(uint32_t, 2))(1UL, 0x9E6DBA83L), 1UL, 0x9E6DBA83L, 1UL, 0x9E6DBA83L);
        int32_t l_712 = (-8L);
        union U4 l_735 = {0x403D1EF79A0DE76BL};
        int32_t l_740 = 0x276E3244L;
        int32_t l_741 = 3L;
        int32_t l_744 = 0x755BC3A5L;
        int32_t l_746 = 0x67FA39F8L;
        int32_t l_747 = 9L;
        int32_t l_754 = (-4L);
        VECTOR(int32_t, 2) l_757 = (VECTOR(int32_t, 2))(0x2BD9A13EL, 0x49DF0740L);
        int32_t l_758 = 0x3C0572EDL;
        int16_t *l_789 = &p_810->g_596;
        int i;
        for (i = 0; i < 1; i++)
            l_644[i] = &p_810->g_134;
        if ((safe_mod_func_int16_t_s_s((1UL && (safe_mul_func_int16_t_s_s((+p_810->g_443.w), p_13))), p_810->g_111.f6)))
        { /* block id: 246 */
            uint8_t l_579 = 0xF5L;
            VECTOR(int8_t, 8) l_600 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
            uint32_t **l_632 = &l_566[0][2];
            uint64_t l_633 = 0x3825F36D9F102B19L;
            int8_t **l_646 = &p_810->g_82;
            VECTOR(uint8_t, 4) l_670 = (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 0xA2L), 0xA2L);
            int32_t *l_674 = &l_635;
            uint32_t *l_675 = &p_810->g_112[1].f2;
            int i;
            if ((safe_div_func_int64_t_s_s(p_12, ((VECTOR(int64_t, 4))(p_810->g_576.s1037)).z)))
            { /* block id: 247 */
                for (p_810->g_111.f2 = (-26); (p_810->g_111.f2 >= 34); p_810->g_111.f2 = safe_add_func_uint8_t_u_u(p_810->g_111.f2, 3))
                { /* block id: 250 */
                    (*p_810->g_27) = l_579;
                    return p_810->g_580;
                }
            }
            else
            { /* block id: 254 */
                uint16_t l_606 = 0x0B7AL;
                union U3 *l_619 = &p_810->g_274;
                int32_t l_624 = 0x4CD1BA62L;
                uint8_t l_634 = 1UL;
                p_810->g_582[0][6][0] = p_810->g_581[2][3];
                for (p_12 = 0; (p_12 == 58); p_12++)
                { /* block id: 258 */
                    uint32_t *l_588 = &permutations[(safe_mod_func_uint32_t_u_u((&p_810->g_412 != (p_810->g_567 = l_550)), 10))][(safe_mod_func_uint32_t_u_u(p_810->tid, 21))];
                    int32_t l_594[8];
                    int16_t **l_597 = (void*)0;
                    int32_t l_608 = (-10L);
                    union U1 *l_610 = &p_810->g_580;
                    union U1 **l_609 = &l_610;
                    int16_t *l_622 = &p_810->g_134.f2;
                    int16_t *l_623 = &p_810->g_134.f2;
                    int32_t *l_636 = &l_594[4];
                    int32_t *l_637 = &l_564;
                    int32_t *l_638 = &l_564;
                    int32_t *l_639 = &p_810->g_439;
                    int32_t *l_640[3];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_594[i] = 0x2806365FL;
                    for (i = 0; i < 3; i++)
                        l_640[i] = &p_810->g_607;
                    (*l_609) = ((p_13 || (((l_585 , (safe_sub_func_int64_t_s_s(((++(*l_588)) , ((!(GROUP_DIVERGE(2, 1) & ((((*l_560) = p_14) > p_13) && (p_810->g_591 , (((p_810->g_596 ^= (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))((l_594[4] ^= p_16), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(4L, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))((((p_810->g_595[0][2][4] = p_810->g_595[0][2][4]) != (((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(l_598.s43002256)).s21, (int8_t)((*p_810->g_82) = ((VECTOR(int8_t, 2))(p_810->g_599.s24)).even), (int8_t)((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(l_600.s2422)), ((VECTOR(int8_t, 4))(4L, ((VECTOR(int8_t, 2))(0L, (-1L))), 0x32L))))).z))), (-1L), (-1L))).w && ((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((p_14 , ((*p_810->g_82) |= ((l_605 & p_16) <= 3L))), p_16)) || 0x210B25E6L), p_810->g_42)) > l_523)) <= GROUP_DIVERGE(2, 1)) , (void*)0)) > p_14), ((VECTOR(int8_t, 4))(0x03L)), 0x3CL, ((VECTOR(int8_t, 4))(0x05L)), 0x01L, (-1L), ((VECTOR(int8_t, 4))(0x08L)))).sf4, ((VECTOR(int8_t, 2))(9L))))), ((VECTOR(int8_t, 4))(0x4EL)), 0x2CL, l_605, ((VECTOR(int8_t, 2))((-10L))), ((VECTOR(int8_t, 2))(0L)), l_605, 0x38L, 0x69L)).hi)).s40, ((VECTOR(int8_t, 2))(4L))))), 1L)).w, l_606))) ^ p_810->g_607) | 0x457B3CBAL))))) != p_810->g_447.w)), 18446744073709551615UL))) != 0x0AL) < l_608)) , (void*)0);
                    (*p_810->g_27) &= (((safe_mul_func_uint8_t_u_u((p_810->g_582[0][6][0].f7 , ((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((&p_810->g_274 == l_619) , (((l_585.f0 , (~(GROUP_DIVERGE(2, 1) | ((((((VECTOR(uint32_t, 4))(p_810->g_620.zwzz)).z <= 8L) == (l_624 ^= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_810->g_621.s46055304)).s33)).lo)) | FAKE_DIVERGE(p_810->group_2_offset, get_group_id(2), 10)) & (safe_mul_func_uint8_t_u_u(0x8DL, p_14)))))) , (p_14 <= ((VECTOR(int8_t, 2))(0x3BL, 0x7AL)).even)) ^ ((*p_810->g_82) = (safe_add_func_int8_t_s_s(((l_632 = ((safe_rshift_func_int8_t_s_s((*p_810->g_82), 3)) , l_631)) == &l_566[0][9]), (-1L)))))), 13)), p_810->g_412)), 4)) && p_810->g_111.f1)), 0UL)) < l_633) != l_634);
                    l_641--;
                }
                l_645 = l_644[0];
            }
            l_646 = (void*)0;
            (*p_15) = ((*p_810->g_27) < (((safe_add_func_uint64_t_u_u((p_16 &= FAKE_DIVERGE(p_810->global_1_offset, get_global_id(1), 10)), ((((safe_lshift_func_int16_t_s_s(p_14, (p_810->g_421.y | ((safe_add_func_uint64_t_u_u(p_13, (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(4294967292UL, ((*l_675) |= ((((((VECTOR(int64_t, 8))(l_657.s4ed92c92)).s1 < 7L) , (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_12, p_12)), (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(l_670.wxyyzwxz)).s5607230614511615, ((VECTOR(uint8_t, 4))(p_810->g_671.wzyx)).ywwyywyzwzwzywxz))).sd, (safe_rshift_func_uint16_t_u_u((p_15 != l_674), (*l_674))))) || p_13), p_14)) >= l_564), 7)), (*l_674)))))) | l_657.s2) & p_12)))), p_12)))) | GROUP_DIVERGE(2, 1))))) == (*l_674)) > 4294967295UL) & 0x49C3DD92L))) && (*p_15)) , p_810->g_424.sa));
            (*p_810->g_676) = l_674;
        }
        else
        { /* block id: 280 */
            int32_t *l_677 = &p_810->g_607;
            int32_t *l_678 = (void*)0;
            int32_t *l_679 = &p_810->g_607;
            int32_t l_680 = 0x0C0C466DL;
            int32_t *l_681[8] = {&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28};
            uint32_t *l_698 = &p_810->g_274.f1;
            uint32_t *l_699 = &permutations[(safe_mod_func_uint32_t_u_u((&p_810->g_412 != (p_810->g_567 = l_550)), 10))][(safe_mod_func_uint32_t_u_u(p_810->tid, 21))];
            union U1 **l_708 = (void*)0;
            union U1 *l_711 = &p_810->g_580;
            union U1 **l_710[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            union U1 ***l_709 = &l_710[5][0];
            uint32_t l_713[9][7] = {{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL},{0UL,1UL,0x42772EE2L,1UL,0UL,0UL,1UL}};
            uint64_t l_759 = 0xD7D846639501AE30L;
            int8_t ***l_771 = &l_559[7];
            int16_t *l_790 = (void*)0;
            int i, j;
            --p_810->g_682;
            (*l_679) |= (((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 4))(p_810->g_691.ywxy)).zyzyzyxzxwwwywyw, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)).xyxyxyxyxxyxyxxy)).sce)).yxyy)).ywywywwwwyyywzwx))).s0bdd)))).even, ((VECTOR(uint32_t, 16))(p_810->g_692.sacb7ced546a1b443)).sb9))).xyxyyxxy, ((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(0x56A5L, l_598.s4, 65532UL, 65535UL, 1UL, 5UL, 1UL, 0UL)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_693.s09)).yyxxyxyyyyxxyxxx)).s12c4))).wwwywyyy))).s12)).yyxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(l_694.s5330455105233733)).odd, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(7UL, 4294967293UL)))).yxyxyxyy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(l_695.yxyx)).xxxwwyxy, ((VECTOR(uint32_t, 4))(p_810->g_696.xxyx)).zxyyywzy))).s4333721522107240)).lo))).s25)).xxxy))).zzyxywyz, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 4))(0UL, 0x41F05BEAL, 4294967294UL, 1UL)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(p_810->g_697.s1365)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(1UL, 0UL)).odd, (--(*l_699)), 0x0CDD45BBL, 0x8FD7480DL))))), 5UL, ((VECTOR(uint32_t, 2))(l_702.s25)), (safe_mul_func_int16_t_s_s((((((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_705.s4600)).wyzyxxxw, ((VECTOR(int32_t, 2))(1L, 0x66F1199BL)).xyxxyxxy))).s6 != (0xD22B77AC6CAA75A0L != (safe_lshift_func_uint8_t_u_s((p_13 != (l_635 = ((*p_810->g_82) = (((((+p_14) || l_605) , l_708) != ((p_15 == p_15) , ((*l_709) = l_708))) == p_12)))), l_712)))) | 0x9FFAL) || p_14), p_12)), GROUP_DIVERGE(0, 1), l_598.s4, ((VECTOR(uint32_t, 2))(0x81D73CDAL)), p_16, ((VECTOR(uint32_t, 2))(0x439CBEA2L)), 3UL)).s61))), 1UL, 4294967288UL)).zywxxzwywyywxxyy)).odd))).s62, (uint32_t)l_705.s1, (uint32_t)GROUP_DIVERGE(0, 1)))), l_598.s7, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0x19F5EF4DL)), 2UL, 0x2672EAB4L, 0xC583CB81L)).s7f)).hi, l_694.s0)), l_713[6][0])), 0x1ECCL)) && p_810->g_83) | (*p_810->g_27));
            if ((((VECTOR(uint64_t, 2))(p_810->g_714.s74)).hi != ((safe_add_func_uint8_t_u_u((p_13 <= ((void*)0 != l_717[1])), ((--(*l_563)) , ((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((-4L) | p_16), ((*l_699) = (safe_add_func_int32_t_s_s((+0x0C787C21L), (safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((((l_635 = (safe_rshift_func_int16_t_s_s((l_735 , (p_810->g_390.x || ((safe_mod_func_int8_t_s_s((-1L), (*l_677))) == (-1L)))), l_598.s6))) ^ 65527UL) <= (-10L)), p_810->g_621.s7)) <= 0x2A6BB947L) && (*p_15)), (-1L)))))))), (*p_810->g_82))) , p_810->g_582[0][6][0].f6))), 8)) > (*l_679))))) > 0UL)))
            { /* block id: 290 */
                int64_t l_738 = 0x7A8AB17BD36499B4L;
                int32_t l_739 = 0x416EC402L;
                int32_t l_743 = 1L;
                int32_t l_745 = 0L;
                int32_t l_748 = (-1L);
                int32_t l_749 = 0x698538FEL;
                int32_t l_750 = 0x3A45BD1EL;
                int32_t l_751 = 0x75DE8458L;
                int32_t l_752 = 0x0EDFECFFL;
                int32_t l_753 = 0x49C6C508L;
                int32_t l_755 = 1L;
                VECTOR(int32_t, 4) l_756 = (VECTOR(int32_t, 4))(0x4372F178L, (VECTOR(int32_t, 2))(0x4372F178L, 1L), 1L);
                int8_t ***l_772 = &l_556[0][5][0];
                int16_t l_775 = 0x532DL;
                uint32_t l_778 = 4294967287UL;
                int i;
                ++l_759;
                (*p_810->g_27) = ((((*p_15) = ((!((-3L) | p_13)) != ((((safe_lshift_func_uint8_t_u_s(p_12, (safe_mod_func_uint64_t_u_u(((((safe_rshift_func_int16_t_s_s(l_770, p_16)) || ((((VECTOR(int32_t, 2))((-1L), 7L)).hi , l_771) == (void*)0)) > 0xB1L) | (*p_15)), p_16)))) <= 0x0D9EADCE9C2B6C09L) , l_772) == (void*)0))) < 0x5DB7B7CDL) & 18446744073709551612UL);
                ++l_778;
            }
            else
            { /* block id: 295 */
                p_810->g_782 = p_810->g_781;
                if (l_641)
                    continue;
                if (l_742)
                    break;
                (*p_15) |= (3L & ((~((*l_677) = (safe_lshift_func_uint8_t_u_u((!(safe_div_func_int8_t_s_s((((*l_789) = ((safe_mul_func_int16_t_s_s(0x09D2L, (l_789 == l_790))) | (&p_810->g_108[1][4][2] == (void*)0))) || (p_810->g_791 , ((safe_mul_func_int16_t_s_s(p_14, 0x5F4CL)) | (-4L)))), 0x43L))), p_810->g_443.z)))) < p_13));
            }
        }
        return p_810->g_794;
    }
    return p_810->g_795;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_17(int16_t  p_18, int64_t  p_19, int32_t  p_20, int8_t * p_21, struct S5 * p_810)
{ /* block id: 192 */
    if ((atomic_inc(&p_810->g_atomic_input[47 * get_linear_group_id() + 27]) == 0))
    { /* block id: 194 */
        union U4 l_493[1] = {{0L}};
        union U4 *l_492 = &l_493[0];
        union U4 **l_491[3];
        union U4 **l_494 = &l_492;
        int i;
        for (i = 0; i < 3; i++)
            l_491[i] = &l_492;
        l_494 = l_491[0];
        for (l_493[0].f0 = 0; (l_493[0].f0 < 6); l_493[0].f0++)
        { /* block id: 198 */
            int32_t *l_497 = (void*)0;
            int32_t l_499 = 0x3DBC0F0AL;
            int32_t *l_498 = &l_499;
            uint8_t l_500 = 0UL;
            uint32_t l_501 = 0xA0365707L;
            int16_t l_502 = (-10L);
            int32_t l_503 = (-6L);
            l_498 = (l_497 = (void*)0);
            l_502 ^= (l_500 , l_501);
            if (l_503)
            { /* block id: 202 */
                struct S0 l_504 = {0x74A6L,9L,4294967295UL,0x5FDC7472L,18446744073709551612UL,0UL,255UL,0x5D4031ADL,0x93B9F63CL};/* VOLATILE GLOBAL l_504 */
                struct S0 l_505[10] = {{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL},{0x02E2L,0x721FA295L,0x0477AA76L,0x5063B484L,18446744073709551608UL,1UL,0xCBL,0xCC91A700L,0x4EC5186AL}};
                struct S0 l_506 = {0x6BBCL,1L,7UL,9L,1UL,18446744073709551615UL,248UL,0x1120CEF3L,0x1285614FL};/* VOLATILE GLOBAL l_506 */
                int32_t l_507 = 0x5C02D21DL;
                int i;
                l_506 = (l_504 , l_505[3]);
                l_503 = l_507;
            }
            else
            { /* block id: 205 */
                int64_t l_508 = 0x24FCC6BF423096DDL;
                uint64_t l_509 = 0UL;
                int16_t l_512 = 0L;
                uint16_t l_515[10][2] = {{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL},{0UL,0xF2EDL}};
                uint16_t l_516[5] = {0UL,0UL,0UL,0UL,0UL};
                int i, j;
                --l_509;
                l_512 |= 0x3BEFACACL;
                for (l_508 = (-24); (l_508 != 9); l_508 = safe_add_func_uint32_t_u_u(l_508, 1))
                { /* block id: 210 */
                    l_499 ^= 0x5D27BB09L;
                }
                l_516[4] = l_515[1][0];
            }
        }
        unsigned int result = 0;
        int l_493_i0;
        for (l_493_i0 = 0; l_493_i0 < 1; l_493_i0++) {
            result += l_493[l_493_i0].f0;
        }
        atomic_add(&p_810->g_special_values[47 * get_linear_group_id() + 27], result);
    }
    else
    { /* block id: 216 */
        (1 + 1);
    }
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_443 p_810->g_447 p_810->g_199 p_810->g_111.f6 p_810->g_82 p_810->g_83 p_810->g_458 p_810->g_274 p_810->g_28 p_810->g_478 p_810->g_112.f1 p_810->g_111.f2 p_810->g_27
 * writes: p_810->g_111.f6 p_810->g_28
 */
int16_t  func_22(int32_t * p_23, uint32_t  p_24, int16_t  p_25, int8_t * p_26, struct S5 * p_810)
{ /* block id: 178 */
    VECTOR(int32_t, 4) l_441 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-3L)), (-3L));
    VECTOR(int32_t, 4) l_442 = (VECTOR(int32_t, 4))(0x6D4BD7CBL, (VECTOR(int32_t, 2))(0x6D4BD7CBL, 0x10E040E5L), 0x10E040E5L);
    union U2 l_444 = {0};
    uint8_t *l_452 = &p_810->g_111.f6;
    int16_t *l_455 = &l_444.f2;
    VECTOR(int32_t, 2) l_465 = (VECTOR(int32_t, 2))((-1L), (-5L));
    uint32_t l_477 = 0x530418B9L;
    union U3 *l_488 = (void*)0;
    uint64_t l_489 = 0x4F5226A5BD3E2EB7L;
    int i;
    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(l_441.yxyxwxwwzwxzywyw)).s49, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_442.zyzy)), ((VECTOR(int32_t, 2))(0L, 7L)), 0x5338BAB3L, 8L)).s2704265633762372, ((VECTOR(int32_t, 2))(p_810->g_443.ww)).xxyxxyxyyxxyyyyx, ((VECTOR(int32_t, 8))(((*p_23) ^= (l_444 , (safe_add_func_uint8_t_u_u(((6L & ((VECTOR(uint16_t, 2))(p_810->g_447.xz)).hi) && (safe_add_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u(p_810->g_199.y, ((*l_452)++))) , (*p_810->g_82)) == ((l_441.z == (-1L)) && ((*l_455) = (GROUP_DIVERGE(2, 1) == p_24)))) | ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(p_810->g_458.xxyxxyxx)).s1, 0)) > 0UL)), ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((p_810->g_274 , p_24) | 0xE80C956EA87B755BL), 4294967295UL)), 1L)) < GROUP_DIVERGE(2, 1)) || (*p_26)), (*p_26))) & 0x7300L)))), 0x9EL)))), ((VECTOR(int32_t, 4))(0x0B33DA5EL)), 0x1439AC81L, 6L, 0x4293719BL)).s0405222014541013))).s43))), (-6L), 9L)).z)
    { /* block id: 182 */
        (*p_23) = ((VECTOR(int32_t, 4))(l_465.yxyy)).y;
    }
    else
    { /* block id: 184 */
        union U4 **l_466 = &p_810->g_176;
        int32_t l_485 = 5L;
        uint32_t l_490 = 2UL;
        (*p_23) = 0x17CE3A97L;
        (*p_810->g_27) = (l_466 != (((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((l_477 | (l_477 , (l_489 = (p_810->g_478 <= ((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((l_465.y |= (safe_div_func_uint8_t_u_u(((*l_452) = 0xA2L), (((p_810->g_112[1].f1 != (l_485 < (((safe_lshift_func_uint8_t_u_u(p_24, 3)) , (void*)0) == l_488))) | l_485) || p_810->g_111.f2)))) >= l_485))) | 0xE447L))))), l_490)), GROUP_DIVERGE(1, 1))), l_442.x)) || 0UL) , (void*)0));
    }
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_52 p_810->g_42 p_810->g_28 p_810->g_27 p_810->g_82 p_810->g_108 p_810->g_111 p_810->g_129 p_810->g_134 p_810->g_145 p_810->g_174 p_810->g_186 p_810->g_199 p_810->g_112.f1 p_810->g_112.f6 p_810->g_112.f2 p_810->g_130 p_810->g_83 p_810->g_419 p_810->g_242.f0 p_810->g_421 p_810->g_424 p_810->g_112.f8 p_810->g_435 p_810->g_439 p_810->g_440
 * writes: p_810->g_77 p_810->g_108 p_810->g_112 p_810->g_111.f4 p_810->g_130 p_810->g_145 p_810->g_28 p_810->g_175 p_810->g_186 p_810->g_215 p_810->g_242 p_810->g_252 p_810->g_111.f8 p_810->g_399 p_810->g_418 p_810->g_436 p_810->g_439
 */
uint32_t  func_29(int64_t  p_30, uint8_t  p_31, int32_t * p_32, struct S5 * p_810)
{ /* block id: 10 */
    int32_t l_45 = 1L;
    VECTOR(uint32_t, 16) l_50 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 4294967295UL, 0UL, 4294967295UL, 0UL);
    VECTOR(uint32_t, 2) l_51 = (VECTOR(uint32_t, 2))(0UL, 4294967295UL);
    VECTOR(uint32_t, 16) l_53 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    VECTOR(uint32_t, 16) l_54 = (VECTOR(uint32_t, 16))(0x538B87B6L, (VECTOR(uint32_t, 4))(0x538B87B6L, (VECTOR(uint32_t, 2))(0x538B87B6L, 0x578636BCL), 0x578636BCL), 0x578636BCL, 0x538B87B6L, 0x578636BCL, (VECTOR(uint32_t, 2))(0x538B87B6L, 0x578636BCL), (VECTOR(uint32_t, 2))(0x538B87B6L, 0x578636BCL), 0x538B87B6L, 0x578636BCL, 0x538B87B6L, 0x578636BCL);
    union U4 l_66 = {1L};
    int32_t *l_74 = &p_810->g_28;
    uint32_t l_75 = 4294967288UL;
    int32_t *l_76 = &p_810->g_77[1];
    uint32_t *l_411[6][6] = {{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412},{&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412,&p_810->g_412}};
    int32_t l_413 = 0x6DD1781AL;
    int8_t *l_414[8] = {&p_810->g_83,&p_810->g_83,&p_810->g_83,&p_810->g_83,&p_810->g_83,&p_810->g_83,&p_810->g_83,&p_810->g_83};
    int32_t *l_437 = (void*)0;
    int32_t *l_438[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_438[i] = &p_810->g_439;
    p_810->g_439 ^= (((safe_div_func_int16_t_s_s(l_45, (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_31, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(l_50.s7c)).yyxxxxyy, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_51.xxyy)), ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(0xD02BD444L, 0UL))))), 0UL, 2UL)).s75, ((VECTOR(uint32_t, 2))(p_810->g_52.s55)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_53.s9e)), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(0x69BB0CEAL, ((VECTOR(uint32_t, 2))(0xA9B16E5DL, 0UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x06D3C1D2L, 0x16E5DCA5L)), 4294967295UL, ((VECTOR(uint32_t, 2))(l_54.s84)), func_55(((safe_mul_func_uint8_t_u_u(((((*l_74) = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x8E6FL, 3UL)), (func_61((l_413 ^= (((*l_74) = (((((func_33(((p_30 && ((!l_50.s9) > ((func_33(l_66, p_810->g_42, func_67(((*l_76) = ((safe_mod_func_uint32_t_u_u((l_74 != &p_810->g_28), (l_75 = 4294967295UL))) > (*l_74))), p_31, (*l_74), (*p_810->g_27), p_810), p_810) , p_31) < 0x6CL))) , l_66), p_31, l_74, p_810) | 0x454A4D06L) , p_810->g_83) >= l_50.s4) | l_66.f0) , (-5L))) != 0x50L)), &p_810->g_83, l_414[4], p_30, p_810) > (*p_32)), p_810->g_112[1].f2, GROUP_DIVERGE(1, 1), 65535UL, ((VECTOR(uint16_t, 8))(0xDF99L)), 0x8D1FL, 0x7A83L)).s4 > l_50.s1)) , (*l_74)) & (*p_810->g_82)), 0x32L)) , (*l_74)), &p_810->g_83, p_810->g_42, p_810), 0x67712ECBL, 1UL)).s66))).xxxxyyyy)), ((VECTOR(uint32_t, 4))(4294967295UL)), 0x0EF00B0FL)).s128c, ((VECTOR(uint32_t, 4))(0x05E4FA29L)), ((VECTOR(uint32_t, 4))(0xF8956B91L))))).even)), ((VECTOR(uint32_t, 2))(0UL))))), ((VECTOR(uint32_t, 2))(4294967292UL))))).xxxy, (uint32_t)(*l_74)))), ((VECTOR(uint32_t, 4))(4294967288UL))))), 4UL, 0x6B000652L)).s54))).yxyyxyxx))).s7)), p_30)))) <= l_51.y) != 0x429AADE5L);
    (*l_74) &= (p_810->g_440 , 5L);
    return p_810->g_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_42
 * writes:
 */
int64_t  func_33(union U4  p_34, int16_t  p_35, int32_t * p_36, struct S5 * p_810)
{ /* block id: 7 */
    int32_t *l_41[3];
    int i;
    for (i = 0; i < 3; i++)
        l_41[i] = &p_810->g_28;
    l_41[2] = (void*)0;
    return p_810->g_42;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_55(int64_t  p_56, int8_t * p_57, uint16_t  p_58, struct S5 * p_810)
{ /* block id: 172 */
    return p_58;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_419 p_810->g_27 p_810->g_28 p_810->g_242.f0 p_810->g_421 p_810->g_424 p_810->g_134 p_810->g_112.f8 p_810->g_129.f6 p_810->g_145 p_810->g_435 p_810->g_129.f7
 * writes: p_810->g_418 p_810->g_28 p_810->g_436
 */
uint32_t  func_61(uint32_t  p_62, int8_t * p_63, int8_t * p_64, uint64_t  p_65, struct S5 * p_810)
{ /* block id: 165 */
    int64_t l_417 = (-1L);
    int8_t ****l_420 = &p_810->g_252;
    VECTOR(int32_t, 8) l_422 = (VECTOR(int32_t, 8))(0x4DEB8F7AL, (VECTOR(int32_t, 4))(0x4DEB8F7AL, (VECTOR(int32_t, 2))(0x4DEB8F7AL, 0x5855E325L), 0x5855E325L), 0x5855E325L, 0x4DEB8F7AL, 0x5855E325L);
    VECTOR(int32_t, 16) l_423 = (VECTOR(int32_t, 16))(0x50DE0247L, (VECTOR(int32_t, 4))(0x50DE0247L, (VECTOR(int32_t, 2))(0x50DE0247L, 0x00BAFBA1L), 0x00BAFBA1L), 0x00BAFBA1L, 0x50DE0247L, 0x00BAFBA1L, (VECTOR(int32_t, 2))(0x50DE0247L, 0x00BAFBA1L), (VECTOR(int32_t, 2))(0x50DE0247L, 0x00BAFBA1L), 0x50DE0247L, 0x00BAFBA1L, 0x50DE0247L, 0x00BAFBA1L);
    VECTOR(uint32_t, 8) l_425 = (VECTOR(uint32_t, 8))(0x9DEA8204L, (VECTOR(uint32_t, 4))(0x9DEA8204L, (VECTOR(uint32_t, 2))(0x9DEA8204L, 0x7245D8A3L), 0x7245D8A3L), 0x7245D8A3L, 0x9DEA8204L, 0x7245D8A3L);
    int64_t l_432 = 0x6FC12740678AE1E9L;
    int32_t l_433 = 0x176AE7EEL;
    int32_t *l_434 = &l_433;
    int i;
    l_433 = ((l_417 & ((p_810->g_418 = &l_417) == (((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(p_810->g_419.zwww)).lo)).xxyy, ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x397B3AF6EA48A71AL, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((*p_810->g_27) && p_810->g_419.z), p_810->g_242.f0, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))((l_420 == l_420), ((VECTOR(int32_t, 8))(p_810->g_421.zywxywzz)).s0, 9L, (-1L))).even, ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_422.s00)), 0x025A00A4L)).lo))), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_423.s694fd9a4fe0efc14)).sef)).xyyx, ((VECTOR(int32_t, 2))(p_810->g_424.s38)).yyyy))))))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 8))(l_425.s75527015)), ((VECTOR(uint32_t, 2))(0x990D92BEL, 0x506BE9C0L)).yyyxyyyx))).s74)), ((!((safe_sub_func_int32_t_s_s(((*p_810->g_27) &= ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))((-4L), (safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((p_810->g_134 , (-8L)), p_810->g_112[1].f8)) && 0x4084C338L) <= l_425.s0), 4)), (-1L), (-6L), p_65, 6L, 0x7069578FL, 0x4CBCF081L)).s1125015470015106, (int32_t)l_422.s5))).s4), p_62)) == l_422.s7)) <= l_432), ((VECTOR(uint32_t, 4))(0x27E386F5L)), 0xCF91CA3BL, 0xCF87B723L, p_62, ((VECTOR(uint32_t, 4))(4294967295UL)), 0UL, 1UL)).s7a, (uint32_t)p_810->g_129.f6, (uint32_t)1UL))).yxyx)), 4294967286UL, ((VECTOR(uint32_t, 2))(0xE68BBE33L)), 0x8DA83E8EL)).lo, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 4))(0UL))))).ywwwxzxxzyyxywww)), (uint32_t)GROUP_DIVERGE(2, 1), (uint32_t)p_62))).lo))))))))), ((VECTOR(int64_t, 8))(0x0858FF40F7E67DE3L)), ((VECTOR(int64_t, 8))(0x14AA5DA6BE30CC54L))))).even)), ((VECTOR(int64_t, 2))(0x307EF5FFDA5A62C9L)), 0x6B8F24C93EB5C9A0L)).hi)), ((VECTOR(int64_t, 4))(0x266C8E15FFD9B2D5L))))).hi)).yxyy, ((VECTOR(int64_t, 4))(0x687A76F87DB6F22EL))))).xxxwzwyy))).even)).zxxzxwxzwzwwzwxw)).s68, (uint64_t)p_810->g_145))).xyyy))).zwxzxxxw, ((VECTOR(uint64_t, 8))(18446744073709551606UL))))).s2 , (void*)0))) | l_423.sa);
    (*p_810->g_435) = l_434;
    return p_810->g_129.f7;
}


/* ------------------------------------------ */
/* 
 * reads : p_810->g_42 p_810->g_82 p_810->g_27 p_810->g_28 p_810->g_108 p_810->g_111 p_810->g_129 p_810->g_134 p_810->g_145 p_810->g_174 p_810->g_186 p_810->g_199 p_810->g_112.f1 p_810->g_112.f6 p_810->g_112.f2 p_810->g_130 p_810->g_83
 * writes: p_810->g_108 p_810->g_112 p_810->g_111.f4 p_810->g_130 p_810->g_145 p_810->g_28 p_810->g_175 p_810->g_186 p_810->g_215 p_810->g_242 p_810->g_252 p_810->g_111.f8 p_810->g_399
 */
int32_t * func_67(int32_t  p_68, uint16_t  p_69, int64_t  p_70, int32_t  p_71, struct S5 * p_810)
{ /* block id: 13 */
    int32_t l_78 = (-7L);
    union U4 l_79 = {-1L};
    int8_t *l_85[2][5][3] = {{{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83}},{{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83},{&p_810->g_83,(void*)0,&p_810->g_83}}};
    int64_t l_86 = (-1L);
    int32_t l_87 = 0x49617166L;
    int8_t **l_133 = &l_85[0][0][0];
    int32_t l_184 = 2L;
    VECTOR(uint8_t, 2) l_193 = (VECTOR(uint8_t, 2))(0x16L, 5UL);
    VECTOR(uint32_t, 4) l_206 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xDD518CACL), 0xDD518CACL);
    int32_t l_266[4][9] = {{0x48FBCCC2L,0x1EEE7737L,1L,3L,0x1EEE7737L,3L,1L,0x1EEE7737L,0x48FBCCC2L},{0x48FBCCC2L,0x1EEE7737L,1L,3L,0x1EEE7737L,3L,1L,0x1EEE7737L,0x48FBCCC2L},{0x48FBCCC2L,0x1EEE7737L,1L,3L,0x1EEE7737L,3L,1L,0x1EEE7737L,0x48FBCCC2L},{0x48FBCCC2L,0x1EEE7737L,1L,3L,0x1EEE7737L,3L,1L,0x1EEE7737L,0x48FBCCC2L}};
    uint8_t l_268 = 1UL;
    VECTOR(int64_t, 4) l_290 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L));
    VECTOR(int64_t, 8) l_297 = (VECTOR(int64_t, 8))(0x3DA4903D6566E984L, (VECTOR(int64_t, 4))(0x3DA4903D6566E984L, (VECTOR(int64_t, 2))(0x3DA4903D6566E984L, 0x6CE68CFEE6451567L), 0x6CE68CFEE6451567L), 0x6CE68CFEE6451567L, 0x3DA4903D6566E984L, 0x6CE68CFEE6451567L);
    VECTOR(uint8_t, 8) l_368 = (VECTOR(uint8_t, 8))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 5UL), 5UL), 5UL, 0xA8L, 5UL);
    VECTOR(uint8_t, 4) l_369 = (VECTOR(uint8_t, 4))(0x3EL, (VECTOR(uint8_t, 2))(0x3EL, 251UL), 251UL);
    uint32_t l_379[6] = {0xDC1C526BL,1UL,0xDC1C526BL,0xDC1C526BL,1UL,0xDC1C526BL};
    int i, j, k;
    if ((0x41E7L >= l_78))
    { /* block id: 14 */
        union U4 *l_80 = &l_79;
        VECTOR(uint16_t, 8) l_81 = (VECTOR(uint16_t, 8))(0x0F3CL, (VECTOR(uint16_t, 4))(0x0F3CL, (VECTOR(uint16_t, 2))(0x0F3CL, 0x90BBL), 0x90BBL), 0x90BBL, 0x0F3CL, 0x90BBL);
        int8_t **l_84 = (void*)0;
        int32_t l_92 = 1L;
        int32_t l_182 = 5L;
        int64_t l_183 = 0x30141AF60F279C46L;
        int32_t l_185[9][1] = {{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL},{0x5FD7D1BFL}};
        VECTOR(uint32_t, 16) l_205 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x8D47430DL), 0x8D47430DL), 0x8D47430DL, 1UL, 0x8D47430DL, (VECTOR(uint32_t, 2))(1UL, 0x8D47430DL), (VECTOR(uint32_t, 2))(1UL, 0x8D47430DL), 1UL, 0x8D47430DL, 1UL, 0x8D47430DL);
        int16_t l_234 = 0x469AL;
        int8_t l_257 = 0x37L;
        uint32_t l_258 = 0x87689AE3L;
        int i, j;
        if ((!(((*l_80) = l_79) , (p_810->g_42 >= (l_79.f0 , ((p_71 == (((((1L != (-1L)) < p_71) || 0x20E74272ABD0CEA3L) || (!((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_81.s3157071473401476)).s3c10)), ((l_85[1][2][0] = p_810->g_82) == (void*)0), ((VECTOR(uint16_t, 8))(0x41AFL)), 0xFA35L, 0UL, 65535UL)).s8dfc)), 0xA3D7L, 0UL, 0xD804L, 0x7D7DL)).s3646344212274446, ((VECTOR(uint16_t, 16))(0xF112L)), ((VECTOR(uint16_t, 16))(0UL))))).sc4, ((VECTOR(uint16_t, 2))(0x8EE5L))))).odd)) , (-3L))) <= FAKE_DIVERGE(p_810->group_0_offset, get_group_id(0), 10)))))))
        { /* block id: 17 */
            int16_t l_91 = 0x6195L;
            int32_t l_116[4] = {1L,1L,1L,1L};
            union U4 *l_170[7][4] = {{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79},{&l_79,&l_79,&l_79,&l_79}};
            int8_t ***l_202[10][3] = {{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133},{&l_133,(void*)0,&l_133}};
            uint64_t l_236 = 0x47E1C72E30379E35L;
            int32_t *l_262 = &l_92;
            int32_t *l_263 = &l_116[3];
            int32_t *l_264 = (void*)0;
            int32_t *l_265[5];
            int8_t l_267 = 0x0AL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_265[i] = &l_116[3];
            if (l_86)
            { /* block id: 18 */
                int32_t *l_88 = (void*)0;
                int32_t *l_89 = &p_810->g_28;
                int32_t *l_90 = &p_810->g_28;
                int32_t *l_93 = &l_92;
                int32_t *l_94 = &l_87;
                int32_t *l_95 = &p_810->g_28;
                int32_t *l_96 = &l_92;
                int32_t *l_97 = &p_810->g_28;
                int32_t *l_98 = (void*)0;
                int32_t *l_99 = &l_92;
                int32_t l_100 = 0x0AEDAF9CL;
                int32_t *l_101 = &p_810->g_28;
                int32_t *l_102 = &l_87;
                int32_t *l_103 = &l_87;
                int32_t *l_104 = (void*)0;
                int32_t *l_105 = &l_87;
                int32_t *l_106 = (void*)0;
                int32_t *l_107 = &l_87;
                VECTOR(int8_t, 16) l_164 = (VECTOR(int8_t, 16))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0x10L), 0x10L), 0x10L, 0x1CL, 0x10L, (VECTOR(int8_t, 2))(0x1CL, 0x10L), (VECTOR(int8_t, 2))(0x1CL, 0x10L), 0x1CL, 0x10L, 0x1CL, 0x10L);
                union U4 *l_172[8][3][7] = {{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}},{{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79},{(void*)0,&l_79,(void*)0,&l_79,&l_79,&l_79,&l_79}}};
                int32_t l_173 = 0x0227ADE1L;
                int i, j, k;
                l_87 ^= (!(*p_810->g_27));
                p_810->g_108[1][4][2]--;
                if (((*l_107) = (*p_810->g_27)))
                { /* block id: 22 */
                    p_810->g_112[1] = p_810->g_111;
                    return &p_810->g_42;
                }
                else
                { /* block id: 25 */
                    uint32_t l_124[4] = {0x512D4483L,0x512D4483L,0x512D4483L,0x512D4483L};
                    int32_t l_144 = 0x14717422L;
                    VECTOR(int8_t, 8) l_159 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
                    VECTOR(int8_t, 16) l_163 = (VECTOR(int8_t, 16))(0x27L, (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, 0x1BL), 0x1BL), 0x1BL, 0x27L, 0x1BL, (VECTOR(int8_t, 2))(0x27L, 0x1BL), (VECTOR(int8_t, 2))(0x27L, 0x1BL), 0x27L, 0x1BL, 0x27L, 0x1BL);
                    int i;
                    for (p_810->g_111.f4 = 0; (p_810->g_111.f4 != 53); p_810->g_111.f4++)
                    { /* block id: 28 */
                        int32_t *l_117 = &p_810->g_28;
                        int32_t *l_118 = &l_116[1];
                        int32_t *l_119 = &l_116[3];
                        int32_t *l_120 = &l_116[1];
                        int32_t *l_121 = &p_810->g_28;
                        int32_t *l_122 = &p_810->g_28;
                        int32_t *l_123[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_123[i] = &l_92;
                        ++l_124[0];
                        return &p_810->g_42;
                    }
                    for (l_78 = 0; (l_78 <= (-1)); l_78 = safe_sub_func_int64_t_s_s(l_78, 1))
                    { /* block id: 34 */
                        int8_t ***l_131 = (void*)0;
                        int8_t ***l_132[1][8] = {{&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84,&l_84}};
                        uint8_t *l_139 = &p_810->g_108[1][4][2];
                        union U4 **l_171 = &l_170[4][1];
                        int i, j;
                        (*l_93) &= ((+((((&l_85[0][1][1] == (l_133 = (p_810->g_129 , (p_810->g_130 = (void*)0)))) != ((p_810->g_134 , l_79) , (safe_rshift_func_uint8_t_u_u(((void*)0 != &p_71), 2)))) && ((--(*l_139)) & ((l_144 = ((safe_mul_func_uint16_t_u_u(((void*)0 != &l_85[1][3][2]), l_124[1])) == 4294967295UL)) >= 0x69L))) | 0x0454CA82F6642889L)) < 0x438911B3L);
                        p_810->g_145--;
                        (*l_97) ^= l_91;
                        l_92 |= (((VECTOR(uint64_t, 4))(((*l_102) == (((*l_95) = ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0UL, 0x56L)).hi, (((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_810->g_156.xw)).hi, (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_159.s2631)).w, ((safe_sub_func_int64_t_s_s((&p_810->g_77[1] != (void*)0), (p_810->g_162 , (((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(l_163.s4fef38ab0b14fc1b)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_164.s73)), ((VECTOR(int8_t, 4))((safe_rshift_func_uint8_t_u_u((((((((*l_139) |= (((safe_add_func_int32_t_s_s(((p_810->g_169 , ((*l_171) = l_170[4][1])) == l_172[1][1][4]), ((&p_810->g_82 != &l_85[1][2][0]) , p_70))) ^ p_71) <= FAKE_DIVERGE(p_810->group_0_offset, get_group_id(0), 10))) < (*l_107)) , p_810->g_129.f8) >= p_810->g_111.f8) , p_810->g_112[1].f5) == 0x1A41AF9FBB45EB10L), 3)), 0L, 0x60L, 0x59L)).hi))).yyyxyyxx)).s2775752473260724, ((VECTOR(int8_t, 16))(0x3BL))))).s0 | 0x71L)))) || l_173))))) || l_124[0]) | 0x4F24L))), 4)), p_68)) < l_79.f0)) | 0x5295D964L)), 0xB9CE0AD08EFB34F4L, 18446744073709551615UL, 5UL)).w == p_810->g_111.f2);
                    }
                }
            }
            else
            { /* block id: 48 */
                int32_t *l_177 = &l_116[1];
                int32_t *l_178 = &l_116[3];
                int32_t *l_179 = &l_116[3];
                int32_t *l_180 = (void*)0;
                int32_t *l_181[6][1][3] = {{{&p_810->g_42,&p_810->g_28,&l_87}},{{&p_810->g_42,&p_810->g_28,&l_87}},{{&p_810->g_42,&p_810->g_28,&l_87}},{{&p_810->g_42,&p_810->g_28,&l_87}},{{&p_810->g_42,&p_810->g_28,&l_87}},{{&p_810->g_42,&p_810->g_28,&l_87}}};
                VECTOR(int32_t, 16) l_198 = (VECTOR(int32_t, 16))(0x1C1BF1E5L, (VECTOR(int32_t, 4))(0x1C1BF1E5L, (VECTOR(int32_t, 2))(0x1C1BF1E5L, 1L), 1L), 1L, 0x1C1BF1E5L, 1L, (VECTOR(int32_t, 2))(0x1C1BF1E5L, 1L), (VECTOR(int32_t, 2))(0x1C1BF1E5L, 1L), 0x1C1BF1E5L, 1L, 0x1C1BF1E5L, 1L);
                int i, j, k;
                (*p_810->g_174) = &l_170[4][1];
                p_810->g_186--;
                (*p_810->g_27) = (!(safe_mod_func_int8_t_s_s(0x3EL, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(0UL, 250UL)), 0x5BL)), (safe_lshift_func_int8_t_s_u((!l_91), ((VECTOR(uint8_t, 8))(l_193.yyyyyxyx)).s2)), 255UL, 0x89L)), ((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xF2L, 0x98L)))).xyxx)), ((+(safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((&p_810->g_77[1] != (p_810->g_111.f0 , l_181[2][0][0])), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_198.sb60ee2d5)).s52, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_810->g_199.yxzz)).wxzyzwwz)).s56))).odd)), 13))) || l_185[3][0]), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))((safe_sub_func_int16_t_s_s((l_202[0][0] != (((((6UL < (p_810->g_112[1].f1 > p_810->g_145)) ^ l_182) , 1L) , p_810->g_134) , &p_810->g_130)), p_810->g_112[1].f6)), FAKE_DIVERGE(p_810->local_1_offset, get_local_id(1), 10), p_810->g_108[1][4][2], p_810->g_111.f7, 0x52L, 0x2DL, 0UL, 0xFFL)).s36)), 0xF5L)), ((VECTOR(uint8_t, 4))(0x64L)), 0x83L, 0x61L, 3UL)).even))).s5)));
                if (((0x15DDL > (((*l_179) = p_68) | ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(l_205.s1f882ed2)).s20, ((VECTOR(uint32_t, 8))(l_206.xxzxyyxy)).s30))).yxyxyxyxxyyxxyyx, ((VECTOR(uint32_t, 2))(0xBCF49A6DL, 0UL)).yxyyxyyxyyyyyyxx)))))))).s9)) != p_810->g_129.f6))
                { /* block id: 53 */
                    for (p_810->g_145 = (-6); (p_810->g_145 >= 51); p_810->g_145++)
                    { /* block id: 56 */
                        uint16_t *l_211 = (void*)0;
                        uint16_t *l_212 = (void*)0;
                        uint16_t *l_213 = (void*)0;
                        uint16_t *l_214[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int64_t *l_227 = &l_86;
                        int32_t l_235 = (-9L);
                        int i;
                        (*p_810->g_27) = ((*p_810->g_27) > ((safe_add_func_uint16_t_u_u((p_810->g_215 = 0xF431L), ((p_810->g_129.f8 > p_70) || (((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(((*l_227) = (safe_sub_func_int32_t_s_s((*p_810->g_27), (p_810->g_129.f3 , l_116[2])))), (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_810->g_112[1].f2, (safe_sub_func_uint32_t_u_u(l_234, p_69)))), p_68)))), 1)))) <= l_206.w) && p_71) == p_810->g_199.y) && (*l_178)), (**p_810->g_130))), p_71)) , l_235) , (-8L)) > p_69) , (-1L))))) , p_70));
                        l_236++;
                        return &p_810->g_28;
                    }
                }
                else
                { /* block id: 63 */
                    for (l_87 = 0; (l_87 != (-23)); --l_87)
                    { /* block id: 66 */
                        p_810->g_242 = p_810->g_129;
                    }
                }
            }
            for (l_234 = 0; (l_234 >= (-15)); l_234--)
            { /* block id: 73 */
                uint8_t *l_245[5][4][3] = {{{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]}},{{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]}},{{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]}},{{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]}},{{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]},{&p_810->g_111.f6,&p_810->g_108[1][4][2],&p_810->g_108[1][4][2]}}};
                int32_t l_246 = 0x4F4E84C1L;
                int8_t ****l_251[8] = {&l_202[8][2],&l_202[8][2],&l_202[8][2],&l_202[8][2],&l_202[8][2],&l_202[8][2],&l_202[8][2],&l_202[8][2]};
                int32_t *l_261 = (void*)0;
                int32_t **l_260 = &l_261;
                int i, j, k;
                (*p_810->g_27) = ((l_91 , 0L) != (((l_246 = 3UL) | (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((p_810->g_252 = &l_84) == &l_133), ((VECTOR(uint16_t, 8))(((!(safe_mod_func_int64_t_s_s(0x3BE8F8155B06E9F9L, FAKE_DIVERGE(p_810->group_0_offset, get_group_id(0), 10)))) <= (((safe_add_func_int64_t_s_s(0L, ((&p_810->g_77[1] == &p_68) , l_257))) == p_69) & p_71)), ((VECTOR(uint16_t, 2))(0xA74AL)), l_258, ((VECTOR(uint16_t, 4))(0x8860L)))).s1)), l_86)) , p_810->g_134) , 0x4AL)) > FAKE_DIVERGE(p_810->group_0_offset, get_group_id(0), 10)));
                (*l_260) = &l_246;
            }
            --l_268;
        }
        else
        { /* block id: 80 */
            int32_t *l_276 = &p_810->g_28;
            int32_t *l_277 = &l_87;
            int32_t *l_278 = &l_184;
            int32_t *l_279 = &l_185[8][0];
            int32_t *l_280[7][6] = {{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0},{(void*)0,&l_182,(void*)0,&l_182,(void*)0,(void*)0}};
            int8_t l_281 = 0x5DL;
            int32_t l_282 = 0L;
            uint8_t l_283 = 1UL;
            int i, j;
            for (l_86 = 20; (l_86 >= 23); l_86++)
            { /* block id: 83 */
                union U3 *l_273 = &p_810->g_274;
                union U3 **l_275 = &l_273;
                (*l_275) = l_273;
            }
            --l_283;
        }
        (*p_810->g_27) &= (safe_sub_func_int64_t_s_s((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_290.ywwxyxxw)).s7, (safe_add_func_uint32_t_u_u(p_810->g_129.f2, (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((VECTOR(int64_t, 2))(l_297.s45)).hi , (safe_add_func_uint64_t_u_u(l_290.w, l_185[3][0]))), p_810->g_112[1].f6)), ((void*)0 == &p_68))))))), (l_87 ^ 0x4523043293D730E3L)));
        if ((atomic_inc(&p_810->l_atomic_input[2]) == 4))
        { /* block id: 90 */
            struct S0 l_300 = {0x582BL,0x52E3A9FBL,5UL,-5L,4UL,0x245D851CD8F33B59L,4UL,0x554EDFD1L,0x2FD2FEEDL};/* VOLATILE GLOBAL l_300 */
            struct S0 l_301 = {0L,0x23151D1CL,3UL,-10L,0x2E5E93C6BA4E8C01L,0UL,250UL,0x0F0944CAL,1UL};/* VOLATILE GLOBAL l_301 */
            int8_t l_302 = 0x6FL;
            int8_t l_303 = 5L;
            l_301 = l_300;
            l_303 = l_302;
            unsigned int result = 0;
            result += l_300.f0;
            result += l_300.f1;
            result += l_300.f2;
            result += l_300.f3;
            result += l_300.f4;
            result += l_300.f5;
            result += l_300.f6;
            result += l_300.f7;
            result += l_300.f8;
            result += l_301.f0;
            result += l_301.f1;
            result += l_301.f2;
            result += l_301.f3;
            result += l_301.f4;
            result += l_301.f5;
            result += l_301.f6;
            result += l_301.f7;
            result += l_301.f8;
            result += l_302;
            result += l_303;
            atomic_add(&p_810->l_special_values[2], result);
        }
        else
        { /* block id: 93 */
            (1 + 1);
        }
    }
    else
    { /* block id: 96 */
        union U3 *l_304 = &p_810->g_274;
        union U3 *l_306 = (void*)0;
        union U3 **l_305 = &l_306;
        VECTOR(int64_t, 16) l_383 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x2BF1DC6E4EA9B5E3L), 0x2BF1DC6E4EA9B5E3L), 0x2BF1DC6E4EA9B5E3L, 2L, 0x2BF1DC6E4EA9B5E3L, (VECTOR(int64_t, 2))(2L, 0x2BF1DC6E4EA9B5E3L), (VECTOR(int64_t, 2))(2L, 0x2BF1DC6E4EA9B5E3L), 2L, 0x2BF1DC6E4EA9B5E3L, 2L, 0x2BF1DC6E4EA9B5E3L);
        VECTOR(int64_t, 16) l_385 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        VECTOR(int64_t, 4) l_386 = (VECTOR(int64_t, 4))(0x0B0F55A41C67D5A0L, (VECTOR(int64_t, 2))(0x0B0F55A41C67D5A0L, 0x30D4BBE3C3D4229BL), 0x30D4BBE3C3D4229BL);
        struct S0 *l_387[7] = {&p_810->g_112[1],(void*)0,&p_810->g_112[1],&p_810->g_112[1],(void*)0,&p_810->g_112[1],&p_810->g_112[1]};
        int32_t l_400 = 0x29DE29E1L;
        int32_t l_404 = (-10L);
        int32_t l_406[6][5] = {{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL},{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL},{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL},{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL},{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL},{0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL,0x48A5133EL}};
        int32_t l_407 = (-1L);
        int i, j;
        (*p_810->g_27) ^= (l_304 == ((*l_305) = l_304));
        if ((atomic_inc(&p_810->l_atomic_input[34]) == 1))
        { /* block id: 100 */
            union U3 l_307[1] = {{0}};
            VECTOR(uint64_t, 2) l_308 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x11782B0EBEEA759BL);
            uint32_t l_309 = 0x2A60849BL;
            VECTOR(uint64_t, 16) l_310 = (VECTOR(uint64_t, 16))(0xA5B328EE41843362L, (VECTOR(uint64_t, 4))(0xA5B328EE41843362L, (VECTOR(uint64_t, 2))(0xA5B328EE41843362L, 0x8E3F98E29903CBE5L), 0x8E3F98E29903CBE5L), 0x8E3F98E29903CBE5L, 0xA5B328EE41843362L, 0x8E3F98E29903CBE5L, (VECTOR(uint64_t, 2))(0xA5B328EE41843362L, 0x8E3F98E29903CBE5L), (VECTOR(uint64_t, 2))(0xA5B328EE41843362L, 0x8E3F98E29903CBE5L), 0xA5B328EE41843362L, 0x8E3F98E29903CBE5L, 0xA5B328EE41843362L, 0x8E3F98E29903CBE5L);
            int16_t l_311 = 0x7832L;
            VECTOR(uint64_t, 4) l_312 = (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 1UL), 1UL);
            VECTOR(uint64_t, 8) l_313 = (VECTOR(uint64_t, 8))(0x67D35B22305750D7L, (VECTOR(uint64_t, 4))(0x67D35B22305750D7L, (VECTOR(uint64_t, 2))(0x67D35B22305750D7L, 0xAC047BC4CE6D024CL), 0xAC047BC4CE6D024CL), 0xAC047BC4CE6D024CL, 0x67D35B22305750D7L, 0xAC047BC4CE6D024CL);
            union U3 l_314 = {0};/* VOLATILE GLOBAL l_314 */
            int8_t l_315 = (-9L);
            int32_t l_316 = 1L;
            VECTOR(uint64_t, 16) l_317 = (VECTOR(uint64_t, 16))(0x92ABF6E8A733794DL, (VECTOR(uint64_t, 4))(0x92ABF6E8A733794DL, (VECTOR(uint64_t, 2))(0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L), 0x6A752FAC1601FB99L), 0x6A752FAC1601FB99L, 0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L, (VECTOR(uint64_t, 2))(0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L), (VECTOR(uint64_t, 2))(0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L), 0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L, 0x92ABF6E8A733794DL, 0x6A752FAC1601FB99L);
            union U2 l_318 = {0};
            union U2 l_319 = {0};
            union U2 l_320[2][3] = {{{0},{0},{0}},{{0},{0},{0}}};
            int16_t l_321 = 0x6560L;
            VECTOR(uint64_t, 16) l_322 = (VECTOR(uint64_t, 16))(0x832D1D7DD27D1F8EL, (VECTOR(uint64_t, 4))(0x832D1D7DD27D1F8EL, (VECTOR(uint64_t, 2))(0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL), 0xB20591139D9ACD6BL), 0xB20591139D9ACD6BL, 0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL, (VECTOR(uint64_t, 2))(0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL), (VECTOR(uint64_t, 2))(0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL), 0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL, 0x832D1D7DD27D1F8EL, 0xB20591139D9ACD6BL);
            VECTOR(uint64_t, 8) l_323 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
            VECTOR(uint64_t, 16) l_324 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 1UL, 18446744073709551613UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), 1UL, 18446744073709551613UL, 1UL, 18446744073709551613UL);
            VECTOR(uint64_t, 8) l_325 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0UL, 18446744073709551607UL);
            int32_t l_326[9][3] = {{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL},{0x6162333DL,0x6162333DL,0x6162333DL}};
            int64_t l_327 = 1L;
            int32_t l_328 = (-2L);
            int64_t l_352 = 0x52AECC87DAEB41E3L;
            uint32_t l_353[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_353[i] = 1UL;
            if ((l_307[0] , ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_308.xyyy)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 4))(9UL, 1UL, 0x8C842EB54D7976DDL, 0x2135F3344D82C8C8L)).x, ((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(6UL, l_309, ((VECTOR(uint64_t, 2))(l_310.sb5)).odd, l_311, ((VECTOR(uint64_t, 8))(l_312.ywzyxxwy)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(1UL, 0x9426AAB50528DDE3L)))), 0xD2866269D93F26B0L, 18446744073709551611UL)).sc7, ((VECTOR(uint64_t, 4))(l_313.s4753)).lo))), 18446744073709551615UL, 1UL)).even, ((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(0xE569B6153CF38F01L, 0x9FEDD757BACD3422L, 0UL, 4UL)), ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(((l_314 , l_315) , ((l_320[0][2] = ((l_316 , ((VECTOR(uint64_t, 2))(l_317.s27)).even) , (l_319 = l_318))) , l_321)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_322.s56)), 0x88BAE4642CE6C228L, 0x3A0C79D9A08F3B7FL)), ((VECTOR(uint64_t, 2))(l_323.s00)), 0x375DF7C3A5EBA586L)).hi, ((VECTOR(uint64_t, 4))(GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_324.sf0)).xxxyyxyyyxyxxxxx)).se, 0x571F5CE4DA1F375FL, 18446744073709551615UL))))).zxzwzyzwzyxwyxzx, ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(0xAA9E50422A72A61AL, 0xC10EF601095B625FL)).yxxyyyxy))).s71, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_325.s14)).xxyy)).yzzzzxzy)).s32))).xyyxxxyxxyyxyxxx)), ((VECTOR(uint64_t, 2))(5UL, 18446744073709551611UL)).yyxxyxxxxxxyyyyx)))))).s3f95, (uint64_t)l_326[8][0], (uint64_t)l_327)))))).hi))), ((VECTOR(uint64_t, 2))(0x9DEFF3D06E82CEF0L)), 0x1D223A280458CA9DL, 18446744073709551615UL)).s26)).xyyx)))))).lo)).z , 0x1A6D2180L) , l_328)))
            { /* block id: 103 */
                int8_t l_329 = 0x1BL;
                uint8_t l_330 = 7UL;
                int32_t *l_338 = (void*)0;
                uint16_t l_339 = 0x7A0AL;
                l_330++;
                for (l_329 = 21; (l_329 < (-16)); l_329 = safe_sub_func_int16_t_s_s(l_329, 8))
                { /* block id: 107 */
                    uint16_t l_335 = 65529UL;
                    l_328 ^= (-1L);
                    --l_335;
                }
                l_338 = (void*)0;
                if (l_339)
                { /* block id: 112 */
                    l_338 = (void*)0;
                }
                else
                { /* block id: 114 */
                    int64_t l_340 = (-1L);
                    int32_t l_341 = 0L;
                    VECTOR(int32_t, 8) l_342 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x4E9A02F5L), 0x4E9A02F5L), 0x4E9A02F5L, 2L, 0x4E9A02F5L);
                    VECTOR(int32_t, 2) l_343 = (VECTOR(int32_t, 2))((-9L), (-9L));
                    int32_t l_344 = 0x674794DEL;
                    int i;
                    l_328 ^= (l_341 = l_340);
                    if (((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_342.s5360)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_343.xyxyxxxyxyyyxxxy)).s52)).xyyxxyxx)).hi, ((VECTOR(int32_t, 4))(l_344, 0x03F521F7L, 0x3D62FD9EL, 0x060D448FL))))).odd))).lo)
                    { /* block id: 117 */
                        uint64_t l_345[3];
                        uint32_t l_346 = 0x3FD580A7L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_345[i] = 18446744073709551615UL;
                        l_328 |= (l_345[0] &= 0x77AAECDDL);
                        l_346--;
                    }
                    else
                    { /* block id: 121 */
                        VECTOR(int32_t, 2) l_349 = (VECTOR(int32_t, 2))(8L, 0x05E88D1CL);
                        int i;
                        l_349.x = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_349.yyxx)).yzzwxwyx)).s4;
                    }
                }
            }
            else
            { /* block id: 125 */
                int32_t l_351 = 0x16B42B07L;
                int32_t *l_350 = &l_351;
                l_350 = (void*)0;
            }
            l_353[1] = l_352;
            unsigned int result = 0;
            int l_307_i0;
            for (l_307_i0 = 0; l_307_i0 < 1; l_307_i0++) {
                result += l_307[l_307_i0].f0;
                result += l_307[l_307_i0].f1;
                result += l_307[l_307_i0].f2;
            }
            result += l_308.y;
            result += l_308.x;
            result += l_309;
            result += l_310.sf;
            result += l_310.se;
            result += l_310.sd;
            result += l_310.sc;
            result += l_310.sb;
            result += l_310.sa;
            result += l_310.s9;
            result += l_310.s8;
            result += l_310.s7;
            result += l_310.s6;
            result += l_310.s5;
            result += l_310.s4;
            result += l_310.s3;
            result += l_310.s2;
            result += l_310.s1;
            result += l_310.s0;
            result += l_311;
            result += l_312.w;
            result += l_312.z;
            result += l_312.y;
            result += l_312.x;
            result += l_313.s7;
            result += l_313.s6;
            result += l_313.s5;
            result += l_313.s4;
            result += l_313.s3;
            result += l_313.s2;
            result += l_313.s1;
            result += l_313.s0;
            result += l_314.f0;
            result += l_314.f1;
            result += l_314.f2;
            result += l_315;
            result += l_316;
            result += l_317.sf;
            result += l_317.se;
            result += l_317.sd;
            result += l_317.sc;
            result += l_317.sb;
            result += l_317.sa;
            result += l_317.s9;
            result += l_317.s8;
            result += l_317.s7;
            result += l_317.s6;
            result += l_317.s5;
            result += l_317.s4;
            result += l_317.s3;
            result += l_317.s2;
            result += l_317.s1;
            result += l_317.s0;
            result += l_318.f0;
            result += l_318.f1;
            result += l_318.f2;
            result += l_319.f0;
            result += l_319.f1;
            result += l_319.f2;
            int l_320_i0, l_320_i1;
            for (l_320_i0 = 0; l_320_i0 < 2; l_320_i0++) {
                for (l_320_i1 = 0; l_320_i1 < 3; l_320_i1++) {
                    result += l_320[l_320_i0][l_320_i1].f0;
                    result += l_320[l_320_i0][l_320_i1].f1;
                    result += l_320[l_320_i0][l_320_i1].f2;
                }
            }
            result += l_321;
            result += l_322.sf;
            result += l_322.se;
            result += l_322.sd;
            result += l_322.sc;
            result += l_322.sb;
            result += l_322.sa;
            result += l_322.s9;
            result += l_322.s8;
            result += l_322.s7;
            result += l_322.s6;
            result += l_322.s5;
            result += l_322.s4;
            result += l_322.s3;
            result += l_322.s2;
            result += l_322.s1;
            result += l_322.s0;
            result += l_323.s7;
            result += l_323.s6;
            result += l_323.s5;
            result += l_323.s4;
            result += l_323.s3;
            result += l_323.s2;
            result += l_323.s1;
            result += l_323.s0;
            result += l_324.sf;
            result += l_324.se;
            result += l_324.sd;
            result += l_324.sc;
            result += l_324.sb;
            result += l_324.sa;
            result += l_324.s9;
            result += l_324.s8;
            result += l_324.s7;
            result += l_324.s6;
            result += l_324.s5;
            result += l_324.s4;
            result += l_324.s3;
            result += l_324.s2;
            result += l_324.s1;
            result += l_324.s0;
            result += l_325.s7;
            result += l_325.s6;
            result += l_325.s5;
            result += l_325.s4;
            result += l_325.s3;
            result += l_325.s2;
            result += l_325.s1;
            result += l_325.s0;
            int l_326_i0, l_326_i1;
            for (l_326_i0 = 0; l_326_i0 < 9; l_326_i0++) {
                for (l_326_i1 = 0; l_326_i1 < 3; l_326_i1++) {
                    result += l_326[l_326_i0][l_326_i1];
                }
            }
            result += l_327;
            result += l_328;
            result += l_352;
            int l_353_i0;
            for (l_353_i0 = 0; l_353_i0 < 4; l_353_i0++) {
                result += l_353[l_353_i0];
            }
            atomic_add(&p_810->l_special_values[34], result);
        }
        else
        { /* block id: 129 */
            (1 + 1);
        }
        for (p_810->g_111.f8 = 7; (p_810->g_111.f8 > 50); p_810->g_111.f8 = safe_add_func_int16_t_s_s(p_810->g_111.f8, 4))
        { /* block id: 134 */
            uint32_t l_365 = 0x7853086DL;
            int32_t l_401 = 0x7A3F2DC6L;
            int32_t l_403 = (-6L);
            uint16_t l_408[5] = {0UL,0UL,0UL,0UL,0UL};
            int i;
            if (p_70)
                break;
            if ((*p_810->g_27))
                break;
            for (p_810->g_145 = (-6); (p_810->g_145 > 36); ++p_810->g_145)
            { /* block id: 139 */
                int32_t *l_358 = &l_266[3][5];
                int32_t l_359 = 0L;
                int32_t *l_360 = &l_359;
                int32_t *l_361 = &p_810->g_28;
                int32_t *l_362 = &l_359;
                int32_t *l_363 = (void*)0;
                int32_t *l_364[8] = {&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28,&p_810->g_28};
                uint8_t *l_372 = (void*)0;
                uint8_t *l_373 = &p_810->g_108[0][2][2];
                VECTOR(int32_t, 8) l_376 = (VECTOR(int32_t, 8))(0x63D14618L, (VECTOR(int32_t, 4))(0x63D14618L, (VECTOR(int32_t, 2))(0x63D14618L, 5L), 5L), 5L, 0x63D14618L, 5L);
                VECTOR(int32_t, 16) l_391 = (VECTOR(int32_t, 16))(0x06275D1EL, (VECTOR(int32_t, 4))(0x06275D1EL, (VECTOR(int32_t, 2))(0x06275D1EL, 1L), 1L), 1L, 0x06275D1EL, 1L, (VECTOR(int32_t, 2))(0x06275D1EL, 1L), (VECTOR(int32_t, 2))(0x06275D1EL, 1L), 0x06275D1EL, 1L, 0x06275D1EL, 1L);
                struct S0 **l_397 = &l_387[4];
                int i;
                l_365--;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((*p_810->g_27), ((VECTOR(int32_t, 4))((((*l_373) = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(l_368.s17574144)).s3005536363770163, ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_369.wywzyyxy)).s5161632606073141)).s8014, (uint8_t)((safe_rshift_func_uint8_t_u_u(252UL, 3)) != (*l_360))))).zxywwwyyzxwzwxzy))).s89c9)).y) < (safe_add_func_int64_t_s_s(l_365, l_365))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_376.s67)), (int32_t)0x52B233D5L))).xxyyxyxx)))).s43, ((VECTOR(int32_t, 16))(((*l_361) &= ((((255UL || (safe_lshift_func_uint8_t_u_u(252UL, 5))) , p_68) ^ 1UL) | p_810->g_111.f8)), 0x6693AD60L, p_70, p_71, 1L, (-1L), 4L, l_297.s1, (-7L), 0L, 0x5B96DCF8L, (-6L), l_379[5], 0x48A00150L, 0L, (-5L))).s09))).yxxyyxxxyyxxyyxy, ((VECTOR(int32_t, 16))((-1L)))))))).s8107)), 0x1725A535L, 0x0E51FD21L, 0L, (-1L))).s5435615530713524)).odd)).s05)).xyyx)).even)), 0x508C08D0L)), (-1L), 1L, 7L)).odd)).even)).yxyyyyxx, ((VECTOR(int32_t, 8))(0x574B7864L))))), ((VECTOR(int32_t, 8))(4L))))))).s5)
                { /* block id: 143 */
                    uint64_t *l_380 = &p_810->g_186;
                    VECTOR(int64_t, 4) l_384 = (VECTOR(int64_t, 4))(0x5A5AEA254722D623L, (VECTOR(int64_t, 2))(0x5A5AEA254722D623L, 0x3CF8AA51B17D30F8L), 0x3CF8AA51B17D30F8L);
                    struct S0 **l_388 = &l_387[1];
                    int32_t l_392 = 0x6BE24CA3L;
                    int64_t *l_393 = (void*)0;
                    int64_t *l_394 = &l_86;
                    int64_t *l_395[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_396 = &p_810->g_112[1].f3;
                    struct S0 ***l_398 = (void*)0;
                    int i;
                    (*l_360) &= ((((++(*l_380)) == ((((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(0x844ACF881606B654L, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_383.sfe)), 1L, (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_384.xwyxwywwyxxwxwyy)).sfe)).lo, 0x5783F69C20DDC43AL, 0x34C5373F0FC6BAD3L, 0x5880D4CDAF353029L)).s16, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(p_71, (-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_385.se58fb844)))).even)).wyzzxzyz, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(l_386.zx)), ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((((*l_388) = l_387[3]) != (p_810->g_389[1] = &p_810->g_112[1])), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x0053555FL, (-6L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(p_810->g_390.xxxxyyxyyyxyxyxx)).s1e0d, (int32_t)0x37659A85L))))), 0x26CFF18AL, 0x6753B815L)).s33)).xyxyxyxx)).s24)), 0x46215546L)).wxwxxwyz, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(l_391.sa8d548a9dc16a3e0)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(0x0F4389B0L, 0x36D73A02L, ((VECTOR(int32_t, 4))((l_365 | (**p_810->g_130)), ((*l_396) = ((p_70 = ((*l_394) &= ((l_392 ^= (0xC942L | (-1L))) , p_810->g_42))) == p_69)), (-1L), (-2L))), 6L, 2L)).lo, (int32_t)(-8L)))), ((VECTOR(int32_t, 2))(0x52DF604EL)), 0x3B1CDB37L, (-3L), ((VECTOR(int32_t, 8))(1L)))).hi, ((VECTOR(int32_t, 8))((-1L)))))), ((VECTOR(int32_t, 8))((-8L)))))).s51, ((VECTOR(uint32_t, 2))(0x565244B3L)))))))).xyyxyxyy))).hi)), ((VECTOR(int64_t, 2))((-9L))), ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))((-1L))))), ((VECTOR(int64_t, 16))((-10L))), ((VECTOR(int64_t, 16))((-1L)))))).sd6))))), 0x4506CDF47C42DF65L)).lo))), ((VECTOR(uint64_t, 2))(18446744073709551612UL)), ((VECTOR(uint64_t, 2))(1UL))))).lo && p_71) & p_810->g_111.f8)) & p_71) , (-10L));
                    atomic_xor(&p_810->l_atomic_reduction[0], l_384.x + get_linear_global_id());
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_810->v_collective += p_810->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_810->g_399 = l_397;
                }
                else
                { /* block id: 154 */
                    int8_t l_402 = 0x62L;
                    int32_t l_405 = 0x62446FEBL;
                    ++l_408[3];
                }
                (*l_362) = l_206.x;
            }
        }
    }
    (*p_810->g_27) &= l_86;
    return &p_810->g_28;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S5 c_811;
    struct S5* p_810 = &c_811;
    struct S5 c_812 = {
        (VECTOR(int64_t, 4))(0x218E9934B0B4EF66L, (VECTOR(int64_t, 2))(0x218E9934B0B4EF66L, 1L), 1L), // p_810->g_7
        0x0C84B7B8L, // p_810->g_28
        &p_810->g_28, // p_810->g_27
        0x251CA2AEL, // p_810->g_42
        (VECTOR(uint32_t, 8))(0xB7607968L, (VECTOR(uint32_t, 4))(0xB7607968L, (VECTOR(uint32_t, 2))(0xB7607968L, 1UL), 1UL), 1UL, 0xB7607968L, 1UL), // p_810->g_52
        {(-8L),(-8L)}, // p_810->g_77
        0x4EL, // p_810->g_83
        &p_810->g_83, // p_810->g_82
        {{{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL}},{{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL},{1UL,0x8FL,0x63L,0x8FL}}}, // p_810->g_108
        {0x0D72L,-1L,0x05428794L,0L,0x8A2DDD9115465196L,0UL,0UL,2UL,4294967292UL}, // p_810->g_111
        {{-1L,1L,1UL,0x0D7201B9L,0x6C78DD8142B0CC67L,1UL,8UL,0xBA46063AL,0xCE40C687L},{-1L,1L,1UL,0x0D7201B9L,0x6C78DD8142B0CC67L,1UL,8UL,0xBA46063AL,0xCE40C687L}}, // p_810->g_112
        0x78ADDDDEL, // p_810->g_115
        {0x6913L,-1L,4294967287UL,6L,0xDBD879D1BA22EFFBL,0UL,0x8CL,1UL,4294967287UL}, // p_810->g_129
        &p_810->g_82, // p_810->g_130
        {0}, // p_810->g_134
        0UL, // p_810->g_145
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL), // p_810->g_156
        {0}, // p_810->g_162
        {0}, // p_810->g_169
        (void*)0, // p_810->g_176
        {{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176},{&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176,&p_810->g_176}}, // p_810->g_175
        &p_810->g_175[0][4], // p_810->g_174
        18446744073709551612UL, // p_810->g_186
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), // p_810->g_199
        0x75EF0532L, // p_810->g_215
        {&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129,&p_810->g_129}, // p_810->g_241
        {0x6ECBL,0x37618F1FL,0x9C763639L,0x302581F7L,0x34F888573A59F1F8L,1UL,251UL,0x638CF908L,0xA464EB96L}, // p_810->g_242
        &p_810->g_130, // p_810->g_252
        (void*)0, // p_810->g_259
        {0}, // p_810->g_274
        {&p_810->g_112[1],&p_810->g_112[1]}, // p_810->g_389
        (VECTOR(int32_t, 2))(8L, 0x0F003FEEL), // p_810->g_390
        &p_810->g_389[0], // p_810->g_399
        4294967295UL, // p_810->g_412
        (void*)0, // p_810->g_418
        (VECTOR(uint64_t, 4))(0xE6E577B36FF8A205L, (VECTOR(uint64_t, 2))(0xE6E577B36FF8A205L, 0UL), 0UL), // p_810->g_419
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x41D69EB1L), 0x41D69EB1L), // p_810->g_421
        (VECTOR(int32_t, 16))(0x7CB804B9L, (VECTOR(int32_t, 4))(0x7CB804B9L, (VECTOR(int32_t, 2))(0x7CB804B9L, 1L), 1L), 1L, 0x7CB804B9L, 1L, (VECTOR(int32_t, 2))(0x7CB804B9L, 1L), (VECTOR(int32_t, 2))(0x7CB804B9L, 1L), 0x7CB804B9L, 1L, 0x7CB804B9L, 1L), // p_810->g_424
        {{&p_810->g_42,&p_810->g_42},{&p_810->g_42,&p_810->g_42},{&p_810->g_42,&p_810->g_42},{&p_810->g_42,&p_810->g_42}}, // p_810->g_436
        &p_810->g_436[1][1], // p_810->g_435
        (-2L), // p_810->g_439
        {0}, // p_810->g_440
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), // p_810->g_443
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 5UL), 5UL), // p_810->g_447
        (VECTOR(int8_t, 2))(5L, 0L), // p_810->g_458
        0L, // p_810->g_478
        {0}, // p_810->g_551
        &p_810->g_412, // p_810->g_567
        (VECTOR(int64_t, 8))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, (-10L)), (-10L)), (-10L), 6L, (-10L)), // p_810->g_576
        {0}, // p_810->g_580
        {{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}},{{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{-1L,-2L,0x14ADE800L,5L,0xDFDB1C3A1BD0A467L,0x39BEBB497810F6D2L,0x61L,0x796DBE57L,1UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL},{0x4AE1L,0x04935766L,4294967292UL,1L,0xF9F7A9F89BAAEDA5L,2UL,1UL,4294967294UL,6UL}}}, // p_810->g_581
        {{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}},{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}},{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}},{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}},{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}},{{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}},{{0x7189L,-2L,0x1C5E1359L,-3L,0x4E14DE682616E7E0L,1UL,0x9AL,0xC841629CL,0x8CF7002DL},{1L,-8L,3UL,0x313C9DD0L,0x74D6E2CF46D1ACC7L,9UL,0UL,0xC7915C33L,0x143F0DFCL}}}}, // p_810->g_582
        {0x5858L,7L,4294967288UL,0x59407CA3L,0x5D68F721590C978DL,0UL,0xC8L,0x2338DA04L,4294967295UL}, // p_810->g_591
        0x3381L, // p_810->g_596
        {{{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596}},{{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596}},{{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596}},{{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596},{&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596,&p_810->g_596}}}, // p_810->g_595
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x67L), 0x67L), 0x67L, 0L, 0x67L), // p_810->g_599
        0x527D3369L, // p_810->g_607
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), // p_810->g_620
        (VECTOR(int16_t, 8))(0x317FL, (VECTOR(int16_t, 4))(0x317FL, (VECTOR(int16_t, 2))(0x317FL, 0x22BFL), 0x22BFL), 0x22BFL, 0x317FL, 0x22BFL), // p_810->g_621
        (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 0x25L), 0x25L), // p_810->g_671
        &p_810->g_27, // p_810->g_676
        18446744073709551612UL, // p_810->g_682
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xE229F58FL), 0xE229F58FL), // p_810->g_691
        (VECTOR(uint32_t, 16))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL), 0UL, 6UL, 0UL, (VECTOR(uint32_t, 2))(6UL, 0UL), (VECTOR(uint32_t, 2))(6UL, 0UL), 6UL, 0UL, 6UL, 0UL), // p_810->g_692
        (VECTOR(uint32_t, 2))(1UL, 0x2D5CE6EAL), // p_810->g_696
        (VECTOR(uint32_t, 8))(0x5D2B5ACBL, (VECTOR(uint32_t, 4))(0x5D2B5ACBL, (VECTOR(uint32_t, 2))(0x5D2B5ACBL, 4294967295UL), 4294967295UL), 4294967295UL, 0x5D2B5ACBL, 4294967295UL), // p_810->g_697
        (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL), 0UL), 0UL, 18446744073709551612UL, 0UL), // p_810->g_714
        1L, // p_810->g_773
        0x52BF40C1BDD10E72L, // p_810->g_776
        0x72A8E22FL, // p_810->g_777
        {0x7FFBL,5L,4294967286UL,0x1D068D29L,18446744073709551615UL,0xE1C6101DF8CD2EB4L,255UL,0UL,0x7A50B672L}, // p_810->g_781
        {1L,1L,0x6F3643D3L,8L,0xC4D33FCFB971EDA4L,0x1EE433FB1A67590EL,4UL,0x1D1CA150L,9UL}, // p_810->g_782
        {0}, // p_810->g_791
        {0}, // p_810->g_794
        {0}, // p_810->g_795
        0x0390F84BL, // p_810->g_805
        0, // p_810->v_collective
        sequence_input[get_global_id(0)], // p_810->global_0_offset
        sequence_input[get_global_id(1)], // p_810->global_1_offset
        sequence_input[get_global_id(2)], // p_810->global_2_offset
        sequence_input[get_local_id(0)], // p_810->local_0_offset
        sequence_input[get_local_id(1)], // p_810->local_1_offset
        sequence_input[get_local_id(2)], // p_810->local_2_offset
        sequence_input[get_group_id(0)], // p_810->group_0_offset
        sequence_input[get_group_id(1)], // p_810->group_1_offset
        sequence_input[get_group_id(2)], // p_810->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_810->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_811 = c_812;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_810);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_810->g_7.x, "p_810->g_7.x", print_hash_value);
    transparent_crc(p_810->g_7.y, "p_810->g_7.y", print_hash_value);
    transparent_crc(p_810->g_7.z, "p_810->g_7.z", print_hash_value);
    transparent_crc(p_810->g_7.w, "p_810->g_7.w", print_hash_value);
    transparent_crc(p_810->g_28, "p_810->g_28", print_hash_value);
    transparent_crc(p_810->g_42, "p_810->g_42", print_hash_value);
    transparent_crc(p_810->g_52.s0, "p_810->g_52.s0", print_hash_value);
    transparent_crc(p_810->g_52.s1, "p_810->g_52.s1", print_hash_value);
    transparent_crc(p_810->g_52.s2, "p_810->g_52.s2", print_hash_value);
    transparent_crc(p_810->g_52.s3, "p_810->g_52.s3", print_hash_value);
    transparent_crc(p_810->g_52.s4, "p_810->g_52.s4", print_hash_value);
    transparent_crc(p_810->g_52.s5, "p_810->g_52.s5", print_hash_value);
    transparent_crc(p_810->g_52.s6, "p_810->g_52.s6", print_hash_value);
    transparent_crc(p_810->g_52.s7, "p_810->g_52.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_810->g_77[i], "p_810->g_77[i]", print_hash_value);

    }
    transparent_crc(p_810->g_83, "p_810->g_83", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_810->g_108[i][j][k], "p_810->g_108[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_810->g_111.f0, "p_810->g_111.f0", print_hash_value);
    transparent_crc(p_810->g_111.f1, "p_810->g_111.f1", print_hash_value);
    transparent_crc(p_810->g_111.f2, "p_810->g_111.f2", print_hash_value);
    transparent_crc(p_810->g_111.f3, "p_810->g_111.f3", print_hash_value);
    transparent_crc(p_810->g_111.f4, "p_810->g_111.f4", print_hash_value);
    transparent_crc(p_810->g_111.f5, "p_810->g_111.f5", print_hash_value);
    transparent_crc(p_810->g_111.f6, "p_810->g_111.f6", print_hash_value);
    transparent_crc(p_810->g_111.f7, "p_810->g_111.f7", print_hash_value);
    transparent_crc(p_810->g_111.f8, "p_810->g_111.f8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_810->g_112[i].f0, "p_810->g_112[i].f0", print_hash_value);
        transparent_crc(p_810->g_112[i].f1, "p_810->g_112[i].f1", print_hash_value);
        transparent_crc(p_810->g_112[i].f2, "p_810->g_112[i].f2", print_hash_value);
        transparent_crc(p_810->g_112[i].f3, "p_810->g_112[i].f3", print_hash_value);
        transparent_crc(p_810->g_112[i].f4, "p_810->g_112[i].f4", print_hash_value);
        transparent_crc(p_810->g_112[i].f5, "p_810->g_112[i].f5", print_hash_value);
        transparent_crc(p_810->g_112[i].f6, "p_810->g_112[i].f6", print_hash_value);
        transparent_crc(p_810->g_112[i].f7, "p_810->g_112[i].f7", print_hash_value);
        transparent_crc(p_810->g_112[i].f8, "p_810->g_112[i].f8", print_hash_value);

    }
    transparent_crc(p_810->g_115, "p_810->g_115", print_hash_value);
    transparent_crc(p_810->g_129.f0, "p_810->g_129.f0", print_hash_value);
    transparent_crc(p_810->g_129.f1, "p_810->g_129.f1", print_hash_value);
    transparent_crc(p_810->g_129.f2, "p_810->g_129.f2", print_hash_value);
    transparent_crc(p_810->g_129.f3, "p_810->g_129.f3", print_hash_value);
    transparent_crc(p_810->g_129.f4, "p_810->g_129.f4", print_hash_value);
    transparent_crc(p_810->g_129.f5, "p_810->g_129.f5", print_hash_value);
    transparent_crc(p_810->g_129.f6, "p_810->g_129.f6", print_hash_value);
    transparent_crc(p_810->g_129.f7, "p_810->g_129.f7", print_hash_value);
    transparent_crc(p_810->g_129.f8, "p_810->g_129.f8", print_hash_value);
    transparent_crc(p_810->g_134.f1, "p_810->g_134.f1", print_hash_value);
    transparent_crc(p_810->g_145, "p_810->g_145", print_hash_value);
    transparent_crc(p_810->g_156.x, "p_810->g_156.x", print_hash_value);
    transparent_crc(p_810->g_156.y, "p_810->g_156.y", print_hash_value);
    transparent_crc(p_810->g_156.z, "p_810->g_156.z", print_hash_value);
    transparent_crc(p_810->g_156.w, "p_810->g_156.w", print_hash_value);
    transparent_crc(p_810->g_186, "p_810->g_186", print_hash_value);
    transparent_crc(p_810->g_199.x, "p_810->g_199.x", print_hash_value);
    transparent_crc(p_810->g_199.y, "p_810->g_199.y", print_hash_value);
    transparent_crc(p_810->g_199.z, "p_810->g_199.z", print_hash_value);
    transparent_crc(p_810->g_199.w, "p_810->g_199.w", print_hash_value);
    transparent_crc(p_810->g_215, "p_810->g_215", print_hash_value);
    transparent_crc(p_810->g_242.f0, "p_810->g_242.f0", print_hash_value);
    transparent_crc(p_810->g_242.f1, "p_810->g_242.f1", print_hash_value);
    transparent_crc(p_810->g_242.f2, "p_810->g_242.f2", print_hash_value);
    transparent_crc(p_810->g_242.f3, "p_810->g_242.f3", print_hash_value);
    transparent_crc(p_810->g_242.f4, "p_810->g_242.f4", print_hash_value);
    transparent_crc(p_810->g_242.f5, "p_810->g_242.f5", print_hash_value);
    transparent_crc(p_810->g_242.f6, "p_810->g_242.f6", print_hash_value);
    transparent_crc(p_810->g_242.f7, "p_810->g_242.f7", print_hash_value);
    transparent_crc(p_810->g_242.f8, "p_810->g_242.f8", print_hash_value);
    transparent_crc(p_810->g_390.x, "p_810->g_390.x", print_hash_value);
    transparent_crc(p_810->g_390.y, "p_810->g_390.y", print_hash_value);
    transparent_crc(p_810->g_412, "p_810->g_412", print_hash_value);
    transparent_crc(p_810->g_419.x, "p_810->g_419.x", print_hash_value);
    transparent_crc(p_810->g_419.y, "p_810->g_419.y", print_hash_value);
    transparent_crc(p_810->g_419.z, "p_810->g_419.z", print_hash_value);
    transparent_crc(p_810->g_419.w, "p_810->g_419.w", print_hash_value);
    transparent_crc(p_810->g_421.x, "p_810->g_421.x", print_hash_value);
    transparent_crc(p_810->g_421.y, "p_810->g_421.y", print_hash_value);
    transparent_crc(p_810->g_421.z, "p_810->g_421.z", print_hash_value);
    transparent_crc(p_810->g_421.w, "p_810->g_421.w", print_hash_value);
    transparent_crc(p_810->g_424.s0, "p_810->g_424.s0", print_hash_value);
    transparent_crc(p_810->g_424.s1, "p_810->g_424.s1", print_hash_value);
    transparent_crc(p_810->g_424.s2, "p_810->g_424.s2", print_hash_value);
    transparent_crc(p_810->g_424.s3, "p_810->g_424.s3", print_hash_value);
    transparent_crc(p_810->g_424.s4, "p_810->g_424.s4", print_hash_value);
    transparent_crc(p_810->g_424.s5, "p_810->g_424.s5", print_hash_value);
    transparent_crc(p_810->g_424.s6, "p_810->g_424.s6", print_hash_value);
    transparent_crc(p_810->g_424.s7, "p_810->g_424.s7", print_hash_value);
    transparent_crc(p_810->g_424.s8, "p_810->g_424.s8", print_hash_value);
    transparent_crc(p_810->g_424.s9, "p_810->g_424.s9", print_hash_value);
    transparent_crc(p_810->g_424.sa, "p_810->g_424.sa", print_hash_value);
    transparent_crc(p_810->g_424.sb, "p_810->g_424.sb", print_hash_value);
    transparent_crc(p_810->g_424.sc, "p_810->g_424.sc", print_hash_value);
    transparent_crc(p_810->g_424.sd, "p_810->g_424.sd", print_hash_value);
    transparent_crc(p_810->g_424.se, "p_810->g_424.se", print_hash_value);
    transparent_crc(p_810->g_424.sf, "p_810->g_424.sf", print_hash_value);
    transparent_crc(p_810->g_439, "p_810->g_439", print_hash_value);
    transparent_crc(p_810->g_443.x, "p_810->g_443.x", print_hash_value);
    transparent_crc(p_810->g_443.y, "p_810->g_443.y", print_hash_value);
    transparent_crc(p_810->g_443.z, "p_810->g_443.z", print_hash_value);
    transparent_crc(p_810->g_443.w, "p_810->g_443.w", print_hash_value);
    transparent_crc(p_810->g_447.x, "p_810->g_447.x", print_hash_value);
    transparent_crc(p_810->g_447.y, "p_810->g_447.y", print_hash_value);
    transparent_crc(p_810->g_447.z, "p_810->g_447.z", print_hash_value);
    transparent_crc(p_810->g_447.w, "p_810->g_447.w", print_hash_value);
    transparent_crc(p_810->g_458.x, "p_810->g_458.x", print_hash_value);
    transparent_crc(p_810->g_458.y, "p_810->g_458.y", print_hash_value);
    transparent_crc(p_810->g_478, "p_810->g_478", print_hash_value);
    transparent_crc(p_810->g_576.s0, "p_810->g_576.s0", print_hash_value);
    transparent_crc(p_810->g_576.s1, "p_810->g_576.s1", print_hash_value);
    transparent_crc(p_810->g_576.s2, "p_810->g_576.s2", print_hash_value);
    transparent_crc(p_810->g_576.s3, "p_810->g_576.s3", print_hash_value);
    transparent_crc(p_810->g_576.s4, "p_810->g_576.s4", print_hash_value);
    transparent_crc(p_810->g_576.s5, "p_810->g_576.s5", print_hash_value);
    transparent_crc(p_810->g_576.s6, "p_810->g_576.s6", print_hash_value);
    transparent_crc(p_810->g_576.s7, "p_810->g_576.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_810->g_581[i][j].f0, "p_810->g_581[i][j].f0", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f1, "p_810->g_581[i][j].f1", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f2, "p_810->g_581[i][j].f2", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f3, "p_810->g_581[i][j].f3", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f4, "p_810->g_581[i][j].f4", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f5, "p_810->g_581[i][j].f5", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f6, "p_810->g_581[i][j].f6", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f7, "p_810->g_581[i][j].f7", print_hash_value);
            transparent_crc(p_810->g_581[i][j].f8, "p_810->g_581[i][j].f8", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_810->g_582[i][j][k].f0, "p_810->g_582[i][j][k].f0", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f1, "p_810->g_582[i][j][k].f1", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f2, "p_810->g_582[i][j][k].f2", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f3, "p_810->g_582[i][j][k].f3", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f4, "p_810->g_582[i][j][k].f4", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f5, "p_810->g_582[i][j][k].f5", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f6, "p_810->g_582[i][j][k].f6", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f7, "p_810->g_582[i][j][k].f7", print_hash_value);
                transparent_crc(p_810->g_582[i][j][k].f8, "p_810->g_582[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_810->g_591.f0, "p_810->g_591.f0", print_hash_value);
    transparent_crc(p_810->g_591.f1, "p_810->g_591.f1", print_hash_value);
    transparent_crc(p_810->g_591.f2, "p_810->g_591.f2", print_hash_value);
    transparent_crc(p_810->g_591.f3, "p_810->g_591.f3", print_hash_value);
    transparent_crc(p_810->g_591.f4, "p_810->g_591.f4", print_hash_value);
    transparent_crc(p_810->g_591.f5, "p_810->g_591.f5", print_hash_value);
    transparent_crc(p_810->g_591.f6, "p_810->g_591.f6", print_hash_value);
    transparent_crc(p_810->g_591.f7, "p_810->g_591.f7", print_hash_value);
    transparent_crc(p_810->g_591.f8, "p_810->g_591.f8", print_hash_value);
    transparent_crc(p_810->g_596, "p_810->g_596", print_hash_value);
    transparent_crc(p_810->g_599.s0, "p_810->g_599.s0", print_hash_value);
    transparent_crc(p_810->g_599.s1, "p_810->g_599.s1", print_hash_value);
    transparent_crc(p_810->g_599.s2, "p_810->g_599.s2", print_hash_value);
    transparent_crc(p_810->g_599.s3, "p_810->g_599.s3", print_hash_value);
    transparent_crc(p_810->g_599.s4, "p_810->g_599.s4", print_hash_value);
    transparent_crc(p_810->g_599.s5, "p_810->g_599.s5", print_hash_value);
    transparent_crc(p_810->g_599.s6, "p_810->g_599.s6", print_hash_value);
    transparent_crc(p_810->g_599.s7, "p_810->g_599.s7", print_hash_value);
    transparent_crc(p_810->g_607, "p_810->g_607", print_hash_value);
    transparent_crc(p_810->g_620.x, "p_810->g_620.x", print_hash_value);
    transparent_crc(p_810->g_620.y, "p_810->g_620.y", print_hash_value);
    transparent_crc(p_810->g_620.z, "p_810->g_620.z", print_hash_value);
    transparent_crc(p_810->g_620.w, "p_810->g_620.w", print_hash_value);
    transparent_crc(p_810->g_621.s0, "p_810->g_621.s0", print_hash_value);
    transparent_crc(p_810->g_621.s1, "p_810->g_621.s1", print_hash_value);
    transparent_crc(p_810->g_621.s2, "p_810->g_621.s2", print_hash_value);
    transparent_crc(p_810->g_621.s3, "p_810->g_621.s3", print_hash_value);
    transparent_crc(p_810->g_621.s4, "p_810->g_621.s4", print_hash_value);
    transparent_crc(p_810->g_621.s5, "p_810->g_621.s5", print_hash_value);
    transparent_crc(p_810->g_621.s6, "p_810->g_621.s6", print_hash_value);
    transparent_crc(p_810->g_621.s7, "p_810->g_621.s7", print_hash_value);
    transparent_crc(p_810->g_671.x, "p_810->g_671.x", print_hash_value);
    transparent_crc(p_810->g_671.y, "p_810->g_671.y", print_hash_value);
    transparent_crc(p_810->g_671.z, "p_810->g_671.z", print_hash_value);
    transparent_crc(p_810->g_671.w, "p_810->g_671.w", print_hash_value);
    transparent_crc(p_810->g_682, "p_810->g_682", print_hash_value);
    transparent_crc(p_810->g_691.x, "p_810->g_691.x", print_hash_value);
    transparent_crc(p_810->g_691.y, "p_810->g_691.y", print_hash_value);
    transparent_crc(p_810->g_691.z, "p_810->g_691.z", print_hash_value);
    transparent_crc(p_810->g_691.w, "p_810->g_691.w", print_hash_value);
    transparent_crc(p_810->g_692.s0, "p_810->g_692.s0", print_hash_value);
    transparent_crc(p_810->g_692.s1, "p_810->g_692.s1", print_hash_value);
    transparent_crc(p_810->g_692.s2, "p_810->g_692.s2", print_hash_value);
    transparent_crc(p_810->g_692.s3, "p_810->g_692.s3", print_hash_value);
    transparent_crc(p_810->g_692.s4, "p_810->g_692.s4", print_hash_value);
    transparent_crc(p_810->g_692.s5, "p_810->g_692.s5", print_hash_value);
    transparent_crc(p_810->g_692.s6, "p_810->g_692.s6", print_hash_value);
    transparent_crc(p_810->g_692.s7, "p_810->g_692.s7", print_hash_value);
    transparent_crc(p_810->g_692.s8, "p_810->g_692.s8", print_hash_value);
    transparent_crc(p_810->g_692.s9, "p_810->g_692.s9", print_hash_value);
    transparent_crc(p_810->g_692.sa, "p_810->g_692.sa", print_hash_value);
    transparent_crc(p_810->g_692.sb, "p_810->g_692.sb", print_hash_value);
    transparent_crc(p_810->g_692.sc, "p_810->g_692.sc", print_hash_value);
    transparent_crc(p_810->g_692.sd, "p_810->g_692.sd", print_hash_value);
    transparent_crc(p_810->g_692.se, "p_810->g_692.se", print_hash_value);
    transparent_crc(p_810->g_692.sf, "p_810->g_692.sf", print_hash_value);
    transparent_crc(p_810->g_696.x, "p_810->g_696.x", print_hash_value);
    transparent_crc(p_810->g_696.y, "p_810->g_696.y", print_hash_value);
    transparent_crc(p_810->g_697.s0, "p_810->g_697.s0", print_hash_value);
    transparent_crc(p_810->g_697.s1, "p_810->g_697.s1", print_hash_value);
    transparent_crc(p_810->g_697.s2, "p_810->g_697.s2", print_hash_value);
    transparent_crc(p_810->g_697.s3, "p_810->g_697.s3", print_hash_value);
    transparent_crc(p_810->g_697.s4, "p_810->g_697.s4", print_hash_value);
    transparent_crc(p_810->g_697.s5, "p_810->g_697.s5", print_hash_value);
    transparent_crc(p_810->g_697.s6, "p_810->g_697.s6", print_hash_value);
    transparent_crc(p_810->g_697.s7, "p_810->g_697.s7", print_hash_value);
    transparent_crc(p_810->g_714.s0, "p_810->g_714.s0", print_hash_value);
    transparent_crc(p_810->g_714.s1, "p_810->g_714.s1", print_hash_value);
    transparent_crc(p_810->g_714.s2, "p_810->g_714.s2", print_hash_value);
    transparent_crc(p_810->g_714.s3, "p_810->g_714.s3", print_hash_value);
    transparent_crc(p_810->g_714.s4, "p_810->g_714.s4", print_hash_value);
    transparent_crc(p_810->g_714.s5, "p_810->g_714.s5", print_hash_value);
    transparent_crc(p_810->g_714.s6, "p_810->g_714.s6", print_hash_value);
    transparent_crc(p_810->g_714.s7, "p_810->g_714.s7", print_hash_value);
    transparent_crc(p_810->g_773, "p_810->g_773", print_hash_value);
    transparent_crc(p_810->g_776, "p_810->g_776", print_hash_value);
    transparent_crc(p_810->g_777, "p_810->g_777", print_hash_value);
    transparent_crc(p_810->g_781.f0, "p_810->g_781.f0", print_hash_value);
    transparent_crc(p_810->g_781.f1, "p_810->g_781.f1", print_hash_value);
    transparent_crc(p_810->g_781.f2, "p_810->g_781.f2", print_hash_value);
    transparent_crc(p_810->g_781.f3, "p_810->g_781.f3", print_hash_value);
    transparent_crc(p_810->g_781.f4, "p_810->g_781.f4", print_hash_value);
    transparent_crc(p_810->g_781.f5, "p_810->g_781.f5", print_hash_value);
    transparent_crc(p_810->g_781.f6, "p_810->g_781.f6", print_hash_value);
    transparent_crc(p_810->g_781.f7, "p_810->g_781.f7", print_hash_value);
    transparent_crc(p_810->g_781.f8, "p_810->g_781.f8", print_hash_value);
    transparent_crc(p_810->g_782.f0, "p_810->g_782.f0", print_hash_value);
    transparent_crc(p_810->g_782.f1, "p_810->g_782.f1", print_hash_value);
    transparent_crc(p_810->g_782.f2, "p_810->g_782.f2", print_hash_value);
    transparent_crc(p_810->g_782.f3, "p_810->g_782.f3", print_hash_value);
    transparent_crc(p_810->g_782.f4, "p_810->g_782.f4", print_hash_value);
    transparent_crc(p_810->g_782.f5, "p_810->g_782.f5", print_hash_value);
    transparent_crc(p_810->g_782.f6, "p_810->g_782.f6", print_hash_value);
    transparent_crc(p_810->g_782.f7, "p_810->g_782.f7", print_hash_value);
    transparent_crc(p_810->g_782.f8, "p_810->g_782.f8", print_hash_value);
    transparent_crc(p_810->g_805, "p_810->g_805", print_hash_value);
    transparent_crc(p_810->v_collective, "p_810->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 47; i++)
            transparent_crc(p_810->g_special_values[i + 47 * get_linear_group_id()], "p_810->g_special_values[i + 47 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 47; i++)
            transparent_crc(p_810->l_special_values[i], "p_810->l_special_values[i]", print_hash_value);
    transparent_crc(p_810->l_comm_values[get_linear_local_id()], "p_810->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_810->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_810->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
