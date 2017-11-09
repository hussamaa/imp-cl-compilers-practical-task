// --atomics 21 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 22,43,3 -l 2,1,1
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
{0,1}, // permutation 0
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

// Seed: 1050094531

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   int64_t  f2;
};

struct S1 {
   uint32_t  f0;
   int64_t  f1;
};

struct S2 {
    int32_t g_3;
    VECTOR(int64_t, 8) g_4;
    volatile struct S0 g_8[8][2];
    volatile struct S0 *g_7;
    int32_t g_9[8][8];
    int32_t g_45[3][7][10];
    struct S0 g_54;
    struct S0 *g_53;
    int32_t g_59;
    int32_t g_61;
    int32_t * volatile g_60;
    uint32_t g_79;
    uint32_t g_81;
    uint8_t g_106;
    VECTOR(int32_t, 4) g_107;
    volatile struct S0 ** volatile g_133;
    uint8_t g_148;
    VECTOR(int32_t, 16) g_181;
    VECTOR(int32_t, 16) g_182;
    VECTOR(int32_t, 8) g_183;
    VECTOR(int32_t, 8) g_184;
    int32_t g_198;
    int16_t g_205;
    int32_t ** volatile g_206;
    int32_t *g_208;
    int32_t ** volatile g_207;
    struct S1 g_210;
    struct S1 * volatile g_209;
    int8_t g_217[7][8][4];
    int8_t * volatile g_216;
    int8_t g_220;
    int32_t ** volatile g_261;
    int32_t ** volatile g_262;
    volatile uint64_t g_295;
    volatile uint64_t *g_294;
    uint16_t g_312;
    int32_t g_316;
    volatile VECTOR(uint32_t, 8) g_328;
    VECTOR(int64_t, 16) g_336;
    VECTOR(int32_t, 4) g_337;
    volatile VECTOR(int16_t, 2) g_385;
    VECTOR(uint16_t, 8) g_401;
    VECTOR(uint64_t, 2) g_404;
    VECTOR(uint64_t, 16) g_405;
    VECTOR(int32_t, 2) g_422;
    int8_t *g_428;
    int8_t **g_427[10];
    int8_t *** volatile g_426;
    volatile uint32_t g_431;
    volatile struct S0 ** volatile g_432;
    int32_t ** volatile g_475;
    VECTOR(int32_t, 2) g_479;
    volatile VECTOR(int8_t, 16) g_480;
    VECTOR(int32_t, 2) g_483;
    VECTOR(int32_t, 2) g_486;
    VECTOR(uint8_t, 2) g_491;
    struct S1 *g_510[8];
    int32_t ** volatile g_514;
    int32_t *g_529;
    int32_t **g_528[10][2];
    struct S1 g_710;
    int32_t ** volatile g_721;
    volatile VECTOR(int32_t, 4) g_733;
    VECTOR(int32_t, 8) g_734;
    uint32_t *g_774;
    uint32_t **g_773[4][8][8];
    int8_t *** volatile g_783;
    uint8_t g_791;
    volatile int32_t g_795;
    volatile int32_t *g_794;
    struct S0 g_842;
    VECTOR(uint32_t, 8) g_865;
    int32_t ** volatile g_871;
    VECTOR(int32_t, 16) g_881;
    int32_t * volatile g_897;
    VECTOR(uint16_t, 2) g_909;
    VECTOR(int32_t, 2) g_919;
    VECTOR(int32_t, 2) g_920;
    VECTOR(int32_t, 4) g_980;
    int32_t ** volatile g_984[9][3];
    VECTOR(int32_t, 8) g_989;
    int32_t ** volatile g_1172;
    int32_t * volatile g_1191;
    volatile int8_t g_1200;
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
int8_t  func_1(struct S2 * p_1204);
int32_t * func_12(uint32_t  p_13, struct S0 * p_14, struct S0 * p_15, int32_t * p_16, struct S2 * p_1204);
struct S0 * func_18(int32_t  p_19, int32_t * p_20, int64_t  p_21, uint16_t  p_22, struct S2 * p_1204);
int32_t  func_33(int32_t * p_34, struct S1  p_35, int64_t  p_36, int32_t * p_37, struct S2 * p_1204);
int32_t * func_38(int32_t  p_39, int32_t  p_40, struct S0 * p_41, struct S2 * p_1204);
struct S0 * func_42(int64_t  p_43, struct S2 * p_1204);
int32_t * func_47(int32_t * p_48, struct S2 * p_1204);
int32_t * func_49(struct S0 * p_50, struct S0 * p_51, struct S2 * p_1204);
int16_t  func_62(struct S0  p_63, struct S0 * p_64, struct S2 * p_1204);
struct S0  func_65(struct S0  p_66, uint32_t  p_67, int32_t * p_68, struct S2 * p_1204);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1204->g_3 p_1204->g_7 p_1204->g_9
 * writes: p_1204->g_3 p_1204->g_4 p_1204->g_7 p_1204->g_9
 */
int8_t  func_1(struct S2 * p_1204)
{ /* block id: 4 */
    int32_t *l_2 = &p_1204->g_3;
    uint16_t l_17 = 0xA22FL;
    int32_t l_1198 = 0x05654B4EL;
    int32_t l_1199 = 0x0B20F277L;
    p_1204->g_4.s0 = ((*l_2) = 3L);
    for (p_1204->g_3 = 24; (p_1204->g_3 == (-21)); p_1204->g_3--)
    { /* block id: 9 */
        VECTOR(uint8_t, 8) l_30 = (VECTOR(uint8_t, 8))(0x60L, (VECTOR(uint8_t, 4))(0x60L, (VECTOR(uint8_t, 2))(0x60L, 1UL), 1UL), 1UL, 0x60L, 1UL);
        struct S0 *l_841 = &p_1204->g_842;
        int32_t *l_843[9][4][4] = {{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_3,&p_1204->g_9[1][6],&p_1204->g_3,&p_1204->g_3}}};
        int i, j, k;
        p_1204->g_7 = p_1204->g_7;
        for (p_1204->g_9[5][6] = 2; (p_1204->g_9[5][6] < 6); p_1204->g_9[5][6] = safe_add_func_uint16_t_u_u(p_1204->g_9[5][6], 6))
        { /* block id: 13 */
            uint32_t l_29[3];
            int32_t *l_1185 = (void*)0;
            int32_t **l_1193 = (void*)0;
            int32_t l_1197 = 0x5442A281L;
            uint64_t l_1201[4][6] = {{0x9C47D79DBC0F73DDL,0x9C47D79DBC0F73DDL,0UL,18446744073709551615UL,0xF9D9B0F110AF5BC9L,18446744073709551615UL},{0x9C47D79DBC0F73DDL,0x9C47D79DBC0F73DDL,0UL,18446744073709551615UL,0xF9D9B0F110AF5BC9L,18446744073709551615UL},{0x9C47D79DBC0F73DDL,0x9C47D79DBC0F73DDL,0UL,18446744073709551615UL,0xF9D9B0F110AF5BC9L,18446744073709551615UL},{0x9C47D79DBC0F73DDL,0x9C47D79DBC0F73DDL,0UL,18446744073709551615UL,0xF9D9B0F110AF5BC9L,18446744073709551615UL}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_29[i] = 4294967295UL;
            (1 + 1);
        }
    }
    return (*l_2);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_12(uint32_t  p_13, struct S0 * p_14, struct S0 * p_15, int32_t * p_16, struct S2 * p_1204)
{ /* block id: 624 */
    uint32_t l_1186 = 4294967286UL;
    uint64_t l_1189 = 1UL;
    int32_t *l_1190 = (void*)0;
    int32_t l_1192 = 1L;
    --l_1186;
    l_1192 ^= l_1189;
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_865 p_1204->g_60 p_1204->g_61 p_1204->g_181 p_1204->g_198 p_1204->g_312 p_1204->g_133 p_1204->g_7 p_1204->g_432 p_1204->g_294 p_1204->g_295 p_1204->g_337 p_1204->g_54.f1 p_1204->g_216 p_1204->g_217 p_1204->g_405 p_1204->g_336 p_1204->g_871 p_1204->g_45 p_1204->g_774 p_1204->g_81 p_1204->g_486 p_1204->g_107 p_1204->g_881 p_1204->g_842.f0 p_1204->g_54.f2 p_1204->g_733 p_1204->g_491 p_1204->g_184 p_1204->g_8 p_1204->g_909 p_1204->g_919 p_1204->g_920 p_1204->g_980 p_1204->g_79 p_1204->g_475 p_1204->g_422 p_1204->g_514 p_1204->g_401 p_1204->g_431 p_1204->g_989 p_1204->g_210.f0 p_1204->g_205 p_1204->g_316 p_1204->g_3 p_1204->g_148 p_1204->g_1172
 * writes: p_1204->g_405 p_1204->g_198 p_1204->g_220 p_1204->g_79 p_1204->g_148 p_1204->g_54.f2 p_1204->g_7 p_1204->g_205 p_1204->g_208 p_1204->g_45 p_1204->g_81 p_1204->g_842.f0 p_1204->g_61 p_1204->g_59 p_1204->g_210.f0 p_1204->g_422 p_1204->g_312 p_1204->g_510 p_1204->g_209 p_1204->g_528 p_1204->g_401 p_1204->g_316 p_1204->g_4 p_1204->g_774 p_1204->g_8
 */
struct S0 * func_18(int32_t  p_19, int32_t * p_20, int64_t  p_21, uint16_t  p_22, struct S2 * p_1204)
{ /* block id: 455 */
    int32_t l_846 = 1L;
    VECTOR(uint32_t, 4) l_851 = (VECTOR(uint32_t, 4))(0x14386A59L, (VECTOR(uint32_t, 2))(0x14386A59L, 4294967295UL), 4294967295UL);
    struct S1 l_852 = {0x6F71032CL,9L};
    uint8_t *l_857 = &p_1204->g_148;
    int8_t *l_860[2][3] = {{&p_1204->g_217[2][3][0],&p_1204->g_217[2][3][0],&p_1204->g_217[2][3][0]},{&p_1204->g_217[2][3][0],&p_1204->g_217[2][3][0],&p_1204->g_217[2][3][0]}};
    int32_t l_861 = 0x38AD48C6L;
    VECTOR(int16_t, 16) l_862 = (VECTOR(int16_t, 16))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0L), 0L), 0L, 6L, 0L, (VECTOR(int16_t, 2))(6L, 0L), (VECTOR(int16_t, 2))(6L, 0L), 6L, 0L, 6L, 0L);
    uint64_t *l_866 = (void*)0;
    uint16_t l_867 = 0x2A14L;
    int8_t l_868 = (-1L);
    uint8_t **l_877 = (void*)0;
    VECTOR(uint8_t, 8) l_902 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xF9L), 0xF9L), 0xF9L, 255UL, 0xF9L);
    int8_t l_933[1];
    int32_t l_936 = 0x2785F34AL;
    int32_t *l_988 = (void*)0;
    int32_t l_1055 = 1L;
    int64_t l_1057 = 0x7BAE9B52E28BBFA1L;
    int64_t l_1059 = 0x0CD2553E74A1F2E5L;
    int32_t l_1060 = 0x0A0C7519L;
    int32_t l_1061 = 0x7256AA61L;
    int32_t l_1063 = (-4L);
    int32_t l_1065 = 0x1B4B2EA4L;
    int32_t l_1066 = 1L;
    int32_t l_1067 = 1L;
    int32_t l_1068 = 0L;
    int32_t l_1069 = 0x216F7B0CL;
    VECTOR(int32_t, 4) l_1070 = (VECTOR(int32_t, 4))(0x620F493FL, (VECTOR(int32_t, 2))(0x620F493FL, (-1L)), (-1L));
    int32_t ***l_1146 = &p_1204->g_528[1][0];
    int32_t ****l_1145 = &l_1146;
    struct S0 **l_1159 = &p_1204->g_53;
    struct S0 ***l_1158 = &l_1159;
    int32_t l_1178 = 2L;
    uint64_t l_1179[2];
    struct S0 *l_1184 = &p_1204->g_842;
    int i, j;
    for (i = 0; i < 1; i++)
        l_933[i] = 0L;
    for (i = 0; i < 2; i++)
        l_1179[i] = 0xDFA96CFE467281A9L;
    if ((safe_lshift_func_uint8_t_u_u((l_846 != ((safe_add_func_int64_t_s_s((((p_21 <= ((safe_mul_func_uint8_t_u_u((p_19 && ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_851.wwwxywwyzxwxwwzy)).sa6ec)))).z), (p_21 != (l_852 , (((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((l_857 == ((safe_add_func_uint32_t_u_u(((l_861 = p_22) > (((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_862.s4ef6)).wyzyxxzxzxyxzzzx)).odd, ((VECTOR(int16_t, 4))((safe_mul_func_int8_t_s_s((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1204->g_865.s46)), 0xD29DA0ECL, 1UL)).x && (0xD64FDC3291B65DC9L < (p_1204->g_405.s5 = 18446744073709551614UL))) , l_867) == 0xF90D12D6L), p_1204->g_865.s7)), l_852.f1, 2L, 0x534BL)).yzywwxxy))).s1211636763132661, (int16_t)l_852.f1, (int16_t)1L))).sc0)).yyxxyyyxxyyyyyyx, ((VECTOR(int16_t, 16))(1L))))).s5478, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x2018L))))).z == 0x3AA0L)), l_852.f0)) , (void*)0)) == p_22), 0x08446A26L)), 65533UL)) & 0x6CFDL) && l_868))))) >= p_22)) ^ (*p_1204->g_60)) , l_861), p_1204->g_181.se)) | l_862.s9)), 3)))
    { /* block id: 458 */
        uint8_t **l_878 = &l_857;
        uint8_t ***l_879 = &l_878;
        int64_t *l_880[9][8][3] = {{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}},{{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0},{&p_1204->g_710.f1,(void*)0,(void*)0}}};
        int32_t l_894 = 0x018FF671L;
        int32_t l_934 = (-1L);
        int32_t l_935 = 0x3E14204FL;
        int32_t l_937 = (-1L);
        uint16_t l_938 = 0xB1E7L;
        struct S1 l_948 = {5UL,-1L};
        int8_t l_968[3][4];
        int32_t *l_987 = (void*)0;
        int64_t l_1008 = (-1L);
        struct S0 *l_1030[1][5][9] = {{{&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54},{&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54},{&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54},{&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54},{&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_842,&p_1204->g_54,&p_1204->g_842,&p_1204->g_54}}};
        int32_t l_1056 = 0x77654DA0L;
        int32_t l_1058 = 0L;
        int64_t l_1062 = 0x381165C516AF458AL;
        int32_t l_1064[1];
        int32_t ***l_1143 = (void*)0;
        int32_t ****l_1142 = &l_1143;
        uint32_t **l_1147[6] = {&p_1204->g_774,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774};
        int8_t l_1168 = 0x7FL;
        uint8_t l_1171 = 246UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
                l_968[i][j] = (-8L);
        }
        for (i = 0; i < 1; i++)
            l_1064[i] = (-4L);
        for (p_1204->g_198 = 0; (p_1204->g_198 == 26); p_1204->g_198 = safe_add_func_int16_t_s_s(p_1204->g_198, 4))
        { /* block id: 461 */
            int32_t *l_872 = &p_1204->g_45[1][6][0];
            (*p_1204->g_871) = func_47(p_20, p_1204);
            (*l_872) &= (-3L);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1204->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((++(*p_1204->g_774)), 10))][(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))]));
        if (((((void*)0 != &p_1204->g_528[3][0]) >= (p_1204->g_486.y > (l_846 = ((l_877 = &l_857) != ((*l_879) = l_878))))) == (251UL | p_1204->g_107.z)))
        { /* block id: 472 */
            uint16_t l_906 = 0x7211L;
            VECTOR(int32_t, 8) l_921 = (VECTOR(int32_t, 8))(0x10E15353L, (VECTOR(int32_t, 4))(0x10E15353L, (VECTOR(int32_t, 2))(0x10E15353L, 0x574AFBCBL), 0x574AFBCBL), 0x574AFBCBL, 0x10E15353L, 0x574AFBCBL);
            uint8_t l_960 = 0UL;
            VECTOR(uint32_t, 4) l_975 = (VECTOR(uint32_t, 4))(0x3CA962D0L, (VECTOR(uint32_t, 2))(0x3CA962D0L, 0UL), 0UL);
            uint64_t *l_981 = &p_1204->g_842.f0;
            struct S0 *l_983 = &p_1204->g_54;
            int32_t *l_986 = (void*)0;
            uint16_t l_990 = 0x845CL;
            int i;
            if (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1204->g_881.sb585)))).xxxxzzwxwwyxwyzy, ((VECTOR(int32_t, 2))(0x02475C4AL, 0x4BD777FEL)).xxxxyxyyxyxxyxyx))).s9)
            { /* block id: 473 */
                uint64_t l_891 = 0x53621AC170872B6FL;
                struct S1 **l_901 = &p_1204->g_510[5];
                int32_t l_931 = (-1L);
                int32_t l_932 = 0x61B88652L;
                int32_t *l_941 = &l_861;
                int32_t **l_942[7] = {&p_1204->g_208,&p_1204->g_208,&p_1204->g_208,&p_1204->g_208,&p_1204->g_208,&p_1204->g_208,&p_1204->g_208};
                int32_t *l_947 = (void*)0;
                int i;
                for (p_1204->g_842.f0 = 0; (p_1204->g_842.f0 < 7); ++p_1204->g_842.f0)
                { /* block id: 476 */
                    uint8_t l_886 = 0x1CL;
                    int32_t *l_895 = (void*)0;
                    int32_t *l_896 = (void*)0;
                    int16_t l_898 = 0x5CCAL;
                    int16_t *l_903 = &p_1204->g_205;
                    VECTOR(int32_t, 2) l_918 = (VECTOR(int32_t, 2))(0x3DEEA448L, 0x160E196FL);
                    int32_t *l_922 = (void*)0;
                    int32_t *l_923 = &p_1204->g_61;
                    int32_t *l_924 = (void*)0;
                    int32_t *l_925 = &p_1204->g_45[1][0][8];
                    int32_t *l_926 = (void*)0;
                    int32_t *l_927 = (void*)0;
                    int32_t *l_928 = (void*)0;
                    int32_t *l_929 = (void*)0;
                    int32_t *l_930[1][5] = {{&l_894,&l_894,&l_894,&l_894,&l_894}};
                    int i, j;
                    l_898 = (l_894 = (safe_lshift_func_uint8_t_u_s((l_886 ^ ((safe_mul_func_int8_t_s_s((p_1204->g_54.f2 == (safe_rshift_func_int16_t_s_s((0x03ED9B68L <= (((p_1204->g_733.y != FAKE_DIVERGE(p_1204->group_2_offset, get_group_id(2), 10)) != ((VECTOR(int32_t, 8))((l_891 && 0x2D2C21416BACF008L), p_1204->g_491.y, 0L, (safe_div_func_uint16_t_u_u((1UL | ((0L != p_22) , (*p_1204->g_774))), l_846)), ((VECTOR(int32_t, 4))(0L)))).s3) , 0x1D1CECD1L)), p_1204->g_184.s6))), l_867)) | p_1204->g_336.s7)), 2)));
                    (*l_923) = ((safe_sub_func_uint16_t_u_u((l_901 != &p_1204->g_510[5]), l_846)) == ((((*l_903) = (((**p_1204->g_432) , (*p_1204->g_774)) >= (l_891 & ((VECTOR(uint8_t, 8))(l_902.s13314304)).s3))) != (safe_rshift_func_uint8_t_u_u(l_906, ((((safe_rshift_func_uint8_t_u_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_1204->g_909.yyxyyyxyxyxxxxxx)).s57)), 1UL, 0x59CEL)).even)).yxyyxyyx)), (uint16_t)(safe_rshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((p_22 , (safe_add_func_int16_t_s_s(((((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_918.yy)), ((VECTOR(int32_t, 4))(p_1204->g_919.xxxy)), 4L, 1L)).s1702264022236657, ((VECTOR(int32_t, 8))(p_1204->g_920.yyxyxyxy)).s3134471337157767, ((VECTOR(int32_t, 4))(l_921.s3601)).xxwzwyzzzyzwwzzy))).s6 && 1UL) | p_22), 0x07F7L))), l_891)), p_1204->g_920.y)) , l_891), l_891))))))).s1 | p_1204->g_198), p_22)) < l_851.x) , FAKE_DIVERGE(p_1204->group_2_offset, get_group_id(2), 10)) , p_19)))) != GROUP_DIVERGE(1, 1)));
                    l_938--;
                }
                (*p_1204->g_871) = l_941;
                for (l_894 = 0; (l_894 <= (-21)); --l_894)
                { /* block id: 486 */
                    for (p_22 = (-9); (p_22 != 27); p_22 = safe_add_func_uint32_t_u_u(p_22, 1))
                    { /* block id: 489 */
                        (1 + 1);
                    }
                }
            }
            else
            { /* block id: 497 */
                int16_t l_959 = (-1L);
                int32_t *l_963 = &l_936;
                int32_t *l_964 = &p_1204->g_59;
                int32_t *l_965 = (void*)0;
                int32_t *l_966 = (void*)0;
                int32_t *l_967 = &l_846;
                int32_t *l_969 = (void*)0;
                int32_t *l_970 = &l_935;
                int32_t *l_971 = (void*)0;
                int32_t *l_972 = &l_936;
                int32_t *l_973 = &p_1204->g_45[1][0][8];
                int32_t *l_974[5][1];
                uint32_t *l_982 = &p_1204->g_79;
                int32_t **l_985[1][3][9] = {{{&l_964,&l_974[0][0],&l_974[1][0],(void*)0,&l_974[1][0],&l_974[0][0],&l_964,&l_972,&l_974[0][0]},{&l_964,&l_974[0][0],&l_974[1][0],(void*)0,&l_974[1][0],&l_974[0][0],&l_964,&l_972,&l_974[0][0]},{&l_964,&l_974[0][0],&l_974[1][0],(void*)0,&l_974[1][0],&l_974[0][0],&l_964,&l_972,&l_974[0][0]}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_974[i][j] = &l_861;
                }
                for (l_936 = 0; (l_936 <= (-28)); l_936 = safe_sub_func_uint8_t_u_u(l_936, 7))
                { /* block id: 500 */
                    int32_t *l_951 = (void*)0;
                    int32_t *l_952 = &p_1204->g_45[1][0][8];
                    int32_t *l_953 = &l_861;
                    int32_t *l_954 = &p_1204->g_59;
                    int32_t *l_955 = &l_937;
                    int32_t *l_956 = &l_934;
                    int32_t *l_957 = &l_934;
                    int32_t *l_958[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_958[i] = &l_894;
                    ++l_960;
                }
                l_975.x--;
                l_986 = func_38(l_968[0][1], (((*l_982) &= (safe_mod_func_uint32_t_u_u(((*p_1204->g_294) || (&p_1204->g_529 != &p_1204->g_529)), ((((*l_964) = ((VECTOR(int32_t, 16))(p_1204->g_980.wzwzzyzwwzwzwywz)).s2) <= l_868) | ((p_1204->g_294 != l_981) , 1L))))) >= (-4L)), l_983, p_1204);
                l_988 = l_987;
            }
            l_990 &= ((VECTOR(int32_t, 4))(p_1204->g_989.s6556)).z;
            for (l_960 = 0; (l_960 == 29); l_960++)
            { /* block id: 512 */
                int32_t l_995[5] = {0L,0L,0L,0L,0L};
                struct S1 l_1001 = {0x9CBA41EBL,0x3F585A0DA82BBDDCL};
                int16_t l_1029 = 0x51C2L;
                int i;
                for (p_1204->g_210.f0 = 0; (p_1204->g_210.f0 != 22); p_1204->g_210.f0++)
                { /* block id: 515 */
                    struct S1 l_1000 = {0x720B3934L,0x7CE6BD9A3D59B8F5L};
                    int32_t *l_1024 = &p_1204->g_59;
                    if (l_995[2])
                        break;
                    if ((p_1204->g_312 | l_995[1]))
                    { /* block id: 517 */
                        int16_t *l_996 = &p_1204->g_205;
                        int32_t *l_997 = (void*)0;
                        int32_t *l_998[7] = {(void*)0,&p_1204->g_9[5][6],(void*)0,(void*)0,&p_1204->g_9[5][6],(void*)0,(void*)0};
                        int32_t l_999 = 7L;
                        int32_t **l_1002 = &l_997;
                        int32_t **l_1005 = (void*)0;
                        int i;
                        l_935 = (((*l_996) |= 0x0931L) , ((l_921.s1 &= (l_995[2] == p_22)) == l_999));
                        l_1001 = (l_1000 = l_948);
                        (*l_1002) = &l_894;
                        (**l_1002) = ((((l_1000.f1 <= ((safe_rshift_func_int8_t_s_u(((void*)0 != l_987), ((**l_877) = p_1204->g_316))) || (l_1008 ^= (l_1005 != ((p_22 ^ (safe_mul_func_int8_t_s_s((**l_1002), (-5L)))) , &p_1204->g_794))))) != 0xB9L) > p_21) | (*p_1204->g_294));
                    }
                    else
                    { /* block id: 527 */
                        int32_t l_1015[2][1];
                        int32_t **l_1025 = (void*)0;
                        int32_t **l_1026 = &l_987;
                        uint32_t **l_1027 = (void*)0;
                        uint32_t **l_1028 = &p_1204->g_774;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1015[i][j] = 0x74907B56L;
                        }
                        l_934 = (l_1000.f1 == (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_1015[0][0], 6)), 2)), ((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint64_t_u_u(4UL, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(0x30L, 6)), 3)))) & ((p_22 , func_47(((*l_1026) = l_1024), p_1204)) == ((*l_1028) = l_986))) >= ((-7L) | p_1204->g_45[1][3][8])) , l_1029), p_1204->g_3)) , 0x1CF22315A01B381DL))));
                        return l_1030[0][0][3];
                    }
                }
                for (p_1204->g_148 = 0; (p_1204->g_148 != 28); ++p_1204->g_148)
                { /* block id: 536 */
                    if ((atomic_inc(&p_1204->l_atomic_input[5]) == 2))
                    { /* block id: 538 */
                        uint32_t l_1033 = 7UL;
                        int32_t l_1034 = 7L;
                        int16_t l_1035 = 1L;
                        int64_t l_1036[2][7][9] = {{{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L}},{{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L},{(-1L),7L,7L,(-1L),0x38A19A5F6A9B885AL,0x4DA531C741DAB63AL,0x54A029028BB074A5L,0x3265F9ABCBBA67C9L,8L}}};
                        uint64_t l_1037[4] = {1UL,1UL,1UL,1UL};
                        uint8_t l_1040 = 250UL;
                        int16_t l_1041 = 0x74EAL;
                        int32_t l_1042 = 0x4CB2E302L;
                        uint8_t l_1043 = 0xA4L;
                        int i, j, k;
                        l_1034 |= l_1033;
                        --l_1037[1];
                        l_1041 = l_1040;
                        --l_1043;
                        unsigned int result = 0;
                        result += l_1033;
                        result += l_1034;
                        result += l_1035;
                        int l_1036_i0, l_1036_i1, l_1036_i2;
                        for (l_1036_i0 = 0; l_1036_i0 < 2; l_1036_i0++) {
                            for (l_1036_i1 = 0; l_1036_i1 < 7; l_1036_i1++) {
                                for (l_1036_i2 = 0; l_1036_i2 < 9; l_1036_i2++) {
                                    result += l_1036[l_1036_i0][l_1036_i1][l_1036_i2];
                                }
                            }
                        }
                        int l_1037_i0;
                        for (l_1037_i0 = 0; l_1037_i0 < 4; l_1037_i0++) {
                            result += l_1037[l_1037_i0];
                        }
                        result += l_1040;
                        result += l_1041;
                        result += l_1042;
                        result += l_1043;
                        atomic_add(&p_1204->l_special_values[5], result);
                    }
                    else
                    { /* block id: 543 */
                        (1 + 1);
                    }
                }
                if (l_933[0])
                    break;
            }
            return l_983;
        }
        else
        { /* block id: 550 */
            int32_t *l_1046 = (void*)0;
            int32_t *l_1047 = &l_935;
            int32_t *l_1048 = (void*)0;
            int32_t *l_1049 = &l_894;
            int32_t *l_1050 = (void*)0;
            int32_t *l_1051 = &l_937;
            int32_t *l_1052 = &l_861;
            int32_t *l_1053 = (void*)0;
            int32_t *l_1054[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint32_t l_1071 = 0xD29D6232L;
            int i, j;
            l_1071++;
            if ((atomic_inc(&p_1204->g_atomic_input[21 * get_linear_group_id() + 13]) == 4))
            { /* block id: 553 */
                int64_t l_1074 = (-1L);
                int64_t l_1075 = 0x506FBFE158A5E819L;
                uint32_t l_1076 = 0x91038E02L;
                uint8_t l_1087 = 0x1CL;
                uint32_t l_1135 = 0UL;
                --l_1076;
                for (l_1075 = (-23); (l_1075 != (-23)); l_1075 = safe_add_func_uint64_t_u_u(l_1075, 5))
                { /* block id: 557 */
                    int32_t l_1081 = 0x33E3C865L;
                    for (l_1081 = 0; (l_1081 >= 4); l_1081 = safe_add_func_int32_t_s_s(l_1081, 8))
                    { /* block id: 560 */
                        struct S0 l_1085 = {1UL,0x69BE862FL,1L};
                        struct S0 *l_1084 = &l_1085;
                        struct S0 *l_1086 = &l_1085;
                        l_1086 = l_1084;
                    }
                }
                if (l_1087)
                { /* block id: 564 */
                    int32_t l_1089 = 3L;
                    int32_t *l_1088 = &l_1089;
                    int32_t *l_1090 = &l_1089;
                    int32_t *l_1091 = &l_1089;
                    int32_t *l_1108 = (void*)0;
                    int32_t *l_1109 = &l_1089;
                    int32_t *l_1110[8][2][8];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_1110[i][j][k] = &l_1089;
                        }
                    }
                    l_1091 = (l_1090 = l_1088);
                    for (l_1089 = 0; (l_1089 <= (-27)); l_1089 = safe_sub_func_int64_t_s_s(l_1089, 5))
                    { /* block id: 569 */
                        int32_t l_1094 = 0x52601E9FL;
                        int32_t l_1095 = 0x100034AFL;
                        int32_t l_1096 = 0x4A332733L;
                        uint32_t l_1097 = 0xE57FEB81L;
                        uint32_t l_1100 = 0x39618912L;
                        uint32_t l_1103 = 1UL;
                        uint16_t l_1104[1][10] = {{65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL}};
                        int64_t l_1105 = 8L;
                        uint8_t l_1106 = 0x5EL;
                        int16_t l_1107 = (-2L);
                        int i, j;
                        l_1094 = 0x53143AC7L;
                        --l_1097;
                        l_1106 = (l_1105 = (l_1104[0][7] |= ((l_1100--) , l_1103)));
                        l_1094 |= (l_1095 = l_1107);
                    }
                    l_1108 = (void*)0;
                    l_1110[6][1][0] = l_1109;
                }
                else
                { /* block id: 581 */
                    VECTOR(uint16_t, 8) l_1111 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 0xCFF8L), 0xCFF8L), 0xCFF8L, 8UL, 0xCFF8L);
                    VECTOR(uint16_t, 4) l_1112 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xBEDDL), 0xBEDDL);
                    VECTOR(uint16_t, 8) l_1113 = (VECTOR(uint16_t, 8))(0x971DL, (VECTOR(uint16_t, 4))(0x971DL, (VECTOR(uint16_t, 2))(0x971DL, 3UL), 3UL), 3UL, 0x971DL, 3UL);
                    VECTOR(uint16_t, 8) l_1114 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xB435L), 0xB435L), 0xB435L, 65533UL, 0xB435L);
                    VECTOR(uint16_t, 8) l_1115 = (VECTOR(uint16_t, 8))(0x2D42L, (VECTOR(uint16_t, 4))(0x2D42L, (VECTOR(uint16_t, 2))(0x2D42L, 0x4D95L), 0x4D95L), 0x4D95L, 0x2D42L, 0x4D95L);
                    uint16_t l_1116 = 0xF794L;
                    VECTOR(uint16_t, 2) l_1117 = (VECTOR(uint16_t, 2))(5UL, 0xAD8CL);
                    VECTOR(uint16_t, 4) l_1118 = (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 65535UL), 65535UL);
                    VECTOR(uint16_t, 8) l_1119 = (VECTOR(uint16_t, 8))(0xFA5AL, (VECTOR(uint16_t, 4))(0xFA5AL, (VECTOR(uint16_t, 2))(0xFA5AL, 65526UL), 65526UL), 65526UL, 0xFA5AL, 65526UL);
                    int32_t l_1121 = 0x76C28A8FL;
                    int32_t *l_1120 = &l_1121;
                    int32_t *l_1122 = &l_1121;
                    VECTOR(int64_t, 2) l_1123 = (VECTOR(int64_t, 2))(0x26F1CC385CF3454DL, 0L);
                    uint32_t l_1124 = 0x554D3134L;
                    int32_t l_1125 = 0L;
                    uint8_t l_1126 = 1UL;
                    int i;
                    l_1122 = (((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(l_1111.s0542337505101656)).s70, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 2))(l_1112.xz)).yxxyyyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_1113.s46166004)).hi)).xxzzxwzx))), ((VECTOR(uint16_t, 16))(FAKE_DIVERGE(p_1204->global_2_offset, get_global_id(2), 10), ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(l_1114.s1474)).xxywzwywxzyxzwyy, ((VECTOR(uint16_t, 2))(0x65EAL, 0x99D7L)).xxxxxxyxyxyyxyyy))).s2, ((VECTOR(uint16_t, 8))(l_1115.s02551363)), 0xD376L, l_1116, 0x2E85L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1117.yy)), 0x6298L, 0xBDDEL)).w, 65535UL, 0x9ED8L)).lo))).s23))).xxyxyyyyyyxyyyyx)).sa050, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(l_1118.xzww)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_1119.s0421421163464726)).s6e)))).yxxxxxyyyyyyyyyx)).s70cd)))))).y , l_1120);
                    if ((l_1126 |= ((l_1124 = ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1123.xyyxxyxxxyyyxxxx)).s60)).hi) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1125, ((VECTOR(int32_t, 2))((-1L), 0x4B360D1DL)), 0x57CCF0B3L)).even)))).hi)))
                    { /* block id: 585 */
                        int32_t l_1127 = (-1L);
                        int16_t l_1128 = 1L;
                        struct S1 *l_1129 = (void*)0;
                        int32_t l_1131 = 0L;
                        int32_t *l_1130 = &l_1131;
                        struct S0 l_1132 = {0xD1B0C947247CE3B4L,1L,0x30E33057CD0DE6D8L};
                        struct S0 l_1133 = {3UL,-10L,0x0F8C50BFA79C5576L};
                        uint32_t l_1134 = 0UL;
                        l_1129 = (l_1127 , (l_1128 , (void*)0));
                        l_1130 = l_1130;
                        l_1133 = l_1132;
                        (*l_1120) |= l_1134;
                    }
                    else
                    { /* block id: 590 */
                        l_1122 = (void*)0;
                    }
                }
                l_1135++;
                unsigned int result = 0;
                result += l_1074;
                result += l_1075;
                result += l_1076;
                result += l_1087;
                result += l_1135;
                atomic_add(&p_1204->g_special_values[21 * get_linear_group_id() + 13], result);
            }
            else
            { /* block id: 595 */
                (1 + 1);
            }
            for (l_846 = 0; (l_846 >= (-22)); l_846--)
            { /* block id: 600 */
                int64_t l_1156 = 0x0BA57F43C9EC2A8CL;
                for (l_1055 = 14; (l_1055 > (-21)); l_1055--)
                { /* block id: 603 */
                    int32_t *****l_1144 = &l_1142;
                    int32_t l_1170 = 0x17B410EEL;
                    int32_t **l_1173 = &l_1050;
                    (*l_1052) = ((((*l_1144) = l_1142) != l_1145) & (l_1147[0] == &p_1204->g_774));
                    for (l_894 = 29; (l_894 <= 25); l_894 = safe_sub_func_int8_t_s_s(l_894, 1))
                    { /* block id: 608 */
                        VECTOR(uint8_t, 2) l_1157 = (VECTOR(uint8_t, 2))(1UL, 0xCEL);
                        VECTOR(int8_t, 16) l_1160 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L), (VECTOR(int8_t, 2))(7L, (-1L)), (VECTOR(int8_t, 2))(7L, (-1L)), 7L, (-1L), 7L, (-1L));
                        uint8_t l_1167 = 247UL;
                        uint16_t *l_1169 = &l_938;
                        int i;
                        (*p_1204->g_1172) = func_38(((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(0xFBL, l_1156, 0xD1L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(l_1157.yxxx)).yxxxxzxyyzyyzxyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(0UL, 0x45L)), ((VECTOR(uint8_t, 4))((~(((((*l_1169) = ((+((void*)0 != l_1158)) & (((VECTOR(int8_t, 16))(l_1160.s91e805e74e2da7f9)).s6 > ((p_1204->g_210.f1 |= (safe_lshift_func_uint8_t_u_u((((0x786A082F420592FDL == ((void*)0 == &p_1204->g_774)) != (safe_add_func_uint64_t_u_u((*p_1204->g_294), ((safe_mod_func_uint32_t_u_u(l_1167, ((((((*l_1052) &= l_1156) ^ l_1168) || p_1204->g_79) > l_1157.x) | 0x6DC5E244L))) ^ p_1204->g_3)))) != l_1160.s4), p_1204->g_183.s1))) <= p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))])))) || 65531UL) > p_1204->g_734.s3) , p_19)), p_22, 0x79L, 255UL)).hi))), 0UL, 0x28L)).zxwwzyzyxyywxyyy, ((VECTOR(uint8_t, 16))(1UL))))).odd)), p_1204->g_107.w, p_1204->g_217[4][4][2], l_1170, 0x18L, 0xE3L)).lo, ((VECTOR(uint8_t, 8))(8UL))))))), ((VECTOR(uint8_t, 8))(0x04L)), ((VECTOR(uint8_t, 8))(8UL))))).s4, 1L)) , (*p_1204->g_294)) ^ 0x3A723E2574D70D44L), l_1156)) , l_1170), p_22)) , l_1171), l_1157.x, &p_1204->g_54, p_1204);
                    }
                    (*l_1173) = p_20;
                }
            }
        }
    }
    else
    { /* block id: 618 */
        uint64_t l_1174 = 0UL;
        int32_t *l_1175 = (void*)0;
        int32_t *l_1176 = (void*)0;
        int32_t *l_1177[4][1];
        volatile struct S0 **l_1183 = &p_1204->g_7;
        volatile struct S0 ***l_1182 = &l_1183;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_1177[i][j] = &l_846;
        }
        (*p_1204->g_7) = (**p_1204->g_432);
        l_1179[1]++;
        (*l_1182) = &p_1204->g_7;
    }
    return l_1184;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_721 p_1204->g_106 p_1204->g_107 p_1204->g_294 p_1204->g_295 p_1204->g_8.f1 p_1204->g_183 p_1204->g_54.f0 p_1204->g_773 p_1204->g_4 p_1204->g_783 p_1204->g_133 p_1204->g_7 p_1204->g_8 p_1204->g_794 p_1204->g_9 p_1204->g_45 p_1204->g_208 p_1204->g_791 p_1204->g_312 p_1204->g_61 p_1204->g_207 p_1204->g_3 p_1204->g_328
 * writes: p_1204->g_208 p_1204->g_106 p_1204->g_210.f0 p_1204->g_710.f1 p_1204->g_79 p_1204->g_198 p_1204->g_54.f0 p_1204->g_773 p_1204->g_217 p_1204->g_427 p_1204->g_4 p_1204->g_791 p_1204->g_312 p_1204->g_61 p_1204->g_45
 */
int32_t  func_33(int32_t * p_34, struct S1  p_35, int64_t  p_36, int32_t * p_37, struct S2 * p_1204)
{ /* block id: 361 */
    VECTOR(int8_t, 8) l_717 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x21L), 0x21L), 0x21L, 0L, 0x21L);
    int32_t l_750 = 2L;
    int32_t l_756[9] = {0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL,0x17FF3F5AL};
    VECTOR(uint32_t, 16) l_768 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x119F8147L), 0x119F8147L), 0x119F8147L, 4294967295UL, 0x119F8147L, (VECTOR(uint32_t, 2))(4294967295UL, 0x119F8147L), (VECTOR(uint32_t, 2))(4294967295UL, 0x119F8147L), 4294967295UL, 0x119F8147L, 4294967295UL, 0x119F8147L);
    VECTOR(uint32_t, 2) l_769 = (VECTOR(uint32_t, 2))(0x499D4F99L, 1UL);
    int32_t l_770 = 0x0661A9FEL;
    int32_t *l_777 = &p_1204->g_198;
    int32_t ***l_809 = &p_1204->g_528[1][0];
    int8_t **l_814 = &p_1204->g_428;
    int i;
    if ((safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_1204->local_2_offset, get_local_id(2), 10), ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_717.s46)).lo, 0x5FL)), p_35.f1)) <= ((safe_mod_func_int16_t_s_s(p_35.f0, l_717.s3)) , (l_717.s4 <= (&p_1204->g_528[4][1] == &p_1204->g_528[9][0])))))))
    { /* block id: 362 */
        int32_t *l_720 = (void*)0;
        VECTOR(int32_t, 4) l_739 = (VECTOR(int32_t, 4))(0x252355E3L, (VECTOR(int32_t, 2))(0x252355E3L, 1L), 1L);
        int32_t l_743 = (-1L);
        int32_t l_779 = 0x29D765E8L;
        int8_t **l_780[4][3][4] = {{{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428}},{{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428}},{{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428}},{{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428},{&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428}}};
        struct S0 *l_784 = &p_1204->g_54;
        int32_t **l_785 = (void*)0;
        int32_t **l_786 = &p_1204->g_208;
        uint8_t *l_796 = &p_1204->g_791;
        int64_t l_797 = 0x552988107F596B3DL;
        int32_t *l_798[8];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_798[i] = (void*)0;
        (*p_1204->g_721) = l_720;
        for (p_1204->g_106 = 0; (p_1204->g_106 != 3); ++p_1204->g_106)
        { /* block id: 366 */
            uint32_t l_732 = 0x19A7E726L;
            VECTOR(int32_t, 2) l_735 = (VECTOR(int32_t, 2))(0x19E193CEL, 0x5D599EFAL);
            int i;
            for (p_1204->g_210.f0 = 0; (p_1204->g_210.f0 <= 29); p_1204->g_210.f0 = safe_add_func_uint32_t_u_u(p_1204->g_210.f0, 4))
            { /* block id: 369 */
                VECTOR(int32_t, 2) l_736 = (VECTOR(int32_t, 2))((-7L), 0x0E94E851L);
                int64_t *l_742 = &p_1204->g_710.f1;
                int i;
                l_743 &= (safe_div_func_uint64_t_u_u((0x0D043EC3087B692CL >= (((safe_mod_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((1UL == (p_1204->g_107.x == l_732)), ((((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(p_1204->g_733.zyzyxwzyzxywyzxy)).s591a, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(p_1204->g_734.s2740265230503162)).lo, ((VECTOR(int32_t, 8))(l_735.xyyyyxxy))))), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_736.xy)), (-1L), 0x0F68BDD2L)).xxyywwxz, (int32_t)(*p_37), (int32_t)((*p_34) ^= (safe_add_func_uint16_t_u_u(p_1204->g_9[2][2], (!p_1204->g_734.s1))))))), ((VECTOR(int32_t, 16))(l_739.wwxxzzwxzzzzyxzx)).lo))).hi))).z , (((*p_1204->g_294) , ((safe_sub_func_int64_t_s_s(((*l_742) = l_717.s6), 0x2B5CEFA4EB8B1320L)) , p_36)) ^ p_35.f1)) , p_1204->g_8[2][0].f1))) ^ p_36) && l_717.s1), (-1L))) & 0x0A6C4788L) < p_35.f0)), 18446744073709551615UL));
                for (p_36 = (-27); (p_36 == (-26)); p_36 = safe_add_func_uint8_t_u_u(p_36, 5))
                { /* block id: 375 */
                    int32_t l_755 = 0x4EA9A8B9L;
                    VECTOR(int32_t, 16) l_757 = (VECTOR(int32_t, 16))(0x75E66E58L, (VECTOR(int32_t, 4))(0x75E66E58L, (VECTOR(int32_t, 2))(0x75E66E58L, 0L), 0L), 0L, 0x75E66E58L, 0L, (VECTOR(int32_t, 2))(0x75E66E58L, 0L), (VECTOR(int32_t, 2))(0x75E66E58L, 0L), 0x75E66E58L, 0L, 0x75E66E58L, 0L);
                    int i;
                    for (p_1204->g_79 = 0; (p_1204->g_79 == 18); p_1204->g_79 = safe_add_func_int8_t_s_s(p_1204->g_79, 6))
                    { /* block id: 378 */
                        return l_717.s5;
                    }
                    for (p_1204->g_198 = (-4); (p_1204->g_198 != 2); p_1204->g_198++)
                    { /* block id: 383 */
                        int32_t *l_751 = (void*)0;
                        int32_t *l_752 = (void*)0;
                        int32_t *l_753 = &l_750;
                        int32_t *l_754[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint8_t l_758 = 0x57L;
                        int32_t **l_761 = &l_752;
                        int i;
                        ++l_758;
                        p_34 = p_37;
                        (*l_761) = ((l_735.y || ((FAKE_DIVERGE(p_1204->group_1_offset, get_group_id(1), 10) <= 0x32D2ACD32DDFB4B0L) ^ p_1204->g_183.s4)) , (void*)0);
                    }
                }
                if (l_717.s7)
                    continue;
                return l_756[6];
            }
            if (l_735.x)
                continue;
            for (p_1204->g_54.f0 = 0; (p_1204->g_54.f0 == 45); p_1204->g_54.f0 = safe_add_func_int32_t_s_s(p_1204->g_54.f0, 3))
            { /* block id: 395 */
                int32_t **l_765 = &p_1204->g_208;
                int32_t ***l_764 = &l_765;
                uint32_t ***l_775[10][10][2] = {{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}},{{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]},{(void*)0,&p_1204->g_773[2][7][1]}}};
                int8_t *l_776 = &p_1204->g_217[4][4][2];
                int32_t **l_778 = &l_777;
                int8_t ***l_781 = (void*)0;
                int8_t ***l_782 = (void*)0;
                int i, j, k;
                l_756[0] &= ((l_764 != ((p_35.f0 , ((safe_rshift_func_uint8_t_u_u((l_720 != ((*l_778) = (((((((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_768.s92e0)).hi)).yyxyyxxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_769.yxyxyyyy)).s37)).yxxxxyyx))).s5 | ((l_770 , ((-8L) && (((*l_776) = (safe_div_func_uint8_t_u_u((((*p_1204->g_294) <= ((p_1204->g_773[0][6][2] = p_1204->g_773[3][5][2]) == &p_1204->g_774)) & ((((((p_35 , p_35.f0) , p_35.f0) , (void*)0) == (void*)0) , 0x147A4D8DL) ^ 1UL)), p_36))) , p_35.f1))) | p_1204->g_4.s3)) , (void*)0) != &p_37) | l_735.y) , l_777))), 0)) != GROUP_DIVERGE(1, 1))) , &p_1204->g_207)) , l_779);
                (*p_1204->g_783) = l_780[0][1][3];
            }
        }
        (*l_786) = &l_743;
        l_750 |= ((p_35.f0 < (((*l_796) ^= (safe_rshift_func_uint16_t_u_s(((((**p_1204->g_133) , (p_1204->g_4.s2 = (-7L))) , ((safe_add_func_int32_t_s_s(((p_1204->g_794 != (void*)0) <= 0x1F40122CL), l_769.x)) != (*p_34))) == (*p_1204->g_208)), 8))) ^ l_797)) || FAKE_DIVERGE(p_1204->group_1_offset, get_group_id(1), 10));
    }
    else
    { /* block id: 408 */
        for (p_1204->g_312 = (-29); (p_1204->g_312 < 10); p_1204->g_312++)
        { /* block id: 411 */
            int32_t *l_801 = &p_1204->g_3;
            int32_t **l_802 = &p_1204->g_208;
            int32_t ****l_810 = &l_809;
            uint32_t **l_811 = &p_1204->g_774;
            uint64_t *l_815 = (void*)0;
            uint64_t *l_816 = &p_1204->g_54.f0;
            if ((*p_34))
                break;
            (*l_802) = l_801;
            for (p_1204->g_61 = 16; (p_1204->g_61 == 28); p_1204->g_61++)
            { /* block id: 416 */
                if ((**p_1204->g_207))
                    break;
            }
            (*p_34) = ((((*l_816) = ((safe_rshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((0x5E1FL <= (((*l_810) = l_809) != &p_1204->g_528[7][0])) != (((l_770 ^ p_35.f1) , &p_1204->g_774) == (p_1204->g_773[1][5][4] = (l_811 = l_811)))), 0xEFB1L)), 1)) , (safe_mod_func_uint32_t_u_u((((void*)0 != l_814) < p_35.f1), (*p_1204->g_208))))) && p_36) , 0L);
        }
        (*p_34) |= 0x4CB40A25L;
        (*p_34) = (0xFBL ^ ((p_1204->g_328.s6 ^ p_35.f1) & (!0x5FEC0C98L)));
    }
    if ((atomic_inc(&p_1204->g_atomic_input[21 * get_linear_group_id() + 17]) == 3))
    { /* block id: 429 */
        struct S1 l_817 = {1UL,0x201F823D2FC03527L};
        int8_t l_818 = 0x44L;
        uint64_t l_819 = 0x3E2C1B34F70F0133L;
        l_819 = ((l_817 , 0L) , l_818);
        for (l_817.f0 = 0; (l_817.f0 <= 50); l_817.f0++)
        { /* block id: 433 */
            int64_t l_822[6][5] = {{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}};
            int i, j;
            l_822[0][2] |= (-7L);
        }
        for (l_819 = 0; (l_819 != 16); l_819 = safe_add_func_uint64_t_u_u(l_819, 6))
        { /* block id: 438 */
            VECTOR(uint64_t, 2) l_825 = (VECTOR(uint64_t, 2))(0xB12EB6381CA755C2L, 0xBA824A745CA9B657L);
            VECTOR(int32_t, 2) l_826 = (VECTOR(int32_t, 2))(0x04DAD663L, 1L);
            int16_t l_827 = 0L;
            uint32_t l_840 = 0x4A7DA28BL;
            int i;
            l_827 |= (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_825.yyxx)).even)).lo , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_826.yyxyyyyyxxxxxxyy)).s02)).hi);
            for (l_826.x = 0; (l_826.x == 3); ++l_826.x)
            { /* block id: 442 */
                VECTOR(int32_t, 16) l_830 = (VECTOR(int32_t, 16))(0x2D2DD3CFL, (VECTOR(int32_t, 4))(0x2D2DD3CFL, (VECTOR(int32_t, 2))(0x2D2DD3CFL, 0x2E222CAFL), 0x2E222CAFL), 0x2E222CAFL, 0x2D2DD3CFL, 0x2E222CAFL, (VECTOR(int32_t, 2))(0x2D2DD3CFL, 0x2E222CAFL), (VECTOR(int32_t, 2))(0x2D2DD3CFL, 0x2E222CAFL), 0x2D2DD3CFL, 0x2E222CAFL, 0x2D2DD3CFL, 0x2E222CAFL);
                uint32_t l_831[6][7] = {{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL},{4294967295UL,0UL,0xB78D0672L,0UL,4294967295UL,4294967295UL,0UL}};
                struct S0 l_832 = {0xB93D9D5BF3AC171FL,0x6D8F8555L,4L};
                struct S0 l_833[1] = {{0x9433D108BBE996E2L,0x39AA4ECBL,-1L}};
                uint8_t l_834 = 251UL;
                struct S1 l_835 = {0x1302A6DEL,1L};
                int32_t l_836 = 0x38293460L;
                int32_t l_837 = 0x38D88147L;
                int64_t l_838 = 0x5A078C7FE3DC8E66L;
                int64_t l_839 = (-2L);
                int i, j;
                l_830.s9 = 0x469876AEL;
                l_833[0] = (l_831[5][5] , l_832);
                l_837 ^= (l_834 , (l_835 , l_836));
                l_839 ^= l_838;
            }
            l_840 &= (l_826.y ^= 0L);
        }
        unsigned int result = 0;
        result += l_817.f0;
        result += l_817.f1;
        result += l_818;
        result += l_819;
        atomic_add(&p_1204->g_special_values[21 * get_linear_group_id() + 17], result);
    }
    else
    { /* block id: 451 */
        (1 + 1);
    }
    return (*p_34);
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_210.f0 p_1204->g_475 p_1204->g_479 p_1204->g_480 p_1204->g_294 p_1204->g_295 p_1204->g_208 p_1204->g_3 p_1204->g_45 p_1204->g_483 p_1204->g_486 p_1204->g_491 p_1204->g_405 p_1204->g_312 p_1204->g_337 p_1204->g_107 p_1204->g_4 p_1204->g_422 p_1204->g_60 p_1204->g_61 p_1204->g_514 p_1204->g_401 p_1204->g_431 p_1204->g_316 p_1204->g_54.f1 p_1204->g_328 p_1204->g_205 p_1204->g_216 p_1204->g_217 p_1204->g_106 p_1204->g_9 p_1204->g_432 p_1204->g_7 p_1204->g_8 p_1204->g_133 p_1204->g_336
 * writes: p_1204->g_210.f0 p_1204->g_45 p_1204->g_61 p_1204->g_208 p_1204->g_422 p_1204->g_312 p_1204->g_79 p_1204->g_198 p_1204->g_510 p_1204->g_209 p_1204->g_528 p_1204->g_401 p_1204->g_316 p_1204->g_4 p_1204->g_205 p_1204->g_106 p_1204->g_491 p_1204->g_220 p_1204->g_148 p_1204->g_54.f2 p_1204->g_7
 */
int32_t * func_38(int32_t  p_39, int32_t  p_40, struct S0 * p_41, struct S2 * p_1204)
{ /* block id: 212 */
    int32_t *l_462 = &p_1204->g_45[0][6][6];
    int32_t *l_463 = &p_1204->g_61;
    int32_t *l_464[7][2][7] = {{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}},{{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3},{&p_1204->g_45[2][5][5],&p_1204->g_45[0][4][5],&p_1204->g_9[1][1],&p_1204->g_9[5][6],&p_1204->g_9[5][6],&p_1204->g_3,&p_1204->g_3}}};
    uint8_t l_465 = 0x9BL;
    struct S0 l_470 = {0x1241CCF6E3F6F17BL,0L,0L};
    struct S0 *l_471 = &l_470;
    VECTOR(int32_t, 2) l_472 = (VECTOR(int32_t, 2))(0x69E414E5L, 0x140FA1FFL);
    struct S0 l_481 = {0xD263871D29443E50L,0x21710C60L,-1L};
    struct S1 *l_508[10][1][4] = {{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}},{{&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}}};
    uint64_t l_559 = 0x4EDC1A3198E4A948L;
    int i, j, k;
    l_465--;
    for (p_1204->g_210.f0 = (-16); (p_1204->g_210.f0 >= 32); p_1204->g_210.f0++)
    { /* block id: 216 */
        (*l_462) = ((VECTOR(int32_t, 2))(0L, (-7L))).hi;
    }
    if (((*l_463) = (((*l_471) = l_470) , ((VECTOR(int32_t, 16))(l_472.xxyyyyxxyyxyxyyy)).s4)))
    { /* block id: 221 */
        VECTOR(int32_t, 16) l_482 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-10L)), (-10L)), (-10L), 9L, (-10L), (VECTOR(int32_t, 2))(9L, (-10L)), (VECTOR(int32_t, 2))(9L, (-10L)), 9L, (-10L), 9L, (-10L));
        VECTOR(int32_t, 16) l_485 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        VECTOR(int32_t, 16) l_488 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L), (VECTOR(int32_t, 2))((-5L), (-1L)), (VECTOR(int32_t, 2))((-5L), (-1L)), (-5L), (-1L), (-5L), (-1L));
        VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(0x10A45B94L, (VECTOR(int32_t, 4))(0x10A45B94L, (VECTOR(int32_t, 2))(0x10A45B94L, 1L), 1L), 1L, 0x10A45B94L, 1L);
        int16_t l_501 = (-1L);
        uint32_t l_554 = 0xFE2000CDL;
        int i;
        if (p_40)
        { /* block id: 222 */
            VECTOR(int32_t, 8) l_484 = (VECTOR(int32_t, 8))(0x6814E581L, (VECTOR(int32_t, 4))(0x6814E581L, (VECTOR(int32_t, 2))(0x6814E581L, 0x49A4E1EBL), 0x49A4E1EBL), 0x49A4E1EBL, 0x6814E581L, 0x49A4E1EBL);
            VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))(0x38392A8FL, (VECTOR(int32_t, 4))(0x38392A8FL, (VECTOR(int32_t, 2))(0x38392A8FL, 1L), 1L), 1L, 0x38392A8FL, 1L, (VECTOR(int32_t, 2))(0x38392A8FL, 1L), (VECTOR(int32_t, 2))(0x38392A8FL, 1L), 0x38392A8FL, 1L, 0x38392A8FL, 1L);
            int i;
            for (p_1204->g_210.f0 = 9; (p_1204->g_210.f0 < 51); p_1204->g_210.f0 = safe_add_func_uint32_t_u_u(p_1204->g_210.f0, 7))
            { /* block id: 225 */
                (*p_1204->g_475) = &p_39;
                if ((atomic_inc(&p_1204->g_atomic_input[21 * get_linear_group_id() + 1]) == 1))
                { /* block id: 228 */
                    uint16_t l_476 = 0x7467L;
                    l_476--;
                    unsigned int result = 0;
                    result += l_476;
                    atomic_add(&p_1204->g_special_values[21 * get_linear_group_id() + 1], result);
                }
                else
                { /* block id: 230 */
                    (1 + 1);
                }
            }
            p_1204->g_422.x &= (p_39 = ((VECTOR(int32_t, 16))(0x5BA6F509L, ((VECTOR(int32_t, 4))(p_1204->g_479.yxxx)), 0x3668FCCDL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1204->g_480.s4e)).xyyyxyyy)).hi)), (int8_t)((VECTOR(int8_t, 8))(0x13L, ((((((*l_462) = ((*p_1204->g_294) <= ((((l_481 , ((p_40 || ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_482.s02b0)).ywxywyzw, ((VECTOR(int32_t, 4))(1L, (p_40 = (*p_1204->g_208)), 7L, 0x46D29421L)).zwzxyyzx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(p_1204->g_483.yxyx)).xwxzwzzw, ((VECTOR(int32_t, 8))(l_484.s70471734)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x0646A361L, 0x153C929EL)).xyxyyyxxxyxyxxxy, ((VECTOR(int32_t, 4))(l_485.sc346)).zxxxxyyzxyxxywwz, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(p_1204->g_486.yxyy)).xyzxzwwxywzyxwwz, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_487.s8a7c)).lo, ((VECTOR(int32_t, 2))(0x486AD31FL, (-2L)))))).yyxxxxyx)))))), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x559D63DDL, 0L)).xyyx)).hi, ((VECTOR(int32_t, 2))(0x2B86CFE0L, (-7L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_488.se38ab670)))).s00))), (((safe_div_func_int32_t_s_s((((VECTOR(uint8_t, 2))(p_1204->g_491.yx)).odd | (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(l_496.s1522)).zxxyzzyzzywzwzxz, (int32_t)(safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1204->group_0_offset, get_group_id(0), 10), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0x7F7EL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x193DL, (safe_mod_func_int8_t_s_s(((*l_462) >= GROUP_DIVERGE(0, 1)), ((*l_463) = (((-1L) < ((p_1204->g_405.sa == p_40) != 0xB4L)) ^ p_1204->g_312)))), 0x73E5L, (-10L), ((VECTOR(int16_t, 4))(4L)), ((VECTOR(int16_t, 8))(0L)))).s34b7)).odd)), (-9L))).hi)), p_39, 0x7644L, 0x5417L, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 2))(0x69EFL)), ((VECTOR(int16_t, 4))(0x41C5L)), 0x42A7L)).odd, ((VECTOR(int16_t, 8))(0L))))))).s2))))).s5 || 4294967295UL), 0x6F855DCEL)) | p_40), 5UL))), l_482.s2)) , l_501) | 1UL), 0x52E616F7L, p_40, 0L, (-6L), (-1L)))))).even)).s7420700751034166))).odd))).s04)).xyyyyxxx))).s4317632127141015)))).s6) >= l_484.s0)) < p_1204->g_337.y) , p_1204->g_107.w) > p_39))) == p_1204->g_4.s5) , p_1204->g_491.x) < l_487.sd) ^ l_487.sd), ((VECTOR(int8_t, 4))(0x04L)), (-4L), 1L)).s0))).wyzywxwy)), ((VECTOR(uint8_t, 8))(248UL))))).odd, ((VECTOR(int16_t, 4))(0x2A00L))))), ((VECTOR(uint16_t, 4))(0x1105L))))).zzwywzxz)).s12)).xyxxyyyy)), 4L, 0x645E53D7L)).s5);
        }
        else
        { /* block id: 239 */
            uint32_t l_517 = 0x4A5616BCL;
            struct S0 **l_553 = &p_1204->g_53;
            int32_t **l_556 = &p_1204->g_529;
            uint64_t l_557 = 1UL;
            int32_t l_558 = 0L;
            for (p_1204->g_312 = 0; (p_1204->g_312 <= 51); p_1204->g_312 = safe_add_func_int32_t_s_s(p_1204->g_312, 7))
            { /* block id: 242 */
                uint16_t *l_530 = (void*)0;
                uint16_t *l_531 = (void*)0;
                uint16_t *l_532 = (void*)0;
                uint16_t *l_533 = (void*)0;
                uint16_t *l_534 = (void*)0;
                uint16_t *l_535 = (void*)0;
                uint16_t *l_536 = (void*)0;
                uint16_t *l_537 = (void*)0;
                uint16_t *l_538 = (void*)0;
                uint16_t *l_539 = (void*)0;
                uint16_t *l_540 = (void*)0;
                uint16_t *l_541 = (void*)0;
                uint16_t *l_542 = (void*)0;
                uint16_t *l_543 = (void*)0;
                uint16_t *l_544 = (void*)0;
                uint16_t *l_545 = (void*)0;
                uint16_t *l_546 = (void*)0;
                int32_t l_555[9] = {0x341FBC1BL,9L,0x341FBC1BL,0x341FBC1BL,9L,0x341FBC1BL,0x341FBC1BL,9L,0x341FBC1BL};
                int i;
                for (p_1204->g_79 = (-13); (p_1204->g_79 >= 31); ++p_1204->g_79)
                { /* block id: 245 */
                    struct S1 l_511 = {3UL,0x2171568659555F0DL};
                    if (p_39)
                        break;
                    for (p_1204->g_198 = 10; (p_1204->g_198 == 18); p_1204->g_198++)
                    { /* block id: 249 */
                        struct S1 **l_509[8] = {&l_508[1][0][2],(void*)0,&l_508[1][0][2],&l_508[1][0][2],(void*)0,&l_508[1][0][2],&l_508[1][0][2],(void*)0};
                        int i;
                        p_1204->g_209 = (p_1204->g_510[5] = l_508[1][0][2]);
                    }
                    (*l_462) |= (l_511 , ((*p_1204->g_60) != (p_40 & ((void*)0 != &p_1204->g_428))));
                }
                (*p_1204->g_514) = &p_40;
                l_558 |= ((l_517 = l_482.sa) != ((!p_1204->g_45[2][1][9]) != (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(0L, (((safe_add_func_uint32_t_u_u(((0xE15F9EBDL || 0xD9BC8764L) || p_40), p_40)) < ((safe_mod_func_uint16_t_u_u(((*l_463) = (safe_rshift_func_uint8_t_u_s((((((p_1204->g_528[3][0] = (void*)0) != ((((p_1204->g_401.s2++) && ((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((((void*)0 == l_553) ^ l_554), FAKE_DIVERGE(p_1204->group_2_offset, get_group_id(2), 10))), l_555[0])) , (*l_463))) <= l_496.s0) , l_556)) == l_501) & p_1204->g_431) >= l_557), p_40))), 1L)) , l_555[0])) == p_39))), 0xF290L))));
                if (l_496.s4)
                    break;
            }
        }
        (*l_463) |= 0x2B887240L;
        ++l_559;
    }
    else
    { /* block id: 266 */
        VECTOR(uint64_t, 4) l_564 = (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x392FCE482872A78FL), 0x392FCE482872A78FL);
        int32_t l_703 = 0x04AC60B3L;
        uint32_t l_704 = 0xB0F11B93L;
        int32_t *l_707[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (*l_463) &= (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_564.yyzyyyzy)).s4, GROUP_DIVERGE(0, 1)));
        for (p_1204->g_316 = 0; (p_1204->g_316 <= 9); p_1204->g_316 = safe_add_func_int16_t_s_s(p_1204->g_316, 4))
        { /* block id: 270 */
            uint8_t *l_569[2];
            int32_t l_570 = 0x029942D6L;
            int16_t *l_571[2][2][8] = {{{&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205},{&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205}},{{&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205},{&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205,&p_1204->g_205}}};
            int32_t *l_694 = &p_1204->g_316;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_569[i] = &p_1204->g_106;
            (*l_462) ^= ((p_40 <= (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xCC5A4C65B14DF902L)), 0xA82ED373CFAD7C13L, 7UL)).hi)).even , ((p_1204->g_4.s6 = (p_1204->g_54.f1 & 0L)) ^ (GROUP_DIVERGE(2, 1) != (+(safe_rshift_func_uint16_t_u_u(3UL, 11))))))) >= (l_564.w , (((((&l_465 == l_569[0]) != (((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))((p_1204->g_205 ^= (+(((((((p_1204->g_328.s5 > (0x020694CB92CFDAB5L >= 0x1FBDBB7FD2C7323DL)) , (void*)0) == &p_1204->g_7) , (*p_1204->g_60)) >= FAKE_DIVERGE(p_1204->global_2_offset, get_global_id(2), 10)) & 8L) || l_570))), p_40, 1L, 0x0AABL)).even, (int16_t)0x7FC4L))).even < p_1204->g_491.y)) || 0x77087D81399F1FF6L) < 1UL) | 0x72073AD19F2FC3A1L)));
            if ((atomic_inc(&p_1204->g_atomic_input[21 * get_linear_group_id() + 19]) == 6))
            { /* block id: 275 */
                int32_t l_572 = 1L;
                VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(0x15772B02L, (VECTOR(int32_t, 4))(0x15772B02L, (VECTOR(int32_t, 2))(0x15772B02L, (-5L)), (-5L)), (-5L), 0x15772B02L, (-5L), (VECTOR(int32_t, 2))(0x15772B02L, (-5L)), (VECTOR(int32_t, 2))(0x15772B02L, (-5L)), 0x15772B02L, (-5L), 0x15772B02L, (-5L));
                uint64_t l_627 = 2UL;
                uint32_t l_628 = 0x9C3EACB1L;
                uint64_t l_629 = 8UL;
                uint32_t l_630[4] = {0UL,0UL,0UL,0UL};
                uint16_t l_631 = 1UL;
                VECTOR(int32_t, 2) l_632 = (VECTOR(int32_t, 2))(1L, 0x402516C9L);
                VECTOR(uint16_t, 8) l_633 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xDA52L), 0xDA52L), 0xDA52L, 0UL, 0xDA52L);
                VECTOR(uint16_t, 8) l_634 = (VECTOR(uint16_t, 8))(0x0A8DL, (VECTOR(uint16_t, 4))(0x0A8DL, (VECTOR(uint16_t, 2))(0x0A8DL, 0x9B73L), 0x9B73L), 0x9B73L, 0x0A8DL, 0x9B73L);
                uint16_t l_635 = 0xF916L;
                uint32_t l_636 = 0xE74C9727L;
                VECTOR(int32_t, 4) l_637 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                uint64_t l_638 = 18446744073709551615UL;
                VECTOR(int32_t, 4) l_639 = (VECTOR(int32_t, 4))(0x58BC6CCBL, (VECTOR(int32_t, 2))(0x58BC6CCBL, 0x07619779L), 0x07619779L);
                uint16_t l_640 = 7UL;
                int8_t l_641 = 0L;
                int16_t l_642 = 4L;
                int8_t l_643 = (-1L);
                uint16_t l_644[10][9][1] = {{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}},{{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}}};
                int32_t *l_645 = (void*)0;
                int32_t *l_646 = (void*)0;
                int i, j, k;
                if (l_572)
                { /* block id: 276 */
                    int32_t l_573 = 0x55B7D6F1L;
                    for (l_573 = 0; (l_573 > 11); ++l_573)
                    { /* block id: 279 */
                        struct S0 l_576 = {18446744073709551615UL,-5L,0x0F3A0E7FEE35253EL};
                        int32_t *l_577 = (void*)0;
                        int32_t l_579 = 0x48207EB6L;
                        int32_t *l_578 = &l_579;
                        uint16_t l_580 = 0xF78DL;
                        uint64_t l_583 = 18446744073709551614UL;
                        l_578 = (l_577 = (l_576 , (void*)0));
                        l_580++;
                        l_583++;
                    }
                }
                else
                { /* block id: 285 */
                    uint32_t l_586 = 6UL;
                    uint32_t l_616 = 4294967293UL;
                    if (l_586)
                    { /* block id: 286 */
                        int32_t l_587 = 0x0AAC833CL;
                        int32_t l_588 = (-3L);
                        l_572 = l_587;
                        l_572 |= l_588;
                    }
                    else
                    { /* block id: 289 */
                        VECTOR(uint32_t, 8) l_589 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967286UL), 4294967286UL), 4294967286UL, 4294967288UL, 4294967286UL);
                        int32_t l_591[1];
                        int32_t *l_590 = &l_591[0];
                        int32_t *l_592 = &l_591[0];
                        int32_t *l_593 = &l_591[0];
                        VECTOR(uint32_t, 2) l_594 = (VECTOR(uint32_t, 2))(0xF3D11DD6L, 4294967286UL);
                        int32_t *l_595[4][10] = {{&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],(void*)0,&l_591[0],(void*)0,&l_591[0]},{&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],(void*)0,&l_591[0],(void*)0,&l_591[0]},{&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],(void*)0,&l_591[0],(void*)0,&l_591[0]},{&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],&l_591[0],(void*)0,&l_591[0],(void*)0,&l_591[0]}};
                        int32_t *l_596 = (void*)0;
                        struct S1 l_597[10][5] = {{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}},{{0xC2E502B5L,-8L},{0UL,9L},{0xA2B84081L,0x786D2AAA82ABCE3FL},{0UL,9L},{0xC2E502B5L,-8L}}};
                        struct S1 l_598 = {4294967289UL,0x7F31CB2CC0EB5FF0L};
                        struct S1 l_599 = {1UL,0L};
                        struct S1 l_600 = {4294967295UL,2L};
                        uint64_t l_601 = 0x300F2EC725B967A1L;
                        VECTOR(uint64_t, 2) l_602 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 2UL);
                        VECTOR(uint16_t, 8) l_603 = (VECTOR(uint16_t, 8))(0xB762L, (VECTOR(uint16_t, 4))(0xB762L, (VECTOR(uint16_t, 2))(0xB762L, 65535UL), 65535UL), 65535UL, 0xB762L, 65535UL);
                        struct S0 l_604 = {0x243B78E922B05805L,0x3016A5C1L,1L};
                        struct S0 l_605 = {0xE04A960CE16381C1L,0x3AC57238L,1L};
                        VECTOR(int8_t, 8) l_606 = (VECTOR(int8_t, 8))(0x30L, (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x16L), 0x16L), 0x16L, 0x30L, 0x16L);
                        VECTOR(uint8_t, 4) l_607 = (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x66L), 0x66L);
                        uint32_t l_608 = 0xCB736694L;
                        int32_t l_609 = 1L;
                        uint64_t l_610[7];
                        uint32_t l_611 = 4294967295UL;
                        uint32_t l_612 = 9UL;
                        uint32_t l_613[6][4] = {{0xC3C43FC4L,1UL,0x28DE30D8L,0UL},{0xC3C43FC4L,1UL,0x28DE30D8L,0UL},{0xC3C43FC4L,1UL,0x28DE30D8L,0UL},{0xC3C43FC4L,1UL,0x28DE30D8L,0UL},{0xC3C43FC4L,1UL,0x28DE30D8L,0UL},{0xC3C43FC4L,1UL,0x28DE30D8L,0UL}};
                        struct S1 l_614 = {0x66153EA0L,0x06E204861F13C83AL};
                        struct S1 l_615 = {0xAEF94E57L,5L};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_591[i] = 3L;
                        for (i = 0; i < 7; i++)
                            l_610[i] = 18446744073709551615UL;
                        l_593 = (l_592 = (l_590 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_589.s3230)).even)).hi , (void*)0)));
                        l_596 = (((VECTOR(uint32_t, 8))(l_594.yyxyxyxy)).s0 , l_595[0][4]);
                        l_599 = (l_598 = l_597[7][3]);
                        l_615 = (l_600 , ((l_602.y = l_601) , ((((VECTOR(uint16_t, 4))(l_603.s0556)).z , (l_605 = l_604)) , (((VECTOR(uint8_t, 16))(255UL, 0x61L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(1UL, 0xF7L)).yxxy, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))((-2L), (-1L))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x7FL, 0x78L)).xyxx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_606.s76)).xyyy))))).xwywwwxzwzyyxxxx)).sbc))))).xyxy))), ((VECTOR(uint8_t, 2))(l_607.yx)), 0xF9L, 251UL)), 248UL, 0xE0L, l_608, l_609, 0xBDL, 0x9AL)).se , ((l_612 ^= (l_610[6] , l_611)) , (l_613[3][2] , l_614))))));
                    }
                    l_572 ^= l_616;
                    for (l_586 = (-5); (l_586 != 34); l_586 = safe_add_func_uint16_t_u_u(l_586, 3))
                    { /* block id: 304 */
                        uint64_t l_619[4][10][4] = {{{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L}},{{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L}},{{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L}},{{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L},{0x2B481A3DAE599D44L,1UL,0xEABD5AA9313CE63CL,0xAFA221EFC7481845L}}};
                        int64_t l_622 = (-7L);
                        uint16_t l_623 = 0xC43DL;
                        struct S1 l_625 = {0x2F5107BFL,-1L};
                        struct S1 *l_624 = &l_625;
                        int i, j, k;
                        --l_619[3][9][2];
                        l_572 = l_622;
                        l_624 = (l_623 , (void*)0);
                    }
                }
                l_644[0][5][0] ^= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_626.sd9)))).xxxx, ((VECTOR(int32_t, 4))(l_627, (l_642 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0L, 0x1D93FCE4L)).yxxy, ((VECTOR(int32_t, 16))(0x437ED5C1L, 0x1DDFA79DL, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))((l_631 = (l_630[1] &= (l_629 &= l_628))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_632.xyxxxyxyyxyxyxxy)).s8b88)).w, 0x18685895L, 0x1EE69D46L, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(l_633.s16)).yxyxyyyyyxyxxxyx, ((VECTOR(uint16_t, 16))(l_634.s7646205322335502))))))).sa , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5572D14AL, 0x160AE93BL)), 0x57CB2B4AL, (l_636 |= l_635), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_637.xy)), 0L, 0x77AB465AL)), ((VECTOR(int32_t, 2))(0x41C1873BL, 0x15876E86L)).lo, (-1L), ((VECTOR(int32_t, 2))(0x0933F113L, (-3L))), l_638, ((VECTOR(int32_t, 2))(l_639.xz)), (-2L))))).sb), l_640, 0x52B892FBL, (-4L))).even, (int32_t)0x14E53EDBL, (int32_t)l_641))).wzwwxzyz, ((VECTOR(int32_t, 8))(0x72659597L))))), 0x7FD5243DL, 0L, 0x1000400BL, 0x65020D34L, (-1L), 0x22272B74L)).s6e1a, ((VECTOR(int32_t, 4))(0x42F04F5FL))))).y), (-1L), 0L))))).zywzwyyxxyzxxxxx)).s1 , l_643);
                l_646 = (l_645 = (void*)0);
                for (l_626.s2 = (-14); (l_626.s2 == (-22)); l_626.s2 = safe_sub_func_int16_t_s_s(l_626.s2, 7))
                { /* block id: 320 */
                    struct S0 l_649 = {0xB3738BB2942D23E5L,0L,0x384D638592B00F41L};
                    struct S0 l_650 = {0x75E98CAA1572F0B1L,-8L,0x7381840A00F048A6L};
                    int32_t l_658 = 0x571DDC17L;
                    int32_t l_659 = 0x066D2B09L;
                    VECTOR(int32_t, 8) l_660 = (VECTOR(int32_t, 8))(0x6D2199B0L, (VECTOR(int32_t, 4))(0x6D2199B0L, (VECTOR(int32_t, 2))(0x6D2199B0L, 0x4B016A30L), 0x4B016A30L), 0x4B016A30L, 0x6D2199B0L, 0x4B016A30L);
                    VECTOR(int16_t, 16) l_661 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int16_t, 2))((-10L), 1L), (VECTOR(int16_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L);
                    VECTOR(int16_t, 16) l_662 = (VECTOR(int16_t, 16))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-10L)), (-10L)), (-10L), (-2L), (-10L), (VECTOR(int16_t, 2))((-2L), (-10L)), (VECTOR(int16_t, 2))((-2L), (-10L)), (-2L), (-10L), (-2L), (-10L));
                    VECTOR(int16_t, 16) l_663 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int16_t, 2))((-9L), 1L), (VECTOR(int16_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
                    VECTOR(int16_t, 4) l_664 = (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-1L)), (-1L));
                    VECTOR(uint16_t, 16) l_665 = (VECTOR(uint16_t, 16))(0x5D7AL, (VECTOR(uint16_t, 4))(0x5D7AL, (VECTOR(uint16_t, 2))(0x5D7AL, 0UL), 0UL), 0UL, 0x5D7AL, 0UL, (VECTOR(uint16_t, 2))(0x5D7AL, 0UL), (VECTOR(uint16_t, 2))(0x5D7AL, 0UL), 0x5D7AL, 0UL, 0x5D7AL, 0UL);
                    VECTOR(uint16_t, 2) l_666 = (VECTOR(uint16_t, 2))(0x250DL, 65535UL);
                    uint16_t l_667 = 0xE7B4L;
                    uint32_t l_668 = 0x6F1F77DFL;
                    VECTOR(uint8_t, 2) l_669 = (VECTOR(uint8_t, 2))(0x99L, 1UL);
                    int32_t l_670 = 1L;
                    VECTOR(uint8_t, 4) l_671 = (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 0x2FL), 0x2FL);
                    VECTOR(uint8_t, 4) l_672 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x4DL), 0x4DL);
                    VECTOR(uint8_t, 8) l_673 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL);
                    uint32_t l_674 = 0xF66F8215L;
                    uint32_t l_675 = 0xDFD69A6BL;
                    int64_t l_676 = 0x37F9AB055837BAEAL;
                    VECTOR(uint8_t, 16) l_677 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL, (VECTOR(uint8_t, 2))(1UL, 9UL), (VECTOR(uint8_t, 2))(1UL, 9UL), 1UL, 9UL, 1UL, 9UL);
                    VECTOR(uint8_t, 2) l_678 = (VECTOR(uint8_t, 2))(0x29L, 0UL);
                    int32_t l_679 = 0x5AAC9D4EL;
                    uint32_t l_680 = 0x98AC7AA7L;
                    uint64_t l_681 = 2UL;
                    int i;
                    l_650 = l_649;
                    if ((l_639.x = 0x22C97B8FL))
                    { /* block id: 323 */
                        uint64_t l_651 = 0xD62D012B5EC0E13CL;
                        VECTOR(int32_t, 4) l_652 = (VECTOR(int32_t, 4))(0x61807B95L, (VECTOR(int32_t, 2))(0x61807B95L, 0x68E40473L), 0x68E40473L);
                        uint8_t l_653 = 0x0DL;
                        uint16_t l_656 = 65535UL;
                        int i;
                        l_637.w = (l_651 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_652.ywzxywxx)))).s3);
                        l_653--;
                        l_632.y |= l_656;
                    }
                    else
                    { /* block id: 327 */
                        int32_t l_657 = 0x7282F6A3L;
                        l_637.z = l_657;
                    }
                    l_681 ^= ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(1L, 1L)), (int32_t)(l_658 , (l_659 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(8L, (-1L))), 0x28D9D640L, 0L)).xxwxyxzzwxyyyzwx)).s5))))).yyyxyyyyyyyxxyyy)).s193f)), ((VECTOR(int32_t, 8))(l_660.s24615175)).hi))).wxzxwwyz)).s32, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))((-2L), ((VECTOR(int16_t, 2))(l_661.s82)), (-6L))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_662.s5385977f387a744b)).hi)).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(1L, (-6L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_663.se4)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(l_664.xzwz)), ((VECTOR(int16_t, 2))((-6L), 0x72DBL)).xxxx))).odd))).xyyy)), (-6L), 0x00A7L)).even))), ((VECTOR(uint16_t, 8))(l_665.sda3588ef)).lo))).yxwzywzxxzyxyywz, ((VECTOR(uint16_t, 4))(l_666.yxyx)).xzzzyzyzzyxyzxzw))).s8, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(255UL, (l_667 ^= 0xCDL), l_668, ((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(251UL, 0x92L)), 0x95L, 0xFBL)), ((VECTOR(uint8_t, 4))(l_669.yyyy)))).s61, (uint8_t)l_670))).xxyxxxyx)).s7574226057442066, (uint8_t)GROUP_DIVERGE(2, 1)))).s5, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(l_671.xywxzyyy)).s4115633612676452, ((VECTOR(uint8_t, 8))(l_672.yyzzywyx)).s3330034302250452))).s69, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_673.s71)).yyyyyxyy)).s37, ((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 2))(0UL, 0x19L)).lo, 5UL, 0x88L, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(1UL, 0UL, (l_676 = ((l_649.f1 = (l_675 = l_674)) , 0UL)), 246UL, 0xA1L, ((VECTOR(uint8_t, 2))(0x1DL, 0x2BL)), ((VECTOR(uint8_t, 8))(l_677.s8090560c)).s7, 0x29L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(l_678.xxyy)).even, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 2))(7UL, 0xDEL)).yyyy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x35L, 0xF8L)), 0x6DL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(FAKE_DIVERGE(p_1204->group_0_offset, get_group_id(0), 10), 1UL, 250UL, ((VECTOR(uint8_t, 8))(0x41L)), 253UL, 255UL, ((VECTOR(uint8_t, 2))(0x1BL)), 0xFBL)), ((VECTOR(uint8_t, 16))(251UL)), ((VECTOR(uint8_t, 16))(0xFBL))))).s5bc9, ((VECTOR(uint8_t, 4))(254UL))))))).even)), ((VECTOR(uint8_t, 4))(0x6DL)), ((VECTOR(uint8_t, 2))(0x42L)), FAKE_DIVERGE(p_1204->group_2_offset, get_group_id(2), 10), 0x94L, 5UL, 5UL, 255UL)).s362d)).ywwzyxzwzxwwzzzw)).even)).even)).xywyyzzx, (uint8_t)255UL, (uint8_t)l_679))).s00)).yxyyxxyx, (uint8_t)0xA5L))).lo)), ((VECTOR(uint8_t, 4))(0UL))))).odd, ((VECTOR(uint8_t, 2))(0x3AL))))).yyxxxxyx)).s0124270151640221, ((VECTOR(uint8_t, 16))(0x87L))))).sbf8c)), 0UL, 255UL, 5UL)).sa525))), ((VECTOR(uint8_t, 4))(4UL)))).s55)).yyyxxyyx, ((VECTOR(uint8_t, 8))(1UL))))).even, ((VECTOR(uint8_t, 4))(0xECL))))), 255UL, l_680, ((VECTOR(uint8_t, 4))(255UL)), 0UL, 1UL)).s8c))), 0x77L, 0x39L)).even)), 0xDDL, 248UL)).s73, ((VECTOR(uint8_t, 2))(6UL))))).xxyx))), 6UL, 65531UL, 0x0250L)), ((VECTOR(uint16_t, 8))(0UL))))).s34)).xxxy))))).lo))).hi;
                    for (l_666.x = (-1); (l_666.x >= 29); l_666.x++)
                    { /* block id: 338 */
                        int64_t l_684 = 0L;
                        uint16_t l_685 = 65532UL;
                        int64_t l_688 = (-1L);
                        struct S0 l_691 = {0x21E5B58D80DFCBC1L,0x1FD68285L,0x24B20EBB45B9E856L};
                        ++l_685;
                        l_659 ^= l_688;
                        l_645 = (((VECTOR(uint16_t, 4))((--l_633.s0), 0x8A59L, 0x8EBBL, 0x5A80L)).y , (void*)0);
                        l_691 = (l_649 = l_691);
                    }
                }
                unsigned int result = 0;
                result += l_572;
                result += l_626.sf;
                result += l_626.se;
                result += l_626.sd;
                result += l_626.sc;
                result += l_626.sb;
                result += l_626.sa;
                result += l_626.s9;
                result += l_626.s8;
                result += l_626.s7;
                result += l_626.s6;
                result += l_626.s5;
                result += l_626.s4;
                result += l_626.s3;
                result += l_626.s2;
                result += l_626.s1;
                result += l_626.s0;
                result += l_627;
                result += l_628;
                result += l_629;
                int l_630_i0;
                for (l_630_i0 = 0; l_630_i0 < 4; l_630_i0++) {
                    result += l_630[l_630_i0];
                }
                result += l_631;
                result += l_632.y;
                result += l_632.x;
                result += l_633.s7;
                result += l_633.s6;
                result += l_633.s5;
                result += l_633.s4;
                result += l_633.s3;
                result += l_633.s2;
                result += l_633.s1;
                result += l_633.s0;
                result += l_634.s7;
                result += l_634.s6;
                result += l_634.s5;
                result += l_634.s4;
                result += l_634.s3;
                result += l_634.s2;
                result += l_634.s1;
                result += l_634.s0;
                result += l_635;
                result += l_636;
                result += l_637.w;
                result += l_637.z;
                result += l_637.y;
                result += l_637.x;
                result += l_638;
                result += l_639.w;
                result += l_639.z;
                result += l_639.y;
                result += l_639.x;
                result += l_640;
                result += l_641;
                result += l_642;
                result += l_643;
                int l_644_i0, l_644_i1, l_644_i2;
                for (l_644_i0 = 0; l_644_i0 < 10; l_644_i0++) {
                    for (l_644_i1 = 0; l_644_i1 < 9; l_644_i1++) {
                        for (l_644_i2 = 0; l_644_i2 < 1; l_644_i2++) {
                            result += l_644[l_644_i0][l_644_i1][l_644_i2];
                        }
                    }
                }
                atomic_add(&p_1204->g_special_values[21 * get_linear_group_id() + 19], result);
            }
            else
            { /* block id: 347 */
                (1 + 1);
            }
            (*l_463) = (&l_559 == ((((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(((*p_1204->g_216) , (safe_sub_func_uint8_t_u_u((l_694 != (void*)0), (--p_1204->g_106)))), p_1204->g_337.y, 5UL, (p_1204->g_491.y = (safe_mul_func_int16_t_s_s(((0xFFL != (9UL != (safe_rshift_func_uint8_t_u_u(((l_703 = (p_1204->g_9[5][6] ^ (safe_sub_func_uint8_t_u_u((((**p_1204->g_432) , 0x8737D9A7CCCA734BL) & 0x76640DCB94607E12L), p_39)))) >= 0x4AL), l_570)))) > p_39), FAKE_DIVERGE(p_1204->group_1_offset, get_group_id(1), 10)))), p_39, 0UL, 0xC2L, 0xFAL)), ((VECTOR(uint8_t, 8))(0x9DL))))).s5 < (-9L)) , (void*)0));
        }
        ++l_704;
        l_707[5] = func_47(l_464[1][1][5], p_1204);
    }
    atomic_min(&p_1204->l_atomic_reduction[0], (p_40 = (safe_lshift_func_uint16_t_u_u(p_1204->g_107.y, 2))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1204->v_collective += p_1204->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_462;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_comm_values p_1204->g_45 p_1204->g_53 p_1204->g_8.f2 p_1204->g_54.f1 p_1204->g_4 p_1204->g_60 p_1204->g_54 p_1204->g_61 p_1204->g_59 p_1204->l_comm_values p_1204->g_9 p_1204->g_133 p_1204->g_107 p_1204->g_106 p_1204->g_8.f1 p_1204->g_79 p_1204->g_8.f0 p_1204->g_181 p_1204->g_182 p_1204->g_183 p_1204->g_184 p_1204->g_81 p_1204->g_198 p_1204->g_205 p_1204->g_207 p_1204->g_209 p_1204->g_3 p_1204->g_216 p_1204->g_217 p_1204->g_208 p_1204->g_210.f1 p_1204->g_148 p_1204->g_262 p_1204->g_294 p_1204->g_312 p_1204->g_316 p_1204->g_220 p_1204->g_328 p_1204->g_336 p_1204->g_337 p_1204->g_7 p_1204->g_432 p_1204->g_295 p_1204->g_405
 * writes: p_1204->g_45 p_1204->g_54.f1 p_1204->g_59 p_1204->g_61 p_1204->g_79 p_1204->g_53 p_1204->g_106 p_1204->g_107 p_1204->g_148 p_1204->g_198 p_1204->g_205 p_1204->g_208 p_1204->g_210 p_1204->g_217 p_1204->g_54.f0 p_1204->g_54.f2 p_1204->g_220 p_1204->g_312 p_1204->g_316 p_1204->g_7
 */
struct S0 * func_42(int64_t  p_43, struct S2 * p_1204)
{ /* block id: 14 */
    int32_t *l_44 = &p_1204->g_45[1][0][8];
    VECTOR(int8_t, 2) l_46 = (VECTOR(int8_t, 2))(0x39L, (-6L));
    struct S0 *l_52 = (void*)0;
    int32_t **l_325 = &l_44;
    VECTOR(uint16_t, 16) l_456 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL);
    VECTOR(uint16_t, 8) l_457 = (VECTOR(uint16_t, 8))(0xB0DFL, (VECTOR(uint16_t, 4))(0xB0DFL, (VECTOR(uint16_t, 2))(0xB0DFL, 0x7561L), 0x7561L), 0x7561L, 0xB0DFL, 0x7561L);
    int32_t *l_458[4] = {&p_1204->g_59,&p_1204->g_59,&p_1204->g_59,&p_1204->g_59};
    uint64_t l_459 = 0xA29FAE5A9E3DA89BL;
    int i;
    (*l_44) &= p_1204->g_comm_values[p_1204->tid];
    l_459 = ((((VECTOR(int8_t, 8))(l_46.xyxyyxxx)).s2 ^ ((&p_1204->g_45[1][0][8] == ((*l_325) = func_47(((*l_325) = func_49(l_52, p_1204->g_53, p_1204)), p_1204))) & 0x6707L)) < ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_456.se179)).even)), ((VECTOR(uint16_t, 4))(l_457.s6205)).hi))).yyyxyxyy))).s7);
    for (p_1204->g_79 = 14; (p_1204->g_79 != 34); p_1204->g_79 = safe_add_func_uint32_t_u_u(p_1204->g_79, 8))
    { /* block id: 208 */
        (*l_325) = (void*)0;
    }
    return l_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_220 p_1204->g_328 p_1204->g_336 p_1204->g_217 p_1204->g_337 p_1204->g_182 p_1204->g_79 p_1204->g_312 p_1204->g_148 p_1204->g_54.f2 p_1204->g_133 p_1204->g_7 p_1204->g_432 p_1204->g_294 p_1204->g_295 p_1204->g_54.f1 p_1204->g_216 p_1204->g_405
 * writes: p_1204->g_220 p_1204->g_79 p_1204->g_148 p_1204->g_54.f2 p_1204->g_7 p_1204->g_205
 */
int32_t * func_47(int32_t * p_48, struct S2 * p_1204)
{ /* block id: 138 */
    VECTOR(uint8_t, 4) l_335 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xADL), 0xADL);
    VECTOR(int64_t, 16) l_339 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int64_t, 2))(2L, (-1L)), (VECTOR(int64_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L));
    int32_t l_341 = 0x787EF4D7L;
    VECTOR(int64_t, 8) l_342 = (VECTOR(int64_t, 8))(0x06879AC1DE3F0D4DL, (VECTOR(int64_t, 4))(0x06879AC1DE3F0D4DL, (VECTOR(int64_t, 2))(0x06879AC1DE3F0D4DL, 0x6CAFCDE24BD6A5CEL), 0x6CAFCDE24BD6A5CEL), 0x6CAFCDE24BD6A5CEL, 0x06879AC1DE3F0D4DL, 0x6CAFCDE24BD6A5CEL);
    int32_t l_358 = (-3L);
    int32_t l_362 = (-10L);
    int32_t l_364 = 0x6E779FA2L;
    int32_t l_367 = 0L;
    int32_t l_368 = 1L;
    int32_t l_369 = 0x1151E71AL;
    VECTOR(uint16_t, 16) l_388 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    struct S0 l_390 = {0xE0B32BABB838E9C9L,0x42456973L,-1L};
    VECTOR(uint16_t, 16) l_398 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    int32_t *l_436[5][9][1] = {{{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362}},{{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362}},{{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362}},{{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362}},{{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362},{&l_362}}};
    uint64_t l_437 = 0UL;
    int32_t *l_441[9][1];
    int32_t **l_440 = &l_441[2][0];
    int32_t ***l_442 = &l_440;
    int16_t *l_445 = &p_1204->g_205;
    uint8_t l_446 = 0UL;
    int16_t l_451 = (-7L);
    int32_t **l_453 = &l_441[3][0];
    int32_t ***l_452[7][9] = {{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0},{(void*)0,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,(void*)0}};
    int32_t **l_454 = &l_441[2][0];
    int32_t l_455 = 1L;
    int i, j, k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_441[i][j] = (void*)0;
    }
    for (p_1204->g_220 = (-11); (p_1204->g_220 > 18); p_1204->g_220 = safe_add_func_uint8_t_u_u(p_1204->g_220, 1))
    { /* block id: 141 */
        VECTOR(int16_t, 16) l_331 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int16_t, 2))(0L, (-1L)), (VECTOR(int16_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        VECTOR(int16_t, 16) l_332 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x754FL), 0x754FL), 0x754FL, (-1L), 0x754FL, (VECTOR(int16_t, 2))((-1L), 0x754FL), (VECTOR(int16_t, 2))((-1L), 0x754FL), (-1L), 0x754FL, (-1L), 0x754FL);
        VECTOR(int8_t, 4) l_334 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x71L), 0x71L);
        int16_t *l_338 = &p_1204->g_205;
        uint32_t l_340 = 0x4E253639L;
        int32_t l_343 = 0x3D744F47L;
        int32_t l_357 = 0x480F9DEDL;
        int32_t l_363 = 0L;
        int32_t l_365[4];
        struct S1 l_379 = {1UL,0L};
        VECTOR(int16_t, 2) l_395 = (VECTOR(int16_t, 2))(0x2B11L, 1L);
        VECTOR(uint32_t, 16) l_396 = (VECTOR(uint32_t, 16))(0xDC88F44EL, (VECTOR(uint32_t, 4))(0xDC88F44EL, (VECTOR(uint32_t, 2))(0xDC88F44EL, 9UL), 9UL), 9UL, 0xDC88F44EL, 9UL, (VECTOR(uint32_t, 2))(0xDC88F44EL, 9UL), (VECTOR(uint32_t, 2))(0xDC88F44EL, 9UL), 0xDC88F44EL, 9UL, 0xDC88F44EL, 9UL);
        VECTOR(int16_t, 8) l_408 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x65AFL), 0x65AFL), 0x65AFL, 2L, 0x65AFL);
        int8_t *l_425 = &p_1204->g_220;
        int8_t **l_424 = &l_425;
        int32_t *l_435 = &l_358;
        int i;
        for (i = 0; i < 4; i++)
            l_365[i] = 0x2E8A3756L;
        l_343 = ((0L > ((((VECTOR(uint32_t, 16))(p_1204->g_328.s2535072132663537)).s3 <= ((safe_sub_func_uint64_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))((-3L), 0x603C34119EE3AA32L)).yxxy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x11590FF766F32903L, (0xC1FCL <= ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(l_331.sd6ee2f5e)).s56, ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(0x5568L, (-4L))).xxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(5L, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_332.s3bcdfe71)))).s54, ((VECTOR(int16_t, 4))((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x048FL, 3L)), 2L, 0x6F8DL)).w)), 0L, 7L, 0x2181L)).lo))), (-4L))).even)).yyyx))).yywyxyxy)).s1472312400243466, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(0x5643L, (-4L))).xyxxyyyxxxxxyxyy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(1L, ((VECTOR(int16_t, 2))(0x2D22L, 1L)), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(l_334.zz)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_335.yw)), 1UL, 251UL)).lo))), (-6L), (-1L), (-8L))).s40)).xyyyxyyyxyyyyxxx))).s2a8e)).wxzwxzwxzzxyywxz))).s62))).lo), 0x33C3CA7951CF20ECL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_1204->g_336.s5a38)).zwzzwywx)), (((p_1204->g_217[4][4][2] ^ 0L) , (((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(p_1204->g_337.xwwy)).xzzxxyzz))).s0 , l_338)) == (void*)0), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(l_339.sd021)).zwxxwywyyyxyzxzy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-1L), 1L)), 0x26322E899FC98202L, (l_332.sb , (l_341 = l_340)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x11FC8B711D747827L, 0x6A1259B34656CEF8L)), ((VECTOR(int64_t, 8))(l_342.s27743515)), (!p_1204->g_182.sd), ((VECTOR(int64_t, 4))(7L)), 0x3A5330F8EAB65C3FL)).s3, 0x6CD33E0AC27BFFE7L, p_1204->g_79, ((VECTOR(int64_t, 8))(1L)), 0x488ABC830D6B644CL)).sd104)).xzzyzzwwyzyzyxxz))).sa1))), 0x5D728686A5CFD4EEL, 0L)).s1c3a))))), ((VECTOR(int64_t, 4))(0L)), ((VECTOR(int64_t, 4))(4L))))), l_331.sd, ((VECTOR(int64_t, 2))((-6L))), 1L)).odd)).x , 18446744073709551608UL), l_340)) , 4294967292UL)) || p_1204->g_312)) , l_339.s0);
        for (p_1204->g_79 = 0; (p_1204->g_79 < 23); p_1204->g_79 = safe_add_func_int16_t_s_s(p_1204->g_79, 1))
        { /* block id: 146 */
            int32_t l_359 = 0x283429B8L;
            int32_t l_360 = (-7L);
            int32_t l_361 = 0L;
            int32_t l_366[10][3][8] = {{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}},{{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)},{(-3L),(-1L),0x55C419F9L,0x3AB417EAL,(-1L),0x3AB417EAL,0x55C419F9L,(-1L)}}};
            VECTOR(uint64_t, 2) l_402 = (VECTOR(uint64_t, 2))(0x70E6DB23DEB1884DL, 0x654CB897D91EDEE0L);
            int i, j, k;
            for (p_1204->g_148 = 0; (p_1204->g_148 <= 12); p_1204->g_148++)
            { /* block id: 149 */
                int32_t *l_348 = &p_1204->g_45[1][6][6];
                int32_t *l_349 = &p_1204->g_45[1][0][8];
                int32_t *l_350 = (void*)0;
                int32_t *l_351 = &l_343;
                int32_t *l_352 = &p_1204->g_45[2][6][2];
                int32_t *l_353 = &p_1204->g_45[2][5][2];
                int32_t *l_354 = &p_1204->g_61;
                int32_t *l_355 = &p_1204->g_45[1][2][6];
                int32_t *l_356[2];
                uint16_t l_370 = 1UL;
                VECTOR(int16_t, 16) l_394 = (VECTOR(int16_t, 16))(0x6D08L, (VECTOR(int16_t, 4))(0x6D08L, (VECTOR(int16_t, 2))(0x6D08L, 0L), 0L), 0L, 0x6D08L, 0L, (VECTOR(int16_t, 2))(0x6D08L, 0L), (VECTOR(int16_t, 2))(0x6D08L, 0L), 0x6D08L, 0L, 0x6D08L, 0L);
                VECTOR(uint16_t, 4) l_397 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xFA9DL), 0xFA9DL);
                int i;
                for (i = 0; i < 2; i++)
                    l_356[i] = &l_341;
                ++l_370;
                for (p_1204->g_54.f2 = 0; (p_1204->g_54.f2 <= (-20)); p_1204->g_54.f2--)
                { /* block id: 153 */
                    int16_t l_380 = 0x13FBL;
                    struct S0 l_389 = {18446744073709551615UL,0x17AE839DL,7L};
                    int8_t *l_391[3][9] = {{&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2]},{&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2]},{&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2],&p_1204->g_217[4][4][2]}};
                    VECTOR(uint64_t, 16) l_403 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x030693607AAE33EDL), 0x030693607AAE33EDL), 0x030693607AAE33EDL, 0UL, 0x030693607AAE33EDL, (VECTOR(uint64_t, 2))(0UL, 0x030693607AAE33EDL), (VECTOR(uint64_t, 2))(0UL, 0x030693607AAE33EDL), 0UL, 0x030693607AAE33EDL, 0UL, 0x030693607AAE33EDL);
                    uint64_t *l_406 = (void*)0;
                    uint64_t *l_407 = &l_389.f0;
                    int32_t **l_410 = (void*)0;
                    int32_t ***l_409 = &l_410;
                    int i, j;
                    (1 + 1);
                }
                (*p_1204->g_432) = (*p_1204->g_133);
                return p_48;
            }
        }
        (*l_435) &= (safe_mod_func_uint64_t_u_u((*p_1204->g_294), p_1204->g_337.y));
    }
    l_437++;
    l_454 = ((p_1204->g_54.f1 == (((*l_442) = l_440) == ((safe_rshift_func_uint8_t_u_s(((l_446 = ((*l_445) = ((((*p_1204->g_216) ^ (&l_437 == &l_437)) == p_1204->g_405.se) | (&l_436[4][0][0] == (void*)0)))) > (safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s((((p_1204->g_405.sa >= 1L) >= 6UL) < 0x89L), p_1204->g_336.se)) ^ 0x62L), 11))), l_451)) , (void*)0))) , (*l_442));
    l_455 |= ((void*)0 == p_48);
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_8.f2 p_1204->g_54.f1 p_1204->g_4 p_1204->g_60 p_1204->g_53 p_1204->g_54 p_1204->g_61 p_1204->g_59 p_1204->l_comm_values p_1204->g_9 p_1204->g_45 p_1204->g_133 p_1204->g_107 p_1204->g_comm_values p_1204->g_106 p_1204->g_8.f1 p_1204->g_79 p_1204->g_8.f0 p_1204->g_181 p_1204->g_182 p_1204->g_183 p_1204->g_184 p_1204->g_81 p_1204->g_198 p_1204->g_205 p_1204->g_207 p_1204->g_209 p_1204->g_3 p_1204->g_216 p_1204->g_217 p_1204->g_208 p_1204->g_210.f1 p_1204->g_148 p_1204->g_262 p_1204->g_294 p_1204->g_312 p_1204->g_316
 * writes: p_1204->g_54.f1 p_1204->g_45 p_1204->g_59 p_1204->g_61 p_1204->g_79 p_1204->g_53 p_1204->g_106 p_1204->g_107 p_1204->g_148 p_1204->g_198 p_1204->g_205 p_1204->g_208 p_1204->g_210 p_1204->g_217 p_1204->g_54.f0 p_1204->g_54.f2 p_1204->g_220 p_1204->g_312 p_1204->g_316
 */
int32_t * func_49(struct S0 * p_50, struct S0 * p_51, struct S2 * p_1204)
{ /* block id: 16 */
    int32_t *l_70[6] = {&p_1204->g_61,&p_1204->g_61,&p_1204->g_61,&p_1204->g_61,&p_1204->g_61,&p_1204->g_61};
    VECTOR(uint32_t, 2) l_88 = (VECTOR(uint32_t, 2))(0xDCE90FC2L, 4294967295UL);
    struct S1 l_100 = {3UL,0x0B9A4A3E56A0368AL};
    int16_t l_142 = 0x2411L;
    uint32_t l_202 = 0x58F21F2FL;
    uint32_t *l_204[10] = {&p_1204->g_79,(void*)0,&p_1204->g_79,(void*)0,&p_1204->g_79,&p_1204->g_79,(void*)0,&p_1204->g_79,(void*)0,&p_1204->g_79};
    uint32_t **l_203[1];
    int8_t *l_219 = &p_1204->g_220;
    VECTOR(uint64_t, 2) l_222 = (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xF1DC49502B8A2F40L);
    struct S0 **l_224 = &p_1204->g_53;
    struct S0 ***l_223 = &l_224;
    VECTOR(int16_t, 4) l_285 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0x3D5AL), 0x3D5AL);
    uint32_t l_291 = 4294967289UL;
    uint64_t l_305 = 18446744073709551615UL;
    int16_t l_320 = 1L;
    int8_t l_321[4][5] = {{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L}};
    uint32_t l_322[7][8][4] = {{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}},{{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL},{0UL,0x6C07635FL,0UL,0UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_203[i] = &l_204[2];
    if (p_1204->g_8[2][0].f2)
    { /* block id: 17 */
        struct S0 l_69 = {18446744073709551615UL,0x5B52D1A8L,0x3B409C3C7D9ACC98L};
        int32_t *l_72[7];
        VECTOR(uint16_t, 2) l_87 = (VECTOR(uint16_t, 2))(0xD7FEL, 0xEFE6L);
        int32_t l_89 = (-1L);
        int16_t l_90 = 0x08CAL;
        VECTOR(int8_t, 16) l_137 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 3L), 3L), 3L, (-4L), 3L, (VECTOR(int8_t, 2))((-4L), 3L), (VECTOR(int8_t, 2))((-4L), 3L), (-4L), 3L, (-4L), 3L);
        int8_t l_199 = 0x2FL;
        VECTOR(int16_t, 8) l_213 = (VECTOR(int16_t, 8))(0x4DAAL, (VECTOR(int16_t, 4))(0x4DAAL, (VECTOR(int16_t, 2))(0x4DAAL, 3L), 3L), 3L, 0x4DAAL, 3L);
        int8_t *l_218 = &p_1204->g_217[4][4][2];
        uint64_t *l_221[2][1];
        int i, j;
        for (i = 0; i < 7; i++)
            l_72[i] = &p_1204->g_45[1][0][8];
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_221[i][j] = &l_69.f0;
        }
        for (p_1204->g_54.f1 = (-7); (p_1204->g_54.f1 == (-23)); p_1204->g_54.f1 = safe_sub_func_uint64_t_u_u(p_1204->g_54.f1, 3))
        { /* block id: 20 */
            int32_t *l_57 = &p_1204->g_45[1][5][9];
            int32_t *l_58 = &p_1204->g_59;
            int32_t *l_71 = &p_1204->g_9[5][6];
            struct S0 *l_104 = &l_69;
            int32_t l_108 = (-1L);
            int16_t *l_176 = &l_90;
            int32_t *l_197 = &p_1204->g_198;
            int8_t l_200 = (-1L);
            uint8_t *l_201 = &p_1204->g_106;
            (*p_1204->g_60) = ((*l_58) = ((*l_57) = p_1204->g_4.s6));
            l_90 |= ((((func_62(func_65(l_69, (l_70[3] != l_71), l_72[5], p_1204), &p_1204->g_54, p_1204) , 0x1B9DC45DL) != (safe_sub_func_int64_t_s_s(((~(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(l_87.yx)).xxxyxyyy, (uint16_t)l_88.y, (uint16_t)l_89))).s02, (uint16_t)p_1204->g_59))).odd & 0xBB76L)) >= p_1204->g_59), p_1204->g_54.f2))) > (*l_58)) < p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))]);
            if ((*l_58))
            { /* block id: 38 */
                uint8_t l_91 = 0x6AL;
                uint32_t l_101 = 8UL;
                struct S0 **l_105 = &p_1204->g_53;
                struct S0 ***l_134 = &l_105;
                int16_t *l_145 = &l_90;
                int8_t *l_146 = (void*)0;
                int8_t *l_147 = (void*)0;
                uint8_t *l_149 = &p_1204->g_106;
                if ((*p_1204->g_60))
                    break;
                l_108 |= (((p_1204->g_9[3][2] , (l_91 & (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((p_1204->g_54.f2 && (safe_mod_func_int16_t_s_s(((((safe_add_func_int32_t_s_s(((*l_57) &= (*p_1204->g_60)), ((l_100 , ((-6L) & p_1204->g_9[5][6])) != (p_1204->g_107.x = (((l_101--) && (p_1204->g_106 = ((*l_58) |= (((*l_105) = l_104) == &p_1204->g_54)))) & FAKE_DIVERGE(p_1204->local_0_offset, get_local_id(0), 10)))))) && p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))]) , 0UL) , p_1204->g_9[3][5]), p_1204->g_54.f1))), 0xB2B73F0FL)) , (*l_71)), 14)))) < p_1204->g_54.f0) , 0x6351E38DL);
                if ((atomic_inc(&p_1204->l_atomic_input[20]) == 2))
                { /* block id: 48 */
                    struct S0 l_109 = {5UL,0x27A7C490L,1L};
                    struct S0 l_110 = {0x655DCCE30238D5DDL,-1L,0x4A0061E2E1E1BC7BL};
                    l_110 = l_109;
                    unsigned int result = 0;
                    result += l_109.f0;
                    result += l_109.f1;
                    result += l_109.f2;
                    result += l_110.f0;
                    result += l_110.f1;
                    result += l_110.f2;
                    atomic_add(&p_1204->l_special_values[20], result);
                }
                else
                { /* block id: 50 */
                    (1 + 1);
                }
                (*l_57) = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x0E2A7350L, 0x69F28033L)), (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((l_100 , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x7D55B7D1A5100E80L, 1UL)), ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((+(safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_149) &= (((p_1204->g_133 != ((*l_134) = &p_1204->g_53)) > (p_1204->g_148 = (l_91 | ((safe_mod_func_uint64_t_u_u((((VECTOR(int8_t, 16))(l_137.sed4b6e07a68de422)).s6 >= ((safe_div_func_int32_t_s_s((((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((safe_mul_func_uint16_t_u_u((l_142 , (safe_rshift_func_uint16_t_u_s(p_1204->g_54.f2, l_101))), ((*l_145) = p_1204->g_107.z))), 6L, p_1204->g_comm_values[p_1204->tid], p_1204->g_59, l_91, 0x57A2L, 0L, ((VECTOR(int16_t, 4))(3L)), ((VECTOR(int16_t, 4))(0x7591L)), 0x4877L)))).s9212))), 0xAB6BL, 0x50D5L, 6UL)).s22, ((VECTOR(uint16_t, 2))(65531UL))))).hi , (*l_71)), l_101)) == p_1204->g_45[1][0][8])), (-1L))) < 0UL)))) || l_101)), p_1204->g_45[2][6][1])), p_1204->g_54.f0))), (*l_57))), 1)) , 1UL), ((VECTOR(uint64_t, 8))(0xB4C8DAE2F31F1FEEL)), 18446744073709551613UL, 0x4F71C144FEC2E3E7L, 3UL, 0UL, 0x806F3831CB3A65C2L)))).s3f69)).w , 0UL)), 6)) > 0x009D05E8D5C61AD1L) ^ l_91), GROUP_DIVERGE(2, 1))), 65535UL)), (*l_71))), GROUP_DIVERGE(2, 1))) && 0x995BL) < l_91), (-3L))) >= p_1204->g_45[1][2][9]), p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))])), 0x7805F1B0L, (*p_1204->g_60), 0x1CCF313DL, 1L, (-5L))).lo)), ((VECTOR(int32_t, 4))(0x6634B272L)), ((VECTOR(int32_t, 4))(0L))))).yzzxxyyyxwwzxxyw, ((VECTOR(int32_t, 16))(3L)), ((VECTOR(int32_t, 16))((-1L)))))))).odd, ((VECTOR(int32_t, 8))((-1L)))))).s6;
            }
            else
            { /* block id: 58 */
                for (p_1204->g_106 = (-28); (p_1204->g_106 == 8); p_1204->g_106 = safe_add_func_int16_t_s_s(p_1204->g_106, 8))
                { /* block id: 61 */
                    uint32_t *l_158 = (void*)0;
                    uint32_t *l_159 = &p_1204->g_79;
                    int32_t l_162[8] = {0x41C7262DL,0x41C7262DL,0x41C7262DL,0x41C7262DL,0x41C7262DL,0x41C7262DL,0x41C7262DL,0x41C7262DL};
                    int8_t *l_164 = (void*)0;
                    int8_t *l_165 = (void*)0;
                    int8_t *l_166 = (void*)0;
                    int8_t *l_167 = (void*)0;
                    int8_t *l_168 = (void*)0;
                    int8_t *l_169[2];
                    uint32_t **l_170 = &l_158;
                    int32_t *l_173 = (void*)0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_169[i] = (void*)0;
                    for (l_90 = 0; (l_90 <= (-5)); --l_90)
                    { /* block id: 64 */
                        return &p_1204->g_45[1][4][9];
                    }
                    (*l_58) = (safe_mul_func_int8_t_s_s(((*l_57) = (safe_sub_func_uint32_t_u_u(((*l_159) = (&p_1204->g_53 != (void*)0)), ((safe_sub_func_uint8_t_u_u(l_162[0], p_1204->g_8[2][0].f1)) > (safe_unary_minus_func_int16_t_s((*l_58))))))), (p_1204->g_61 == (((VECTOR(uint64_t, 4))((((GROUP_DIVERGE(2, 1) , l_159) != ((*l_170) = &p_1204->g_81)) && (safe_lshift_func_int16_t_s_s(l_162[5], p_1204->g_107.x))), l_162[1], 6UL, 18446744073709551615UL)).y , p_1204->g_106))));
                    return l_173;
                }
            }
            p_1204->g_205 &= ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x3306029FL, 0L)).yyyx, ((VECTOR(int32_t, 4))(0x0D818149L, ((safe_mod_func_int64_t_s_s((p_1204->g_4.s5 < (((*l_176) = p_1204->g_79) > ((VECTOR(int16_t, 16))((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x61AB4B5EL, (p_1204->g_8[2][0].f0 > ((safe_mod_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(p_1204->g_181.s56)).yyxxxyxyxyyxyxyx, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(p_1204->g_182.s6c91)).xxwxwwywzxzwyzyy, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(p_1204->g_183.s32470551)).odd, ((VECTOR(int32_t, 2))(p_1204->g_184.s16)).yxyx, ((VECTOR(int32_t, 4))(0x6414F8BBL, (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((((p_1204->g_184.s2 > (safe_mod_func_uint8_t_u_u(((*l_201) = ((((safe_sub_func_uint64_t_u_u(((+0x7763L) , (safe_lshift_func_uint16_t_u_u((((-1L) <= ((VECTOR(int32_t, 16))(0x4CF155A4L, 0L, (-5L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(0x1A467DC3L, (safe_rshift_func_uint8_t_u_u((((p_1204->g_54.f0 , ((*l_197) = p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))])) , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(0L, 0x54E9L, 1L, 1L)).hi, ((VECTOR(int16_t, 4))((p_1204->g_184.s7 , l_199), (*l_71), (-1L), 4L)).lo))).xxyxyyyyxyyyyxyx)), ((VECTOR(int16_t, 16))((-1L)))))), ((VECTOR(uint16_t, 16))(1UL))))).s26a7)).y) || p_1204->g_182.s0), p_1204->g_181.sb)), 0x79D53550L, ((VECTOR(int32_t, 2))(0x5DDC8211L)), 0x2590F46CL, 6L, (-3L), 0x2F0C1EE5L, 0x3F6B23ADL, p_1204->g_81, ((VECTOR(int32_t, 2))(0x74E6FDF3L)), p_1204->g_183.s3, 0L, 0x2475F9C8L)).odd, ((VECTOR(int32_t, 8))(0x79459B8DL))))))).s1355676563167207, (int32_t)0x70C3BFCEL))).sf9, ((VECTOR(int32_t, 2))(0x59DFB2C9L))))), 0L, 0L)).ywywwyzxzywywyxz)).s5e22)), 0x319FAFEBL, 0x5E7C2BC5L, ((VECTOR(int32_t, 4))(0x7EB43B87L)), 0x5C65A50DL, 0x230ADBCEL, (-2L))).s0) <= (*l_58)), 0))), p_1204->g_183.s3)) ^ l_200) , 5L) | (*l_57))), p_1204->g_181.s1))) , l_202) , l_203[0]) != (void*)0), (*l_57))) , p_1204->g_54.f1), 1)), 0x7AB9F0D7L, (-9L)))))))), ((VECTOR(int32_t, 4))(0x71912AE4L))))).wxywzxywwyxxxyxw)))))).s7 , p_1204->g_198))) & 0x5765L)), 0L, (*p_1204->g_60), (*l_58), ((VECTOR(int32_t, 2))(0x6F3E45B2L)), 0L)).lo)).even, ((VECTOR(int32_t, 2))(0L))))))).yyyyyxxx)).s5, p_1204->g_4.s4)), 0x34F1L, 0x3767L, p_1204->g_107.w, p_1204->g_183.s0, ((VECTOR(int16_t, 8))(1L)), 0x3935L, 0x75D5L, 0x675EL)).s8)), p_1204->g_182.s0)) || p_1204->g_54.f2), 0x7B5E379BL, 0x523E0A80L)), ((VECTOR(int32_t, 4))(0x3B2DEA6EL))))).w;
        }
        (*p_1204->g_207) = l_72[2];
        (*p_1204->g_209) = l_100;
        (*p_1204->g_208) = (p_1204->g_3 && ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_213.s73)).hi, ((safe_lshift_func_int8_t_s_u(((*l_218) &= ((p_1204->g_107.w , p_1204->g_216) != (void*)0)), 6)) ^ ((p_1204->g_54.f0 = (l_219 == &p_1204->g_220)) <= ((VECTOR(uint64_t, 4))(l_222.yyxy)).w)))) || ((&p_1204->g_133 == l_223) | (0L > p_1204->g_54.f1))));
    }
    else
    { /* block id: 84 */
        uint32_t l_231 = 0x069B4DB9L;
        struct S0 ***l_234[9][8] = {{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224},{(void*)0,&l_224,&l_224,&l_224,&l_224,&l_224,(void*)0,&l_224}};
        uint32_t **l_235 = (void*)0;
        int i, j;
        for (p_1204->g_106 = (-28); (p_1204->g_106 < 45); ++p_1204->g_106)
        { /* block id: 87 */
            int64_t *l_246 = (void*)0;
            int64_t *l_247 = (void*)0;
            int64_t *l_248 = &p_1204->g_54.f2;
            int32_t l_257 = 0x733B03AEL;
            int32_t l_258[8] = {0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L,0x5EB3EB11L};
            int32_t **l_259 = &l_70[0];
            int16_t l_260 = 1L;
            int i;
            l_258[5] &= (safe_lshift_func_int16_t_s_s((l_231 & ((safe_lshift_func_uint8_t_u_s((l_234[8][2] != l_234[4][7]), (((((void*)0 == l_235) & (0x1CBA65D713EDC589L & (((safe_div_func_uint8_t_u_u((((+(safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((p_1204->g_210.f1 &= ((*l_248) |= p_1204->g_106)) | ((safe_div_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_231, 1)), ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(1UL, l_231, 1UL, 0xD1CABA2BL)), ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(4294967294UL))))).wzzzzxwx, ((VECTOR(uint32_t, 8))(2UL))))).s3)), FAKE_DIVERGE(p_1204->group_2_offset, get_group_id(2), 10))), (-10L))) , GROUP_DIVERGE(2, 1))), l_257)), 1UL)), 3)), 0x1ECCEF58L))) && p_1204->g_148) >= l_231), l_257)) , (*p_1204->g_60)) != l_257))) < l_231) >= l_257))) >= l_231)), l_257));
            if ((*p_1204->g_60))
                continue;
            (*l_259) = &l_258[5];
            if (l_260)
                continue;
        }
    }
    if ((&p_1204->g_81 != &p_1204->g_81))
    { /* block id: 96 */
        return (*p_1204->g_207);
    }
    else
    { /* block id: 98 */
        uint8_t *l_282 = &p_1204->g_148;
        uint8_t *l_284 = (void*)0;
        uint8_t **l_283 = &l_284;
        int16_t *l_286 = (void*)0;
        int16_t *l_287 = &p_1204->g_205;
        int32_t l_288 = 0x763186A5L;
        uint64_t *l_292 = &p_1204->g_54.f0;
        uint64_t **l_293 = &l_292;
        (*p_1204->g_262) = (*p_1204->g_207);
        if ((atomic_inc(&p_1204->g_atomic_input[21 * get_linear_group_id() + 11]) == 0))
        { /* block id: 101 */
            struct S1 l_263 = {4294967295UL,0x4304A75030BE566EL};
            int32_t l_264[6];
            uint64_t l_277 = 7UL;
            int i;
            for (i = 0; i < 6; i++)
                l_264[i] = 0x2DB63AA8L;
            l_264[5] |= (l_263 , 0x78BD2505L);
            for (l_263.f1 = 10; (l_263.f1 != 18); ++l_263.f1)
            { /* block id: 105 */
                uint64_t l_267 = 1UL;
                uint16_t l_268[8][9] = {{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L},{65533UL,65535UL,65535UL,65533UL,0xD27BL,1UL,0x1391L,0x6538L,0x5B77L}};
                uint32_t l_269 = 0xD62B2E02L;
                uint8_t l_270 = 0x2DL;
                uint8_t l_271 = 1UL;
                int8_t l_272 = 0L;
                uint32_t l_273 = 4294967292UL;
                int16_t l_274[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                uint64_t l_275 = 0xC5472C08B8954911L;
                uint64_t l_276 = 0UL;
                int i, j;
                l_275 |= ((l_273 ^= (l_272 = (l_267 , ((l_268[5][5] , (l_270 = (l_269 ^= 0xAA92CA923BFBB5E8L))) , l_271)))) , (l_274[2] = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(0x2BE24FA4L, 0x6A91D9EBL)).xyxxxyxx, (int32_t)1L))).s0));
                l_276 |= (-10L);
            }
            l_277++;
            unsigned int result = 0;
            result += l_263.f0;
            result += l_263.f1;
            int l_264_i0;
            for (l_264_i0 = 0; l_264_i0 < 6; l_264_i0++) {
                result += l_264[l_264_i0];
            }
            result += l_277;
            atomic_add(&p_1204->g_special_values[21 * get_linear_group_id() + 11], result);
        }
        else
        { /* block id: 115 */
            (1 + 1);
        }
        l_288 = (safe_mul_func_int16_t_s_s(((l_282 != ((*l_283) = (void*)0)) ^ 3UL), ((*l_287) = ((VECTOR(int16_t, 2))(l_285.wz)).hi)));
        l_288 = ((((p_1204->g_210.f1 && 6L) < 1L) | l_291) > ((((*p_1204->g_216) = 9L) >= ((((*l_219) = (((*l_293) = l_292) != p_1204->g_294)) == (0x7FD7L > ((5L != (-9L)) > l_288))) | l_288)) < 0x026ABD1094BBEAA5L));
    }
    for (p_1204->g_198 = 0; (p_1204->g_198 == 5); p_1204->g_198 = safe_add_func_uint64_t_u_u(p_1204->g_198, 6))
    { /* block id: 128 */
        int32_t l_302 = 0x57B961AAL;
        int32_t l_310[3][2][3] = {{{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL},{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL}},{{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL},{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL}},{{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL},{0x4AD00D3AL,0x4AD00D3AL,0x4AD00D3AL}}};
        uint16_t *l_311 = &p_1204->g_312;
        int32_t *l_315 = &p_1204->g_316;
        int64_t *l_317 = (void*)0;
        int64_t *l_318 = &l_100.f1;
        int32_t l_319[9] = {(-1L),0x51B46684L,(-1L),(-1L),0x51B46684L,(-1L),(-1L),0x51B46684L,(-1L)};
        int i, j, k;
        l_319[1] |= (((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_302 <= ((l_302 > (safe_add_func_uint32_t_u_u(7UL, (+l_305)))) , ((*l_318) ^= ((safe_lshift_func_uint8_t_u_s(l_302, (l_302 > (safe_mod_func_int64_t_s_s((((l_310[0][0][1] = (*p_1204->g_60)) != GROUP_DIVERGE(2, 1)) & ((((((((*l_311)--) & l_302) , ((*l_315) ^= l_302)) , (-1L)) , p_1204->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1204->tid, 2))]) & p_1204->g_184.s0) || p_1204->g_210.f1)), p_1204->g_3))))) == GROUP_DIVERGE(0, 1))))), p_1204->g_184.s6)), 0x1AL)) >= p_1204->g_183.s0) ^ (*p_1204->g_208));
    }
    l_322[4][4][3]--;
    return (*p_1204->g_207);
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_60 p_1204->g_61
 * writes: p_1204->g_79 p_1204->g_61 p_1204->g_45
 */
int16_t  func_62(struct S0  p_63, struct S0 * p_64, struct S2 * p_1204)
{ /* block id: 30 */
    struct S1 l_77 = {0x9FA619A7L,-8L};
    uint32_t *l_78 = &p_1204->g_79;
    uint32_t *l_80[6][2] = {{&p_1204->g_81,&p_1204->g_81},{&p_1204->g_81,&p_1204->g_81},{&p_1204->g_81,&p_1204->g_81},{&p_1204->g_81,&p_1204->g_81},{&p_1204->g_81,&p_1204->g_81},{&p_1204->g_81,&p_1204->g_81}};
    int32_t l_82 = (-2L);
    int32_t *l_83 = (void*)0;
    int32_t *l_84[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_84[i] = &p_1204->g_59;
    atomic_max(&p_1204->g_atomic_reduction[get_linear_group_id()], (*p_1204->g_60));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1204->v_collective += p_1204->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1204->g_45[1][0][8] = ((*p_1204->g_60) = (safe_lshift_func_int16_t_s_u((0xEE239CA8L != (l_82 = ((*l_78) = (l_77 , 0x939995E3L)))), 2)));
    return p_63.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1204->g_53 p_1204->g_54
 * writes:
 */
struct S0  func_65(struct S0  p_66, uint32_t  p_67, int32_t * p_68, struct S2 * p_1204)
{ /* block id: 24 */
    int32_t l_73 = 0x795A7F27L;
    struct S0 l_74 = {18446744073709551606UL,8L,-2L};
    if (l_73)
    { /* block id: 25 */
        return l_74;
    }
    else
    { /* block id: 27 */
        return (*p_1204->g_53);
    }
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S2 c_1205;
    struct S2* p_1204 = &c_1205;
    struct S2 c_1206 = {
        0x351CDCB3L, // p_1204->g_3
        (VECTOR(int64_t, 8))((-7L), (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x7147909B7928FBC7L), 0x7147909B7928FBC7L), 0x7147909B7928FBC7L, (-7L), 0x7147909B7928FBC7L), // p_1204->g_4
        {{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}},{{0UL,1L,0x4A61BF0796840EB4L},{0UL,1L,0x4A61BF0796840EB4L}}}, // p_1204->g_8
        &p_1204->g_8[2][0], // p_1204->g_7
        {{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL},{(-3L),0x30054750L,0L,0x5AAFD55BL,0x0F08877EL,0x04286A4AL,(-8L),0x4B51404FL}}, // p_1204->g_9
        {{{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L}},{{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L}},{{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L},{1L,0x149088B5L,(-7L),0x277CE2A7L,0L,1L,0x277CE2A7L,1L,0x277CE2A7L,1L}}}, // p_1204->g_45
        {1UL,-2L,0x787FBC07B36282DCL}, // p_1204->g_54
        &p_1204->g_54, // p_1204->g_53
        1L, // p_1204->g_59
        0x48807C70L, // p_1204->g_61
        &p_1204->g_61, // p_1204->g_60
        9UL, // p_1204->g_79
        0x84519A63L, // p_1204->g_81
        0x0DL, // p_1204->g_106
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x01100BC0L), 0x01100BC0L), // p_1204->g_107
        &p_1204->g_7, // p_1204->g_133
        0xF4L, // p_1204->g_148
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4165A5B5L), 0x4165A5B5L), 0x4165A5B5L, 0L, 0x4165A5B5L, (VECTOR(int32_t, 2))(0L, 0x4165A5B5L), (VECTOR(int32_t, 2))(0L, 0x4165A5B5L), 0L, 0x4165A5B5L, 0L, 0x4165A5B5L), // p_1204->g_181
        (VECTOR(int32_t, 16))(0x74B05A58L, (VECTOR(int32_t, 4))(0x74B05A58L, (VECTOR(int32_t, 2))(0x74B05A58L, 0x42A53268L), 0x42A53268L), 0x42A53268L, 0x74B05A58L, 0x42A53268L, (VECTOR(int32_t, 2))(0x74B05A58L, 0x42A53268L), (VECTOR(int32_t, 2))(0x74B05A58L, 0x42A53268L), 0x74B05A58L, 0x42A53268L, 0x74B05A58L, 0x42A53268L), // p_1204->g_182
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L), // p_1204->g_183
        (VECTOR(int32_t, 8))(0x32F1F733L, (VECTOR(int32_t, 4))(0x32F1F733L, (VECTOR(int32_t, 2))(0x32F1F733L, (-1L)), (-1L)), (-1L), 0x32F1F733L, (-1L)), // p_1204->g_184
        6L, // p_1204->g_198
        (-9L), // p_1204->g_205
        (void*)0, // p_1204->g_206
        &p_1204->g_3, // p_1204->g_208
        &p_1204->g_208, // p_1204->g_207
        {4294967295UL,0L}, // p_1204->g_210
        &p_1204->g_210, // p_1204->g_209
        {{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}},{{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L},{0L,0x68L,1L,1L}}}, // p_1204->g_217
        &p_1204->g_217[4][4][2], // p_1204->g_216
        0L, // p_1204->g_220
        (void*)0, // p_1204->g_261
        &p_1204->g_208, // p_1204->g_262
        0UL, // p_1204->g_295
        &p_1204->g_295, // p_1204->g_294
        0UL, // p_1204->g_312
        (-1L), // p_1204->g_316
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xEAF47915L), 0xEAF47915L), 0xEAF47915L, 1UL, 0xEAF47915L), // p_1204->g_328
        (VECTOR(int64_t, 16))(0x3866AFD44838A89AL, (VECTOR(int64_t, 4))(0x3866AFD44838A89AL, (VECTOR(int64_t, 2))(0x3866AFD44838A89AL, 1L), 1L), 1L, 0x3866AFD44838A89AL, 1L, (VECTOR(int64_t, 2))(0x3866AFD44838A89AL, 1L), (VECTOR(int64_t, 2))(0x3866AFD44838A89AL, 1L), 0x3866AFD44838A89AL, 1L, 0x3866AFD44838A89AL, 1L), // p_1204->g_336
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), // p_1204->g_337
        (VECTOR(int16_t, 2))(0x1320L, 0x3712L), // p_1204->g_385
        (VECTOR(uint16_t, 8))(0x725FL, (VECTOR(uint16_t, 4))(0x725FL, (VECTOR(uint16_t, 2))(0x725FL, 65535UL), 65535UL), 65535UL, 0x725FL, 65535UL), // p_1204->g_401
        (VECTOR(uint64_t, 2))(4UL, 1UL), // p_1204->g_404
        (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 18446744073709551607UL, 18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551607UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551607UL), 18446744073709551607UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551607UL), // p_1204->g_405
        (VECTOR(int32_t, 2))(0x7E4CA5F5L, 1L), // p_1204->g_422
        (void*)0, // p_1204->g_428
        {&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428,&p_1204->g_428}, // p_1204->g_427
        &p_1204->g_427[8], // p_1204->g_426
        4294967295UL, // p_1204->g_431
        &p_1204->g_7, // p_1204->g_432
        &p_1204->g_208, // p_1204->g_475
        (VECTOR(int32_t, 2))((-7L), 0x07742214L), // p_1204->g_479
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_1204->g_480
        (VECTOR(int32_t, 2))((-1L), 1L), // p_1204->g_483
        (VECTOR(int32_t, 2))(1L, 0L), // p_1204->g_486
        (VECTOR(uint8_t, 2))(0xF3L, 8UL), // p_1204->g_491
        {&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210,&p_1204->g_210}, // p_1204->g_510
        &p_1204->g_208, // p_1204->g_514
        (void*)0, // p_1204->g_529
        {{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0},{&p_1204->g_529,(void*)0}}, // p_1204->g_528
        {0xF7A2F70EL,0x07EF3AA63CAE46ECL}, // p_1204->g_710
        &p_1204->g_208, // p_1204->g_721
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), // p_1204->g_733
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L)), // p_1204->g_734
        &p_1204->g_81, // p_1204->g_774
        {{{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774}},{{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774}},{{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774}},{{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774},{&p_1204->g_774,&p_1204->g_774,(void*)0,&p_1204->g_774,(void*)0,&p_1204->g_774,&p_1204->g_774,&p_1204->g_774}}}, // p_1204->g_773
        &p_1204->g_427[4], // p_1204->g_783
        1UL, // p_1204->g_791
        2L, // p_1204->g_795
        &p_1204->g_795, // p_1204->g_794
        {0xD63024BAC6AAFE27L,0x65D1F55EL,0x527DB71687CD6434L}, // p_1204->g_842
        (VECTOR(uint32_t, 8))(0xCEA735A3L, (VECTOR(uint32_t, 4))(0xCEA735A3L, (VECTOR(uint32_t, 2))(0xCEA735A3L, 0xAC2BA5B2L), 0xAC2BA5B2L), 0xAC2BA5B2L, 0xCEA735A3L, 0xAC2BA5B2L), // p_1204->g_865
        &p_1204->g_208, // p_1204->g_871
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_1204->g_881
        (void*)0, // p_1204->g_897
        (VECTOR(uint16_t, 2))(0xAF4FL, 0x959CL), // p_1204->g_909
        (VECTOR(int32_t, 2))(1L, (-1L)), // p_1204->g_919
        (VECTOR(int32_t, 2))(0x42B50670L, 0L), // p_1204->g_920
        (VECTOR(int32_t, 4))(0x36C972A2L, (VECTOR(int32_t, 2))(0x36C972A2L, 0x17EC0F14L), 0x17EC0F14L), // p_1204->g_980
        {{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208},{&p_1204->g_208,&p_1204->g_208,&p_1204->g_208}}, // p_1204->g_984
        (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x657DBFDFL), 0x657DBFDFL), 0x657DBFDFL, (-8L), 0x657DBFDFL), // p_1204->g_989
        &p_1204->g_208, // p_1204->g_1172
        (void*)0, // p_1204->g_1191
        (-8L), // p_1204->g_1200
        0, // p_1204->v_collective
        sequence_input[get_global_id(0)], // p_1204->global_0_offset
        sequence_input[get_global_id(1)], // p_1204->global_1_offset
        sequence_input[get_global_id(2)], // p_1204->global_2_offset
        sequence_input[get_local_id(0)], // p_1204->local_0_offset
        sequence_input[get_local_id(1)], // p_1204->local_1_offset
        sequence_input[get_local_id(2)], // p_1204->local_2_offset
        sequence_input[get_group_id(0)], // p_1204->group_0_offset
        sequence_input[get_group_id(1)], // p_1204->group_1_offset
        sequence_input[get_group_id(2)], // p_1204->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1204->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1205 = c_1206;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1204);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1204->g_3, "p_1204->g_3", print_hash_value);
    transparent_crc(p_1204->g_4.s0, "p_1204->g_4.s0", print_hash_value);
    transparent_crc(p_1204->g_4.s1, "p_1204->g_4.s1", print_hash_value);
    transparent_crc(p_1204->g_4.s2, "p_1204->g_4.s2", print_hash_value);
    transparent_crc(p_1204->g_4.s3, "p_1204->g_4.s3", print_hash_value);
    transparent_crc(p_1204->g_4.s4, "p_1204->g_4.s4", print_hash_value);
    transparent_crc(p_1204->g_4.s5, "p_1204->g_4.s5", print_hash_value);
    transparent_crc(p_1204->g_4.s6, "p_1204->g_4.s6", print_hash_value);
    transparent_crc(p_1204->g_4.s7, "p_1204->g_4.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1204->g_8[i][j].f0, "p_1204->g_8[i][j].f0", print_hash_value);
            transparent_crc(p_1204->g_8[i][j].f1, "p_1204->g_8[i][j].f1", print_hash_value);
            transparent_crc(p_1204->g_8[i][j].f2, "p_1204->g_8[i][j].f2", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1204->g_9[i][j], "p_1204->g_9[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_1204->g_45[i][j][k], "p_1204->g_45[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1204->g_54.f0, "p_1204->g_54.f0", print_hash_value);
    transparent_crc(p_1204->g_54.f1, "p_1204->g_54.f1", print_hash_value);
    transparent_crc(p_1204->g_54.f2, "p_1204->g_54.f2", print_hash_value);
    transparent_crc(p_1204->g_59, "p_1204->g_59", print_hash_value);
    transparent_crc(p_1204->g_61, "p_1204->g_61", print_hash_value);
    transparent_crc(p_1204->g_79, "p_1204->g_79", print_hash_value);
    transparent_crc(p_1204->g_81, "p_1204->g_81", print_hash_value);
    transparent_crc(p_1204->g_106, "p_1204->g_106", print_hash_value);
    transparent_crc(p_1204->g_107.x, "p_1204->g_107.x", print_hash_value);
    transparent_crc(p_1204->g_107.y, "p_1204->g_107.y", print_hash_value);
    transparent_crc(p_1204->g_107.z, "p_1204->g_107.z", print_hash_value);
    transparent_crc(p_1204->g_107.w, "p_1204->g_107.w", print_hash_value);
    transparent_crc(p_1204->g_148, "p_1204->g_148", print_hash_value);
    transparent_crc(p_1204->g_181.s0, "p_1204->g_181.s0", print_hash_value);
    transparent_crc(p_1204->g_181.s1, "p_1204->g_181.s1", print_hash_value);
    transparent_crc(p_1204->g_181.s2, "p_1204->g_181.s2", print_hash_value);
    transparent_crc(p_1204->g_181.s3, "p_1204->g_181.s3", print_hash_value);
    transparent_crc(p_1204->g_181.s4, "p_1204->g_181.s4", print_hash_value);
    transparent_crc(p_1204->g_181.s5, "p_1204->g_181.s5", print_hash_value);
    transparent_crc(p_1204->g_181.s6, "p_1204->g_181.s6", print_hash_value);
    transparent_crc(p_1204->g_181.s7, "p_1204->g_181.s7", print_hash_value);
    transparent_crc(p_1204->g_181.s8, "p_1204->g_181.s8", print_hash_value);
    transparent_crc(p_1204->g_181.s9, "p_1204->g_181.s9", print_hash_value);
    transparent_crc(p_1204->g_181.sa, "p_1204->g_181.sa", print_hash_value);
    transparent_crc(p_1204->g_181.sb, "p_1204->g_181.sb", print_hash_value);
    transparent_crc(p_1204->g_181.sc, "p_1204->g_181.sc", print_hash_value);
    transparent_crc(p_1204->g_181.sd, "p_1204->g_181.sd", print_hash_value);
    transparent_crc(p_1204->g_181.se, "p_1204->g_181.se", print_hash_value);
    transparent_crc(p_1204->g_181.sf, "p_1204->g_181.sf", print_hash_value);
    transparent_crc(p_1204->g_182.s0, "p_1204->g_182.s0", print_hash_value);
    transparent_crc(p_1204->g_182.s1, "p_1204->g_182.s1", print_hash_value);
    transparent_crc(p_1204->g_182.s2, "p_1204->g_182.s2", print_hash_value);
    transparent_crc(p_1204->g_182.s3, "p_1204->g_182.s3", print_hash_value);
    transparent_crc(p_1204->g_182.s4, "p_1204->g_182.s4", print_hash_value);
    transparent_crc(p_1204->g_182.s5, "p_1204->g_182.s5", print_hash_value);
    transparent_crc(p_1204->g_182.s6, "p_1204->g_182.s6", print_hash_value);
    transparent_crc(p_1204->g_182.s7, "p_1204->g_182.s7", print_hash_value);
    transparent_crc(p_1204->g_182.s8, "p_1204->g_182.s8", print_hash_value);
    transparent_crc(p_1204->g_182.s9, "p_1204->g_182.s9", print_hash_value);
    transparent_crc(p_1204->g_182.sa, "p_1204->g_182.sa", print_hash_value);
    transparent_crc(p_1204->g_182.sb, "p_1204->g_182.sb", print_hash_value);
    transparent_crc(p_1204->g_182.sc, "p_1204->g_182.sc", print_hash_value);
    transparent_crc(p_1204->g_182.sd, "p_1204->g_182.sd", print_hash_value);
    transparent_crc(p_1204->g_182.se, "p_1204->g_182.se", print_hash_value);
    transparent_crc(p_1204->g_182.sf, "p_1204->g_182.sf", print_hash_value);
    transparent_crc(p_1204->g_183.s0, "p_1204->g_183.s0", print_hash_value);
    transparent_crc(p_1204->g_183.s1, "p_1204->g_183.s1", print_hash_value);
    transparent_crc(p_1204->g_183.s2, "p_1204->g_183.s2", print_hash_value);
    transparent_crc(p_1204->g_183.s3, "p_1204->g_183.s3", print_hash_value);
    transparent_crc(p_1204->g_183.s4, "p_1204->g_183.s4", print_hash_value);
    transparent_crc(p_1204->g_183.s5, "p_1204->g_183.s5", print_hash_value);
    transparent_crc(p_1204->g_183.s6, "p_1204->g_183.s6", print_hash_value);
    transparent_crc(p_1204->g_183.s7, "p_1204->g_183.s7", print_hash_value);
    transparent_crc(p_1204->g_184.s0, "p_1204->g_184.s0", print_hash_value);
    transparent_crc(p_1204->g_184.s1, "p_1204->g_184.s1", print_hash_value);
    transparent_crc(p_1204->g_184.s2, "p_1204->g_184.s2", print_hash_value);
    transparent_crc(p_1204->g_184.s3, "p_1204->g_184.s3", print_hash_value);
    transparent_crc(p_1204->g_184.s4, "p_1204->g_184.s4", print_hash_value);
    transparent_crc(p_1204->g_184.s5, "p_1204->g_184.s5", print_hash_value);
    transparent_crc(p_1204->g_184.s6, "p_1204->g_184.s6", print_hash_value);
    transparent_crc(p_1204->g_184.s7, "p_1204->g_184.s7", print_hash_value);
    transparent_crc(p_1204->g_198, "p_1204->g_198", print_hash_value);
    transparent_crc(p_1204->g_205, "p_1204->g_205", print_hash_value);
    transparent_crc(p_1204->g_210.f0, "p_1204->g_210.f0", print_hash_value);
    transparent_crc(p_1204->g_210.f1, "p_1204->g_210.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1204->g_217[i][j][k], "p_1204->g_217[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1204->g_220, "p_1204->g_220", print_hash_value);
    transparent_crc(p_1204->g_295, "p_1204->g_295", print_hash_value);
    transparent_crc(p_1204->g_312, "p_1204->g_312", print_hash_value);
    transparent_crc(p_1204->g_316, "p_1204->g_316", print_hash_value);
    transparent_crc(p_1204->g_328.s0, "p_1204->g_328.s0", print_hash_value);
    transparent_crc(p_1204->g_328.s1, "p_1204->g_328.s1", print_hash_value);
    transparent_crc(p_1204->g_328.s2, "p_1204->g_328.s2", print_hash_value);
    transparent_crc(p_1204->g_328.s3, "p_1204->g_328.s3", print_hash_value);
    transparent_crc(p_1204->g_328.s4, "p_1204->g_328.s4", print_hash_value);
    transparent_crc(p_1204->g_328.s5, "p_1204->g_328.s5", print_hash_value);
    transparent_crc(p_1204->g_328.s6, "p_1204->g_328.s6", print_hash_value);
    transparent_crc(p_1204->g_328.s7, "p_1204->g_328.s7", print_hash_value);
    transparent_crc(p_1204->g_336.s0, "p_1204->g_336.s0", print_hash_value);
    transparent_crc(p_1204->g_336.s1, "p_1204->g_336.s1", print_hash_value);
    transparent_crc(p_1204->g_336.s2, "p_1204->g_336.s2", print_hash_value);
    transparent_crc(p_1204->g_336.s3, "p_1204->g_336.s3", print_hash_value);
    transparent_crc(p_1204->g_336.s4, "p_1204->g_336.s4", print_hash_value);
    transparent_crc(p_1204->g_336.s5, "p_1204->g_336.s5", print_hash_value);
    transparent_crc(p_1204->g_336.s6, "p_1204->g_336.s6", print_hash_value);
    transparent_crc(p_1204->g_336.s7, "p_1204->g_336.s7", print_hash_value);
    transparent_crc(p_1204->g_336.s8, "p_1204->g_336.s8", print_hash_value);
    transparent_crc(p_1204->g_336.s9, "p_1204->g_336.s9", print_hash_value);
    transparent_crc(p_1204->g_336.sa, "p_1204->g_336.sa", print_hash_value);
    transparent_crc(p_1204->g_336.sb, "p_1204->g_336.sb", print_hash_value);
    transparent_crc(p_1204->g_336.sc, "p_1204->g_336.sc", print_hash_value);
    transparent_crc(p_1204->g_336.sd, "p_1204->g_336.sd", print_hash_value);
    transparent_crc(p_1204->g_336.se, "p_1204->g_336.se", print_hash_value);
    transparent_crc(p_1204->g_336.sf, "p_1204->g_336.sf", print_hash_value);
    transparent_crc(p_1204->g_337.x, "p_1204->g_337.x", print_hash_value);
    transparent_crc(p_1204->g_337.y, "p_1204->g_337.y", print_hash_value);
    transparent_crc(p_1204->g_337.z, "p_1204->g_337.z", print_hash_value);
    transparent_crc(p_1204->g_337.w, "p_1204->g_337.w", print_hash_value);
    transparent_crc(p_1204->g_385.x, "p_1204->g_385.x", print_hash_value);
    transparent_crc(p_1204->g_385.y, "p_1204->g_385.y", print_hash_value);
    transparent_crc(p_1204->g_401.s0, "p_1204->g_401.s0", print_hash_value);
    transparent_crc(p_1204->g_401.s1, "p_1204->g_401.s1", print_hash_value);
    transparent_crc(p_1204->g_401.s2, "p_1204->g_401.s2", print_hash_value);
    transparent_crc(p_1204->g_401.s3, "p_1204->g_401.s3", print_hash_value);
    transparent_crc(p_1204->g_401.s4, "p_1204->g_401.s4", print_hash_value);
    transparent_crc(p_1204->g_401.s5, "p_1204->g_401.s5", print_hash_value);
    transparent_crc(p_1204->g_401.s6, "p_1204->g_401.s6", print_hash_value);
    transparent_crc(p_1204->g_401.s7, "p_1204->g_401.s7", print_hash_value);
    transparent_crc(p_1204->g_404.x, "p_1204->g_404.x", print_hash_value);
    transparent_crc(p_1204->g_404.y, "p_1204->g_404.y", print_hash_value);
    transparent_crc(p_1204->g_405.s0, "p_1204->g_405.s0", print_hash_value);
    transparent_crc(p_1204->g_405.s1, "p_1204->g_405.s1", print_hash_value);
    transparent_crc(p_1204->g_405.s2, "p_1204->g_405.s2", print_hash_value);
    transparent_crc(p_1204->g_405.s3, "p_1204->g_405.s3", print_hash_value);
    transparent_crc(p_1204->g_405.s4, "p_1204->g_405.s4", print_hash_value);
    transparent_crc(p_1204->g_405.s5, "p_1204->g_405.s5", print_hash_value);
    transparent_crc(p_1204->g_405.s6, "p_1204->g_405.s6", print_hash_value);
    transparent_crc(p_1204->g_405.s7, "p_1204->g_405.s7", print_hash_value);
    transparent_crc(p_1204->g_405.s8, "p_1204->g_405.s8", print_hash_value);
    transparent_crc(p_1204->g_405.s9, "p_1204->g_405.s9", print_hash_value);
    transparent_crc(p_1204->g_405.sa, "p_1204->g_405.sa", print_hash_value);
    transparent_crc(p_1204->g_405.sb, "p_1204->g_405.sb", print_hash_value);
    transparent_crc(p_1204->g_405.sc, "p_1204->g_405.sc", print_hash_value);
    transparent_crc(p_1204->g_405.sd, "p_1204->g_405.sd", print_hash_value);
    transparent_crc(p_1204->g_405.se, "p_1204->g_405.se", print_hash_value);
    transparent_crc(p_1204->g_405.sf, "p_1204->g_405.sf", print_hash_value);
    transparent_crc(p_1204->g_422.x, "p_1204->g_422.x", print_hash_value);
    transparent_crc(p_1204->g_422.y, "p_1204->g_422.y", print_hash_value);
    transparent_crc(p_1204->g_431, "p_1204->g_431", print_hash_value);
    transparent_crc(p_1204->g_479.x, "p_1204->g_479.x", print_hash_value);
    transparent_crc(p_1204->g_479.y, "p_1204->g_479.y", print_hash_value);
    transparent_crc(p_1204->g_480.s0, "p_1204->g_480.s0", print_hash_value);
    transparent_crc(p_1204->g_480.s1, "p_1204->g_480.s1", print_hash_value);
    transparent_crc(p_1204->g_480.s2, "p_1204->g_480.s2", print_hash_value);
    transparent_crc(p_1204->g_480.s3, "p_1204->g_480.s3", print_hash_value);
    transparent_crc(p_1204->g_480.s4, "p_1204->g_480.s4", print_hash_value);
    transparent_crc(p_1204->g_480.s5, "p_1204->g_480.s5", print_hash_value);
    transparent_crc(p_1204->g_480.s6, "p_1204->g_480.s6", print_hash_value);
    transparent_crc(p_1204->g_480.s7, "p_1204->g_480.s7", print_hash_value);
    transparent_crc(p_1204->g_480.s8, "p_1204->g_480.s8", print_hash_value);
    transparent_crc(p_1204->g_480.s9, "p_1204->g_480.s9", print_hash_value);
    transparent_crc(p_1204->g_480.sa, "p_1204->g_480.sa", print_hash_value);
    transparent_crc(p_1204->g_480.sb, "p_1204->g_480.sb", print_hash_value);
    transparent_crc(p_1204->g_480.sc, "p_1204->g_480.sc", print_hash_value);
    transparent_crc(p_1204->g_480.sd, "p_1204->g_480.sd", print_hash_value);
    transparent_crc(p_1204->g_480.se, "p_1204->g_480.se", print_hash_value);
    transparent_crc(p_1204->g_480.sf, "p_1204->g_480.sf", print_hash_value);
    transparent_crc(p_1204->g_483.x, "p_1204->g_483.x", print_hash_value);
    transparent_crc(p_1204->g_483.y, "p_1204->g_483.y", print_hash_value);
    transparent_crc(p_1204->g_486.x, "p_1204->g_486.x", print_hash_value);
    transparent_crc(p_1204->g_486.y, "p_1204->g_486.y", print_hash_value);
    transparent_crc(p_1204->g_491.x, "p_1204->g_491.x", print_hash_value);
    transparent_crc(p_1204->g_491.y, "p_1204->g_491.y", print_hash_value);
    transparent_crc(p_1204->g_710.f0, "p_1204->g_710.f0", print_hash_value);
    transparent_crc(p_1204->g_710.f1, "p_1204->g_710.f1", print_hash_value);
    transparent_crc(p_1204->g_733.x, "p_1204->g_733.x", print_hash_value);
    transparent_crc(p_1204->g_733.y, "p_1204->g_733.y", print_hash_value);
    transparent_crc(p_1204->g_733.z, "p_1204->g_733.z", print_hash_value);
    transparent_crc(p_1204->g_733.w, "p_1204->g_733.w", print_hash_value);
    transparent_crc(p_1204->g_734.s0, "p_1204->g_734.s0", print_hash_value);
    transparent_crc(p_1204->g_734.s1, "p_1204->g_734.s1", print_hash_value);
    transparent_crc(p_1204->g_734.s2, "p_1204->g_734.s2", print_hash_value);
    transparent_crc(p_1204->g_734.s3, "p_1204->g_734.s3", print_hash_value);
    transparent_crc(p_1204->g_734.s4, "p_1204->g_734.s4", print_hash_value);
    transparent_crc(p_1204->g_734.s5, "p_1204->g_734.s5", print_hash_value);
    transparent_crc(p_1204->g_734.s6, "p_1204->g_734.s6", print_hash_value);
    transparent_crc(p_1204->g_734.s7, "p_1204->g_734.s7", print_hash_value);
    transparent_crc(p_1204->g_791, "p_1204->g_791", print_hash_value);
    transparent_crc(p_1204->g_795, "p_1204->g_795", print_hash_value);
    transparent_crc(p_1204->g_842.f0, "p_1204->g_842.f0", print_hash_value);
    transparent_crc(p_1204->g_842.f1, "p_1204->g_842.f1", print_hash_value);
    transparent_crc(p_1204->g_842.f2, "p_1204->g_842.f2", print_hash_value);
    transparent_crc(p_1204->g_865.s0, "p_1204->g_865.s0", print_hash_value);
    transparent_crc(p_1204->g_865.s1, "p_1204->g_865.s1", print_hash_value);
    transparent_crc(p_1204->g_865.s2, "p_1204->g_865.s2", print_hash_value);
    transparent_crc(p_1204->g_865.s3, "p_1204->g_865.s3", print_hash_value);
    transparent_crc(p_1204->g_865.s4, "p_1204->g_865.s4", print_hash_value);
    transparent_crc(p_1204->g_865.s5, "p_1204->g_865.s5", print_hash_value);
    transparent_crc(p_1204->g_865.s6, "p_1204->g_865.s6", print_hash_value);
    transparent_crc(p_1204->g_865.s7, "p_1204->g_865.s7", print_hash_value);
    transparent_crc(p_1204->g_881.s0, "p_1204->g_881.s0", print_hash_value);
    transparent_crc(p_1204->g_881.s1, "p_1204->g_881.s1", print_hash_value);
    transparent_crc(p_1204->g_881.s2, "p_1204->g_881.s2", print_hash_value);
    transparent_crc(p_1204->g_881.s3, "p_1204->g_881.s3", print_hash_value);
    transparent_crc(p_1204->g_881.s4, "p_1204->g_881.s4", print_hash_value);
    transparent_crc(p_1204->g_881.s5, "p_1204->g_881.s5", print_hash_value);
    transparent_crc(p_1204->g_881.s6, "p_1204->g_881.s6", print_hash_value);
    transparent_crc(p_1204->g_881.s7, "p_1204->g_881.s7", print_hash_value);
    transparent_crc(p_1204->g_881.s8, "p_1204->g_881.s8", print_hash_value);
    transparent_crc(p_1204->g_881.s9, "p_1204->g_881.s9", print_hash_value);
    transparent_crc(p_1204->g_881.sa, "p_1204->g_881.sa", print_hash_value);
    transparent_crc(p_1204->g_881.sb, "p_1204->g_881.sb", print_hash_value);
    transparent_crc(p_1204->g_881.sc, "p_1204->g_881.sc", print_hash_value);
    transparent_crc(p_1204->g_881.sd, "p_1204->g_881.sd", print_hash_value);
    transparent_crc(p_1204->g_881.se, "p_1204->g_881.se", print_hash_value);
    transparent_crc(p_1204->g_881.sf, "p_1204->g_881.sf", print_hash_value);
    transparent_crc(p_1204->g_909.x, "p_1204->g_909.x", print_hash_value);
    transparent_crc(p_1204->g_909.y, "p_1204->g_909.y", print_hash_value);
    transparent_crc(p_1204->g_919.x, "p_1204->g_919.x", print_hash_value);
    transparent_crc(p_1204->g_919.y, "p_1204->g_919.y", print_hash_value);
    transparent_crc(p_1204->g_920.x, "p_1204->g_920.x", print_hash_value);
    transparent_crc(p_1204->g_920.y, "p_1204->g_920.y", print_hash_value);
    transparent_crc(p_1204->g_980.x, "p_1204->g_980.x", print_hash_value);
    transparent_crc(p_1204->g_980.y, "p_1204->g_980.y", print_hash_value);
    transparent_crc(p_1204->g_980.z, "p_1204->g_980.z", print_hash_value);
    transparent_crc(p_1204->g_980.w, "p_1204->g_980.w", print_hash_value);
    transparent_crc(p_1204->g_989.s0, "p_1204->g_989.s0", print_hash_value);
    transparent_crc(p_1204->g_989.s1, "p_1204->g_989.s1", print_hash_value);
    transparent_crc(p_1204->g_989.s2, "p_1204->g_989.s2", print_hash_value);
    transparent_crc(p_1204->g_989.s3, "p_1204->g_989.s3", print_hash_value);
    transparent_crc(p_1204->g_989.s4, "p_1204->g_989.s4", print_hash_value);
    transparent_crc(p_1204->g_989.s5, "p_1204->g_989.s5", print_hash_value);
    transparent_crc(p_1204->g_989.s6, "p_1204->g_989.s6", print_hash_value);
    transparent_crc(p_1204->g_989.s7, "p_1204->g_989.s7", print_hash_value);
    transparent_crc(p_1204->g_1200, "p_1204->g_1200", print_hash_value);
    transparent_crc(p_1204->v_collective, "p_1204->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 21; i++)
            transparent_crc(p_1204->g_special_values[i + 21 * get_linear_group_id()], "p_1204->g_special_values[i + 21 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 21; i++)
            transparent_crc(p_1204->l_special_values[i], "p_1204->l_special_values[i]", print_hash_value);
    transparent_crc(p_1204->l_comm_values[get_linear_local_id()], "p_1204->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1204->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1204->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
