// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 65,22,4 -l 1,11,1
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

__constant uint32_t permutations[10][11] = {
{1,7,10,5,9,8,3,2,4,6,0}, // permutation 0
{2,5,4,7,10,0,8,1,6,9,3}, // permutation 1
{6,0,7,9,5,10,2,3,1,4,8}, // permutation 2
{9,4,7,6,3,2,5,0,1,10,8}, // permutation 3
{9,0,10,8,2,6,4,5,7,1,3}, // permutation 4
{6,3,4,9,7,8,5,0,1,10,2}, // permutation 5
{7,9,0,6,2,3,10,1,5,8,4}, // permutation 6
{1,2,0,3,10,6,5,4,8,7,9}, // permutation 7
{8,6,7,0,4,2,3,10,9,1,5}, // permutation 8
{9,10,2,5,3,8,4,7,6,1,0} // permutation 9
};

// Seed: 1481415689

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   uint16_t  f1;
   int16_t  f2;
};

struct S1 {
   uint64_t  f0;
   int32_t  f1;
   uint8_t  f2;
   int64_t  f3;
   volatile uint32_t  f4;
   uint32_t  f5;
   int16_t  f6;
};

struct S2 {
   struct S0  f0;
   volatile int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   uint64_t  f4;
   uint32_t  f5;
   uint32_t  f6;
   volatile uint32_t  f7;
   int64_t  f8;
};

union U3 {
   int32_t  f0;
   int8_t  f1;
   volatile uint16_t  f2;
};

struct S4 {
    VECTOR(uint32_t, 2) g_18;
    volatile struct S2 g_23;
    struct S2 g_38;
    int32_t g_56;
    int32_t * volatile g_55;
    struct S1 g_57;
    uint8_t g_67[4];
    int8_t g_78;
    int64_t g_79;
    volatile uint16_t g_80;
    struct S0 g_91;
    int32_t *g_110[5][3][3];
    int32_t ** volatile g_109[10];
    volatile VECTOR(int64_t, 16) g_118;
    int32_t g_143;
    struct S2 *g_146[7][5];
    struct S2 **g_145;
    volatile VECTOR(int32_t, 2) g_150;
    volatile union U3 g_165[7];
    struct S0 g_182;
    int16_t *g_202[9][8][3];
    union U3 g_215;
    struct S1 g_216;
    VECTOR(uint64_t, 8) g_223;
    uint32_t g_256;
    uint32_t *g_261[9][7][4];
    uint32_t g_291[6][8][5];
    volatile VECTOR(int16_t, 4) g_302;
    volatile struct S1 g_345;
    volatile union U3 g_355[8][4];
    volatile VECTOR(int32_t, 16) g_610;
    uint16_t g_615;
    uint64_t g_616;
    uint32_t g_619;
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
uint64_t  func_1(struct S4 * p_626);
struct S0  func_2(int32_t  p_3, uint64_t  p_4, uint8_t  p_5, int8_t  p_6, struct S4 * p_626);
int8_t  func_10(int32_t  p_11, uint32_t  p_12, int32_t  p_13, uint32_t  p_14, uint32_t  p_15, struct S4 * p_626);
uint32_t  func_21(uint64_t  p_22, struct S4 * p_626);
struct S2 ** func_25(int32_t  p_26, struct S4 * p_626);
uint8_t  func_31(uint64_t  p_32, uint32_t  p_33, struct S2 * p_34, struct S2 ** p_35, struct S4 * p_626);
struct S2 * func_39(struct S2 * p_40, struct S4 * p_626);
int32_t * func_41(uint8_t  p_42, int8_t  p_43, int32_t  p_44, int16_t  p_45, struct S4 * p_626);
int8_t  func_47(int64_t  p_48, uint32_t  p_49, uint64_t  p_50, struct S4 * p_626);
struct S1  func_51(int32_t  p_52, int16_t  p_53, struct S4 * p_626);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_626->l_comm_values p_626->g_18 p_626->g_23 p_626->g_38.f1 p_626->g_38.f8 p_626->g_55 p_626->g_57 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_91 p_626->g_56 p_626->g_38.f6 p_626->g_118 p_626->g_78 p_626->g_38.f0.f1 p_626->g_143 p_626->g_145 p_626->g_150 p_626->g_38.f7 p_626->g_165 p_626->g_38.f5 p_626->g_182 p_626->g_202 p_626->g_215 p_626->g_223 p_626->g_38.f3 p_626->g_256 p_626->g_comm_values p_626->g_261 p_626->g_216.f4 p_626->g_215.f0 p_626->g_38.f0.f0 p_626->g_291 p_626->g_302 p_626->g_79 p_626->g_216.f6 p_626->g_215.f1 p_626->g_345 p_626->g_355 p_626->g_216.f0 p_626->g_610 p_626->g_615 p_626->g_616
 * writes: p_626->g_23 p_626->g_56 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_110 p_626->g_91.f2 p_626->g_143 p_626->g_91 p_626->g_145 p_626->g_78 p_626->g_57.f5 p_626->g_182 p_626->g_57.f6 p_626->g_38.f0.f1 p_626->g_216 p_626->g_146 p_626->g_57.f1 p_626->g_256 p_626->g_79 p_626->g_38.f6 p_626->g_57.f2 p_626->g_215.f1 p_626->g_38.f5 p_626->g_38.f0 p_626->g_619
 */
uint64_t  func_1(struct S4 * p_626)
{ /* block id: 4 */
    int16_t l_7 = 0x76EEL;
    int32_t *l_157[1][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint8_t l_158 = 0x3AL;
    int16_t l_159[8][7] = {{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L},{1L,1L,1L,0x7106L,0x1A22L,0x7106L,1L}};
    struct S0 *l_427 = &p_626->g_38.f0;
    int32_t l_599 = 7L;
    VECTOR(int32_t, 2) l_600 = (VECTOR(int32_t, 2))(0x3F126753L, 0x41745238L);
    uint8_t *l_602 = (void*)0;
    uint8_t **l_601 = &l_602;
    uint8_t **l_604[10] = {&l_602,(void*)0,&l_602,(void*)0,&l_602,&l_602,(void*)0,&l_602,(void*)0,&l_602};
    uint8_t ***l_603 = &l_604[0];
    int64_t *l_605 = &p_626->g_216.f3;
    VECTOR(uint32_t, 16) l_617 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x2B8E4A5BL), 0x2B8E4A5BL), 0x2B8E4A5BL, 0UL, 0x2B8E4A5BL, (VECTOR(uint32_t, 2))(0UL, 0x2B8E4A5BL), (VECTOR(uint32_t, 2))(0UL, 0x2B8E4A5BL), 0UL, 0x2B8E4A5BL, 0UL, 0x2B8E4A5BL);
    uint32_t *l_618[1];
    int16_t l_620[9][8][1] = {{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}},{{6L},{6L},{6L},{6L},{6L},{6L},{6L},{6L}}};
    int32_t l_621[1];
    int64_t l_622[5][4][8] = {{{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)}},{{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)}},{{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)}},{{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)}},{{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)},{(-9L),0x660BF70579CB8CDBL,1L,(-2L),0x178D39E035AED73DL,0x30F00193CF89F846L,(-1L),(-1L)}}};
    int32_t l_623 = 0x71BD1B02L;
    int32_t l_624 = (-1L);
    int64_t l_625 = 3L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_618[i] = &p_626->g_619;
    for (i = 0; i < 1; i++)
        l_621[i] = 0x35B29890L;
    (*l_427) = func_2(l_7, ((safe_mul_func_int8_t_s_s(func_10(p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 11))], (safe_mod_func_int32_t_s_s(l_7, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_626->g_18.xyyx)).lo)).yxxxyyxyxyyxxyxy)).s6)), (l_158 = (safe_add_func_int64_t_s_s((((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))((func_21(p_626->l_comm_values[(safe_mod_func_uint32_t_u_u(p_626->tid, 11))], p_626) && (safe_add_func_uint8_t_u_u(p_626->g_80, (((safe_sub_func_uint8_t_u_u(((p_626->g_38.f8 >= (l_7 || 0x0763847764129267L)) && l_7), 0x7BL)) | l_7) & 0x470B8458984F7DABL)))), 1L, 0x32FBB45D56E028ADL, 5L, 0L, p_626->g_38.f7, ((VECTOR(int64_t, 4))(0x408352772FB52A32L)), l_7, ((VECTOR(int64_t, 4))((-1L))), 0x70BDA24A5CBDD7E7L)).s90, ((VECTOR(int64_t, 2))(0x59E374C3C970C754L))))).lo & 0L), l_7))), l_159[6][0], p_626->g_57.f0, p_626), p_626->g_38.f8)) , p_626->g_216.f4), p_626->g_57.f0, p_626->g_38.f8, p_626);
    for (p_626->g_38.f6 = 0; (p_626->g_38.f6 >= 35); p_626->g_38.f6 = safe_add_func_uint32_t_u_u(p_626->g_38.f6, 5))
    { /* block id: 209 */
        int32_t l_598 = 0L;
        if ((atomic_inc(&p_626->g_atomic_input[26 * get_linear_group_id() + 14]) == 3))
        { /* block id: 211 */
            int32_t l_541 = 6L;
            union U3 l_573 = {0x201A94C9L};/* VOLATILE GLOBAL l_573 */
            union U3 *l_572[2][8][4] = {{{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573}},{{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573},{&l_573,&l_573,&l_573,&l_573}}};
            union U3 *l_574 = &l_573;
            union U3 *l_575 = (void*)0;
            VECTOR(int32_t, 4) l_576 = (VECTOR(int32_t, 4))(0x7B83B7FFL, (VECTOR(int32_t, 2))(0x7B83B7FFL, 0x08DE5878L), 0x08DE5878L);
            uint32_t l_577 = 0x2E2FAAC0L;
            uint32_t l_578 = 4294967295UL;
            struct S0 l_579 = {0xDD705EF0L,65535UL,0x392FL};/* VOLATILE GLOBAL l_579 */
            uint16_t l_580 = 9UL;
            uint32_t l_581[6];
            uint64_t l_582 = 0x546C2FFE972CF976L;
            int32_t l_583 = 0x78A962AFL;
            uint64_t l_584 = 7UL;
            VECTOR(int32_t, 16) l_585 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x0B9E7241L), 0x0B9E7241L), 0x0B9E7241L, 3L, 0x0B9E7241L, (VECTOR(int32_t, 2))(3L, 0x0B9E7241L), (VECTOR(int32_t, 2))(3L, 0x0B9E7241L), 3L, 0x0B9E7241L, 3L, 0x0B9E7241L);
            VECTOR(int32_t, 2) l_586 = (VECTOR(int32_t, 2))(0x08B904AFL, (-3L));
            uint16_t l_587 = 9UL;
            VECTOR(int32_t, 4) l_588 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x7C045433L), 0x7C045433L);
            VECTOR(int32_t, 4) l_589 = (VECTOR(int32_t, 4))(0x64A2DB49L, (VECTOR(int32_t, 2))(0x64A2DB49L, 5L), 5L);
            VECTOR(int32_t, 16) l_590 = (VECTOR(int32_t, 16))(0x4A5A9E14L, (VECTOR(int32_t, 4))(0x4A5A9E14L, (VECTOR(int32_t, 2))(0x4A5A9E14L, 0L), 0L), 0L, 0x4A5A9E14L, 0L, (VECTOR(int32_t, 2))(0x4A5A9E14L, 0L), (VECTOR(int32_t, 2))(0x4A5A9E14L, 0L), 0x4A5A9E14L, 0L, 0x4A5A9E14L, 0L);
            uint64_t l_591 = 1UL;
            VECTOR(int32_t, 2) l_592 = (VECTOR(int32_t, 2))(6L, 1L);
            uint32_t l_593[6];
            int16_t l_594 = 0x7491L;
            int16_t l_595 = 0L;
            int32_t l_596 = (-5L);
            VECTOR(uint32_t, 4) l_597 = (VECTOR(uint32_t, 4))(0x1AF364D4L, (VECTOR(uint32_t, 2))(0x1AF364D4L, 0UL), 0UL);
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_581[i] = 0xE5980211L;
            for (i = 0; i < 6; i++)
                l_593[i] = 0xCC45B0CCL;
            if (((VECTOR(int32_t, 2))(5L, 0x40AE154FL)).hi)
            { /* block id: 212 */
                VECTOR(int32_t, 4) l_430 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x12111935L), 0x12111935L);
                int32_t *l_536 = (void*)0;
                int32_t *l_537 = (void*)0;
                int32_t *l_538 = (void*)0;
                int i;
                if (((VECTOR(int32_t, 8))(l_430.wwzwxxxz)).s1)
                { /* block id: 213 */
                    int8_t l_431[9][10][2] = {{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}},{{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L},{1L,0x23L}}};
                    int32_t l_432 = (-6L);
                    int64_t l_433 = 0x7AEF369DE9D62B04L;
                    uint32_t l_434 = 0x9A3644D8L;
                    struct S2 l_437 = {{0xC68F01BCL,0x5CDEL,0L},0x16E374C6L,18446744073709551609UL,0x0AD8FD10L,0xF5FD3CB8AA682B17L,0x42482D4FL,0x26D33396L,0x4230E89EL,0x3BED47AD74EE14C0L};/* VOLATILE GLOBAL l_437 */
                    int i, j, k;
                    l_434++;
                    l_437 = l_437;
                }
                else
                { /* block id: 216 */
                    int64_t l_438[10];
                    uint16_t l_439 = 1UL;
                    uint32_t l_440 = 0UL;
                    VECTOR(int32_t, 2) l_441 = (VECTOR(int32_t, 2))(0x7BBF130AL, 0x5588ED53L);
                    uint16_t l_442 = 0x2854L;
                    uint64_t l_443 = 0x0535F2F287EEED84L;
                    struct S1 l_444 = {1UL,0x726B662FL,254UL,0L,0xC32DAE28L,0x9C7E137FL,0x4782L};/* VOLATILE GLOBAL l_444 */
                    uint32_t l_445[8] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                    VECTOR(int16_t, 4) l_446 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x5D98L), 0x5D98L);
                    VECTOR(int16_t, 16) l_447 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                    VECTOR(int16_t, 2) l_448 = (VECTOR(int16_t, 2))(0x5C1CL, 0x7F39L);
                    int32_t l_449 = 0x3BC4D5B2L;
                    uint8_t l_450[7][9] = {{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL},{0UL,0xE1L,0xE1L,0UL,1UL,0x98L,0x98L,1UL,0UL}};
                    VECTOR(int32_t, 2) l_451 = (VECTOR(int32_t, 2))(0x681A08C4L, 1L);
                    uint32_t l_480 = 0x916086E1L;
                    int i, j;
                    for (i = 0; i < 10; i++)
                        l_438[i] = (-6L);
                    if (((VECTOR(int32_t, 16))(l_438[3], ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1D77F340L, 0x03FCE295L)), l_439, l_440, 0x6E56372BL, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x32C95722L)))).xyxyyxyxyyyxyyyy)).s82, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))).xyxx)))).xwzxwwxxyxwyyxyz)).s793a)).ywxwwzyzyzywyzwx, ((VECTOR(int32_t, 8))((l_430.x &= ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x4F95A40AL, ((VECTOR(int32_t, 2))(1L, 0x3E8D03F3L)), 0x7136E3B2L)).yxyyxwxx)).s6771071663556161, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_441.yxyy)).wxzxwyzw)).s6445157341141102, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0ED97950L, 0x064CBC1BL)), (-3L), (-1L))).zxwzzzzzyxzwxxzy))).sc), 0L, 0x2185F3B5L, l_442, 0x09252200L, (-1L), 8L, 0x0DD42F05L)).s6743300034242175))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-6L), l_443, (l_444 , (l_445[1] , (((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_446.yzzxxzxx)))).s32)), ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(8L, 4L)).xyyxxyyxxxxyyxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(l_447.scf750a4adf7368ad)).se1c9, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_448.yxxyyyxyyyxxxxxy)).odd)).hi))), 0L, ((VECTOR(int16_t, 2))(1L, 0x6DA7L)), 0x1064L)).s1532646436110223))).s2f))).hi , (-2L)))), l_449, 0x6C146760L, ((VECTOR(int32_t, 8))((-10L))), ((VECTOR(int32_t, 2))(0x708CF85DL)), 1L)))).sbd85)).wxyyxzxx))).s42))))), 0L)).s57, ((VECTOR(int32_t, 2))((-10L)))))), 6L)).even, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(int32_t, 2))(0x04E0536DL)), l_450[5][7], ((VECTOR(int32_t, 4))(0x1BA5810AL)), 0x1C1C054DL, l_451.y, 1L, 0x15CE1AE1L, 0x48ABC386L, 0x2805BD08L)).s8)
                    { /* block id: 218 */
                        int32_t l_452 = 0x7278C371L;
                        struct S0 l_453 = {0UL,0x3C56L,0x2A9EL};/* VOLATILE GLOBAL l_453 */
                        struct S1 l_454 = {3UL,0L,0x71L,-2L,0x6B904574L,0xB2C99569L,8L};/* VOLATILE GLOBAL l_454 */
                        l_444 = (((l_452 , (-1L)) , l_453) , l_454);
                    }
                    else
                    { /* block id: 220 */
                        VECTOR(int32_t, 16) l_455 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int32_t, 2))((-3L), 1L), (VECTOR(int32_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
                        int8_t l_456 = 0x57L;
                        VECTOR(int8_t, 8) l_457 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x1FL), 0x1FL), 0x1FL, 1L, 0x1FL);
                        uint32_t l_458 = 4294967295UL;
                        int32_t l_459 = 0x68E5CD5AL;
                        uint32_t l_460 = 0x47AAE7E7L;
                        uint64_t l_461 = 18446744073709551607UL;
                        uint16_t l_462 = 0x92DFL;
                        int32_t *l_463 = (void*)0;
                        int32_t *l_464 = (void*)0;
                        int32_t *l_465 = (void*)0;
                        int i;
                        l_441.y = ((VECTOR(int32_t, 4))(l_455.s593c)).y;
                        l_430.x ^= l_456;
                        l_465 = ((l_462 = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_457.s46)).yxyxxxxx)))).s47)), (l_459 = l_458), 0x66L, l_460, l_461, 4L, 3L)).even)).y) , (l_464 = l_463));
                    }
                    for (l_442 = (-25); (l_442 == 2); l_442++)
                    { /* block id: 230 */
                        struct S1 l_468[7] = {{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L},{0x0153AEFE5A5B7230L,0x6BC149DCL,248UL,-1L,1UL,0xA4EEBC3CL,0x0A34L}};
                        int32_t l_469 = 1L;
                        VECTOR(int32_t, 16) l_470 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0A3018F6L), 0x0A3018F6L), 0x0A3018F6L, 0L, 0x0A3018F6L, (VECTOR(int32_t, 2))(0L, 0x0A3018F6L), (VECTOR(int32_t, 2))(0L, 0x0A3018F6L), 0L, 0x0A3018F6L, 0L, 0x0A3018F6L);
                        VECTOR(int32_t, 8) l_471 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5036522CL), 0x5036522CL), 0x5036522CL, 8L, 0x5036522CL);
                        VECTOR(int8_t, 8) l_472 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L));
                        int i;
                        l_444 = l_468[1];
                        l_441.x = (l_430.x = (l_469 , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_470.s575d5efc377aae35)).s48, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(l_471.s0630)).wxyzwwwy))).hi)).wzyyzyzz)))).s30))).xxxyyxyx)).s50, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x64774647L, 0x687BD38CL)).xyxxxyyyyyyyyyxy)).s34))), 2L, 0x76D837F4L)).w));
                        l_430.z &= l_472.s1;
                    }
                    for (l_451.y = 0; (l_451.y <= 14); l_451.y = safe_add_func_int8_t_s_s(l_451.y, 4))
                    { /* block id: 238 */
                        struct S1 l_476 = {0xC590E28F619FFBBEL,5L,0x90L,0x7A6C33BEB3F396E5L,0x328DF5CAL,6UL,-1L};/* VOLATILE GLOBAL l_476 */
                        struct S1 *l_475 = &l_476;
                        uint32_t l_477 = 0xC05BFC39L;
                        l_475 = (void*)0;
                        --l_477;
                    }
                    l_430.y = l_480;
                }
                for (l_430.x = 20; (l_430.x != 26); l_430.x++)
                { /* block id: 246 */
                    int32_t l_483 = 7L;
                    int32_t l_530 = 0x298D74EBL;
                    uint32_t l_531 = 0xA69D6CD4L;
                    int32_t *l_534 = &l_530;
                    int32_t *l_535 = (void*)0;
                    for (l_483 = 12; (l_483 < 10); l_483--)
                    { /* block id: 249 */
                        int64_t l_486 = 1L;
                        int64_t l_487 = 0L;
                        int32_t l_489 = 0x0F64CF73L;
                        int32_t *l_488 = &l_489;
                        int32_t *l_490 = (void*)0;
                        int32_t l_491[10];
                        uint8_t l_492 = 0UL;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_491[i] = 0x593BF952L;
                        l_486 = (-1L);
                        l_487 = 0x5EB67E5CL;
                        l_490 = l_488;
                        l_492 = (l_491[8] = 0x534E30B5L);
                    }
                    for (l_483 = 0; (l_483 == (-26)); l_483 = safe_sub_func_int16_t_s_s(l_483, 5))
                    { /* block id: 258 */
                        int64_t l_495 = 1L;
                        VECTOR(int32_t, 2) l_496 = (VECTOR(int32_t, 2))(1L, (-7L));
                        int8_t l_497[2][1][1];
                        VECTOR(int16_t, 16) l_498 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x38A8L), 0x38A8L), 0x38A8L, 0L, 0x38A8L, (VECTOR(int16_t, 2))(0L, 0x38A8L), (VECTOR(int16_t, 2))(0L, 0x38A8L), 0L, 0x38A8L, 0L, 0x38A8L);
                        VECTOR(uint16_t, 8) l_499 = (VECTOR(uint16_t, 8))(0x2092L, (VECTOR(uint16_t, 4))(0x2092L, (VECTOR(uint16_t, 2))(0x2092L, 0UL), 0UL), 0UL, 0x2092L, 0UL);
                        int32_t l_500 = 0x715A7A40L;
                        uint64_t l_501 = 0xF53A995AB087DCBCL;
                        VECTOR(uint16_t, 16) l_504 = (VECTOR(uint16_t, 16))(0x1795L, (VECTOR(uint16_t, 4))(0x1795L, (VECTOR(uint16_t, 2))(0x1795L, 1UL), 1UL), 1UL, 0x1795L, 1UL, (VECTOR(uint16_t, 2))(0x1795L, 1UL), (VECTOR(uint16_t, 2))(0x1795L, 1UL), 0x1795L, 1UL, 0x1795L, 1UL);
                        int32_t l_505 = 0x119256BBL;
                        VECTOR(uint16_t, 16) l_506 = (VECTOR(uint16_t, 16))(0xF133L, (VECTOR(uint16_t, 4))(0xF133L, (VECTOR(uint16_t, 2))(0xF133L, 65530UL), 65530UL), 65530UL, 0xF133L, 65530UL, (VECTOR(uint16_t, 2))(0xF133L, 65530UL), (VECTOR(uint16_t, 2))(0xF133L, 65530UL), 0xF133L, 65530UL, 0xF133L, 65530UL);
                        VECTOR(uint16_t, 2) l_507 = (VECTOR(uint16_t, 2))(0xC7F9L, 0xFF52L);
                        VECTOR(uint16_t, 8) l_508 = (VECTOR(uint16_t, 8))(0x2D15L, (VECTOR(uint16_t, 4))(0x2D15L, (VECTOR(uint16_t, 2))(0x2D15L, 1UL), 1UL), 1UL, 0x2D15L, 1UL);
                        VECTOR(uint16_t, 2) l_509 = (VECTOR(uint16_t, 2))(0xCAB8L, 7UL);
                        VECTOR(uint16_t, 2) l_510 = (VECTOR(uint16_t, 2))(0x2CA1L, 0x8EA7L);
                        VECTOR(uint16_t, 2) l_511 = (VECTOR(uint16_t, 2))(65529UL, 65533UL);
                        VECTOR(uint16_t, 4) l_512 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xB997L), 0xB997L);
                        VECTOR(uint16_t, 8) l_513 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD16BL), 0xD16BL), 0xD16BL, 1UL, 0xD16BL);
                        VECTOR(uint16_t, 16) l_514 = (VECTOR(uint16_t, 16))(0x6901L, (VECTOR(uint16_t, 4))(0x6901L, (VECTOR(uint16_t, 2))(0x6901L, 65532UL), 65532UL), 65532UL, 0x6901L, 65532UL, (VECTOR(uint16_t, 2))(0x6901L, 65532UL), (VECTOR(uint16_t, 2))(0x6901L, 65532UL), 0x6901L, 65532UL, 0x6901L, 65532UL);
                        VECTOR(uint64_t, 2) l_515 = (VECTOR(uint64_t, 2))(0x7D7FD7A956B6C8DCL, 0x907EC140FE8546CAL);
                        int32_t l_516 = (-10L);
                        VECTOR(uint16_t, 16) l_517 = (VECTOR(uint16_t, 16))(0xA59AL, (VECTOR(uint16_t, 4))(0xA59AL, (VECTOR(uint16_t, 2))(0xA59AL, 9UL), 9UL), 9UL, 0xA59AL, 9UL, (VECTOR(uint16_t, 2))(0xA59AL, 9UL), (VECTOR(uint16_t, 2))(0xA59AL, 9UL), 0xA59AL, 9UL, 0xA59AL, 9UL);
                        VECTOR(uint16_t, 16) l_518 = (VECTOR(uint16_t, 16))(0x1A6DL, (VECTOR(uint16_t, 4))(0x1A6DL, (VECTOR(uint16_t, 2))(0x1A6DL, 65535UL), 65535UL), 65535UL, 0x1A6DL, 65535UL, (VECTOR(uint16_t, 2))(0x1A6DL, 65535UL), (VECTOR(uint16_t, 2))(0x1A6DL, 65535UL), 0x1A6DL, 65535UL, 0x1A6DL, 65535UL);
                        VECTOR(uint16_t, 8) l_519 = (VECTOR(uint16_t, 8))(0xABBDL, (VECTOR(uint16_t, 4))(0xABBDL, (VECTOR(uint16_t, 2))(0xABBDL, 0xE34FL), 0xE34FL), 0xE34FL, 0xABBDL, 0xE34FL);
                        VECTOR(uint16_t, 4) l_520 = (VECTOR(uint16_t, 4))(0x4069L, (VECTOR(uint16_t, 2))(0x4069L, 0x1428L), 0x1428L);
                        uint32_t l_521 = 0xA7786779L;
                        int64_t l_522 = (-1L);
                        uint8_t l_523 = 2UL;
                        VECTOR(int16_t, 2) l_524 = (VECTOR(int16_t, 2))(0x647DL, 7L);
                        int32_t l_525 = 2L;
                        int64_t l_526 = (-1L);
                        uint64_t l_527 = 1UL;
                        uint8_t l_528 = 254UL;
                        int8_t l_529 = 0x37L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_497[i][j][k] = 0x6DL;
                            }
                        }
                        l_497[1][0][0] = (l_496.y = l_495);
                        l_529 &= (((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(6L, 1L)).xxyx, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(l_498.s115647e1)).s4166570674044763, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(1UL, 0x558DL, ((VECTOR(uint16_t, 2))(65533UL, 0x23D9L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 65535UL)).yyyx)))).s4424544754136523)).s12)))).yyyy)).zzxyzwzz, ((VECTOR(uint16_t, 16))(l_499.s6532731552724422)).lo, ((VECTOR(uint16_t, 8))(0xDCACL, FAKE_DIVERGE(p_626->local_1_offset, get_local_id(1), 10), ((l_501--) , 0x8351L), ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x142BL, 0xDB77L)), 0xE49FL, 65535UL, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_504.s079a17c1)), l_505, 65535UL, 0UL, 3UL, ((VECTOR(uint16_t, 4))(l_506.s3f9e)))).s55, ((VECTOR(uint16_t, 4))(l_507.yxxx)).even, ((VECTOR(uint16_t, 4))(l_508.s1401)).lo))).yyyy, ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x6765L, 0x2C42L)).yxxxxxyy)).s55)), 4UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(l_509.yx)).xxyxyxyy, ((VECTOR(uint16_t, 2))(l_510.yx)).xyxyxyxy))).s24))).yyxxyyxxxyxyxyyx)).sb537)))), ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(l_511.xxxxyyxyyxxxyxxx)).sbf, ((VECTOR(uint16_t, 8))(0xD9A8L, ((VECTOR(uint16_t, 2))(65531UL, 0xC869L)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0xAE3BL, ((VECTOR(uint16_t, 2))(l_512.yy)), 0x437CL)).hi)), ((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(l_513.s60)), 0x6656L)))).yxzywxzyxzxyyzyx, ((VECTOR(uint16_t, 4))(l_514.s9889)).xwzzwyxwxyzxxwyw))), ((VECTOR(uint16_t, 4))((((VECTOR(uint64_t, 8))(0xAC9A27E171A35BF7L, ((VECTOR(uint64_t, 4))(l_515.xyyy)), ((VECTOR(uint64_t, 2))(0x858231E1530D80E1L, 18446744073709551613UL)), 0x086EFD467F88E33CL)).s0 , l_516), 0x3064L, 65535UL, 0x99C6L)).zzwzyxzwxzxyxxxy))).s6e))))), 0xE382L, 9UL, 0x9E9AL)).s13))).yyxyxyxy))), ((VECTOR(uint16_t, 2))(0UL, 65535UL)).xyxyyxxy))).even))))), ((VECTOR(uint16_t, 8))(l_517.sf090da66)))).hi, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_518.s7ca5)).yxzyzzzw)))).s6153010257763147, ((VECTOR(uint16_t, 16))(l_519.s2074650257415114))))).odd, ((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x7B2FL, 1UL)))).yxxxyxxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_520.xzwy)), 0x2F9BL, 0x10FBL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xB4CDL, 0x789AL)).xyxx)), ((VECTOR(uint16_t, 4))(0xCB7AL, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))((l_522 |= l_521), 0x7511L, (l_523 , 0xB332L), 1UL, 0x556FL, l_524.y, 65535UL, 0xA369L)), (uint16_t)(l_525 , l_526)))), (uint16_t)l_527))), ((VECTOR(uint16_t, 8))(0x5722L))))).s5, 1UL, 0xB61CL)), 0UL, 1UL)).hi))).odd, ((VECTOR(uint16_t, 4))(0x0825L))))).wxwyyyyw))).odd)), ((VECTOR(uint16_t, 4))(3UL))))), 65526UL))))).lo, ((VECTOR(uint16_t, 4))(0x3233L))))).ywwxwxxzzxyzxxxy))).s612e, ((VECTOR(int32_t, 4))(1L))))).x , l_528);
                    }
                    ++l_531;
                    l_535 = l_534;
                }
                l_538 = (l_537 = l_536);
            }
            else
            { /* block id: 270 */
                int32_t l_539 = 0x56F3FCA9L;
                int16_t l_540 = 0x1687L;
                l_540 = (l_539 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x3AEB0204L)).xxyxyxxxxxxyyxyy)).sf947)).w);
            }
            for (l_541 = 25; (l_541 > (-26)); l_541 = safe_sub_func_int16_t_s_s(l_541, 8))
            { /* block id: 276 */
                struct S0 l_545 = {4294967295UL,1UL,0L};/* VOLATILE GLOBAL l_545 */
                struct S0 *l_544[8] = {(void*)0,&l_545,(void*)0,(void*)0,&l_545,(void*)0,(void*)0,&l_545};
                uint32_t l_546 = 9UL;
                uint32_t l_570 = 0x8EFE86E6L;
                int64_t l_571 = (-1L);
                int i;
                l_544[0] = (void*)0;
                l_546 = 0x7EAE561AL;
                for (l_545.f2 = 0; (l_545.f2 == (-23)); l_545.f2--)
                { /* block id: 281 */
                    VECTOR(int32_t, 8) l_549 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                    VECTOR(int32_t, 2) l_550 = (VECTOR(int32_t, 2))(0L, 9L);
                    int16_t l_551 = 0L;
                    uint32_t l_552 = 0x7AB8E049L;
                    uint32_t l_553 = 1UL;
                    VECTOR(int16_t, 4) l_554 = (VECTOR(int16_t, 4))(0x5E2FL, (VECTOR(int16_t, 2))(0x5E2FL, 0x6732L), 0x6732L);
                    VECTOR(int32_t, 4) l_555 = (VECTOR(int32_t, 4))(0x615ACDE5L, (VECTOR(int32_t, 2))(0x615ACDE5L, 0x7FFB8DEBL), 0x7FFB8DEBL);
                    uint16_t l_556 = 2UL;
                    VECTOR(int32_t, 4) l_557 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                    uint16_t l_558 = 0x43E0L;
                    int32_t l_559 = 0x7C7257DCL;
                    int i;
                    l_551 |= ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(l_549.s41756102)).s77, ((VECTOR(int32_t, 8))(l_550.yxyyyyyy)).s56))).hi;
                    if ((l_559 |= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))((l_554.x = (l_553 = (l_552 , 0x79943964L))), 0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x56F453E8L, 1L)))), (-7L), ((VECTOR(int32_t, 2))(l_555.yx)).lo, 1L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_556, 0L, 0x044D0441L, 0L)).even, ((VECTOR(int32_t, 2))(0x40DFD148L, (-2L)))))), 0L)), ((VECTOR(int32_t, 2))(9L, 0L)), 0x6BB72778L, 4L, 0x103D7A4AL, 0x5CD06F54L)).sfec5, ((VECTOR(int32_t, 4))(l_557.zyyx))))).wzwxzzyyzxxxwwyw, ((VECTOR(int32_t, 8))(1L, (-3L), 0x104B542BL, (-1L), (l_558 = 0x2CD29448L), (-1L), (-1L), 0x53D350C2L)).s1152255130370411))).s0))
                    { /* block id: 287 */
                        uint32_t l_560 = 4294967292UL;
                        int32_t l_563 = (-1L);
                        int32_t l_564 = 7L;
                        uint64_t l_565 = 0UL;
                        l_550.y = (-1L);
                        ++l_560;
                        ++l_565;
                    }
                    else
                    { /* block id: 291 */
                        int8_t l_568 = 0x43L;
                        uint32_t l_569 = 4294967289UL;
                        l_557.z |= (l_555.y &= l_568);
                        l_550.x |= l_569;
                    }
                }
                l_571 |= l_570;
            }
            l_575 = (l_574 = l_572[0][2][2]);
            l_541 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_576.xw)), (-1L), l_577, (-1L), l_578, 0L, (l_583 = (l_579 , (l_580 , (l_582 = l_581[5])))), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4B94A296L, (-1L))), (l_584 = (GROUP_DIVERGE(2, 1) , 0x1D6D6C80L)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(0x4B663AD3L, ((VECTOR(int32_t, 2))(l_585.s10)), (-1L))).zwywyzxxywwywzxw, ((VECTOR(int32_t, 8))(l_586.xxyxyyyx)).s4260061664354664, ((VECTOR(int32_t, 4))((l_587 = ((VECTOR(int32_t, 2))(1L, (-2L))).even), 1L, (-3L), 0L)).yxwyxxyzyyyxyzwz))).s7fc7, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_588.zy)).xxxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_589.wwxy)).odd, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_590.s1a)), ((VECTOR(int32_t, 2))((-1L), 0x257F9A89L))))).yyxxyxxy, (int32_t)l_591))).s6003666123761433, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_592.xyyxyxyy)).lo, ((VECTOR(int32_t, 16))(0x6C408E21L, 1L, l_593[2], l_594, ((VECTOR(int32_t, 4))(9L)), ((VECTOR(int32_t, 4))((-1L))), l_595, l_596, 0L, 0L)).s008f))).yxwyywyzxwxwzyyw))).odd, ((VECTOR(int32_t, 8))(0x0AE94197L))))).s7140745663424563, ((VECTOR(int32_t, 16))(8L))))).lo, ((VECTOR(int32_t, 8))(0x1CFA3204L))))).s41))), (-1L), 0x01BC74F7L)))))))).yxwxzyxy)).s0774767360447170)).sf44d))).y, ((VECTOR(int32_t, 4))(2L)), ((VECTOR(int32_t, 4))(1L)), l_597.x, 0L, (-2L), 0x46385932L)))).hi, ((VECTOR(int32_t, 8))((-5L))), ((VECTOR(int32_t, 8))(0x57570568L))))))).seee6)).y;
            unsigned int result = 0;
            result += l_541;
            result += l_573.f0;
            result += l_573.f1;
            result += l_573.f2;
            result += l_576.w;
            result += l_576.z;
            result += l_576.y;
            result += l_576.x;
            result += l_577;
            result += l_578;
            result += l_579.f0;
            result += l_579.f1;
            result += l_579.f2;
            result += l_580;
            int l_581_i0;
            for (l_581_i0 = 0; l_581_i0 < 6; l_581_i0++) {
                result += l_581[l_581_i0];
            }
            result += l_582;
            result += l_583;
            result += l_584;
            result += l_585.sf;
            result += l_585.se;
            result += l_585.sd;
            result += l_585.sc;
            result += l_585.sb;
            result += l_585.sa;
            result += l_585.s9;
            result += l_585.s8;
            result += l_585.s7;
            result += l_585.s6;
            result += l_585.s5;
            result += l_585.s4;
            result += l_585.s3;
            result += l_585.s2;
            result += l_585.s1;
            result += l_585.s0;
            result += l_586.y;
            result += l_586.x;
            result += l_587;
            result += l_588.w;
            result += l_588.z;
            result += l_588.y;
            result += l_588.x;
            result += l_589.w;
            result += l_589.z;
            result += l_589.y;
            result += l_589.x;
            result += l_590.sf;
            result += l_590.se;
            result += l_590.sd;
            result += l_590.sc;
            result += l_590.sb;
            result += l_590.sa;
            result += l_590.s9;
            result += l_590.s8;
            result += l_590.s7;
            result += l_590.s6;
            result += l_590.s5;
            result += l_590.s4;
            result += l_590.s3;
            result += l_590.s2;
            result += l_590.s1;
            result += l_590.s0;
            result += l_591;
            result += l_592.y;
            result += l_592.x;
            int l_593_i0;
            for (l_593_i0 = 0; l_593_i0 < 6; l_593_i0++) {
                result += l_593[l_593_i0];
            }
            result += l_594;
            result += l_595;
            result += l_596;
            result += l_597.w;
            result += l_597.z;
            result += l_597.y;
            result += l_597.x;
            atomic_add(&p_626->g_special_values[26 * get_linear_group_id() + 14], result);
        }
        else
        { /* block id: 306 */
            (1 + 1);
        }
        if (l_598)
            break;
    }
    (*p_626->g_55) = (l_599 , ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_600.yxxyyxyx)).s0740750214663117)).hi, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((l_601 == ((*l_603) = &l_602)) & (((*l_605) = 0L) | (safe_mul_func_int8_t_s_s(7L, ((safe_div_func_int8_t_s_s((((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(0x1A0C54E5L, ((VECTOR(int32_t, 2))(p_626->g_610.sf8)), ((VECTOR(int32_t, 2))((-1L), 0x19D591D5L)).hi, ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((func_51(((p_626->g_619 = ((((*p_626->g_55) = p_626->g_615) != (l_617.s6 = p_626->g_616)) <= (l_157[0][1][3] != l_157[0][2][0]))) , 0x14FE0CA7L), l_620[5][1][0], p_626) , l_621[0]), p_626->g_291[2][4][0])), 8UL)) == l_622[4][1][1]), 0x3B6FD6A8L, (-1L), (*p_626->g_55), l_623, 0x14B5BFBDL, 0x2A449A37L, 0x6E3E31DBL, 9L, 0x3E0F53E9L, 0x1D511141L, 0x025F73B5L)).sb9, ((VECTOR(int32_t, 2))(0L))))).xxxy, ((VECTOR(int32_t, 4))(0L))))).z | l_624), p_626->g_616)) & p_626->g_78))))), 0x5BA693D6L, 0x7B62233CL, 0x5FC6D8D8L)).xyxzyyww)), ((VECTOR(int32_t, 8))((-1L)))))), (int32_t)(*p_626->g_55), (int32_t)(*p_626->g_55)))), ((VECTOR(int32_t, 8))(0L))))).s5);
    return l_625;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_215.f1 p_626->g_345 p_626->g_56 p_626->g_355 p_626->g_67 p_626->g_143 p_626->g_216.f0 p_626->g_182.f1 p_626->g_182
 * writes: p_626->g_215.f1 p_626->g_38.f5 p_626->g_182.f1
 */
struct S0  func_2(int32_t  p_3, uint64_t  p_4, uint8_t  p_5, int8_t  p_6, struct S4 * p_626)
{ /* block id: 131 */
    int32_t *l_327 = &p_626->g_56;
    int32_t *l_328 = &p_626->g_143;
    int32_t *l_329 = &p_626->g_56;
    int32_t *l_330[3];
    uint8_t l_331 = 247UL;
    int8_t l_354[2][2][2] = {{{0x5FL,(-4L)},{0x5FL,(-4L)}},{{0x5FL,(-4L)},{0x5FL,(-4L)}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_330[i] = (void*)0;
    --l_331;
    for (p_3 = (-8); (p_3 == (-18)); p_3--)
    { /* block id: 135 */
        int32_t l_341 = 0x277E8841L;
        VECTOR(int16_t, 4) l_342 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x174BL), 0x174BL);
        uint32_t *l_358 = &p_626->g_38.f6;
        uint32_t **l_359 = &l_358;
        uint32_t *l_360 = &p_626->g_57.f5;
        uint32_t *l_361 = (void*)0;
        uint32_t *l_362 = (void*)0;
        uint32_t *l_363 = (void*)0;
        uint32_t *l_364[1];
        int32_t l_365[6];
        int i;
        for (i = 0; i < 1; i++)
            l_364[i] = (void*)0;
        for (i = 0; i < 6; i++)
            l_365[i] = (-7L);
        for (p_626->g_215.f1 = 0; (p_626->g_215.f1 < (-3)); p_626->g_215.f1--)
        { /* block id: 138 */
            int32_t l_338 = (-2L);
            if (l_338)
                break;
        }
        l_365[4] = (((p_626->g_38.f5 = ((safe_mul_func_int16_t_s_s(l_341, ((VECTOR(int16_t, 2))(l_342.xw)).lo)) && ((GROUP_DIVERGE(0, 1) || (safe_mod_func_int32_t_s_s((((!(((((((p_626->g_345 , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((*l_327), (l_354[1][1][1] < (p_626->g_355[5][1] , (safe_mul_func_int8_t_s_s(p_626->g_67[1], (((*l_359) = l_358) != l_360))))))), ((&p_626->g_291[5][4][3] == (void*)0) && FAKE_DIVERGE(p_626->global_1_offset, get_global_id(1), 10)))) == p_6), 6)), 0xFFF3A201L))) == 0x2579E85E7D54F658L) || 254UL) && 0x30F0EEB78FA2B96DL) <= p_626->g_143) < 0L) >= 0x736E9603CDF17C05L)) < p_626->g_216.f0) & p_6), p_4))) < 0x3768666FL))) , 0x8EL) || FAKE_DIVERGE(p_626->group_0_offset, get_group_id(0), 10));
        for (p_626->g_182.f1 = 0; (p_626->g_182.f1 > 34); p_626->g_182.f1++)
        { /* block id: 146 */
            if ((atomic_inc(&p_626->g_atomic_input[26 * get_linear_group_id() + 0]) == 5))
            { /* block id: 148 */
                int32_t l_368 = 0x2C4478B5L;
                struct S0 l_383 = {4UL,0x8902L,0x3CB2L};/* VOLATILE GLOBAL l_383 */
                uint8_t l_384 = 0UL;
                int8_t **l_422 = (void*)0;
                int8_t l_425 = 4L;
                int8_t *l_424 = &l_425;
                int8_t **l_423 = &l_424;
                for (l_368 = 0; (l_368 <= 3); ++l_368)
                { /* block id: 151 */
                    int32_t l_371 = 0x3516B679L;
                    for (l_371 = (-12); (l_371 > 16); l_371 = safe_add_func_uint64_t_u_u(l_371, 7))
                    { /* block id: 154 */
                        struct S1 l_375 = {0UL,0x7798AB47L,0xD2L,1L,4294967290UL,4294967288UL,0x4A19L};/* VOLATILE GLOBAL l_375 */
                        struct S1 *l_374 = &l_375;
                        struct S1 l_376 = {0x535D44E28E051129L,0L,0x05L,1L,1UL,4294967295UL,-7L};/* VOLATILE GLOBAL l_376 */
                        int16_t l_377 = 0x647BL;
                        int8_t l_378 = 4L;
                        struct S2 l_380[9] = {{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L},{{1UL,65527UL,3L},0x1B1BF047L,8UL,0x04AC939FL,0x86FC7B5BDD8C9C1CL,0x6AC66114L,0xF563FC76L,0x1DEDEB45L,0x668D240F8B7F6920L}};
                        struct S2 *l_379 = &l_380[1];
                        struct S2 *l_381 = &l_380[4];
                        int64_t l_382 = 1L;
                        int i;
                        l_374 = (void*)0;
                        l_378 &= (l_376 , l_377);
                        l_381 = l_379;
                        l_382 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), (-9L))).xxyxyxyy)).s1501735004343443)).s39)).lo;
                    }
                }
                if ((l_383 , l_384))
                { /* block id: 161 */
                    union U3 l_385 = {0x41CF46B5L};/* VOLATILE GLOBAL l_385 */
                    uint32_t l_386 = 1UL;
                    if ((l_385 , l_386))
                    { /* block id: 162 */
                        int64_t **l_387 = (void*)0;
                        uint64_t l_388[6][6][4] = {{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}},{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}},{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}},{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}},{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}},{{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L},{0x8E98236AF15DD652L,0x1022FD75EB5E281CL,0x1022FD75EB5E281CL,0x8E98236AF15DD652L}}};
                        int32_t l_390[3];
                        int32_t *l_389 = &l_390[1];
                        int32_t *l_391[7];
                        struct S2 l_392[5] = {{{0xDF25CE08L,65535UL,0L},0x4A7AD74EL,0x9623E7BD9BDBF617L,0L,0x0634E57DE57C99E8L,0xF40E0D33L,4294967286UL,4294967291UL,0L},{{0xDF25CE08L,65535UL,0L},0x4A7AD74EL,0x9623E7BD9BDBF617L,0L,0x0634E57DE57C99E8L,0xF40E0D33L,4294967286UL,4294967291UL,0L},{{0xDF25CE08L,65535UL,0L},0x4A7AD74EL,0x9623E7BD9BDBF617L,0L,0x0634E57DE57C99E8L,0xF40E0D33L,4294967286UL,4294967291UL,0L},{{0xDF25CE08L,65535UL,0L},0x4A7AD74EL,0x9623E7BD9BDBF617L,0L,0x0634E57DE57C99E8L,0xF40E0D33L,4294967286UL,4294967291UL,0L},{{0xDF25CE08L,65535UL,0L},0x4A7AD74EL,0x9623E7BD9BDBF617L,0L,0x0634E57DE57C99E8L,0xF40E0D33L,4294967286UL,4294967291UL,0L}};
                        struct S2 l_393[4] = {{{0xB1C70CD0L,0x4ACCL,0x7E0BL},6L,0x69F001A16461D7AFL,-1L,0x60B2AD02DDDC7B27L,0xEB0C7FFAL,4UL,1UL,0x2E348E6ABA46881FL},{{0xB1C70CD0L,0x4ACCL,0x7E0BL},6L,0x69F001A16461D7AFL,-1L,0x60B2AD02DDDC7B27L,0xEB0C7FFAL,4UL,1UL,0x2E348E6ABA46881FL},{{0xB1C70CD0L,0x4ACCL,0x7E0BL},6L,0x69F001A16461D7AFL,-1L,0x60B2AD02DDDC7B27L,0xEB0C7FFAL,4UL,1UL,0x2E348E6ABA46881FL},{{0xB1C70CD0L,0x4ACCL,0x7E0BL},6L,0x69F001A16461D7AFL,-1L,0x60B2AD02DDDC7B27L,0xEB0C7FFAL,4UL,1UL,0x2E348E6ABA46881FL}};
                        int64_t l_394 = 6L;
                        int64_t l_395 = (-1L);
                        uint16_t l_396 = 65531UL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_390[i] = 0x7A4D677DL;
                        for (i = 0; i < 7; i++)
                            l_391[i] = (void*)0;
                        l_387 = (void*)0;
                        l_391[0] = (l_388[1][1][3] , l_389);
                        l_393[0] = l_392[4];
                        l_396--;
                    }
                    else
                    { /* block id: 167 */
                        struct S0 l_399 = {0x2B373109L,6UL,0x4AE4L};/* VOLATILE GLOBAL l_399 */
                        uint32_t l_400 = 4294967288UL;
                        uint16_t l_401 = 0x7628L;
                        VECTOR(int32_t, 16) l_402 = (VECTOR(int32_t, 16))(0x76FA6859L, (VECTOR(int32_t, 4))(0x76FA6859L, (VECTOR(int32_t, 2))(0x76FA6859L, 1L), 1L), 1L, 0x76FA6859L, 1L, (VECTOR(int32_t, 2))(0x76FA6859L, 1L), (VECTOR(int32_t, 2))(0x76FA6859L, 1L), 0x76FA6859L, 1L, 0x76FA6859L, 1L);
                        VECTOR(int32_t, 4) l_403 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L);
                        int64_t l_404 = 1L;
                        uint64_t l_405 = 0x75BF86BCD2658F35L;
                        int32_t l_406 = 0x36D2009BL;
                        int32_t *l_407 = (void*)0;
                        int32_t *l_408 = (void*)0;
                        int32_t *l_409[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_406 = (l_405 = (l_399 , (l_403.x = (l_404 |= ((VECTOR(int32_t, 4))((l_401 &= (l_368 |= l_400)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_402.sef)).xyxx)).wxyxwwwwxxyywwyx, ((VECTOR(int32_t, 4))(l_403.zxwz)).xywywzyzzwwxyxxy))).s34, ((VECTOR(int32_t, 2))(0x32E92539L, 0x7BF6CD0AL)))))))), 0x103A7779L)).z))));
                        l_368 = (-1L);
                        l_409[6] = (l_408 = l_407);
                    }
                    l_368 ^= 0x44D5839EL;
                }
                else
                { /* block id: 179 */
                    uint64_t l_410 = 18446744073709551615UL;
                    struct S2 l_416[8] = {{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL},{{0x829714C9L,0x8D5CL,0x45E6L},0x2919FF31L,0xE88F12C235F9EEBCL,9L,0x1D816EBA6FEEFA69L,0xEBADC838L,4294967294UL,0x3AE9BB6EL,0x495F36CA5D2BC23DL}};
                    struct S2 l_417 = {{1UL,0x2BC2L,8L},1L,0xD709E06F8184A59FL,0x1689F838L,0x64998EAA6C9BEA41L,0x1C65D814L,0x6457C285L,4294967295UL,1L};/* VOLATILE GLOBAL l_417 */
                    struct S0 l_418 = {4294967295UL,1UL,0x3FC7L};/* VOLATILE GLOBAL l_418 */
                    int16_t l_419 = (-1L);
                    uint8_t l_420[9][9][3] = {{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}},{{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL},{254UL,249UL,1UL}}};
                    uint64_t l_421 = 1UL;
                    int i, j, k;
                    l_368 |= l_410;
                    for (l_410 = 20; (l_410 >= 56); l_410 = safe_add_func_int16_t_s_s(l_410, 4))
                    { /* block id: 183 */
                        int16_t l_413 = 0L;
                        uint64_t l_414[5][3] = {{1UL,0x9C8440BDCD9FA043L,1UL},{1UL,0x9C8440BDCD9FA043L,1UL},{1UL,0x9C8440BDCD9FA043L,1UL},{1UL,0x9C8440BDCD9FA043L,1UL},{1UL,0x9C8440BDCD9FA043L,1UL}};
                        uint32_t l_415 = 4294967295UL;
                        int i, j;
                        l_413 &= (l_368 = 0x3A4C4E3BL);
                        l_415 = (l_368 = l_414[2][0]);
                    }
                    l_417 = l_416[1];
                    l_421 = (l_368 = ((l_418 , l_419) , l_420[6][7][2]));
                }
                l_423 = l_422;
                unsigned int result = 0;
                result += l_368;
                result += l_383.f0;
                result += l_383.f1;
                result += l_383.f2;
                result += l_384;
                result += l_425;
                atomic_add(&p_626->g_special_values[26 * get_linear_group_id() + 0], result);
            }
            else
            { /* block id: 194 */
                (1 + 1);
            }
        }
        if ((atomic_inc(&p_626->g_atomic_input[26 * get_linear_group_id() + 13]) == 9))
        { /* block id: 199 */
            uint64_t l_426[4][1][7];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_426[i][j][k] = 1UL;
                }
            }
            l_426[3][0][1] &= 0L;
            unsigned int result = 0;
            int l_426_i0, l_426_i1, l_426_i2;
            for (l_426_i0 = 0; l_426_i0 < 4; l_426_i0++) {
                for (l_426_i1 = 0; l_426_i1 < 1; l_426_i1++) {
                    for (l_426_i2 = 0; l_426_i2 < 7; l_426_i2++) {
                        result += l_426[l_426_i0][l_426_i1][l_426_i2];
                    }
                }
            }
            atomic_add(&p_626->g_special_values[26 * get_linear_group_id() + 13], result);
        }
        else
        { /* block id: 201 */
            (1 + 1);
        }
    }
    return p_626->g_182;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_165 p_626->g_23.f5 p_626->g_67 p_626->g_78 p_626->g_150 p_626->g_38.f5 p_626->g_91.f2 p_626->g_182 p_626->g_57.f6 p_626->g_202 p_626->g_57.f5 p_626->g_143 p_626->g_215 p_626->g_57 p_626->g_223 p_626->g_38.f3 p_626->g_145 p_626->g_38.f8 p_626->g_256 p_626->g_23.f8 p_626->g_comm_values p_626->g_91 p_626->g_23.f3 p_626->g_56 p_626->g_38.f6 p_626->g_38.f0.f1 p_626->g_261 p_626->g_216.f4 p_626->g_215.f0 p_626->g_38.f0.f0 p_626->g_291 p_626->g_23.f6 p_626->g_302 p_626->g_80 p_626->g_55 p_626->g_79 p_626->g_216.f6
 * writes: p_626->g_91.f2 p_626->g_78 p_626->g_57.f5 p_626->g_182 p_626->g_57.f6 p_626->g_38.f0.f1 p_626->g_110 p_626->g_143 p_626->g_216 p_626->g_146 p_626->g_91.f1 p_626->g_57.f1 p_626->g_256 p_626->g_38.f2 p_626->g_67 p_626->g_79 p_626->g_38.f6 p_626->g_56 p_626->g_57.f2
 */
int8_t  func_10(int32_t  p_11, uint32_t  p_12, int32_t  p_13, uint32_t  p_14, uint32_t  p_15, struct S4 * p_626)
{ /* block id: 64 */
    int16_t *l_162 = &p_626->g_91.f2;
    VECTOR(int32_t, 2) l_163 = (VECTOR(int32_t, 2))((-3L), 1L);
    VECTOR(int32_t, 4) l_164 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L);
    VECTOR(int64_t, 16) l_170 = (VECTOR(int64_t, 16))(0x230DB6F473321FACL, (VECTOR(int64_t, 4))(0x230DB6F473321FACL, (VECTOR(int64_t, 2))(0x230DB6F473321FACL, 1L), 1L), 1L, 0x230DB6F473321FACL, 1L, (VECTOR(int64_t, 2))(0x230DB6F473321FACL, 1L), (VECTOR(int64_t, 2))(0x230DB6F473321FACL, 1L), 0x230DB6F473321FACL, 1L, 0x230DB6F473321FACL, 1L);
    int8_t *l_179 = &p_626->g_78;
    uint32_t *l_180 = (void*)0;
    uint32_t *l_181 = &p_626->g_57.f5;
    int32_t *l_209 = &p_626->g_143;
    int32_t **l_210[1];
    int32_t *l_211[1][1][9] = {{{(void*)0,&p_626->g_143,(void*)0,(void*)0,&p_626->g_143,(void*)0,(void*)0,&p_626->g_143,(void*)0}}};
    VECTOR(int8_t, 2) l_224 = (VECTOR(int8_t, 2))(0x13L, 0x06L);
    VECTOR(int16_t, 4) l_300 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3761L), 0x3761L);
    VECTOR(int16_t, 8) l_301 = (VECTOR(int16_t, 8))(0x4C56L, (VECTOR(int16_t, 4))(0x4C56L, (VECTOR(int16_t, 2))(0x4C56L, 0x6914L), 0x6914L), 0x6914L, 0x4C56L, 0x6914L);
    uint64_t l_306 = 0x1957127D6F1AB553L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_210[i] = (void*)0;
    if ((safe_sub_func_int32_t_s_s((((*l_181) = ((((*l_162) = p_11) , (((VECTOR(int32_t, 4))(l_163.yxxy)).w | (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_164.ww)))).odd , (p_13 = ((p_626->g_165[1] , (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(0UL, (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_170.s1894cec7)).s72)), (p_626->g_23.f5 || l_170.sd), (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((((p_626->g_67[3] > (((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((-1L), ((((*l_179) ^= l_170.s9) | (p_626->g_150.x >= l_163.y)) , p_12))), 4)) <= 1L) & p_626->g_38.f5)) >= l_164.w) , p_15) >= (-1L)), 7)), 2)), p_11, ((VECTOR(int64_t, 2))(0x30F74A06BE4A546AL)), 0x22F5735543D635B3L)).s7 | (-1L)))), 6))) >= p_626->g_91.f2))))) != p_11)) & p_12), p_626->g_67[3])))
    { /* block id: 69 */
        struct S0 *l_183 = &p_626->g_182;
        (*l_183) = p_626->g_182;
    }
    else
    { /* block id: 71 */
        VECTOR(int16_t, 2) l_195 = (VECTOR(int16_t, 2))(3L, 4L);
        uint16_t *l_203[1];
        int32_t **l_208 = &p_626->g_110[0][1][2];
        int i;
        for (i = 0; i < 1; i++)
            l_203[i] = &p_626->g_91.f1;
        for (p_626->g_57.f6 = 2; (p_626->g_57.f6 < (-30)); p_626->g_57.f6 = safe_sub_func_int64_t_s_s(p_626->g_57.f6, 8))
        { /* block id: 74 */
            if ((atomic_inc(&p_626->g_atomic_input[26 * get_linear_group_id() + 7]) == 8))
            { /* block id: 76 */
                int64_t l_186 = (-2L);
                int8_t l_187 = 1L;
                uint16_t l_188 = 1UL;
                int64_t l_191 = 1L;
                int32_t *l_192 = (void*)0;
                l_188--;
                l_191 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x32F6A4EAL, 0x4E0E0F3BL)).yxyyxyyxxyxyxxxy)).s7;
                l_192 = (void*)0;
                unsigned int result = 0;
                result += l_186;
                result += l_187;
                result += l_188;
                result += l_191;
                atomic_add(&p_626->g_special_values[26 * get_linear_group_id() + 7], result);
            }
            else
            { /* block id: 80 */
                (1 + 1);
            }
        }
        (*l_208) = ((((safe_mod_func_uint8_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_195.yxyy)).lo)).even & 0x286AL), ((VECTOR(int8_t, 8))((!(safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u((&p_13 == (void*)0), 2)) , (safe_mod_func_uint16_t_u_u((1L | (l_162 != p_626->g_202[7][6][0])), (p_626->g_38.f0.f1 = p_14)))) , 3UL), (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(4294967295UL, 0xA34BDB75L)).lo, (safe_lshift_func_uint16_t_u_s(0xF92BL, 11))))))), 0x79L, ((VECTOR(int8_t, 4))(2L)), 1L, 0x40L)).s2)) && l_195.y) , l_195.y) , (void*)0);
    }
    (*l_209) = p_14;
    l_211[0][0][5] = (void*)0;
    for (p_626->g_57.f5 = 0; (p_626->g_57.f5 <= 3); p_626->g_57.f5 = safe_add_func_uint64_t_u_u(p_626->g_57.f5, 2))
    { /* block id: 91 */
        int32_t *l_214 = &p_626->g_143;
        VECTOR(int64_t, 4) l_222 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x4EAA763E715459EBL), 0x4EAA763E715459EBL);
        uint8_t *l_230[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t **l_229 = &l_230[4];
        int64_t *l_237[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_238 = 0x50A6A30DL;
        struct S2 *l_239 = (void*)0;
        struct S2 *l_240[7] = {&p_626->g_38,&p_626->g_38,&p_626->g_38,&p_626->g_38,&p_626->g_38,&p_626->g_38,&p_626->g_38};
        uint16_t *l_241 = &p_626->g_91.f1;
        uint16_t *l_242 = &p_626->g_182.f1;
        int32_t l_250 = 0x6050D9FCL;
        int32_t l_253 = 0x305F36B1L;
        int32_t l_254[9];
        VECTOR(int16_t, 2) l_295 = (VECTOR(int16_t, 2))(0x05E6L, 7L);
        VECTOR(int16_t, 4) l_304 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L);
        VECTOR(int16_t, 16) l_305 = (VECTOR(int16_t, 16))(0x71CAL, (VECTOR(int16_t, 4))(0x71CAL, (VECTOR(int16_t, 2))(0x71CAL, (-1L)), (-1L)), (-1L), 0x71CAL, (-1L), (VECTOR(int16_t, 2))(0x71CAL, (-1L)), (VECTOR(int16_t, 2))(0x71CAL, (-1L)), 0x71CAL, (-1L), 0x71CAL, (-1L));
        int i;
        for (i = 0; i < 9; i++)
            l_254[i] = 0x556C0C75L;
        l_214 = l_214;
        (*l_214) &= (GROUP_DIVERGE(2, 1) | 0x2836CB3E5B87094CL);
        p_626->g_216 = (p_626->g_215 , p_626->g_57);
        if (((safe_lshift_func_int8_t_s_u((p_11 & (safe_add_func_uint16_t_u_u(((*l_242) = (safe_unary_minus_func_uint16_t_u(((*l_241) = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(0x27FD83CDD95E0E05L, (-2L))), 0x6BB2567EC094BD4EL)).zxxwxxzywzyyzxxz, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_222.zzwywwyxzywwyzzw)))).s8b)).xyyyxyxxxyyxyyxy))).hi)).s4 < ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(p_626->g_223.s5302200361627252)).sfdc7, ((VECTOR(uint64_t, 16))(0UL, ((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))(0xEBA553A1L, ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((((VECTOR(int8_t, 16))(l_224.yyxxxyxxxxxxyyxy)).sd < (safe_sub_func_uint32_t_u_u(0xB2BE1894L, p_13))), 65528UL, 0x6F04L, 0x11D0L)).hi)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65534UL, 65534UL)), (safe_mul_func_int8_t_s_s((((*l_229) = (void*)0) != (void*)0), (((*p_626->g_145) = ((l_238 = (safe_div_func_int8_t_s_s(p_626->g_38.f3, (safe_div_func_int16_t_s_s(((*l_209) = (safe_lshift_func_uint16_t_u_u((~p_12), (*l_214)))), 1UL))))) , l_239)) == l_240[3]))), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(1UL)), 1UL)).sfb))), 0xD4A74687L)), ((VECTOR(uint32_t, 4))(4294967289UL))))), ((VECTOR(uint64_t, 4))(18446744073709551610UL))))), 0x684671B80DFBF983L, ((VECTOR(uint64_t, 4))(8UL)), ((VECTOR(uint64_t, 2))(18446744073709551612UL)), ((VECTOR(uint64_t, 4))(0x5001CB27DADCA18AL)))).s4ecf))), ((VECTOR(uint64_t, 8))(1UL)), p_626->g_38.f3, ((VECTOR(uint64_t, 2))(0x24C56DE614161B19L)), 1UL)).s8))))), 5L))), 3)) && p_626->g_38.f8))
        { /* block id: 101 */
            struct S0 *l_244 = &p_626->g_182;
            struct S0 **l_243 = &l_244;
            int32_t l_247 = (-10L);
            int32_t l_248 = 0x3A05EEFEL;
            VECTOR(int32_t, 2) l_255 = (VECTOR(int32_t, 2))(0x0B21F73AL, (-1L));
            uint8_t l_262[8] = {0xC1L,252UL,0xC1L,0xC1L,252UL,0xC1L,0xC1L,252UL};
            int i;
            (*l_243) = &p_626->g_91;
            if ((*l_214))
                continue;
            for (p_626->g_57.f1 = (-21); (p_626->g_57.f1 <= 2); p_626->g_57.f1++)
            { /* block id: 106 */
                int64_t l_249 = 2L;
                int32_t l_251 = 0L;
                int32_t l_252[4] = {6L,6L,6L,6L};
                int i;
                ++p_626->g_256;
                (*l_209) &= (((~((safe_rshift_func_uint16_t_u_u(((0xD2L || 255UL) , (p_626->g_182.f1 = (((l_252[1] , func_41(p_626->g_23.f8, p_626->g_comm_values[p_626->tid], p_14, l_247, p_626)) == p_626->g_261[0][6][1]) , 0xAFFDL))), p_11)) <= l_262[2])) == 1UL) ^ p_14);
                l_247 &= (safe_sub_func_uint64_t_u_u(p_626->g_216.f4, (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_626->global_2_offset, get_global_id(2), 10), ((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s(((p_626->g_182.f1 ^= (safe_add_func_uint8_t_u_u((l_255.y = 0x44L), (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(0xE5CBL, (0x03F601E31A7A64C7L ^ p_626->g_78))) , ((((safe_lshift_func_uint16_t_u_s((((p_626->g_79 = (safe_lshift_func_int16_t_s_s((((*l_162) = ((*l_209) > (p_626->g_56 < (((p_11 ^ (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((p_13 = p_11) == 5UL), l_262[1])), 0x15L))) , p_15) ^ (*l_214))))) & l_252[0]), 7))) & l_252[0]) & p_626->g_215.f0), l_262[0])) & p_12) || GROUP_DIVERGE(2, 1)) & (*l_214))), p_11)), 0L)), p_15)), ((VECTOR(uint16_t, 2))(65535UL)), 65535UL, 0x0F5AL, 0x79CEL, 0x5F55L, p_11, ((VECTOR(uint16_t, 2))(0x141FL)), ((VECTOR(uint16_t, 4))(0xFB1AL)), 6UL, 1UL)).sd5, ((VECTOR(uint16_t, 2))(1UL))))).hi && 1UL)))) < p_15), l_251)), 0x2B4BL)) ^ p_15))), l_248))));
                (*l_214) |= (p_626->g_38.f0.f0 && p_626->g_291[5][4][3]);
            }
        }
        else
        { /* block id: 118 */
            VECTOR(int16_t, 16) l_294 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3173L), 0x3173L), 0x3173L, (-8L), 0x3173L, (VECTOR(int16_t, 2))((-8L), 0x3173L), (VECTOR(int16_t, 2))((-8L), 0x3173L), (-8L), 0x3173L, (-8L), 0x3173L);
            int32_t l_299 = 0x6E75F0E6L;
            VECTOR(int16_t, 8) l_303 = (VECTOR(int16_t, 8))(0x6C53L, (VECTOR(int16_t, 4))(0x6C53L, (VECTOR(int16_t, 2))(0x6C53L, 9L), 9L), 9L, 0x6C53L, 9L);
            uint32_t *l_320 = &p_626->g_38.f6;
            int16_t *l_325 = &p_626->g_216.f6;
            int8_t l_326[2][10] = {{0x1EL,4L,4L,0x1EL,0x1EL,4L,4L,0x1EL,0x1EL,4L},{0x1EL,4L,4L,0x1EL,0x1EL,4L,4L,0x1EL,0x1EL,4L}};
            int i, j;
            (*l_209) ^= ((safe_rshift_func_int16_t_s_u(p_12, ((((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_294.s95ec)).hi, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(l_295.xxyxyxxyxxxyxxxy)).s396c, ((VECTOR(int16_t, 16))(3L, 1L, 0x6790L, ((VECTOR(int16_t, 2))(0x6AF7L, 0x50AAL)), (safe_mul_func_uint16_t_u_u(p_626->g_23.f6, (safe_unary_minus_func_uint16_t_u(((*l_242) = (l_299 = (p_626->g_67[3] < 255UL))))))), 0x7847L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_300.wzwywxyyyxzyxwwz)).sf76f)), (-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_301.s1554)), ((VECTOR(int16_t, 16))((-1L), 0L, 0x78A9L, (-1L), ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(0x0721L, 1L)).yxxxxxxx, ((VECTOR(int16_t, 8))(p_626->g_302.zxxxwyyx))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_303.s0401561525217044)).sad)).xxxx)).hi)).xyxxxyyx))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((p_626->g_80 != p_15) ^ p_13), ((VECTOR(int16_t, 2))(l_304.yw)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(7L, 0x3A9DL)))), 5L, 3L)), ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_305.s6eaf)))).xzyzxxwx)).even, (int16_t)(+0x404AL)))), (((p_626->g_223.s1 , (void*)0) != &p_13) >= GROUP_DIVERGE(2, 1)), p_14, p_14, 0L, 0x57A1L)).s7a59)))).s05d4, ((VECTOR(int16_t, 4))(9L))))).w, ((VECTOR(int16_t, 2))(0x0FAAL)), 2L)).lo)), 0L)).s7167101520362745)).s3c)).xxxyxyxxxxyyxxyy, ((VECTOR(int16_t, 16))(0x2922L)), ((VECTOR(int16_t, 16))(0x1C85L))))).sc0, ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 2))(0x2E4EL))))), 7L)).odd)), ((VECTOR(int16_t, 4))(3L)), l_306, 0x635DL, 0x0162L)).sfa79))), ((VECTOR(int16_t, 4))(6L))))).even, ((VECTOR(int16_t, 2))((-9L)))))).lo , p_11) , 9UL))) , p_13);
            l_254[1] ^= ((VECTOR(int32_t, 16))((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(3UL, 0x20A624B7L, 0UL, 4294967288UL)))).yyyyyyzxxwzywzwx)).s7 , ((((safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s((*l_214), (++(*l_241)))))) <= (safe_add_func_uint16_t_u_u((((VECTOR(int64_t, 2))(0x1DDB04EF03139AF6L, 0x770DA58D73FEE7B1L)).even & l_303.s3), ((VECTOR(int16_t, 8))(0x2B86L, ((VECTOR(int16_t, 2))(0x2E8EL, 0x0233L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 4))((((safe_sub_func_uint32_t_u_u((((void*)0 != &l_230[4]) || l_294.se), ((l_326[0][9] = ((*l_325) |= ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((p_626->g_57.f2 = (safe_rshift_func_int16_t_s_u((((safe_div_func_int32_t_s_s((-6L), ((*l_320) |= p_15))) , 0xB1D8EF0421BD35DCL) | (((safe_lshift_func_int8_t_s_u((func_51(((+(safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_626->group_2_offset, get_group_id(2), 10), (-4L)))) == 0x10C9L), (*l_214), p_626) , p_626->g_57.f2), p_626->g_79)) < p_15) >= (-10L))), 1))), p_626->g_91.f2, 0x90L, 5UL)), l_303.s3, ((VECTOR(uint8_t, 2))(252UL)), 0x24L)).s3 == FAKE_DIVERGE(p_626->local_0_offset, get_local_id(0), 10)) == 4UL))) >= 0x7435L))) , (void*)0) == (void*)0), ((VECTOR(int16_t, 2))(0x0039L)), 1L)), 0x15E9L, p_13, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x6ECCL)), 0x160AL)).odd, ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 8))(1L))))).s57)).odd, 0L, ((VECTOR(int16_t, 2))(1L)), (-7L))).s6))) , (-1L)) != (*l_209))), ((VECTOR(int32_t, 8))(0L)), (-1L), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))(0x2A0E4634L)))).s2;
        }
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_23 p_626->g_38.f1 p_626->g_18 p_626->g_38.f8 p_626->g_55 p_626->g_57 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_91 p_626->g_56 p_626->g_38.f6 p_626->g_118 p_626->g_78 p_626->g_38.f0.f1 p_626->g_143 p_626->g_145 p_626->g_150
 * writes: p_626->g_23 p_626->g_56 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_110 p_626->g_91.f2 p_626->g_143 p_626->g_91 p_626->g_145
 */
uint32_t  func_21(uint64_t  p_22, struct S4 * p_626)
{ /* block id: 5 */
    volatile struct S2 *l_24 = &p_626->g_23;
    struct S2 ***l_147[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_152 = 8L;
    int i;
    (*l_24) = p_626->g_23;
    p_626->g_145 = func_25(p_626->g_23.f7, p_626);
    for (p_22 = 0; (p_22 < 36); p_22 = safe_add_func_int32_t_s_s(p_22, 6))
    { /* block id: 59 */
        int32_t *l_151 = &p_626->g_143;
        (*l_151) = ((VECTOR(int32_t, 8))(p_626->g_150.yyyxyxxy)).s3;
    }
    return l_152;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_38.f1 p_626->g_18 p_626->g_38.f8 p_626->g_55 p_626->g_57 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_91 p_626->g_23.f3 p_626->g_56 p_626->g_38.f6 p_626->g_118 p_626->g_78 p_626->g_38.f0.f1 p_626->g_143 p_626->g_145
 * writes: p_626->g_56 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_110 p_626->g_91.f2 p_626->g_143 p_626->g_91
 */
struct S2 ** func_25(int32_t  p_26, struct S4 * p_626)
{ /* block id: 7 */
    uint16_t l_36 = 0x7C74L;
    struct S0 *l_144 = &p_626->g_91;
    for (p_26 = 0; (p_26 <= 6); ++p_26)
    { /* block id: 10 */
        struct S2 *l_37[3];
        int32_t l_139 = 1L;
        int16_t *l_140 = (void*)0;
        int16_t *l_141 = &p_626->g_91.f2;
        int32_t *l_142 = &p_626->g_143;
        int i;
        for (i = 0; i < 3; i++)
            l_37[i] = &p_626->g_38;
        (*l_142) ^= ((safe_sub_func_int16_t_s_s((func_31(l_36, (l_37[2] == l_37[0]), func_39(l_37[2], p_626), &l_37[2], p_626) , (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((*l_141) &= (safe_lshift_func_int8_t_s_u(p_26, l_139))), p_626->g_57.f5)) , p_626->g_57.f3), 0x0B5AL)), p_26))), l_36)) || l_36);
        (*l_142) = l_36;
    }
    (*l_144) = p_626->g_91;
    return p_626->g_145;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_31(uint64_t  p_32, uint32_t  p_33, struct S2 * p_34, struct S2 ** p_35, struct S4 * p_626)
{ /* block id: 47 */
    int32_t l_130[10] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
    int i;
    l_130[9] = p_32;
    return l_130[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_38.f1 p_626->g_18 p_626->g_38.f8 p_626->g_55 p_626->g_57 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_91 p_626->g_23.f3 p_626->g_56 p_626->g_38.f6 p_626->g_118 p_626->g_78 p_626->g_38.f0.f1
 * writes: p_626->g_56 p_626->g_67 p_626->g_38.f2 p_626->g_80 p_626->g_110
 */
struct S2 * func_39(struct S2 * p_40, struct S4 * p_626)
{ /* block id: 11 */
    uint16_t l_46 = 0xB336L;
    int32_t *l_129 = &p_626->g_56;
    l_129 = func_41(l_46, func_47((func_51(p_626->g_38.f1, p_626->g_18.x, p_626) , l_46), l_46, l_46, p_626), l_46, p_626->g_18.y, p_626);
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_38.f2 p_626->g_91 p_626->g_57.f1 p_626->g_23.f3 p_626->g_56 p_626->g_38.f6 p_626->g_118 p_626->g_67 p_626->g_57.f2 p_626->g_78 p_626->g_38.f0.f1
 * writes: p_626->g_38.f2 p_626->g_67 p_626->g_110
 */
int32_t * func_41(uint8_t  p_42, int8_t  p_43, int32_t  p_44, int16_t  p_45, struct S4 * p_626)
{ /* block id: 27 */
    uint32_t l_94 = 0x2ABCF54FL;
    struct S2 *l_100 = &p_626->g_38;
    int32_t *l_126 = (void*)0;
    for (p_626->g_38.f2 = 0; (p_626->g_38.f2 < 5); p_626->g_38.f2 = safe_add_func_int64_t_s_s(p_626->g_38.f2, 2))
    { /* block id: 30 */
        int8_t l_97 = (-2L);
        int32_t *l_105 = (void*)0;
        uint8_t *l_106 = &p_626->g_67[3];
        uint8_t *l_107[1];
        int32_t *l_127 = &p_626->g_56;
        int i;
        for (i = 0; i < 1; i++)
            l_107[i] = &p_626->g_57.f2;
        if (((p_42 = (!(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0UL, 0xFAA48CC3AA3D5FEEL)).xxxyxxxx)).s2 < (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((p_626->g_91 , (safe_div_func_uint64_t_u_u(l_94, (safe_div_func_int8_t_s_s(l_97, (safe_rshift_func_int16_t_s_s((((void*)0 != l_100) || (l_94 , (safe_div_func_uint8_t_u_u(p_626->g_57.f1, (safe_rshift_func_uint8_t_u_u(((*l_106) = (l_105 != (void*)0)), 5)))))), p_626->g_23.f3))))))), l_94)) & p_626->g_56), l_94)), p_43))))) > l_94))
        { /* block id: 33 */
            int32_t *l_108 = &p_626->g_56;
            int32_t **l_111 = &p_626->g_110[1][0][0];
            VECTOR(int8_t, 2) l_121 = (VECTOR(int8_t, 2))((-1L), (-1L));
            int i;
            (*l_111) = l_108;
            l_126 = ((*l_111) = ((((4294967293UL || ((safe_add_func_int64_t_s_s(p_43, (safe_add_func_uint32_t_u_u(((2UL < (safe_sub_func_int64_t_s_s((*l_108), (~(p_626->g_38.f6 , 0x048DEE870590676BL))))) <= (((VECTOR(int64_t, 16))(p_626->g_118.s6a2825b7cc70ecfa)).se == (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_121.xxxy)).w, 0x26L)))), ((((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(1UL, p_626->g_67[3])), p_626->g_57.f2)) < GROUP_DIVERGE(0, 1)) && 1L) & 4294967294UL))))) <= p_626->g_78)) == 0x73CDB0A0L) == p_626->g_38.f0.f1) , (void*)0));
        }
        else
        { /* block id: 37 */
            int32_t **l_128[9][5][2] = {{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}},{{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105},{&l_105,&l_105}}};
            int i, j, k;
            l_105 = (l_126 = l_127);
            return l_127;
        }
        return l_105;
    }
    return l_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_67 p_626->g_38.f2 p_626->g_80
 * writes: p_626->g_67 p_626->g_38.f2 p_626->g_80
 */
int8_t  func_47(int64_t  p_48, uint32_t  p_49, uint64_t  p_50, struct S4 * p_626)
{ /* block id: 15 */
    int32_t *l_58 = &p_626->g_56;
    int32_t *l_59 = &p_626->g_56;
    int32_t *l_60 = &p_626->g_56;
    int32_t *l_61 = &p_626->g_56;
    int32_t *l_62 = &p_626->g_56;
    int32_t l_63 = 0x322E546EL;
    int32_t *l_64 = &l_63;
    int32_t *l_65 = &p_626->g_56;
    int32_t *l_66[6][2][3] = {{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}},{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}},{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}},{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}},{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}},{{(void*)0,&p_626->g_56,(void*)0},{(void*)0,&p_626->g_56,(void*)0}}};
    int i, j, k;
    --p_626->g_67[3];
    for (p_626->g_38.f2 = 18; (p_626->g_38.f2 < 26); p_626->g_38.f2 = safe_add_func_uint64_t_u_u(p_626->g_38.f2, 7))
    { /* block id: 19 */
        int8_t l_74[2];
        int32_t l_75[9][10][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_74[i] = 9L;
        for (p_48 = 0; (p_48 != 5); ++p_48)
        { /* block id: 22 */
            VECTOR(int8_t, 2) l_76 = (VECTOR(int8_t, 2))(0x1CL, 0x58L);
            int32_t l_77 = (-6L);
            int i;
            p_626->g_80--;
        }
    }
    return p_626->g_38.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_626->g_38.f8 p_626->g_55 p_626->g_57
 * writes: p_626->g_56
 */
struct S1  func_51(int32_t  p_52, int16_t  p_53, struct S4 * p_626)
{ /* block id: 12 */
    int8_t l_54[5] = {0x76L,0x76L,0x76L,0x76L,0x76L};
    int i;
    (*p_626->g_55) = (l_54[4] ^ p_626->g_38.f8);
    return p_626->g_57;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S4 c_627;
    struct S4* p_626 = &c_627;
    struct S4 c_628 = {
        (VECTOR(uint32_t, 2))(9UL, 0xEEC299E8L), // p_626->g_18
        {{0UL,65535UL,0x6C35L},0x11521FAFL,18446744073709551612UL,0x1718BC69L,0xDC509CA4F06702E6L,0x372585FAL,0xE44FA3FDL,4294967295UL,-10L}, // p_626->g_23
        {{0x53C8CBF6L,0UL,9L},6L,0xE864ADB5D2300B63L,0x1140AE77L,1UL,0x9FBC0AE2L,2UL,4294967286UL,0L}, // p_626->g_38
        0x2C795732L, // p_626->g_56
        &p_626->g_56, // p_626->g_55
        {1UL,-1L,0xD7L,0x4B4EA99669D59961L,0UL,4294967289UL,1L}, // p_626->g_57
        {0x76L,0x76L,0x76L,0x76L}, // p_626->g_67
        8L, // p_626->g_78
        (-6L), // p_626->g_79
        65534UL, // p_626->g_80
        {8UL,0UL,0L}, // p_626->g_91
        {{{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56}},{{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56}},{{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56}},{{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56}},{{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56},{&p_626->g_56,&p_626->g_56,&p_626->g_56}}}, // p_626->g_110
        {&p_626->g_110[0][2][1],&p_626->g_110[0][1][2],&p_626->g_110[0][2][1],&p_626->g_110[0][2][1],&p_626->g_110[0][1][2],&p_626->g_110[0][2][1],&p_626->g_110[0][2][1],&p_626->g_110[0][1][2],&p_626->g_110[0][2][1],&p_626->g_110[0][2][1]}, // p_626->g_109
        (VECTOR(int64_t, 16))(0x15C984E575B16568L, (VECTOR(int64_t, 4))(0x15C984E575B16568L, (VECTOR(int64_t, 2))(0x15C984E575B16568L, 0x40376B33B0C632DAL), 0x40376B33B0C632DAL), 0x40376B33B0C632DAL, 0x15C984E575B16568L, 0x40376B33B0C632DAL, (VECTOR(int64_t, 2))(0x15C984E575B16568L, 0x40376B33B0C632DAL), (VECTOR(int64_t, 2))(0x15C984E575B16568L, 0x40376B33B0C632DAL), 0x15C984E575B16568L, 0x40376B33B0C632DAL, 0x15C984E575B16568L, 0x40376B33B0C632DAL), // p_626->g_118
        0L, // p_626->g_143
        {{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38},{&p_626->g_38,&p_626->g_38,(void*)0,&p_626->g_38,&p_626->g_38}}, // p_626->g_146
        &p_626->g_146[2][0], // p_626->g_145
        (VECTOR(int32_t, 2))(1L, (-9L)), // p_626->g_150
        {{0x2A6587CEL},{0x2A6587CEL},{0x2A6587CEL},{0x2A6587CEL},{0x2A6587CEL},{0x2A6587CEL},{0x2A6587CEL}}, // p_626->g_165
        {2UL,0xE6F1L,0x4E19L}, // p_626->g_182
        {{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}},{{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0},{&p_626->g_38.f0.f2,&p_626->g_38.f0.f2,(void*)0}}}, // p_626->g_202
        {1L}, // p_626->g_215
        {1UL,0x222E2F3DL,0x09L,-1L,4294967288UL,4294967289UL,0x0507L}, // p_626->g_216
        (VECTOR(uint64_t, 8))(0x7E7E5BDE789B663FL, (VECTOR(uint64_t, 4))(0x7E7E5BDE789B663FL, (VECTOR(uint64_t, 2))(0x7E7E5BDE789B663FL, 0x142BF08DCBE90106L), 0x142BF08DCBE90106L), 0x142BF08DCBE90106L, 0x7E7E5BDE789B663FL, 0x142BF08DCBE90106L), // p_626->g_223
        4294967295UL, // p_626->g_256
        {{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}},{{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6},{&p_626->g_38.f6,(void*)0,&p_626->g_38.f6,&p_626->g_38.f6}}}, // p_626->g_261
        {{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}},{{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{1UL,4294967295UL,1UL,4294967295UL,4294967295UL}}}, // p_626->g_291
        (VECTOR(int16_t, 4))(0x638BL, (VECTOR(int16_t, 2))(0x638BL, (-1L)), (-1L)), // p_626->g_302
        {0xFE801B891AE40C62L,0x0825A348L,0x85L,0x66959D6B01C9FD32L,0x1E16ABA3L,0UL,0x0F9FL}, // p_626->g_345
        {{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}},{{-7L},{-7L},{0x0E60D8FBL},{-1L}}}, // p_626->g_355
        (VECTOR(int32_t, 16))(0x23635062L, (VECTOR(int32_t, 4))(0x23635062L, (VECTOR(int32_t, 2))(0x23635062L, 0x3DA7F948L), 0x3DA7F948L), 0x3DA7F948L, 0x23635062L, 0x3DA7F948L, (VECTOR(int32_t, 2))(0x23635062L, 0x3DA7F948L), (VECTOR(int32_t, 2))(0x23635062L, 0x3DA7F948L), 0x23635062L, 0x3DA7F948L, 0x23635062L, 0x3DA7F948L), // p_626->g_610
        65535UL, // p_626->g_615
        3UL, // p_626->g_616
        1UL, // p_626->g_619
        0, // p_626->v_collective
        sequence_input[get_global_id(0)], // p_626->global_0_offset
        sequence_input[get_global_id(1)], // p_626->global_1_offset
        sequence_input[get_global_id(2)], // p_626->global_2_offset
        sequence_input[get_local_id(0)], // p_626->local_0_offset
        sequence_input[get_local_id(1)], // p_626->local_1_offset
        sequence_input[get_local_id(2)], // p_626->local_2_offset
        sequence_input[get_group_id(0)], // p_626->group_0_offset
        sequence_input[get_group_id(1)], // p_626->group_1_offset
        sequence_input[get_group_id(2)], // p_626->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_626->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_627 = c_628;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_626);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_626->g_18.x, "p_626->g_18.x", print_hash_value);
    transparent_crc(p_626->g_18.y, "p_626->g_18.y", print_hash_value);
    transparent_crc(p_626->g_23.f0.f0, "p_626->g_23.f0.f0", print_hash_value);
    transparent_crc(p_626->g_23.f0.f1, "p_626->g_23.f0.f1", print_hash_value);
    transparent_crc(p_626->g_23.f0.f2, "p_626->g_23.f0.f2", print_hash_value);
    transparent_crc(p_626->g_23.f1, "p_626->g_23.f1", print_hash_value);
    transparent_crc(p_626->g_23.f2, "p_626->g_23.f2", print_hash_value);
    transparent_crc(p_626->g_23.f3, "p_626->g_23.f3", print_hash_value);
    transparent_crc(p_626->g_23.f4, "p_626->g_23.f4", print_hash_value);
    transparent_crc(p_626->g_23.f5, "p_626->g_23.f5", print_hash_value);
    transparent_crc(p_626->g_23.f6, "p_626->g_23.f6", print_hash_value);
    transparent_crc(p_626->g_23.f7, "p_626->g_23.f7", print_hash_value);
    transparent_crc(p_626->g_23.f8, "p_626->g_23.f8", print_hash_value);
    transparent_crc(p_626->g_38.f0.f0, "p_626->g_38.f0.f0", print_hash_value);
    transparent_crc(p_626->g_38.f0.f1, "p_626->g_38.f0.f1", print_hash_value);
    transparent_crc(p_626->g_38.f0.f2, "p_626->g_38.f0.f2", print_hash_value);
    transparent_crc(p_626->g_38.f1, "p_626->g_38.f1", print_hash_value);
    transparent_crc(p_626->g_38.f2, "p_626->g_38.f2", print_hash_value);
    transparent_crc(p_626->g_38.f3, "p_626->g_38.f3", print_hash_value);
    transparent_crc(p_626->g_38.f4, "p_626->g_38.f4", print_hash_value);
    transparent_crc(p_626->g_38.f5, "p_626->g_38.f5", print_hash_value);
    transparent_crc(p_626->g_38.f6, "p_626->g_38.f6", print_hash_value);
    transparent_crc(p_626->g_38.f7, "p_626->g_38.f7", print_hash_value);
    transparent_crc(p_626->g_38.f8, "p_626->g_38.f8", print_hash_value);
    transparent_crc(p_626->g_56, "p_626->g_56", print_hash_value);
    transparent_crc(p_626->g_57.f0, "p_626->g_57.f0", print_hash_value);
    transparent_crc(p_626->g_57.f1, "p_626->g_57.f1", print_hash_value);
    transparent_crc(p_626->g_57.f2, "p_626->g_57.f2", print_hash_value);
    transparent_crc(p_626->g_57.f3, "p_626->g_57.f3", print_hash_value);
    transparent_crc(p_626->g_57.f4, "p_626->g_57.f4", print_hash_value);
    transparent_crc(p_626->g_57.f5, "p_626->g_57.f5", print_hash_value);
    transparent_crc(p_626->g_57.f6, "p_626->g_57.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_626->g_67[i], "p_626->g_67[i]", print_hash_value);

    }
    transparent_crc(p_626->g_78, "p_626->g_78", print_hash_value);
    transparent_crc(p_626->g_79, "p_626->g_79", print_hash_value);
    transparent_crc(p_626->g_80, "p_626->g_80", print_hash_value);
    transparent_crc(p_626->g_91.f0, "p_626->g_91.f0", print_hash_value);
    transparent_crc(p_626->g_91.f1, "p_626->g_91.f1", print_hash_value);
    transparent_crc(p_626->g_91.f2, "p_626->g_91.f2", print_hash_value);
    transparent_crc(p_626->g_118.s0, "p_626->g_118.s0", print_hash_value);
    transparent_crc(p_626->g_118.s1, "p_626->g_118.s1", print_hash_value);
    transparent_crc(p_626->g_118.s2, "p_626->g_118.s2", print_hash_value);
    transparent_crc(p_626->g_118.s3, "p_626->g_118.s3", print_hash_value);
    transparent_crc(p_626->g_118.s4, "p_626->g_118.s4", print_hash_value);
    transparent_crc(p_626->g_118.s5, "p_626->g_118.s5", print_hash_value);
    transparent_crc(p_626->g_118.s6, "p_626->g_118.s6", print_hash_value);
    transparent_crc(p_626->g_118.s7, "p_626->g_118.s7", print_hash_value);
    transparent_crc(p_626->g_118.s8, "p_626->g_118.s8", print_hash_value);
    transparent_crc(p_626->g_118.s9, "p_626->g_118.s9", print_hash_value);
    transparent_crc(p_626->g_118.sa, "p_626->g_118.sa", print_hash_value);
    transparent_crc(p_626->g_118.sb, "p_626->g_118.sb", print_hash_value);
    transparent_crc(p_626->g_118.sc, "p_626->g_118.sc", print_hash_value);
    transparent_crc(p_626->g_118.sd, "p_626->g_118.sd", print_hash_value);
    transparent_crc(p_626->g_118.se, "p_626->g_118.se", print_hash_value);
    transparent_crc(p_626->g_118.sf, "p_626->g_118.sf", print_hash_value);
    transparent_crc(p_626->g_143, "p_626->g_143", print_hash_value);
    transparent_crc(p_626->g_150.x, "p_626->g_150.x", print_hash_value);
    transparent_crc(p_626->g_150.y, "p_626->g_150.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_626->g_165[i].f0, "p_626->g_165[i].f0", print_hash_value);

    }
    transparent_crc(p_626->g_182.f0, "p_626->g_182.f0", print_hash_value);
    transparent_crc(p_626->g_182.f1, "p_626->g_182.f1", print_hash_value);
    transparent_crc(p_626->g_182.f2, "p_626->g_182.f2", print_hash_value);
    transparent_crc(p_626->g_215.f0, "p_626->g_215.f0", print_hash_value);
    transparent_crc(p_626->g_216.f0, "p_626->g_216.f0", print_hash_value);
    transparent_crc(p_626->g_216.f1, "p_626->g_216.f1", print_hash_value);
    transparent_crc(p_626->g_216.f2, "p_626->g_216.f2", print_hash_value);
    transparent_crc(p_626->g_216.f3, "p_626->g_216.f3", print_hash_value);
    transparent_crc(p_626->g_216.f4, "p_626->g_216.f4", print_hash_value);
    transparent_crc(p_626->g_216.f5, "p_626->g_216.f5", print_hash_value);
    transparent_crc(p_626->g_216.f6, "p_626->g_216.f6", print_hash_value);
    transparent_crc(p_626->g_223.s0, "p_626->g_223.s0", print_hash_value);
    transparent_crc(p_626->g_223.s1, "p_626->g_223.s1", print_hash_value);
    transparent_crc(p_626->g_223.s2, "p_626->g_223.s2", print_hash_value);
    transparent_crc(p_626->g_223.s3, "p_626->g_223.s3", print_hash_value);
    transparent_crc(p_626->g_223.s4, "p_626->g_223.s4", print_hash_value);
    transparent_crc(p_626->g_223.s5, "p_626->g_223.s5", print_hash_value);
    transparent_crc(p_626->g_223.s6, "p_626->g_223.s6", print_hash_value);
    transparent_crc(p_626->g_223.s7, "p_626->g_223.s7", print_hash_value);
    transparent_crc(p_626->g_256, "p_626->g_256", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_626->g_291[i][j][k], "p_626->g_291[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_626->g_302.x, "p_626->g_302.x", print_hash_value);
    transparent_crc(p_626->g_302.y, "p_626->g_302.y", print_hash_value);
    transparent_crc(p_626->g_302.z, "p_626->g_302.z", print_hash_value);
    transparent_crc(p_626->g_302.w, "p_626->g_302.w", print_hash_value);
    transparent_crc(p_626->g_345.f0, "p_626->g_345.f0", print_hash_value);
    transparent_crc(p_626->g_345.f1, "p_626->g_345.f1", print_hash_value);
    transparent_crc(p_626->g_345.f2, "p_626->g_345.f2", print_hash_value);
    transparent_crc(p_626->g_345.f3, "p_626->g_345.f3", print_hash_value);
    transparent_crc(p_626->g_345.f4, "p_626->g_345.f4", print_hash_value);
    transparent_crc(p_626->g_345.f5, "p_626->g_345.f5", print_hash_value);
    transparent_crc(p_626->g_345.f6, "p_626->g_345.f6", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_626->g_355[i][j].f0, "p_626->g_355[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_626->g_610.s0, "p_626->g_610.s0", print_hash_value);
    transparent_crc(p_626->g_610.s1, "p_626->g_610.s1", print_hash_value);
    transparent_crc(p_626->g_610.s2, "p_626->g_610.s2", print_hash_value);
    transparent_crc(p_626->g_610.s3, "p_626->g_610.s3", print_hash_value);
    transparent_crc(p_626->g_610.s4, "p_626->g_610.s4", print_hash_value);
    transparent_crc(p_626->g_610.s5, "p_626->g_610.s5", print_hash_value);
    transparent_crc(p_626->g_610.s6, "p_626->g_610.s6", print_hash_value);
    transparent_crc(p_626->g_610.s7, "p_626->g_610.s7", print_hash_value);
    transparent_crc(p_626->g_610.s8, "p_626->g_610.s8", print_hash_value);
    transparent_crc(p_626->g_610.s9, "p_626->g_610.s9", print_hash_value);
    transparent_crc(p_626->g_610.sa, "p_626->g_610.sa", print_hash_value);
    transparent_crc(p_626->g_610.sb, "p_626->g_610.sb", print_hash_value);
    transparent_crc(p_626->g_610.sc, "p_626->g_610.sc", print_hash_value);
    transparent_crc(p_626->g_610.sd, "p_626->g_610.sd", print_hash_value);
    transparent_crc(p_626->g_610.se, "p_626->g_610.se", print_hash_value);
    transparent_crc(p_626->g_610.sf, "p_626->g_610.sf", print_hash_value);
    transparent_crc(p_626->g_615, "p_626->g_615", print_hash_value);
    transparent_crc(p_626->g_616, "p_626->g_616", print_hash_value);
    transparent_crc(p_626->g_619, "p_626->g_619", print_hash_value);
    transparent_crc(p_626->v_collective, "p_626->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 26; i++)
            transparent_crc(p_626->g_special_values[i + 26 * get_linear_group_id()], "p_626->g_special_values[i + 26 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_626->l_comm_values[get_linear_local_id()], "p_626->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_626->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_626->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
