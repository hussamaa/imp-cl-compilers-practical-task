// --atomics 64 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 98,83,1 -l 2,1,1
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

// Seed: 727483587

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t * f0;
};

struct S1 {
    uint8_t g_6;
    VECTOR(int32_t, 4) g_11;
    uint64_t g_19;
    int32_t *g_26;
    uint64_t g_37[9];
    union U0 g_52;
    int8_t g_69[10];
    int32_t * volatile g_210;
    int32_t * volatile g_211;
    int32_t * volatile g_216;
    int32_t * volatile g_218;
    int32_t * volatile * volatile g_227;
    volatile int32_t g_228;
    volatile int32_t g_229;
    volatile int32_t g_230;
    volatile int32_t g_231;
    volatile int32_t g_232[5][3][7];
    volatile int32_t g_233;
    int32_t g_234[10];
    VECTOR(int8_t, 8) g_246;
    volatile VECTOR(int8_t, 16) g_248;
    volatile VECTOR(int16_t, 2) g_261;
    uint8_t g_296;
    int8_t g_314;
    int8_t g_316;
    int8_t g_319;
    int32_t g_321;
    volatile VECTOR(int32_t, 16) g_333;
    VECTOR(uint32_t, 2) g_334;
    uint8_t * volatile g_341;
    uint8_t *g_342;
    uint8_t * volatile *g_340[4][1][5];
    int16_t g_344[5][6];
    uint32_t g_358;
    int32_t * volatile g_366[10][9][2];
    int32_t * volatile g_367;
    int32_t * volatile * volatile g_375;
    uint8_t g_425;
    VECTOR(int32_t, 8) g_432;
    VECTOR(uint32_t, 16) g_452;
    uint32_t g_465[7];
    volatile VECTOR(uint64_t, 4) g_470;
    union U0 *g_483;
    int32_t * volatile * volatile g_562;
    int32_t * volatile g_563[4];
    int32_t * volatile g_564;
    int32_t ** volatile g_573;
    VECTOR(int64_t, 16) g_583;
    VECTOR(int8_t, 8) g_584;
    uint64_t *g_588[7];
    uint64_t **g_587;
    int64_t g_590;
    int32_t ** volatile g_611;
    VECTOR(int32_t, 8) g_615;
    volatile VECTOR(uint16_t, 16) g_622;
    int32_t g_632;
    VECTOR(uint16_t, 4) g_674;
    VECTOR(int8_t, 2) g_697;
    VECTOR(int8_t, 4) g_699;
    union U0 *g_713;
    volatile VECTOR(uint8_t, 4) g_743;
    int16_t g_745;
    uint8_t g_751;
    volatile VECTOR(uint16_t, 2) g_756;
    VECTOR(uint8_t, 2) g_757;
    volatile uint32_t g_774;
    int32_t ** volatile g_786;
    int32_t ** volatile g_787;
    int32_t *g_818;
    int32_t **g_817;
    int32_t g_839;
    int32_t g_840;
    uint32_t g_846;
    VECTOR(uint8_t, 4) g_853;
    volatile VECTOR(uint32_t, 8) g_861;
    int32_t ** volatile g_890;
    int32_t * volatile g_929;
    VECTOR(int32_t, 2) g_949;
    VECTOR(int32_t, 8) g_950;
    volatile VECTOR(int8_t, 4) g_959;
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
uint16_t  func_1(struct S1 * p_1004);
int32_t * func_2(uint16_t  p_3, struct S1 * p_1004);
union U0  func_22(int32_t * p_23, int32_t * p_24, struct S1 * p_1004);
union U0 * func_32(int32_t  p_33, union U0 * p_34, int64_t  p_35, uint32_t  p_36, struct S1 * p_1004);
uint16_t  func_44(uint8_t * p_45, struct S1 * p_1004);
int8_t  func_46(union U0 * p_47, int32_t  p_48, uint16_t  p_49, int64_t  p_50, struct S1 * p_1004);
uint16_t  func_53(union U0 * p_54, int16_t  p_55, int8_t  p_56, uint64_t  p_57, uint16_t  p_58, struct S1 * p_1004);
int16_t  func_73(int32_t * p_74, int8_t  p_75, uint16_t  p_76, struct S1 * p_1004);
union U0  func_77(union U0  p_78, struct S1 * p_1004);
uint8_t * func_219(int32_t ** p_220, struct S1 * p_1004);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1004->l_comm_values p_1004->g_6 p_1004->g_11 p_1004->g_19 p_1004->g_26 p_1004->g_234 p_1004->g_comm_values p_1004->g_452 p_1004->g_229 p_1004->g_817 p_1004->g_818 p_1004->g_632 p_1004->g_590 p_1004->g_248 p_1004->g_334 p_1004->g_751 p_1004->g_246 p_1004->g_342 p_1004->g_296 p_1004->g_839 p_1004->g_840 p_1004->g_615 p_1004->g_321 p_1004->g_432 p_1004->g_52 p_1004->g_853 p_1004->g_756 p_1004->g_745 p_1004->g_861 p_1004->g_316 p_1004->g_228 p_1004->g_69 p_1004->g_674 p_1004->g_314 p_1004->g_699 p_1004->g_890 p_1004->g_587 p_1004->g_611 p_1004->g_573 p_1004->g_949 p_1004->g_950 p_1004->g_959 p_1004->g_344 p_1004->g_358 p_1004->g_37 p_1004->g_425 p_1004->g_227 p_1004->g_218 p_1004->g_231
 * writes: p_1004->g_6 p_1004->g_19 p_1004->g_452 p_1004->g_817 p_1004->g_674 p_1004->g_37 p_1004->g_344 p_1004->g_745 p_1004->g_839 p_1004->g_840 p_1004->g_846 p_1004->g_697 p_1004->g_69 p_1004->g_432 p_1004->g_26 p_1004->g_321 p_1004->g_316 p_1004->g_314 p_1004->g_588 p_1004->g_465 p_1004->g_296 p_1004->g_425 p_1004->g_563 p_1004->g_234
 */
uint16_t  func_1(struct S1 * p_1004)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_12 = (VECTOR(int32_t, 16))(0x04286A4AL, (VECTOR(int32_t, 4))(0x04286A4AL, (VECTOR(int32_t, 2))(0x04286A4AL, 0x71EB7E59L), 0x71EB7E59L), 0x71EB7E59L, 0x04286A4AL, 0x71EB7E59L, (VECTOR(int32_t, 2))(0x04286A4AL, 0x71EB7E59L), (VECTOR(int32_t, 2))(0x04286A4AL, 0x71EB7E59L), 0x04286A4AL, 0x71EB7E59L, 0x04286A4AL, 0x71EB7E59L);
    VECTOR(int32_t, 8) l_13 = (VECTOR(int32_t, 8))(0x5AAFD55BL, (VECTOR(int32_t, 4))(0x5AAFD55BL, (VECTOR(int32_t, 2))(0x5AAFD55BL, 0x043C6BCFL), 0x043C6BCFL), 0x043C6BCFL, 0x5AAFD55BL, 0x043C6BCFL);
    int32_t *l_25 = (void*)0;
    int32_t l_855[5];
    int16_t l_856 = 0L;
    uint32_t l_857 = 0x3B419BB0L;
    int8_t l_952 = 0L;
    VECTOR(int32_t, 2) l_953 = (VECTOR(int32_t, 2))(0x068D0050L, 0x3522606FL);
    VECTOR(int8_t, 4) l_958 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x3EL), 0x3EL);
    uint8_t l_968[7][4][4] = {{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}},{{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL},{1UL,0x1BL,9UL,8UL}}};
    int32_t * volatile *l_983 = &p_1004->g_563[3];
    int32_t *l_984 = &p_1004->g_234[4];
    int32_t *l_985 = &p_1004->g_234[9];
    int32_t *l_986 = (void*)0;
    int32_t *l_987[1][10][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1004->g_234[2],(void*)0,(void*)0}}};
    uint32_t l_988 = 0UL;
    int32_t l_1003 = 0L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_855[i] = 0x63099772L;
    if (p_1004->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1004->tid, 2))])
    { /* block id: 5 */
        uint8_t l_4[5][10][4] = {{{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L}},{{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L}},{{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L}},{{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L}},{{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L},{0xD6L,0UL,255UL,0xA6L}}};
        uint8_t *l_5 = &p_1004->g_6;
        uint64_t *l_18 = &p_1004->g_19;
        int8_t *l_854 = &p_1004->g_69[5];
        int32_t **l_931 = &p_1004->g_26;
        int16_t *l_938 = (void*)0;
        VECTOR(int32_t, 8) l_947 = (VECTOR(int32_t, 8))(0x7DA15228L, (VECTOR(int32_t, 4))(0x7DA15228L, (VECTOR(int32_t, 2))(0x7DA15228L, 0x26BF01FCL), 0x26BF01FCL), 0x26BF01FCL, 0x7DA15228L, 0x26BF01FCL);
        VECTOR(int32_t, 16) l_948 = (VECTOR(int32_t, 16))(0x34058862L, (VECTOR(int32_t, 4))(0x34058862L, (VECTOR(int32_t, 2))(0x34058862L, 0x09753157L), 0x09753157L), 0x09753157L, 0x34058862L, 0x09753157L, (VECTOR(int32_t, 2))(0x34058862L, 0x09753157L), (VECTOR(int32_t, 2))(0x34058862L, 0x09753157L), 0x34058862L, 0x09753157L, 0x34058862L, 0x09753157L);
        VECTOR(int32_t, 2) l_951 = (VECTOR(int32_t, 2))(0x33013A55L, 0x35529881L);
        int32_t *l_969 = (void*)0;
        int32_t *l_970 = (void*)0;
        int32_t *l_971[10] = {&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321};
        uint16_t *l_972[6][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        (*l_931) = func_2((((*l_5) ^= l_4[3][7][1]) > ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1004->g_11.xx)), ((VECTOR(int32_t, 8))(l_12.s50169ff9)), ((VECTOR(int32_t, 2))((-3L), 0x39A67B9CL)), 0x135CB514L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_13.s3656544016072546)).even, (int32_t)(safe_add_func_int16_t_s_s(((l_855[3] = (safe_sub_func_int16_t_s_s(((((((*l_18)++) , ((+l_4[3][7][1]) ^ (func_22(l_25, p_1004->g_26, p_1004) , (safe_lshift_func_uint8_t_u_s((*p_1004->g_342), ((*l_854) = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_1004->g_853.xw)))).lo , l_4[3][7][1]))))))) ^ 0x0032L) , l_4[3][7][1]) >= 0UL), l_4[3][1][0]))) || l_856), 0x183DL))))).s60, ((VECTOR(int32_t, 2))((-1L)))))), 0x28B43BEEL)).sda23, ((VECTOR(int32_t, 4))(0x30529934L))))).y, l_857)), (*p_1004->g_342))) , p_1004->g_756.y)), p_1004);
        l_13.s3 = (safe_sub_func_int8_t_s_s(0x79L, (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-4L), 0x1CL)).yxyxyyyy)).s1, (safe_rshift_func_int8_t_s_s(((p_1004->g_745 ^= p_1004->g_615.s4) != ((((((safe_mul_func_int16_t_s_s((((void*)0 == (*p_1004->g_817)) < (safe_div_func_int8_t_s_s(((*l_854) |= (safe_rshift_func_int8_t_s_s(0x25L, 4))), (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_947.s1117)).even)).yxxx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_948.s3802)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(p_1004->g_949.xxyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1004->g_950.s6655)), ((VECTOR(int32_t, 4))(l_951.xyyy)), l_952, ((VECTOR(int32_t, 4))(l_953.yyyy)), ((l_12.s6 |= ((safe_rshift_func_uint8_t_u_u((((!(safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(0x39L, ((VECTOR(int8_t, 8))(l_958.xwxzwzxy)), ((VECTOR(int8_t, 2))(p_1004->g_959.yz)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((safe_sub_func_uint32_t_u_u(0x3DA57742L, (p_1004->g_344[1][4] > (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((((VECTOR(int64_t, 8))((safe_div_func_uint8_t_u_u(l_968[2][0][1], l_855[3])), ((VECTOR(int64_t, 4))((-6L))), ((VECTOR(int64_t, 2))(0L)), 0x5A2FC354EAA12772L)).s0 > p_1004->g_756.x) != p_1004->g_358) != p_1004->g_234[0]), 0)), p_1004->g_37[3]))))), (-5L), 0x18L, 0x43L)).yyyxyxxy)), ((VECTOR(int8_t, 8))(0x39L))))).s01)))), ((VECTOR(int8_t, 2))(0x72L)), 0x68L)).sd4, ((VECTOR(int8_t, 2))(0L))))).odd, GROUP_DIVERGE(0, 1)))) ^ 255UL) | 0x48D7CE95L), 0)) , l_953.x)) != (-1L)), 0x1B6579F4L, 0x2CACEF26L)).s7f04))))))))).y, 1L))))), (-5L))) | l_857) , 0L) ^ (-1L)) != p_1004->g_6) < p_1004->g_590)), l_855[1]))))));
        (*l_931) = func_2((p_1004->g_674.y--), p_1004);
        for (p_1004->g_425 = 0; (p_1004->g_425 > 47); ++p_1004->g_425)
        { /* block id: 417 */
            uint32_t l_977 = 0xEDA6B4A7L;
            l_953.y &= l_977;
        }
    }
    else
    { /* block id: 420 */
        for (l_952 = (-6); (l_952 < (-21)); l_952 = safe_sub_func_int64_t_s_s(l_952, 3))
        { /* block id: 423 */
            uint16_t l_982 = 0x9414L;
            for (p_1004->g_296 = (-23); (p_1004->g_296 == 46); ++p_1004->g_296)
            { /* block id: 426 */
                if (l_982)
                    break;
            }
        }
    }
    (*l_983) = (*p_1004->g_227);
    l_988++;
    for (p_1004->g_296 = 0; (p_1004->g_296 == 56); p_1004->g_296++)
    { /* block id: 435 */
        int32_t *l_993[10] = {&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321,&p_1004->g_321};
        int64_t l_998 = 0x48875D23646E94F0L;
        union U0 ***l_999 = (void*)0;
        union U0 ***l_1001 = (void*)0;
        union U0 ****l_1000 = &l_1001;
        uint8_t *l_1002 = &p_1004->g_6;
        int i;
        l_993[2] = (*p_1004->g_573);
        for (p_1004->g_425 = 0; (p_1004->g_425 > 42); ++p_1004->g_425)
        { /* block id: 439 */
            return p_1004->g_231;
        }
        (*l_985) = (safe_rshift_func_int8_t_s_u(l_998, ((*l_1002) ^= ((l_999 == ((*l_1000) = l_999)) & ((VECTOR(uint32_t, 2))(0xB58A522BL, 7UL)).hi))));
        l_1003 &= (*l_984);
    }
    return (*l_984);
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_745 p_1004->g_861 p_1004->g_6 p_1004->g_316 p_1004->g_228 p_1004->g_69 p_1004->g_674 p_1004->g_314 p_1004->g_246 p_1004->g_699 p_1004->g_890 p_1004->g_587 p_1004->g_432 p_1004->g_26 p_1004->g_234 p_1004->g_comm_values p_1004->g_452 p_1004->g_229 p_1004->g_817 p_1004->g_248 p_1004->g_334 p_1004->g_751 p_1004->g_11 p_1004->g_342 p_1004->g_296 p_1004->g_839 p_1004->g_840 p_1004->g_615 p_1004->g_321 p_1004->g_52 p_1004->g_611 p_1004->g_573
 * writes: p_1004->g_745 p_1004->g_26 p_1004->g_321 p_1004->g_6 p_1004->g_316 p_1004->g_846 p_1004->g_314 p_1004->g_588 p_1004->g_344 p_1004->g_465 p_1004->g_19 p_1004->g_452 p_1004->g_817 p_1004->g_674 p_1004->g_37 p_1004->g_839 p_1004->g_840 p_1004->g_697 p_1004->g_69 p_1004->g_432 p_1004->g_296
 */
int32_t * func_2(uint16_t  p_3, struct S1 * p_1004)
{ /* block id: 374 */
    VECTOR(int8_t, 2) l_881 = (VECTOR(int8_t, 2))(5L, 8L);
    uint32_t l_889 = 0xE580B3E7L;
    int32_t l_910 = 2L;
    int32_t l_914 = 1L;
    int32_t l_917 = (-9L);
    union U0 *l_925[6] = {&p_1004->g_52,&p_1004->g_52,&p_1004->g_52,&p_1004->g_52,&p_1004->g_52,&p_1004->g_52};
    int32_t *l_927 = (void*)0;
    int32_t *l_930 = &l_910;
    int i;
    for (p_1004->g_745 = 0; (p_1004->g_745 != 15); p_1004->g_745++)
    { /* block id: 377 */
        int32_t **l_860 = &p_1004->g_26;
        int32_t *l_862 = &p_1004->g_321;
        (*l_860) = (void*)0;
        (*l_862) = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_1004->g_861.s11611346)))))).lo)).zyyyyyzwzxyywyxx)).s9 , p_3);
    }
    for (p_1004->g_6 = 14; (p_1004->g_6 < 11); p_1004->g_6--)
    { /* block id: 383 */
        uint8_t l_874 = 0xDCL;
        uint32_t *l_876 = &p_1004->g_846;
        VECTOR(int8_t, 16) l_882 = (VECTOR(int8_t, 16))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x75L), 0x75L), 0x75L, 0x41L, 0x75L, (VECTOR(int8_t, 2))(0x41L, 0x75L), (VECTOR(int8_t, 2))(0x41L, 0x75L), 0x41L, 0x75L, 0x41L, 0x75L);
        uint64_t *l_901 = &p_1004->g_19;
        int32_t l_913 = 0x00040F49L;
        uint8_t l_918 = 0xB8L;
        int i;
        for (p_1004->g_316 = 0; (p_1004->g_316 != (-11)); p_1004->g_316 = safe_sub_func_int8_t_s_s(p_1004->g_316, 6))
        { /* block id: 386 */
            int32_t l_871 = 0x1A52355EL;
            uint32_t *l_875 = &p_1004->g_465[4];
            int8_t *l_885 = (void*)0;
            int8_t *l_886 = (void*)0;
            int8_t *l_887 = (void*)0;
            int8_t *l_888 = &p_1004->g_314;
            uint64_t *l_900 = (void*)0;
            int32_t l_911 = 1L;
            int16_t l_912[8] = {0x3863L,0x3863L,0x3863L,0x3863L,0x3863L,0x3863L,0x3863L,0x3863L};
            int32_t l_915 = 0x1E0F1CB1L;
            int32_t l_916 = 0x68B430F3L;
            union U0 *l_926 = &p_1004->g_52;
            int i;
            if ((((((safe_mul_func_int8_t_s_s(l_871, (safe_sub_func_uint8_t_u_u(l_874, (((l_875 == l_876) ^ l_874) >= FAKE_DIVERGE(p_1004->local_2_offset, get_local_id(2), 10)))))) ^ ((((safe_sub_func_int16_t_s_s(1L, (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(0x47L, 0L)).xxxy, ((VECTOR(int8_t, 2))(l_881.xx)).xyxx))).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x20L, 0x7BL)).yxxy)).hi, ((VECTOR(int8_t, 8))(0x53L, 0x44L, ((VECTOR(int8_t, 4))(l_882.sa5ac)), 7L, 0x0CL)).s44))).yxyyyyxxxyyyxyyy, ((VECTOR(int8_t, 8))(0x5CL, ((*l_888) |= (l_874 ^ ((*l_876) = (((safe_div_func_uint16_t_u_u((((FAKE_DIVERGE(p_1004->local_2_offset, get_local_id(2), 10) || p_1004->g_228) <= p_3) && 0x1DAE8BB5E8210A45L), p_1004->g_69[1])) , p_3) && p_1004->g_674.x)))), 0L, l_881.y, 0x4AL, ((VECTOR(int8_t, 2))(0x73L)), 0x2FL)).s3035440241135270, ((VECTOR(int8_t, 16))(0x21L))))).s45)).xyyx, ((VECTOR(int8_t, 4))((-1L)))))).lo, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))((-8L)))))).xyxyxyyyxxxyxxxx)).sab99)).lo)).even, (-1L))))) , p_3) & l_889) <= GROUP_DIVERGE(0, 1))) , p_1004->g_246.s3) == (-1L)) >= p_1004->g_699.z))
            { /* block id: 389 */
                uint32_t l_893 = 0x095FF191L;
                int16_t *l_906 = (void*)0;
                int16_t *l_907[1][9] = {{&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4],&p_1004->g_344[1][4]}};
                int32_t *l_908 = (void*)0;
                int32_t *l_909[1][8];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_909[i][j] = &p_1004->g_840;
                }
                (*p_1004->g_890) = l_875;
                (*p_1004->g_26) = (((safe_mul_func_int16_t_s_s(l_893, (safe_div_func_uint8_t_u_u(p_3, p_3)))) ^ ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((*p_1004->g_587) = l_900) == l_901), l_889)), (safe_rshift_func_int8_t_s_s((p_3 , (safe_lshift_func_uint16_t_u_u(p_3, ((p_1004->g_344[1][4] = 0x74C6L) , FAKE_DIVERGE(p_1004->group_2_offset, get_group_id(2), 10))))), p_3)))) != p_1004->g_432.s7)) == p_3);
                l_918++;
            }
            else
            { /* block id: 395 */
                l_915 ^= p_3;
            }
            l_911 = (((safe_rshift_func_uint16_t_u_s(65534UL, 5)) & (func_22(&l_913, &l_916, p_1004) , (safe_lshift_func_int8_t_s_u((l_913 &= (((l_925[0] != l_926) & (l_917 ^= ((+((*p_1004->g_342) ^= 255UL)) | 0x31L))) <= l_911)), 6)))) || l_914);
            return (*p_1004->g_611);
        }
    }
    l_927 = (*p_1004->g_573);
    (*l_930) = (safe_unary_minus_func_int64_t_s(p_3));
    return (*p_1004->g_611);
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_19 p_1004->g_234 p_1004->g_comm_values p_1004->g_452 p_1004->g_229 p_1004->g_817 p_1004->g_818 p_1004->g_632 p_1004->g_590 p_1004->g_248 p_1004->g_334 p_1004->g_751 p_1004->g_11 p_1004->g_246 p_1004->g_342 p_1004->g_296 p_1004->g_839 p_1004->g_840 p_1004->g_615 p_1004->g_321 p_1004->g_432 p_1004->g_52
 * writes: p_1004->g_19 p_1004->g_452 p_1004->g_817 p_1004->g_674 p_1004->g_37 p_1004->g_344 p_1004->g_745 p_1004->g_839 p_1004->g_840 p_1004->g_846 p_1004->g_697 p_1004->g_69 p_1004->g_432
 */
union U0  func_22(int32_t * p_23, int32_t * p_24, struct S1 * p_1004)
{ /* block id: 8 */
    uint32_t l_29 = 0xB4EA65D3L;
    union U0 *l_59 = &p_1004->g_52;
    VECTOR(int16_t, 4) l_731 = (VECTOR(int16_t, 4))(0x3251L, (VECTOR(int16_t, 2))(0x3251L, 0x79CAL), 0x79CAL);
    VECTOR(uint32_t, 8) l_749 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0xCA9AD774L), 0xCA9AD774L), 0xCA9AD774L, 4294967288UL, 0xCA9AD774L);
    int8_t l_752[6] = {0x76L,0x76L,0x76L,0x76L,0x76L,0x76L};
    int32_t *l_785[2];
    uint32_t l_791 = 3UL;
    int32_t *l_816 = &p_1004->g_632;
    int32_t **l_815 = &l_816;
    int32_t ***l_819[1];
    uint16_t *l_824 = (void*)0;
    VECTOR(uint16_t, 4) l_825 = (VECTOR(uint16_t, 4))(0x62C4L, (VECTOR(uint16_t, 2))(0x62C4L, 0x4DD9L), 0x4DD9L);
    VECTOR(uint16_t, 8) l_826 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), 1UL), 1UL, 65532UL, 1UL);
    uint64_t l_831 = 18446744073709551615UL;
    union U0 **l_833 = &l_59;
    union U0 ***l_832 = &l_833;
    uint16_t l_834 = 0x3884L;
    uint64_t *l_835 = &p_1004->g_37[0];
    int16_t *l_836 = &p_1004->g_344[2][1];
    int16_t *l_837 = (void*)0;
    int16_t *l_838 = &p_1004->g_745;
    int16_t *l_841 = (void*)0;
    int16_t *l_842 = (void*)0;
    int16_t *l_843 = (void*)0;
    int16_t *l_844 = (void*)0;
    int16_t *l_845[3];
    int8_t *l_847[3];
    uint8_t l_848[5];
    int i;
    for (i = 0; i < 2; i++)
        l_785[i] = &p_1004->g_234[5];
    for (i = 0; i < 1; i++)
        l_819[i] = &p_1004->g_817;
    for (i = 0; i < 3; i++)
        l_845[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_847[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_848[i] = 0x3FL;
    for (p_1004->g_19 = (-18); (p_1004->g_19 >= 46); p_1004->g_19++)
    { /* block id: 11 */
        VECTOR(uint16_t, 2) l_732 = (VECTOR(uint16_t, 2))(65535UL, 0x0A99L);
        uint64_t l_754[5][1][5];
        int32_t l_773[2];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 5; k++)
                    l_754[i][j][k] = 0xACD0D9DACD51C383L;
            }
        }
        for (i = 0; i < 2; i++)
            l_773[i] = 0x4FE9B6C0L;
        (1 + 1);
    }
    l_785[1] = p_24;
    p_1004->g_432.s6 &= (safe_mul_func_int8_t_s_s((p_1004->g_69[0] = ((safe_mul_func_int8_t_s_s((p_1004->g_697.x = (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_1004->g_234[9], 4)), (safe_mul_func_uint16_t_u_u((p_1004->g_comm_values[p_1004->tid] && (p_1004->g_846 = (+(p_1004->g_840 ^= (p_1004->g_839 ^= ((*l_838) = ((--p_1004->g_452.sc) | (safe_rshift_func_int16_t_s_s(((*l_836) = (((p_1004->g_229 , (FAKE_DIVERGE(p_1004->local_2_offset, get_local_id(2), 10) & ((*l_835) = ((safe_mul_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((-4L) && ((l_815 == (p_1004->g_817 = p_1004->g_817)) | ((safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((p_1004->g_674.w = p_1004->g_234[5]), ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(l_825.zzywyxww)).lo, ((VECTOR(uint16_t, 2))(1UL, 6UL)).xyxx, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_826.s6465641123477357)))).s28)), 1UL, 0xB41EL)).zzyxzzyz, ((VECTOR(uint16_t, 4))(((*p_1004->g_818) , (((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))((safe_mul_func_int16_t_s_s(p_1004->g_590, l_831)), ((VECTOR(uint8_t, 2))(9UL)), 0UL, 0xE7L, ((VECTOR(uint8_t, 2))(1UL)), 5UL)).s5, p_1004->g_comm_values[p_1004->tid])) , l_832) == &l_833)), ((VECTOR(uint16_t, 2))(1UL)), 8UL)).wzywzxxz))).s21, (uint16_t)0x5BF3L))), 1UL, 0UL, 0x8906L, 0xB89AL, 0xAB90L, 1UL, 0xDC77L, 65531UL, ((VECTOR(uint16_t, 2))(0xB93FL)), ((VECTOR(uint16_t, 4))(1UL)))))).sf412, ((VECTOR(uint16_t, 4))(65533UL)))))))).w)) , p_1004->g_248.s1), p_1004->g_334.x)) == 0x5185428FL))) != p_1004->g_751), 1UL)) , 5UL), p_1004->g_11.w)) >= p_1004->g_246.s5), l_834)) < FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10))))) , (*p_1004->g_342)) <= 3UL)), 4))))))))), p_1004->g_615.s6))))), p_1004->g_321)) > (*p_1004->g_342))), (*p_1004->g_342)));
    l_848[2]++;
    return (**l_833);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U0 * func_32(int32_t  p_33, union U0 * p_34, int64_t  p_35, uint32_t  p_36, struct S1 * p_1004)
{ /* block id: 319 */
    return &p_1004->g_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_233
 * writes:
 */
uint16_t  func_44(uint8_t * p_45, struct S1 * p_1004)
{ /* block id: 315 */
    int32_t *l_707[2];
    int32_t **l_708 = (void*)0;
    int32_t **l_709 = &l_707[0];
    int i;
    for (i = 0; i < 2; i++)
        l_707[i] = (void*)0;
    (*l_709) = l_707[0];
    return p_1004->g_233;
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_11 p_1004->g_216 p_1004->g_227 p_1004->g_234 p_1004->g_246 p_1004->g_248 p_1004->g_261 p_1004->g_232 p_1004->g_69 p_1004->l_comm_values p_1004->g_231 p_1004->g_314 p_1004->g_37 p_1004->g_321 p_1004->g_333 p_1004->g_334 p_1004->g_340 p_1004->g_26 p_1004->g_358 p_1004->g_342 p_1004->g_319 p_1004->g_218 p_1004->g_375 p_1004->g_230 p_1004->g_296 p_1004->g_425 p_1004->g_432 p_1004->g_19 p_1004->g_452 p_1004->g_470 p_1004->g_233 p_1004->g_465 p_1004->g_562 p_1004->g_573 p_1004->g_341 p_1004->g_583 p_1004->g_584 p_1004->g_587 p_1004->g_611 p_1004->g_615 p_1004->g_622 p_1004->g_344 p_1004->g_674 p_1004->g_697 p_1004->g_699 p_1004->g_52 p_1004->g_632
 * writes: p_1004->g_11 p_1004->g_218 p_1004->g_234 p_1004->g_314 p_1004->g_316 p_1004->g_319 p_1004->g_321 p_1004->g_26 p_1004->g_334 p_1004->g_358 p_1004->g_344 p_1004->g_296 p_1004->g_366 p_1004->g_37 p_1004->g_425 p_1004->g_465 p_1004->g_483 p_1004->g_340 p_1004->g_211 p_1004->g_590 p_1004->g_584 p_1004->g_367 p_1004->g_632
 */
int8_t  func_46(union U0 * p_47, int32_t  p_48, uint16_t  p_49, int64_t  p_50, struct S1 * p_1004)
{ /* block id: 19 */
    uint32_t l_64 = 0x8D137083L;
    VECTOR(uint64_t, 4) l_67 = (VECTOR(uint64_t, 4))(0x8807C708470FB2ECL, (VECTOR(uint64_t, 2))(0x8807C708470FB2ECL, 0UL), 0UL);
    int8_t *l_68[4][5][8] = {{{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]}},{{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]}},{{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]}},{{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]},{&p_1004->g_69[0],&p_1004->g_69[3],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[0],&p_1004->g_69[5],&p_1004->g_69[0],&p_1004->g_69[4]}}};
    int32_t l_70 = 0x24DA47CCL;
    int32_t l_392 = 0L;
    int32_t l_396 = 9L;
    int32_t l_397 = 1L;
    uint32_t l_398 = 0xEAB65C3FL;
    int32_t *l_407 = &p_1004->g_234[5];
    VECTOR(int8_t, 4) l_413 = (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, (-1L)), (-1L));
    int8_t l_426 = 0x40L;
    VECTOR(int32_t, 2) l_454 = (VECTOR(int32_t, 2))(0x2D271C27L, (-1L));
    VECTOR(int16_t, 2) l_459 = (VECTOR(int16_t, 2))(1L, 0x1C24L);
    uint32_t l_526 = 0x3D80B044L;
    uint8_t l_554 = 248UL;
    uint16_t l_568 = 0x6F23L;
    int32_t * volatile l_574[7];
    VECTOR(uint16_t, 4) l_575 = (VECTOR(uint16_t, 4))(0x8CC9L, (VECTOR(uint16_t, 2))(0x8CC9L, 0xC54CL), 0xC54CL);
    VECTOR(int64_t, 2) l_581 = (VECTOR(int64_t, 2))((-2L), 0x6D2E941DB8C250E7L);
    VECTOR(int64_t, 4) l_582 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0CCA817D1E21DFAEL), 0x0CCA817D1E21DFAEL);
    VECTOR(int8_t, 2) l_585 = (VECTOR(int8_t, 2))((-1L), 0x4BL);
    uint64_t **l_591 = &p_1004->g_588[0];
    uint32_t l_599 = 0x15DF46E9L;
    int64_t *l_603 = (void*)0;
    VECTOR(int64_t, 4) l_654 = (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x1D63C8EF5931E154L), 0x1D63C8EF5931E154L);
    VECTOR(uint8_t, 16) l_696 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 247UL), 247UL), 247UL, 0UL, 247UL, (VECTOR(uint8_t, 2))(0UL, 247UL), (VECTOR(uint8_t, 2))(0UL, 247UL), 0UL, 247UL, 0UL, 247UL);
    VECTOR(int8_t, 16) l_698 = (VECTOR(int8_t, 16))(0x0EL, (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, (-1L)), (-1L)), (-1L), 0x0EL, (-1L), (VECTOR(int8_t, 2))(0x0EL, (-1L)), (VECTOR(int8_t, 2))(0x0EL, (-1L)), 0x0EL, (-1L), 0x0EL, (-1L));
    VECTOR(int8_t, 16) l_700 = (VECTOR(int8_t, 16))(0x27L, (VECTOR(int8_t, 4))(0x27L, (VECTOR(int8_t, 2))(0x27L, 0L), 0L), 0L, 0x27L, 0L, (VECTOR(int8_t, 2))(0x27L, 0L), (VECTOR(int8_t, 2))(0x27L, 0L), 0x27L, 0L, 0x27L, 0L);
    int32_t *l_702 = &p_1004->g_632;
    int32_t **l_701 = &l_702;
    union U0 l_703[8] = {{0},{0},{0},{0},{0},{0},{0},{0}};
    int32_t *l_704 = &l_70;
    int64_t l_705 = 0x5DD17820EE1B17D1L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_574[i] = &l_392;
    if (((((safe_add_func_uint32_t_u_u((((l_64 & l_64) | ((safe_div_func_uint64_t_u_u(0xFB46D8FEB948C0F4L, ((p_1004->g_11.y >= ((VECTOR(uint64_t, 8))(l_67.yyzyzwzw)).s0) ^ (l_70 = (((void*)0 == l_68[0][4][7]) && 0x60BDL))))) && ((((safe_rshift_func_uint8_t_u_s((func_73(&l_70, (p_49 != 0UL), p_49, p_1004) & 0x44A0L), l_64)) , l_64) , p_1004->g_230) , p_49))) , 0x82BA2F73L), p_50)) != p_1004->g_37[3]) , (-3L)) || 2L))
    { /* block id: 200 */
        int16_t l_385 = 0x5AD6L;
        int32_t l_393 = 0x239A400AL;
        int32_t l_394 = (-1L);
        int32_t l_395[6][7][4] = {{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}},{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}},{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}},{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}},{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}},{{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L},{(-5L),(-5L),0L,0L}}};
        int8_t **l_445[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int32_t, 16) l_455 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
        VECTOR(int32_t, 16) l_458 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int32_t, 2))((-9L), 1L), (VECTOR(int32_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
        VECTOR(int32_t, 4) l_471 = (VECTOR(int32_t, 4))(0x1884D486L, (VECTOR(int32_t, 2))(0x1884D486L, 0x4B897D91L), 0x4B897D91L);
        int32_t l_535 = (-1L);
        int32_t *l_565 = &l_70;
        int i, j, k;
        if (p_50)
        { /* block id: 201 */
            int32_t *l_376 = &l_70;
            int32_t l_377 = 0x6F71603CL;
            int32_t *l_378 = &p_1004->g_321;
            int32_t *l_379 = &l_377;
            int32_t *l_380 = (void*)0;
            int32_t *l_381 = &l_70;
            int32_t *l_382 = (void*)0;
            int32_t *l_383 = (void*)0;
            int32_t *l_384 = &p_1004->g_234[5];
            int32_t *l_386 = &p_1004->g_234[6];
            int32_t *l_387 = &l_377;
            int32_t *l_388 = (void*)0;
            int32_t *l_389 = &l_70;
            int32_t *l_390 = (void*)0;
            int32_t *l_391[3][2] = {{&p_1004->g_321,&p_1004->g_321},{&p_1004->g_321,&p_1004->g_321},{&p_1004->g_321,&p_1004->g_321}};
            uint64_t *l_408 = &p_1004->g_37[3];
            uint8_t *l_424 = &p_1004->g_425;
            int64_t *l_427 = (void*)0;
            int64_t *l_428 = (void*)0;
            int64_t *l_429[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            ++l_398;
            (*l_379) = ((l_395[5][2][1] >= p_48) , (~(p_50 & ((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((FAKE_DIVERGE(p_1004->global_2_offset, get_global_id(2), 10) <= (&l_396 != l_407)) , 0xEC21AFB3L), (((((*l_408) |= p_1004->g_321) | (l_392 ^= (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_413.xw)).lo, (++(*p_1004->g_342)))) == (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 2))(0x63E33AA8L, 0x6AF0B549L)).xxyxxxyy, (uint32_t)((-1L) > (((safe_rshift_func_uint8_t_u_s(((*l_424) |= (((-9L) >= 0xF6L) ^ p_1004->g_358)), 2)) && 0x29L) > (*l_407))), (uint32_t)1UL))).s6 != 4294967295UL) && (*l_407)) == 0x52F8D379353C9319L), FAKE_DIVERGE(p_1004->local_1_offset, get_local_id(1), 10))) && (-1L)), l_426)) < p_1004->g_230), l_393))), p_50)))) > 0x9D5CF49598026376L) & 0xB255L))) , l_395[1][3][1]), 0x07D4F655L)), p_49)) & 0xE522L))));
        }
        else
        { /* block id: 208 */
            int8_t *l_453 = (void*)0;
            VECTOR(int32_t, 4) l_456 = (VECTOR(int32_t, 4))(0x41308352L, (VECTOR(int32_t, 2))(0x41308352L, (-5L)), (-5L));
            VECTOR(int32_t, 8) l_457 = (VECTOR(int32_t, 8))(0x039DA096L, (VECTOR(int32_t, 4))(0x039DA096L, (VECTOR(int32_t, 2))(0x039DA096L, (-5L)), (-5L)), (-5L), 0x039DA096L, (-5L));
            uint32_t l_464 = 0xA626D77EL;
            VECTOR(uint32_t, 16) l_472 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEDC65C8EL), 0xEDC65C8EL), 0xEDC65C8EL, 4294967295UL, 0xEDC65C8EL, (VECTOR(uint32_t, 2))(4294967295UL, 0xEDC65C8EL), (VECTOR(uint32_t, 2))(4294967295UL, 0xEDC65C8EL), 4294967295UL, 0xEDC65C8EL, 4294967295UL, 0xEDC65C8EL);
            VECTOR(uint64_t, 4) l_491 = (VECTOR(uint64_t, 4))(0xA45986116312B625L, (VECTOR(uint64_t, 2))(0xA45986116312B625L, 0xD9665E3F82A7C7C3L), 0xD9665E3F82A7C7C3L);
            int32_t *l_493 = &l_393;
            uint32_t l_511 = 4294967287UL;
            int16_t l_525 = (-2L);
            uint32_t l_538 = 0xA5A63E45L;
            int i;
            if ((safe_mod_func_uint64_t_u_u((((VECTOR(int32_t, 4))(p_1004->g_432.s7266)).w != (safe_div_func_uint8_t_u_u((p_1004->g_19 , ((*l_407) , (((safe_lshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s(((p_1004->g_246.s2 , (safe_rshift_func_uint16_t_u_s(l_395[5][2][1], (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_445[3] != ((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((255UL & (((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x668A2873L, ((VECTOR(uint32_t, 2))(p_1004->g_452.se2)), 4294967291UL)))).x && ((void*)0 != l_453)) != (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(l_454.xyyy)).zwzzzzyx, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))((-9L), 0L)).xxxyxyyy, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_455.s14b1b1b573e327c0)).s5b54, ((VECTOR(int32_t, 2))(9L, 0x4B5AF1A2L)).yxxx, ((VECTOR(int32_t, 2))((-1L), 1L)).xyyy))), ((VECTOR(int32_t, 2))(l_456.xz)).yyxy))).xxzxxzyy, ((VECTOR(int32_t, 8))(l_457.s11770517)), ((VECTOR(int32_t, 8))(l_458.see345292))))))))))))).s4 , (p_1004->g_344[1][4] = ((VECTOR(int16_t, 16))(l_459.yxyyyyyxxyxxyyxy)).s9))) | (p_1004->g_465[3] = (safe_sub_func_int8_t_s_s((+((safe_mul_func_uint16_t_u_u((1L || 0x109849912EF268FBL), (*l_407))) == l_464)), 0x25L)))) || FAKE_DIVERGE(p_1004->global_1_offset, get_global_id(1), 10)) <= p_49)), GROUP_DIVERGE(2, 1))) >= FAKE_DIVERGE(p_1004->group_2_offset, get_group_id(2), 10)), 0x77100C9E40F31182L)) , &l_453)), p_49)), p_1004->g_230))))) >= (*l_407)), 14)) >= GROUP_DIVERGE(0, 1)) != p_48), 3)) != GROUP_DIVERGE(2, 1)) | 0x44L))), 0x9FL))), l_456.w)))
            { /* block id: 211 */
                int8_t **l_484 = &l_68[2][4][7];
                int32_t l_489 = 0x487F85A7L;
                if (((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 0x21L)) & 0x24L))
                { /* block id: 212 */
                    union U0 *l_482 = &p_1004->g_52;
                    union U0 **l_481 = &l_482;
                    int32_t l_490 = 1L;
                    (*l_407) = (~(((((safe_mod_func_uint8_t_u_u(0xE7L, (((((VECTOR(uint64_t, 16))(p_1004->g_470.zzxzzzyywxwwzwxx)).s0 && (((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 8))(1L, 0x3344FD73L, 0x0590970EL, ((VECTOR(int32_t, 4))(l_471.zyzz)), (-8L))).s0476000241070030, ((VECTOR(uint32_t, 8))(l_472.s9c89b49b)).s4677224374674472))), ((VECTOR(int64_t, 8))((safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s((((-1L) != ((*l_407) < ((safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((*l_481) = (void*)0) == (p_1004->g_483 = &p_1004->g_52)), l_471.x)) || (l_484 != (((((safe_rshift_func_uint16_t_u_s(((*l_407) , (safe_lshift_func_uint16_t_u_s(l_489, p_1004->g_233))), p_1004->g_234[1])) != p_1004->g_314) | l_471.z) <= (*l_407)) , &l_68[0][2][0]))) >= FAKE_DIVERGE(p_1004->global_2_offset, get_global_id(2), 10)), 0)) == p_48))) , p_49), 8)) < p_50), l_456.z)), 0x14980476B54B42E0L, p_1004->g_465[4], p_1004->g_246.s1, 0x140441EC0D00189EL, (-7L), 4L, 0x413BB299486396F8L)).s2556653156744622, ((VECTOR(int64_t, 16))(1L))))).s5 , p_1004->g_246.s7)) != l_490) ^ l_491.w))) <= 0L) && 4294967292UL) , l_68[3][4][5]) != &p_1004->g_296));
                }
                else
                { /* block id: 216 */
                    int32_t **l_492 = &p_1004->g_26;
                    (*l_492) = (void*)0;
                    (*l_407) = ((p_50 >= FAKE_DIVERGE(p_1004->group_0_offset, get_group_id(0), 10)) | ((void*)0 == &l_407));
                }
            }
            else
            { /* block id: 220 */
                int32_t **l_494 = &l_407;
                uint64_t *l_514 = &p_1004->g_19;
                VECTOR(uint8_t, 4) l_515 = (VECTOR(uint8_t, 4))(0xCBL, (VECTOR(uint8_t, 2))(0xCBL, 0UL), 0UL);
                int32_t l_522 = 0x3EF97E6CL;
                int32_t l_523 = 1L;
                int32_t l_524[5] = {0x4EA54F27L,0x4EA54F27L,0x4EA54F27L,0x4EA54F27L,0x4EA54F27L};
                uint16_t l_559 = 0x0DE9L;
                int i;
                (*l_494) = l_493;
                if (l_455.sa)
                { /* block id: 222 */
                    int32_t *l_518 = (void*)0;
                    int32_t *l_519 = &p_1004->g_234[0];
                    int32_t *l_520 = (void*)0;
                    int32_t *l_521[5];
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_521[i] = (void*)0;
                    for (l_464 = 9; (l_464 < 44); l_464++)
                    { /* block id: 225 */
                        uint8_t * volatile **l_497[4][3][9] = {{{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0}},{{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0}},{{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0}},{{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0},{&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],&p_1004->g_340[0][0][1],(void*)0,&p_1004->g_340[0][0][1],(void*)0}}};
                        int32_t l_498 = (-1L);
                        int i, j, k;
                        if (l_455.sf)
                            break;
                        p_1004->g_340[0][0][1] = &p_1004->g_341;
                        l_498 = ((VECTOR(int32_t, 2))(0L, 0x2FA5532EL)).even;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1004->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s(((((p_50 || (p_48 , l_471.x)) & (0xAB23A53F8282706BL > ((safe_add_func_int8_t_s_s((((+(safe_lshift_func_int8_t_s_s((((l_511 , ((safe_sub_func_uint8_t_u_u((((void*)0 != l_514) , ((VECTOR(uint8_t, 2))(l_515.xz)).hi), (safe_div_func_uint8_t_u_u(((void*)0 != &l_494), p_50)))) < p_49)) ^ p_48) >= (*l_493)), 4))) , p_49) , 0x36L), 1L)) ^ 0xF3774E8FL))) != 0xDDL) & 0x53022956L), (**l_494))) & p_49) ^ GROUP_DIVERGE(0, 1)), 5)), 15)), l_458.sa)) || p_1004->g_37[8]), 10))][(safe_mod_func_uint32_t_u_u(p_1004->tid, 2))]));
                    --l_526;
                }
                else
                { /* block id: 234 */
                    int32_t *l_529 = &l_395[5][2][1];
                    int32_t *l_530 = (void*)0;
                    int32_t *l_531 = &l_395[5][2][1];
                    int32_t *l_532 = (void*)0;
                    int32_t *l_533 = &l_397;
                    int32_t *l_534 = &p_1004->g_234[4];
                    int32_t *l_536 = &p_1004->g_321;
                    int32_t *l_537[2];
                    uint64_t *l_552 = &p_1004->g_19;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_537[i] = &p_1004->g_321;
                    --l_538;
                    for (l_396 = (-18); (l_396 >= (-9)); l_396++)
                    { /* block id: 238 */
                        int16_t l_549[4] = {(-1L),(-1L),(-1L),(-1L)};
                        uint64_t **l_553 = &l_514;
                        int32_t l_557 = 0x2E2FE7ECL;
                        int32_t l_558 = 0x649B0F13L;
                        int i;
                        (*l_407) = ((safe_lshift_func_int16_t_s_u(((l_458.sf = ((p_48 < p_1004->g_432.s2) || (*l_493))) ^ (((((*p_1004->g_342)--) == (l_549[3] = (safe_rshift_func_uint8_t_u_s((p_1004->g_246.s4 & p_50), 7)))) >= (((p_1004->g_314 < p_1004->g_452.se) & (safe_add_func_int32_t_s_s((l_552 == ((*l_553) = l_514)), (**l_494)))) , (*l_493))) > GROUP_DIVERGE(1, 1))), 4)) && FAKE_DIVERGE(p_1004->global_1_offset, get_global_id(1), 10));
                        l_554++;
                        l_559--;
                    }
                }
                (*p_1004->g_562) = (*p_1004->g_227);
            }
        }
        (*l_565) &= ((*l_407) |= 1L);
    }
    else
    { /* block id: 253 */
        int32_t *l_566 = &l_396;
        int32_t *l_567[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(int8_t, 2) l_580 = (VECTOR(int8_t, 2))(7L, 0x29L);
        VECTOR(int8_t, 8) l_586 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L);
        uint16_t *l_589[3];
        VECTOR(int8_t, 4) l_592 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-10L)), (-10L));
        uint32_t *l_600 = (void*)0;
        uint32_t *l_601 = &p_1004->g_465[5];
        uint32_t *l_602 = &l_398;
        uint8_t **l_671 = (void*)0;
        VECTOR(int8_t, 16) l_679 = (VECTOR(int8_t, 16))(0x3FL, (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, 0x2CL), 0x2CL), 0x2CL, 0x3FL, 0x2CL, (VECTOR(int8_t, 2))(0x3FL, 0x2CL), (VECTOR(int8_t, 2))(0x3FL, 0x2CL), 0x3FL, 0x2CL, 0x3FL, 0x2CL);
        int i;
        for (i = 0; i < 3; i++)
            l_589[i] = (void*)0;
        l_568--;
        for (p_49 = 17; (p_49 < 43); p_49 = safe_add_func_int8_t_s_s(p_49, 6))
        { /* block id: 257 */
            (*p_1004->g_573) = &l_70;
            l_574[3] = (*p_1004->g_227);
        }
        if ((p_49 ^ ((*l_602) = ((*l_601) &= ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 16))(l_575.ywwzzxwwyyzywzxy)).odd, ((VECTOR(uint16_t, 4))(((safe_mul_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((((VECTOR(int16_t, 2))(0x3844L, (-1L))).odd <= (((*l_566) = ((VECTOR(int8_t, 8))(l_580.yyyyxyyy)).s4) >= ((~(*p_1004->g_341)) ^ (((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 2))(l_581.yx)), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_582.xxyxzxywyxzwxwyy)))).even)).s22))).xxyxxyxxyyxyxxxy, ((VECTOR(int64_t, 16))(p_1004->g_583.s8d3d0bf7f7e5f49d))))).odd))).s2 && FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10))))), 0x6CL)) , ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(1L, 1L)).xyyxyxyy, ((VECTOR(int8_t, 4))(p_1004->g_584.s1261)).wxyzwxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(l_585.yxyyyxyy)).s30, (int8_t)0x76L))), (-6L), 0L)).zwxwxwwxwwwxzwyx)).s7d, ((VECTOR(int8_t, 4))(l_586.s7644)).hi))), (p_1004->g_587 == ((p_1004->g_590 = 0x94F2L) , l_591)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_592.wzxwzyzzzyzwwyyw)).s590b)), 0x1EL)).even, ((VECTOR(int8_t, 4))((p_1004->g_584.s2 = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(7L, ((safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((((-1L) & 0x1FL) <= (*l_407)), p_1004->g_19)), p_48)) & p_48), ((VECTOR(int8_t, 4))((-8L))), 0x07L, ((VECTOR(int8_t, 4))(0x3FL)), 0x06L, p_48, 1L, 1L, 0L)).s6, 0x4FL))), l_599, (-1L), 0x57L))))).even, ((VECTOR(int8_t, 2))(0x33L)), ((VECTOR(int8_t, 2))(0x54L))))).yyyy)).lo)).xxyxxxyy))).s35))).yyyx, ((VECTOR(int8_t, 4))(0x6FL))))).y) < 255UL) , 0x0E96FB47L) != p_1004->g_334.y), 1L)) , p_1004->g_334.y), p_1004->g_296, 0x8F05L, 0x45B0L)).yyywyzwy))))).s5 , 0x28ACL) , 4UL)))))
        { /* block id: 266 */
            int32_t * volatile *l_604 = &p_1004->g_367;
            (*l_407) = (l_603 != l_603);
            (*l_407) = 0x5BD2EDDFL;
            (*l_604) = (*p_1004->g_227);
            (*l_566) |= p_48;
        }
        else
        { /* block id: 271 */
            int64_t l_605 = (-1L);
            uint64_t l_606 = 18446744073709551615UL;
            int8_t *l_645 = &p_1004->g_314;
            uint8_t **l_661 = &p_1004->g_342;
            uint32_t l_685[2][2][2] = {{{0xF7087D81L,0xF7087D81L},{0xF7087D81L,0xF7087D81L}},{{0xF7087D81L,0xF7087D81L},{0xF7087D81L,0xF7087D81L}}};
            int i, j, k;
            (*l_407) = l_605;
            l_606--;
            for (p_1004->g_358 = (-26); (p_1004->g_358 > 15); p_1004->g_358 = safe_add_func_int8_t_s_s(p_1004->g_358, 7))
            { /* block id: 276 */
                union U0 **l_614 = &p_1004->g_483;
                VECTOR(int32_t, 4) l_633 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L));
                uint64_t l_659 = 0x50DD85107D42AE83L;
                VECTOR(uint16_t, 8) l_672 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65527UL), 65527UL), 65527UL, 65535UL, 65527UL);
                int i;
                if (l_606)
                { /* block id: 277 */
                    (*p_1004->g_611) = &l_392;
                    if ((**p_1004->g_573))
                        continue;
                }
                else
                { /* block id: 280 */
                    union U0 **l_613 = &p_1004->g_483;
                    union U0 ***l_612[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_614 = &p_1004->g_483;
                }
                if (p_50)
                { /* block id: 283 */
                    uint64_t l_630 = 0UL;
                    uint64_t *l_650 = &p_1004->g_37[1];
                    uint8_t *l_651 = &p_1004->g_425;
                    if (((VECTOR(int32_t, 8))(p_1004->g_615.s10046334)).s2)
                    { /* block id: 284 */
                        int16_t *l_629 = &p_1004->g_344[4][3];
                        int32_t *l_631 = &p_1004->g_632;
                        (*l_566) ^= ((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(0UL, 0xBED3L)).yyxx, ((VECTOR(uint16_t, 2))(65529UL, 9UL)).xyxx))).wxzwwzywyzzzyxww)).sb ^ GROUP_DIVERGE(0, 1)) != ((GROUP_DIVERGE(2, 1) , (((*l_407) != 2UL) > (safe_lshift_func_uint8_t_u_u(((p_1004->g_334.y || ((VECTOR(uint16_t, 2))(0x9596L, 1UL)).even) , (((0x7AADL || (safe_sub_func_int32_t_s_s(p_49, (-10L)))) <= ((((((*l_631) = (safe_mod_func_uint64_t_u_u((((VECTOR(uint16_t, 2))(p_1004->g_622.sb6)).even >= (+(((safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), ((((VECTOR(int16_t, 8))(9L, 0L, (safe_mod_func_uint64_t_u_u((((~(0xE6E618DE25FE2000L < (((*l_629) = (safe_div_func_int64_t_s_s(p_50, 1UL))) & p_1004->g_334.x))) | p_48) < p_50), (*l_407))), ((VECTOR(int16_t, 4))(4L)), 0x5C07L)).s3 <= p_50) | 0x4D056F80C6D87223L))) , 255UL) & p_49))), l_630))) , p_49) == l_633.w) , &p_1004->g_483) == &p_1004->g_483)) != (*l_407))), p_48)))) , l_633.x));
                        (*l_614) = &p_1004->g_52;
                    }
                    else
                    { /* block id: 289 */
                        (*l_566) = 0x44696C16L;
                    }
                    (*l_407) ^= (safe_sub_func_uint32_t_u_u(((*l_602) = p_50), (p_50 ^ (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1004->global_2_offset, get_global_id(2), 10), l_633.y)) >= ((safe_unary_minus_func_int32_t_s(p_49)) , (safe_rshift_func_uint8_t_u_u((p_50 || ((l_645 == (void*)0) , (l_633.x > (((safe_rshift_func_uint8_t_u_s(((((*l_650) &= (safe_div_func_int32_t_s_s((p_49 <= 0L), 3UL))) || FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10)) && l_630), p_48)) , l_651) != (void*)0)))), 6)))), 0xD3E6L)), p_1004->g_583.s9)))));
                }
                else
                { /* block id: 295 */
                    int8_t **l_660 = &l_68[3][2][3];
                    int32_t l_673 = 0x4DF902E6L;
                    uint8_t l_682[4] = {0UL,0UL,0UL,0UL};
                    int i;
                    for (l_568 = (-3); (l_568 < 2); ++l_568)
                    { /* block id: 298 */
                        int16_t *l_666[6] = {&p_1004->g_344[1][5],(void*)0,&p_1004->g_344[1][5],&p_1004->g_344[1][5],(void*)0,&p_1004->g_344[1][5]};
                        uint16_t l_680 = 1UL;
                        int32_t l_681 = 0x020A090FL;
                        int i;
                        (*l_407) |= ((((((void*)0 == &p_1004->g_344[1][1]) | ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(l_654.zyzxwzwx)).s27))).xxxx, ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(0xFF9E33916B60BCCEL, 0x3C3157397E3861B9L)).yxxxxyyyxxyxxyyx, (uint64_t)(safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(l_659, ((l_660 == &l_68[2][2][6]) < ((((*l_645) = ((void*)0 != &p_1004->g_69[0])) < (l_606 | ((*l_601) = (&p_1004->g_341 == l_661)))) && 0xF73FL)))) <= 0x07L), FAKE_DIVERGE(p_1004->local_2_offset, get_local_id(2), 10)))))), ((VECTOR(uint64_t, 16))(0x39B1626ADE5B3A74L))))).s4163))).xwywyzyyxywxyyzx)).odd)), ((VECTOR(uint64_t, 8))(0x133C903C69EEF839L))))).s3) & 65530UL) , p_1004->g_246.s5) != l_606);
                        (*l_407) |= ((safe_lshift_func_uint16_t_u_s(p_1004->g_248.sa, (safe_sub_func_uint64_t_u_u((l_666[5] == (void*)0), (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xE23EL, 0xA23DL)))), 0UL, 65529UL)).y, p_1004->g_344[2][1])) == (safe_rshift_func_int16_t_s_u(((void*)0 != l_671), ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(6UL, 0x9F93L)).yxxyyxyyxyxxxyxx, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(1UL, 0x4828L, 1UL, 65531UL)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_672.s3142422506121746)).sfee8)))))).odd))).xyyyxxxxxxyyyyyx))).sadb8)))).xyywxxyywywxzxxy, (uint16_t)l_673))).sa82e, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(p_1004->g_674.yzwwzywxywzzxxxy)).sab2f, (uint16_t)GROUP_DIVERGE(2, 1))))))).wxyzyxyw, (uint16_t)((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(l_679.s7727f2479e893ae5)).s76))), (-6L), 0x68L)).odd)).odd, 1UL)), (l_680 |= 0L))) || p_48)))).s1))) , FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10)))))) || l_673);
                        ++l_682[0];
                    }
                    l_685[1][0][0]--;
                }
            }
        }
    }
    (*l_704) |= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((((VECTOR(uint8_t, 2))(l_696.sa3)).even != ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(p_1004->g_697.xxyxxyxy)).lo, ((VECTOR(int8_t, 2))(l_698.s35)).xyyx, ((VECTOR(int8_t, 8))((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1004->g_699.yxzwwxxz)).odd)).y >= 0x48L), ((VECTOR(int8_t, 2))(l_700.sd4)), (!p_48), p_48, (((*l_701) = &p_1004->g_632) != ((*p_47) , &p_48)), 0x48L, 0x4DL)).lo))), (int8_t)p_49))).w), (func_77(l_703[2], p_1004) , p_1004->g_632))), p_48)), l_459.y)) == 0xB05B3A97L), (-3L), (-7L), 0x7AF6L, (-8L), (-9L), 1L, p_1004->g_615.s2, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x27E3L)))).s0, p_1004->g_69[0]));
    return l_705;
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_37
 * writes: p_1004->g_26
 */
uint16_t  func_53(union U0 * p_54, int16_t  p_55, int8_t  p_56, uint64_t  p_57, uint16_t  p_58, struct S1 * p_1004)
{ /* block id: 16 */
    int32_t **l_61 = &p_1004->g_26;
    (*l_61) = (void*)0;
    return p_1004->g_37[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_216 p_1004->g_227 p_1004->g_234 p_1004->g_246 p_1004->g_248 p_1004->g_261 p_1004->g_232 p_1004->g_69 p_1004->l_comm_values p_1004->g_231 p_1004->g_11 p_1004->g_314 p_1004->g_37 p_1004->g_321 p_1004->g_333 p_1004->g_334 p_1004->g_340 p_1004->g_26 p_1004->g_358 p_1004->g_342 p_1004->g_319 p_1004->g_218 p_1004->g_375
 * writes: p_1004->g_11 p_1004->g_218 p_1004->g_234 p_1004->g_314 p_1004->g_316 p_1004->g_319 p_1004->g_321 p_1004->g_26 p_1004->g_334 p_1004->g_358 p_1004->g_344 p_1004->g_296 p_1004->g_366
 */
int16_t  func_73(int32_t * p_74, int8_t  p_75, uint16_t  p_76, struct S1 * p_1004)
{ /* block id: 21 */
    union U0 l_79 = {0};
    VECTOR(int32_t, 4) l_322 = (VECTOR(int32_t, 4))(0x507C3FB2L, (VECTOR(int32_t, 2))(0x507C3FB2L, (-6L)), (-6L));
    uint8_t *l_337[1];
    uint8_t **l_336 = &l_337[0];
    uint8_t ***l_335 = &l_336;
    uint8_t **l_339 = (void*)0;
    uint8_t ***l_338 = &l_339;
    int16_t *l_343[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_345 = &p_1004->g_26;
    uint32_t *l_350[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint64_t, 2) l_351 = (VECTOR(uint64_t, 2))(0x5CFD7D5077F82278L, 18446744073709551614UL);
    int8_t *l_353 = (void*)0;
    int8_t **l_352 = &l_353;
    VECTOR(int16_t, 16) l_363 = (VECTOR(int16_t, 16))(0x5EC5L, (VECTOR(int16_t, 4))(0x5EC5L, (VECTOR(int16_t, 2))(0x5EC5L, 0x36DFL), 0x36DFL), 0x36DFL, 0x5EC5L, 0x36DFL, (VECTOR(int16_t, 2))(0x5EC5L, 0x36DFL), (VECTOR(int16_t, 2))(0x5EC5L, 0x36DFL), 0x5EC5L, 0x36DFL, 0x5EC5L, 0x36DFL);
    int32_t *l_368[9][6][4] = {{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}},{{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]},{&p_1004->g_321,&p_1004->g_234[3],&p_1004->g_321,&p_1004->g_234[6]}}};
    uint8_t l_369 = 8UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_337[i] = &p_1004->g_296;
    (*l_345) = (func_77(l_79, p_1004) , (((l_322.z = (((*p_74) = l_322.y) | ((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((0x24L || p_76), p_1004->g_246.s1)), (((0xB740L < (((((VECTOR(int32_t, 16))(p_1004->g_333.sf474018f86aab917)).s1 & ((VECTOR(uint32_t, 2))(p_1004->g_334.xy)).lo) , ((*l_338) = ((*l_335) = (void*)0))) == p_1004->g_340[0][0][1])) , FAKE_DIVERGE(p_1004->group_1_offset, get_group_id(1), 10)) | 0x73L))), 0x2D0FL)), p_76)) , 1L))) & FAKE_DIVERGE(p_1004->global_0_offset, get_global_id(0), 10)) , p_74));
    l_369 ^= (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint32_t_u_u((p_1004->g_334.x = p_76), ((**l_345) <= (p_76 , ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_351.yyxx)).wwzzwyzz)).s7 >= (**l_345)) <= (((*l_352) = (void*)0) != (void*)0)))))) | (((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((--p_1004->g_358) || (((safe_div_func_int32_t_s_s((((((*p_1004->g_342) = ((((VECTOR(int16_t, 16))((-10L), p_1004->g_11.x, 0x19F7L, 0x1F84L, (p_1004->g_344[1][4] = (l_322.x = p_76)), 0x3863L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_363.s9666d4f1)).odd)), ((VECTOR(int16_t, 2))(3L, 0x78C2L)), 0x45DBL, 7L, 0L, 0x67F0L)).s7 , (safe_mod_func_int64_t_s_s((&l_79 == (void*)0), 18446744073709551610UL))) == 1UL)) , FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10)) < 18446744073709551614UL) ^ (**l_345)), (*p_1004->g_26))) , l_79) , p_1004->g_314)), 1L)), (*p_74))) > p_1004->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1004->tid, 2))]) <= 1L)), p_76));
    for (p_76 = 1; (p_76 <= 3); p_76 = safe_add_func_uint64_t_u_u(p_76, 8))
    { /* block id: 191 */
        for (p_1004->g_319 = 0; (p_1004->g_319 <= (-23)); p_1004->g_319--)
        { /* block id: 194 */
            uint8_t l_374 = 1UL;
            if (l_374)
                break;
            (*p_1004->g_375) = (*p_1004->g_227);
        }
    }
    return p_76;
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_216 p_1004->g_227 p_1004->g_234 p_1004->g_246 p_1004->g_248 p_1004->g_261 p_1004->g_232 p_1004->g_69 p_1004->l_comm_values p_1004->g_231 p_1004->g_11 p_1004->g_314 p_1004->g_37 p_1004->g_321
 * writes: p_1004->g_11 p_1004->g_218 p_1004->g_234 p_1004->g_314 p_1004->g_316 p_1004->g_319 p_1004->g_321
 */
union U0  func_77(union U0  p_78, struct S1 * p_1004)
{ /* block id: 22 */
    uint32_t l_209[7][9] = {{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L},{0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L,0x26A71857L,0xF5E432B7L,0x26A71857L}};
    int32_t *l_212 = (void*)0;
    int32_t *l_213 = (void*)0;
    int32_t *l_214 = (void*)0;
    int32_t *l_215 = (void*)0;
    int32_t *l_217 = (void*)0;
    int32_t **l_222 = &l_214;
    int32_t ***l_221 = &l_222;
    uint8_t *l_298 = &p_1004->g_296;
    uint8_t **l_297 = &l_298;
    int32_t l_311 = 0x2EDE10BEL;
    VECTOR(uint16_t, 4) l_312 = (VECTOR(uint16_t, 4))(0xA6F6L, (VECTOR(uint16_t, 2))(0xA6F6L, 0xE5FBL), 0xE5FBL);
    int8_t *l_313 = &p_1004->g_314;
    int8_t *l_315 = &p_1004->g_316;
    uint8_t l_317[5][8] = {{0xF8L,255UL,255UL,0xA9L,255UL,255UL,0xF8L,1UL},{0xF8L,255UL,255UL,0xA9L,255UL,255UL,0xF8L,1UL},{0xF8L,255UL,255UL,0xA9L,255UL,255UL,0xF8L,1UL},{0xF8L,255UL,255UL,0xA9L,255UL,255UL,0xF8L,1UL},{0xF8L,255UL,255UL,0xA9L,255UL,255UL,0xF8L,1UL}};
    int8_t *l_318 = &p_1004->g_319;
    int32_t *l_320 = &p_1004->g_321;
    int i, j;
    if ((atomic_inc(&p_1004->g_atomic_input[64 * get_linear_group_id() + 57]) == 2))
    { /* block id: 24 */
        uint16_t l_80 = 0x9566L;
        l_80 = 0x6FCF3BB3L;
        for (l_80 = (-15); (l_80 == 43); l_80 = safe_add_func_uint8_t_u_u(l_80, 1))
        { /* block id: 28 */
            int32_t l_83 = 0x39CA810DL;
            uint32_t l_84 = 4294967295UL;
            l_83 ^= 4L;
            --l_84;
            for (l_84 = 0; (l_84 != 37); l_84 = safe_add_func_int64_t_s_s(l_84, 5))
            { /* block id: 33 */
                int16_t l_89 = 7L;
                int32_t l_90 = 0x5F942F02L;
                int32_t l_91[5][1][7] = {{{0x0483F316L,8L,0x0483F316L,0x0483F316L,8L,0x0483F316L,0x0483F316L}},{{0x0483F316L,8L,0x0483F316L,0x0483F316L,8L,0x0483F316L,0x0483F316L}},{{0x0483F316L,8L,0x0483F316L,0x0483F316L,8L,0x0483F316L,0x0483F316L}},{{0x0483F316L,8L,0x0483F316L,0x0483F316L,8L,0x0483F316L,0x0483F316L}},{{0x0483F316L,8L,0x0483F316L,0x0483F316L,8L,0x0483F316L,0x0483F316L}}};
                VECTOR(uint16_t, 2) l_92 = (VECTOR(uint16_t, 2))(0xA1BBL, 0x58CCL);
                int16_t l_93 = 0L;
                int i, j, k;
                l_93 &= ((l_89 , (l_91[4][0][0] = (l_90 , (l_90 = 0x7022C981L)))) , (l_83 = (((VECTOR(uint16_t, 4))(l_92.yyyx)).x , 8L)));
            }
        }
        for (l_80 = 0; (l_80 >= 33); ++l_80)
        { /* block id: 42 */
            int32_t l_96 = 2L;
            int64_t l_192 = 0x1E3D7954E52F0B0BL;
            VECTOR(uint16_t, 2) l_193 = (VECTOR(uint16_t, 2))(0UL, 0x155AL);
            int i;
            for (l_96 = (-13); (l_96 <= (-2)); l_96 = safe_add_func_uint32_t_u_u(l_96, 4))
            { /* block id: 45 */
                uint16_t l_99 = 0x03A8L;
                uint8_t l_100 = 1UL;
                int32_t l_101 = 3L;
                int16_t l_102 = 0x4A97L;
                int32_t l_103 = (-9L);
                int64_t l_104 = 0x6ADFD65E783BFB6AL;
                uint8_t l_105 = 0x60L;
                int32_t l_107[1];
                int32_t *l_106 = &l_107[0];
                int32_t *l_108 = &l_107[0];
                int32_t *l_109[4][5] = {{&l_107[0],&l_107[0],(void*)0,&l_107[0],&l_107[0]},{&l_107[0],&l_107[0],(void*)0,&l_107[0],&l_107[0]},{&l_107[0],&l_107[0],(void*)0,&l_107[0],&l_107[0]},{&l_107[0],&l_107[0],(void*)0,&l_107[0],&l_107[0]}};
                int32_t l_110 = 0L;
                uint32_t l_111 = 4294967295UL;
                uint16_t l_114 = 1UL;
                int8_t l_115 = 9L;
                uint64_t l_116[5][6];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_107[i] = (-6L);
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_116[i][j] = 18446744073709551615UL;
                }
                l_109[3][3] = (l_108 = (l_106 = (l_99 , ((l_105 &= (l_104 = ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0xB7L, l_100, (l_103 = (l_100 = (l_101 , l_102))), 255UL, 0x80L, FAKE_DIVERGE(p_1004->local_0_offset, get_local_id(0), 10), 1UL, 6UL)))).s1)) , (void*)0))));
                if (((l_114 = (l_111++)) , (l_116[2][2] &= (l_115 &= 1L))))
                { /* block id: 57 */
                    int8_t l_117 = (-3L);
                    uint32_t l_118[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    int i;
                    if ((l_118[6] = l_117))
                    { /* block id: 59 */
                        uint32_t l_119 = 0UL;
                        int64_t l_120[4];
                        VECTOR(uint64_t, 4) l_121 = (VECTOR(uint64_t, 4))(0xF7FB00A7E67F4868L, (VECTOR(uint64_t, 2))(0xF7FB00A7E67F4868L, 0x568067CFB04DD1B2L), 0x568067CFB04DD1B2L);
                        VECTOR(uint64_t, 16) l_122 = (VECTOR(uint64_t, 16))(0xA868270EC936351EL, (VECTOR(uint64_t, 4))(0xA868270EC936351EL, (VECTOR(uint64_t, 2))(0xA868270EC936351EL, 0xD5F573F6651D59FBL), 0xD5F573F6651D59FBL), 0xD5F573F6651D59FBL, 0xA868270EC936351EL, 0xD5F573F6651D59FBL, (VECTOR(uint64_t, 2))(0xA868270EC936351EL, 0xD5F573F6651D59FBL), (VECTOR(uint64_t, 2))(0xA868270EC936351EL, 0xD5F573F6651D59FBL), 0xA868270EC936351EL, 0xD5F573F6651D59FBL, 0xA868270EC936351EL, 0xD5F573F6651D59FBL);
                        int32_t l_123 = 0x35F30761L;
                        VECTOR(uint64_t, 4) l_124 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x93202A9B449B5EA5L), 0x93202A9B449B5EA5L);
                        int32_t l_125 = 0x50DD9F31L;
                        VECTOR(uint8_t, 2) l_126 = (VECTOR(uint8_t, 2))(0xA9L, 255UL);
                        VECTOR(uint64_t, 2) l_127 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 7UL);
                        VECTOR(int32_t, 16) l_128 = (VECTOR(int32_t, 16))(0x19A85A5CL, (VECTOR(int32_t, 4))(0x19A85A5CL, (VECTOR(int32_t, 2))(0x19A85A5CL, 0x245E674CL), 0x245E674CL), 0x245E674CL, 0x19A85A5CL, 0x245E674CL, (VECTOR(int32_t, 2))(0x19A85A5CL, 0x245E674CL), (VECTOR(int32_t, 2))(0x19A85A5CL, 0x245E674CL), 0x19A85A5CL, 0x245E674CL, 0x19A85A5CL, 0x245E674CL);
                        int32_t l_129 = 0x5A01854AL;
                        uint8_t *l_131 = (void*)0;
                        uint8_t **l_130 = &l_131;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_120[i] = 0x46990D6E1A5D364EL;
                        l_129 |= (((VECTOR(uint32_t, 2))(0xA6509D46L, 0x4A85D1E3L)).lo , (((l_120[3] = l_119) , ((VECTOR(uint64_t, 4))(18446744073709551606UL, ((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(0x6801D493DC333CF4L, 0xDA8AEFE3E8DDC735L, ((VECTOR(uint64_t, 8))(l_121.wwwwxwwx)), (((VECTOR(uint64_t, 4))(l_122.s421c)).w , l_123), ((VECTOR(uint64_t, 2))(l_124.wy)), (l_125 , (l_126.x , GROUP_DIVERGE(0, 1))), 0xB20C39718655DCCEL, 18446744073709551615UL)).even, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_127.xx)), 0xE1BC7B78FF20E808L, 0xDAEF1251F2307333L)).wyyywyyz))).even))).z, 0x8D8E2A735042E9F2L, 0x33D0BF8AE0A268B7L)).w) , ((VECTOR(int32_t, 4))(l_128.s9dcf)).x));
                        l_130 = (void*)0;
                    }
                    else
                    { /* block id: 63 */
                        uint32_t l_132 = 0UL;
                        int32_t l_133 = 0x7221F8FFL;
                        uint32_t l_134 = 4UL;
                        uint16_t l_135 = 0x8203L;
                        uint64_t l_136 = 0x33E8CD857577104EL;
                        VECTOR(uint32_t, 16) l_137 = (VECTOR(uint32_t, 16))(0xD65AA86CL, (VECTOR(uint32_t, 4))(0xD65AA86CL, (VECTOR(uint32_t, 2))(0xD65AA86CL, 0xE04E333CL), 0xE04E333CL), 0xE04E333CL, 0xD65AA86CL, 0xE04E333CL, (VECTOR(uint32_t, 2))(0xD65AA86CL, 0xE04E333CL), (VECTOR(uint32_t, 2))(0xD65AA86CL, 0xE04E333CL), 0xD65AA86CL, 0xE04E333CL, 0xD65AA86CL, 0xE04E333CL);
                        VECTOR(uint32_t, 8) l_138 = (VECTOR(uint32_t, 8))(0x07A68DE4L, (VECTOR(uint32_t, 4))(0x07A68DE4L, (VECTOR(uint32_t, 2))(0x07A68DE4L, 1UL), 1UL), 1UL, 0x07A68DE4L, 1UL);
                        VECTOR(uint32_t, 2) l_139 = (VECTOR(uint32_t, 2))(5UL, 4294967295UL);
                        int32_t *l_140 = (void*)0;
                        int32_t *l_141 = &l_133;
                        int i;
                        l_106 = ((l_132 &= 0x7FB97F93L) , (void*)0);
                        l_136 = (l_135 = (l_133 , l_134));
                        l_109[3][3] = (((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_137.s01)).yyyxxyyxxxyxyxxy)).hi, ((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(l_138.s3711)).wyyyzxzywxzwzzww, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_139.yyxx)).even)).yyyyyxyyyxxxyxxy))).even))).s4 , (l_108 = (l_106 = l_140)));
                        l_109[1][1] = l_141;
                    }
                }
                else
                { /* block id: 73 */
                    int32_t l_142[10] = {0x27C6EF00L,(-1L),0x27C6EF00L,0x27C6EF00L,(-1L),0x27C6EF00L,0x27C6EF00L,(-1L),0x27C6EF00L,0x27C6EF00L};
                    uint8_t l_143[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                    uint16_t l_153 = 0UL;
                    int32_t l_155 = 0x6F009D05L;
                    int32_t *l_154 = &l_155;
                    int i;
                    l_143[6] |= l_142[3];
                    for (l_143[6] = 0; (l_143[6] <= 11); l_143[6] = safe_add_func_int8_t_s_s(l_143[6], 9))
                    { /* block id: 77 */
                        int32_t l_147 = 0x6CA2F01BL;
                        int32_t *l_146 = &l_147;
                        int32_t l_148 = 2L;
                        int32_t l_149 = 1L;
                        uint64_t l_150[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_150[i] = 0x71C144FEC2E3E759L;
                        l_146 = (void*)0;
                        l_148 = 0x2469D7E7L;
                        l_148 |= (l_147 = l_149);
                        ++l_150[0];
                    }
                    l_109[3][3] = (l_153 , (l_106 = l_154));
                }
                for (l_102 = (-16); (l_102 >= 15); ++l_102)
                { /* block id: 89 */
                    VECTOR(uint32_t, 16) l_158 = (VECTOR(uint32_t, 16))(0x4B89AB21L, (VECTOR(uint32_t, 4))(0x4B89AB21L, (VECTOR(uint32_t, 2))(0x4B89AB21L, 0UL), 0UL), 0UL, 0x4B89AB21L, 0UL, (VECTOR(uint32_t, 2))(0x4B89AB21L, 0UL), (VECTOR(uint32_t, 2))(0x4B89AB21L, 0UL), 0x4B89AB21L, 0UL, 0x4B89AB21L, 0UL);
                    int32_t l_159 = 9L;
                    uint32_t l_160 = 4294967295UL;
                    int i;
                    l_160 = (((VECTOR(uint32_t, 2))(l_158.s28)).hi , l_159);
                }
                for (l_99 = 0; (l_99 > 36); l_99++)
                { /* block id: 94 */
                    int32_t l_163[9][10] = {{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L},{0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L,0x6518A1B9L,1L,0x2721D852L,1L,0x6518A1B9L}};
                    uint64_t l_181 = 0x80EA506B424801CAL;
                    uint16_t l_190 = 0x5527L;
                    int32_t l_191 = 0x2012965FL;
                    int i, j;
                    if (l_163[7][6])
                    { /* block id: 95 */
                        int32_t l_164[9];
                        int8_t l_165 = 5L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_164[i] = (-7L);
                        l_165 &= l_164[3];
                    }
                    else
                    { /* block id: 97 */
                        int32_t l_167 = 0L;
                        int32_t *l_166 = &l_167;
                        int32_t *l_168 = &l_167;
                        uint16_t l_169 = 0xEEECL;
                        uint32_t l_170[2];
                        uint16_t l_171 = 0x75F4L;
                        int32_t l_172 = (-9L);
                        int32_t l_173 = 1L;
                        int16_t l_174 = 0x375CL;
                        int8_t l_175 = 0x52L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_170[i] = 0UL;
                        l_168 = (l_108 = (l_109[3][4] = (l_106 = l_166)));
                        (*l_108) |= l_169;
                        (*l_166) |= l_170[1];
                        l_175 = (l_174 &= (l_173 = (l_171 , ((*l_108) = ((l_172 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(5L, 4L)).xyyxyyxx)).s5) , (-1L))))));
                    }
                    for (l_163[4][5] = 0; (l_163[4][5] <= 18); ++l_163[4][5])
                    { /* block id: 111 */
                        uint32_t l_178 = 0xB7CFDC75L;
                        uint64_t l_179[4];
                        uint32_t l_180 = 1UL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_179[i] = 0x770DE910D8181497L;
                        l_179[2] = ((VECTOR(int32_t, 4))(0x000E2D96L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_178, 0x2B859C66L, 0L, (-1L))).hi)), 0x12670A27L)).w;
                        l_180 = 3L;
                    }
                    if ((FAKE_DIVERGE(p_1004->group_0_offset, get_group_id(0), 10) , l_181))
                    { /* block id: 115 */
                        VECTOR(uint32_t, 2) l_182 = (VECTOR(uint32_t, 2))(0x6CD2D6C2L, 4294967290UL);
                        VECTOR(uint32_t, 16) l_183 = (VECTOR(uint32_t, 16))(0x5A5B556FL, (VECTOR(uint32_t, 4))(0x5A5B556FL, (VECTOR(uint32_t, 2))(0x5A5B556FL, 0xAC54307DL), 0xAC54307DL), 0xAC54307DL, 0x5A5B556FL, 0xAC54307DL, (VECTOR(uint32_t, 2))(0x5A5B556FL, 0xAC54307DL), (VECTOR(uint32_t, 2))(0x5A5B556FL, 0xAC54307DL), 0x5A5B556FL, 0xAC54307DL, 0x5A5B556FL, 0xAC54307DL);
                        int32_t l_184 = 0x2532686CL;
                        uint64_t l_185 = 0x619DF5A9DCD68DE2L;
                        int32_t *l_186 = (void*)0;
                        int i;
                        l_108 = ((l_114 |= (((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(l_182.xy)).xyyyxxxx, ((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 16))(l_183.sc9c5cf6a8d655e74)).sb0, (uint32_t)l_184))).yyxxyxyy))).s1 , l_185)) , l_186);
                    }
                    else
                    { /* block id: 118 */
                        int32_t l_188 = 1L;
                        int32_t *l_187[8] = {&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188,&l_188};
                        int32_t *l_189 = &l_188;
                        int i;
                        l_106 = (l_108 = l_187[4]);
                        l_108 = l_189;
                    }
                    l_191 = (l_190 = 0L);
                }
            }
            l_96 &= l_192;
            if (l_193.x)
            { /* block id: 128 */
                int32_t l_194 = 0x7275FD97L;
                for (l_194 = 11; (l_194 >= 3); l_194 = safe_sub_func_int32_t_s_s(l_194, 1))
                { /* block id: 131 */
                    int32_t l_197 = (-1L);
                    int32_t *l_203 = (void*)0;
                    int32_t *l_204 = &l_197;
                    for (l_197 = 0; (l_197 < (-22)); l_197--)
                    { /* block id: 134 */
                        uint64_t l_200 = 1UL;
                        int32_t l_202 = (-1L);
                        int32_t *l_201 = &l_202;
                        l_96 |= 1L;
                        l_201 = (l_200 , (void*)0);
                        l_96 = (FAKE_DIVERGE(p_1004->global_2_offset, get_global_id(2), 10) , 0x114B757BL);
                    }
                    l_204 = l_203;
                }
            }
            else
            { /* block id: 141 */
                int32_t l_205 = 1L;
                uint8_t l_206 = 0x06L;
                l_96 = l_205;
                --l_206;
            }
        }
        unsigned int result = 0;
        result += l_80;
        atomic_add(&p_1004->g_special_values[64 * get_linear_group_id() + 57], result);
    }
    else
    { /* block id: 146 */
        (1 + 1);
    }
    p_1004->g_11.y = l_209[2][8];
    (*l_320) &= ((((FAKE_DIVERGE(p_1004->local_1_offset, get_local_id(1), 10) , (((*l_297) = func_219(((*l_221) = &l_214), p_1004)) != (void*)0)) >= (safe_div_func_int8_t_s_s((~(((safe_div_func_int8_t_s_s(((*l_318) = (safe_sub_func_uint16_t_u_u(p_1004->g_69[0], (safe_rshift_func_int16_t_s_u((18446744073709551609UL != ((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_311, (&p_1004->g_19 == (void*)0))), ((VECTOR(uint16_t, 2))(l_312.zy)).lo)) , (((*l_315) = ((*l_313) |= p_1004->g_246.s6)) == p_1004->g_69[0]))), l_317[0][7]))))), 0x2DL)) , 1L) > 0x3DD5C616L)), l_312.x))) ^ p_1004->g_37[3]) && p_1004->g_232[1][1][4]);
    return p_78;
}


/* ------------------------------------------ */
/* 
 * reads : p_1004->g_216 p_1004->g_227 p_1004->g_234 p_1004->g_246 p_1004->g_248 p_1004->g_261 p_1004->g_232 p_1004->g_69 p_1004->l_comm_values p_1004->g_231 p_1004->g_11
 * writes: p_1004->g_218 p_1004->g_234
 */
uint8_t * func_219(int32_t ** p_220, struct S1 * p_1004)
{ /* block id: 151 */
    int32_t l_223[5];
    int32_t l_224 = 0x17EB43B8L;
    VECTOR(int8_t, 8) l_247 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1DL), 0x1DL), 0x1DL, 0L, 0x1DL);
    VECTOR(int8_t, 16) l_249 = (VECTOR(int8_t, 16))(0x74L, (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, 0x3CL), 0x3CL), 0x3CL, 0x74L, 0x3CL, (VECTOR(int8_t, 2))(0x74L, 0x3CL), (VECTOR(int8_t, 2))(0x74L, 0x3CL), 0x74L, 0x3CL, 0x74L, 0x3CL);
    int16_t l_251 = (-4L);
    uint64_t *l_258 = &p_1004->g_19;
    VECTOR(int32_t, 4) l_270 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L));
    uint8_t *l_295 = &p_1004->g_296;
    int i;
    for (i = 0; i < 5; i++)
        l_223[i] = 0x74319FAFL;
    l_224 &= l_223[4];
    (*p_220) = (void*)0;
    for (l_224 = 0; (l_224 < (-13)); l_224 = safe_sub_func_int32_t_s_s(l_224, 4))
    { /* block id: 156 */
        int16_t l_239 = 0x0A9AL;
        uint64_t l_271 = 0x30D6FC78F7CE0DDBL;
        int32_t l_272 = (-1L);
        int32_t l_273 = 0x3F3A2D1CL;
        uint16_t l_290 = 0x2493L;
        (*p_1004->g_227) = p_1004->g_216;
        for (p_1004->g_234[5] = (-25); (p_1004->g_234[5] <= 3); p_1004->g_234[5]++)
        { /* block id: 160 */
            int16_t l_250 = 5L;
            int8_t *l_268 = (void*)0;
            int8_t *l_269[10][2];
            int32_t *l_274 = &l_273;
            int32_t *l_275 = &l_272;
            int32_t *l_276 = &l_273;
            int32_t *l_277 = &l_272;
            int32_t *l_278 = (void*)0;
            int32_t *l_279 = &l_272;
            int32_t *l_280 = (void*)0;
            int32_t *l_281 = &l_273;
            int32_t *l_282 = (void*)0;
            int32_t *l_283 = &l_272;
            int32_t *l_284 = (void*)0;
            int32_t *l_285 = &l_273;
            int32_t *l_286 = &l_272;
            int32_t *l_287 = (void*)0;
            int32_t *l_288 = &l_273;
            int32_t *l_289[4][5] = {{(void*)0,&p_1004->g_234[0],(void*)0,(void*)0,&p_1004->g_234[0]},{(void*)0,&p_1004->g_234[0],(void*)0,(void*)0,&p_1004->g_234[0]},{(void*)0,&p_1004->g_234[0],(void*)0,(void*)0,&p_1004->g_234[0]},{(void*)0,&p_1004->g_234[0],(void*)0,(void*)0,&p_1004->g_234[0]}};
            int i, j;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 2; j++)
                    l_269[i][j] = (void*)0;
            }
            l_273 = (safe_div_func_int8_t_s_s(l_239, (l_272 = ((((safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(p_1004->g_246.s33)).yxxy, ((VECTOR(int8_t, 16))(4L, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_247.s1305)).ywywyzzwyyyzyzwy, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1004->g_248.sef523e0a)).s0043325626677203)).s68, ((VECTOR(int8_t, 16))((-3L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_249.s0a18da6e)).s63)).yyyxxxyy)), 0x78L, (l_251 |= l_250), (l_270.y = ((((((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(5L, 1L)).odd, ((((safe_mod_func_uint8_t_u_u((6L ^ (((void*)0 == l_258) , GROUP_DIVERGE(2, 1))), ((safe_lshift_func_int16_t_s_u((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1004->g_261.xxxxxyxx)).s02)).xyyyyxxyyyxyyyyy, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_250, 0x2DA1L, 5L, 0x6F4AL, (((0xDFC68977L == (((safe_mod_func_int64_t_s_s(0L, (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(1L, p_1004->g_232[2][0][5])) != l_239), 0x74227142L)))) | 5UL) && p_1004->g_246.s0)) | p_1004->g_69[0]) < GROUP_DIVERGE(1, 1)), 9L, l_250, l_239, 0x3513L, (-3L), 9L, (-9L), 0L, ((VECTOR(int16_t, 2))(0x6FC8L)), (-5L))).even)), (int16_t)l_250))).lo, (int16_t)p_1004->g_246.s1))).zzxxxyzzzxxzzxyx))), ((VECTOR(int16_t, 16))(0x2E33L)), ((VECTOR(int16_t, 16))(1L))))))).s1759)).w & p_1004->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1004->tid, 2))]), 15)) | l_247.s1))) || 9UL) , p_1004->g_231) , GROUP_DIVERGE(2, 1)))) || 0x7FL), l_239)) , (void*)0) == (void*)0) , 0x72L) || l_250) , l_247.s7)), ((VECTOR(int8_t, 4))(1L)))).s04))).yxyxyxxy)).s0676757052752143, ((VECTOR(int8_t, 16))((-1L)))))).even, (int8_t)l_250))).s6327241616523147)))))))).even, ((VECTOR(int8_t, 8))(1L))))), (int8_t)l_247.s5))), ((VECTOR(int8_t, 4))(1L)), (-1L), 2L, 0x65L)).s8955, ((VECTOR(int8_t, 4))((-9L)))))).x, l_271)) >= p_1004->g_11.z), (-4L))) | l_239), l_223[4])) , (void*)0) != (void*)0) , 8L))));
            --l_290;
            if (l_224)
                break;
            (*l_276) &= (safe_rshift_func_int16_t_s_u(l_223[4], 8));
        }
    }
    return l_295;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[64];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 64; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_1005;
    struct S1* p_1004 = &c_1005;
    struct S1 c_1006 = {
        0xA3L, // p_1004->g_6
        (VECTOR(int32_t, 4))(0x7ED6C34FL, (VECTOR(int32_t, 2))(0x7ED6C34FL, 0L), 0L), // p_1004->g_11
        1UL, // p_1004->g_19
        (void*)0, // p_1004->g_26
        {0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L,0xFF2D4E203D7E6DE1L}, // p_1004->g_37
        {0}, // p_1004->g_52
        {0x5FL,7L,0x5FL,0x5FL,7L,0x5FL,0x5FL,7L,0x5FL,0x5FL}, // p_1004->g_69
        (void*)0, // p_1004->g_210
        (void*)0, // p_1004->g_211
        (void*)0, // p_1004->g_216
        (void*)0, // p_1004->g_218
        &p_1004->g_218, // p_1004->g_227
        0x1265F8E8L, // p_1004->g_228
        (-6L), // p_1004->g_229
        1L, // p_1004->g_230
        4L, // p_1004->g_231
        {{{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L}},{{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L}},{{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L}},{{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L}},{{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L},{0x13A345D4L,0L,7L,1L,7L,0L,0x13A345D4L}}}, // p_1004->g_232
        1L, // p_1004->g_233
        {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)}, // p_1004->g_234
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1004->g_246
        (VECTOR(int8_t, 16))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0x1BL), 0x1BL), 0x1BL, 0x5EL, 0x1BL, (VECTOR(int8_t, 2))(0x5EL, 0x1BL), (VECTOR(int8_t, 2))(0x5EL, 0x1BL), 0x5EL, 0x1BL, 0x5EL, 0x1BL), // p_1004->g_248
        (VECTOR(int16_t, 2))(0L, 0x5BA9L), // p_1004->g_261
        0xBBL, // p_1004->g_296
        0x37L, // p_1004->g_314
        0x39L, // p_1004->g_316
        (-2L), // p_1004->g_319
        0x75A4CC54L, // p_1004->g_321
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1004->g_333
        (VECTOR(uint32_t, 2))(0x528BEABAL, 0UL), // p_1004->g_334
        &p_1004->g_296, // p_1004->g_341
        &p_1004->g_296, // p_1004->g_342
        {{{(void*)0,&p_1004->g_342,(void*)0,(void*)0,&p_1004->g_342}},{{(void*)0,&p_1004->g_342,(void*)0,(void*)0,&p_1004->g_342}},{{(void*)0,&p_1004->g_342,(void*)0,(void*)0,&p_1004->g_342}},{{(void*)0,&p_1004->g_342,(void*)0,(void*)0,&p_1004->g_342}}}, // p_1004->g_340
        {{(-1L),(-1L),(-9L),0x0267L,0x2A57L,(-9L)},{(-1L),(-1L),(-9L),0x0267L,0x2A57L,(-9L)},{(-1L),(-1L),(-9L),0x0267L,0x2A57L,(-9L)},{(-1L),(-1L),(-9L),0x0267L,0x2A57L,(-9L)},{(-1L),(-1L),(-9L),0x0267L,0x2A57L,(-9L)}}, // p_1004->g_344
        9UL, // p_1004->g_358
        {{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}},{{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321},{(void*)0,&p_1004->g_321}}}, // p_1004->g_366
        (void*)0, // p_1004->g_367
        &p_1004->g_366[4][5][1], // p_1004->g_375
        7UL, // p_1004->g_425
        (VECTOR(int32_t, 8))(0x0B4BF593L, (VECTOR(int32_t, 4))(0x0B4BF593L, (VECTOR(int32_t, 2))(0x0B4BF593L, 0x37A38470L), 0x37A38470L), 0x37A38470L, 0x0B4BF593L, 0x37A38470L), // p_1004->g_432
        (VECTOR(uint32_t, 16))(0xCA9A606DL, (VECTOR(uint32_t, 4))(0xCA9A606DL, (VECTOR(uint32_t, 2))(0xCA9A606DL, 0x315E9DFFL), 0x315E9DFFL), 0x315E9DFFL, 0xCA9A606DL, 0x315E9DFFL, (VECTOR(uint32_t, 2))(0xCA9A606DL, 0x315E9DFFL), (VECTOR(uint32_t, 2))(0xCA9A606DL, 0x315E9DFFL), 0xCA9A606DL, 0x315E9DFFL, 0xCA9A606DL, 0x315E9DFFL), // p_1004->g_452
        {8UL,8UL,8UL,8UL,8UL,8UL,8UL}, // p_1004->g_465
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x0F3A398DA86899A4L), 0x0F3A398DA86899A4L), // p_1004->g_470
        &p_1004->g_52, // p_1004->g_483
        &p_1004->g_211, // p_1004->g_562
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1004->g_563
        (void*)0, // p_1004->g_564
        &p_1004->g_26, // p_1004->g_573
        (VECTOR(int64_t, 16))(0x4A29D45F9D856C29L, (VECTOR(int64_t, 4))(0x4A29D45F9D856C29L, (VECTOR(int64_t, 2))(0x4A29D45F9D856C29L, 1L), 1L), 1L, 0x4A29D45F9D856C29L, 1L, (VECTOR(int64_t, 2))(0x4A29D45F9D856C29L, 1L), (VECTOR(int64_t, 2))(0x4A29D45F9D856C29L, 1L), 0x4A29D45F9D856C29L, 1L, 0x4A29D45F9D856C29L, 1L), // p_1004->g_583
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x06L), 0x06L), 0x06L, 1L, 0x06L), // p_1004->g_584
        {&p_1004->g_19,&p_1004->g_19,&p_1004->g_19,&p_1004->g_19,&p_1004->g_19,&p_1004->g_19,&p_1004->g_19}, // p_1004->g_588
        &p_1004->g_588[2], // p_1004->g_587
        0L, // p_1004->g_590
        &p_1004->g_26, // p_1004->g_611
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1004->g_615
        (VECTOR(uint16_t, 16))(0x7F29L, (VECTOR(uint16_t, 4))(0x7F29L, (VECTOR(uint16_t, 2))(0x7F29L, 0xA92CL), 0xA92CL), 0xA92CL, 0x7F29L, 0xA92CL, (VECTOR(uint16_t, 2))(0x7F29L, 0xA92CL), (VECTOR(uint16_t, 2))(0x7F29L, 0xA92CL), 0x7F29L, 0xA92CL, 0x7F29L, 0xA92CL), // p_1004->g_622
        1L, // p_1004->g_632
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), // p_1004->g_674
        (VECTOR(int8_t, 2))(0x1CL, 0x21L), // p_1004->g_697
        (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x28L), 0x28L), // p_1004->g_699
        &p_1004->g_52, // p_1004->g_713
        (VECTOR(uint8_t, 4))(0xC5L, (VECTOR(uint8_t, 2))(0xC5L, 0x7AL), 0x7AL), // p_1004->g_743
        0x176DL, // p_1004->g_745
        254UL, // p_1004->g_751
        (VECTOR(uint16_t, 2))(0x1AF4L, 3UL), // p_1004->g_756
        (VECTOR(uint8_t, 2))(0xC9L, 255UL), // p_1004->g_757
        0UL, // p_1004->g_774
        (void*)0, // p_1004->g_786
        &p_1004->g_26, // p_1004->g_787
        &p_1004->g_632, // p_1004->g_818
        &p_1004->g_818, // p_1004->g_817
        0x48C8977DL, // p_1004->g_839
        8L, // p_1004->g_840
        4294967289UL, // p_1004->g_846
        (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xD8L), 0xD8L), // p_1004->g_853
        (VECTOR(uint32_t, 8))(0xD2B05039L, (VECTOR(uint32_t, 4))(0xD2B05039L, (VECTOR(uint32_t, 2))(0xD2B05039L, 0x2293EB2BL), 0x2293EB2BL), 0x2293EB2BL, 0xD2B05039L, 0x2293EB2BL), // p_1004->g_861
        &p_1004->g_26, // p_1004->g_890
        (void*)0, // p_1004->g_929
        (VECTOR(int32_t, 2))(0x0DEA2040L, (-5L)), // p_1004->g_949
        (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x3D8C85F9L), 0x3D8C85F9L), 0x3D8C85F9L, 9L, 0x3D8C85F9L), // p_1004->g_950
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x24L), 0x24L), // p_1004->g_959
        0, // p_1004->v_collective
        sequence_input[get_global_id(0)], // p_1004->global_0_offset
        sequence_input[get_global_id(1)], // p_1004->global_1_offset
        sequence_input[get_global_id(2)], // p_1004->global_2_offset
        sequence_input[get_local_id(0)], // p_1004->local_0_offset
        sequence_input[get_local_id(1)], // p_1004->local_1_offset
        sequence_input[get_local_id(2)], // p_1004->local_2_offset
        sequence_input[get_group_id(0)], // p_1004->group_0_offset
        sequence_input[get_group_id(1)], // p_1004->group_1_offset
        sequence_input[get_group_id(2)], // p_1004->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1004->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1005 = c_1006;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1004);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1004->g_6, "p_1004->g_6", print_hash_value);
    transparent_crc(p_1004->g_11.x, "p_1004->g_11.x", print_hash_value);
    transparent_crc(p_1004->g_11.y, "p_1004->g_11.y", print_hash_value);
    transparent_crc(p_1004->g_11.z, "p_1004->g_11.z", print_hash_value);
    transparent_crc(p_1004->g_11.w, "p_1004->g_11.w", print_hash_value);
    transparent_crc(p_1004->g_19, "p_1004->g_19", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1004->g_37[i], "p_1004->g_37[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1004->g_69[i], "p_1004->g_69[i]", print_hash_value);

    }
    transparent_crc(p_1004->g_228, "p_1004->g_228", print_hash_value);
    transparent_crc(p_1004->g_229, "p_1004->g_229", print_hash_value);
    transparent_crc(p_1004->g_230, "p_1004->g_230", print_hash_value);
    transparent_crc(p_1004->g_231, "p_1004->g_231", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1004->g_232[i][j][k], "p_1004->g_232[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1004->g_233, "p_1004->g_233", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1004->g_234[i], "p_1004->g_234[i]", print_hash_value);

    }
    transparent_crc(p_1004->g_246.s0, "p_1004->g_246.s0", print_hash_value);
    transparent_crc(p_1004->g_246.s1, "p_1004->g_246.s1", print_hash_value);
    transparent_crc(p_1004->g_246.s2, "p_1004->g_246.s2", print_hash_value);
    transparent_crc(p_1004->g_246.s3, "p_1004->g_246.s3", print_hash_value);
    transparent_crc(p_1004->g_246.s4, "p_1004->g_246.s4", print_hash_value);
    transparent_crc(p_1004->g_246.s5, "p_1004->g_246.s5", print_hash_value);
    transparent_crc(p_1004->g_246.s6, "p_1004->g_246.s6", print_hash_value);
    transparent_crc(p_1004->g_246.s7, "p_1004->g_246.s7", print_hash_value);
    transparent_crc(p_1004->g_248.s0, "p_1004->g_248.s0", print_hash_value);
    transparent_crc(p_1004->g_248.s1, "p_1004->g_248.s1", print_hash_value);
    transparent_crc(p_1004->g_248.s2, "p_1004->g_248.s2", print_hash_value);
    transparent_crc(p_1004->g_248.s3, "p_1004->g_248.s3", print_hash_value);
    transparent_crc(p_1004->g_248.s4, "p_1004->g_248.s4", print_hash_value);
    transparent_crc(p_1004->g_248.s5, "p_1004->g_248.s5", print_hash_value);
    transparent_crc(p_1004->g_248.s6, "p_1004->g_248.s6", print_hash_value);
    transparent_crc(p_1004->g_248.s7, "p_1004->g_248.s7", print_hash_value);
    transparent_crc(p_1004->g_248.s8, "p_1004->g_248.s8", print_hash_value);
    transparent_crc(p_1004->g_248.s9, "p_1004->g_248.s9", print_hash_value);
    transparent_crc(p_1004->g_248.sa, "p_1004->g_248.sa", print_hash_value);
    transparent_crc(p_1004->g_248.sb, "p_1004->g_248.sb", print_hash_value);
    transparent_crc(p_1004->g_248.sc, "p_1004->g_248.sc", print_hash_value);
    transparent_crc(p_1004->g_248.sd, "p_1004->g_248.sd", print_hash_value);
    transparent_crc(p_1004->g_248.se, "p_1004->g_248.se", print_hash_value);
    transparent_crc(p_1004->g_248.sf, "p_1004->g_248.sf", print_hash_value);
    transparent_crc(p_1004->g_261.x, "p_1004->g_261.x", print_hash_value);
    transparent_crc(p_1004->g_261.y, "p_1004->g_261.y", print_hash_value);
    transparent_crc(p_1004->g_296, "p_1004->g_296", print_hash_value);
    transparent_crc(p_1004->g_314, "p_1004->g_314", print_hash_value);
    transparent_crc(p_1004->g_316, "p_1004->g_316", print_hash_value);
    transparent_crc(p_1004->g_319, "p_1004->g_319", print_hash_value);
    transparent_crc(p_1004->g_321, "p_1004->g_321", print_hash_value);
    transparent_crc(p_1004->g_333.s0, "p_1004->g_333.s0", print_hash_value);
    transparent_crc(p_1004->g_333.s1, "p_1004->g_333.s1", print_hash_value);
    transparent_crc(p_1004->g_333.s2, "p_1004->g_333.s2", print_hash_value);
    transparent_crc(p_1004->g_333.s3, "p_1004->g_333.s3", print_hash_value);
    transparent_crc(p_1004->g_333.s4, "p_1004->g_333.s4", print_hash_value);
    transparent_crc(p_1004->g_333.s5, "p_1004->g_333.s5", print_hash_value);
    transparent_crc(p_1004->g_333.s6, "p_1004->g_333.s6", print_hash_value);
    transparent_crc(p_1004->g_333.s7, "p_1004->g_333.s7", print_hash_value);
    transparent_crc(p_1004->g_333.s8, "p_1004->g_333.s8", print_hash_value);
    transparent_crc(p_1004->g_333.s9, "p_1004->g_333.s9", print_hash_value);
    transparent_crc(p_1004->g_333.sa, "p_1004->g_333.sa", print_hash_value);
    transparent_crc(p_1004->g_333.sb, "p_1004->g_333.sb", print_hash_value);
    transparent_crc(p_1004->g_333.sc, "p_1004->g_333.sc", print_hash_value);
    transparent_crc(p_1004->g_333.sd, "p_1004->g_333.sd", print_hash_value);
    transparent_crc(p_1004->g_333.se, "p_1004->g_333.se", print_hash_value);
    transparent_crc(p_1004->g_333.sf, "p_1004->g_333.sf", print_hash_value);
    transparent_crc(p_1004->g_334.x, "p_1004->g_334.x", print_hash_value);
    transparent_crc(p_1004->g_334.y, "p_1004->g_334.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1004->g_344[i][j], "p_1004->g_344[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1004->g_358, "p_1004->g_358", print_hash_value);
    transparent_crc(p_1004->g_425, "p_1004->g_425", print_hash_value);
    transparent_crc(p_1004->g_432.s0, "p_1004->g_432.s0", print_hash_value);
    transparent_crc(p_1004->g_432.s1, "p_1004->g_432.s1", print_hash_value);
    transparent_crc(p_1004->g_432.s2, "p_1004->g_432.s2", print_hash_value);
    transparent_crc(p_1004->g_432.s3, "p_1004->g_432.s3", print_hash_value);
    transparent_crc(p_1004->g_432.s4, "p_1004->g_432.s4", print_hash_value);
    transparent_crc(p_1004->g_432.s5, "p_1004->g_432.s5", print_hash_value);
    transparent_crc(p_1004->g_432.s6, "p_1004->g_432.s6", print_hash_value);
    transparent_crc(p_1004->g_432.s7, "p_1004->g_432.s7", print_hash_value);
    transparent_crc(p_1004->g_452.s0, "p_1004->g_452.s0", print_hash_value);
    transparent_crc(p_1004->g_452.s1, "p_1004->g_452.s1", print_hash_value);
    transparent_crc(p_1004->g_452.s2, "p_1004->g_452.s2", print_hash_value);
    transparent_crc(p_1004->g_452.s3, "p_1004->g_452.s3", print_hash_value);
    transparent_crc(p_1004->g_452.s4, "p_1004->g_452.s4", print_hash_value);
    transparent_crc(p_1004->g_452.s5, "p_1004->g_452.s5", print_hash_value);
    transparent_crc(p_1004->g_452.s6, "p_1004->g_452.s6", print_hash_value);
    transparent_crc(p_1004->g_452.s7, "p_1004->g_452.s7", print_hash_value);
    transparent_crc(p_1004->g_452.s8, "p_1004->g_452.s8", print_hash_value);
    transparent_crc(p_1004->g_452.s9, "p_1004->g_452.s9", print_hash_value);
    transparent_crc(p_1004->g_452.sa, "p_1004->g_452.sa", print_hash_value);
    transparent_crc(p_1004->g_452.sb, "p_1004->g_452.sb", print_hash_value);
    transparent_crc(p_1004->g_452.sc, "p_1004->g_452.sc", print_hash_value);
    transparent_crc(p_1004->g_452.sd, "p_1004->g_452.sd", print_hash_value);
    transparent_crc(p_1004->g_452.se, "p_1004->g_452.se", print_hash_value);
    transparent_crc(p_1004->g_452.sf, "p_1004->g_452.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1004->g_465[i], "p_1004->g_465[i]", print_hash_value);

    }
    transparent_crc(p_1004->g_470.x, "p_1004->g_470.x", print_hash_value);
    transparent_crc(p_1004->g_470.y, "p_1004->g_470.y", print_hash_value);
    transparent_crc(p_1004->g_470.z, "p_1004->g_470.z", print_hash_value);
    transparent_crc(p_1004->g_470.w, "p_1004->g_470.w", print_hash_value);
    transparent_crc(p_1004->g_583.s0, "p_1004->g_583.s0", print_hash_value);
    transparent_crc(p_1004->g_583.s1, "p_1004->g_583.s1", print_hash_value);
    transparent_crc(p_1004->g_583.s2, "p_1004->g_583.s2", print_hash_value);
    transparent_crc(p_1004->g_583.s3, "p_1004->g_583.s3", print_hash_value);
    transparent_crc(p_1004->g_583.s4, "p_1004->g_583.s4", print_hash_value);
    transparent_crc(p_1004->g_583.s5, "p_1004->g_583.s5", print_hash_value);
    transparent_crc(p_1004->g_583.s6, "p_1004->g_583.s6", print_hash_value);
    transparent_crc(p_1004->g_583.s7, "p_1004->g_583.s7", print_hash_value);
    transparent_crc(p_1004->g_583.s8, "p_1004->g_583.s8", print_hash_value);
    transparent_crc(p_1004->g_583.s9, "p_1004->g_583.s9", print_hash_value);
    transparent_crc(p_1004->g_583.sa, "p_1004->g_583.sa", print_hash_value);
    transparent_crc(p_1004->g_583.sb, "p_1004->g_583.sb", print_hash_value);
    transparent_crc(p_1004->g_583.sc, "p_1004->g_583.sc", print_hash_value);
    transparent_crc(p_1004->g_583.sd, "p_1004->g_583.sd", print_hash_value);
    transparent_crc(p_1004->g_583.se, "p_1004->g_583.se", print_hash_value);
    transparent_crc(p_1004->g_583.sf, "p_1004->g_583.sf", print_hash_value);
    transparent_crc(p_1004->g_584.s0, "p_1004->g_584.s0", print_hash_value);
    transparent_crc(p_1004->g_584.s1, "p_1004->g_584.s1", print_hash_value);
    transparent_crc(p_1004->g_584.s2, "p_1004->g_584.s2", print_hash_value);
    transparent_crc(p_1004->g_584.s3, "p_1004->g_584.s3", print_hash_value);
    transparent_crc(p_1004->g_584.s4, "p_1004->g_584.s4", print_hash_value);
    transparent_crc(p_1004->g_584.s5, "p_1004->g_584.s5", print_hash_value);
    transparent_crc(p_1004->g_584.s6, "p_1004->g_584.s6", print_hash_value);
    transparent_crc(p_1004->g_584.s7, "p_1004->g_584.s7", print_hash_value);
    transparent_crc(p_1004->g_590, "p_1004->g_590", print_hash_value);
    transparent_crc(p_1004->g_615.s0, "p_1004->g_615.s0", print_hash_value);
    transparent_crc(p_1004->g_615.s1, "p_1004->g_615.s1", print_hash_value);
    transparent_crc(p_1004->g_615.s2, "p_1004->g_615.s2", print_hash_value);
    transparent_crc(p_1004->g_615.s3, "p_1004->g_615.s3", print_hash_value);
    transparent_crc(p_1004->g_615.s4, "p_1004->g_615.s4", print_hash_value);
    transparent_crc(p_1004->g_615.s5, "p_1004->g_615.s5", print_hash_value);
    transparent_crc(p_1004->g_615.s6, "p_1004->g_615.s6", print_hash_value);
    transparent_crc(p_1004->g_615.s7, "p_1004->g_615.s7", print_hash_value);
    transparent_crc(p_1004->g_622.s0, "p_1004->g_622.s0", print_hash_value);
    transparent_crc(p_1004->g_622.s1, "p_1004->g_622.s1", print_hash_value);
    transparent_crc(p_1004->g_622.s2, "p_1004->g_622.s2", print_hash_value);
    transparent_crc(p_1004->g_622.s3, "p_1004->g_622.s3", print_hash_value);
    transparent_crc(p_1004->g_622.s4, "p_1004->g_622.s4", print_hash_value);
    transparent_crc(p_1004->g_622.s5, "p_1004->g_622.s5", print_hash_value);
    transparent_crc(p_1004->g_622.s6, "p_1004->g_622.s6", print_hash_value);
    transparent_crc(p_1004->g_622.s7, "p_1004->g_622.s7", print_hash_value);
    transparent_crc(p_1004->g_622.s8, "p_1004->g_622.s8", print_hash_value);
    transparent_crc(p_1004->g_622.s9, "p_1004->g_622.s9", print_hash_value);
    transparent_crc(p_1004->g_622.sa, "p_1004->g_622.sa", print_hash_value);
    transparent_crc(p_1004->g_622.sb, "p_1004->g_622.sb", print_hash_value);
    transparent_crc(p_1004->g_622.sc, "p_1004->g_622.sc", print_hash_value);
    transparent_crc(p_1004->g_622.sd, "p_1004->g_622.sd", print_hash_value);
    transparent_crc(p_1004->g_622.se, "p_1004->g_622.se", print_hash_value);
    transparent_crc(p_1004->g_622.sf, "p_1004->g_622.sf", print_hash_value);
    transparent_crc(p_1004->g_632, "p_1004->g_632", print_hash_value);
    transparent_crc(p_1004->g_674.x, "p_1004->g_674.x", print_hash_value);
    transparent_crc(p_1004->g_674.y, "p_1004->g_674.y", print_hash_value);
    transparent_crc(p_1004->g_674.z, "p_1004->g_674.z", print_hash_value);
    transparent_crc(p_1004->g_674.w, "p_1004->g_674.w", print_hash_value);
    transparent_crc(p_1004->g_697.x, "p_1004->g_697.x", print_hash_value);
    transparent_crc(p_1004->g_697.y, "p_1004->g_697.y", print_hash_value);
    transparent_crc(p_1004->g_699.x, "p_1004->g_699.x", print_hash_value);
    transparent_crc(p_1004->g_699.y, "p_1004->g_699.y", print_hash_value);
    transparent_crc(p_1004->g_699.z, "p_1004->g_699.z", print_hash_value);
    transparent_crc(p_1004->g_699.w, "p_1004->g_699.w", print_hash_value);
    transparent_crc(p_1004->g_743.x, "p_1004->g_743.x", print_hash_value);
    transparent_crc(p_1004->g_743.y, "p_1004->g_743.y", print_hash_value);
    transparent_crc(p_1004->g_743.z, "p_1004->g_743.z", print_hash_value);
    transparent_crc(p_1004->g_743.w, "p_1004->g_743.w", print_hash_value);
    transparent_crc(p_1004->g_745, "p_1004->g_745", print_hash_value);
    transparent_crc(p_1004->g_751, "p_1004->g_751", print_hash_value);
    transparent_crc(p_1004->g_756.x, "p_1004->g_756.x", print_hash_value);
    transparent_crc(p_1004->g_756.y, "p_1004->g_756.y", print_hash_value);
    transparent_crc(p_1004->g_757.x, "p_1004->g_757.x", print_hash_value);
    transparent_crc(p_1004->g_757.y, "p_1004->g_757.y", print_hash_value);
    transparent_crc(p_1004->g_774, "p_1004->g_774", print_hash_value);
    transparent_crc(p_1004->g_839, "p_1004->g_839", print_hash_value);
    transparent_crc(p_1004->g_840, "p_1004->g_840", print_hash_value);
    transparent_crc(p_1004->g_846, "p_1004->g_846", print_hash_value);
    transparent_crc(p_1004->g_853.x, "p_1004->g_853.x", print_hash_value);
    transparent_crc(p_1004->g_853.y, "p_1004->g_853.y", print_hash_value);
    transparent_crc(p_1004->g_853.z, "p_1004->g_853.z", print_hash_value);
    transparent_crc(p_1004->g_853.w, "p_1004->g_853.w", print_hash_value);
    transparent_crc(p_1004->g_861.s0, "p_1004->g_861.s0", print_hash_value);
    transparent_crc(p_1004->g_861.s1, "p_1004->g_861.s1", print_hash_value);
    transparent_crc(p_1004->g_861.s2, "p_1004->g_861.s2", print_hash_value);
    transparent_crc(p_1004->g_861.s3, "p_1004->g_861.s3", print_hash_value);
    transparent_crc(p_1004->g_861.s4, "p_1004->g_861.s4", print_hash_value);
    transparent_crc(p_1004->g_861.s5, "p_1004->g_861.s5", print_hash_value);
    transparent_crc(p_1004->g_861.s6, "p_1004->g_861.s6", print_hash_value);
    transparent_crc(p_1004->g_861.s7, "p_1004->g_861.s7", print_hash_value);
    transparent_crc(p_1004->g_949.x, "p_1004->g_949.x", print_hash_value);
    transparent_crc(p_1004->g_949.y, "p_1004->g_949.y", print_hash_value);
    transparent_crc(p_1004->g_950.s0, "p_1004->g_950.s0", print_hash_value);
    transparent_crc(p_1004->g_950.s1, "p_1004->g_950.s1", print_hash_value);
    transparent_crc(p_1004->g_950.s2, "p_1004->g_950.s2", print_hash_value);
    transparent_crc(p_1004->g_950.s3, "p_1004->g_950.s3", print_hash_value);
    transparent_crc(p_1004->g_950.s4, "p_1004->g_950.s4", print_hash_value);
    transparent_crc(p_1004->g_950.s5, "p_1004->g_950.s5", print_hash_value);
    transparent_crc(p_1004->g_950.s6, "p_1004->g_950.s6", print_hash_value);
    transparent_crc(p_1004->g_950.s7, "p_1004->g_950.s7", print_hash_value);
    transparent_crc(p_1004->g_959.x, "p_1004->g_959.x", print_hash_value);
    transparent_crc(p_1004->g_959.y, "p_1004->g_959.y", print_hash_value);
    transparent_crc(p_1004->g_959.z, "p_1004->g_959.z", print_hash_value);
    transparent_crc(p_1004->g_959.w, "p_1004->g_959.w", print_hash_value);
    transparent_crc(p_1004->v_collective, "p_1004->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 64; i++)
            transparent_crc(p_1004->g_special_values[i + 64 * get_linear_group_id()], "p_1004->g_special_values[i + 64 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 64; i++)
            transparent_crc(p_1004->l_special_values[i], "p_1004->l_special_values[i]", print_hash_value);
    transparent_crc(p_1004->l_comm_values[get_linear_local_id()], "p_1004->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1004->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1004->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
