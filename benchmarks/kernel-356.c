// --atomics 80 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 15,85,5 -l 15,1,1
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

__constant uint32_t permutations[10][15] = {
{5,11,4,2,1,13,3,10,9,8,12,7,14,0,6}, // permutation 0
{1,5,11,7,13,4,12,0,10,14,8,6,9,2,3}, // permutation 1
{10,1,12,14,7,5,8,13,3,9,6,0,11,2,4}, // permutation 2
{8,0,9,13,5,2,14,3,1,11,10,6,7,4,12}, // permutation 3
{7,6,12,8,9,2,0,10,11,4,14,3,5,13,1}, // permutation 4
{2,0,7,6,11,12,10,4,14,1,8,9,13,3,5}, // permutation 5
{14,0,9,10,6,1,11,3,8,7,12,4,2,5,13}, // permutation 6
{7,9,4,5,2,11,12,1,14,10,13,6,0,8,3}, // permutation 7
{13,11,9,3,8,1,2,12,14,4,7,6,5,10,0}, // permutation 8
{3,0,14,11,6,9,1,5,4,2,10,7,13,8,12} // permutation 9
};

// Seed: 640689824

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
};

struct S1 {
    int32_t g_15;
    volatile uint32_t g_18;
    VECTOR(int64_t, 2) g_24;
    volatile VECTOR(int64_t, 16) g_34;
    VECTOR(int64_t, 4) g_36;
    uint32_t g_39;
    VECTOR(uint32_t, 2) g_73;
    int32_t *g_85[6][5][3];
    int16_t g_89[10];
    VECTOR(uint8_t, 8) g_95;
    VECTOR(int32_t, 8) g_108;
    VECTOR(int16_t, 16) g_113;
    VECTOR(int16_t, 4) g_114;
    VECTOR(int16_t, 8) g_120;
    int8_t g_189;
    VECTOR(uint8_t, 4) g_216;
    volatile int16_t g_222;
    volatile int16_t *g_221;
    volatile int16_t **g_220;
    int16_t g_234;
    int8_t g_250;
    volatile int64_t g_267;
    volatile int64_t *g_266;
    uint8_t *g_272;
    uint64_t g_286;
    VECTOR(uint16_t, 8) g_345;
    int32_t g_349;
    VECTOR(uint32_t, 2) g_350;
    VECTOR(int8_t, 8) g_373;
    VECTOR(uint8_t, 8) g_421;
    VECTOR(uint32_t, 4) g_430;
    VECTOR(uint32_t, 2) g_432;
    int32_t ** volatile g_456[6][2];
    uint32_t g_461[4][5][2];
    int64_t *g_471;
    uint32_t g_486;
    uint32_t g_488;
    uint16_t g_527;
    volatile uint32_t g_530;
    volatile uint32_t *g_529;
    volatile uint32_t **g_528[3];
    volatile int32_t g_537;
    volatile union U0 g_617;
    uint32_t *g_623;
    uint32_t **g_622;
    uint32_t *** volatile g_621;
    int32_t **g_656[3];
    VECTOR(int8_t, 8) g_745;
    VECTOR(uint16_t, 2) g_760;
    volatile VECTOR(int16_t, 16) g_769;
    volatile VECTOR(int16_t, 8) g_770;
    int8_t *g_781[9];
    uint64_t *** volatile g_783;
    volatile VECTOR(int64_t, 16) g_823;
    VECTOR(uint32_t, 2) g_825;
    int32_t * volatile g_853[10];
    int32_t * volatile g_854;
    int32_t * volatile g_855;
    int64_t **g_865;
    int32_t * volatile *g_892[10][8][2];
    int32_t * volatile **g_891[8][1];
    volatile VECTOR(int32_t, 4) g_895;
    VECTOR(int32_t, 8) g_897;
    VECTOR(int16_t, 8) g_905;
    int8_t **g_915;
    int8_t *** volatile g_914;
    uint32_t g_925;
    int32_t *g_935[4];
    volatile union U0 g_937[3];
    volatile union U0 g_941[1];
    int32_t * volatile g_952;
    int32_t * volatile g_953;
    int32_t ** volatile g_974;
    int64_t g_1006;
    VECTOR(uint8_t, 16) g_1011;
    VECTOR(uint16_t, 8) g_1025;
    VECTOR(uint64_t, 2) g_1026;
    int32_t * volatile g_1047;
    int32_t * volatile g_1048;
    int32_t * volatile g_1049;
    volatile union U0 g_1054[2];
    union U0 g_1058;
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
int32_t  func_1(struct S1 * p_1065);
int32_t  func_2(uint8_t  p_3, uint64_t  p_4, struct S1 * p_1065);
int16_t  func_7(uint32_t  p_8, uint64_t  p_9, int16_t  p_10, struct S1 * p_1065);
uint32_t  func_48(int8_t  p_49, uint32_t  p_50, int16_t  p_51, struct S1 * p_1065);
uint64_t  func_52(uint32_t * p_53, struct S1 * p_1065);
uint32_t * func_54(uint64_t  p_55, uint32_t  p_56, uint32_t * p_57, int16_t  p_58, struct S1 * p_1065);
uint64_t  func_59(uint32_t * p_60, int32_t * p_61, struct S1 * p_1065);
uint32_t * func_62(uint32_t  p_63, int16_t  p_64, int32_t * p_65, uint32_t * p_66, int32_t * p_67, struct S1 * p_1065);
uint32_t * func_69(int32_t * p_70, int32_t * p_71, struct S1 * p_1065);
int32_t * func_74(int8_t  p_75, int32_t  p_76, struct S1 * p_1065);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1065->g_comm_values p_1065->l_comm_values p_1065->g_18 p_1065->g_24 p_1065->g_34 p_1065->g_36 p_1065->g_15 p_1065->g_39 p_1065->g_974 p_1065->g_935 p_1065->g_221 p_1065->g_222 p_1065->g_1006 p_1065->g_267 p_1065->g_865 p_1065->g_1011 p_1065->g_529 p_1065->g_530 p_1065->g_432 p_1065->g_1025 p_1065->g_1026 p_1065->g_73 p_1065->g_421 p_1065->g_925 p_1065->g_220 p_1065->g_189 p_1065->g_95 p_1065->g_114 p_1065->g_120 p_1065->g_108 p_1065->g_89 p_1065->g_266 p_1065->g_113 p_1065->g_272 p_1065->g_216 p_1065->g_234 p_1065->g_250 p_1065->g_905 p_1065->g_1049 p_1065->g_1054 p_1065->g_1058 p_1065->g_825
 * writes: p_1065->g_18 p_1065->g_15 p_1065->g_39 p_1065->g_471 p_1065->g_925 p_1065->g_36 p_1065->g_89 p_1065->g_234 p_1065->g_189 p_1065->g_comm_values p_1065->g_349 p_1065->g_85 p_1065->g_1011 p_1065->g_905 p_1065->g_216 p_1065->g_935
 */
int32_t  func_1(struct S1 * p_1065)
{ /* block id: 4 */
    uint8_t l_13 = 251UL;
    uint32_t *l_38 = &p_1065->g_39;
    int64_t l_40 = 0x2FBAE3B8AEA20016L;
    VECTOR(uint8_t, 2) l_1010 = (VECTOR(uint8_t, 2))(0xC9L, 0x59L);
    VECTOR(int32_t, 2) l_1012 = (VECTOR(int32_t, 2))(9L, 5L);
    uint64_t l_1016[7] = {0xC077808960A58DCCL,0xC077808960A58DCCL,0xC077808960A58DCCL,0xC077808960A58DCCL,0xC077808960A58DCCL,0xC077808960A58DCCL,0xC077808960A58DCCL};
    int8_t l_1028[1];
    uint32_t l_1057 = 0x85D47AC8L;
    uint8_t **l_1063[6][4][6] = {{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}},{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}},{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}},{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}},{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}},{{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272},{&p_1065->g_272,&p_1065->g_272,&p_1065->g_272,(void*)0,(void*)0,&p_1065->g_272}}};
    int32_t l_1064[8][10] = {{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L},{0x5CD9D775L,0L,3L,0L,0x5CD9D775L,0x5CD9D775L,0L,3L,0L,0x5CD9D775L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1028[i] = 0x47L;
    if (func_2(((((*l_38) ^= (safe_lshift_func_uint16_t_u_s(((((VECTOR(int16_t, 2))(0x5BDAL, (-1L))).even == func_7(((safe_rshift_func_uint8_t_u_s(0UL, 1)) < (p_1065->g_comm_values[p_1065->tid] , p_1065->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1065->tid, 15))])), l_13, p_1065->g_comm_values[p_1065->tid], p_1065)) || p_1065->g_15), 14))) || func_7(p_1065->g_34.s1, l_40, l_13, p_1065)) >= p_1065->g_24.y), p_1065->g_24.y, p_1065))
    { /* block id: 388 */
        int64_t *l_1009 = &p_1065->g_1006;
        int64_t **l_1008 = &l_1009;
        int32_t *l_1013 = (void*)0;
        int32_t l_1014 = 0x59113357L;
        l_1012.x = (((~((p_1065->g_267 , ((*p_1065->g_865) = &l_40)) == ((*l_1008) = &p_1065->g_1006))) != ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1010.xx)).xyxyxyyyyyyyxxxx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1065->g_1011.sc89a9c69f2091211)).s28)))).yyxxxxyxyyyxyyxx))).s8) && 0x61L);
        l_1014 = ((~(-6L)) != FAKE_DIVERGE(p_1065->group_2_offset, get_group_id(2), 10));
    }
    else
    { /* block id: 393 */
        int32_t *l_1015[7][1] = {{&p_1065->g_15},{&p_1065->g_15},{&p_1065->g_15},{&p_1065->g_15},{&p_1065->g_15},{&p_1065->g_15},{&p_1065->g_15}};
        int32_t **l_1027 = &p_1065->g_85[2][2][1];
        uint8_t *l_1029 = (void*)0;
        int16_t *l_1030 = &p_1065->g_89[3];
        int16_t *l_1031 = (void*)0;
        int i, j;
        l_1016[4]--;
        l_1012.x = ((*p_1065->g_529) == (p_1065->g_432.x <= (p_1065->g_905.s5 ^= ((*l_1030) = (safe_mod_func_uint8_t_u_u((p_1065->g_1011.s2 = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1065->g_1025.s55140151)).s6, (((&p_1065->g_15 == ((*l_1027) = func_69(l_38, func_69(l_38, (((VECTOR(uint64_t, 2))(p_1065->g_1026.xx)).even , func_54((p_1065->g_73.x > (&p_1065->g_622 == &p_1065->g_622)), l_40, l_1015[4][0], p_1065->g_421.s4, p_1065)), p_1065), p_1065))) <= l_1028[0]) || l_1028[0])))), l_1012.x))))));
    }
    for (p_1065->g_189 = 0; (p_1065->g_189 <= (-9)); p_1065->g_189 = safe_sub_func_int16_t_s_s(p_1065->g_189, 3))
    { /* block id: 403 */
        uint64_t *l_1038 = (void*)0;
        uint64_t **l_1037 = &l_1038;
        uint64_t ***l_1036 = &l_1037;
        uint8_t *l_1041 = (void*)0;
        uint8_t *l_1042 = (void*)0;
        uint8_t *l_1043 = (void*)0;
        int32_t *l_1046 = (void*)0;
        (*p_1065->g_1049) &= (safe_sub_func_uint64_t_u_u(((void*)0 == l_1036), (GROUP_DIVERGE(1, 1) < (safe_mul_func_int16_t_s_s((-8L), ((0L >= (--p_1065->g_216.z)) <= 1L))))));
        (*p_1065->g_974) = l_38;
    }
    l_1012.y = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((p_1065->g_1054[0] , ((safe_lshift_func_uint8_t_u_u(l_1057, (((p_1065->g_1058 , l_1016[5]) | ((((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_mul_func_int16_t_s_s((l_38 == (void*)0), l_1028[0])) == 0x9EE8L))) && (l_1063[4][2][1] == l_1063[4][2][1])) ^ 0L) ^ l_1064[4][2])) == 0x339584DEL))) && (-4L))), FAKE_DIVERGE(p_1065->group_2_offset, get_group_id(2), 10))) > p_1065->g_825.y), l_1012.y));
    return (*p_1065->g_1049);
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_15 p_1065->g_974 p_1065->g_935 p_1065->g_221 p_1065->g_222 p_1065->g_24 p_1065->g_36 p_1065->g_1006
 * writes: p_1065->g_15
 */
int32_t  func_2(uint8_t  p_3, uint64_t  p_4, struct S1 * p_1065)
{ /* block id: 10 */
    VECTOR(uint8_t, 4) l_81 = (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 255UL), 255UL);
    int32_t *l_90[3];
    uint32_t **l_999 = &p_1065->g_623;
    int32_t l_1004 = 6L;
    uint32_t l_1005 = 1UL;
    uint16_t l_1007 = 0xF783L;
    int i;
    for (i = 0; i < 3; i++)
        l_90[i] = &p_1065->g_15;
    for (p_1065->g_15 = 0; (p_1065->g_15 == 2); ++p_1065->g_15)
    { /* block id: 13 */
        int32_t *l_72[6] = {&p_1065->g_15,&p_1065->g_15,&p_1065->g_15,&p_1065->g_15,&p_1065->g_15,&p_1065->g_15};
        VECTOR(uint8_t, 2) l_78 = (VECTOR(uint8_t, 2))(255UL, 0x9BL);
        VECTOR(uint8_t, 16) l_79 = (VECTOR(uint8_t, 16))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0x30L), 0x30L), 0x30L, 0xDEL, 0x30L, (VECTOR(uint8_t, 2))(0xDEL, 0x30L), (VECTOR(uint8_t, 2))(0xDEL, 0x30L), 0xDEL, 0x30L, 0xDEL, 0x30L);
        VECTOR(uint8_t, 16) l_80 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xA0L), 0xA0L), 0xA0L, 1UL, 0xA0L, (VECTOR(uint8_t, 2))(1UL, 0xA0L), (VECTOR(uint8_t, 2))(1UL, 0xA0L), 1UL, 0xA0L, 1UL, 0xA0L);
        int32_t l_979 = 0x14D085D7L;
        int32_t l_990[4][8][8] = {{{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L}},{{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L}},{{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L}},{{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L},{1L,(-9L),(-1L),(-1L),0x17BAACEFL,0x73E17450L,3L,0L}}};
        uint64_t l_991 = 1UL;
        int8_t **l_996 = &p_1065->g_781[1];
        uint32_t **l_1000 = &p_1065->g_623;
        int8_t l_1001 = 0x3FL;
        int8_t *l_1002 = (void*)0;
        int8_t *l_1003[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1003[i] = (void*)0;
        for (p_3 = 2; (p_3 <= 60); p_3 = safe_add_func_int64_t_s_s(p_3, 1))
        { /* block id: 16 */
            int32_t *l_68 = &p_1065->g_15;
            VECTOR(uint8_t, 16) l_77 = (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0xB7L), 0xB7L), 0xB7L, 251UL, 0xB7L, (VECTOR(uint8_t, 2))(251UL, 0xB7L), (VECTOR(uint8_t, 2))(251UL, 0xB7L), 251UL, 0xB7L, 251UL, 0xB7L);
            int32_t *l_82 = (void*)0;
            int32_t **l_83 = (void*)0;
            int32_t **l_84[10][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int16_t *l_88 = &p_1065->g_89[8];
            uint32_t **l_454 = (void*)0;
            uint32_t *l_455[6];
            int i, j;
            for (i = 0; i < 6; i++)
                l_455[i] = (void*)0;
            (1 + 1);
        }
        l_1007 = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(p_4, ((safe_mod_func_int8_t_s_s((p_4 ^ ((void*)0 == &p_1065->g_865)), (l_1005 = (l_1004 &= (safe_add_func_uint16_t_u_u((((l_990[3][0][2] |= (**p_1065->g_974)) , (l_991 > ((safe_lshift_func_int16_t_s_s(((+((safe_rshift_func_uint8_t_u_s((l_996 != (((safe_mod_func_int16_t_s_s(((l_999 != l_1000) , p_4), p_3)) & l_1001) , l_996)), 0)) && 0x239E0F489D9774D9L)) , (*p_1065->g_221)), 0)) ^ p_4))) | p_1065->g_24.x), p_1065->g_36.y)))))) <= p_4))) & 1UL), p_1065->g_1006)), 11));
    }
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_18 p_1065->g_24 p_1065->g_34 p_1065->g_36
 * writes: p_1065->g_18 p_1065->g_15
 */
int16_t  func_7(uint32_t  p_8, uint64_t  p_9, int16_t  p_10, struct S1 * p_1065)
{ /* block id: 5 */
    int32_t *l_14 = &p_1065->g_15;
    int32_t *l_16 = &p_1065->g_15;
    int32_t *l_17[6][5][3] = {{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}},{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}},{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}},{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}},{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}},{{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15},{&p_1065->g_15,(void*)0,&p_1065->g_15}}};
    int32_t *l_21 = &p_1065->g_15;
    int32_t *l_22 = &p_1065->g_15;
    VECTOR(int64_t, 4) l_23 = (VECTOR(int64_t, 4))(0x7E65FBC01D4C3F12L, (VECTOR(int64_t, 2))(0x7E65FBC01D4C3F12L, 0x2059515ED761E7FFL), 0x2059515ED761E7FFL);
    VECTOR(int64_t, 8) l_25 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L));
    VECTOR(int64_t, 4) l_26 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L));
    VECTOR(int64_t, 2) l_27 = (VECTOR(int64_t, 2))(1L, 0L);
    VECTOR(int64_t, 16) l_28 = (VECTOR(int64_t, 16))(0x6D6D23037D9CC132L, (VECTOR(int64_t, 4))(0x6D6D23037D9CC132L, (VECTOR(int64_t, 2))(0x6D6D23037D9CC132L, 1L), 1L), 1L, 0x6D6D23037D9CC132L, 1L, (VECTOR(int64_t, 2))(0x6D6D23037D9CC132L, 1L), (VECTOR(int64_t, 2))(0x6D6D23037D9CC132L, 1L), 0x6D6D23037D9CC132L, 1L, 0x6D6D23037D9CC132L, 1L);
    VECTOR(int64_t, 4) l_29 = (VECTOR(int64_t, 4))(0x18188558B047C147L, (VECTOR(int64_t, 2))(0x18188558B047C147L, 1L), 1L);
    VECTOR(int64_t, 16) l_30 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int64_t, 2))(0L, 5L), (VECTOR(int64_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
    VECTOR(int64_t, 4) l_31 = (VECTOR(int64_t, 4))(0x6DF81F9D3F58F29AL, (VECTOR(int64_t, 2))(0x6DF81F9D3F58F29AL, (-1L)), (-1L));
    VECTOR(int64_t, 16) l_32 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int64_t, 2))(0L, (-4L)), (VECTOR(int64_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L));
    VECTOR(int64_t, 2) l_33 = (VECTOR(int64_t, 2))(0x39E0795B172C66C3L, (-2L));
    VECTOR(int64_t, 2) l_35 = (VECTOR(int64_t, 2))((-6L), 6L);
    VECTOR(int64_t, 2) l_37 = (VECTOR(int64_t, 2))((-10L), 1L);
    int i, j, k;
    ++p_1065->g_18;
    (*l_21) = (((l_21 != l_22) ^ 0x81606DC068927649L) && (p_9 && ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(p_9, ((VECTOR(int64_t, 8))((-4L), ((VECTOR(int64_t, 4))(l_23.yyxx)), ((VECTOR(int64_t, 2))(p_1065->g_24.yx)), 0x59F32F520A048C84L)), ((VECTOR(int64_t, 2))(0x37DC4B54C5F6B4ABL, (-2L))), ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(l_25.s1415556064750241)).s22e7, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(0x7ECEB2CFB11589A4L, 9L)).xyyxyxyyyyyxyyyy, ((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 2))(l_26.zz)).yxyyyyxyyxyxyxyy, ((VECTOR(int64_t, 2))(l_27.xx)).xyyxxxxxxyxxxyyx))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_28.s1779538e)), ((VECTOR(int64_t, 4))(l_29.zxwy)), 0x7E1EFC39FA237FF9L, 0x6FAB77C19C50ED6CL, 0x38DBEC8B24CEC8E4L, 0x6CA37EAD942A26B1L)))).even)).s1226335653575444))).sfe37, ((VECTOR(int64_t, 2))(l_30.s01)).yyyx, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(l_31.zwzw)).lo, ((VECTOR(int64_t, 2))(l_32.sf4)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_33.yyxxxxxx)).s1150235444467744)).s3a))).yxyx)))))), 0x43C1A33FE8F1E0EFL)).s155d, ((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))(p_1065->g_34.s7c)).yyyxxyxx, ((VECTOR(int64_t, 16))(l_35.yyxyxyyyxxyyyxyy)).odd))).lo, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(p_1065->g_36.yzzxyzzy)), ((VECTOR(int64_t, 4))(l_37.xyyy)).wxwxwwzw))).s75)).yxxy))).z));
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_974 p_1065->g_529 p_1065->g_530
 * writes: p_1065->g_935
 */
uint32_t  func_48(int8_t  p_49, uint32_t  p_50, int16_t  p_51, struct S1 * p_1065)
{ /* block id: 370 */
    int64_t l_947 = (-6L);
    int32_t *l_950 = (void*)0;
    int32_t *l_951 = (void*)0;
    int32_t *l_954 = (void*)0;
    int32_t *l_955 = (void*)0;
    int32_t l_956 = 0x58A8062BL;
    VECTOR(int16_t, 4) l_961 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, (-8L)), (-8L));
    uint8_t *l_962 = (void*)0;
    VECTOR(int16_t, 4) l_963 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 5L), 5L);
    uint32_t **l_964[1][4][8] = {{{&p_1065->g_623,&p_1065->g_623,&p_1065->g_623,(void*)0,(void*)0,&p_1065->g_623,(void*)0,&p_1065->g_623},{&p_1065->g_623,&p_1065->g_623,&p_1065->g_623,(void*)0,(void*)0,&p_1065->g_623,(void*)0,&p_1065->g_623},{&p_1065->g_623,&p_1065->g_623,&p_1065->g_623,(void*)0,(void*)0,&p_1065->g_623,(void*)0,&p_1065->g_623},{&p_1065->g_623,&p_1065->g_623,&p_1065->g_623,(void*)0,(void*)0,&p_1065->g_623,(void*)0,&p_1065->g_623}}};
    int8_t *l_967 = (void*)0;
    int8_t **l_968 = &p_1065->g_781[0];
    int8_t *l_969[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    uint16_t l_970 = 4UL;
    int8_t l_971 = 0x7FL;
    uint16_t l_972 = 65534UL;
    int32_t *l_973 = &p_1065->g_15;
    int32_t *l_975[2];
    uint16_t l_976[10] = {0xD582L,0x17A9L,0xD582L,0xD582L,0x17A9L,0xD582L,0xD582L,0x17A9L,0xD582L,0xD582L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_975[i] = (void*)0;
    l_947 &= p_50;
    l_956 = (safe_mul_func_int8_t_s_s(l_947, FAKE_DIVERGE(p_1065->local_1_offset, get_local_id(1), 10)));
    (*p_1065->g_974) = l_973;
    l_976[8]--;
    return (*p_1065->g_529);
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_250 p_1065->g_897 p_1065->g_937 p_1065->g_925 p_1065->g_941 p_1065->g_36 p_1065->g_421 p_1065->g_905
 * writes: p_1065->g_250 p_1065->g_85
 */
uint64_t  func_52(uint32_t * p_53, struct S1 * p_1065)
{ /* block id: 361 */
    int32_t *l_936[1];
    VECTOR(uint8_t, 2) l_938 = (VECTOR(uint8_t, 2))(1UL, 2UL);
    uint64_t l_942[10] = {0x3461B4E598885926L,0x5A36318A2FE0D069L,0x3461B4E598885926L,0x3461B4E598885926L,0x5A36318A2FE0D069L,0x3461B4E598885926L,0x3461B4E598885926L,0x5A36318A2FE0D069L,0x3461B4E598885926L,0x3461B4E598885926L};
    int8_t l_943 = 0x39L;
    int8_t l_944 = 0x0AL;
    int32_t l_945 = 0x27065DB8L;
    int16_t l_946 = 0x6262L;
    int i;
    for (i = 0; i < 1; i++)
        l_936[i] = &p_1065->g_15;
    for (p_1065->g_250 = 0; (p_1065->g_250 == (-1)); p_1065->g_250--)
    { /* block id: 364 */
        int32_t *l_932[9][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t **l_933 = &p_1065->g_85[2][2][1];
        VECTOR(uint32_t, 4) l_934 = (VECTOR(uint32_t, 4))(0x6F033603L, (VECTOR(uint32_t, 2))(0x6F033603L, 0x342B99EDL), 0x342B99EDL);
        int i, j, k;
        (*l_933) = l_932[5][2][4];
        (*l_933) = l_936[0];
    }
    l_945 = (((((p_1065->g_897.s3 >= ((p_1065->g_937[1] , (((((0xCEL && (!((-1L) || (*p_53)))) && ((-5L) >= (-1L))) > ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(l_938.xyyxyxyy)).odd, (uint8_t)((safe_rshift_func_uint16_t_u_s((p_1065->g_941[0] , (p_1065->g_36.y >= p_1065->g_421.s7)), p_1065->g_905.s4)) >= 0xC6E7B5A7L)))).z) | 0x71743F871533E8E2L) <= 0L)) && l_942[6])) & l_943) <= GROUP_DIVERGE(0, 1)) | l_944) , 0L);
    return l_946;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_925 p_1065->g_36
 * writes: p_1065->g_925 p_1065->g_36
 */
uint32_t * func_54(uint64_t  p_55, uint32_t  p_56, uint32_t * p_57, int16_t  p_58, struct S1 * p_1065)
{ /* block id: 355 */
    int32_t l_917 = 0x0FCBB9AEL;
    int32_t *l_918[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    uint8_t l_919 = 0UL;
    VECTOR(int8_t, 2) l_923 = (VECTOR(int8_t, 2))(0x2DL, 0x23L);
    int8_t *l_924[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int64_t *l_926 = (void*)0;
    int64_t *l_927 = (void*)0;
    int64_t *l_928[6][3][1];
    int32_t l_929 = 0L;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_928[i][j][k] = (void*)0;
        }
    }
    l_919 |= l_917;
    l_929 = (!(safe_sub_func_int32_t_s_s(p_55, (p_58 | (p_1065->g_36.y |= (safe_unary_minus_func_int8_t_s((p_1065->g_925 &= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_923.xx)).xxxyyxxy)).odd)).z))))))));
    return &p_1065->g_925;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_617.f0 p_1065->g_95 p_1065->g_114 p_1065->g_266 p_1065->g_267 p_1065->g_15 p_1065->g_189 p_1065->g_656 p_1065->g_221 p_1065->g_222 p_1065->g_24 p_1065->g_113 p_1065->g_39 p_1065->g_36 p_1065->g_89 p_1065->g_527 p_1065->g_250 p_1065->g_745 p_1065->g_120 p_1065->g_216 p_1065->g_220 p_1065->g_823 p_1065->g_825 p_1065->g_comm_values p_1065->g_865 p_1065->g_529 p_1065->g_530 p_1065->g_421 p_1065->g_891 p_1065->g_73 p_1065->g_108 p_1065->g_432 p_1065->g_895 p_1065->g_897 p_1065->g_905 p_1065->g_488 p_1065->g_914
 * writes: p_1065->g_95 p_1065->g_114 p_1065->g_73 p_1065->g_39 p_1065->g_286 p_1065->g_527 p_1065->g_781 p_1065->g_623 p_1065->g_216 p_1065->g_656 p_1065->g_36 p_1065->g_comm_values p_1065->g_865 p_1065->g_915
 */
uint64_t  func_59(uint32_t * p_60, int32_t * p_61, struct S1 * p_1065)
{ /* block id: 259 */
    int64_t l_624 = 0x13B51406576477D6L;
    uint8_t *l_631 = (void*)0;
    uint64_t *l_632 = &p_1065->g_286;
    VECTOR(uint64_t, 4) l_638 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL);
    VECTOR(uint64_t, 4) l_639 = (VECTOR(uint64_t, 4))(0x9B95536B5959F4DEL, (VECTOR(uint64_t, 2))(0x9B95536B5959F4DEL, 18446744073709551615UL), 18446744073709551615UL);
    int32_t *l_646[3][8][5] = {{{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349}},{{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349}},{{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349}}};
    int16_t *l_647[8];
    int16_t l_648 = 0x7D59L;
    int32_t l_684 = 1L;
    int32_t l_687 = (-7L);
    uint32_t l_688 = 1UL;
    int32_t l_690 = 0x673FEB23L;
    VECTOR(uint16_t, 4) l_700 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 4UL), 4UL);
    int8_t l_701 = 0x0FL;
    int32_t l_712 = (-1L);
    int32_t l_715[2];
    VECTOR(uint8_t, 16) l_793 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xDDL), 0xDDL), 0xDDL, 255UL, 0xDDL, (VECTOR(uint8_t, 2))(255UL, 0xDDL), (VECTOR(uint8_t, 2))(255UL, 0xDDL), 255UL, 0xDDL, 255UL, 0xDDL);
    int16_t l_826[10][4][6] = {{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}},{{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L},{0x41EAL,0x48EEL,0L,0L,0x6F2BL,4L}}};
    VECTOR(int64_t, 8) l_829 = (VECTOR(int64_t, 8))(0x705FAFB1BC4ED376L, (VECTOR(int64_t, 4))(0x705FAFB1BC4ED376L, (VECTOR(int64_t, 2))(0x705FAFB1BC4ED376L, 1L), 1L), 1L, 0x705FAFB1BC4ED376L, 1L);
    int64_t l_846 = 0L;
    int64_t l_847 = 0x49B23760E449E749L;
    int32_t l_848 = 0x3B89269BL;
    uint8_t l_849 = 0xC7L;
    int8_t l_852 = 0x2EL;
    VECTOR(int8_t, 2) l_857 = (VECTOR(int8_t, 2))(0x4BL, 0L);
    VECTOR(uint16_t, 2) l_860 = (VECTOR(uint16_t, 2))(1UL, 0x51FEL);
    int64_t ***l_866[4][5] = {{&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865},{&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865},{&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865},{&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865,&p_1065->g_865}};
    VECTOR(uint32_t, 16) l_873 = (VECTOR(uint32_t, 16))(0x3CAD5F65L, (VECTOR(uint32_t, 4))(0x3CAD5F65L, (VECTOR(uint32_t, 2))(0x3CAD5F65L, 0xB01C8415L), 0xB01C8415L), 0xB01C8415L, 0x3CAD5F65L, 0xB01C8415L, (VECTOR(uint32_t, 2))(0x3CAD5F65L, 0xB01C8415L), (VECTOR(uint32_t, 2))(0x3CAD5F65L, 0xB01C8415L), 0x3CAD5F65L, 0xB01C8415L, 0x3CAD5F65L, 0xB01C8415L);
    uint8_t *l_878 = (void*)0;
    uint8_t *l_879[6][8][4] = {{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}},{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}},{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}},{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}},{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}},{{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849},{(void*)0,(void*)0,&l_849,&l_849}}};
    int8_t *l_888[8][1];
    int32_t **l_890 = &p_1065->g_85[3][2][1];
    int32_t ***l_889 = &l_890;
    VECTOR(int32_t, 2) l_893 = (VECTOR(int32_t, 2))(0x03F55B28L, 0x2DFE173DL);
    VECTOR(int32_t, 16) l_894 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L), 6L, 1L, 6L, (VECTOR(int32_t, 2))(1L, 6L), (VECTOR(int32_t, 2))(1L, 6L), 1L, 6L, 1L, 6L);
    VECTOR(int32_t, 8) l_896 = (VECTOR(int32_t, 8))(0x23923CA6L, (VECTOR(int32_t, 4))(0x23923CA6L, (VECTOR(int32_t, 2))(0x23923CA6L, 9L), 9L), 9L, 0x23923CA6L, 9L);
    VECTOR(int32_t, 16) l_898 = (VECTOR(int32_t, 16))(0x7DE614CDL, (VECTOR(int32_t, 4))(0x7DE614CDL, (VECTOR(int32_t, 2))(0x7DE614CDL, (-3L)), (-3L)), (-3L), 0x7DE614CDL, (-3L), (VECTOR(int32_t, 2))(0x7DE614CDL, (-3L)), (VECTOR(int32_t, 2))(0x7DE614CDL, (-3L)), 0x7DE614CDL, (-3L), 0x7DE614CDL, (-3L));
    uint16_t *l_910 = (void*)0;
    uint16_t *l_911 = &p_1065->g_527;
    int32_t l_912 = 6L;
    int32_t *l_913 = &l_712;
    int64_t l_916 = (-1L);
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_647[i] = &p_1065->g_89[7];
    for (i = 0; i < 2; i++)
        l_715[i] = 0x33E82327L;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_888[i][j] = &l_852;
    }
    if ((l_624 , (((p_1065->g_617.f0 , (l_624 == (safe_mul_func_uint8_t_u_u((((p_1065->g_95.s2 &= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0x36L, 255UL)).odd, l_624)), l_624))) && (((void*)0 != l_632) == ((safe_lshift_func_int16_t_s_u((l_648 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(18446744073709551607UL, (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u(l_624, 8)))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_638.wxxw)).ywwwwzyw)), 0x3644E5A5AB5573AEL, ((VECTOR(uint64_t, 2))(l_639.xz)), (((+((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((p_1065->g_114.z &= (safe_mod_func_int32_t_s_s(((l_646[0][4][1] != (void*)0) ^ 0x619F512D068EFC5FL), 1UL))), l_638.z)) < (-1L)), 5)) == (*p_1065->g_266))) < (-10L)) > l_638.x), 0x77230E3A2E6639DDL, 0x1924E7707AE2802FL)).s7d)))).odd == l_638.x)), l_638.z)) , (*p_61)))) ^ l_638.z), 0L)))) > l_624) == p_1065->g_189)))
    { /* block id: 263 */
        int32_t **l_655 = (void*)0;
        int32_t l_677 = 0x099F96A6L;
        int64_t *l_680 = &l_624;
        uint32_t *l_683 = (void*)0;
        uint8_t *l_685[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_686 = (-2L);
        int32_t *l_689[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_716 = 1L;
        VECTOR(int16_t, 16) l_761 = (VECTOR(int16_t, 16))(0x4C75L, (VECTOR(int16_t, 4))(0x4C75L, (VECTOR(int16_t, 2))(0x4C75L, 0x0801L), 0x0801L), 0x0801L, 0x4C75L, 0x0801L, (VECTOR(int16_t, 2))(0x4C75L, 0x0801L), (VECTOR(int16_t, 2))(0x4C75L, 0x0801L), 0x4C75L, 0x0801L, 0x4C75L, 0x0801L);
        uint64_t **l_782 = &l_632;
        int i, j;
        l_690 ^= ((safe_sub_func_uint8_t_u_u(((0x37L | (safe_lshift_func_int8_t_s_s(((!(((safe_lshift_func_int16_t_s_s((l_655 == p_1065->g_656[0]), (*p_1065->g_221))) != (safe_mul_func_uint8_t_u_u((0x1AACF9A15B05E548L ^ ((safe_lshift_func_uint8_t_u_s((l_686 |= (safe_div_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_mul_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((l_638.z >= ((safe_lshift_func_int8_t_s_s(((p_1065->g_73.y = (safe_mul_func_uint16_t_u_u((!((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(l_677, (((safe_div_func_int64_t_s_s(((*l_680) = (-10L)), (safe_mul_func_int16_t_s_s(p_1065->g_24.x, l_677)))) , 4L) , p_1065->g_113.s1))), 11)) , l_638.y)), 0xDB00L))) ^ l_684), 2)) <= l_638.z)), 4294967295UL)) <= l_677) < 0xCBL), 65535UL)))) != 255UL), l_648))), 5)) || l_687)), l_677))) ^ p_1065->g_39)) ^ GROUP_DIVERGE(2, 1)), 3))) , 0x71L), 0xCAL)) || l_688);
        for (l_687 = 0; (l_687 <= 29); l_687++)
        { /* block id: 270 */
            int32_t *l_693 = (void*)0;
            int32_t **l_694 = (void*)0;
            int32_t **l_695 = &l_693;
            int32_t **l_702 = &l_689[8];
            int32_t l_706 = 1L;
            int32_t l_708 = 3L;
            int32_t l_710[5][8] = {{0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L},{0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L},{0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L},{0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L},{0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L,0x1D84D87CL,0x1D84D87CL,0x49D90EB0L}};
            int i, j;
            (*l_695) = &l_686;
            for (l_690 = (-1); (l_690 > (-4)); --l_690)
            { /* block id: 277 */
                int32_t l_705 = 0L;
                int32_t l_707 = 0L;
                int32_t l_709 = 0x142A2E5CL;
                int32_t l_711 = (-10L);
                int32_t l_713 = 0x287AFDA3L;
                int32_t l_714 = (-1L);
                VECTOR(int32_t, 8) l_717 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                uint32_t l_718 = 1UL;
                int i;
                --l_718;
            }
            (*l_702) = p_60;
            (*l_693) ^= l_715[1];
        }
        for (l_688 = 11; (l_688 < 35); l_688 = safe_add_func_uint8_t_u_u(l_688, 9))
        { /* block id: 285 */
            if (l_648)
                break;
        }
        for (l_690 = 0; (l_690 == 10); l_690 = safe_add_func_int64_t_s_s(l_690, 6))
        { /* block id: 290 */
            uint64_t l_727[2];
            uint32_t *l_752 = &p_1065->g_488;
            int8_t l_757 = 0x0EL;
            int32_t l_762 = 1L;
            uint32_t **l_794 = &p_1065->g_623;
            int i;
            for (i = 0; i < 2; i++)
                l_727[i] = 1UL;
            for (l_712 = (-2); (l_712 >= 15); l_712 = safe_add_func_int32_t_s_s(l_712, 3))
            { /* block id: 293 */
                int32_t l_732 = 0L;
                int32_t l_733 = 0L;
                uint64_t **l_784 = (void*)0;
                --l_727[0];
                for (p_1065->g_39 = 0; (p_1065->g_39 != 30); p_1065->g_39 = safe_add_func_uint64_t_u_u(p_1065->g_39, 4))
                { /* block id: 297 */
                    int8_t l_744 = 0x10L;
                    int8_t *l_746 = &p_1065->g_250;
                    uint32_t **l_751 = &p_1065->g_623;
                    uint16_t *l_771 = (void*)0;
                    uint16_t *l_772 = (void*)0;
                    uint16_t *l_773 = (void*)0;
                    uint16_t *l_774 = (void*)0;
                    uint16_t *l_775 = (void*)0;
                    uint16_t *l_776 = &p_1065->g_527;
                    l_733 = l_732;
                    l_733 = ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(l_727[1], ((l_732 , l_744) && (((*l_632) = (((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(p_1065->g_745.s6426)).even))).xyxxxyxxxyxxxxxx, (int8_t)((*l_746) |= p_1065->g_530), (int8_t)(safe_mul_func_uint16_t_u_u((+(l_727[0] & (l_715[1] = ((*l_746) = (safe_lshift_func_int16_t_s_s((((*l_751) = p_60) != l_752), (p_1065->g_120.s6 = (0UL != ((safe_sub_func_int32_t_s_s((p_1065->g_114.w > l_744), (-3L))) >= l_733))))))))), 65530UL))))).s9 >= l_732)) & l_727[0])))), 5L)), l_727[0])), p_1065->g_36.x)), l_688)) & p_1065->g_89[8]);
                    l_762 &= ((*p_1065->g_266) | (safe_sub_func_uint64_t_u_u((l_757 == ((void*)0 == l_752)), ((*l_632) = (safe_div_func_int32_t_s_s(0x42626B65L, (((VECTOR(uint16_t, 16))(p_1065->g_760.xxxxxxxxyxyyyxxx)).s5 && ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(1L, 0L)).yxyyyxxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_761.sdcdd)).hi)).yxyyxyxx))).s6)))))));
                    l_784 = ((l_733 = ((safe_add_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(l_684, ((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(p_1065->g_769.see04ccc3674cf95a)).even, ((VECTOR(int16_t, 2))(p_1065->g_770.s76)).yxxxxyxy))).hi, (int16_t)((p_1065->g_769.sc | FAKE_DIVERGE(p_1065->local_2_offset, get_local_id(2), 10)) , (**p_1065->g_220)), (int16_t)l_727[0]))).w, (++(*l_776)))) | (p_1065->g_250 < (((&p_1065->g_189 != (p_1065->g_781[3] = (void*)0)) , &p_1065->g_15) != p_61))))) <= p_1065->g_745.s3), 0x438331B85E09CDB7L)) & 7UL)) , l_782);
                }
            }
            l_712 ^= (safe_lshift_func_int16_t_s_s(((((+(l_701 && p_1065->g_120.s3)) < ((*p_61) == ((safe_mod_func_uint8_t_u_u((l_715[0] &= l_757), 0x63L)) >= (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((-8L), (((VECTOR(uint8_t, 8))(l_793.sf328a433)).s7 , ((p_61 != ((*l_794) = (void*)0)) , ((++p_1065->g_216.y) ^ 0x3BL))))), 0x21L))))) & l_762) && l_793.sc), (**p_1065->g_220)));
        }
    }
    else
    { /* block id: 319 */
        int64_t l_799 = 0L;
        int32_t l_800 = 0L;
        VECTOR(int64_t, 4) l_822 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5AF44BE4EFB183DBL), 0x5AF44BE4EFB183DBL);
        int32_t l_840 = 0x495EF63EL;
        int32_t l_841 = 0x46FAD4E9L;
        int32_t l_842 = 2L;
        int32_t l_843[9][6] = {{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L},{0L,(-1L),0L,0L,(-1L),0L}};
        int8_t l_844[2][2][9] = {{{1L,0x66L,1L,0x66L,1L,1L,0x66L,1L,0x66L},{1L,0x66L,1L,0x66L,1L,1L,0x66L,1L,0x66L}},{{1L,0x66L,1L,0x66L,1L,1L,0x66L,1L,0x66L},{1L,0x66L,1L,0x66L,1L,1L,0x66L,1L,0x66L}}};
        int i, j, k;
        if ((*p_61))
        { /* block id: 320 */
            uint32_t **l_818 = &p_1065->g_623;
            VECTOR(int64_t, 2) l_827 = (VECTOR(int64_t, 2))(0L, 0x23B7C2C901A616EDL);
            int32_t l_836 = 0x51ADD0F4L;
            int32_t *l_837 = &l_715[1];
            int32_t *l_838 = (void*)0;
            int32_t *l_839[1];
            int32_t l_845 = 0x0EE29059L;
            int i;
            for (i = 0; i < 1; i++)
                l_839[i] = &l_836;
            for (p_1065->g_39 = (-20); (p_1065->g_39 == 38); p_1065->g_39 = safe_add_func_int32_t_s_s(p_1065->g_39, 5))
            { /* block id: 323 */
                uint32_t l_801 = 3UL;
                uint32_t ***l_810 = &p_1065->g_622;
                uint32_t ***l_811 = (void*)0;
                uint32_t ***l_812 = &p_1065->g_622;
                uint32_t ***l_813 = &p_1065->g_622;
                uint32_t ***l_814 = &p_1065->g_622;
                uint32_t ***l_815 = &p_1065->g_622;
                uint32_t ***l_816 = &p_1065->g_622;
                uint32_t ***l_817[9][2][6] = {{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}},{{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0},{&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,&p_1065->g_622,(void*)0}}};
                int32_t **l_819 = &l_646[2][3][3];
                int32_t ***l_820 = &p_1065->g_656[0];
                int32_t l_821 = 0x270E31A9L;
                VECTOR(int32_t, 16) l_824 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x558F1450L), 0x558F1450L), 0x558F1450L, 0L, 0x558F1450L, (VECTOR(int32_t, 2))(0L, 0x558F1450L), (VECTOR(int32_t, 2))(0L, 0x558F1450L), 0L, 0x558F1450L, 0L, 0x558F1450L);
                VECTOR(int64_t, 16) l_828 = (VECTOR(int64_t, 16))(0x05F6E1997D41F04EL, (VECTOR(int64_t, 4))(0x05F6E1997D41F04EL, (VECTOR(int64_t, 2))(0x05F6E1997D41F04EL, 0x3F3A603810EF200BL), 0x3F3A603810EF200BL), 0x3F3A603810EF200BL, 0x05F6E1997D41F04EL, 0x3F3A603810EF200BL, (VECTOR(int64_t, 2))(0x05F6E1997D41F04EL, 0x3F3A603810EF200BL), (VECTOR(int64_t, 2))(0x05F6E1997D41F04EL, 0x3F3A603810EF200BL), 0x05F6E1997D41F04EL, 0x3F3A603810EF200BL, 0x05F6E1997D41F04EL, 0x3F3A603810EF200BL);
                int64_t *l_830 = (void*)0;
                int64_t *l_831[1];
                int32_t l_832 = 0x68954FE9L;
                uint8_t *l_833 = (void*)0;
                uint8_t *l_834 = (void*)0;
                uint8_t *l_835[4];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_831[i] = &l_799;
                for (i = 0; i < 4; i++)
                    l_835[i] = (void*)0;
                l_800 ^= l_799;
                atomic_add(&p_1065->g_atomic_reduction[get_linear_group_id()], (((l_801 || ((+((+((p_1065->g_216.z--) || (l_836 = ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((safe_div_func_int8_t_s_s(((l_818 = &p_1065->g_623) != ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(4L, 0x1DL, (-5L), (-9L))), ((((*l_820) = l_819) != ((((l_821 = (*p_61)) < (*p_60)) , (l_800 = (((l_800 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((l_832 = ((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_822.yyww)).even)))).yyxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(p_1065->g_823.sf6ef)).zwyzyywz))).even)).zyyyyywy)).s41, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(l_824.sc7)).yyxyxyxyyyyyxxxx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1065->g_825.yyxy)).wxyywxzz)).s2675666247551055))).s8f, ((VECTOR(int64_t, 4))(0L, l_826[4][1][1], 0x0B5DF33D88B73CF7L, 0L)).odd))).yxxxyxxx)).hi)).hi)))), (-4L), (-1L))).lo)).xxxy, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(l_827.xxyxxxyx)), ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 8))(l_828.s97e113c3)).s33, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 4))(l_829.s1575)).xxzwyzzyzxwwyyxy, (int64_t)(p_1065->g_comm_values[p_1065->tid] |= (+(p_1065->g_36.w ^= (l_821 = 1L)))), (int64_t)(*p_1065->g_266)))))), ((VECTOR(int64_t, 16))((-3L)))))).s75))).yxyyxyyx))).s06, ((VECTOR(int64_t, 2))(0x45DDB6392BE452E3L))))).yyxy))).z) & l_826[4][1][1]), ((VECTOR(int32_t, 2))((-5L))), 0x6EDBBA13L)).zwzzxzzw, (int32_t)(*p_61)))).s3460021430662215)).s0) || 4L) || 0xAA217935L))) , (void*)0)) , l_827.y), ((VECTOR(int8_t, 2))((-7L))), 0x60L)).s4 < l_639.y) , (void*)0)), l_793.s0)) , 0x63B84A7D8167FCB2L) == GROUP_DIVERGE(2, 1)) , (*p_1065->g_221)), 1L)), l_824.sb)) != GROUP_DIVERGE(2, 1))))) , 254UL)) == l_824.s0)) || 0xC26F1E18FC5FC2BFL) , 0x5EE21071L));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1065->v_collective += p_1065->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                return l_799;
            }
            l_849--;
        }
        else
        { /* block id: 339 */
            int32_t *l_856 = &l_842;
            (*l_856) ^= l_852;
        }
    }
    l_690 ^= (!(l_848 > ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_857.xxyy)).yyzyzxyyxzzwywxw)).s5 & (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_860.xyxxxyyy)).s1, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))((((p_1065->g_comm_values[p_1065->tid] = (safe_rshift_func_uint16_t_u_u((l_712 = ((p_1065->g_865 = p_1065->g_865) == (void*)0)), (safe_rshift_func_uint16_t_u_s((((((&l_849 != &l_849) & (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1065->global_1_offset, get_global_id(1), 10), (((((VECTOR(int32_t, 2))(0x3248FE1FL, (-1L))).lo <= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_873.s98)).even, ((l_688 , ((0x3CC1DDDCL | (l_848 == ((safe_add_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((p_1065->g_95.s4--), (((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(3L, 0x50L)), 0x76L, 1L)).odd, ((VECTOR(int8_t, 2))(0x47L, 0x39L))))).xyyx)).x | (((l_715[1] = (safe_div_func_uint32_t_u_u((*p_1065->g_529), p_1065->g_421.s5))) , &l_849) == &l_849)) , l_889) != p_1065->g_891[4][0]), p_1065->g_36.z)), p_1065->g_73.y)) , p_1065->g_120.s7) && 0x571256056379080AL))), l_793.s1)) ^ l_638.y))) , 0x12F97E7F6D133B2CL)) >= p_1065->g_108.s4)))) , 0x29207BD0L) , l_793.s3)))) , 0x70C9L) <= 8L) != l_639.z), p_1065->g_432.y))))) , 3L) & l_826[4][1][1]), ((VECTOR(int32_t, 2))(8L)), (-8L), (-1L), 0x7FD82D80L, 1L, 0x2E392190L)).s2, (*p_61)))))) < p_1065->g_421.s2)));
    (*l_913) |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(1L, 0x1D1E17D4L)).xyxxxxxyyyxyyxyy, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_893.yxxx)).wxxywyxxwwzzxywy, ((VECTOR(int32_t, 8))(l_894.sc6e7822e)).s4201300271025600))).s9c, (int32_t)(*p_61)))).yyxyyyyxyxxxyyxx))).hi, ((VECTOR(int32_t, 16))(p_1065->g_895.zyyzywwxwxxyzzxx)).odd))).odd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_896.s72560230)).s65)))).xxxx))).zzxwywxzywzywyyz, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0x006D4E88L, ((VECTOR(int32_t, 2))(p_1065->g_897.s50)), 0x5E48A1FFL)).xwzwwyxx, ((VECTOR(int32_t, 4))(l_898.sd084)).xzxzxyww))).s11)).xyxx, ((VECTOR(int32_t, 2))(1L, 0x103F58B4L)).yxyx))).wxwyxzyy, (int32_t)(((*l_632) = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((**p_1065->g_220), ((&p_1065->g_221 != (void*)0) == ((*l_911) = ((l_896.s6 = ((((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(0x6A94FF91BFAD976AL, ((VECTOR(int64_t, 2))(0x316A029007871312L, 0x4869AF3AA496778BL)), (-5L))).even, (int64_t)l_893.y, (int64_t)l_690))).even , ((((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(0x7438L, ((VECTOR(int16_t, 2))(p_1065->g_905.s46)), 0x4D54L)).ywxxywzx))).s5 , (safe_mod_func_int32_t_s_s(((((void*)0 != l_647[7]) == (((VECTOR(uint8_t, 2))(255UL, 0xC3L)).hi | ((safe_sub_func_int32_t_s_s((*p_61), p_1065->g_488)) | l_873.sf))) == p_1065->g_905.s2), (*p_61)))) , (void*)0)) != (void*)0)) <= 4294967293UL))))), l_700.z)), l_701)) != 0x304F7ED3L)) != l_912)))).s4635514570445773, ((VECTOR(int32_t, 16))((-9L)))))).even)).hi, ((VECTOR(int32_t, 4))((-2L))), ((VECTOR(int32_t, 4))(0x44BD902EL))))).odd)).hi;
    (*p_1065->g_914) = &l_888[7][0];
    return l_916;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_221 p_1065->g_222 p_1065->g_471 p_1065->g_266 p_1065->g_39 p_1065->g_421 p_1065->g_216 p_1065->g_95 p_1065->g_113 p_1065->g_486 p_1065->g_488 p_1065->g_220 p_1065->g_373 p_1065->g_267 p_1065->g_189 p_1065->g_272 p_1065->g_15 p_1065->g_36 p_1065->g_528 p_1065->g_120 p_1065->g_617 p_1065->g_621
 * writes: p_1065->g_85 p_1065->g_345 p_1065->g_461 p_1065->g_471 p_1065->g_39 p_1065->g_216 p_1065->g_113 p_1065->g_486 p_1065->g_488 p_1065->g_286 p_1065->g_95 p_1065->g_527 p_1065->g_120 p_1065->g_622
 */
uint32_t * func_62(uint32_t  p_63, int16_t  p_64, int32_t * p_65, uint32_t * p_66, int32_t * p_67, struct S1 * p_1065)
{ /* block id: 180 */
    int32_t **l_457 = (void*)0;
    int32_t **l_458 = &p_1065->g_85[3][2][1];
    VECTOR(uint16_t, 16) l_459 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    uint16_t *l_460[7][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    uint16_t l_468 = 65535UL;
    int64_t **l_472 = &p_1065->g_471;
    int16_t *l_477 = (void*)0;
    int16_t *l_478[9][10] = {{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234},{(void*)0,&p_1065->g_89[9],(void*)0,(void*)0,&p_1065->g_89[9],(void*)0,&p_1065->g_234,(void*)0,(void*)0,&p_1065->g_234}};
    int32_t *l_479 = (void*)0;
    int32_t *l_480 = (void*)0;
    int32_t *l_481 = (void*)0;
    int32_t *l_482 = (void*)0;
    int32_t *l_483 = (void*)0;
    int32_t *l_484 = (void*)0;
    int32_t *l_485[1][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint32_t *l_487 = &p_1065->g_488;
    uint64_t *l_495 = (void*)0;
    uint64_t *l_496 = &p_1065->g_286;
    int32_t **l_500 = (void*)0;
    int32_t *l_501[9][10] = {{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349},{&p_1065->g_349,(void*)0,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,&p_1065->g_349,(void*)0,&p_1065->g_349}};
    uint8_t *l_504 = (void*)0;
    uint8_t *l_505 = (void*)0;
    uint8_t *l_506 = (void*)0;
    uint8_t *l_507 = (void*)0;
    uint8_t *l_508[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_538 = 0x0DCE1540L;
    int i, j, k;
    (*l_458) = &p_1065->g_15;
    p_1065->g_486 ^= (((GROUP_DIVERGE(1, 1) == (p_1065->g_461[3][4][1] = (p_1065->g_345.s2 = ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(l_459.s85b3)).hi, ((VECTOR(uint16_t, 2))(0x6628L, 0x7493L))))).hi))) , p_63) != ((((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 4294967286UL)).yyxyxxxx)).s2, ((l_468 < (*p_1065->g_221)) == (p_1065->g_113.s2 ^= (safe_add_func_int64_t_s_s((((((*p_66) &= (((*l_472) = p_1065->g_471) == p_1065->g_266)) != p_1065->g_421.s2) , ((safe_rshift_func_int8_t_s_u(0L, (p_1065->g_216.z = (safe_div_func_uint64_t_u_u(18446744073709551615UL, (((p_63 > p_1065->g_216.z) <= 2UL) ^ 0x3B43L)))))) == 0x2058L)) != p_64), p_1065->g_95.s1)))))), p_64)), 0x30EBL)) , 0UL) != p_63) , p_63));
    if ((((*l_487)--) , (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((*l_496) = p_63) || (!((*l_496) = (safe_unary_minus_func_int16_t_s((**p_1065->g_220)))))) , (safe_mul_func_int16_t_s_s((-1L), (((l_501[5][6] = l_482) == ((safe_sub_func_uint8_t_u_u((p_1065->g_95.s0 = FAKE_DIVERGE(p_1065->local_0_offset, get_local_id(0), 10)), (FAKE_DIVERGE(p_1065->group_1_offset, get_group_id(1), 10) | (((p_1065->g_216.y |= p_1065->g_373.s4) < (0x4826026369CF1F3DL > (!(*p_1065->g_266)))) >= p_64)))) , p_67)) && 0x2265L)))), p_1065->g_189)), 1L))))
    { /* block id: 196 */
        VECTOR(int16_t, 4) l_517 = (VECTOR(int16_t, 4))(0x01A4L, (VECTOR(int16_t, 2))(0x01A4L, 0x11C1L), 0x11C1L);
        VECTOR(int16_t, 16) l_518 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x4CD8L), 0x4CD8L), 0x4CD8L, (-7L), 0x4CD8L, (VECTOR(int16_t, 2))((-7L), 0x4CD8L), (VECTOR(int16_t, 2))((-7L), 0x4CD8L), (-7L), 0x4CD8L, (-7L), 0x4CD8L);
        int64_t l_531 = 0x197BFEF5D744FBF7L;
        int32_t l_532 = (-2L);
        int32_t l_533 = 6L;
        int8_t l_534 = 9L;
        int32_t l_535 = 0x66EFC4FFL;
        int32_t l_536[8][10][1] = {{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}},{{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L},{0x2BC2AAC4L}}};
        uint64_t l_539 = 0UL;
        int32_t ***l_618 = &l_457;
        uint32_t *l_620 = &p_1065->g_461[3][4][1];
        uint32_t **l_619 = &l_620;
        int i, j, k;
        l_531 = ((safe_lshift_func_int16_t_s_s((p_1065->g_120.s6 |= (((*l_496) = 0x54605D30FE7295EEL) == (safe_sub_func_int64_t_s_s(((p_1065->g_272 != (void*)0) < ((safe_sub_func_int32_t_s_s((((((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(l_517.zw)).yxxyxxyyxyxxxyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_518.s90)))).xyyyxxyxxxxxxxyy))).sc , (p_64 < ((&p_1065->g_461[3][4][1] == p_66) >= ((((*p_65) > GROUP_DIVERGE(1, 1)) , (safe_add_func_int16_t_s_s((p_64 && (safe_div_func_uint8_t_u_u(((p_1065->g_527 = ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((((safe_lshift_func_int16_t_s_u((p_1065->g_36.z & p_1065->g_36.z), 14)) | p_64) , l_517.y), 0UL, 0x1AD5F601FAC69B60L, 0x6888DC887CAA2456L, 0xDAF714856145AB95L, ((VECTOR(uint64_t, 8))(0xAF8A4F34FFF55D8FL)), ((VECTOR(uint64_t, 2))(0xAF2410E979624AE1L)), 1UL)).sa4ab)), ((VECTOR(uint64_t, 4))(3UL))))).even)), 0x360F38D8546BD911L, 18446744073709551613UL)).odd, ((VECTOR(uint64_t, 2))(0x881603056855E7C0L))))))), 0UL, 1UL)).zwwxyzzz, ((VECTOR(uint64_t, 8))(4UL))))).s3) && 5UL), 0x5CL))), p_1065->g_373.s5))) , p_63)))) , p_1065->g_528[2]) != (void*)0), 0x7F3835EDL)) ^ l_518.s9)), p_63)))), (*p_1065->g_221))) , 1L);
        l_539++;
        for (l_532 = 7; (l_532 >= 26); l_532 = safe_add_func_uint8_t_u_u(l_532, 3))
        { /* block id: 204 */
            for (p_63 = (-10); (p_63 != 43); p_63 = safe_add_func_int16_t_s_s(p_63, 8))
            { /* block id: 207 */
                if ((atomic_inc(&p_1065->g_atomic_input[80 * get_linear_group_id() + 9]) == 8))
                { /* block id: 209 */
                    int32_t l_546 = 0x543BB885L;
                    uint16_t l_554[4];
                    VECTOR(uint32_t, 2) l_555 = (VECTOR(uint32_t, 2))(0x95C13D4FL, 0x40F246D9L);
                    uint16_t l_556 = 0x9AA0L;
                    int8_t l_557 = 0x57L;
                    uint16_t l_558[1][2][10] = {{{0x5871L,0x4A75L,0x4A75L,0x5871L,0x5871L,0x4A75L,0x4A75L,0x5871L,0x5871L,0x4A75L},{0x5871L,0x4A75L,0x4A75L,0x5871L,0x5871L,0x4A75L,0x4A75L,0x5871L,0x5871L,0x4A75L}}};
                    uint32_t l_559 = 0x48110A03L;
                    VECTOR(int32_t, 2) l_560 = (VECTOR(int32_t, 2))((-1L), (-10L));
                    VECTOR(int32_t, 4) l_561 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x4E293CCBL), 0x4E293CCBL);
                    VECTOR(int32_t, 8) l_562 = (VECTOR(int32_t, 8))(0x19B56DB1L, (VECTOR(int32_t, 4))(0x19B56DB1L, (VECTOR(int32_t, 2))(0x19B56DB1L, (-1L)), (-1L)), (-1L), 0x19B56DB1L, (-1L));
                    int64_t l_563 = 0x1BBFB0986913AB20L;
                    uint64_t l_564[2];
                    uint8_t l_565 = 248UL;
                    VECTOR(int32_t, 8) l_566 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    VECTOR(int32_t, 8) l_567 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1BAE22D5L), 0x1BAE22D5L), 0x1BAE22D5L, (-6L), 0x1BAE22D5L);
                    VECTOR(int32_t, 8) l_568 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                    uint8_t l_569 = 1UL;
                    VECTOR(int32_t, 8) l_570 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2E6A7359L), 0x2E6A7359L), 0x2E6A7359L, (-10L), 0x2E6A7359L);
                    VECTOR(int32_t, 4) l_571 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 7L), 7L);
                    VECTOR(int32_t, 8) l_572 = (VECTOR(int32_t, 8))(0x411F8775L, (VECTOR(int32_t, 4))(0x411F8775L, (VECTOR(int32_t, 2))(0x411F8775L, 5L), 5L), 5L, 0x411F8775L, 5L);
                    VECTOR(int32_t, 8) l_573 = (VECTOR(int32_t, 8))(0x25B34B67L, (VECTOR(int32_t, 4))(0x25B34B67L, (VECTOR(int32_t, 2))(0x25B34B67L, 0x3B0E2E9BL), 0x3B0E2E9BL), 0x3B0E2E9BL, 0x25B34B67L, 0x3B0E2E9BL);
                    VECTOR(int32_t, 8) l_574 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-3L)), (-3L)), (-3L), 7L, (-3L));
                    VECTOR(int32_t, 4) l_575 = (VECTOR(int32_t, 4))(0x41D08EFDL, (VECTOR(int32_t, 2))(0x41D08EFDL, 1L), 1L);
                    VECTOR(int32_t, 2) l_576 = (VECTOR(int32_t, 2))(8L, 0x753769B3L);
                    VECTOR(int32_t, 16) l_577 = (VECTOR(int32_t, 16))(0x2C95A241L, (VECTOR(int32_t, 4))(0x2C95A241L, (VECTOR(int32_t, 2))(0x2C95A241L, 0x3B705C27L), 0x3B705C27L), 0x3B705C27L, 0x2C95A241L, 0x3B705C27L, (VECTOR(int32_t, 2))(0x2C95A241L, 0x3B705C27L), (VECTOR(int32_t, 2))(0x2C95A241L, 0x3B705C27L), 0x2C95A241L, 0x3B705C27L, 0x2C95A241L, 0x3B705C27L);
                    VECTOR(int32_t, 16) l_578 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-7L)), (-7L)), (-7L), 7L, (-7L), (VECTOR(int32_t, 2))(7L, (-7L)), (VECTOR(int32_t, 2))(7L, (-7L)), 7L, (-7L), 7L, (-7L));
                    VECTOR(int32_t, 2) l_579 = (VECTOR(int32_t, 2))(0x2EFA623CL, 0x4D0B4309L);
                    VECTOR(int32_t, 2) l_580 = (VECTOR(int32_t, 2))(0x53164409L, 4L);
                    VECTOR(int32_t, 8) l_581 = (VECTOR(int32_t, 8))(0x081FDA05L, (VECTOR(int32_t, 4))(0x081FDA05L, (VECTOR(int32_t, 2))(0x081FDA05L, 0x55FFCAE2L), 0x55FFCAE2L), 0x55FFCAE2L, 0x081FDA05L, 0x55FFCAE2L);
                    int8_t l_582 = 0x70L;
                    int8_t l_583 = (-1L);
                    int32_t l_584 = (-7L);
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_554[i] = 0xC6EEL;
                    for (i = 0; i < 2; i++)
                        l_564[i] = 0x61A68599B29CBBBFL;
                    for (l_546 = 0; (l_546 == (-13)); l_546 = safe_sub_func_int16_t_s_s(l_546, 1))
                    { /* block id: 212 */
                        VECTOR(uint16_t, 8) l_549 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL);
                        int16_t l_550 = (-1L);
                        uint64_t l_551 = 0x129DB5957AF680BBL;
                        uint16_t l_552 = 0UL;
                        int8_t l_553 = (-1L);
                        int i;
                        l_551 &= (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_549.s5474)).zzxyxxwyxxyxyxyw)).sf , l_550);
                        l_553 |= l_552;
                    }
                    if (((VECTOR(int32_t, 16))(1L, (-6L), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_554[0], 0L, 0x4C3C14B5L, (l_559 &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(1UL, 4294967294UL, 4294967292UL, ((VECTOR(uint32_t, 4))(l_555.yxxx)).w, (l_556 &= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x41833E57L, 1UL)).xxxxyxyy)).s4), l_557, 0xF83C3F59L, 0xFD7DB9FFL)).s6214257426540411)).s2 , l_558[0][0][4])), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x12DBB7ADL, 0x50F791B6L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0L)).even, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(0x7843C0ADL, 0x6269849EL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_560.xy)).xyyyyyyy)), 0x7355D367L, (-9L), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_561.wyzyzyyz)).s6750020725625554, ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(0x751D9133L, (-9L))), 1L)).xywzxxxxxzwwxyww, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(0x672319BCL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(9L, 0x1FD159AFL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_562.s53304551)))).hi)).hi))), (-3L))).wwyxyxxxyyyzxyww, ((VECTOR(int32_t, 8))(0x2BBB2E35L, l_563, (l_564[0] , l_565), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_566.s5142666741705362)).sf5)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_567.s2352)).odd, ((VECTOR(int32_t, 16))((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_568.s31)))), 0x6CFD6865L, (-1L))).z , l_569), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-5L), (-2L))).yyyyyyyyyyyxxyyx)))).s0b)), ((VECTOR(int32_t, 8))(l_570.s50450127)), ((VECTOR(int32_t, 4))(l_571.xzxz)), 0x2F39FEE6L)).s14))), 7L)).s0061120446003161)))))).s08)).xyxyyxxy, ((VECTOR(int32_t, 8))(0x799113A7L, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(l_572.s72464227)), ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_573.s52652407)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x749D1325L, 0x008F680AL, (-2L), 0x01C523BEL)).yywwyzxw)).odd)), ((VECTOR(int32_t, 4))(l_574.s4552))))).wzyywxxz))).s4, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))((-3L), (-7L))).xxxxyyyyyxxxxxxx, ((VECTOR(int32_t, 16))(l_575.zzzwyxwxyzxzxzxw))))).hi, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_576.xy)), (int32_t)((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_577.se747)))).xxzyzxwy)).s23)).xyxxxyyyyxyxyxxx)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x168F2639L, 0x4B14362AL, 1L, 9L, 0x2B0EA1B0L, 0x3D3DDF04L, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(l_578.s56)).yyyxyxyy, ((VECTOR(int32_t, 2))(0x4E72C278L, 6L)).yyyxyyyy))).s6, 0x58A4D209L, ((VECTOR(int32_t, 4))(l_579.yyyx)), ((VECTOR(int32_t, 4))(0x13503D7CL, 6L, 0x1AAB6ED6L, 0x5870A842L)))).lo)).s21)).xxyxyyyx))).s4277266206556644, ((VECTOR(int32_t, 4))(l_580.xxyx)).zzwzxywxyxywwxxw, ((VECTOR(int32_t, 8))(l_581.s77741316)).s1766240376654766))).s7, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_582, (l_583 &= 0x7E491B8FL), 8L, 0L)))).z))), 0x195264ECL)))).yxyxywxyzxywwxzz, ((VECTOR(int32_t, 16))((-5L))), ((VECTOR(int32_t, 16))(1L))))).hi, ((VECTOR(int32_t, 8))(0x044A8611L))))), ((VECTOR(int32_t, 8))(0L))))).s42)), ((VECTOR(int32_t, 4))((-4L)))))))).s4, ((VECTOR(int32_t, 2))(0x60836684L)), 6L)).sa926, ((VECTOR(int32_t, 4))((-1L)))))), l_584, 0x2CCD8022L, 0x1CB4B5EAL)).s13))).xxyyyyyx)).even)))), ((VECTOR(int32_t, 8))(0x4912AA58L))))), 0L, ((VECTOR(int32_t, 2))(4L)), (-1L), (-6L), 0x5967F128L)).s5)
                    { /* block id: 219 */
                        VECTOR(uint32_t, 16) l_585 = (VECTOR(uint32_t, 16))(0x6EF2C209L, (VECTOR(uint32_t, 4))(0x6EF2C209L, (VECTOR(uint32_t, 2))(0x6EF2C209L, 0x0E0B227FL), 0x0E0B227FL), 0x0E0B227FL, 0x6EF2C209L, 0x0E0B227FL, (VECTOR(uint32_t, 2))(0x6EF2C209L, 0x0E0B227FL), (VECTOR(uint32_t, 2))(0x6EF2C209L, 0x0E0B227FL), 0x6EF2C209L, 0x0E0B227FL, 0x6EF2C209L, 0x0E0B227FL);
                        uint16_t l_586 = 5UL;
                        uint64_t l_587 = 1UL;
                        VECTOR(int16_t, 8) l_590 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 5L), 5L), 5L, (-5L), 5L);
                        int64_t l_591 = 0x372F2DCD76F126AEL;
                        VECTOR(int32_t, 16) l_592 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        int i;
                        l_566.s6 |= (l_585.sa , l_586);
                        --l_587;
                        l_592.s3 = (l_572.s2 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_590.s3221666777155226)).even)), (int16_t)l_591))), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65535UL, 65535UL)).yyyyyxxxxxxxxxxx)).even))).s35, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_592.sb633)).xxwyyxzzxwywzxxw)).s9c))))), (-1L))).xywyxyxwzyzwyzyw)).sf);
                    }
                    else
                    { /* block id: 224 */
                        uint32_t l_593 = 0xB5E78202L;
                        int32_t *l_594 = (void*)0;
                        l_567.s4 = 0x4E0FADD8L;
                        l_594 = (l_593 , l_594);
                    }
                    unsigned int result = 0;
                    result += l_546;
                    int l_554_i0;
                    for (l_554_i0 = 0; l_554_i0 < 4; l_554_i0++) {
                        result += l_554[l_554_i0];
                    }
                    result += l_555.y;
                    result += l_555.x;
                    result += l_556;
                    result += l_557;
                    int l_558_i0, l_558_i1, l_558_i2;
                    for (l_558_i0 = 0; l_558_i0 < 1; l_558_i0++) {
                        for (l_558_i1 = 0; l_558_i1 < 2; l_558_i1++) {
                            for (l_558_i2 = 0; l_558_i2 < 10; l_558_i2++) {
                                result += l_558[l_558_i0][l_558_i1][l_558_i2];
                            }
                        }
                    }
                    result += l_559;
                    result += l_560.y;
                    result += l_560.x;
                    result += l_561.w;
                    result += l_561.z;
                    result += l_561.y;
                    result += l_561.x;
                    result += l_562.s7;
                    result += l_562.s6;
                    result += l_562.s5;
                    result += l_562.s4;
                    result += l_562.s3;
                    result += l_562.s2;
                    result += l_562.s1;
                    result += l_562.s0;
                    result += l_563;
                    int l_564_i0;
                    for (l_564_i0 = 0; l_564_i0 < 2; l_564_i0++) {
                        result += l_564[l_564_i0];
                    }
                    result += l_565;
                    result += l_566.s7;
                    result += l_566.s6;
                    result += l_566.s5;
                    result += l_566.s4;
                    result += l_566.s3;
                    result += l_566.s2;
                    result += l_566.s1;
                    result += l_566.s0;
                    result += l_567.s7;
                    result += l_567.s6;
                    result += l_567.s5;
                    result += l_567.s4;
                    result += l_567.s3;
                    result += l_567.s2;
                    result += l_567.s1;
                    result += l_567.s0;
                    result += l_568.s7;
                    result += l_568.s6;
                    result += l_568.s5;
                    result += l_568.s4;
                    result += l_568.s3;
                    result += l_568.s2;
                    result += l_568.s1;
                    result += l_568.s0;
                    result += l_569;
                    result += l_570.s7;
                    result += l_570.s6;
                    result += l_570.s5;
                    result += l_570.s4;
                    result += l_570.s3;
                    result += l_570.s2;
                    result += l_570.s1;
                    result += l_570.s0;
                    result += l_571.w;
                    result += l_571.z;
                    result += l_571.y;
                    result += l_571.x;
                    result += l_572.s7;
                    result += l_572.s6;
                    result += l_572.s5;
                    result += l_572.s4;
                    result += l_572.s3;
                    result += l_572.s2;
                    result += l_572.s1;
                    result += l_572.s0;
                    result += l_573.s7;
                    result += l_573.s6;
                    result += l_573.s5;
                    result += l_573.s4;
                    result += l_573.s3;
                    result += l_573.s2;
                    result += l_573.s1;
                    result += l_573.s0;
                    result += l_574.s7;
                    result += l_574.s6;
                    result += l_574.s5;
                    result += l_574.s4;
                    result += l_574.s3;
                    result += l_574.s2;
                    result += l_574.s1;
                    result += l_574.s0;
                    result += l_575.w;
                    result += l_575.z;
                    result += l_575.y;
                    result += l_575.x;
                    result += l_576.y;
                    result += l_576.x;
                    result += l_577.sf;
                    result += l_577.se;
                    result += l_577.sd;
                    result += l_577.sc;
                    result += l_577.sb;
                    result += l_577.sa;
                    result += l_577.s9;
                    result += l_577.s8;
                    result += l_577.s7;
                    result += l_577.s6;
                    result += l_577.s5;
                    result += l_577.s4;
                    result += l_577.s3;
                    result += l_577.s2;
                    result += l_577.s1;
                    result += l_577.s0;
                    result += l_578.sf;
                    result += l_578.se;
                    result += l_578.sd;
                    result += l_578.sc;
                    result += l_578.sb;
                    result += l_578.sa;
                    result += l_578.s9;
                    result += l_578.s8;
                    result += l_578.s7;
                    result += l_578.s6;
                    result += l_578.s5;
                    result += l_578.s4;
                    result += l_578.s3;
                    result += l_578.s2;
                    result += l_578.s1;
                    result += l_578.s0;
                    result += l_579.y;
                    result += l_579.x;
                    result += l_580.y;
                    result += l_580.x;
                    result += l_581.s7;
                    result += l_581.s6;
                    result += l_581.s5;
                    result += l_581.s4;
                    result += l_581.s3;
                    result += l_581.s2;
                    result += l_581.s1;
                    result += l_581.s0;
                    result += l_582;
                    result += l_583;
                    result += l_584;
                    atomic_add(&p_1065->g_special_values[80 * get_linear_group_id() + 9], result);
                }
                else
                { /* block id: 228 */
                    (1 + 1);
                }
                return p_66;
            }
            (*l_458) = (void*)0;
        }
        for (l_539 = (-18); (l_539 == 46); l_539++)
        { /* block id: 237 */
            uint32_t l_597 = 0xD4E8ED50L;
            uint32_t l_600 = 4294967288UL;
            uint32_t *l_603 = &p_1065->g_39;
            l_597--;
            l_600 = (l_536[5][8][0] = 4L);
            for (l_533 = (-28); (l_533 < 3); l_533++)
            { /* block id: 243 */
                return l_603;
            }
            for (l_597 = 28; (l_597 > 6); --l_597)
            { /* block id: 248 */
                uint64_t l_606 = 0UL;
                ++l_606;
                l_536[4][5][0] = (((-1L) | ((safe_div_func_uint8_t_u_u(1UL, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-1L), 0x09L)).xyxxyyxx)).s21)).yyxy, ((VECTOR(int8_t, 16))(((p_64 , (safe_add_func_uint16_t_u_u(p_64, ((VECTOR(int16_t, 2))((-2L), 0x02D3L)).lo))) , (safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u(((*l_496) = (p_1065->g_617 , ((void*)0 == l_618))), p_1065->g_216.x)), (((p_63 <= p_63) , l_619) == &p_66)))), p_63, ((VECTOR(int8_t, 2))((-3L))), ((VECTOR(int8_t, 8))(2L)), 1L, p_63, 0x32L, (-1L))).sbb4b))).y)) && (*p_66))) != l_531);
                if ((*p_67))
                    continue;
            }
        }
    }
    else
    { /* block id: 255 */
        (*p_1065->g_621) = &l_487;
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_216 p_1065->g_220 p_1065->g_189 p_1065->g_95 p_1065->g_15 p_1065->g_114 p_1065->g_120 p_1065->g_108 p_1065->g_39 p_1065->l_comm_values p_1065->g_89 p_1065->g_266 p_1065->g_113 p_1065->g_272 p_1065->g_24 p_1065->g_234 p_1065->g_250 p_1065->g_73
 * writes: p_1065->g_89 p_1065->g_234 p_1065->g_189 p_1065->g_39 p_1065->g_comm_values p_1065->g_349 p_1065->g_85
 */
uint32_t * func_69(int32_t * p_70, int32_t * p_71, struct S1 * p_1065)
{ /* block id: 84 */
    int16_t *l_219 = (void*)0;
    int16_t *l_227 = &p_1065->g_89[0];
    VECTOR(uint16_t, 4) l_228 = (VECTOR(uint16_t, 4))(0xA2A0L, (VECTOR(uint16_t, 2))(0xA2A0L, 4UL), 4UL);
    uint16_t *l_229 = (void*)0;
    uint16_t *l_230 = (void*)0;
    uint16_t *l_231 = (void*)0;
    uint16_t *l_232 = (void*)0;
    uint16_t *l_233[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_235 = (void*)0;
    int8_t *l_249 = &p_1065->g_250;
    int32_t l_254 = (-1L);
    int16_t l_285 = 0x5B1CL;
    uint64_t l_317 = 0xEC57E579D2D7FA05L;
    uint16_t l_355 = 0xE0E0L;
    int32_t l_383[6][6] = {{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL},{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL},{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL},{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL},{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL},{0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL,0x1F78447BL}};
    VECTOR(int8_t, 2) l_395 = (VECTOR(int8_t, 2))(1L, 0L);
    VECTOR(uint32_t, 8) l_413 = (VECTOR(uint32_t, 8))(0x6A331635L, (VECTOR(uint32_t, 4))(0x6A331635L, (VECTOR(uint32_t, 2))(0x6A331635L, 0x5DC25C0CL), 0x5DC25C0CL), 0x5DC25C0CL, 0x6A331635L, 0x5DC25C0CL);
    VECTOR(uint32_t, 8) l_415 = (VECTOR(uint32_t, 8))(0x6A34EA3BL, (VECTOR(uint32_t, 4))(0x6A34EA3BL, (VECTOR(uint32_t, 2))(0x6A34EA3BL, 4294967295UL), 4294967295UL), 4294967295UL, 0x6A34EA3BL, 4294967295UL);
    VECTOR(uint32_t, 16) l_433 = (VECTOR(uint32_t, 16))(0xA13701DEL, (VECTOR(uint32_t, 4))(0xA13701DEL, (VECTOR(uint32_t, 2))(0xA13701DEL, 4294967286UL), 4294967286UL), 4294967286UL, 0xA13701DEL, 4294967286UL, (VECTOR(uint32_t, 2))(0xA13701DEL, 4294967286UL), (VECTOR(uint32_t, 2))(0xA13701DEL, 4294967286UL), 0xA13701DEL, 4294967286UL, 0xA13701DEL, 4294967286UL);
    int i, j;
    l_235 = func_74((p_1065->g_189 &= (safe_mul_func_int16_t_s_s(((void*)0 != &p_1065->g_189), (safe_rshift_func_int16_t_s_u((((VECTOR(uint8_t, 8))(p_1065->g_216.zwxwzxxx)).s5 ^ ((((safe_mul_func_uint8_t_u_u((0x0DL == (((((void*)0 != l_219) , p_1065->g_220) != &l_219) != ((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((*l_227) = 0x233AL), (p_1065->g_234 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_228.ywyy)), 0x4978L, 0xB0ECL, 1UL, 0xAF1CL)).s7))), l_228.x)) <= 0UL))), l_228.w)) || l_228.w) >= 0xDEE5804FEDB64202L) , l_228.y)), l_228.y))))), l_228.y, p_1065);
    for (p_1065->g_189 = 0; (p_1065->g_189 != 23); p_1065->g_189 = safe_add_func_int8_t_s_s(p_1065->g_189, 5))
    { /* block id: 91 */
        VECTOR(int32_t, 8) l_246 = (VECTOR(int32_t, 8))(0x402CF99BL, (VECTOR(int32_t, 4))(0x402CF99BL, (VECTOR(int32_t, 2))(0x402CF99BL, 0x63E17F14L), 0x63E17F14L), 0x63E17F14L, 0x402CF99BL, 0x63E17F14L);
        VECTOR(int32_t, 4) l_247 = (VECTOR(int32_t, 4))(0x1F7D47C4L, (VECTOR(int32_t, 2))(0x1F7D47C4L, 7L), 7L);
        int8_t *l_248 = &p_1065->g_189;
        int32_t l_256 = 0L;
        int32_t *l_281 = &l_254;
        uint64_t l_316 = 9UL;
        int32_t l_382[10] = {0x4C247009L,(-8L),0x4C247009L,0x4C247009L,(-8L),0x4C247009L,0x4C247009L,(-8L),0x4C247009L,0x4C247009L};
        VECTOR(int16_t, 16) l_394 = (VECTOR(int16_t, 16))(0x178AL, (VECTOR(int16_t, 4))(0x178AL, (VECTOR(int16_t, 2))(0x178AL, 0x5683L), 0x5683L), 0x5683L, 0x178AL, 0x5683L, (VECTOR(int16_t, 2))(0x178AL, 0x5683L), (VECTOR(int16_t, 2))(0x178AL, 0x5683L), 0x178AL, 0x5683L, 0x178AL, 0x5683L);
        VECTOR(int16_t, 4) l_396 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 1L), 1L);
        VECTOR(uint32_t, 2) l_414 = (VECTOR(uint32_t, 2))(4294967288UL, 0x5F819645L);
        VECTOR(uint32_t, 16) l_417 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x46CD1033L), 0x46CD1033L), 0x46CD1033L, 4294967291UL, 0x46CD1033L, (VECTOR(uint32_t, 2))(4294967291UL, 0x46CD1033L), (VECTOR(uint32_t, 2))(4294967291UL, 0x46CD1033L), 4294967291UL, 0x46CD1033L, 4294967291UL, 0x46CD1033L);
        uint64_t l_445 = 0UL;
        int i;
        for (p_1065->g_39 = 0; (p_1065->g_39 == 38); p_1065->g_39 = safe_add_func_int32_t_s_s(p_1065->g_39, 3))
        { /* block id: 94 */
            int8_t *l_259 = &p_1065->g_250;
            int32_t l_268 = 1L;
            uint64_t l_312 = 9UL;
            uint16_t l_346 = 0UL;
            int32_t l_356 = 0x759E872FL;
            uint32_t *l_378 = &p_1065->g_39;
            int32_t l_384 = 1L;
            VECTOR(uint16_t, 16) l_385 = (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 5UL), 5UL), 5UL, 65530UL, 5UL, (VECTOR(uint16_t, 2))(65530UL, 5UL), (VECTOR(uint16_t, 2))(65530UL, 5UL), 65530UL, 5UL, 65530UL, 5UL);
            int16_t *l_390 = &p_1065->g_89[8];
            VECTOR(uint32_t, 2) l_420 = (VECTOR(uint32_t, 2))(4UL, 0xE763667AL);
            int32_t **l_453 = &p_1065->g_85[2][0][2];
            int i;
            for (p_1065->g_234 = 0; (p_1065->g_234 == (-23)); --p_1065->g_234)
            { /* block id: 97 */
                int32_t *l_251 = (void*)0;
                int32_t *l_252 = (void*)0;
                int32_t *l_253[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int64_t l_255 = 1L;
                VECTOR(int16_t, 8) l_329 = (VECTOR(int16_t, 8))(0x2664L, (VECTOR(int16_t, 4))(0x2664L, (VECTOR(int16_t, 2))(0x2664L, 0x4612L), 0x4612L), 0x4612L, 0x2664L, 0x4612L);
                int16_t *l_340 = &p_1065->g_89[8];
                VECTOR(int16_t, 2) l_347 = (VECTOR(int16_t, 2))(0x4781L, (-8L));
                int16_t **l_391 = (void*)0;
                int16_t **l_392 = &l_340;
                int8_t *l_393 = (void*)0;
                int32_t **l_400 = (void*)0;
                int32_t ***l_399 = &l_400;
                VECTOR(uint32_t, 4) l_429 = (VECTOR(uint32_t, 4))(0x9B5EE45EL, (VECTOR(uint32_t, 2))(0x9B5EE45EL, 7UL), 7UL);
                VECTOR(uint32_t, 2) l_434 = (VECTOR(uint32_t, 2))(4294967287UL, 0xC33E5C67L);
                int i;
                l_255 = (l_254 = (!(safe_mod_func_int8_t_s_s((((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_246.s55)).yxyyyxyx, ((VECTOR(int32_t, 16))(l_247.zxzwyyzzzwxxyywy)).even))).s5 >= (l_248 == (l_249 = &p_1065->g_189))), p_1065->g_15))));
                if (l_256)
                { /* block id: 101 */
                    uint16_t l_276 = 0xB1D7L;
                    VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-5L)), (-5L));
                    int i;
                    for (l_255 = 0; (l_255 <= (-14)); l_255 = safe_sub_func_int8_t_s_s(l_255, 1))
                    { /* block id: 104 */
                        uint8_t *l_273 = (void*)0;
                        uint8_t *l_274 = (void*)0;
                        uint8_t *l_275[10][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int64_t l_277 = 0x50A345A6B217372BL;
                        int64_t *l_278[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_279 = 0x46972D0BL;
                        int32_t **l_282 = &l_253[2];
                        int i, j;
                        l_280.x &= (((l_279 = (l_259 != ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((((void*)0 == p_1065->g_266) || l_268) , (l_276 &= (p_1065->g_113.se != (safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s((((void*)0 == p_1065->g_272) , (GROUP_DIVERGE(0, 1) || ((void*)0 != &p_1065->g_189))), GROUP_DIVERGE(1, 1)))))))), l_277)), (*p_70))), 1)) , (void*)0))) || p_1065->g_216.y) | (-1L));
                        l_235 = ((*l_282) = l_281);
                        (*l_281) = 0x1C68050AL;
                    }
                }
                else
                { /* block id: 112 */
                    uint32_t l_309 = 0xF5C49D32L;
                    uint8_t *l_313[6];
                    int32_t l_314 = 0x237E602FL;
                    int64_t *l_315[9];
                    VECTOR(int8_t, 8) l_372 = (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L);
                    int32_t l_376 = (-2L);
                    int32_t **l_379 = (void*)0;
                    int32_t **l_380 = (void*)0;
                    int32_t **l_381 = &p_1065->g_85[1][0][1];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_313[i] = (void*)0;
                    for (i = 0; i < 9; i++)
                        l_315[i] = (void*)0;
                    if (((safe_mul_func_uint16_t_u_u(p_1065->g_95.s3, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))((p_1065->g_286++), 0UL, 0x7E45L, (((safe_lshift_func_int16_t_s_s(((*l_227) = (((*l_281) != (safe_lshift_func_uint16_t_u_s(((0x299F0A3863662FD1L == ((&p_1065->g_15 != &l_254) || ((safe_sub_func_int64_t_s_s((p_1065->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1065->tid, 15))] = (safe_rshift_func_uint16_t_u_u(((l_314 = (safe_lshift_func_uint8_t_u_s((p_1065->g_216.y = (safe_lshift_func_int16_t_s_s(((((*l_281) , (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((65535UL || (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_309, ((safe_div_func_int16_t_s_s((-5L), (*l_281))) , l_312))), l_268))), p_1065->g_113.sc)), (*l_281)))) ^ 0x58134D8CL) == (*p_70)), p_1065->g_113.sa))), 6))) != (*p_70)), 7))), l_312)) != (*l_281)))) ^ 65533UL), 7))) , l_312)), 7)) <= (-4L)) , l_316), ((VECTOR(uint16_t, 2))(0x9E75L)), 5UL, 1UL)).s6337000637231505)).s48e6)).z)) , (*p_70)))
                    { /* block id: 118 */
                        uint8_t l_320 = 0xF5L;
                        int32_t l_323 = 0x08CD0421L;
                        int32_t l_324 = 0x56563D4EL;
                        int32_t l_325 = 0x35F981D7L;
                        uint64_t l_326 = 0xA15B89DED05D8830L;
                        int32_t *l_348 = &p_1065->g_349;
                        int32_t **l_357 = (void*)0;
                        int32_t **l_358 = &p_1065->g_85[0][0][1];
                        l_317++;
                        --l_320;
                        ++l_326;
                        (*l_358) = ((((VECTOR(int16_t, 8))(l_329.s02755360)).s2 < (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((l_268 , (((*l_281) = (safe_mod_func_int64_t_s_s((p_1065->g_24.x >= (l_313[4] != (((void*)0 != l_340) , l_313[4]))), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((l_309 < 0x60059435L), (!((+(((*l_348) = ((l_346 &= ((VECTOR(uint16_t, 16))(p_1065->g_345.s3074260533030252)).s2) > ((VECTOR(int16_t, 2))(l_347.yy)).hi)) , (((VECTOR(uint32_t, 2))(p_1065->g_350.yy)).odd || ((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 != &l_219), 0x9EE0L)), p_1065->g_234)) & 0x82ABE2860F0DB80EL)))) & p_1065->g_15)))), p_1065->g_24.y))))) && l_323)) >= (-5L)), l_325)), p_1065->g_250)), l_355)) > 0x089C80D704C2488FL), l_356)) >= l_323) ^ l_309)) , &p_1065->g_15);
                    }
                    else
                    { /* block id: 126 */
                        uint8_t l_371 = 253UL;
                        uint64_t l_377 = 0xFAD2DBD1D86D975AL;
                        l_377 = (p_1065->g_24.x > (l_314 >= (l_376 = (safe_sub_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((!l_371), (l_309 != ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_372.s60)).xxyxxyxxyxyxyyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1065->g_373.s2372146107530540)).hi)).s6224767201574317))).even)).s0))), (~1L))), 0x470AFF03L)) & p_1065->g_73.x), (safe_mod_func_uint16_t_u_u(((&l_355 == (void*)0) , p_1065->g_89[0]), GROUP_DIVERGE(2, 1))))), 0x60L)))));
                        return l_378;
                    }
                    if (l_372.s5)
                        continue;
                    (*l_381) = &p_1065->g_15;
                }
                l_385.s7--;
            }
            (*l_453) = &p_1065->g_15;
        }
    }
    return &p_1065->g_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1065->g_95 p_1065->g_15 p_1065->g_108 p_1065->g_113 p_1065->g_114 p_1065->g_120 p_1065->g_89 p_1065->g_39 p_1065->l_comm_values
 * writes: p_1065->g_39 p_1065->g_89 p_1065->g_comm_values
 */
int32_t * func_74(int8_t  p_75, int32_t  p_76, struct S1 * p_1065)
{ /* block id: 19 */
    uint32_t l_98[7] = {0x20BB848FL,1UL,0x20BB848FL,0x20BB848FL,1UL,0x20BB848FL,0x20BB848FL};
    int16_t *l_101 = &p_1065->g_89[6];
    int16_t *l_103[10][6] = {{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]},{&p_1065->g_89[1],&p_1065->g_89[1],(void*)0,(void*)0,(void*)0,&p_1065->g_89[7]}};
    int16_t **l_102 = &l_103[1][5];
    uint8_t *l_104 = (void*)0;
    int32_t l_105 = 0x032032B9L;
    VECTOR(int32_t, 8) l_106 = (VECTOR(int32_t, 8))(0x632CE8EBL, (VECTOR(int32_t, 4))(0x632CE8EBL, (VECTOR(int32_t, 2))(0x632CE8EBL, 1L), 1L), 1L, 0x632CE8EBL, 1L);
    VECTOR(int32_t, 16) l_107 = (VECTOR(int32_t, 16))(0x11EE9290L, (VECTOR(int32_t, 4))(0x11EE9290L, (VECTOR(int32_t, 2))(0x11EE9290L, 0x0DDD0EBFL), 0x0DDD0EBFL), 0x0DDD0EBFL, 0x11EE9290L, 0x0DDD0EBFL, (VECTOR(int32_t, 2))(0x11EE9290L, 0x0DDD0EBFL), (VECTOR(int32_t, 2))(0x11EE9290L, 0x0DDD0EBFL), 0x11EE9290L, 0x0DDD0EBFL, 0x11EE9290L, 0x0DDD0EBFL);
    VECTOR(uint16_t, 8) l_111 = (VECTOR(uint16_t, 8))(0x58AAL, (VECTOR(uint16_t, 4))(0x58AAL, (VECTOR(uint16_t, 2))(0x58AAL, 0xF531L), 0xF531L), 0xF531L, 0x58AAL, 0xF531L);
    VECTOR(uint16_t, 2) l_112 = (VECTOR(uint16_t, 2))(0xD428L, 65535UL);
    VECTOR(int16_t, 4) l_115 = (VECTOR(int16_t, 4))(0x3D1FL, (VECTOR(int16_t, 2))(0x3D1FL, (-1L)), (-1L));
    int64_t *l_121 = (void*)0;
    uint32_t *l_124 = &p_1065->g_39;
    int32_t l_125 = 0x25720279L;
    VECTOR(int64_t, 4) l_181 = (VECTOR(int64_t, 4))(0x0B5BDB629B37185AL, (VECTOR(int64_t, 2))(0x0B5BDB629B37185AL, 5L), 5L);
    int32_t *l_211 = (void*)0;
    int i, j;
    l_125 ^= ((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1065->g_95.s35571043)).s2, 7)) && (((safe_rshift_func_int16_t_s_u((l_98[1] < (p_1065->g_95.s3 , (((safe_lshift_func_int16_t_s_s((l_101 == ((*l_102) = l_101)), 13)) != (l_105 &= p_1065->g_15)) && (((VECTOR(int32_t, 8))(0L, (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(2L, 0x46617F50L)).yxxyyxxyyyyxxyxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_106.s4046)).even, ((VECTOR(int32_t, 16))(l_107.sa9bdd0b6939ad6f1)).s6d))).xyyyyxxx)).odd)))).wxyyxzzywxwxywww, ((VECTOR(int32_t, 8))(p_1065->g_108.s06222023)).s3762743561525264))).s4 <= (GROUP_DIVERGE(2, 1) >= ((p_76 & ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 4))(l_111.s2406)).wwwxyyywxzyyyyzw, ((VECTOR(uint16_t, 8))(l_112.xxxxyyyy)).s2513206142117742, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 8))(p_1065->g_113.seb0a878a)).s42, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1065->g_114.yxxx)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(0x7CFDL, ((VECTOR(int16_t, 2))(l_115.xx)), 6L, 0x7D85L, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1065->g_120.s5434730640167702)).s7, 8)), 15)), 0x68B9L, 0L)).s3455710500012062, ((VECTOR(int16_t, 4))(0L, ((*l_101) ^= ((((*l_124) = (((l_105 = 0x276FC58545D7662AL) != (safe_mod_func_uint64_t_u_u(((l_111.s3 & p_76) & p_75), l_112.y))) ^ 0x379EL)) > l_111.s2) <= p_75)), (-3L), 0x184DL)).zzyyxxxyxyxwzyxy))).even, ((VECTOR(int16_t, 8))(0x641FL))))).s4760117626227162, ((VECTOR(int16_t, 16))(0x7743L))))).scd)))).xyyx)).hi, ((VECTOR(int16_t, 2))(8L))))), 0x31E0L, 1L)).s14))).yyyxxxyxxxyyyxyx))).s7) == l_111.s1))), (-3L), l_107.s9, p_76, 0x042A1733L, (-1L), (-8L))).s7 || l_115.w)))), 12)) <= p_1065->g_114.z) ^ p_1065->g_120.s5)), p_1065->g_95.s6)) ^ p_1065->g_108.s0);
    for (p_1065->g_39 = (-20); (p_1065->g_39 != 60); p_1065->g_39 = safe_add_func_int64_t_s_s(p_1065->g_39, 1))
    { /* block id: 28 */
        if ((atomic_inc(&p_1065->l_atomic_input[0]) == 1))
        { /* block id: 30 */
            int32_t l_129 = 0x06958104L;
            int32_t *l_128 = &l_129;
            int32_t l_130[5][4] = {{(-8L),0x5D34D88EL,(-8L),(-8L)},{(-8L),0x5D34D88EL,(-8L),(-8L)},{(-8L),0x5D34D88EL,(-8L),(-8L)},{(-8L),0x5D34D88EL,(-8L),(-8L)},{(-8L),0x5D34D88EL,(-8L),(-8L)}};
            int i, j;
            l_128 = (void*)0;
            if (l_130[2][1])
            { /* block id: 32 */
                VECTOR(int32_t, 16) l_131 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2F410160L), 0x2F410160L), 0x2F410160L, 1L, 0x2F410160L, (VECTOR(int32_t, 2))(1L, 0x2F410160L), (VECTOR(int32_t, 2))(1L, 0x2F410160L), 1L, 0x2F410160L, 1L, 0x2F410160L);
                int32_t l_167 = (-1L);
                uint16_t l_168 = 0UL;
                int i;
                l_130[2][1] |= ((VECTOR(int32_t, 16))(l_131.s36a6313875562492)).s5;
                for (l_131.s7 = 0; (l_131.s7 <= (-23)); l_131.s7--)
                { /* block id: 36 */
                    uint16_t l_134 = 0x24EAL;
                    int16_t l_135 = 0x0238L;
                    int32_t l_136 = (-9L);
                    VECTOR(int64_t, 4) l_137 = (VECTOR(int64_t, 4))(0x6A31E4377C8831FDL, (VECTOR(int64_t, 2))(0x6A31E4377C8831FDL, 0x6180988709DC6AD9L), 0x6180988709DC6AD9L);
                    uint32_t l_138 = 0xC97AD978L;
                    uint32_t l_139 = 0x81B1BC71L;
                    uint32_t l_140 = 4294967288UL;
                    VECTOR(int64_t, 2) l_141 = (VECTOR(int64_t, 2))(0x6881EA7A1799D2B8L, 0x7C33F7625D64D038L);
                    VECTOR(int64_t, 16) l_142 = (VECTOR(int64_t, 16))(0x1EC3C31468258067L, (VECTOR(int64_t, 4))(0x1EC3C31468258067L, (VECTOR(int64_t, 2))(0x1EC3C31468258067L, (-7L)), (-7L)), (-7L), 0x1EC3C31468258067L, (-7L), (VECTOR(int64_t, 2))(0x1EC3C31468258067L, (-7L)), (VECTOR(int64_t, 2))(0x1EC3C31468258067L, (-7L)), 0x1EC3C31468258067L, (-7L), 0x1EC3C31468258067L, (-7L));
                    VECTOR(int64_t, 8) l_143 = (VECTOR(int64_t, 8))(0x5D1DBFA45521639EL, (VECTOR(int64_t, 4))(0x5D1DBFA45521639EL, (VECTOR(int64_t, 2))(0x5D1DBFA45521639EL, 0x00355CF6CD2DBEE0L), 0x00355CF6CD2DBEE0L), 0x00355CF6CD2DBEE0L, 0x5D1DBFA45521639EL, 0x00355CF6CD2DBEE0L);
                    uint16_t l_144[1][2][9] = {{{65535UL,65530UL,65535UL,65535UL,65530UL,65535UL,65535UL,65530UL,65535UL},{65535UL,65530UL,65535UL,65535UL,65530UL,65535UL,65535UL,65530UL,65535UL}}};
                    uint16_t l_145[10];
                    uint16_t l_146 = 0x034BL;
                    int32_t l_147 = 0x194F7FA5L;
                    int64_t l_148 = (-7L);
                    int64_t l_149[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int8_t l_150 = 0x18L;
                    uint8_t **l_151 = (void*)0;
                    uint8_t *l_153 = (void*)0;
                    uint8_t **l_152 = &l_153;
                    int32_t l_154[7] = {4L,8L,4L,4L,8L,4L,4L};
                    VECTOR(int16_t, 16) l_155 = (VECTOR(int16_t, 16))(0x46ACL, (VECTOR(int16_t, 4))(0x46ACL, (VECTOR(int16_t, 2))(0x46ACL, (-4L)), (-4L)), (-4L), 0x46ACL, (-4L), (VECTOR(int16_t, 2))(0x46ACL, (-4L)), (VECTOR(int16_t, 2))(0x46ACL, (-4L)), 0x46ACL, (-4L), 0x46ACL, (-4L));
                    VECTOR(int16_t, 2) l_156 = (VECTOR(int16_t, 2))((-3L), 0x7A73L);
                    VECTOR(uint16_t, 4) l_157 = (VECTOR(uint16_t, 4))(0x4D7EL, (VECTOR(uint16_t, 2))(0x4D7EL, 0xF4A1L), 0xF4A1L);
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_145[i] = 0x0309L;
                    l_150 |= (l_134 , ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))((-7L), (l_135 , ((l_148 = ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))((l_136 = 0x7CBA6E04L), 5L, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(1L, (((l_129 = 1L) , ((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(l_137.xzyxxzxwzyzyxywy)), ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x6E3166068C90CB26L, 0x0CB1CE7FF7C57EFDL)).yyyx)).lo)).xyyyxyxx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-1L), 0x7D913FAE4BFFE456L)), 0x4E61BCC1DD9ACFF2L, l_138, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(0x13C2613D90FEA269L, (l_139 , l_140), (-1L), 0x17789D2C2FFDF52CL)).odd, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(l_141.xxyxyxyy)).s5476072175347241, (int64_t)0x0814D170816E1F83L))).s6, 0x33EC6DFB0B29F1C3L, ((VECTOR(int64_t, 2))(l_142.sc5)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_143.s21)).yxyxxxyxxxyyyxxx)).sdd, ((VECTOR(int64_t, 2))(0x20A848104350C7B6L, 2L))))))), 8L, 0x380F26FC9603B0C7L)).s3627677742152000)).s0a, ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))((-4L), l_144[0][0][1], 3L, ((VECTOR(int64_t, 4))(0x33B61AE5F705220BL)), 0x190524C49024B7AEL)).even, ((VECTOR(int64_t, 4))(0x00BC6D34CFEFF8C8L))))).even))).yyyxyyxyxyxxxxxy)).sc9, ((VECTOR(int64_t, 2))(0x069F92A7757BED90L)), ((VECTOR(int64_t, 2))((-1L)))))), 0x4EF0AC7219EB458DL, 0x65945407581B478EL)).xxwzwzwzxyxwyzxz)).s1, ((VECTOR(int64_t, 2))(3L)), 0x687AF14CE292E266L)).s2727062737613274)).lo, ((VECTOR(int64_t, 8))(0x51445D630324E9D9L))))).hi)).ywywyyww, ((VECTOR(int64_t, 8))((-8L))), ((VECTOR(int64_t, 8))(1L))))).s1746365373540010))), ((VECTOR(int64_t, 16))(8L))))).s4) , 2L), l_145[0], ((VECTOR(int32_t, 8))(0L)), 0x57AA1D18L, l_146, l_147, 8L, 4L)), ((VECTOR(int32_t, 16))(0x49EC65FDL))))).s9133, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x511DFB01L))))), 0x5FD3FBD4L, 0x4A4C857AL)).s11, ((VECTOR(int32_t, 2))(1L))))).hi) , 0x224133E7L)), l_149[6], 0L, ((VECTOR(int32_t, 2))(6L)), 2L, 8L, ((VECTOR(int32_t, 8))(0x21493796L)))).lo)).s75, ((VECTOR(int32_t, 2))((-3L)))))).xxxx, ((VECTOR(int32_t, 4))((-5L))), ((VECTOR(int32_t, 4))((-1L)))))).z);
                    l_152 = (l_151 = (void*)0);
                    l_130[2][3] = (l_154[1] , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(l_155.s85b112714a00ea68)).even, ((VECTOR(int16_t, 4))(l_156.xxyy)).xxxzwyzz))).s7550113150151605)).odd, ((VECTOR(uint16_t, 4))(l_157.wzwx)).wyxyzxwy))).s7);
                    for (l_157.x = 0; (l_157.x >= 36); l_157.x = safe_add_func_int16_t_s_s(l_157.x, 8))
                    { /* block id: 46 */
                        int32_t l_160 = 4L;
                        VECTOR(int64_t, 8) l_161 = (VECTOR(int64_t, 8))(0x79E957A56D6DE414L, (VECTOR(int64_t, 4))(0x79E957A56D6DE414L, (VECTOR(int64_t, 2))(0x79E957A56D6DE414L, (-9L)), (-9L)), (-9L), 0x79E957A56D6DE414L, (-9L));
                        VECTOR(int64_t, 4) l_162 = (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x572F3A6FA7AC4E5CL), 0x572F3A6FA7AC4E5CL);
                        VECTOR(int64_t, 8) l_163 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x75A53CB9E1FED795L), 0x75A53CB9E1FED795L), 0x75A53CB9E1FED795L, 0L, 0x75A53CB9E1FED795L);
                        int32_t l_165 = 0L;
                        int32_t *l_164 = &l_165;
                        int32_t l_166 = 1L;
                        int i;
                        l_128 = (((VECTOR(int64_t, 4))(l_160, ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(l_161.s55021310)).s3520115551652307, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 16))(l_162.zwyywyzyywyxyxwx)).even, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-8L), 1L)).xxyy)).even)).xyyxyyyy))).s0424006015453014))).s32)).yxyxxyyxxyyxxxyx, ((VECTOR(int64_t, 16))(l_163.s7762170750501223))))).sc, 0x638342FEDE261F0AL, 0x4EBCBE0442374C87L)).z , l_164);
                        (*l_128) = l_166;
                        l_128 = (void*)0;
                        l_154[1] = (l_129 ^= 1L);
                    }
                }
                --l_168;
            }
            else
            { /* block id: 55 */
                uint16_t l_171 = 1UL;
                l_130[0][0] ^= 0x0A70E696L;
                ++l_171;
            }
            unsigned int result = 0;
            result += l_129;
            int l_130_i0, l_130_i1;
            for (l_130_i0 = 0; l_130_i0 < 5; l_130_i0++) {
                for (l_130_i1 = 0; l_130_i1 < 4; l_130_i1++) {
                    result += l_130[l_130_i0][l_130_i1];
                }
            }
            atomic_add(&p_1065->l_special_values[0], result);
        }
        else
        { /* block id: 59 */
            (1 + 1);
        }
    }
    for (p_75 = (-16); (p_75 < (-27)); --p_75)
    { /* block id: 65 */
        int32_t l_190 = 0x3D1D58CDL;
        int64_t *l_197 = (void*)0;
        int64_t *l_198[7][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t l_207 = 0x53ACB93FL;
        int32_t *l_208 = (void*)0;
        int32_t *l_209 = (void*)0;
        int32_t *l_210[1][3][7] = {{{&l_105,(void*)0,(void*)0,&l_105,&l_105,(void*)0,(void*)0},{&l_105,(void*)0,(void*)0,&l_105,&l_105,(void*)0,(void*)0},{&l_105,(void*)0,(void*)0,&l_105,&l_105,(void*)0,(void*)0}}};
        int i, j, k;
        for (l_125 = 13; (l_125 == (-26)); l_125--)
        { /* block id: 68 */
            int16_t l_180 = 0x704CL;
            int8_t *l_188[6][9] = {{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189},{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189},{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189},{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189},{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189},{&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189,&p_1065->g_189}};
            int32_t *l_193 = (void*)0;
            int32_t *l_194 = &l_105;
            int i, j;
            (*l_194) = (safe_mul_func_uint16_t_u_u(l_180, (((p_76 > ((VECTOR(int64_t, 8))(l_181.zyxwxxxz)).s3) || (((FAKE_DIVERGE(p_1065->global_2_offset, get_global_id(2), 10) > ((*l_124)--)) >= p_1065->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1065->tid, 15))]) < (-8L))) ^ (((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), ((safe_mul_func_int8_t_s_s((l_190 = (-2L)), (safe_lshift_func_int16_t_s_s(((*l_101) = p_75), 3)))) >= ((l_125 , (void*)0) == (void*)0)))) , l_193) != (void*)0))));
        }
        if (l_98[1])
            continue;
        l_107.s6 = (safe_rshift_func_int16_t_s_u((l_112.x >= (p_1065->g_comm_values[p_1065->tid] = 0L)), (((l_190 = ((~((l_106.s5 |= (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((+FAKE_DIVERGE(p_1065->local_2_offset, get_local_id(2), 10)), l_190)), FAKE_DIVERGE(p_1065->group_2_offset, get_group_id(2), 10)))) | 1UL)) != (safe_lshift_func_uint16_t_u_u((l_125 = (p_75 , (l_207 ^= (247UL == (&p_76 == (void*)0))))), l_190)))) & p_75) >= p_1065->g_89[8])));
        return l_211;
    }
    return &p_1065->g_15;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_comm_values[i] = 1;
    struct S1 c_1066;
    struct S1* p_1065 = &c_1066;
    struct S1 c_1067 = {
        (-1L), // p_1065->g_15
        8UL, // p_1065->g_18
        (VECTOR(int64_t, 2))(0x1491450187E52695L, 1L), // p_1065->g_24
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x13F16A1EA5693CDBL), 0x13F16A1EA5693CDBL), 0x13F16A1EA5693CDBL, (-1L), 0x13F16A1EA5693CDBL, (VECTOR(int64_t, 2))((-1L), 0x13F16A1EA5693CDBL), (VECTOR(int64_t, 2))((-1L), 0x13F16A1EA5693CDBL), (-1L), 0x13F16A1EA5693CDBL, (-1L), 0x13F16A1EA5693CDBL), // p_1065->g_34
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-9L)), (-9L)), // p_1065->g_36
        0UL, // p_1065->g_39
        (VECTOR(uint32_t, 2))(0x9FB7A8BFL, 0x225587BBL), // p_1065->g_73
        {{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}},{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}},{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}},{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}},{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}},{{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15},{&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}}}, // p_1065->g_85
        {0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L,0x4B06L}, // p_1065->g_89
        (VECTOR(uint8_t, 8))(0x0FL, (VECTOR(uint8_t, 4))(0x0FL, (VECTOR(uint8_t, 2))(0x0FL, 0x9EL), 0x9EL), 0x9EL, 0x0FL, 0x9EL), // p_1065->g_95
        (VECTOR(int32_t, 8))(0x40AFD823L, (VECTOR(int32_t, 4))(0x40AFD823L, (VECTOR(int32_t, 2))(0x40AFD823L, 0x5DAFFDA2L), 0x5DAFFDA2L), 0x5DAFFDA2L, 0x40AFD823L, 0x5DAFFDA2L), // p_1065->g_108
        (VECTOR(int16_t, 16))(0x771AL, (VECTOR(int16_t, 4))(0x771AL, (VECTOR(int16_t, 2))(0x771AL, (-1L)), (-1L)), (-1L), 0x771AL, (-1L), (VECTOR(int16_t, 2))(0x771AL, (-1L)), (VECTOR(int16_t, 2))(0x771AL, (-1L)), 0x771AL, (-1L), 0x771AL, (-1L)), // p_1065->g_113
        (VECTOR(int16_t, 4))(0x7653L, (VECTOR(int16_t, 2))(0x7653L, 0x5E98L), 0x5E98L), // p_1065->g_114
        (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L), // p_1065->g_120
        0x61L, // p_1065->g_189
        (VECTOR(uint8_t, 4))(0xB0L, (VECTOR(uint8_t, 2))(0xB0L, 0UL), 0UL), // p_1065->g_216
        1L, // p_1065->g_222
        &p_1065->g_222, // p_1065->g_221
        &p_1065->g_221, // p_1065->g_220
        0x49D7L, // p_1065->g_234
        0x70L, // p_1065->g_250
        1L, // p_1065->g_267
        &p_1065->g_267, // p_1065->g_266
        (void*)0, // p_1065->g_272
        18446744073709551615UL, // p_1065->g_286
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL), // p_1065->g_345
        0x4538D2C8L, // p_1065->g_349
        (VECTOR(uint32_t, 2))(4294967290UL, 0xDAC79A2BL), // p_1065->g_350
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x4EL), 0x4EL), 0x4EL, 0L, 0x4EL), // p_1065->g_373
        (VECTOR(uint8_t, 8))(0xA2L, (VECTOR(uint8_t, 4))(0xA2L, (VECTOR(uint8_t, 2))(0xA2L, 0xA0L), 0xA0L), 0xA0L, 0xA2L, 0xA0L), // p_1065->g_421
        (VECTOR(uint32_t, 4))(0x907CD349L, (VECTOR(uint32_t, 2))(0x907CD349L, 3UL), 3UL), // p_1065->g_430
        (VECTOR(uint32_t, 2))(1UL, 5UL), // p_1065->g_432
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_1065->g_456
        {{{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL}},{{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL}},{{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL}},{{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL},{0xF02AC3C2L,4294967294UL}}}, // p_1065->g_461
        (void*)0, // p_1065->g_471
        4294967295UL, // p_1065->g_486
        0xCFBDBBB1L, // p_1065->g_488
        0UL, // p_1065->g_527
        0xECFFF695L, // p_1065->g_530
        &p_1065->g_530, // p_1065->g_529
        {&p_1065->g_529,&p_1065->g_529,&p_1065->g_529}, // p_1065->g_528
        0L, // p_1065->g_537
        {0x4B9109A8L}, // p_1065->g_617
        &p_1065->g_488, // p_1065->g_623
        &p_1065->g_623, // p_1065->g_622
        &p_1065->g_622, // p_1065->g_621
        {(void*)0,(void*)0,(void*)0}, // p_1065->g_656
        (VECTOR(int8_t, 8))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, (-1L)), (-1L)), (-1L), 0x6AL, (-1L)), // p_1065->g_745
        (VECTOR(uint16_t, 2))(65535UL, 65532UL), // p_1065->g_760
        (VECTOR(int16_t, 16))(0x1245L, (VECTOR(int16_t, 4))(0x1245L, (VECTOR(int16_t, 2))(0x1245L, 0x1740L), 0x1740L), 0x1740L, 0x1245L, 0x1740L, (VECTOR(int16_t, 2))(0x1245L, 0x1740L), (VECTOR(int16_t, 2))(0x1245L, 0x1740L), 0x1245L, 0x1740L, 0x1245L, 0x1740L), // p_1065->g_769
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1065->g_770
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1065->g_781
        (void*)0, // p_1065->g_783
        (VECTOR(int64_t, 16))(0x205146BB23E50C96L, (VECTOR(int64_t, 4))(0x205146BB23E50C96L, (VECTOR(int64_t, 2))(0x205146BB23E50C96L, 0x6F9125CBFD2183A5L), 0x6F9125CBFD2183A5L), 0x6F9125CBFD2183A5L, 0x205146BB23E50C96L, 0x6F9125CBFD2183A5L, (VECTOR(int64_t, 2))(0x205146BB23E50C96L, 0x6F9125CBFD2183A5L), (VECTOR(int64_t, 2))(0x205146BB23E50C96L, 0x6F9125CBFD2183A5L), 0x205146BB23E50C96L, 0x6F9125CBFD2183A5L, 0x205146BB23E50C96L, 0x6F9125CBFD2183A5L), // p_1065->g_823
        (VECTOR(uint32_t, 2))(1UL, 0x14E30A8FL), // p_1065->g_825
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1065->g_853
        (void*)0, // p_1065->g_854
        (void*)0, // p_1065->g_855
        &p_1065->g_471, // p_1065->g_865
        {{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}},{{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]},{&p_1065->g_85[2][4][1],&p_1065->g_85[1][3][0]}}}, // p_1065->g_892
        {{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]},{&p_1065->g_892[0][1][1]}}, // p_1065->g_891
        (VECTOR(int32_t, 4))(0x57855743L, (VECTOR(int32_t, 2))(0x57855743L, 0x4A1B13B6L), 0x4A1B13B6L), // p_1065->g_895
        (VECTOR(int32_t, 8))(0x030898CDL, (VECTOR(int32_t, 4))(0x030898CDL, (VECTOR(int32_t, 2))(0x030898CDL, (-1L)), (-1L)), (-1L), 0x030898CDL, (-1L)), // p_1065->g_897
        (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x13F3L), 0x13F3L), 0x13F3L, 5L, 0x13F3L), // p_1065->g_905
        &p_1065->g_781[0], // p_1065->g_915
        &p_1065->g_915, // p_1065->g_914
        0x0C881C24L, // p_1065->g_925
        {&p_1065->g_15,&p_1065->g_15,&p_1065->g_15,&p_1065->g_15}, // p_1065->g_935
        {{-9L},{-9L},{-9L}}, // p_1065->g_937
        {{-1L}}, // p_1065->g_941
        (void*)0, // p_1065->g_952
        (void*)0, // p_1065->g_953
        &p_1065->g_935[0], // p_1065->g_974
        0x06BC3356876539B5L, // p_1065->g_1006
        (VECTOR(uint8_t, 16))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0xD4L), 0xD4L), 0xD4L, 0x5FL, 0xD4L, (VECTOR(uint8_t, 2))(0x5FL, 0xD4L), (VECTOR(uint8_t, 2))(0x5FL, 0xD4L), 0x5FL, 0xD4L, 0x5FL, 0xD4L), // p_1065->g_1011
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x65DBL), 0x65DBL), 0x65DBL, 1UL, 0x65DBL), // p_1065->g_1025
        (VECTOR(uint64_t, 2))(0x1EF8A830263C9ADDL, 1UL), // p_1065->g_1026
        (void*)0, // p_1065->g_1047
        (void*)0, // p_1065->g_1048
        &p_1065->g_15, // p_1065->g_1049
        {{0x3A3E8846L},{0x3A3E8846L}}, // p_1065->g_1054
        {0x6AC39482L}, // p_1065->g_1058
        0, // p_1065->v_collective
        sequence_input[get_global_id(0)], // p_1065->global_0_offset
        sequence_input[get_global_id(1)], // p_1065->global_1_offset
        sequence_input[get_global_id(2)], // p_1065->global_2_offset
        sequence_input[get_local_id(0)], // p_1065->local_0_offset
        sequence_input[get_local_id(1)], // p_1065->local_1_offset
        sequence_input[get_local_id(2)], // p_1065->local_2_offset
        sequence_input[get_group_id(0)], // p_1065->group_0_offset
        sequence_input[get_group_id(1)], // p_1065->group_1_offset
        sequence_input[get_group_id(2)], // p_1065->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 15)), permutations[0][get_linear_local_id()])), // p_1065->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1066 = c_1067;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1065);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1065->g_15, "p_1065->g_15", print_hash_value);
    transparent_crc(p_1065->g_18, "p_1065->g_18", print_hash_value);
    transparent_crc(p_1065->g_24.x, "p_1065->g_24.x", print_hash_value);
    transparent_crc(p_1065->g_24.y, "p_1065->g_24.y", print_hash_value);
    transparent_crc(p_1065->g_34.s0, "p_1065->g_34.s0", print_hash_value);
    transparent_crc(p_1065->g_34.s1, "p_1065->g_34.s1", print_hash_value);
    transparent_crc(p_1065->g_34.s2, "p_1065->g_34.s2", print_hash_value);
    transparent_crc(p_1065->g_34.s3, "p_1065->g_34.s3", print_hash_value);
    transparent_crc(p_1065->g_34.s4, "p_1065->g_34.s4", print_hash_value);
    transparent_crc(p_1065->g_34.s5, "p_1065->g_34.s5", print_hash_value);
    transparent_crc(p_1065->g_34.s6, "p_1065->g_34.s6", print_hash_value);
    transparent_crc(p_1065->g_34.s7, "p_1065->g_34.s7", print_hash_value);
    transparent_crc(p_1065->g_34.s8, "p_1065->g_34.s8", print_hash_value);
    transparent_crc(p_1065->g_34.s9, "p_1065->g_34.s9", print_hash_value);
    transparent_crc(p_1065->g_34.sa, "p_1065->g_34.sa", print_hash_value);
    transparent_crc(p_1065->g_34.sb, "p_1065->g_34.sb", print_hash_value);
    transparent_crc(p_1065->g_34.sc, "p_1065->g_34.sc", print_hash_value);
    transparent_crc(p_1065->g_34.sd, "p_1065->g_34.sd", print_hash_value);
    transparent_crc(p_1065->g_34.se, "p_1065->g_34.se", print_hash_value);
    transparent_crc(p_1065->g_34.sf, "p_1065->g_34.sf", print_hash_value);
    transparent_crc(p_1065->g_36.x, "p_1065->g_36.x", print_hash_value);
    transparent_crc(p_1065->g_36.y, "p_1065->g_36.y", print_hash_value);
    transparent_crc(p_1065->g_36.z, "p_1065->g_36.z", print_hash_value);
    transparent_crc(p_1065->g_36.w, "p_1065->g_36.w", print_hash_value);
    transparent_crc(p_1065->g_39, "p_1065->g_39", print_hash_value);
    transparent_crc(p_1065->g_73.x, "p_1065->g_73.x", print_hash_value);
    transparent_crc(p_1065->g_73.y, "p_1065->g_73.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1065->g_89[i], "p_1065->g_89[i]", print_hash_value);

    }
    transparent_crc(p_1065->g_95.s0, "p_1065->g_95.s0", print_hash_value);
    transparent_crc(p_1065->g_95.s1, "p_1065->g_95.s1", print_hash_value);
    transparent_crc(p_1065->g_95.s2, "p_1065->g_95.s2", print_hash_value);
    transparent_crc(p_1065->g_95.s3, "p_1065->g_95.s3", print_hash_value);
    transparent_crc(p_1065->g_95.s4, "p_1065->g_95.s4", print_hash_value);
    transparent_crc(p_1065->g_95.s5, "p_1065->g_95.s5", print_hash_value);
    transparent_crc(p_1065->g_95.s6, "p_1065->g_95.s6", print_hash_value);
    transparent_crc(p_1065->g_95.s7, "p_1065->g_95.s7", print_hash_value);
    transparent_crc(p_1065->g_108.s0, "p_1065->g_108.s0", print_hash_value);
    transparent_crc(p_1065->g_108.s1, "p_1065->g_108.s1", print_hash_value);
    transparent_crc(p_1065->g_108.s2, "p_1065->g_108.s2", print_hash_value);
    transparent_crc(p_1065->g_108.s3, "p_1065->g_108.s3", print_hash_value);
    transparent_crc(p_1065->g_108.s4, "p_1065->g_108.s4", print_hash_value);
    transparent_crc(p_1065->g_108.s5, "p_1065->g_108.s5", print_hash_value);
    transparent_crc(p_1065->g_108.s6, "p_1065->g_108.s6", print_hash_value);
    transparent_crc(p_1065->g_108.s7, "p_1065->g_108.s7", print_hash_value);
    transparent_crc(p_1065->g_113.s0, "p_1065->g_113.s0", print_hash_value);
    transparent_crc(p_1065->g_113.s1, "p_1065->g_113.s1", print_hash_value);
    transparent_crc(p_1065->g_113.s2, "p_1065->g_113.s2", print_hash_value);
    transparent_crc(p_1065->g_113.s3, "p_1065->g_113.s3", print_hash_value);
    transparent_crc(p_1065->g_113.s4, "p_1065->g_113.s4", print_hash_value);
    transparent_crc(p_1065->g_113.s5, "p_1065->g_113.s5", print_hash_value);
    transparent_crc(p_1065->g_113.s6, "p_1065->g_113.s6", print_hash_value);
    transparent_crc(p_1065->g_113.s7, "p_1065->g_113.s7", print_hash_value);
    transparent_crc(p_1065->g_113.s8, "p_1065->g_113.s8", print_hash_value);
    transparent_crc(p_1065->g_113.s9, "p_1065->g_113.s9", print_hash_value);
    transparent_crc(p_1065->g_113.sa, "p_1065->g_113.sa", print_hash_value);
    transparent_crc(p_1065->g_113.sb, "p_1065->g_113.sb", print_hash_value);
    transparent_crc(p_1065->g_113.sc, "p_1065->g_113.sc", print_hash_value);
    transparent_crc(p_1065->g_113.sd, "p_1065->g_113.sd", print_hash_value);
    transparent_crc(p_1065->g_113.se, "p_1065->g_113.se", print_hash_value);
    transparent_crc(p_1065->g_113.sf, "p_1065->g_113.sf", print_hash_value);
    transparent_crc(p_1065->g_114.x, "p_1065->g_114.x", print_hash_value);
    transparent_crc(p_1065->g_114.y, "p_1065->g_114.y", print_hash_value);
    transparent_crc(p_1065->g_114.z, "p_1065->g_114.z", print_hash_value);
    transparent_crc(p_1065->g_114.w, "p_1065->g_114.w", print_hash_value);
    transparent_crc(p_1065->g_120.s0, "p_1065->g_120.s0", print_hash_value);
    transparent_crc(p_1065->g_120.s1, "p_1065->g_120.s1", print_hash_value);
    transparent_crc(p_1065->g_120.s2, "p_1065->g_120.s2", print_hash_value);
    transparent_crc(p_1065->g_120.s3, "p_1065->g_120.s3", print_hash_value);
    transparent_crc(p_1065->g_120.s4, "p_1065->g_120.s4", print_hash_value);
    transparent_crc(p_1065->g_120.s5, "p_1065->g_120.s5", print_hash_value);
    transparent_crc(p_1065->g_120.s6, "p_1065->g_120.s6", print_hash_value);
    transparent_crc(p_1065->g_120.s7, "p_1065->g_120.s7", print_hash_value);
    transparent_crc(p_1065->g_189, "p_1065->g_189", print_hash_value);
    transparent_crc(p_1065->g_216.x, "p_1065->g_216.x", print_hash_value);
    transparent_crc(p_1065->g_216.y, "p_1065->g_216.y", print_hash_value);
    transparent_crc(p_1065->g_216.z, "p_1065->g_216.z", print_hash_value);
    transparent_crc(p_1065->g_216.w, "p_1065->g_216.w", print_hash_value);
    transparent_crc(p_1065->g_222, "p_1065->g_222", print_hash_value);
    transparent_crc(p_1065->g_234, "p_1065->g_234", print_hash_value);
    transparent_crc(p_1065->g_250, "p_1065->g_250", print_hash_value);
    transparent_crc(p_1065->g_267, "p_1065->g_267", print_hash_value);
    transparent_crc(p_1065->g_286, "p_1065->g_286", print_hash_value);
    transparent_crc(p_1065->g_345.s0, "p_1065->g_345.s0", print_hash_value);
    transparent_crc(p_1065->g_345.s1, "p_1065->g_345.s1", print_hash_value);
    transparent_crc(p_1065->g_345.s2, "p_1065->g_345.s2", print_hash_value);
    transparent_crc(p_1065->g_345.s3, "p_1065->g_345.s3", print_hash_value);
    transparent_crc(p_1065->g_345.s4, "p_1065->g_345.s4", print_hash_value);
    transparent_crc(p_1065->g_345.s5, "p_1065->g_345.s5", print_hash_value);
    transparent_crc(p_1065->g_345.s6, "p_1065->g_345.s6", print_hash_value);
    transparent_crc(p_1065->g_345.s7, "p_1065->g_345.s7", print_hash_value);
    transparent_crc(p_1065->g_349, "p_1065->g_349", print_hash_value);
    transparent_crc(p_1065->g_350.x, "p_1065->g_350.x", print_hash_value);
    transparent_crc(p_1065->g_350.y, "p_1065->g_350.y", print_hash_value);
    transparent_crc(p_1065->g_373.s0, "p_1065->g_373.s0", print_hash_value);
    transparent_crc(p_1065->g_373.s1, "p_1065->g_373.s1", print_hash_value);
    transparent_crc(p_1065->g_373.s2, "p_1065->g_373.s2", print_hash_value);
    transparent_crc(p_1065->g_373.s3, "p_1065->g_373.s3", print_hash_value);
    transparent_crc(p_1065->g_373.s4, "p_1065->g_373.s4", print_hash_value);
    transparent_crc(p_1065->g_373.s5, "p_1065->g_373.s5", print_hash_value);
    transparent_crc(p_1065->g_373.s6, "p_1065->g_373.s6", print_hash_value);
    transparent_crc(p_1065->g_373.s7, "p_1065->g_373.s7", print_hash_value);
    transparent_crc(p_1065->g_421.s0, "p_1065->g_421.s0", print_hash_value);
    transparent_crc(p_1065->g_421.s1, "p_1065->g_421.s1", print_hash_value);
    transparent_crc(p_1065->g_421.s2, "p_1065->g_421.s2", print_hash_value);
    transparent_crc(p_1065->g_421.s3, "p_1065->g_421.s3", print_hash_value);
    transparent_crc(p_1065->g_421.s4, "p_1065->g_421.s4", print_hash_value);
    transparent_crc(p_1065->g_421.s5, "p_1065->g_421.s5", print_hash_value);
    transparent_crc(p_1065->g_421.s6, "p_1065->g_421.s6", print_hash_value);
    transparent_crc(p_1065->g_421.s7, "p_1065->g_421.s7", print_hash_value);
    transparent_crc(p_1065->g_430.x, "p_1065->g_430.x", print_hash_value);
    transparent_crc(p_1065->g_430.y, "p_1065->g_430.y", print_hash_value);
    transparent_crc(p_1065->g_430.z, "p_1065->g_430.z", print_hash_value);
    transparent_crc(p_1065->g_430.w, "p_1065->g_430.w", print_hash_value);
    transparent_crc(p_1065->g_432.x, "p_1065->g_432.x", print_hash_value);
    transparent_crc(p_1065->g_432.y, "p_1065->g_432.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1065->g_461[i][j][k], "p_1065->g_461[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1065->g_486, "p_1065->g_486", print_hash_value);
    transparent_crc(p_1065->g_488, "p_1065->g_488", print_hash_value);
    transparent_crc(p_1065->g_527, "p_1065->g_527", print_hash_value);
    transparent_crc(p_1065->g_530, "p_1065->g_530", print_hash_value);
    transparent_crc(p_1065->g_537, "p_1065->g_537", print_hash_value);
    transparent_crc(p_1065->g_617.f0, "p_1065->g_617.f0", print_hash_value);
    transparent_crc(p_1065->g_745.s0, "p_1065->g_745.s0", print_hash_value);
    transparent_crc(p_1065->g_745.s1, "p_1065->g_745.s1", print_hash_value);
    transparent_crc(p_1065->g_745.s2, "p_1065->g_745.s2", print_hash_value);
    transparent_crc(p_1065->g_745.s3, "p_1065->g_745.s3", print_hash_value);
    transparent_crc(p_1065->g_745.s4, "p_1065->g_745.s4", print_hash_value);
    transparent_crc(p_1065->g_745.s5, "p_1065->g_745.s5", print_hash_value);
    transparent_crc(p_1065->g_745.s6, "p_1065->g_745.s6", print_hash_value);
    transparent_crc(p_1065->g_745.s7, "p_1065->g_745.s7", print_hash_value);
    transparent_crc(p_1065->g_760.x, "p_1065->g_760.x", print_hash_value);
    transparent_crc(p_1065->g_760.y, "p_1065->g_760.y", print_hash_value);
    transparent_crc(p_1065->g_769.s0, "p_1065->g_769.s0", print_hash_value);
    transparent_crc(p_1065->g_769.s1, "p_1065->g_769.s1", print_hash_value);
    transparent_crc(p_1065->g_769.s2, "p_1065->g_769.s2", print_hash_value);
    transparent_crc(p_1065->g_769.s3, "p_1065->g_769.s3", print_hash_value);
    transparent_crc(p_1065->g_769.s4, "p_1065->g_769.s4", print_hash_value);
    transparent_crc(p_1065->g_769.s5, "p_1065->g_769.s5", print_hash_value);
    transparent_crc(p_1065->g_769.s6, "p_1065->g_769.s6", print_hash_value);
    transparent_crc(p_1065->g_769.s7, "p_1065->g_769.s7", print_hash_value);
    transparent_crc(p_1065->g_769.s8, "p_1065->g_769.s8", print_hash_value);
    transparent_crc(p_1065->g_769.s9, "p_1065->g_769.s9", print_hash_value);
    transparent_crc(p_1065->g_769.sa, "p_1065->g_769.sa", print_hash_value);
    transparent_crc(p_1065->g_769.sb, "p_1065->g_769.sb", print_hash_value);
    transparent_crc(p_1065->g_769.sc, "p_1065->g_769.sc", print_hash_value);
    transparent_crc(p_1065->g_769.sd, "p_1065->g_769.sd", print_hash_value);
    transparent_crc(p_1065->g_769.se, "p_1065->g_769.se", print_hash_value);
    transparent_crc(p_1065->g_769.sf, "p_1065->g_769.sf", print_hash_value);
    transparent_crc(p_1065->g_770.s0, "p_1065->g_770.s0", print_hash_value);
    transparent_crc(p_1065->g_770.s1, "p_1065->g_770.s1", print_hash_value);
    transparent_crc(p_1065->g_770.s2, "p_1065->g_770.s2", print_hash_value);
    transparent_crc(p_1065->g_770.s3, "p_1065->g_770.s3", print_hash_value);
    transparent_crc(p_1065->g_770.s4, "p_1065->g_770.s4", print_hash_value);
    transparent_crc(p_1065->g_770.s5, "p_1065->g_770.s5", print_hash_value);
    transparent_crc(p_1065->g_770.s6, "p_1065->g_770.s6", print_hash_value);
    transparent_crc(p_1065->g_770.s7, "p_1065->g_770.s7", print_hash_value);
    transparent_crc(p_1065->g_823.s0, "p_1065->g_823.s0", print_hash_value);
    transparent_crc(p_1065->g_823.s1, "p_1065->g_823.s1", print_hash_value);
    transparent_crc(p_1065->g_823.s2, "p_1065->g_823.s2", print_hash_value);
    transparent_crc(p_1065->g_823.s3, "p_1065->g_823.s3", print_hash_value);
    transparent_crc(p_1065->g_823.s4, "p_1065->g_823.s4", print_hash_value);
    transparent_crc(p_1065->g_823.s5, "p_1065->g_823.s5", print_hash_value);
    transparent_crc(p_1065->g_823.s6, "p_1065->g_823.s6", print_hash_value);
    transparent_crc(p_1065->g_823.s7, "p_1065->g_823.s7", print_hash_value);
    transparent_crc(p_1065->g_823.s8, "p_1065->g_823.s8", print_hash_value);
    transparent_crc(p_1065->g_823.s9, "p_1065->g_823.s9", print_hash_value);
    transparent_crc(p_1065->g_823.sa, "p_1065->g_823.sa", print_hash_value);
    transparent_crc(p_1065->g_823.sb, "p_1065->g_823.sb", print_hash_value);
    transparent_crc(p_1065->g_823.sc, "p_1065->g_823.sc", print_hash_value);
    transparent_crc(p_1065->g_823.sd, "p_1065->g_823.sd", print_hash_value);
    transparent_crc(p_1065->g_823.se, "p_1065->g_823.se", print_hash_value);
    transparent_crc(p_1065->g_823.sf, "p_1065->g_823.sf", print_hash_value);
    transparent_crc(p_1065->g_825.x, "p_1065->g_825.x", print_hash_value);
    transparent_crc(p_1065->g_825.y, "p_1065->g_825.y", print_hash_value);
    transparent_crc(p_1065->g_895.x, "p_1065->g_895.x", print_hash_value);
    transparent_crc(p_1065->g_895.y, "p_1065->g_895.y", print_hash_value);
    transparent_crc(p_1065->g_895.z, "p_1065->g_895.z", print_hash_value);
    transparent_crc(p_1065->g_895.w, "p_1065->g_895.w", print_hash_value);
    transparent_crc(p_1065->g_897.s0, "p_1065->g_897.s0", print_hash_value);
    transparent_crc(p_1065->g_897.s1, "p_1065->g_897.s1", print_hash_value);
    transparent_crc(p_1065->g_897.s2, "p_1065->g_897.s2", print_hash_value);
    transparent_crc(p_1065->g_897.s3, "p_1065->g_897.s3", print_hash_value);
    transparent_crc(p_1065->g_897.s4, "p_1065->g_897.s4", print_hash_value);
    transparent_crc(p_1065->g_897.s5, "p_1065->g_897.s5", print_hash_value);
    transparent_crc(p_1065->g_897.s6, "p_1065->g_897.s6", print_hash_value);
    transparent_crc(p_1065->g_897.s7, "p_1065->g_897.s7", print_hash_value);
    transparent_crc(p_1065->g_905.s0, "p_1065->g_905.s0", print_hash_value);
    transparent_crc(p_1065->g_905.s1, "p_1065->g_905.s1", print_hash_value);
    transparent_crc(p_1065->g_905.s2, "p_1065->g_905.s2", print_hash_value);
    transparent_crc(p_1065->g_905.s3, "p_1065->g_905.s3", print_hash_value);
    transparent_crc(p_1065->g_905.s4, "p_1065->g_905.s4", print_hash_value);
    transparent_crc(p_1065->g_905.s5, "p_1065->g_905.s5", print_hash_value);
    transparent_crc(p_1065->g_905.s6, "p_1065->g_905.s6", print_hash_value);
    transparent_crc(p_1065->g_905.s7, "p_1065->g_905.s7", print_hash_value);
    transparent_crc(p_1065->g_925, "p_1065->g_925", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1065->g_937[i].f0, "p_1065->g_937[i].f0", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1065->g_941[i].f0, "p_1065->g_941[i].f0", print_hash_value);

    }
    transparent_crc(p_1065->g_1006, "p_1065->g_1006", print_hash_value);
    transparent_crc(p_1065->g_1011.s0, "p_1065->g_1011.s0", print_hash_value);
    transparent_crc(p_1065->g_1011.s1, "p_1065->g_1011.s1", print_hash_value);
    transparent_crc(p_1065->g_1011.s2, "p_1065->g_1011.s2", print_hash_value);
    transparent_crc(p_1065->g_1011.s3, "p_1065->g_1011.s3", print_hash_value);
    transparent_crc(p_1065->g_1011.s4, "p_1065->g_1011.s4", print_hash_value);
    transparent_crc(p_1065->g_1011.s5, "p_1065->g_1011.s5", print_hash_value);
    transparent_crc(p_1065->g_1011.s6, "p_1065->g_1011.s6", print_hash_value);
    transparent_crc(p_1065->g_1011.s7, "p_1065->g_1011.s7", print_hash_value);
    transparent_crc(p_1065->g_1011.s8, "p_1065->g_1011.s8", print_hash_value);
    transparent_crc(p_1065->g_1011.s9, "p_1065->g_1011.s9", print_hash_value);
    transparent_crc(p_1065->g_1011.sa, "p_1065->g_1011.sa", print_hash_value);
    transparent_crc(p_1065->g_1011.sb, "p_1065->g_1011.sb", print_hash_value);
    transparent_crc(p_1065->g_1011.sc, "p_1065->g_1011.sc", print_hash_value);
    transparent_crc(p_1065->g_1011.sd, "p_1065->g_1011.sd", print_hash_value);
    transparent_crc(p_1065->g_1011.se, "p_1065->g_1011.se", print_hash_value);
    transparent_crc(p_1065->g_1011.sf, "p_1065->g_1011.sf", print_hash_value);
    transparent_crc(p_1065->g_1025.s0, "p_1065->g_1025.s0", print_hash_value);
    transparent_crc(p_1065->g_1025.s1, "p_1065->g_1025.s1", print_hash_value);
    transparent_crc(p_1065->g_1025.s2, "p_1065->g_1025.s2", print_hash_value);
    transparent_crc(p_1065->g_1025.s3, "p_1065->g_1025.s3", print_hash_value);
    transparent_crc(p_1065->g_1025.s4, "p_1065->g_1025.s4", print_hash_value);
    transparent_crc(p_1065->g_1025.s5, "p_1065->g_1025.s5", print_hash_value);
    transparent_crc(p_1065->g_1025.s6, "p_1065->g_1025.s6", print_hash_value);
    transparent_crc(p_1065->g_1025.s7, "p_1065->g_1025.s7", print_hash_value);
    transparent_crc(p_1065->g_1026.x, "p_1065->g_1026.x", print_hash_value);
    transparent_crc(p_1065->g_1026.y, "p_1065->g_1026.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1065->g_1054[i].f0, "p_1065->g_1054[i].f0", print_hash_value);

    }
    transparent_crc(p_1065->g_1058.f0, "p_1065->g_1058.f0", print_hash_value);
    transparent_crc(p_1065->v_collective, "p_1065->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 80; i++)
            transparent_crc(p_1065->g_special_values[i + 80 * get_linear_group_id()], "p_1065->g_special_values[i + 80 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 80; i++)
            transparent_crc(p_1065->l_special_values[i], "p_1065->l_special_values[i]", print_hash_value);
    transparent_crc(p_1065->l_comm_values[get_linear_local_id()], "p_1065->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1065->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()], "p_1065->g_comm_values[get_linear_group_id() * 15 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
