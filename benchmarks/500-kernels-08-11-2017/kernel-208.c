// --atomics 44 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 20,17,13 -l 4,1,1
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

__constant uint32_t permutations[10][4] = {
{3,2,0,1}, // permutation 0
{1,2,3,0}, // permutation 1
{1,0,2,3}, // permutation 2
{3,2,0,1}, // permutation 3
{1,2,3,0}, // permutation 4
{1,2,3,0}, // permutation 5
{2,3,1,0}, // permutation 6
{2,0,1,3}, // permutation 7
{1,0,2,3}, // permutation 8
{2,0,1,3} // permutation 9
};

// Seed: 1185140623

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   int64_t  f1;
};

union U1 {
   int32_t  f0;
   volatile int64_t  f1;
   int8_t * f2;
   volatile int32_t  f3;
   volatile int64_t  f4;
};

struct S2 {
    int32_t g_3;
    int32_t * volatile g_2[7][3];
    int8_t g_19;
    int32_t *g_25;
    int32_t **g_24;
    volatile VECTOR(int8_t, 16) g_45;
    volatile union U0 g_63;
    int32_t g_66;
    int32_t * volatile g_65[9];
    int32_t * volatile g_67;
    volatile int32_t g_74[5];
    volatile int32_t * volatile g_73;
    volatile int32_t * volatile *g_72;
    volatile int32_t * volatile * volatile *g_71;
    uint16_t g_80;
    int32_t g_84[3][6][3];
    volatile VECTOR(int16_t, 16) g_91;
    uint16_t g_94;
    volatile VECTOR(int32_t, 2) g_95;
    VECTOR(uint8_t, 8) g_101;
    VECTOR(int8_t, 4) g_113;
    volatile VECTOR(uint32_t, 8) g_119;
    VECTOR(uint32_t, 8) g_120;
    union U1 g_121;
    uint32_t g_152;
    int32_t *g_156;
    uint32_t g_165;
    union U1 g_183;
    VECTOR(int32_t, 2) g_187;
    int16_t g_195;
    VECTOR(int8_t, 2) g_206;
    int16_t g_216;
    volatile int64_t g_230;
    VECTOR(int16_t, 4) g_235;
    VECTOR(uint16_t, 16) g_236;
    VECTOR(int32_t, 2) g_239;
    VECTOR(int16_t, 8) g_242;
    uint16_t g_261;
    int16_t ** volatile g_281[1];
    int16_t ** volatile * volatile g_282;
    volatile int32_t g_287;
    uint32_t g_301;
    uint32_t g_312;
    volatile VECTOR(int16_t, 4) g_322;
    VECTOR(uint64_t, 16) g_327;
    int32_t g_345;
    volatile VECTOR(uint16_t, 8) g_392;
    volatile VECTOR(uint16_t, 2) g_396;
    VECTOR(uint16_t, 2) g_399;
    volatile int8_t *g_427;
    volatile int8_t **g_426;
    volatile int8_t *** volatile g_428;
    int64_t **g_431;
    int64_t *** volatile g_430;
    VECTOR(int8_t, 8) g_440;
    volatile VECTOR(int8_t, 4) g_441;
    VECTOR(uint64_t, 2) g_467;
    int8_t g_471[3];
    VECTOR(uint16_t, 2) g_497;
    VECTOR(uint16_t, 2) g_520;
    int64_t g_548;
    uint8_t *g_556[4][7][5];
    volatile union U1 g_561;
    uint8_t *g_568;
    VECTOR(uint32_t, 2) g_583;
    VECTOR(int8_t, 16) g_603;
    VECTOR(uint32_t, 4) g_640;
    volatile VECTOR(uint8_t, 8) g_664;
    union U0 g_667;
    VECTOR(uint16_t, 4) g_669;
    VECTOR(uint16_t, 4) g_670;
    int32_t g_688;
    int32_t **g_702;
    volatile VECTOR(uint16_t, 8) g_720;
    volatile int16_t g_727;
    volatile VECTOR(int32_t, 8) g_741;
    VECTOR(int64_t, 16) g_844;
    volatile union U1 g_845;
    volatile union U1 g_882;
    union U1 g_883[8][5];
    volatile uint32_t * volatile g_891;
    volatile uint32_t * volatile * volatile g_890;
    int32_t *g_894;
    volatile VECTOR(int32_t, 2) g_909;
    volatile VECTOR(int32_t, 16) g_915;
    volatile VECTOR(int32_t, 8) g_916;
    VECTOR(int32_t, 16) g_918;
    int32_t g_940;
    volatile uint32_t g_943;
    volatile VECTOR(int16_t, 16) g_947;
    VECTOR(int16_t, 8) g_948;
    uint64_t * volatile g_972;
    int8_t g_973;
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
uint16_t  func_1(struct S2 * p_977);
int32_t ** func_6(int32_t * p_7, struct S2 * p_977);
int32_t * func_8(uint64_t  p_9, int32_t * p_10, struct S2 * p_977);
int32_t * func_11(uint16_t  p_12, int8_t * p_13, int8_t * p_14, int32_t ** p_15, int32_t  p_16, struct S2 * p_977);
int8_t * func_20(int32_t ** p_21, int32_t * p_22, uint64_t  p_23, struct S2 * p_977);
uint64_t  func_27(int32_t * p_28, uint32_t  p_29, uint32_t  p_30, struct S2 * p_977);
int32_t * func_31(int32_t  p_32, int32_t ** p_33, int32_t ** p_34, struct S2 * p_977);
int32_t ** func_36(int32_t * p_37, uint32_t  p_38, uint32_t  p_39, int32_t  p_40, uint8_t  p_41, struct S2 * p_977);
union U1  func_57(int64_t  p_58, uint16_t  p_59, struct S2 * p_977);
uint64_t  func_60(uint32_t  p_61, uint32_t  p_62, struct S2 * p_977);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_977->g_2 p_977->g_3 p_977->g_973
 * writes: p_977->g_2 p_977->g_3
 */
uint16_t  func_1(struct S2 * p_977)
{ /* block id: 4 */
    int32_t l_35[4];
    int32_t *l_350 = (void*)0;
    int32_t **l_349 = &l_350;
    uint8_t **l_847 = &p_977->g_556[0][1][0];
    uint8_t **l_848[5][5][4] = {{{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]}},{{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]}},{{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]}},{{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]}},{{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]},{&p_977->g_556[0][4][4],&p_977->g_568,&p_977->g_568,&p_977->g_556[1][3][1]}}};
    uint8_t l_863[4][5][9] = {{{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL}},{{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL}},{{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL}},{{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL},{0UL,255UL,0xF5L,0xE0L,254UL,2UL,0xA6L,252UL,255UL}}};
    int8_t *l_873 = (void*)0;
    int32_t l_884 = 0x234068F9L;
    VECTOR(int32_t, 2) l_914 = (VECTOR(int32_t, 2))((-1L), 1L);
    uint8_t l_944[5][3][3] = {{{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L}},{{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L}},{{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L}},{{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L}},{{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L},{0x5BL,9UL,0xC2L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_35[i] = (-1L);
    p_977->g_2[2][2] = p_977->g_2[2][2];
    for (p_977->g_3 = 17; (p_977->g_3 == (-30)); p_977->g_3--)
    { /* block id: 8 */
        VECTOR(int16_t, 16) l_17 = (VECTOR(int16_t, 16))(0x379DL, (VECTOR(int16_t, 4))(0x379DL, (VECTOR(int16_t, 2))(0x379DL, 0x481FL), 0x481FL), 0x481FL, 0x379DL, 0x481FL, (VECTOR(int16_t, 2))(0x379DL, 0x481FL), (VECTOR(int16_t, 2))(0x379DL, 0x481FL), 0x379DL, 0x481FL, 0x379DL, 0x481FL);
        int8_t *l_18[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int32_t ***l_26[9][4] = {{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24},{&p_977->g_24,&p_977->g_24,&p_977->g_24,&p_977->g_24}};
        int32_t l_42 = 0x4C259DBAL;
        VECTOR(uint8_t, 2) l_880 = (VECTOR(uint8_t, 2))(246UL, 0x43L);
        int i, j;
        (1 + 1);
    }
    return p_977->g_973;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_206 p_977->g_741 p_977->g_80 p_977->g_216 p_977->g_242 p_977->g_399 p_977->g_312 p_977->g_156
 * writes: p_977->g_327 p_977->g_216 p_977->g_242 p_977->g_66 p_977->g_84
 */
int32_t ** func_6(int32_t * p_7, struct S2 * p_977)
{ /* block id: 283 */
    uint8_t **l_732 = &p_977->g_556[1][4][3];
    uint8_t ***l_733 = &l_732;
    uint8_t **l_734 = &p_977->g_556[0][6][4];
    int32_t l_737 = 1L;
    uint64_t *l_738[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int16_t *l_744 = (void*)0;
    int32_t l_745 = 2L;
    int i;
    (*p_977->g_156) = (safe_mod_func_uint16_t_u_u((0xAF35180CL >= ((1L > ((((((*l_733) = l_732) != l_734) == ((p_977->g_242.s6 ^= (safe_mod_func_uint16_t_u_u(l_737, (l_745 ^= (p_977->g_216 ^= ((((l_737 && ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))((p_977->g_327.sb = p_977->g_206.x), ((VECTOR(uint64_t, 2))(0x9260E2C82565F1B2L, 0xFB222B25336F56B3L)), 1UL)).lo)))), 0x8DBB5784A6AFB302L, 0x8C14967A05B32064L)).y) | ((((safe_div_func_int32_t_s_s(((((((((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(p_977->g_741.s2426503033125754)).s8c80, (int32_t)((l_737 != (safe_sub_func_int8_t_s_s(((((void*)0 != l_738[6]) < l_737) == FAKE_DIVERGE(p_977->global_2_offset, get_global_id(2), 10)), 0x61L))) , l_737)))).wzyzwwwz)), ((VECTOR(int32_t, 8))(0x4D9F1FA0L))))).s5 , l_737) , (-3L)) == l_737) != 0xFC1ECDFCL) || l_737) != 0x61DE0289E8CDB381L), l_737)) != l_737) <= l_737) & p_977->g_80)) >= 0x5AL) , 6L)))))) != p_977->g_399.y)) >= p_977->g_312) , 4UL)) | l_737)), FAKE_DIVERGE(p_977->local_2_offset, get_local_id(2), 10)));
    return &p_977->g_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_24 p_977->g_25
 * writes: p_977->g_25
 */
int32_t * func_8(uint64_t  p_9, int32_t * p_10, struct S2 * p_977)
{ /* block id: 274 */
    VECTOR(int32_t, 2) l_706 = (VECTOR(int32_t, 2))(0x020B00F2L, (-2L));
    VECTOR(int64_t, 16) l_711 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 1L), 1L), 1L, 5L, 1L, (VECTOR(int64_t, 2))(5L, 1L), (VECTOR(int64_t, 2))(5L, 1L), 5L, 1L, 5L, 1L);
    uint16_t *l_714 = &p_977->g_80;
    uint16_t *l_715[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(int32_t, 8) l_718 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x0DB1F51BL), 0x0DB1F51BL), 0x0DB1F51BL, 0L, 0x0DB1F51BL);
    VECTOR(int16_t, 16) l_719 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    int16_t *l_723 = (void*)0;
    int16_t *l_724 = &p_977->g_216;
    int32_t ***l_725[1][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint64_t l_726 = 0xF98B3AF13B0F6EF6L;
    int8_t *l_728 = (void*)0;
    int32_t **l_729[1][7];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_729[i][j] = &p_977->g_25;
    }
    (*p_977->g_24) = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_706.yyyy)), 0x5EFA5F04L, (l_706.x ^ l_706.x), 0x7691D343L, 1L)).s5 , (*p_977->g_24));
    return (*p_977->g_24);
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_216 p_977->g_120 p_977->g_156 p_977->g_66 p_977->g_84 p_977->g_71 p_977->g_72 p_977->l_comm_values p_977->g_206 p_977->g_242 p_977->g_236 p_977->g_119 p_977->g_327 p_977->g_67 p_977->g_183 p_977->g_426 p_977->g_428 p_977->g_430 p_977->g_24 p_977->g_25 p_977->g_427 p_977->g_45 p_977->g_19 p_977->g_471 p_977->g_3 p_977->g_187 p_977->g_440 p_977->g_239 p_977->g_312 p_977->g_80 p_977->g_520 p_977->g_568 p_977->g_396 p_977->g_556 p_977->g_667 p_977->g_583 p_977->g_688
 * writes: p_977->g_216 p_977->g_19 p_977->l_comm_values p_977->g_66 p_977->g_84 p_977->g_236 p_977->g_426 p_977->g_431 p_977->g_327 p_977->g_312 p_977->g_25 p_977->g_156 p_977->g_73 p_977->g_165 p_977->g_556 p_977->g_568 p_977->g_152 p_977->g_471 p_977->g_688 p_977->g_702
 */
int32_t * func_11(uint16_t  p_12, int8_t * p_13, int8_t * p_14, int32_t ** p_15, int32_t  p_16, struct S2 * p_977)
{ /* block id: 114 */
    uint32_t l_371[9];
    int32_t *l_387[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    VECTOR(int32_t, 2) l_511 = (VECTOR(int32_t, 2))(0x75F64115L, 8L);
    VECTOR(int32_t, 16) l_534 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x20A3BDE1L), 0x20A3BDE1L), 0x20A3BDE1L, 1L, 0x20A3BDE1L, (VECTOR(int32_t, 2))(1L, 0x20A3BDE1L), (VECTOR(int32_t, 2))(1L, 0x20A3BDE1L), 1L, 0x20A3BDE1L, 1L, 0x20A3BDE1L);
    int32_t l_567 = 0x51C62EC8L;
    uint8_t *l_651 = (void*)0;
    VECTOR(uint32_t, 2) l_668 = (VECTOR(uint32_t, 2))(0UL, 1UL);
    uint16_t l_694 = 65535UL;
    int32_t **l_701 = (void*)0;
    uint32_t l_703 = 0x601DBFDCL;
    int i, j;
    for (i = 0; i < 9; i++)
        l_371[i] = 1UL;
    for (p_977->g_216 = 0; (p_977->g_216 <= (-13)); p_977->g_216--)
    { /* block id: 117 */
        int32_t l_355 = (-1L);
        int32_t l_385 = (-8L);
        VECTOR(int16_t, 16) l_397 = (VECTOR(int16_t, 16))(0x2E1CL, (VECTOR(int16_t, 4))(0x2E1CL, (VECTOR(int16_t, 2))(0x2E1CL, 0x587BL), 0x587BL), 0x587BL, 0x2E1CL, 0x587BL, (VECTOR(int16_t, 2))(0x2E1CL, 0x587BL), (VECTOR(int16_t, 2))(0x2E1CL, 0x587BL), 0x2E1CL, 0x587BL, 0x2E1CL, 0x587BL);
        VECTOR(uint8_t, 4) l_499 = (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 0x72L), 0x72L);
        int8_t l_512[1];
        int32_t l_529 = 0L;
        int32_t l_530 = 9L;
        int32_t l_531 = (-6L);
        int32_t l_533[10] = {0x7B7D5507L,0x6C9180DCL,0x7B7D5507L,0x7B7D5507L,0x6C9180DCL,0x7B7D5507L,0x7B7D5507L,0x6C9180DCL,0x7B7D5507L,0x7B7D5507L};
        int32_t l_540 = 2L;
        uint64_t l_550 = 1UL;
        VECTOR(int8_t, 8) l_562 = (VECTOR(int8_t, 8))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x76L), 0x76L), 0x76L, 5L, 0x76L);
        VECTOR(uint8_t, 16) l_581 = (VECTOR(uint8_t, 16))(0x84L, (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 0UL), 0UL), 0UL, 0x84L, 0UL, (VECTOR(uint8_t, 2))(0x84L, 0UL), (VECTOR(uint8_t, 2))(0x84L, 0UL), 0x84L, 0UL, 0x84L, 0UL);
        VECTOR(uint8_t, 16) l_587 = (VECTOR(uint8_t, 16))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 249UL), 249UL), 249UL, 4UL, 249UL, (VECTOR(uint8_t, 2))(4UL, 249UL), (VECTOR(uint8_t, 2))(4UL, 249UL), 4UL, 249UL, 4UL, 249UL);
        int16_t *l_611 = &p_977->g_195;
        int64_t l_652 = 0x266925E4BAD3356DL;
        uint8_t l_653 = 0x10L;
        VECTOR(int32_t, 8) l_657 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
        VECTOR(int64_t, 16) l_665 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int64_t, 2))(5L, 0L), (VECTOR(int64_t, 2))(5L, 0L), 5L, 0L, 5L, 0L);
        VECTOR(int64_t, 2) l_666 = (VECTOR(int64_t, 2))(4L, 0x35AACDD63868B0E7L);
        VECTOR(uint32_t, 16) l_671 = (VECTOR(uint32_t, 16))(0x5CC4167AL, (VECTOR(uint32_t, 4))(0x5CC4167AL, (VECTOR(uint32_t, 2))(0x5CC4167AL, 0xAEAA22D7L), 0xAEAA22D7L), 0xAEAA22D7L, 0x5CC4167AL, 0xAEAA22D7L, (VECTOR(uint32_t, 2))(0x5CC4167AL, 0xAEAA22D7L), (VECTOR(uint32_t, 2))(0x5CC4167AL, 0xAEAA22D7L), 0x5CC4167AL, 0xAEAA22D7L, 0x5CC4167AL, 0xAEAA22D7L);
        int64_t l_690 = 0L;
        uint32_t l_698 = 0x48AD77E7L;
        int i;
        for (i = 0; i < 1; i++)
            l_512[i] = (-4L);
        for (p_977->g_19 = 0; (p_977->g_19 < (-29)); p_977->g_19 = safe_sub_func_int8_t_s_s(p_977->g_19, 3))
        { /* block id: 120 */
            int64_t *l_356 = (void*)0;
            int64_t *l_357 = (void*)0;
            int64_t *l_358[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_359 = 0L;
            union U0 l_368 = {-1L};
            VECTOR(int64_t, 16) l_384 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int64_t, 2))(2L, (-1L)), (VECTOR(int64_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L));
            int16_t *l_386 = &p_977->g_195;
            VECTOR(int16_t, 8) l_398 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L);
            uint8_t l_415 = 0UL;
            VECTOR(int32_t, 2) l_421 = (VECTOR(int32_t, 2))(0x1F54CB92L, (-1L));
            uint32_t l_464[6][5][3] = {{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}},{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}},{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}},{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}},{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}},{{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL},{4294967287UL,1UL,0UL}}};
            VECTOR(int8_t, 8) l_468 = (VECTOR(int8_t, 8))(0x29L, (VECTOR(int8_t, 4))(0x29L, (VECTOR(int8_t, 2))(0x29L, 0x16L), 0x16L), 0x16L, 0x29L, 0x16L);
            int i, j, k;
            (*p_977->g_156) &= (l_359 = ((l_355 , 0x05E00BF62CDE192AL) != ((p_977->l_comm_values[(safe_mod_func_uint32_t_u_u(p_977->tid, 4))] = p_977->g_120.s0) > 0x660AFEDE6164F1CEL)));
            (*p_977->g_156) = ((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((!(safe_lshift_func_int16_t_s_s(((((((l_368 , (*p_977->g_71)) != p_15) < ((l_385 &= (p_16 | ((~l_371[5]) == (p_977->l_comm_values[(safe_mod_func_uint32_t_u_u(p_977->tid, 4))] , ((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(p_977->g_206.y, (safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((l_355 = (safe_sub_func_uint16_t_u_u(p_977->g_242.s5, (0x53L > l_368.f0)))) | p_977->g_236.s2), p_12)) , l_384.s2), 0x778F879917598C3EL)))), GROUP_DIVERGE(0, 1))), 0x1F81L)) | p_16))))) <= l_371[2])) == p_16) , (-1L)) || 0x4B1FL), p_16))), p_977->g_119.s3)), 10)), 0x048DF695BFBB7BBDL)) , l_386) == l_386) && p_977->g_119.s6);
            (*p_15) = l_387[5][1];
            if (l_355)
            { /* block id: 128 */
                VECTOR(uint16_t, 16) l_395 = (VECTOR(uint16_t, 16))(0xABDBL, (VECTOR(uint16_t, 4))(0xABDBL, (VECTOR(uint16_t, 2))(0xABDBL, 0x4471L), 0x4471L), 0x4471L, 0xABDBL, 0x4471L, (VECTOR(uint16_t, 2))(0xABDBL, 0x4471L), (VECTOR(uint16_t, 2))(0xABDBL, 0x4471L), 0xABDBL, 0x4471L, 0xABDBL, 0x4471L);
                union U0 *l_402 = &l_368;
                uint16_t *l_407[3];
                int8_t *l_408 = (void*)0;
                int8_t *l_409 = (void*)0;
                int32_t l_410 = 0x6C08A8EBL;
                uint32_t l_411 = 9UL;
                uint32_t l_416 = 4294967295UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_407[i] = (void*)0;
                if (l_384.s8)
                    break;
                if (l_385)
                    break;
                if ((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))((safe_lshift_func_int8_t_s_s(0x04L, 5)), ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(p_977->g_392.s3555513424303222)).lo, (uint16_t)(safe_mod_func_int64_t_s_s(p_977->g_235.z, 1L))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_395.se7d03fe3)).hi)))).hi)), ((VECTOR(uint16_t, 2))(65532UL, 65535UL)), ((VECTOR(uint16_t, 2))(0xF2E8L, 0xBA50L)), 9UL)).s90, ((VECTOR(uint16_t, 2))(p_977->g_396.xy))))), ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(l_397.sada4dbc5)).s36, ((VECTOR(int16_t, 4))(l_398.s7404)).lo))))))))).xxyxxyxyxyyxxyxx)))).s35)).yxxyxxxx, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(p_977->g_399.yxxxyxyyxyyxyxyx)).s98b1, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((safe_sub_func_int8_t_s_s((l_410 = ((l_395.s5 , ((*l_402) = l_368)) , (p_977->g_120.s7 & ((safe_mod_func_int8_t_s_s((0x3B4713335AE07524L >= (((safe_add_func_uint16_t_u_u(p_16, (l_359 = l_395.s1))) && p_977->g_206.y) <= l_384.s6)), l_395.sc)) , p_12)))), 9UL)), p_977->g_392.s2, ((VECTOR(uint16_t, 2))(0x4F1CL)), 0UL, 1UL, 0x8A88L, 1UL)).s54)).yyxx, (uint16_t)0x7871L, (uint16_t)p_12))))))))).zzxywxwx))).s07)), ((VECTOR(uint16_t, 2))(65531UL))))).yyxyyyyx, (uint16_t)p_977->g_399.x))).hi, ((VECTOR(uint16_t, 4))(65530UL)), ((VECTOR(uint16_t, 4))(0xF288L))))).hi, (uint16_t)l_411))).xyxy)).ywwxzywz)).s3433546374145754)).s4, 9)))
                { /* block id: 134 */
                    int32_t l_412 = (-7L);
                    l_410 ^= ((l_412 & ((*p_977->g_67) = (l_416 = (safe_add_func_int16_t_s_s(l_415, p_977->g_327.sa))))) & p_12);
                    p_16 ^= p_12;
                    for (p_977->g_66 = 22; (p_977->g_66 == (-23)); p_977->g_66 = safe_sub_func_uint64_t_u_u(p_977->g_66, 9))
                    { /* block id: 141 */
                        int16_t l_422 = 0x5D7BL;
                        l_410 &= ((!p_16) || (p_977->g_236.sf--));
                        l_422 = (p_16 &= ((VECTOR(int32_t, 16))(l_421.yxyyxyxyyyyyyxxx)).s2);
                        return (*p_15);
                    }
                }
                else
                { /* block id: 148 */
                    uint32_t l_423 = 1UL;
                    int64_t **l_429[8] = {&l_358[0],&l_358[0],&l_358[0],&l_358[0],&l_358[0],&l_358[0],&l_358[0],&l_358[0]};
                    int i;
                    l_423--;
                    if ((p_977->g_183 , l_385))
                    { /* block id: 150 */
                        (*p_977->g_428) = p_977->g_426;
                        (*p_977->g_430) = l_429[0];
                        l_410 |= p_12;
                    }
                    else
                    { /* block id: 154 */
                        if (l_415)
                            break;
                    }
                }
            }
            else
            { /* block id: 158 */
                uint64_t *l_432 = (void*)0;
                uint64_t *l_433[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_434 = 0x1222B36DL;
                int32_t l_435 = 0x53FB92E9L;
                int8_t *l_453 = (void*)0;
                int8_t **l_452 = &l_453;
                int8_t ***l_451[9][8] = {{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452},{&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452,&l_452}};
                union U0 l_492 = {-1L};
                VECTOR(uint8_t, 8) l_498 = (VECTOR(uint8_t, 8))(0x7EL, (VECTOR(uint8_t, 4))(0x7EL, (VECTOR(uint8_t, 2))(0x7EL, 0x6BL), 0x6BL), 0x6BL, 0x7EL, 0x6BL);
                int i, j;
                if (((p_977->g_327.s4--) , (safe_add_func_uint32_t_u_u(p_16, 0L))))
                { /* block id: 160 */
                    if ((p_12 <= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_977->g_440.s14)).xxyy)), ((VECTOR(int8_t, 2))(p_977->g_441.xx)).xxxx))).xyywwzxy)).s7))
                    { /* block id: 161 */
                        return (*p_977->g_24);
                    }
                    else
                    { /* block id: 163 */
                        return (*p_977->g_24);
                    }
                }
                else
                { /* block id: 166 */
                    uint32_t l_460[7][9] = {{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL},{0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL,0UL,0UL,0x07CFD74AL,0x0405CDC2L,0x07CFD74AL}};
                    uint32_t l_463 = 5UL;
                    int i, j;
                    (*p_977->g_156) = (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u((0x65F10C5271646CE1L ^ ((p_13 != p_977->g_427) == l_421.x)), 14)))), ((safe_rshift_func_uint8_t_u_s((((&p_977->g_426 == l_451[7][0]) & ((p_977->g_327.s5 ^= (safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_977->group_2_offset, get_group_id(2), 10), (safe_lshift_func_uint8_t_u_s(p_977->g_45.s9, ((safe_add_func_int32_t_s_s(l_460[5][0], (safe_mul_func_uint8_t_u_u(0x5FL, l_463)))) , p_16)))))) > p_977->g_19)) ^ 0UL), l_464[0][0][1])) <= 0xBAL))), 6));
                    (*p_977->g_67) &= 0x14FD7F71L;
                }
                if (p_16)
                    break;
                if ((*p_977->g_156))
                    break;
                for (p_977->g_312 = (-1); (p_977->g_312 <= 26); ++p_977->g_312)
                { /* block id: 175 */
                    uint32_t l_486 = 4294967295UL;
                    p_16 = (((VECTOR(uint64_t, 2))(p_977->g_467.yx)).odd && ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 0x4EL)), 0x37L, l_355, (-2L), ((VECTOR(int8_t, 2))(l_468.s72)), 0x18L)).even)).w | 0x0BL) == (safe_mod_func_int16_t_s_s((p_977->g_471[1] , (func_57(p_16, ((safe_mul_func_int8_t_s_s((p_977->g_66 >= ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_355 ^ l_359), 65531UL)), (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((safe_sub_func_int64_t_s_s((safe_add_func_uint16_t_u_u(65535UL, p_977->g_3)), 18446744073709551607UL)) < p_12) | p_977->g_187.x) & p_977->g_440.s7), 2)), l_486)))) & 0UL)), 0UL)) , l_384.sf), p_977) , 0x75D2L)), p_977->g_84[0][5][2]))));
                    (*p_977->g_156) = (p_16 <= p_12);
                    for (l_486 = 0; (l_486 == 43); l_486 = safe_add_func_uint32_t_u_u(l_486, 8))
                    { /* block id: 180 */
                        int32_t *l_491 = &p_977->g_345;
                        int32_t l_501[7][4] = {{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)},{0x495E2575L,(-1L),0x7C7A7024L,(-1L)}};
                        int i, j;
                        (*p_977->g_156) = (safe_add_func_int32_t_s_s(((void*)0 == (*p_977->g_24)), (((l_501[0][2] = (l_491 == (((l_368 = l_492) , (GROUP_DIVERGE(0, 1) ^ (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(l_486, 0)) <= ((0UL != ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_977->g_497.yxyyyxxyxyyxyyyx)).lo)).s3) < ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 2))(l_498.s17)).xyxxyxxyxyyyyyxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_499.xxwxzxzx)).even)).wzwyyywyzxzwwyww))))).sdc76)))).z)), (!(safe_unary_minus_func_uint64_t_u((((((((*p_977->g_24) != (*p_15)) <= l_501[0][2]) , p_16) == p_977->g_239.y) & 4294967286UL) <= l_397.s7)))))))) , (void*)0))) & FAKE_DIVERGE(p_977->group_2_offset, get_group_id(2), 10)) , (-1L))));
                    }
                }
            }
        }
        for (p_977->g_19 = 0; (p_977->g_19 != 12); ++p_977->g_19)
        { /* block id: 190 */
            uint32_t l_524 = 1UL;
            int32_t l_527 = 0x272BD0FDL;
            int32_t l_535 = 0x346A2E7BL;
            int32_t l_538 = (-4L);
            int32_t l_539 = 0L;
            int32_t l_541 = 0x2CE9C009L;
            int32_t l_542 = 0x1FEA830AL;
            int32_t l_543 = 0x31105A27L;
            int32_t l_544 = (-3L);
            int32_t l_545[2];
            int32_t l_546 = 0x5E046C84L;
            int64_t l_547 = 0L;
            int16_t l_549 = 0x3D0EL;
            uint8_t *l_554[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            VECTOR(uint16_t, 8) l_617 = (VECTOR(uint16_t, 8))(0x37ABL, (VECTOR(uint16_t, 4))(0x37ABL, (VECTOR(uint16_t, 2))(0x37ABL, 65535UL), 65535UL), 65535UL, 0x37ABL, 65535UL);
            int32_t *l_656 = &p_977->g_84[0][5][2];
            uint32_t l_689 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_545[i] = 6L;
            if ((~(-1L)))
            { /* block id: 191 */
                int16_t l_525 = (-2L);
                int32_t l_526[6][4][10] = {{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}},{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}},{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}},{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}},{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}},{{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL},{1L,1L,0x252DE9FCL,0x4CCF9BC4L,0x37FD3CE5L,0x4CCF9BC4L,0x252DE9FCL,1L,1L,0x252DE9FCL}}};
                int64_t l_536 = (-7L);
                uint32_t l_553 = 0x63CD9B7FL;
                VECTOR(uint32_t, 16) l_584 = (VECTOR(uint32_t, 16))(0xC12C6E7FL, (VECTOR(uint32_t, 4))(0xC12C6E7FL, (VECTOR(uint32_t, 2))(0xC12C6E7FL, 4UL), 4UL), 4UL, 0xC12C6E7FL, 4UL, (VECTOR(uint32_t, 2))(0xC12C6E7FL, 4UL), (VECTOR(uint32_t, 2))(0xC12C6E7FL, 4UL), 0xC12C6E7FL, 4UL, 0xC12C6E7FL, 4UL);
                VECTOR(int8_t, 8) l_588 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(int8_t, 4) l_604 = (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x30L), 0x30L);
                int16_t l_626 = 0L;
                int i, j, k;
                if (l_499.x)
                    break;
                if ((safe_div_func_uint8_t_u_u(l_385, p_16)))
                { /* block id: 193 */
                    int32_t *l_513[8];
                    uint32_t l_516 = 0xD05CE4D5L;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_513[i] = &p_977->g_84[2][3][0];
                    for (p_977->g_165 = (-20); (p_977->g_165 > 54); p_977->g_165 = safe_add_func_uint8_t_u_u(p_977->g_165, 4))
                    { /* block id: 196 */
                        uint16_t l_508 = 65535UL;
                        --l_508;
                        l_512[0] = ((VECTOR(int32_t, 4))(l_511.yyxy)).z;
                        if (p_12)
                            break;
                        (*p_977->g_24) = ((*p_15) = l_513[0]);
                    }
                    for (p_977->g_312 = (-19); (p_977->g_312 == 39); p_977->g_312 = safe_add_func_uint16_t_u_u(p_977->g_312, 5))
                    { /* block id: 205 */
                        int16_t *l_519[7][8] = {{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0},{&p_977->g_216,&p_977->g_216,(void*)0,&p_977->g_195,(void*)0,(void*)0,&p_977->g_216,(void*)0}};
                        uint8_t l_521 = 0UL;
                        int32_t l_528 = 0x47F4AB3AL;
                        int32_t l_532[5] = {0x4619E1C5L,0x4619E1C5L,0x4619E1C5L,0x4619E1C5L,0x4619E1C5L};
                        int64_t l_537 = 0x4284C97AB2C5F92DL;
                        int i, j;
                        ++l_516;
                        l_521 |= ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((l_355 |= ((5UL ^ (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 5L)).xyxxxyyx)).s13)).even != 0x9015L)) | p_977->g_80)), 0L, 0x769AL, 0x42B1L)).zzxywxzy)).s54, ((VECTOR(uint16_t, 2))(p_977->g_520.xx))))).hi;
                        l_525 |= (safe_sub_func_uint32_t_u_u(l_355, l_524));
                        l_550--;
                    }
                }
                else
                { /* block id: 212 */
                    int16_t **l_565 = (void*)0;
                    int32_t l_566[6];
                    VECTOR(int16_t, 16) l_591 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-10L)), (-10L)), (-10L), 5L, (-10L), (VECTOR(int16_t, 2))(5L, (-10L)), (VECTOR(int16_t, 2))(5L, (-10L)), 5L, (-10L), 5L, (-10L));
                    int64_t *l_621 = (void*)0;
                    int64_t **l_620 = &l_621;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_566[i] = 4L;
                    if ((l_553 ^= (*p_977->g_67)))
                    { /* block id: 214 */
                        uint8_t **l_555 = (void*)0;
                        uint8_t **l_569 = &p_977->g_568;
                        uint32_t *l_570 = &p_977->g_152;
                        uint32_t **l_598 = &l_570;
                        (*p_977->g_72) = ((((((0xD1C6A020L >= ((p_977->g_556[1][4][3] = l_554[1]) == ((*l_569) = p_977->g_568))) , (-1L)) , 1L) && FAKE_DIVERGE(p_977->group_2_offset, get_group_id(2), 10)) != p_12) , (void*)0);
                        p_16 |= ((*p_977->g_67) = (((*l_570) = (p_12 || 2UL)) >= 0x55A894CFL));
                        (*p_977->g_156) |= l_526[4][3][5];
                        l_526[1][1][6] = ((safe_sub_func_uint64_t_u_u(l_566[4], (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_977->g_216, (l_566[5] , l_546))), ((VECTOR(int32_t, 2))(0L, 0x4EC13F42L)).lo)), ((0x96BDL < (safe_add_func_int16_t_s_s((p_16 && (((VECTOR(uint8_t, 4))(l_581.s2afd)).x | (safe_unary_minus_func_uint32_t_u((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_977->g_583.xyxx)), 2UL, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(l_584.s6d)), (uint32_t)(p_16 , ((safe_mod_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_587.s9f2b)))).wyxyxyxwzxyyxyww)).odd, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(l_588.s53)).xxyyyxyy))).s54, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_591.s1e81237b)))).s7, (((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_int64_t_s_s((((*l_598) = &p_977->g_152) != (void*)0), 0x56BA72419EDF8ED8L)) , 0x22BFB687L), p_977->g_440.s7)), (-6L))) >= p_977->g_152) , p_16))) | 0x6BD034F2E7616E53L), ((VECTOR(uint8_t, 4))(0UL)), 5UL, 0x7BL, 0x84L)).hi)), ((VECTOR(uint8_t, 2))(1UL)), 0xD6L, 0UL)).even)).lo))).xyyxyxyxyxyxyyyy)).s9a)).yxxxyxyy, ((VECTOR(uint8_t, 8))(0UL))))).odd)).x <= l_535), 0x7AL)) > (-1L)))))), 4UL)).s0 , 4294967294UL))))), p_977->g_396.y))) == p_977->g_236.s4))))) | 0x5AAFL);
                    }
                    else
                    { /* block id: 225 */
                        int16_t *l_607[6][1][3] = {{{&l_549,&l_525,&p_977->g_216}},{{&l_549,&l_525,&p_977->g_216}},{{&l_549,&l_525,&p_977->g_216}},{{&l_549,&l_525,&p_977->g_216}},{{&l_549,&l_525,&p_977->g_216}},{{&l_549,&l_525,&p_977->g_216}}};
                        int32_t l_608 = (-1L);
                        int16_t **l_609 = (void*)0;
                        int16_t **l_610 = &l_607[0][0][0];
                        int16_t **l_612 = &l_611;
                        uint64_t *l_622 = (void*)0;
                        uint64_t *l_623 = &l_550;
                        uint64_t l_624 = 0xC341F497C1AA5D36L;
                        int8_t l_625 = 0x55L;
                        int i, j, k;
                        (*p_977->g_156) = (safe_add_func_uint8_t_u_u((((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((((((safe_sub_func_int64_t_s_s((((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(0x11L, (-1L), l_584.sd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(p_977->g_603.s1099)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_604.zywwzyww)), (p_12 == GROUP_DIVERGE(2, 1)), ((VECTOR(int8_t, 4))(1L, (-1L), 1L, 1L)), ((VECTOR(int8_t, 2))(0x5AL, 0L)), (-1L))).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x77L, 1L, 1L, 0x34L)), ((VECTOR(int8_t, 4))((safe_lshift_func_int16_t_s_u((l_608 = 0x5471L), ((((*l_610) = (void*)0) != ((*l_612) = l_611)) >= (((((safe_rshift_func_int8_t_s_s((p_977->g_101.s5 && (((-5L) == 0x62686E5EA604074BL) <= ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_617.s2424662277010532)).lo)).s6, ((((!(((*l_623) = (((((safe_add_func_int16_t_s_s((0x714A716AL || 1L), FAKE_DIVERGE(p_977->group_0_offset, get_group_id(0), 10))) , (void*)0) == l_620) | p_977->g_113.y) < 0UL)) , 0xE4B3221FL)) | 7L) || l_542) | 0x5EB1L))) , l_541))), l_591.s0)) || l_526[1][2][7]) < l_566[4]) >= l_624) & p_977->g_66)))), ((VECTOR(int8_t, 2))(0L)), 0x53L)))), ((VECTOR(int8_t, 8))(0x20L))))).even))).lo)), l_581.sc, l_625, p_12, l_566[4], ((VECTOR(int8_t, 4))((-1L))), l_626, 0x3BL, ((VECTOR(int8_t, 4))(7L)))), ((VECTOR(int8_t, 16))(0x5FL)), ((VECTOR(int8_t, 16))((-9L)))))))).scb)), 0L, 5L, 6L)), ((VECTOR(uint8_t, 8))(0x28L))))).s6 , 1L), 0x17EE04BE2E805D80L)) || GROUP_DIVERGE(2, 1)) & p_16) & l_604.z) , &p_977->g_426) == &p_977->g_426), l_591.sf, 7L, 1L)).zwyywzyw)).s31)).yxxxyxxxyxyxxxyx, ((VECTOR(int16_t, 16))((-1L)))))).s0 & p_12), GROUP_DIVERGE(1, 1)));
                        (*p_977->g_156) = l_625;
                    }
                    if ((atomic_inc(&p_977->l_atomic_input[30]) == 2))
                    { /* block id: 234 */
                        VECTOR(int32_t, 2) l_627 = (VECTOR(int32_t, 2))(0x1EAB0F6EL, 0L);
                        int64_t l_628[9][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                        uint32_t l_629 = 4294967295UL;
                        int16_t l_630 = 1L;
                        int16_t l_631 = 9L;
                        int64_t l_632[10];
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_632[i] = 0x53F0ECF33B594F4BL;
                        l_629 |= (l_628[1][0] = ((VECTOR(int32_t, 2))(l_627.yx)).lo);
                        l_631 = l_630;
                        l_632[6] |= 0x7CF07FDBL;
                        unsigned int result = 0;
                        result += l_627.y;
                        result += l_627.x;
                        int l_628_i0, l_628_i1;
                        for (l_628_i0 = 0; l_628_i0 < 9; l_628_i0++) {
                            for (l_628_i1 = 0; l_628_i1 < 1; l_628_i1++) {
                                result += l_628[l_628_i0][l_628_i1];
                            }
                        }
                        result += l_629;
                        result += l_630;
                        result += l_631;
                        int l_632_i0;
                        for (l_632_i0 = 0; l_632_i0 < 10; l_632_i0++) {
                            result += l_632[l_632_i0];
                        }
                        atomic_add(&p_977->l_special_values[30], result);
                    }
                    else
                    { /* block id: 239 */
                        (1 + 1);
                    }
                    (*p_977->g_24) = (void*)0;
                }
            }
            else
            { /* block id: 244 */
                int64_t *l_639[8][7][4] = {{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}},{{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548},{&p_977->g_548,&p_977->g_548,&l_547,&p_977->g_548}}};
                uint32_t l_654 = 9UL;
                uint8_t **l_655 = &p_977->g_556[1][4][3];
                int8_t *l_672 = (void*)0;
                int8_t *l_673 = (void*)0;
                int8_t *l_674 = &p_977->g_471[1];
                int32_t *l_687[7] = {&p_977->g_688,(void*)0,&p_977->g_688,&p_977->g_688,(void*)0,&p_977->g_688,&p_977->g_688};
                int32_t l_691 = (-1L);
                int i, j, k;
                l_656 = ((((*l_655) = p_977->g_556[1][4][3]) == (void*)0) , (void*)0);
                l_527 ^= (((VECTOR(int32_t, 4))(l_657.s6455)).x < ((*p_977->g_156) = (safe_mod_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(((FAKE_DIVERGE(p_977->group_2_offset, get_group_id(2), 10) & ((safe_mod_func_int16_t_s_s((((((VECTOR(uint8_t, 2))(p_977->g_664.s61)).odd != (l_530 = (4UL && ((*l_674) = (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(l_665.s34c597f716116818)).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_666.xyxyyyxx)))).s7504333351206546)).s7a)).yyyyxxxx))).s4423112436466645)).s9 || (p_977->g_667 , ((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_668.xyyxxxyx)).even)).xxxxxxxw, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 2))(0x37D6E639L, 4294967295UL)).yxxyyyyx)))))).s22, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_977->g_669.xzyyxzxw)).s2013502733107743)).s74e2, ((VECTOR(uint16_t, 8))(0UL, 0x0EB5L, 0xB5D2L, 0x8684L, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(p_977->g_120.s6, 1UL, 0UL, 0xDE0DL)).hi, ((VECTOR(uint16_t, 4))(0x3C39L, ((VECTOR(uint16_t, 2))(p_977->g_670.xz)), 0x6111L)).even))), 0x9922L, 0x18CDL)).odd))).odd)).xyyy, ((VECTOR(uint32_t, 2))(0xDBAF3ED3L, 0xF6E2555DL)).yyyx))).hi)).xxyyxyxy)).s27)).yyyyyxyxxxyxyxyy)).sfe, ((VECTOR(uint32_t, 2))(l_671.s24))))).xyxxxyyy))).s0)))))) >= (safe_sub_func_uint32_t_u_u(p_977->g_583.y, ((((((p_977->g_688 |= (((l_355 ^= 0UL) && (safe_div_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 0x42L))) > (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((l_535 = (p_977->l_comm_values[(safe_mod_func_uint32_t_u_u(p_977->tid, 4))] = l_654)) | (safe_sub_func_uint64_t_u_u(p_16, (!(l_531 &= (safe_mul_func_uint8_t_u_u(l_654, p_977->g_120.s4))))))), p_16)), 3)))) , 0UL) && l_654) > (*p_977->g_156)) == GROUP_DIVERGE(0, 1)) ^ p_12)))) >= 0xD9L), l_689)) , l_512[0])) & l_690), l_654)) || 1L), p_16))));
                l_691 = (*p_977->g_156);
            }
        }
        for (l_550 = 0; (l_550 < 41); l_550 = safe_add_func_uint8_t_u_u(l_550, 1))
        { /* block id: 263 */
            int8_t l_697 = (-3L);
            l_694--;
            p_16 ^= ((*p_977->g_156) = (l_697 = l_530));
        }
        --l_698;
    }
    p_977->g_702 = l_701;
    l_703--;
    return (*p_977->g_24);
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_94 p_977->g_322 p_977->g_327 p_977->g_206 p_977->g_345 p_977->g_67 p_977->g_66 p_977->g_195 p_977->g_84 p_977->g_24 p_977->g_25
 * writes: p_977->g_94 p_977->l_comm_values p_977->g_84 p_977->g_25
 */
int8_t * func_20(int32_t ** p_21, int32_t * p_22, uint64_t  p_23, struct S2 * p_977)
{ /* block id: 104 */
    VECTOR(int32_t, 8) l_315 = (VECTOR(int32_t, 8))(0x68692871L, (VECTOR(int32_t, 4))(0x68692871L, (VECTOR(int32_t, 2))(0x68692871L, 0x5BB40D21L), 0x5BB40D21L), 0x5BB40D21L, 0x68692871L, 0x5BB40D21L);
    VECTOR(int16_t, 2) l_320 = (VECTOR(int16_t, 2))(0x095BL, 0x31A0L);
    VECTOR(int16_t, 16) l_324 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int16_t, 2))((-5L), (-1L)), (VECTOR(int16_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L));
    int32_t l_344 = 1L;
    int8_t *l_348 = (void*)0;
    int i;
    for (p_977->g_94 = 0; (p_977->g_94 <= 40); p_977->g_94++)
    { /* block id: 107 */
        VECTOR(int32_t, 8) l_316 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L), 2L, 1L, 2L);
        VECTOR(int32_t, 4) l_317 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7189A7CEL), 0x7189A7CEL);
        VECTOR(int16_t, 4) l_321 = (VECTOR(int16_t, 4))(0x587EL, (VECTOR(int16_t, 2))(0x587EL, 0x743FL), 0x743FL);
        VECTOR(int16_t, 16) l_323 = (VECTOR(int16_t, 16))(0x52F3L, (VECTOR(int16_t, 4))(0x52F3L, (VECTOR(int16_t, 2))(0x52F3L, 0x60C1L), 0x60C1L), 0x60C1L, 0x52F3L, 0x60C1L, (VECTOR(int16_t, 2))(0x52F3L, 0x60C1L), (VECTOR(int16_t, 2))(0x52F3L, 0x60C1L), 0x52F3L, 0x60C1L, 0x52F3L, 0x60C1L);
        uint8_t *l_336 = (void*)0;
        VECTOR(uint16_t, 16) l_339 = (VECTOR(uint16_t, 16))(0x81A6L, (VECTOR(uint16_t, 4))(0x81A6L, (VECTOR(uint16_t, 2))(0x81A6L, 0x4A17L), 0x4A17L), 0x4A17L, 0x81A6L, 0x4A17L, (VECTOR(uint16_t, 2))(0x81A6L, 0x4A17L), (VECTOR(uint16_t, 2))(0x81A6L, 0x4A17L), 0x81A6L, 0x4A17L, 0x81A6L, 0x4A17L);
        int64_t *l_346 = (void*)0;
        uint64_t *l_347[3];
        int i;
        for (i = 0; i < 3; i++)
            l_347[i] = (void*)0;
        (*p_22) = (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_315.s5154)))).hi)).odd, ((VECTOR(int32_t, 2))(l_316.s42)), 0x369D2669L)).yxzwwwxy)).odd, ((VECTOR(int32_t, 16))(l_317.wwyxzwyyyxwyxzyz)).s947b))).z ^ (safe_add_func_uint32_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x4D5FL, 0x0DFEL)), 0x2103L, (-2L), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_320.xyyy)), ((VECTOR(int16_t, 2))((-3L), 0x05F5L)), 0L, 0x216AL)).hi, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_321.yy)))).yxxy))), ((VECTOR(int16_t, 4))(p_977->g_322.wyxw))))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_323.sd4662b7983b86305)).odd)).s41)), 5L, 0x0F10L, ((VECTOR(int16_t, 4))(l_324.s67ef)), l_321.w, (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(0x08FCC912DBFFE54FL, ((VECTOR(uint64_t, 8))(p_977->g_327.s69d896a5)), 0x84C186C19286BF70L, 0x6DC88F7FE99326B4L, ((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(0x1363L, 9)), ((((safe_mul_func_uint8_t_u_u(0UL, ((safe_lshift_func_int8_t_s_s(0L, ((p_23 = ((FAKE_DIVERGE(p_977->global_1_offset, get_global_id(1), 10) , l_336) == (((safe_add_func_int8_t_s_s(((p_977->l_comm_values[(safe_mod_func_uint32_t_u_u(p_977->tid, 4))] = ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((((!p_977->g_327.sa) < (((VECTOR(uint16_t, 16))(l_339.s665f8747779aa652)).s0 != (safe_mul_func_uint16_t_u_u((+(4294967287UL || (safe_mul_func_uint16_t_u_u(l_344, p_977->g_206.x)))), l_324.s2)))) , 4294967295UL) , p_977->g_94), ((VECTOR(int64_t, 4))(0x51F906271DF8FA97L)), l_324.sf, p_977->g_345, 1L, 0x7A4910D2A02A47BCL, l_315.s1, l_317.w, ((VECTOR(int64_t, 4))(0x375C527FB78395CCL)), 4L)).sb0f0)).zxzyyxyxyyzyzxwz, ((VECTOR(int64_t, 16))((-1L))), ((VECTOR(int64_t, 16))((-7L)))))).sc7, ((VECTOR(int64_t, 2))(7L))))).hi) == l_316.s6), p_23)) == (*p_977->g_67)) , l_336))) & 0x42A2B44F4BF1850EL))) , p_977->g_195))) > (*p_22)) , p_23) <= 0x7768L))) | p_977->g_206.x), 0x16F7F0E821CD0665L, 18446744073709551611UL, 18446744073709551607UL, 0xA954403E67CAE812L)).s2, 0x26EDA2493751AEDEL)), ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x38ADL)), 0x4623L, 0x66BEL)).sa86f))))).s10)).lo < 0xAE2AL), p_977->g_327.sf)));
    }
    (*p_977->g_24) = (*p_977->g_24);
    return l_348;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_230 p_977->g_235 p_977->g_236 p_977->g_239 p_977->g_242 p_977->g_156 p_977->g_66 p_977->g_84 p_977->g_comm_values p_977->g_261 p_977->g_94 p_977->g_120 p_977->g_183.f0 p_977->g_195 p_977->g_80 p_977->g_67 p_977->g_74 p_977->g_281 p_977->g_91 p_977->g_113
 * writes: p_977->g_101 p_977->g_261 p_977->g_94 p_977->g_66 p_977->g_84 p_977->g_120 p_977->g_281 p_977->g_301 p_977->g_312
 */
uint64_t  func_27(int32_t * p_28, uint32_t  p_29, uint32_t  p_30, struct S2 * p_977)
{ /* block id: 82 */
    VECTOR(int64_t, 8) l_229 = (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L));
    VECTOR(int32_t, 2) l_233 = (VECTOR(int32_t, 2))(0x1DC34DCAL, 1L);
    VECTOR(int32_t, 16) l_234 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int32_t, 8) l_237 = (VECTOR(int32_t, 8))(0x49521B49L, (VECTOR(int32_t, 4))(0x49521B49L, (VECTOR(int32_t, 2))(0x49521B49L, 0x7B257F6CL), 0x7B257F6CL), 0x7B257F6CL, 0x49521B49L, 0x7B257F6CL);
    VECTOR(int32_t, 8) l_238 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x77C797FEL), 0x77C797FEL), 0x77C797FEL, (-1L), 0x77C797FEL);
    uint16_t *l_243 = (void*)0;
    uint16_t *l_244 = &p_977->g_94;
    uint8_t *l_245 = (void*)0;
    uint8_t *l_246 = (void*)0;
    uint8_t *l_247 = (void*)0;
    uint8_t *l_248 = (void*)0;
    uint8_t *l_249 = (void*)0;
    uint8_t *l_250 = (void*)0;
    uint8_t *l_251 = (void*)0;
    uint8_t l_258 = 0x29L;
    int32_t l_259 = (-7L);
    int8_t *l_260[7][2][2] = {{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}},{{&p_977->g_19,&p_977->g_19},{&p_977->g_19,&p_977->g_19}}};
    uint32_t *l_271[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    uint8_t *l_278 = &l_258;
    int64_t *l_297 = (void*)0;
    int64_t *l_298 = (void*)0;
    int64_t *l_299 = (void*)0;
    int64_t *l_300[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_304 = 0x07L;
    VECTOR(int64_t, 2) l_305 = (VECTOR(int64_t, 2))(0x66A7898F86669DA2L, 0x40B1C1F84215D6DCL);
    int32_t l_310 = 0x319C6820L;
    int i, j, k;
    (*p_977->g_156) = (((*l_244) &= ((p_977->g_261 |= ((0xB188AD45L > (safe_lshift_func_int8_t_s_s((l_234.sf = (((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_229.s3576336512466564)).sf, p_977->g_230)), ((safe_add_func_int64_t_s_s((((((((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_233.yxyy)).lo, ((VECTOR(int32_t, 16))(l_234.s7372ddea36b09e23)).s6c, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(p_977->g_235.wywyxwzwzwxyxyxz)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_977->g_236.s9f06a350f107726f))))))).s2b93, ((VECTOR(int32_t, 8))(0x40FFAA04L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3376BA76L, (-1L))).yyxy)), 1L, 0x5AD6552CL, 0x39B4082FL)).odd, ((VECTOR(int32_t, 4))(l_237.s4203))))).lo))), l_233.x, 0L, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_238.s0446524133334144)).s84)), 3L)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(p_977->g_239.xy)).xyyxyyxy))).s06)), 0x3F971BCCL, 0x1AE73C09L))))).x , (((l_238.s0 && ((VECTOR(int16_t, 4))(p_977->g_242.s2453)).z) || ((l_243 = l_243) != l_244)) > 4294967288UL)) , (p_977->g_101.s0 = FAKE_DIVERGE(p_977->local_0_offset, get_local_id(0), 10))) == (safe_div_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_229.s4, ((*p_977->g_156) < l_258))) != l_234.s6), p_977->g_comm_values[p_977->tid])) | p_30) ^ l_259), 0x1498L))) || 0x34L) > l_234.s9), 18446744073709551610UL)) != p_30))) & p_30) >= p_29)), 2))) > GROUP_DIVERGE(0, 1))) != p_29)) ^ GROUP_DIVERGE(0, 1));
    if (((safe_unary_minus_func_int8_t_s(p_29)) , ((safe_mod_func_uint64_t_u_u((l_233.x <= ((safe_rshift_func_int8_t_s_s((p_977->g_235.w >= p_30), ((((safe_mul_func_uint16_t_u_u((1UL || (safe_div_func_uint64_t_u_u(((p_977->g_120.s0--) <= ((l_229.s4 & (safe_rshift_func_int8_t_s_s(0L, (l_234.sf = ((safe_sub_func_int64_t_s_s((l_233.x < ((((((((++(*l_278)) != p_977->g_239.x) <= p_977->g_183.f0) , (*p_977->g_156)) >= p_977->g_195) == l_234.s6) < p_29) >= p_977->g_80)), p_29)) <= 0L))))) , (*p_977->g_67))), (-4L)))), l_237.s2)) && l_259) | (-3L)) && p_977->g_74[2]))) >= p_29)), 18446744073709551615UL)) >= (-1L))))
    { /* block id: 92 */
        int16_t ** volatile *l_283 = &p_977->g_281[0];
        (*l_283) = p_977->g_281[0];
    }
    else
    { /* block id: 94 */
        int32_t *l_284 = &p_977->g_84[0][5][2];
        int32_t *l_285[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_286 = 3L;
        VECTOR(int32_t, 8) l_288 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x546AF936L), 0x546AF936L), 0x546AF936L, 7L, 0x546AF936L);
        uint64_t l_289 = 0x31208CAB98B8BB73L;
        uint16_t l_292 = 65535UL;
        int i;
        ++l_289;
        l_292++;
        (*l_284) = p_29;
    }
    (*p_977->g_156) = (*p_977->g_156);
    (*p_977->g_156) |= (((p_977->g_301 = ((safe_lshift_func_int8_t_s_u(l_237.s4, p_29)) >= 0UL)) < (safe_rshift_func_int16_t_s_s(l_304, (l_233.x | (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(0L, 0L)), ((VECTOR(int64_t, 2))(l_305.yx))))), (-9L), 1L)), ((safe_sub_func_uint16_t_u_u(((p_977->g_312 = (0x4B84L & (safe_add_func_int8_t_s_s(((((((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))((-2L), 0x07B0FA2BL, (~(l_310 != (safe_unary_minus_func_uint16_t_u((((0xAAL | GROUP_DIVERGE(0, 1)) < (-1L)) == GROUP_DIVERGE(0, 1)))))), l_229.s6, p_29, l_234.s2, ((VECTOR(int32_t, 8))(0x14A0B1B0L)), 8L, (-1L))).s9915, ((VECTOR(int32_t, 4))(0x0ECFF052L))))).y , p_30) < p_29) || 0x20F3L) | 1UL), 255UL)))) < 1L), p_977->g_91.sd)) >= l_233.x), ((VECTOR(int64_t, 4))((-5L))), p_977->g_113.z, ((VECTOR(int64_t, 2))(0x7A4DF89FAFED6D07L)), 0x0BD7C63EB3C3E4DCL, l_229.s0, 6L, 0x69B2F04D0AE51A94L)).s3 & l_234.s3))))) != p_977->g_183.f0);
    return l_238.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_comm_values p_977->g_19 p_977->g_63 p_977->g_25 p_977->g_3 p_977->g_67 p_977->g_66 p_977->g_71 p_977->g_74 permutations p_977->g_91 p_977->g_80 p_977->g_94 p_977->g_95 p_977->g_101 p_977->g_113 p_977->g_119 p_977->g_120 p_977->g_121 p_977->g_72 p_977->g_73 p_977->g_152 p_977->l_comm_values p_977->g_156 p_977->g_165 p_977->g_121.f0 p_977->g_183 p_977->g_187 p_977->g_206 p_977->g_183.f0 p_977->g_84
 * writes: p_977->g_66 p_977->g_80 p_977->g_94 p_977->g_25 p_977->g_165 permutations p_977->g_73 p_977->g_156 p_977->g_195 p_977->g_216
 */
int32_t * func_31(int32_t  p_32, int32_t ** p_33, int32_t ** p_34, struct S2 * p_977)
{ /* block id: 15 */
    int32_t l_47 = 0x0046BAC6L;
    int32_t l_54 = (-1L);
    int32_t l_184 = 0x59E50C56L;
    VECTOR(uint64_t, 4) l_190 = (VECTOR(uint64_t, 4))(0x2252D0A6261B05F7L, (VECTOR(uint64_t, 2))(0x2252D0A6261B05F7L, 0x341D71C53814E066L), 0x341D71C53814E066L);
    int16_t *l_193 = (void*)0;
    int16_t *l_194 = &p_977->g_195;
    int16_t *l_215 = &p_977->g_216;
    int8_t l_217 = 0x7EL;
    int32_t l_218 = 0L;
    uint16_t *l_219 = &p_977->g_94;
    int64_t l_220 = 0L;
    int32_t *l_221 = (void*)0;
    int32_t *l_222 = &p_977->g_66;
    int i;
    l_184 = ((l_47 , l_47) || (((safe_lshift_func_int16_t_s_s((~(safe_add_func_int16_t_s_s(l_47, (p_32 , p_977->g_comm_values[p_977->tid])))), 6)) < ((((safe_mul_func_int16_t_s_s((l_54 &= (p_977->g_19 , p_32)), ((safe_rshift_func_int8_t_s_u((func_57((func_60(p_32, (p_977->g_63 , l_47), p_977) , p_32), l_47, p_977) , l_47), 1)) , 0x62D8L))) , p_977->g_119.s5) , (void*)0) != p_977->g_72)) && 4294967288UL));
    (*p_34) = (void*)0;
    (*l_222) ^= ((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(0x94L, (((VECTOR(int32_t, 2))(p_977->g_187.yy)).hi == l_47), 255UL, 0x25L)).y, 2)) <= (l_220 = (((*l_219) = (safe_div_func_int32_t_s_s(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_190.zyyxwxxxxyyxzyxz)).s52)), 7UL, 0xE2A4A3F30FDA5712L)).hi)).lo ^ l_190.x) == ((p_32 >= (l_54 ^= ((*l_194) = (safe_mul_func_int16_t_s_s(p_977->g_95.x, 9UL))))) > l_47)), (l_218 = (safe_add_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(l_190.z, (safe_div_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u(l_190.y, (l_184 |= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_977->g_206.xy)).yyyyxyxyyxyxyxxy)).s2))) , (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((*l_215) = (((safe_mul_func_uint16_t_u_u(l_190.w, 0x4399L)) || 6L) || 4294967294UL)), p_977->g_101.s3)) || l_217), p_977->g_183.f0)), p_32))), l_190.z)))) , p_32), p_977->g_84[0][5][2])) <= p_977->g_comm_values[p_977->tid]), 8L)))))) < p_32)));
    return (*p_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_45
 * writes:
 */
int32_t ** func_36(int32_t * p_37, uint32_t  p_38, uint32_t  p_39, int32_t  p_40, uint8_t  p_41, struct S2 * p_977)
{ /* block id: 10 */
    int32_t **l_46 = &p_977->g_25;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_977->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_977->g_45.s9e77)).z, 4)), 10))][(safe_mod_func_uint32_t_u_u(p_977->tid, 4))]));
    return l_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_72 p_977->g_183
 * writes: p_977->g_25 p_977->g_156 p_977->g_73
 */
union U1  func_57(int64_t  p_58, uint16_t  p_59, struct S2 * p_977)
{ /* block id: 65 */
    int32_t **l_171 = &p_977->g_25;
    int32_t **l_172 = &p_977->g_156;
    int32_t l_173 = 0L;
    int32_t *l_174 = &p_977->g_84[0][5][2];
    int32_t *l_175 = &p_977->g_121.f0;
    int32_t *l_176 = &p_977->g_66;
    int32_t *l_177 = &p_977->g_84[0][5][2];
    int32_t *l_178[1][8][5] = {{{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66},{&p_977->g_121.f0,&p_977->g_66,&p_977->g_121.f0,&p_977->g_121.f0,&p_977->g_66}}};
    int16_t l_179 = (-5L);
    uint32_t l_180 = 4294967293UL;
    int i, j, k;
    (*l_172) = ((*l_171) = &p_977->g_84[1][0][1]);
    ++l_180;
    (*p_977->g_72) = (void*)0;
    return p_977->g_183;
}


/* ------------------------------------------ */
/* 
 * reads : p_977->g_25 p_977->g_3 p_977->g_67 p_977->g_66 p_977->g_19 p_977->g_71 p_977->g_74 permutations p_977->g_91 p_977->g_80 p_977->g_94 p_977->g_95 p_977->g_101 p_977->g_113 p_977->g_119 p_977->g_120 p_977->g_121 p_977->g_72 p_977->g_73 p_977->g_152 p_977->l_comm_values p_977->g_156 p_977->g_comm_values p_977->g_165 p_977->g_121.f0
 * writes: p_977->g_66 p_977->g_80 p_977->g_94 p_977->g_25 p_977->g_165 permutations p_977->g_73
 */
uint64_t  func_60(uint32_t  p_61, uint32_t  p_62, struct S2 * p_977)
{ /* block id: 17 */
    int32_t *l_64 = (void*)0;
    int8_t *l_70 = &p_977->g_19;
    uint16_t *l_79 = &p_977->g_80;
    int64_t l_81 = 0x49969097B3892EBBL;
    int32_t *l_82 = &p_977->g_66;
    int32_t *l_83[3];
    int32_t l_85 = 6L;
    VECTOR(uint32_t, 4) l_86 = (VECTOR(uint32_t, 4))(0x5C792442L, (VECTOR(uint32_t, 2))(0x5C792442L, 0x728FC8EEL), 0x728FC8EEL);
    VECTOR(uint32_t, 16) l_88 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xB79F9BF1L), 0xB79F9BF1L), 0xB79F9BF1L, 0UL, 0xB79F9BF1L, (VECTOR(uint32_t, 2))(0UL, 0xB79F9BF1L), (VECTOR(uint32_t, 2))(0UL, 0xB79F9BF1L), 0UL, 0xB79F9BF1L, 0UL, 0xB79F9BF1L);
    VECTOR(int16_t, 16) l_92 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3D1AL), 0x3D1AL), 0x3D1AL, (-8L), 0x3D1AL, (VECTOR(int16_t, 2))((-8L), 0x3D1AL), (VECTOR(int16_t, 2))((-8L), 0x3D1AL), (-8L), 0x3D1AL, (-8L), 0x3D1AL);
    VECTOR(int8_t, 16) l_112 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L), (VECTOR(int8_t, 2))((-1L), (-6L)), (VECTOR(int8_t, 2))((-1L), (-6L)), (-1L), (-6L), (-1L), (-6L));
    int i, j;
    for (i = 0; i < 3; i++)
        l_83[i] = &p_977->g_84[0][5][2];
    (*p_977->g_67) &= (*p_977->g_25);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_977->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x60L, (&p_977->g_19 == l_70), 1L, 0x06L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(0x66L, (-1L), p_977->g_3, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, (((p_61 && (p_977->g_19 || ((*l_79) = (p_977->g_71 == (((safe_rshift_func_uint8_t_u_u(((((-1L) > p_977->g_74[0]) ^ (safe_mod_func_uint8_t_u_u((0x55L && p_61), p_61))) , 0x7CL), p_977->g_19)) & p_977->g_19) , (void*)0))))) != 8L) , l_81), 1L, 4L)))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x27L)), p_977->g_74[4], 9L, ((VECTOR(int8_t, 2))(0x3BL)), 0x6CL)).s4f, ((VECTOR(int8_t, 2))(0x4DL))))), 0x44L, (-8L))).s5722163025547172)).s3554, ((VECTOR(int8_t, 4))((-3L)))))), ((VECTOR(int8_t, 4))((-3L)))))).even)))).xyyxxxxyxxyyxxxx)).sfb, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x5AL))))).xxxyyyxx, ((VECTOR(int8_t, 8))(0x4CL))))).s2651175432146450, (int8_t)p_977->g_3))).s0 , p_61), p_62)), 10))][(safe_mod_func_uint32_t_u_u(p_977->tid, 4))]));
    if ((l_85 = ((*l_82) = permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x60L, (&p_977->g_19 == l_70), 1L, 0x06L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(0x66L, (-1L), p_977->g_3, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, (((p_61 && (p_977->g_19 || ((*l_79) = (p_977->g_71 == (((safe_rshift_func_uint8_t_u_u(((((-1L) > p_977->g_74[0]) ^ (safe_mod_func_uint8_t_u_u((0x55L && p_61), p_61))) , 0x7CL), p_977->g_19)) & p_977->g_19) , (void*)0))))) != 8L) , l_81), 1L, 4L)))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x27L)), p_977->g_74[4], 9L, ((VECTOR(int8_t, 2))(0x3BL)), 0x6CL)).s4f, ((VECTOR(int8_t, 2))(0x4DL))))), 0x44L, (-8L))).s5722163025547172)).s3554, ((VECTOR(int8_t, 4))((-3L)))))), ((VECTOR(int8_t, 4))((-3L)))))).even)))).xyyxxxxyxxyyxxxx)).sfb, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x5AL))))).xxxyyyxx, ((VECTOR(int8_t, 8))(0x4CL))))).s2651175432146450, (int8_t)p_977->g_3))).s0 , p_61), p_62)), 10))][(safe_mod_func_uint32_t_u_u(p_977->tid, 4))])))
    { /* block id: 25 */
        VECTOR(uint32_t, 4) l_87 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL);
        uint16_t *l_93 = &p_977->g_94;
        int32_t l_96 = 8L;
        int i;
        (*l_82) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(l_86.ww)).yxyx, ((VECTOR(uint32_t, 4))(l_87.yyyw))))).xxzxxwyzyywwwwzy, ((VECTOR(uint32_t, 4))(l_88.s73aa)).wwzxywyxzyxxyxxw))).lo)).s6 == (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 2))(p_977->g_91.sa0)), ((VECTOR(int16_t, 2))(l_92.s69)))))))).even, ((*l_79) = ((*l_93) ^= p_977->g_80)))));
        l_96 &= ((VECTOR(int32_t, 2))(p_977->g_95.yy)).even;
    }
    else
    { /* block id: 30 */
        int16_t l_105 = 3L;
        int32_t l_158[6] = {8L,8L,8L,8L,8L,8L};
        uint32_t l_159[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        int64_t *l_164 = (void*)0;
        int32_t l_168 = 0x24FEB152L;
        uint32_t *l_169 = &permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x60L, (&p_977->g_19 == l_70), 1L, 0x06L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(0x66L, (-1L), p_977->g_3, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(0L, (((p_61 && (p_977->g_19 || ((*l_79) = (p_977->g_71 == (((safe_rshift_func_uint8_t_u_u(((((-1L) > p_977->g_74[0]) ^ (safe_mod_func_uint8_t_u_u((0x55L && p_61), p_61))) , 0x7CL), p_977->g_19)) & p_977->g_19) , (void*)0))))) != 8L) , l_81), 1L, 4L)))), ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x27L)), p_977->g_74[4], 9L, ((VECTOR(int8_t, 2))(0x3BL)), 0x6CL)).s4f, ((VECTOR(int8_t, 2))(0x4DL))))), 0x44L, (-8L))).s5722163025547172)).s3554, ((VECTOR(int8_t, 4))((-3L)))))), ((VECTOR(int8_t, 4))((-3L)))))).even)))).xyyxxxxyxxyyxxxx)).sfb, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x5AL))))).xxxyyyxx, ((VECTOR(int8_t, 8))(0x4CL))))).s2651175432146450, (int8_t)p_977->g_3))).s0 , p_61), p_62)), 10))][(safe_mod_func_uint32_t_u_u(p_977->tid, 4))];
        int64_t l_170[9];
        int i;
        for (i = 0; i < 9; i++)
            l_170[i] = (-3L);
        if (((*l_82) |= (*p_977->g_25)))
        { /* block id: 32 */
            int64_t *l_106 = &l_81;
            VECTOR(int8_t, 2) l_109 = (VECTOR(int8_t, 2))(0x6DL, 1L);
            int32_t **l_111 = &l_83[0];
            int32_t ***l_110 = &l_111;
            VECTOR(uint32_t, 16) l_118 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
            int i;
            (*l_82) = ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((+((VECTOR(uint8_t, 4))(p_977->g_101.s2525)).z), (safe_unary_minus_func_uint8_t_u((((*l_106) |= l_105) || ((safe_sub_func_uint64_t_u_u(((((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(l_109.yx)).yxyy, ((VECTOR(int8_t, 4))((-5L), ((VECTOR(int8_t, 2))((-10L), 1L)), 1L)), ((VECTOR(int8_t, 8))((l_110 != (void*)0), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_112.sa2fe6578)).even)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_977->g_113.wyzwxwxw)).s35)), 0x29L)).hi))).x ^ ((safe_lshift_func_int8_t_s_u((*l_82), 5)) > ((*l_82) <= (++(*l_79))))) < ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_118.s95206bb7c98e3433)).sb3)).xyyy, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(4294967292UL, 1UL)).xxxxyyxx, ((VECTOR(uint32_t, 16))(p_977->g_119.s1766776612626775)).even))).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(p_977->g_120.s2524)).odd)).xyxy))).xzxxyxyxzwwzyywy, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))((((**l_110) = &p_977->g_84[0][5][1]) != (p_977->g_121 , (**p_977->g_71))), 0x4BE3DF8CL, 1UL, ((VECTOR(uint32_t, 4))(0xC2794937L)), FAKE_DIVERGE(p_977->group_0_offset, get_group_id(0), 10), GROUP_DIVERGE(2, 1), 0UL, 0UL, 9UL, ((VECTOR(uint32_t, 4))(0xE3A2289BL)))).sd9, ((VECTOR(uint32_t, 2))(6UL))))).yyxxxxyxxyyyyxxx, ((VECTOR(uint32_t, 16))(0x712A7134L))))).s8), 0UL)) != 0x31L)))))), p_977->g_120.s2)) , (*p_977->g_67));
        }
        else
        { /* block id: 37 */
            VECTOR(uint64_t, 4) l_144 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 7UL), 7UL);
            VECTOR(int32_t, 4) l_149 = (VECTOR(int32_t, 4))(0x77328926L, (VECTOR(int32_t, 2))(0x77328926L, 6L), 6L);
            int64_t *l_153 = &l_81;
            int32_t *l_154 = &l_85;
            uint64_t l_155[9][10][1] = {{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}},{{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL},{0x98EEF55B7FEDFDEEL}}};
            int32_t **l_157 = &p_977->g_25;
            int i, j, k;
            for (l_85 = 0; (l_85 == (-8)); --l_85)
            { /* block id: 40 */
                return p_61;
            }
            if ((atomic_inc(&p_977->g_atomic_input[44 * get_linear_group_id() + 10]) == 7))
            { /* block id: 44 */
                union U0 l_124 = {0x04D70BF5L};
                uint16_t l_125 = 0x335FL;
                VECTOR(int32_t, 16) l_126 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L, (VECTOR(int32_t, 2))((-2L), 0L), (VECTOR(int32_t, 2))((-2L), 0L), (-2L), 0L, (-2L), 0L);
                int32_t l_127 = 0x0E76B20CL;
                VECTOR(int8_t, 2) l_128 = (VECTOR(int8_t, 2))(0x7DL, (-1L));
                VECTOR(uint8_t, 4) l_129 = (VECTOR(uint8_t, 4))(0x6BL, (VECTOR(uint8_t, 2))(0x6BL, 3UL), 3UL);
                VECTOR(uint8_t, 4) l_130 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xB7L), 0xB7L);
                VECTOR(int16_t, 2) l_131 = (VECTOR(int16_t, 2))((-8L), 0x7FA2L);
                uint32_t l_132 = 4294967286UL;
                VECTOR(int16_t, 4) l_133 = (VECTOR(int16_t, 4))(0x74BAL, (VECTOR(int16_t, 2))(0x74BAL, 0L), 0L);
                int64_t l_134 = 0x01C8D9E6B8C764DEL;
                int32_t l_135[2];
                int32_t l_136 = 0x2B375827L;
                VECTOR(int16_t, 16) l_137 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7F66L), 0x7F66L), 0x7F66L, 1L, 0x7F66L, (VECTOR(int16_t, 2))(1L, 0x7F66L), (VECTOR(int16_t, 2))(1L, 0x7F66L), 1L, 0x7F66L, 1L, 0x7F66L);
                VECTOR(int16_t, 2) l_138 = (VECTOR(int16_t, 2))(5L, 0x2CC5L);
                VECTOR(int16_t, 16) l_139 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x578BL), 0x578BL), 0x578BL, 1L, 0x578BL, (VECTOR(int16_t, 2))(1L, 0x578BL), (VECTOR(int16_t, 2))(1L, 0x578BL), 1L, 0x578BL, 1L, 0x578BL);
                VECTOR(uint16_t, 2) l_140 = (VECTOR(uint16_t, 2))(0x2FC2L, 0xD6F1L);
                uint32_t l_141 = 4294967288UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_135[i] = 6L;
                l_141 = ((l_124 , l_125) , ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_126.se913)).odd)).yyxxxxxx)).s4615567307277706, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(l_127, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(l_128.xxxyxyyy)), ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(l_129.zywzyzzxywwwwxyy)).s17dd, ((VECTOR(uint8_t, 16))(l_130.xwwzzxzzwxwwxxwx)).scc1b))).zxxxzyyx))).s25)), (-9L), 0x5056L, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(0x3805L, 0x6968L)).xyyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(l_131.yxyy)), (int16_t)l_132))).yzzzxywyxxxyyzyx)).s90bc)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(0x2E77L, 6L)).yyxxxyxy, ((VECTOR(int16_t, 2))(l_133.yx)).xxyxxxxx))).even)), 1L, (l_135[1] = l_134), ((VECTOR(int16_t, 4))(l_136, 1L, 0x39F8L, 7L)), ((VECTOR(int16_t, 4))(l_137.sebc8)), 0L, (-1L))).s1c42))).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_138.xx)).yxyyyyxyxyxyyxxx)).s3d))), ((VECTOR(int16_t, 2))(l_139.sed))))), (-1L))).s1265570702501410, ((VECTOR(uint16_t, 4))(l_140.xxyy)).yyxwyxzxwwyxywzx)))))).se);
                unsigned int result = 0;
                result += l_124.f0;
                result += l_124.f1;
                result += l_125;
                result += l_126.sf;
                result += l_126.se;
                result += l_126.sd;
                result += l_126.sc;
                result += l_126.sb;
                result += l_126.sa;
                result += l_126.s9;
                result += l_126.s8;
                result += l_126.s7;
                result += l_126.s6;
                result += l_126.s5;
                result += l_126.s4;
                result += l_126.s3;
                result += l_126.s2;
                result += l_126.s1;
                result += l_126.s0;
                result += l_127;
                result += l_128.y;
                result += l_128.x;
                result += l_129.w;
                result += l_129.z;
                result += l_129.y;
                result += l_129.x;
                result += l_130.w;
                result += l_130.z;
                result += l_130.y;
                result += l_130.x;
                result += l_131.y;
                result += l_131.x;
                result += l_132;
                result += l_133.w;
                result += l_133.z;
                result += l_133.y;
                result += l_133.x;
                result += l_134;
                int l_135_i0;
                for (l_135_i0 = 0; l_135_i0 < 2; l_135_i0++) {
                    result += l_135[l_135_i0];
                }
                result += l_136;
                result += l_137.sf;
                result += l_137.se;
                result += l_137.sd;
                result += l_137.sc;
                result += l_137.sb;
                result += l_137.sa;
                result += l_137.s9;
                result += l_137.s8;
                result += l_137.s7;
                result += l_137.s6;
                result += l_137.s5;
                result += l_137.s4;
                result += l_137.s3;
                result += l_137.s2;
                result += l_137.s1;
                result += l_137.s0;
                result += l_138.y;
                result += l_138.x;
                result += l_139.sf;
                result += l_139.se;
                result += l_139.sd;
                result += l_139.sc;
                result += l_139.sb;
                result += l_139.sa;
                result += l_139.s9;
                result += l_139.s8;
                result += l_139.s7;
                result += l_139.s6;
                result += l_139.s5;
                result += l_139.s4;
                result += l_139.s3;
                result += l_139.s2;
                result += l_139.s1;
                result += l_139.s0;
                result += l_140.y;
                result += l_140.x;
                result += l_141;
                atomic_add(&p_977->g_special_values[44 * get_linear_group_id() + 10], result);
            }
            else
            { /* block id: 47 */
                (1 + 1);
            }
            (*l_82) = ((l_155[2][0][0] |= (((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))((-3L), 0x5FF1B346L)), (int32_t)(safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 0x5B7FL)), (int32_t)((*l_154) = (0x5AL != ((l_144.w <= (safe_div_func_int64_t_s_s((-8L), 0x3E7945837069AAEBL))) >= (safe_sub_func_uint64_t_u_u(l_105, ((*l_153) = (((VECTOR(int32_t, 8))(l_149.yyzywzyy)).s0 & (((!(safe_mul_func_int8_t_s_s(p_61, p_977->g_3))) != ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x6A3D26EDEA70BF62L, 1L)), l_105, ((VECTOR(int64_t, 4))(0x781079E170EDF9C8L)), ((VECTOR(int64_t, 2))(0x5B9E805CA6D59963L)), ((VECTOR(int64_t, 2))(0x5BF7B98E7B1A3902L)), p_977->g_152, l_105, ((VECTOR(int64_t, 2))(6L)), 0x60F172A51713180AL)).s2) | p_977->l_comm_values[(safe_mod_func_uint32_t_u_u(p_977->tid, 4))]))))))))))).hi , p_977->g_74[4])) || l_105);
            (*l_157) = p_977->g_156;
        }
        ++l_159[6];
        l_170[2] ^= ((p_62 <= (*p_977->g_67)) | ((p_977->g_comm_values[p_977->tid] != ((-6L) ^ (l_158[5] = (l_83[0] == (void*)0)))) & ((*l_169) = (safe_lshift_func_int8_t_s_u((!(((p_977->g_165 &= p_61) == (GROUP_DIVERGE(0, 1) , (((safe_lshift_func_uint16_t_u_u((((void*)0 != &p_977->g_25) < (*l_82)), p_977->g_121.f0)) , p_62) ^ l_159[3]))) , l_168)), 4)))));
        (*p_977->g_72) = (*p_977->g_72);
    }
    (*l_82) |= (**p_977->g_72);
    return p_62;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[44];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 44; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S2 c_978;
    struct S2* p_977 = &c_978;
    struct S2 c_979 = {
        1L, // p_977->g_3
        {{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3},{&p_977->g_3,&p_977->g_3,&p_977->g_3}}, // p_977->g_2
        0x26L, // p_977->g_19
        &p_977->g_3, // p_977->g_25
        &p_977->g_25, // p_977->g_24
        (VECTOR(int8_t, 16))(0x6BL, (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x06L), 0x06L), 0x06L, 0x6BL, 0x06L, (VECTOR(int8_t, 2))(0x6BL, 0x06L), (VECTOR(int8_t, 2))(0x6BL, 0x06L), 0x6BL, 0x06L, 0x6BL, 0x06L), // p_977->g_45
        {-8L}, // p_977->g_63
        0x6C6B039BL, // p_977->g_66
        {&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66,&p_977->g_66}, // p_977->g_65
        &p_977->g_66, // p_977->g_67
        {0x44AADAB7L,0x44AADAB7L,0x44AADAB7L,0x44AADAB7L,0x44AADAB7L}, // p_977->g_74
        &p_977->g_74[4], // p_977->g_73
        &p_977->g_73, // p_977->g_72
        &p_977->g_72, // p_977->g_71
        4UL, // p_977->g_80
        {{{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L}},{{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L}},{{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L},{1L,0x6F8C34F7L,1L}}}, // p_977->g_84
        (VECTOR(int16_t, 16))(0x3EA2L, (VECTOR(int16_t, 4))(0x3EA2L, (VECTOR(int16_t, 2))(0x3EA2L, (-1L)), (-1L)), (-1L), 0x3EA2L, (-1L), (VECTOR(int16_t, 2))(0x3EA2L, (-1L)), (VECTOR(int16_t, 2))(0x3EA2L, (-1L)), 0x3EA2L, (-1L), 0x3EA2L, (-1L)), // p_977->g_91
        0xE5A8L, // p_977->g_94
        (VECTOR(int32_t, 2))((-8L), 0x2327E98EL), // p_977->g_95
        (VECTOR(uint8_t, 8))(0x63L, (VECTOR(uint8_t, 4))(0x63L, (VECTOR(uint8_t, 2))(0x63L, 0x4AL), 0x4AL), 0x4AL, 0x63L, 0x4AL), // p_977->g_101
        (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 1L), 1L), // p_977->g_113
        (VECTOR(uint32_t, 8))(0x78BB94ACL, (VECTOR(uint32_t, 4))(0x78BB94ACL, (VECTOR(uint32_t, 2))(0x78BB94ACL, 0UL), 0UL), 0UL, 0x78BB94ACL, 0UL), // p_977->g_119
        (VECTOR(uint32_t, 8))(0xEE7BA79BL, (VECTOR(uint32_t, 4))(0xEE7BA79BL, (VECTOR(uint32_t, 2))(0xEE7BA79BL, 4294967295UL), 4294967295UL), 4294967295UL, 0xEE7BA79BL, 4294967295UL), // p_977->g_120
        {0x6307DCF4L}, // p_977->g_121
        3UL, // p_977->g_152
        &p_977->g_66, // p_977->g_156
        4294967295UL, // p_977->g_165
        {0x75D9914FL}, // p_977->g_183
        (VECTOR(int32_t, 2))(0x181AEEA3L, (-1L)), // p_977->g_187
        (-1L), // p_977->g_195
        (VECTOR(int8_t, 2))((-3L), 0x1CL), // p_977->g_206
        0x3E68L, // p_977->g_216
        0x5C7AFD339ECAB78EL, // p_977->g_230
        (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), (-7L)), (-7L)), // p_977->g_235
        (VECTOR(uint16_t, 16))(0xF253L, (VECTOR(uint16_t, 4))(0xF253L, (VECTOR(uint16_t, 2))(0xF253L, 0x2358L), 0x2358L), 0x2358L, 0xF253L, 0x2358L, (VECTOR(uint16_t, 2))(0xF253L, 0x2358L), (VECTOR(uint16_t, 2))(0xF253L, 0x2358L), 0xF253L, 0x2358L, 0xF253L, 0x2358L), // p_977->g_236
        (VECTOR(int32_t, 2))(0x1D56DC0CL, 0L), // p_977->g_239
        (VECTOR(int16_t, 8))(0x41B1L, (VECTOR(int16_t, 4))(0x41B1L, (VECTOR(int16_t, 2))(0x41B1L, 0x0F4AL), 0x0F4AL), 0x0F4AL, 0x41B1L, 0x0F4AL), // p_977->g_242
        65529UL, // p_977->g_261
        {(void*)0}, // p_977->g_281
        (void*)0, // p_977->g_282
        0x01F5FF80L, // p_977->g_287
        0x3C109FD4L, // p_977->g_301
        4294967292UL, // p_977->g_312
        (VECTOR(int16_t, 4))(0x2A18L, (VECTOR(int16_t, 2))(0x2A18L, 0x7548L), 0x7548L), // p_977->g_322
        (VECTOR(uint64_t, 16))(0xE489B31BDFF6121DL, (VECTOR(uint64_t, 4))(0xE489B31BDFF6121DL, (VECTOR(uint64_t, 2))(0xE489B31BDFF6121DL, 0UL), 0UL), 0UL, 0xE489B31BDFF6121DL, 0UL, (VECTOR(uint64_t, 2))(0xE489B31BDFF6121DL, 0UL), (VECTOR(uint64_t, 2))(0xE489B31BDFF6121DL, 0UL), 0xE489B31BDFF6121DL, 0UL, 0xE489B31BDFF6121DL, 0UL), // p_977->g_327
        0x482ECCB1L, // p_977->g_345
        (VECTOR(uint16_t, 8))(0x0C6FL, (VECTOR(uint16_t, 4))(0x0C6FL, (VECTOR(uint16_t, 2))(0x0C6FL, 1UL), 1UL), 1UL, 0x0C6FL, 1UL), // p_977->g_392
        (VECTOR(uint16_t, 2))(1UL, 0x8158L), // p_977->g_396
        (VECTOR(uint16_t, 2))(9UL, 0xBF5DL), // p_977->g_399
        (void*)0, // p_977->g_427
        &p_977->g_427, // p_977->g_426
        &p_977->g_426, // p_977->g_428
        (void*)0, // p_977->g_431
        &p_977->g_431, // p_977->g_430
        (VECTOR(int8_t, 8))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 0x2BL), 0x2BL), 0x2BL, 0x47L, 0x2BL), // p_977->g_440
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0L), 0L), // p_977->g_441
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551613UL), // p_977->g_467
        {(-1L),(-1L),(-1L)}, // p_977->g_471
        (VECTOR(uint16_t, 2))(0xD2A1L, 0x54C9L), // p_977->g_497
        (VECTOR(uint16_t, 2))(0x9F92L, 0xB7D5L), // p_977->g_520
        0x539F4500816E08C1L, // p_977->g_548
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_977->g_556
        {4L}, // p_977->g_561
        (void*)0, // p_977->g_568
        (VECTOR(uint32_t, 2))(0x64BB0D00L, 1UL), // p_977->g_583
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x66L), 0x66L), 0x66L, 1L, 0x66L, (VECTOR(int8_t, 2))(1L, 0x66L), (VECTOR(int8_t, 2))(1L, 0x66L), 1L, 0x66L, 1L, 0x66L), // p_977->g_603
        (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967290UL), 4294967290UL), // p_977->g_640
        (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x70L), 0x70L), 0x70L, 5UL, 0x70L), // p_977->g_664
        {6L}, // p_977->g_667
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), // p_977->g_669
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8889L), 0x8889L), // p_977->g_670
        0L, // p_977->g_688
        (void*)0, // p_977->g_702
        (VECTOR(uint16_t, 8))(0x1F4CL, (VECTOR(uint16_t, 4))(0x1F4CL, (VECTOR(uint16_t, 2))(0x1F4CL, 65528UL), 65528UL), 65528UL, 0x1F4CL, 65528UL), // p_977->g_720
        0x30A0L, // p_977->g_727
        (VECTOR(int32_t, 8))(0x4380B12DL, (VECTOR(int32_t, 4))(0x4380B12DL, (VECTOR(int32_t, 2))(0x4380B12DL, 0x47E5C84EL), 0x47E5C84EL), 0x47E5C84EL, 0x4380B12DL, 0x47E5C84EL), // p_977->g_741
        (VECTOR(int64_t, 16))(0x1BB5ECBBE7542C87L, (VECTOR(int64_t, 4))(0x1BB5ECBBE7542C87L, (VECTOR(int64_t, 2))(0x1BB5ECBBE7542C87L, 6L), 6L), 6L, 0x1BB5ECBBE7542C87L, 6L, (VECTOR(int64_t, 2))(0x1BB5ECBBE7542C87L, 6L), (VECTOR(int64_t, 2))(0x1BB5ECBBE7542C87L, 6L), 0x1BB5ECBBE7542C87L, 6L, 0x1BB5ECBBE7542C87L, 6L), // p_977->g_844
        {0L}, // p_977->g_845
        {-1L}, // p_977->g_882
        {{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}},{{0x76C28746L},{0x76C28746L},{-6L},{2L},{0L}}}, // p_977->g_883
        (void*)0, // p_977->g_891
        &p_977->g_891, // p_977->g_890
        (void*)0, // p_977->g_894
        (VECTOR(int32_t, 2))(0x7D214589L, 8L), // p_977->g_909
        (VECTOR(int32_t, 16))(0x5CF3A899L, (VECTOR(int32_t, 4))(0x5CF3A899L, (VECTOR(int32_t, 2))(0x5CF3A899L, 4L), 4L), 4L, 0x5CF3A899L, 4L, (VECTOR(int32_t, 2))(0x5CF3A899L, 4L), (VECTOR(int32_t, 2))(0x5CF3A899L, 4L), 0x5CF3A899L, 4L, 0x5CF3A899L, 4L), // p_977->g_915
        (VECTOR(int32_t, 8))(0x4CA98C42L, (VECTOR(int32_t, 4))(0x4CA98C42L, (VECTOR(int32_t, 2))(0x4CA98C42L, 4L), 4L), 4L, 0x4CA98C42L, 4L), // p_977->g_916
        (VECTOR(int32_t, 16))(0x68898BDDL, (VECTOR(int32_t, 4))(0x68898BDDL, (VECTOR(int32_t, 2))(0x68898BDDL, (-1L)), (-1L)), (-1L), 0x68898BDDL, (-1L), (VECTOR(int32_t, 2))(0x68898BDDL, (-1L)), (VECTOR(int32_t, 2))(0x68898BDDL, (-1L)), 0x68898BDDL, (-1L), 0x68898BDDL, (-1L)), // p_977->g_918
        0x6D0B6495L, // p_977->g_940
        4294967293UL, // p_977->g_943
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6FF1L), 0x6FF1L), 0x6FF1L, (-1L), 0x6FF1L, (VECTOR(int16_t, 2))((-1L), 0x6FF1L), (VECTOR(int16_t, 2))((-1L), 0x6FF1L), (-1L), 0x6FF1L, (-1L), 0x6FF1L), // p_977->g_947
        (VECTOR(int16_t, 8))(0x16C1L, (VECTOR(int16_t, 4))(0x16C1L, (VECTOR(int16_t, 2))(0x16C1L, 0x3F99L), 0x3F99L), 0x3F99L, 0x16C1L, 0x3F99L), // p_977->g_948
        (void*)0, // p_977->g_972
        0x56L, // p_977->g_973
        0, // p_977->v_collective
        sequence_input[get_global_id(0)], // p_977->global_0_offset
        sequence_input[get_global_id(1)], // p_977->global_1_offset
        sequence_input[get_global_id(2)], // p_977->global_2_offset
        sequence_input[get_local_id(0)], // p_977->local_0_offset
        sequence_input[get_local_id(1)], // p_977->local_1_offset
        sequence_input[get_local_id(2)], // p_977->local_2_offset
        sequence_input[get_group_id(0)], // p_977->group_0_offset
        sequence_input[get_group_id(1)], // p_977->group_1_offset
        sequence_input[get_group_id(2)], // p_977->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_977->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_978 = c_979;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_977);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_977->g_3, "p_977->g_3", print_hash_value);
    transparent_crc(p_977->g_19, "p_977->g_19", print_hash_value);
    transparent_crc(p_977->g_45.s0, "p_977->g_45.s0", print_hash_value);
    transparent_crc(p_977->g_45.s1, "p_977->g_45.s1", print_hash_value);
    transparent_crc(p_977->g_45.s2, "p_977->g_45.s2", print_hash_value);
    transparent_crc(p_977->g_45.s3, "p_977->g_45.s3", print_hash_value);
    transparent_crc(p_977->g_45.s4, "p_977->g_45.s4", print_hash_value);
    transparent_crc(p_977->g_45.s5, "p_977->g_45.s5", print_hash_value);
    transparent_crc(p_977->g_45.s6, "p_977->g_45.s6", print_hash_value);
    transparent_crc(p_977->g_45.s7, "p_977->g_45.s7", print_hash_value);
    transparent_crc(p_977->g_45.s8, "p_977->g_45.s8", print_hash_value);
    transparent_crc(p_977->g_45.s9, "p_977->g_45.s9", print_hash_value);
    transparent_crc(p_977->g_45.sa, "p_977->g_45.sa", print_hash_value);
    transparent_crc(p_977->g_45.sb, "p_977->g_45.sb", print_hash_value);
    transparent_crc(p_977->g_45.sc, "p_977->g_45.sc", print_hash_value);
    transparent_crc(p_977->g_45.sd, "p_977->g_45.sd", print_hash_value);
    transparent_crc(p_977->g_45.se, "p_977->g_45.se", print_hash_value);
    transparent_crc(p_977->g_45.sf, "p_977->g_45.sf", print_hash_value);
    transparent_crc(p_977->g_63.f0, "p_977->g_63.f0", print_hash_value);
    transparent_crc(p_977->g_66, "p_977->g_66", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_977->g_74[i], "p_977->g_74[i]", print_hash_value);

    }
    transparent_crc(p_977->g_80, "p_977->g_80", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_977->g_84[i][j][k], "p_977->g_84[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_977->g_91.s0, "p_977->g_91.s0", print_hash_value);
    transparent_crc(p_977->g_91.s1, "p_977->g_91.s1", print_hash_value);
    transparent_crc(p_977->g_91.s2, "p_977->g_91.s2", print_hash_value);
    transparent_crc(p_977->g_91.s3, "p_977->g_91.s3", print_hash_value);
    transparent_crc(p_977->g_91.s4, "p_977->g_91.s4", print_hash_value);
    transparent_crc(p_977->g_91.s5, "p_977->g_91.s5", print_hash_value);
    transparent_crc(p_977->g_91.s6, "p_977->g_91.s6", print_hash_value);
    transparent_crc(p_977->g_91.s7, "p_977->g_91.s7", print_hash_value);
    transparent_crc(p_977->g_91.s8, "p_977->g_91.s8", print_hash_value);
    transparent_crc(p_977->g_91.s9, "p_977->g_91.s9", print_hash_value);
    transparent_crc(p_977->g_91.sa, "p_977->g_91.sa", print_hash_value);
    transparent_crc(p_977->g_91.sb, "p_977->g_91.sb", print_hash_value);
    transparent_crc(p_977->g_91.sc, "p_977->g_91.sc", print_hash_value);
    transparent_crc(p_977->g_91.sd, "p_977->g_91.sd", print_hash_value);
    transparent_crc(p_977->g_91.se, "p_977->g_91.se", print_hash_value);
    transparent_crc(p_977->g_91.sf, "p_977->g_91.sf", print_hash_value);
    transparent_crc(p_977->g_94, "p_977->g_94", print_hash_value);
    transparent_crc(p_977->g_95.x, "p_977->g_95.x", print_hash_value);
    transparent_crc(p_977->g_95.y, "p_977->g_95.y", print_hash_value);
    transparent_crc(p_977->g_101.s0, "p_977->g_101.s0", print_hash_value);
    transparent_crc(p_977->g_101.s1, "p_977->g_101.s1", print_hash_value);
    transparent_crc(p_977->g_101.s2, "p_977->g_101.s2", print_hash_value);
    transparent_crc(p_977->g_101.s3, "p_977->g_101.s3", print_hash_value);
    transparent_crc(p_977->g_101.s4, "p_977->g_101.s4", print_hash_value);
    transparent_crc(p_977->g_101.s5, "p_977->g_101.s5", print_hash_value);
    transparent_crc(p_977->g_101.s6, "p_977->g_101.s6", print_hash_value);
    transparent_crc(p_977->g_101.s7, "p_977->g_101.s7", print_hash_value);
    transparent_crc(p_977->g_113.x, "p_977->g_113.x", print_hash_value);
    transparent_crc(p_977->g_113.y, "p_977->g_113.y", print_hash_value);
    transparent_crc(p_977->g_113.z, "p_977->g_113.z", print_hash_value);
    transparent_crc(p_977->g_113.w, "p_977->g_113.w", print_hash_value);
    transparent_crc(p_977->g_119.s0, "p_977->g_119.s0", print_hash_value);
    transparent_crc(p_977->g_119.s1, "p_977->g_119.s1", print_hash_value);
    transparent_crc(p_977->g_119.s2, "p_977->g_119.s2", print_hash_value);
    transparent_crc(p_977->g_119.s3, "p_977->g_119.s3", print_hash_value);
    transparent_crc(p_977->g_119.s4, "p_977->g_119.s4", print_hash_value);
    transparent_crc(p_977->g_119.s5, "p_977->g_119.s5", print_hash_value);
    transparent_crc(p_977->g_119.s6, "p_977->g_119.s6", print_hash_value);
    transparent_crc(p_977->g_119.s7, "p_977->g_119.s7", print_hash_value);
    transparent_crc(p_977->g_120.s0, "p_977->g_120.s0", print_hash_value);
    transparent_crc(p_977->g_120.s1, "p_977->g_120.s1", print_hash_value);
    transparent_crc(p_977->g_120.s2, "p_977->g_120.s2", print_hash_value);
    transparent_crc(p_977->g_120.s3, "p_977->g_120.s3", print_hash_value);
    transparent_crc(p_977->g_120.s4, "p_977->g_120.s4", print_hash_value);
    transparent_crc(p_977->g_120.s5, "p_977->g_120.s5", print_hash_value);
    transparent_crc(p_977->g_120.s6, "p_977->g_120.s6", print_hash_value);
    transparent_crc(p_977->g_120.s7, "p_977->g_120.s7", print_hash_value);
    transparent_crc(p_977->g_121.f0, "p_977->g_121.f0", print_hash_value);
    transparent_crc(p_977->g_152, "p_977->g_152", print_hash_value);
    transparent_crc(p_977->g_165, "p_977->g_165", print_hash_value);
    transparent_crc(p_977->g_183.f0, "p_977->g_183.f0", print_hash_value);
    transparent_crc(p_977->g_187.x, "p_977->g_187.x", print_hash_value);
    transparent_crc(p_977->g_187.y, "p_977->g_187.y", print_hash_value);
    transparent_crc(p_977->g_195, "p_977->g_195", print_hash_value);
    transparent_crc(p_977->g_206.x, "p_977->g_206.x", print_hash_value);
    transparent_crc(p_977->g_206.y, "p_977->g_206.y", print_hash_value);
    transparent_crc(p_977->g_216, "p_977->g_216", print_hash_value);
    transparent_crc(p_977->g_230, "p_977->g_230", print_hash_value);
    transparent_crc(p_977->g_235.x, "p_977->g_235.x", print_hash_value);
    transparent_crc(p_977->g_235.y, "p_977->g_235.y", print_hash_value);
    transparent_crc(p_977->g_235.z, "p_977->g_235.z", print_hash_value);
    transparent_crc(p_977->g_235.w, "p_977->g_235.w", print_hash_value);
    transparent_crc(p_977->g_236.s0, "p_977->g_236.s0", print_hash_value);
    transparent_crc(p_977->g_236.s1, "p_977->g_236.s1", print_hash_value);
    transparent_crc(p_977->g_236.s2, "p_977->g_236.s2", print_hash_value);
    transparent_crc(p_977->g_236.s3, "p_977->g_236.s3", print_hash_value);
    transparent_crc(p_977->g_236.s4, "p_977->g_236.s4", print_hash_value);
    transparent_crc(p_977->g_236.s5, "p_977->g_236.s5", print_hash_value);
    transparent_crc(p_977->g_236.s6, "p_977->g_236.s6", print_hash_value);
    transparent_crc(p_977->g_236.s7, "p_977->g_236.s7", print_hash_value);
    transparent_crc(p_977->g_236.s8, "p_977->g_236.s8", print_hash_value);
    transparent_crc(p_977->g_236.s9, "p_977->g_236.s9", print_hash_value);
    transparent_crc(p_977->g_236.sa, "p_977->g_236.sa", print_hash_value);
    transparent_crc(p_977->g_236.sb, "p_977->g_236.sb", print_hash_value);
    transparent_crc(p_977->g_236.sc, "p_977->g_236.sc", print_hash_value);
    transparent_crc(p_977->g_236.sd, "p_977->g_236.sd", print_hash_value);
    transparent_crc(p_977->g_236.se, "p_977->g_236.se", print_hash_value);
    transparent_crc(p_977->g_236.sf, "p_977->g_236.sf", print_hash_value);
    transparent_crc(p_977->g_239.x, "p_977->g_239.x", print_hash_value);
    transparent_crc(p_977->g_239.y, "p_977->g_239.y", print_hash_value);
    transparent_crc(p_977->g_242.s0, "p_977->g_242.s0", print_hash_value);
    transparent_crc(p_977->g_242.s1, "p_977->g_242.s1", print_hash_value);
    transparent_crc(p_977->g_242.s2, "p_977->g_242.s2", print_hash_value);
    transparent_crc(p_977->g_242.s3, "p_977->g_242.s3", print_hash_value);
    transparent_crc(p_977->g_242.s4, "p_977->g_242.s4", print_hash_value);
    transparent_crc(p_977->g_242.s5, "p_977->g_242.s5", print_hash_value);
    transparent_crc(p_977->g_242.s6, "p_977->g_242.s6", print_hash_value);
    transparent_crc(p_977->g_242.s7, "p_977->g_242.s7", print_hash_value);
    transparent_crc(p_977->g_261, "p_977->g_261", print_hash_value);
    transparent_crc(p_977->g_287, "p_977->g_287", print_hash_value);
    transparent_crc(p_977->g_301, "p_977->g_301", print_hash_value);
    transparent_crc(p_977->g_312, "p_977->g_312", print_hash_value);
    transparent_crc(p_977->g_322.x, "p_977->g_322.x", print_hash_value);
    transparent_crc(p_977->g_322.y, "p_977->g_322.y", print_hash_value);
    transparent_crc(p_977->g_322.z, "p_977->g_322.z", print_hash_value);
    transparent_crc(p_977->g_322.w, "p_977->g_322.w", print_hash_value);
    transparent_crc(p_977->g_327.s0, "p_977->g_327.s0", print_hash_value);
    transparent_crc(p_977->g_327.s1, "p_977->g_327.s1", print_hash_value);
    transparent_crc(p_977->g_327.s2, "p_977->g_327.s2", print_hash_value);
    transparent_crc(p_977->g_327.s3, "p_977->g_327.s3", print_hash_value);
    transparent_crc(p_977->g_327.s4, "p_977->g_327.s4", print_hash_value);
    transparent_crc(p_977->g_327.s5, "p_977->g_327.s5", print_hash_value);
    transparent_crc(p_977->g_327.s6, "p_977->g_327.s6", print_hash_value);
    transparent_crc(p_977->g_327.s7, "p_977->g_327.s7", print_hash_value);
    transparent_crc(p_977->g_327.s8, "p_977->g_327.s8", print_hash_value);
    transparent_crc(p_977->g_327.s9, "p_977->g_327.s9", print_hash_value);
    transparent_crc(p_977->g_327.sa, "p_977->g_327.sa", print_hash_value);
    transparent_crc(p_977->g_327.sb, "p_977->g_327.sb", print_hash_value);
    transparent_crc(p_977->g_327.sc, "p_977->g_327.sc", print_hash_value);
    transparent_crc(p_977->g_327.sd, "p_977->g_327.sd", print_hash_value);
    transparent_crc(p_977->g_327.se, "p_977->g_327.se", print_hash_value);
    transparent_crc(p_977->g_327.sf, "p_977->g_327.sf", print_hash_value);
    transparent_crc(p_977->g_345, "p_977->g_345", print_hash_value);
    transparent_crc(p_977->g_392.s0, "p_977->g_392.s0", print_hash_value);
    transparent_crc(p_977->g_392.s1, "p_977->g_392.s1", print_hash_value);
    transparent_crc(p_977->g_392.s2, "p_977->g_392.s2", print_hash_value);
    transparent_crc(p_977->g_392.s3, "p_977->g_392.s3", print_hash_value);
    transparent_crc(p_977->g_392.s4, "p_977->g_392.s4", print_hash_value);
    transparent_crc(p_977->g_392.s5, "p_977->g_392.s5", print_hash_value);
    transparent_crc(p_977->g_392.s6, "p_977->g_392.s6", print_hash_value);
    transparent_crc(p_977->g_392.s7, "p_977->g_392.s7", print_hash_value);
    transparent_crc(p_977->g_396.x, "p_977->g_396.x", print_hash_value);
    transparent_crc(p_977->g_396.y, "p_977->g_396.y", print_hash_value);
    transparent_crc(p_977->g_399.x, "p_977->g_399.x", print_hash_value);
    transparent_crc(p_977->g_399.y, "p_977->g_399.y", print_hash_value);
    transparent_crc(p_977->g_440.s0, "p_977->g_440.s0", print_hash_value);
    transparent_crc(p_977->g_440.s1, "p_977->g_440.s1", print_hash_value);
    transparent_crc(p_977->g_440.s2, "p_977->g_440.s2", print_hash_value);
    transparent_crc(p_977->g_440.s3, "p_977->g_440.s3", print_hash_value);
    transparent_crc(p_977->g_440.s4, "p_977->g_440.s4", print_hash_value);
    transparent_crc(p_977->g_440.s5, "p_977->g_440.s5", print_hash_value);
    transparent_crc(p_977->g_440.s6, "p_977->g_440.s6", print_hash_value);
    transparent_crc(p_977->g_440.s7, "p_977->g_440.s7", print_hash_value);
    transparent_crc(p_977->g_441.x, "p_977->g_441.x", print_hash_value);
    transparent_crc(p_977->g_441.y, "p_977->g_441.y", print_hash_value);
    transparent_crc(p_977->g_441.z, "p_977->g_441.z", print_hash_value);
    transparent_crc(p_977->g_441.w, "p_977->g_441.w", print_hash_value);
    transparent_crc(p_977->g_467.x, "p_977->g_467.x", print_hash_value);
    transparent_crc(p_977->g_467.y, "p_977->g_467.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_977->g_471[i], "p_977->g_471[i]", print_hash_value);

    }
    transparent_crc(p_977->g_497.x, "p_977->g_497.x", print_hash_value);
    transparent_crc(p_977->g_497.y, "p_977->g_497.y", print_hash_value);
    transparent_crc(p_977->g_520.x, "p_977->g_520.x", print_hash_value);
    transparent_crc(p_977->g_520.y, "p_977->g_520.y", print_hash_value);
    transparent_crc(p_977->g_548, "p_977->g_548", print_hash_value);
    transparent_crc(p_977->g_561.f0, "p_977->g_561.f0", print_hash_value);
    transparent_crc(p_977->g_583.x, "p_977->g_583.x", print_hash_value);
    transparent_crc(p_977->g_583.y, "p_977->g_583.y", print_hash_value);
    transparent_crc(p_977->g_603.s0, "p_977->g_603.s0", print_hash_value);
    transparent_crc(p_977->g_603.s1, "p_977->g_603.s1", print_hash_value);
    transparent_crc(p_977->g_603.s2, "p_977->g_603.s2", print_hash_value);
    transparent_crc(p_977->g_603.s3, "p_977->g_603.s3", print_hash_value);
    transparent_crc(p_977->g_603.s4, "p_977->g_603.s4", print_hash_value);
    transparent_crc(p_977->g_603.s5, "p_977->g_603.s5", print_hash_value);
    transparent_crc(p_977->g_603.s6, "p_977->g_603.s6", print_hash_value);
    transparent_crc(p_977->g_603.s7, "p_977->g_603.s7", print_hash_value);
    transparent_crc(p_977->g_603.s8, "p_977->g_603.s8", print_hash_value);
    transparent_crc(p_977->g_603.s9, "p_977->g_603.s9", print_hash_value);
    transparent_crc(p_977->g_603.sa, "p_977->g_603.sa", print_hash_value);
    transparent_crc(p_977->g_603.sb, "p_977->g_603.sb", print_hash_value);
    transparent_crc(p_977->g_603.sc, "p_977->g_603.sc", print_hash_value);
    transparent_crc(p_977->g_603.sd, "p_977->g_603.sd", print_hash_value);
    transparent_crc(p_977->g_603.se, "p_977->g_603.se", print_hash_value);
    transparent_crc(p_977->g_603.sf, "p_977->g_603.sf", print_hash_value);
    transparent_crc(p_977->g_640.x, "p_977->g_640.x", print_hash_value);
    transparent_crc(p_977->g_640.y, "p_977->g_640.y", print_hash_value);
    transparent_crc(p_977->g_640.z, "p_977->g_640.z", print_hash_value);
    transparent_crc(p_977->g_640.w, "p_977->g_640.w", print_hash_value);
    transparent_crc(p_977->g_664.s0, "p_977->g_664.s0", print_hash_value);
    transparent_crc(p_977->g_664.s1, "p_977->g_664.s1", print_hash_value);
    transparent_crc(p_977->g_664.s2, "p_977->g_664.s2", print_hash_value);
    transparent_crc(p_977->g_664.s3, "p_977->g_664.s3", print_hash_value);
    transparent_crc(p_977->g_664.s4, "p_977->g_664.s4", print_hash_value);
    transparent_crc(p_977->g_664.s5, "p_977->g_664.s5", print_hash_value);
    transparent_crc(p_977->g_664.s6, "p_977->g_664.s6", print_hash_value);
    transparent_crc(p_977->g_664.s7, "p_977->g_664.s7", print_hash_value);
    transparent_crc(p_977->g_667.f0, "p_977->g_667.f0", print_hash_value);
    transparent_crc(p_977->g_669.x, "p_977->g_669.x", print_hash_value);
    transparent_crc(p_977->g_669.y, "p_977->g_669.y", print_hash_value);
    transparent_crc(p_977->g_669.z, "p_977->g_669.z", print_hash_value);
    transparent_crc(p_977->g_669.w, "p_977->g_669.w", print_hash_value);
    transparent_crc(p_977->g_670.x, "p_977->g_670.x", print_hash_value);
    transparent_crc(p_977->g_670.y, "p_977->g_670.y", print_hash_value);
    transparent_crc(p_977->g_670.z, "p_977->g_670.z", print_hash_value);
    transparent_crc(p_977->g_670.w, "p_977->g_670.w", print_hash_value);
    transparent_crc(p_977->g_688, "p_977->g_688", print_hash_value);
    transparent_crc(p_977->g_720.s0, "p_977->g_720.s0", print_hash_value);
    transparent_crc(p_977->g_720.s1, "p_977->g_720.s1", print_hash_value);
    transparent_crc(p_977->g_720.s2, "p_977->g_720.s2", print_hash_value);
    transparent_crc(p_977->g_720.s3, "p_977->g_720.s3", print_hash_value);
    transparent_crc(p_977->g_720.s4, "p_977->g_720.s4", print_hash_value);
    transparent_crc(p_977->g_720.s5, "p_977->g_720.s5", print_hash_value);
    transparent_crc(p_977->g_720.s6, "p_977->g_720.s6", print_hash_value);
    transparent_crc(p_977->g_720.s7, "p_977->g_720.s7", print_hash_value);
    transparent_crc(p_977->g_727, "p_977->g_727", print_hash_value);
    transparent_crc(p_977->g_741.s0, "p_977->g_741.s0", print_hash_value);
    transparent_crc(p_977->g_741.s1, "p_977->g_741.s1", print_hash_value);
    transparent_crc(p_977->g_741.s2, "p_977->g_741.s2", print_hash_value);
    transparent_crc(p_977->g_741.s3, "p_977->g_741.s3", print_hash_value);
    transparent_crc(p_977->g_741.s4, "p_977->g_741.s4", print_hash_value);
    transparent_crc(p_977->g_741.s5, "p_977->g_741.s5", print_hash_value);
    transparent_crc(p_977->g_741.s6, "p_977->g_741.s6", print_hash_value);
    transparent_crc(p_977->g_741.s7, "p_977->g_741.s7", print_hash_value);
    transparent_crc(p_977->g_844.s0, "p_977->g_844.s0", print_hash_value);
    transparent_crc(p_977->g_844.s1, "p_977->g_844.s1", print_hash_value);
    transparent_crc(p_977->g_844.s2, "p_977->g_844.s2", print_hash_value);
    transparent_crc(p_977->g_844.s3, "p_977->g_844.s3", print_hash_value);
    transparent_crc(p_977->g_844.s4, "p_977->g_844.s4", print_hash_value);
    transparent_crc(p_977->g_844.s5, "p_977->g_844.s5", print_hash_value);
    transparent_crc(p_977->g_844.s6, "p_977->g_844.s6", print_hash_value);
    transparent_crc(p_977->g_844.s7, "p_977->g_844.s7", print_hash_value);
    transparent_crc(p_977->g_844.s8, "p_977->g_844.s8", print_hash_value);
    transparent_crc(p_977->g_844.s9, "p_977->g_844.s9", print_hash_value);
    transparent_crc(p_977->g_844.sa, "p_977->g_844.sa", print_hash_value);
    transparent_crc(p_977->g_844.sb, "p_977->g_844.sb", print_hash_value);
    transparent_crc(p_977->g_844.sc, "p_977->g_844.sc", print_hash_value);
    transparent_crc(p_977->g_844.sd, "p_977->g_844.sd", print_hash_value);
    transparent_crc(p_977->g_844.se, "p_977->g_844.se", print_hash_value);
    transparent_crc(p_977->g_844.sf, "p_977->g_844.sf", print_hash_value);
    transparent_crc(p_977->g_845.f0, "p_977->g_845.f0", print_hash_value);
    transparent_crc(p_977->g_882.f0, "p_977->g_882.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_977->g_883[i][j].f0, "p_977->g_883[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_977->g_909.x, "p_977->g_909.x", print_hash_value);
    transparent_crc(p_977->g_909.y, "p_977->g_909.y", print_hash_value);
    transparent_crc(p_977->g_915.s0, "p_977->g_915.s0", print_hash_value);
    transparent_crc(p_977->g_915.s1, "p_977->g_915.s1", print_hash_value);
    transparent_crc(p_977->g_915.s2, "p_977->g_915.s2", print_hash_value);
    transparent_crc(p_977->g_915.s3, "p_977->g_915.s3", print_hash_value);
    transparent_crc(p_977->g_915.s4, "p_977->g_915.s4", print_hash_value);
    transparent_crc(p_977->g_915.s5, "p_977->g_915.s5", print_hash_value);
    transparent_crc(p_977->g_915.s6, "p_977->g_915.s6", print_hash_value);
    transparent_crc(p_977->g_915.s7, "p_977->g_915.s7", print_hash_value);
    transparent_crc(p_977->g_915.s8, "p_977->g_915.s8", print_hash_value);
    transparent_crc(p_977->g_915.s9, "p_977->g_915.s9", print_hash_value);
    transparent_crc(p_977->g_915.sa, "p_977->g_915.sa", print_hash_value);
    transparent_crc(p_977->g_915.sb, "p_977->g_915.sb", print_hash_value);
    transparent_crc(p_977->g_915.sc, "p_977->g_915.sc", print_hash_value);
    transparent_crc(p_977->g_915.sd, "p_977->g_915.sd", print_hash_value);
    transparent_crc(p_977->g_915.se, "p_977->g_915.se", print_hash_value);
    transparent_crc(p_977->g_915.sf, "p_977->g_915.sf", print_hash_value);
    transparent_crc(p_977->g_916.s0, "p_977->g_916.s0", print_hash_value);
    transparent_crc(p_977->g_916.s1, "p_977->g_916.s1", print_hash_value);
    transparent_crc(p_977->g_916.s2, "p_977->g_916.s2", print_hash_value);
    transparent_crc(p_977->g_916.s3, "p_977->g_916.s3", print_hash_value);
    transparent_crc(p_977->g_916.s4, "p_977->g_916.s4", print_hash_value);
    transparent_crc(p_977->g_916.s5, "p_977->g_916.s5", print_hash_value);
    transparent_crc(p_977->g_916.s6, "p_977->g_916.s6", print_hash_value);
    transparent_crc(p_977->g_916.s7, "p_977->g_916.s7", print_hash_value);
    transparent_crc(p_977->g_918.s0, "p_977->g_918.s0", print_hash_value);
    transparent_crc(p_977->g_918.s1, "p_977->g_918.s1", print_hash_value);
    transparent_crc(p_977->g_918.s2, "p_977->g_918.s2", print_hash_value);
    transparent_crc(p_977->g_918.s3, "p_977->g_918.s3", print_hash_value);
    transparent_crc(p_977->g_918.s4, "p_977->g_918.s4", print_hash_value);
    transparent_crc(p_977->g_918.s5, "p_977->g_918.s5", print_hash_value);
    transparent_crc(p_977->g_918.s6, "p_977->g_918.s6", print_hash_value);
    transparent_crc(p_977->g_918.s7, "p_977->g_918.s7", print_hash_value);
    transparent_crc(p_977->g_918.s8, "p_977->g_918.s8", print_hash_value);
    transparent_crc(p_977->g_918.s9, "p_977->g_918.s9", print_hash_value);
    transparent_crc(p_977->g_918.sa, "p_977->g_918.sa", print_hash_value);
    transparent_crc(p_977->g_918.sb, "p_977->g_918.sb", print_hash_value);
    transparent_crc(p_977->g_918.sc, "p_977->g_918.sc", print_hash_value);
    transparent_crc(p_977->g_918.sd, "p_977->g_918.sd", print_hash_value);
    transparent_crc(p_977->g_918.se, "p_977->g_918.se", print_hash_value);
    transparent_crc(p_977->g_918.sf, "p_977->g_918.sf", print_hash_value);
    transparent_crc(p_977->g_940, "p_977->g_940", print_hash_value);
    transparent_crc(p_977->g_943, "p_977->g_943", print_hash_value);
    transparent_crc(p_977->g_947.s0, "p_977->g_947.s0", print_hash_value);
    transparent_crc(p_977->g_947.s1, "p_977->g_947.s1", print_hash_value);
    transparent_crc(p_977->g_947.s2, "p_977->g_947.s2", print_hash_value);
    transparent_crc(p_977->g_947.s3, "p_977->g_947.s3", print_hash_value);
    transparent_crc(p_977->g_947.s4, "p_977->g_947.s4", print_hash_value);
    transparent_crc(p_977->g_947.s5, "p_977->g_947.s5", print_hash_value);
    transparent_crc(p_977->g_947.s6, "p_977->g_947.s6", print_hash_value);
    transparent_crc(p_977->g_947.s7, "p_977->g_947.s7", print_hash_value);
    transparent_crc(p_977->g_947.s8, "p_977->g_947.s8", print_hash_value);
    transparent_crc(p_977->g_947.s9, "p_977->g_947.s9", print_hash_value);
    transparent_crc(p_977->g_947.sa, "p_977->g_947.sa", print_hash_value);
    transparent_crc(p_977->g_947.sb, "p_977->g_947.sb", print_hash_value);
    transparent_crc(p_977->g_947.sc, "p_977->g_947.sc", print_hash_value);
    transparent_crc(p_977->g_947.sd, "p_977->g_947.sd", print_hash_value);
    transparent_crc(p_977->g_947.se, "p_977->g_947.se", print_hash_value);
    transparent_crc(p_977->g_947.sf, "p_977->g_947.sf", print_hash_value);
    transparent_crc(p_977->g_948.s0, "p_977->g_948.s0", print_hash_value);
    transparent_crc(p_977->g_948.s1, "p_977->g_948.s1", print_hash_value);
    transparent_crc(p_977->g_948.s2, "p_977->g_948.s2", print_hash_value);
    transparent_crc(p_977->g_948.s3, "p_977->g_948.s3", print_hash_value);
    transparent_crc(p_977->g_948.s4, "p_977->g_948.s4", print_hash_value);
    transparent_crc(p_977->g_948.s5, "p_977->g_948.s5", print_hash_value);
    transparent_crc(p_977->g_948.s6, "p_977->g_948.s6", print_hash_value);
    transparent_crc(p_977->g_948.s7, "p_977->g_948.s7", print_hash_value);
    transparent_crc(p_977->g_973, "p_977->g_973", print_hash_value);
    transparent_crc(p_977->v_collective, "p_977->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 44; i++)
            transparent_crc(p_977->g_special_values[i + 44 * get_linear_group_id()], "p_977->g_special_values[i + 44 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 44; i++)
            transparent_crc(p_977->l_special_values[i], "p_977->l_special_values[i]", print_hash_value);
    transparent_crc(p_977->l_comm_values[get_linear_local_id()], "p_977->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_977->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_977->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
