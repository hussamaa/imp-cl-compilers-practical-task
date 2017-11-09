// --atomics 56 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,91,3 -l 2,1,1
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

// Seed: 3040175587

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
};

struct S1 {
   volatile int8_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   volatile int32_t  f3;
};

struct S2 {
    uint8_t g_14;
    uint8_t g_19;
    VECTOR(int32_t, 16) g_32;
    VECTOR(int32_t, 8) g_33;
    volatile VECTOR(int8_t, 16) g_37;
    VECTOR(int8_t, 16) g_38;
    volatile VECTOR(int8_t, 4) g_40;
    VECTOR(int8_t, 2) g_41;
    struct S0 g_51;
    uint8_t *g_54;
    volatile VECTOR(int16_t, 16) g_64;
    VECTOR(int32_t, 8) g_66;
    int32_t * volatile g_78;
    int32_t * volatile g_79;
    int32_t * volatile g_80;
    VECTOR(int32_t, 4) g_81;
    int16_t g_85;
    int32_t *g_88;
    int32_t ** volatile g_87;
    uint32_t g_101;
    int32_t ** volatile g_112;
    VECTOR(uint16_t, 4) g_118;
    VECTOR(uint8_t, 8) g_121;
    struct S1 g_131[4];
    volatile VECTOR(uint32_t, 4) g_167;
    VECTOR(int8_t, 4) g_181;
    VECTOR(uint8_t, 2) g_185;
    VECTOR(uint8_t, 16) g_186;
    uint32_t g_205;
    uint32_t g_210[2][9][6];
    volatile VECTOR(uint8_t, 16) g_224;
    volatile struct S1 g_235;
    volatile struct S1 * volatile g_234[3];
    VECTOR(int8_t, 16) g_246;
    volatile uint8_t * volatile * volatile * volatile g_249[1];
    VECTOR(int16_t, 2) g_253;
    int32_t ** volatile g_257;
    int32_t *g_260;
    int32_t ** volatile g_259;
    volatile VECTOR(int32_t, 2) g_269;
    volatile VECTOR(int32_t, 8) g_270;
    VECTOR(uint16_t, 4) g_303;
    uint64_t g_308;
    uint64_t g_332;
    struct S1 * volatile g_342;
    int32_t * volatile g_347;
    int32_t * volatile g_349;
    int32_t * volatile g_351;
    int32_t * volatile g_352;
    int32_t g_353;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
struct S0  func_1(struct S2 * p_354);
struct S1  func_2(int64_t  p_3, uint32_t  p_4, int8_t  p_5, struct S2 * p_354);
struct S0  func_9(uint64_t  p_10, uint32_t  p_11, uint16_t  p_12, struct S2 * p_354);
int16_t  func_24(uint32_t  p_25, uint16_t  p_26, struct S2 * p_354);
int8_t  func_42(uint32_t  p_43, uint32_t  p_44, struct S2 * p_354);
uint8_t * func_45(struct S0  p_46, uint32_t  p_47, uint8_t * p_48, int32_t  p_49, int8_t  p_50, struct S2 * p_354);
uint8_t ** func_56(int8_t  p_57, struct S2 * p_354);
int8_t  func_67(int32_t  p_68, uint32_t  p_69, int8_t  p_70, struct S2 * p_354);
int16_t  func_108(int16_t  p_109, struct S2 * p_354);
int16_t  func_110(uint8_t  p_111, struct S2 * p_354);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_354->l_comm_values p_354->g_comm_values p_354->g_19 p_354->g_32 p_354->g_33 p_354->g_37 p_354->g_38 p_354->g_40 p_354->g_41 p_354->g_51 p_354->g_54 p_354->g_64 p_354->g_66 p_354->g_81 p_354->g_87 p_354->g_101 p_354->g_88 p_354->g_112 p_354->g_118 p_354->g_121 p_354->g_131 p_354->g_167 p_354->g_181 p_354->g_185 p_354->g_186 p_354->g_224 p_354->g_205 p_354->g_246 p_354->g_249 p_354->g_253 p_354->g_257 p_354->g_259 p_354->g_269 p_354->g_270 p_354->g_260 p_354->g_303 p_354->g_308
 * writes: p_354->g_14 p_354->g_19 p_354->g_51 p_354->g_54 p_354->g_85 p_354->g_88 p_354->g_101 p_354->g_131 p_354->g_118 p_354->g_205 p_354->g_234 p_354->g_253 p_354->g_260 p_354->l_comm_values p_354->g_81 p_354->g_comm_values p_354->g_33 p_354->g_308 p_354->g_332 p_354->g_353
 */
struct S0  func_1(struct S2 * p_354)
{ /* block id: 4 */
    uint8_t *l_13 = &p_354->g_14;
    VECTOR(int32_t, 4) l_15 = (VECTOR(int32_t, 4))(0x7A9D2E81L, (VECTOR(int32_t, 2))(0x7A9D2E81L, 9L), 9L);
    uint8_t *l_18 = &p_354->g_19;
    VECTOR(int32_t, 2) l_31 = (VECTOR(int32_t, 2))((-1L), 0x06A4ABFFL);
    VECTOR(int32_t, 4) l_34 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 6L), 6L);
    VECTOR(uint16_t, 16) l_39 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65530UL), 65530UL), 65530UL, 1UL, 65530UL, (VECTOR(uint16_t, 2))(1UL, 65530UL), (VECTOR(uint16_t, 2))(1UL, 65530UL), 1UL, 65530UL, 1UL, 65530UL);
    struct S0 *l_52 = &p_354->g_51;
    uint16_t l_53[7][9] = {{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L},{0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L,0x3F87L,8UL,0x3F87L}};
    uint8_t **l_55 = &p_354->g_54;
    uint32_t l_233 = 4294967295UL;
    struct S1 *l_343 = &p_354->g_131[1];
    uint32_t *l_345[7][10] = {{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101},{(void*)0,&p_354->g_210[1][2][0],&p_354->g_210[1][2][0],(void*)0,&p_354->g_101,&p_354->g_210[0][5][1],&p_354->g_101,&p_354->g_101,(void*)0,&p_354->g_101}};
    uint32_t **l_344[7][5] = {{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]},{&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3],&l_345[3][3]}};
    uint32_t ***l_346 = &l_344[5][3];
    int32_t *l_348 = (void*)0;
    int32_t *l_350 = (void*)0;
    int i, j;
    (*l_343) = func_2(p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))], ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((func_9((((*l_13) = (~((VECTOR(uint8_t, 2))(253UL, 2UL)).hi)) , (!(l_13 == (void*)0))), ((p_354->g_comm_values[p_354->tid] < (((VECTOR(int32_t, 2))(l_15.xx)).odd || (safe_mul_func_uint8_t_u_u(((*l_18)--), (p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))] , (safe_div_func_int16_t_s_s(func_24((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_31.yxyyxyyyxyxyyyyx)).s6b99)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(p_354->g_32.saafd55be9843c6bc)).sfb65, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_354->g_33.s1720)).even)), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_34.wyxwxzxx)).hi)).hi)), 0L, 0x5B872A60L, 0x6023024AL)).lo))).wzywyxyx, ((VECTOR(int32_t, 8))(0x23D57638L, (-7L), ((((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0xCCFEL, 0x3D4FL)))).hi)) , p_354->g_comm_values[p_354->tid]) < (((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(p_354->g_37.s4c99fffb)).s41, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_34.z, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(p_354->g_38.s6de11d69c043ca38)).s07, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))((((VECTOR(uint16_t, 2))(l_39.s90)).hi , 8L), 0L, (-6L), (-8L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(p_354->g_40.yxyz)).zwxywwxx, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(p_354->g_41.yxyxxxxyxxxyyxxx)).s00, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0L, 0L)).xxxyyxyyxxyyxxxx)).sa8))))).yyyyxyyx))).s0206047114011353, (int8_t)func_42((((*l_55) = func_45(((*l_52) = p_354->g_51), l_53[1][7], p_354->g_54, p_354->g_37.se, p_354->g_38.se, p_354)) == l_18), p_354->g_33.s5, p_354)))).even)).s5622273571424742, ((VECTOR(int8_t, 16))(0x74L))))).s74)), (-1L), 1L, l_31.y, (-5L), 0x49L, l_233, 8L, l_233, (-1L), (-1L))).s690f, ((VECTOR(int8_t, 4))(0x59L))))).wwyyxxwzwwywyxxw)).s05)), l_233, 0x0FL, 1L, ((VECTOR(int8_t, 2))(0x4BL)), 0x54L)).odd)).hi))), 9L)).zwzzwwyy)).hi, ((VECTOR(int8_t, 4))(0x18L))))).hi, ((VECTOR(int8_t, 2))(3L))))), ((VECTOR(int8_t, 2))(0L))))), 0x75L)).even, ((VECTOR(int8_t, 2))(0x47L))))), 0L, 0x26L)), 0x51L, l_15.z, (-1L), 0x3CL)), (int8_t)l_39.s7))).s11))).lo <= 6L)) , l_39.sb), ((VECTOR(int32_t, 4))(0L)), 0x1BEEFEFFL))))).s1366342205404521, ((VECTOR(int32_t, 16))(0x0CCA3B02L))))))).sc1, ((VECTOR(int32_t, 2))((-7L)))))))).lo != FAKE_DIVERGE(p_354->global_1_offset, get_global_id(1), 10)) , p_354->g_66.s2) , l_39.sb) , l_53[5][6]), l_15.z)), p_354->g_185.x)), p_354->g_121.s1, p_354), p_354->g_121.s5))))))) , p_354->g_205), l_15.x, p_354) , p_354->g_32.s0))) < p_354->g_41.x), l_39.s1)) , 0x9D0910C1L), l_39.sa, p_354);
    p_354->g_353 = (((*l_346) = l_344[0][4]) != (void*)0);
    return p_354->g_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_51.f1 p_354->l_comm_values p_354->g_269 p_354->g_270 p_354->g_66 p_354->g_121 p_354->g_260 p_354->g_81 p_354->g_32 p_354->g_33 p_354->g_303 p_354->g_308 p_354->g_205 p_354->g_131
 * writes: p_354->g_260 p_354->g_51.f1 p_354->l_comm_values p_354->g_253 p_354->g_81 p_354->g_comm_values p_354->g_33 p_354->g_308 p_354->g_19 p_354->g_332 p_354->g_85
 */
struct S1  func_2(int64_t  p_3, uint32_t  p_4, int8_t  p_5, struct S2 * p_354)
{ /* block id: 86 */
    int32_t *l_261 = (void*)0;
    int32_t **l_262 = &p_354->g_260;
    uint8_t l_279[9][7][4] = {{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}},{{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL},{0xEDL,0x21L,0x82L,0x4EL}}};
    VECTOR(uint8_t, 16) l_294 = (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 5UL), 5UL), 5UL, 252UL, 5UL, (VECTOR(uint8_t, 2))(252UL, 5UL), (VECTOR(uint8_t, 2))(252UL, 5UL), 252UL, 5UL, 252UL, 5UL);
    VECTOR(uint32_t, 8) l_300 = (VECTOR(uint32_t, 8))(0x146E089EL, (VECTOR(uint32_t, 4))(0x146E089EL, (VECTOR(uint32_t, 2))(0x146E089EL, 4UL), 4UL), 4UL, 0x146E089EL, 4UL);
    VECTOR(int64_t, 16) l_305 = (VECTOR(int64_t, 16))(0x64B7787EF4D77713L, (VECTOR(int64_t, 4))(0x64B7787EF4D77713L, (VECTOR(int64_t, 2))(0x64B7787EF4D77713L, (-1L)), (-1L)), (-1L), 0x64B7787EF4D77713L, (-1L), (VECTOR(int64_t, 2))(0x64B7787EF4D77713L, (-1L)), (VECTOR(int64_t, 2))(0x64B7787EF4D77713L, (-1L)), 0x64B7787EF4D77713L, (-1L), 0x64B7787EF4D77713L, (-1L));
    VECTOR(int64_t, 16) l_306 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-8L)), (-8L)), (-8L), 1L, (-8L), (VECTOR(int64_t, 2))(1L, (-8L)), (VECTOR(int64_t, 2))(1L, (-8L)), 1L, (-8L), 1L, (-8L));
    uint16_t l_320 = 0x22E1L;
    struct S1 *l_329 = &p_354->g_131[1];
    int16_t l_334 = 0L;
    int32_t l_336 = 0x13C4C162L;
    int32_t *l_337[6][10][4] = {{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}},{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}},{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}},{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}},{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}},{{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336},{(void*)0,(void*)0,(void*)0,&l_336}}};
    int16_t l_338 = 2L;
    uint32_t l_339 = 4294967287UL;
    int i, j, k;
    (*l_262) = l_261;
    for (p_354->g_51.f1 = (-12); (p_354->g_51.f1 <= 20); p_354->g_51.f1 = safe_add_func_uint32_t_u_u(p_354->g_51.f1, 3))
    { /* block id: 90 */
        int64_t *l_267 = (void*)0;
        int64_t *l_268 = (void*)0;
        int32_t l_277 = 0x245FD23DL;
        int32_t *l_278 = (void*)0;
        int64_t *l_280 = (void*)0;
        int64_t *l_281[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_282 = (void*)0;
        int32_t *l_283[3][8] = {{&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277},{&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277,&l_277}};
        VECTOR(uint8_t, 4) l_292 = (VECTOR(uint8_t, 4))(0xE5L, (VECTOR(uint8_t, 2))(0xE5L, 0UL), 0UL);
        VECTOR(uint8_t, 16) l_293 = (VECTOR(uint8_t, 16))(0x3BL, (VECTOR(uint8_t, 4))(0x3BL, (VECTOR(uint8_t, 2))(0x3BL, 0UL), 0UL), 0UL, 0x3BL, 0UL, (VECTOR(uint8_t, 2))(0x3BL, 0UL), (VECTOR(uint8_t, 2))(0x3BL, 0UL), 0x3BL, 0UL, 0x3BL, 0UL);
        VECTOR(uint8_t, 2) l_295 = (VECTOR(uint8_t, 2))(0x7BL, 4UL);
        uint8_t **l_304 = &p_354->g_54;
        uint64_t *l_307 = &p_354->g_308;
        VECTOR(uint8_t, 8) l_311 = (VECTOR(uint8_t, 8))(0x4EL, (VECTOR(uint8_t, 4))(0x4EL, (VECTOR(uint8_t, 2))(0x4EL, 0x16L), 0x16L), 0x16L, 0x4EL, 0x16L);
        uint8_t *l_312 = &p_354->g_19;
        struct S1 *l_328[3];
        struct S1 **l_327 = &l_328[2];
        int16_t *l_330[7][4] = {{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85},{&p_354->g_85,&p_354->g_85,&p_354->g_85,&p_354->g_85}};
        uint64_t *l_331 = &p_354->g_332;
        uint32_t l_333 = 0xEA35E697L;
        int64_t l_335 = 0x3C37A103796D13B3L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_328[i] = &p_354->g_131[1];
        p_354->g_33.s4 |= (safe_lshift_func_int16_t_s_s(((!((((p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))] |= (p_3 || p_4)) >= (p_354->g_comm_values[p_354->tid] = (((VECTOR(int32_t, 8))(0x5AB1F19AL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_354->g_269.xyyxyyxyxyyxxxyy)).s71ac)).odd)))).xyxy, ((VECTOR(int32_t, 4))(p_354->g_270.s5157))))).even)), ((VECTOR(int32_t, 2))(0x3FA02BC4L, (-9L))), 9L, (-1L), 0x76EDE2A5L)).s0 != (p_354->g_81.w &= (l_279[3][5][1] &= (safe_lshift_func_uint8_t_u_u((!((safe_lshift_func_int16_t_s_u((p_354->g_253.x = ((safe_add_func_int64_t_s_s((FAKE_DIVERGE(p_354->local_1_offset, get_local_id(1), 10) < p_354->g_66.s3), p_354->g_121.s2)) ^ ((l_277 , (p_4 , (*l_262))) == l_278))), 6)) | p_3)), l_277))))))) | p_354->g_32.s8) ^ p_5)) == FAKE_DIVERGE(p_354->global_1_offset, get_global_id(1), 10)), 6));
        l_336 &= ((p_354->g_85 = (safe_div_func_uint8_t_u_u((((p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))] = ((safe_mul_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(5UL, ((VECTOR(uint8_t, 2))(l_292.wz)), 0xBAL)), ((VECTOR(uint8_t, 8))(l_293.se5a7c2f7)), 251UL, 0xD1L, 0UL, 0xB3L)).s35)).xxxxxxxyxxyxxyxx)).hi)).s45, ((VECTOR(uint8_t, 4))(l_294.sca79)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(l_295.yyxxxyxx)).s0123401523023667, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(0x51L, 0x6AL)).yxxy, ((VECTOR(uint8_t, 4))((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((p_4 , ((VECTOR(uint32_t, 4))(l_300.s0767)).y), ((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(p_354->g_303.xxwywyyyxyzxzyyx)).sf, (((void*)0 == l_304) == (((*l_307) ^= ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(l_305.sbc91fc8b)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(5L, 0x21259B34656CEF8DL)), 0x5265F06879AC1DE3L, 2L)).yzxzxzwxyzzxwyzz)).hi, ((VECTOR(int64_t, 2))(0x74359564B6E4D21DL, 1L)).yxxyxyyy))).s0706236543733064, ((VECTOR(int64_t, 4))(l_306.s73ce)).zwwxwzzxwzyxxxzw))).sc) & (safe_mod_func_int8_t_s_s(0x30L, ((*l_312) = ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_311.s11432062)).s76)).odd))))))) ^ (p_354->g_303.z & (((safe_unary_minus_func_int32_t_s((((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_320 == (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((*l_331) = (safe_sub_func_int16_t_s_s((p_354->g_253.y = (((*l_327) = &p_354->g_131[3]) == l_329)), p_5))) < p_4), l_333)), p_5))), l_334)), p_4)), p_5)) && 7UL) | p_4))) > l_335) >= 0UL))))) && 65526UL), FAKE_DIVERGE(p_354->group_1_offset, get_group_id(1), 10))), 0xA7L, 0UL, 0xF9L))))).yyxwxyyyxxzzwwzx))).s8cd1)).lo))).even, p_4)), p_354->g_81.y)) > p_4), p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))])) != p_354->g_66.s5)) < p_354->g_205) & GROUP_DIVERGE(0, 1)), 0x32L))) | 0x708AL);
    }
    l_339--;
    return (*l_329);
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_246 p_354->g_249 p_354->g_253 p_354->g_185 p_354->g_38 p_354->g_121 p_354->g_87 p_354->g_88 p_354->g_257 p_354->g_259 p_354->g_51
 * writes: p_354->g_85 p_354->g_253 p_354->g_88 p_354->g_260
 */
struct S0  func_9(uint64_t  p_10, uint32_t  p_11, uint16_t  p_12, struct S2 * p_354)
{ /* block id: 78 */
    VECTOR(uint16_t, 2) l_242 = (VECTOR(uint16_t, 2))(65529UL, 1UL);
    int16_t *l_243 = &p_354->g_85;
    VECTOR(int8_t, 16) l_247 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int8_t, 2))((-1L), 4L), (VECTOR(int8_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
    VECTOR(int8_t, 2) l_248 = (VECTOR(int8_t, 2))(0L, 0x29L);
    struct S0 l_250 = {-6L,4294967292UL,1UL};
    int16_t *l_254 = (void*)0;
    int16_t *l_255 = (void*)0;
    int32_t l_256[8] = {0x3AF1E85BL,0x3E760DDEL,0x3AF1E85BL,0x3AF1E85BL,0x3E760DDEL,0x3AF1E85BL,0x3AF1E85BL,0x3E760DDEL};
    int32_t **l_258 = &p_354->g_88;
    int i;
    l_256[7] = (safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s(0x14CAD00D3A472B08L, ((((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(0L, (-3L))).yxyxyxyx, ((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(l_242.yyyy)).yxyxzzwyyxwwyyww, (uint16_t)(((*l_243) = (-1L)) < (safe_mod_func_int8_t_s_s(1L, ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(p_354->g_246.sf02e)).ywzwyzyw, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(1L, (-1L))), ((VECTOR(int8_t, 4))(l_247.s6d4f)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_248.yxyyyxxx)))).s13))).yyyyyxyy))).s0)))))).hi))))).s5, ((void*)0 != p_354->g_249[0]))) != ((((l_247.s2 || ((l_250 , (FAKE_DIVERGE(p_354->global_2_offset, get_global_id(2), 10) || ((safe_rshift_func_int8_t_s_s(l_248.y, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x311FL, ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(p_354->g_253.yyyy)).odd, (int16_t)(p_354->g_253.y = (-1L))))), (-9L))).wywwzyxx)).s1 <= FAKE_DIVERGE(p_354->global_2_offset, get_global_id(2), 10)) < p_354->g_185.y))) > p_11))) , 4294967295UL)) < p_354->g_38.sd) > 0x95L) == 0x2FF5L)) | p_354->g_121.s0) > l_242.x))), p_11));
    (*p_354->g_257) = (*p_354->g_87);
    (*p_354->g_259) = ((*l_258) = &l_256[0]);
    return p_354->g_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_181
 * writes: p_354->g_234
 */
int16_t  func_24(uint32_t  p_25, uint16_t  p_26, struct S2 * p_354)
{ /* block id: 75 */
    p_354->g_234[1] = (void*)0;
    return p_354->g_181.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_41 p_354->g_64 p_354->g_51.f0 p_354->g_66 p_354->g_51.f1 p_354->g_33 p_354->g_81 p_354->l_comm_values p_354->g_87 p_354->g_38 p_354->g_101 p_354->g_51.f2 p_354->g_88 p_354->g_112 p_354->g_118 p_354->g_121 p_354->g_comm_values p_354->g_32 p_354->g_131 p_354->g_167 p_354->g_181 p_354->g_185 p_354->g_186 p_354->g_37 p_354->g_224
 * writes: p_354->g_51.f1 p_354->g_85 p_354->g_88 p_354->g_101 p_354->g_131 p_354->g_51.f0 p_354->g_118 p_354->g_205
 */
int8_t  func_42(uint32_t  p_43, uint32_t  p_44, struct S2 * p_354)
{ /* block id: 11 */
    VECTOR(int32_t, 4) l_65 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
    uint32_t *l_73 = &p_354->g_51.f1;
    int16_t *l_84 = &p_354->g_85;
    uint8_t **l_91[5][9][1] = {{{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54}},{{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54}},{{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54}},{{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54}},{{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54},{&p_354->g_54}}};
    uint8_t ***l_90 = &l_91[0][2][0];
    uint32_t *l_100 = &p_354->g_101;
    int32_t *l_215 = (void*)0;
    int32_t *l_216 = (void*)0;
    int32_t l_217 = (-1L);
    int32_t l_232 = 9L;
    int i, j, k;
    (*l_90) = func_56(((!p_44) && ((safe_mod_func_uint64_t_u_u((8UL | ((safe_mod_func_int16_t_s_s((((*l_73) = (safe_lshift_func_int16_t_s_s((((0UL ^ p_354->g_41.x) , ((*l_84) = (p_44 == (((VECTOR(int16_t, 8))(p_354->g_64.s3e0e7a75)).s6 || (((p_354->g_51.f0 ^ ((((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_65.xx)).xxyxxyyxyyyyyxxy)), ((VECTOR(int32_t, 2))(p_354->g_66.s45)).yyyxxyyxxxyxxyyx))).s9 , (l_65.w | func_67(p_354->g_66.s1, (safe_add_func_uint32_t_u_u((--(*l_73)), l_65.z)), p_43, p_354))) & 0x09EBL)) , 4294967295UL) <= p_43))))) & p_44), l_65.w))) , l_65.x), l_65.z)) == l_65.y)), p_354->g_33.s3)) <= p_354->g_66.s3)), p_354);
    l_217 = (safe_sub_func_uint64_t_u_u(p_354->g_38.s9, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(func_67((safe_rshift_func_uint8_t_u_s(p_354->g_33.s6, 3)), ((*l_100)++), (safe_lshift_func_int16_t_s_s(p_44, 4)), p_354), 0)) ^ (((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x5FD65E78L, (p_354->g_51.f2 && p_44), 0x70F736FAL, (safe_mod_func_uint32_t_u_u((0xC5L | (func_108(func_110(l_65.x, p_354), p_354) && p_354->g_131[1].f1)), p_354->g_38.s8)), 0x6CCEF58CL, l_65.x, 3L, 0x3172247DL)))).s60))), ((VECTOR(uint32_t, 2))(0x04B650EFL))))).hi <= p_43)), p_354->g_41.x))));
    for (p_354->g_51.f1 = 3; (p_354->g_51.f1 != 5); p_354->g_51.f1 = safe_add_func_uint8_t_u_u(p_354->g_51.f1, 6))
    { /* block id: 69 */
        uint32_t *l_220 = &p_354->g_131[1].f1;
        struct S0 l_221 = {0x48L,0xE4D0B5ABL,18446744073709551615UL};
        int32_t **l_230 = &p_354->g_88;
        int32_t *l_231[8][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        l_232 = (l_217 |= (((*l_220) = p_354->g_101) == ((l_221 , (safe_div_func_uint8_t_u_u(p_43, ((VECTOR(uint8_t, 8))(p_354->g_224.sc59992b2)).s4))) != ((p_354->g_185.x <= (safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_int16_t_s((((0xDEL <= ((safe_rshift_func_int16_t_s_s(((((&p_354->g_210[0][7][4] != (void*)0) , &l_216) == l_230) & p_354->g_121.s4), p_354->g_186.sa)) ^ FAKE_DIVERGE(p_354->group_1_offset, get_group_id(1), 10))) || 1L) | p_44))) == FAKE_DIVERGE(p_354->global_0_offset, get_global_id(0), 10)), (-1L)))) >= (-2L)))));
    }
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_54
 * writes:
 */
uint8_t * func_45(struct S0  p_46, uint32_t  p_47, uint8_t * p_48, int32_t  p_49, int8_t  p_50, struct S2 * p_354)
{ /* block id: 8 */
    return p_354->g_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_87
 * writes: p_354->g_88
 */
uint8_t ** func_56(int8_t  p_57, struct S2 * p_354)
{ /* block id: 24 */
    int32_t *l_86 = (void*)0;
    uint8_t **l_89 = &p_354->g_54;
    (*p_354->g_87) = l_86;
    return l_89;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_33 p_354->g_81 p_354->l_comm_values
 * writes:
 */
int8_t  func_67(int32_t  p_68, uint32_t  p_69, int8_t  p_70, struct S2 * p_354)
{ /* block id: 13 */
    int32_t *l_82 = (void*)0;
    int32_t l_83 = 0x66C7C9CAL;
    for (p_70 = (-23); (p_70 != (-27)); p_70--)
    { /* block id: 16 */
        p_68 = p_354->g_33.s7;
    }
    l_83 &= (p_68 = ((VECTOR(int32_t, 16))(p_354->g_81.xywyyyyzwzzwzyyw)).sa);
    return p_354->l_comm_values[(safe_mod_func_uint32_t_u_u(p_354->tid, 2))];
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_51.f1 p_354->g_51.f0 p_354->g_167 p_354->g_66 p_354->g_118 p_354->g_181 p_354->g_185 p_354->g_186 p_354->g_64 p_354->g_121 p_354->g_37
 * writes: p_354->g_51.f1 p_354->g_51.f0 p_354->g_131.f1 p_354->g_118 p_354->g_205
 */
int16_t  func_108(int16_t  p_109, struct S2 * p_354)
{ /* block id: 36 */
    int16_t l_144[5];
    int32_t *l_145 = (void*)0;
    int32_t l_146 = 0x17CFB3EDL;
    int32_t *l_147 = &l_146;
    int32_t *l_148[4];
    int8_t l_149[6];
    int32_t l_150 = 0x506B4248L;
    int64_t l_151 = 0x619DF5A9DCD68DE2L;
    uint8_t l_152 = 0xC2L;
    VECTOR(int64_t, 8) l_164 = (VECTOR(int64_t, 8))((-6L), (VECTOR(int64_t, 4))((-6L), (VECTOR(int64_t, 2))((-6L), 0x0D94B26CCCF155A4L), 0x0D94B26CCCF155A4L), 0x0D94B26CCCF155A4L, (-6L), 0x0D94B26CCCF155A4L);
    int8_t *l_176[10][2][8] = {{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}},{{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0},{&p_354->g_51.f0,&l_149[4],(void*)0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0,&p_354->g_51.f0}}};
    VECTOR(uint32_t, 4) l_177 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x03F1265FL), 0x03F1265FL);
    uint32_t *l_178 = (void*)0;
    uint32_t *l_179 = &p_354->g_51.f1;
    uint32_t *l_180 = &p_354->g_131[1].f1;
    VECTOR(int8_t, 16) l_182 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L), (VECTOR(int8_t, 2))((-1L), (-10L)), (VECTOR(int8_t, 2))((-1L), (-10L)), (-1L), (-10L), (-1L), (-10L));
    uint16_t *l_187[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_190[3];
    VECTOR(uint16_t, 8) l_201 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x3C89L), 0x3C89L), 0x3C89L, 1UL, 0x3C89L);
    uint32_t l_202 = 0x0DD1DF32L;
    uint32_t l_212 = 4294967291UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_144[i] = 0x15A9L;
    for (i = 0; i < 4; i++)
        l_148[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_149[i] = 0x4FL;
    for (i = 0; i < 3; i++)
        l_190[i] = (void*)0;
    l_152++;
    for (p_354->g_51.f1 = 29; (p_354->g_51.f1 == 32); p_354->g_51.f1++)
    { /* block id: 40 */
        int32_t *l_157 = (void*)0;
        int32_t **l_158 = &l_147;
        (*l_158) = l_157;
        for (p_354->g_51.f0 = 29; (p_354->g_51.f0 >= (-21)); p_354->g_51.f0 = safe_sub_func_uint32_t_u_u(p_354->g_51.f0, 5))
        { /* block id: 44 */
            uint32_t l_161 = 0x635642BDL;
            return l_161;
        }
    }
    if ((safe_div_func_uint16_t_u_u((((VECTOR(int64_t, 2))(l_164.s03)).even != ((p_354->g_118.z = (p_109 == (safe_mod_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(p_354->g_167.xyyz)).w >= (safe_div_func_uint16_t_u_u(p_109, (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((&p_354->g_85 == &p_109), 5)) | ((*l_180) = (FAKE_DIVERGE(p_354->global_1_offset, get_global_id(1), 10) < (((p_354->g_51.f0 |= p_354->g_66.s2) | 255UL) > (((VECTOR(uint32_t, 2))(l_177.xz)).odd != ((*l_179) ^= p_354->g_118.w)))))), 7)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x66L, ((VECTOR(int8_t, 2))(1L, 0x2FL)), ((VECTOR(int8_t, 2))(p_354->g_181.yx)), ((VECTOR(int8_t, 4))(p_109, ((VECTOR(int8_t, 2))(l_182.s6c)), 0x1FL)), (safe_rshift_func_int16_t_s_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(p_354->g_185.xxyx))))).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(p_354->g_186.se3fc)).zwwwyxxwzwywxywx, ((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 2))(0x05L, 0xD4L)).xxyxyyyy, (uint8_t)p_109))).s02)), 1UL)).wwxwzzwxywzyxwxx))), (uint8_t)0x90L, (uint8_t)p_109))).odd, ((VECTOR(uint8_t, 8))(254UL))))).s1360246757544167)))).s3e))), ((VECTOR(uint8_t, 2))(249UL))))).xyxxxxyx)).s5 != p_109), FAKE_DIVERGE(p_354->group_1_offset, get_group_id(1), 10))), p_354->g_66.s3, 0x6FL, 0x20L, ((VECTOR(int8_t, 2))((-1L))), (-1L))).sd9)).odd))))), 0x35AEL)))) | p_109)), p_109)))
    { /* block id: 52 */
        uint32_t l_191[9] = {0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL,0x0EB0DA8FL};
        int32_t **l_192 = &l_145;
        uint32_t l_193 = 0x8BE2C4E9L;
        int i;
        l_191[0] = (safe_mul_func_uint16_t_u_u(((void*)0 != l_190[0]), p_354->g_64.sc));
        (*l_192) = &l_146;
        l_193++;
    }
    else
    { /* block id: 56 */
        VECTOR(uint32_t, 4) l_196 = (VECTOR(uint32_t, 4))(0x7DFD5D40L, (VECTOR(uint32_t, 2))(0x7DFD5D40L, 0UL), 0UL);
        int32_t l_203 = 0x5A1DA1CFL;
        uint32_t *l_204 = &p_354->g_205;
        uint32_t *l_209 = &p_354->g_210[0][7][4];
        uint32_t **l_208 = &l_209;
        int32_t l_211 = 0x25E5609EL;
        uint16_t l_213 = 0UL;
        int32_t *l_214 = (void*)0;
        int i;
        l_214 = ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_196.yywzywwxxyxwxwzy)).sa1b3)).even)).even < (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((p_354->g_51.f1 | (3UL >= ((((VECTOR(uint16_t, 4))(l_201.s3764)).x | (((((FAKE_DIVERGE(p_354->global_0_offset, get_global_id(0), 10) & (l_203 = (l_202 ^= 4L))) , (((*l_204) = p_354->g_121.s1) , p_354->g_37.sc)) & (safe_div_func_uint64_t_u_u(((l_212 = (l_211 |= (((l_204 != ((*l_208) = l_179)) == p_354->g_181.y) ^ ((void*)0 == &p_354->g_51)))) ^ p_109), l_213))) & l_196.z) != p_109)) == 0x8BDE3FC7A0395139L))), p_354->g_66.s3)), 15))) , (void*)0);
    }
    return p_109;
}


/* ------------------------------------------ */
/* 
 * reads : p_354->g_87 p_354->g_88 p_354->g_112 p_354->g_118 p_354->g_121 p_354->g_66 p_354->g_33 p_354->g_comm_values p_354->g_32 p_354->g_131
 * writes: p_354->g_88 p_354->g_131
 */
int16_t  func_110(uint8_t  p_111, struct S2 * p_354)
{ /* block id: 29 */
    uint8_t l_117 = 250UL;
    uint8_t *l_122 = (void*)0;
    uint8_t *l_123 = &l_117;
    struct S0 l_126 = {1L,4294967295UL,0xA868270EC936351EL};
    struct S1 *l_132[8][5][1] = {{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}},{{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]},{&p_354->g_131[1]}}};
    int32_t *l_133 = (void*)0;
    int32_t *l_134 = (void*)0;
    int32_t *l_135 = (void*)0;
    int32_t *l_136 = (void*)0;
    int32_t *l_137[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t l_138 = 18446744073709551609UL;
    uint32_t l_141[9][10] = {{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL},{4294967293UL,4294967293UL,0x89E89AD7L,4294967294UL,0x42110810L,0x7B1FDA6AL,1UL,4294967295UL,1UL,0x7B1FDA6AL}};
    int i, j, k;
    (*p_354->g_112) = (*p_354->g_87);
    p_354->g_131[1] = (((safe_rshift_func_uint16_t_u_u(p_111, 13)) , p_111) , ((!((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 8))((safe_rshift_func_uint8_t_u_u(l_117, 3)), ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(p_354->g_118.yzwyxwzzzzyxyyxz)).sbf, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 0xEB7DL)), 0xEE13L, 0xC2C7L)).even, ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((((safe_lshift_func_uint8_t_u_s(((*l_123) ^= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_354->g_121.s0520267636055473)).s5b24)).y), 6)) & (((safe_mod_func_int8_t_s_s(((((l_126 , (((safe_sub_func_int64_t_s_s(((0x27A7L < p_354->g_66.s6) ^ p_111), p_354->g_33.s6)) == (safe_sub_func_uint16_t_u_u((((p_354->g_comm_values[p_354->tid] == p_354->g_comm_values[p_354->tid]) || (-1L)) >= l_126.f2), p_354->g_32.s8))) == p_111)) || l_126.f2) , (-9L)) ^ 0x35042E9F28033D0BL), l_126.f1)) , GROUP_DIVERGE(1, 1)) < l_126.f2)) ^ p_354->g_66.s6), ((VECTOR(int16_t, 2))(0x5A01L)), ((VECTOR(int16_t, 4))(0x2E3CL)), 0x1BF4L)))).s5573172473646763, ((VECTOR(int16_t, 16))(0x1733L))))).s1214)).wxywwxwx, ((VECTOR(int16_t, 8))(1L))))).lo)).even, (int16_t)p_111))).yxyyyyyy))).s13))))), ((VECTOR(uint16_t, 2))(0x7D55L))))), l_126.f0, l_117, 0xA437L, 0x7221L, 0xFFA7L)).s02, ((VECTOR(uint16_t, 2))(0x67BEL))))).odd) , p_354->g_131[1]));
    l_138++;
    ++l_141[3][8];
    return p_111;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S2 c_355;
    struct S2* p_354 = &c_355;
    struct S2 c_356 = {
        0x79L, // p_354->g_14
        0x89L, // p_354->g_19
        (VECTOR(int32_t, 16))(0x7C4B664FL, (VECTOR(int32_t, 4))(0x7C4B664FL, (VECTOR(int32_t, 2))(0x7C4B664FL, 0x54763C6DL), 0x54763C6DL), 0x54763C6DL, 0x7C4B664FL, 0x54763C6DL, (VECTOR(int32_t, 2))(0x7C4B664FL, 0x54763C6DL), (VECTOR(int32_t, 2))(0x7C4B664FL, 0x54763C6DL), 0x7C4B664FL, 0x54763C6DL, 0x7C4B664FL, 0x54763C6DL), // p_354->g_32
        (VECTOR(int32_t, 8))(0x46D23205L, (VECTOR(int32_t, 4))(0x46D23205L, (VECTOR(int32_t, 2))(0x46D23205L, (-1L)), (-1L)), (-1L), 0x46D23205L, (-1L)), // p_354->g_33
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x32L), 0x32L), 0x32L, 0L, 0x32L, (VECTOR(int8_t, 2))(0L, 0x32L), (VECTOR(int8_t, 2))(0L, 0x32L), 0L, 0x32L, 0L, 0x32L), // p_354->g_37
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int8_t, 2))((-1L), 0L), (VECTOR(int8_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L), // p_354->g_38
        (VECTOR(int8_t, 4))(0x2FL, (VECTOR(int8_t, 2))(0x2FL, (-4L)), (-4L)), // p_354->g_40
        (VECTOR(int8_t, 2))(0x59L, 8L), // p_354->g_41
        {4L,1UL,0x563844478C2BA284L}, // p_354->g_51
        (void*)0, // p_354->g_54
        (VECTOR(int16_t, 16))(0x7B31L, (VECTOR(int16_t, 4))(0x7B31L, (VECTOR(int16_t, 2))(0x7B31L, (-6L)), (-6L)), (-6L), 0x7B31L, (-6L), (VECTOR(int16_t, 2))(0x7B31L, (-6L)), (VECTOR(int16_t, 2))(0x7B31L, (-6L)), 0x7B31L, (-6L), 0x7B31L, (-6L)), // p_354->g_64
        (VECTOR(int32_t, 8))(0x09A65E11L, (VECTOR(int32_t, 4))(0x09A65E11L, (VECTOR(int32_t, 2))(0x09A65E11L, 1L), 1L), 1L, 0x09A65E11L, 1L), // p_354->g_66
        (void*)0, // p_354->g_78
        (void*)0, // p_354->g_79
        (void*)0, // p_354->g_80
        (VECTOR(int32_t, 4))(0x64C8D1EAL, (VECTOR(int32_t, 2))(0x64C8D1EAL, 1L), 1L), // p_354->g_81
        1L, // p_354->g_85
        (void*)0, // p_354->g_88
        &p_354->g_88, // p_354->g_87
        8UL, // p_354->g_101
        &p_354->g_88, // p_354->g_112
        (VECTOR(uint16_t, 4))(0xE5D2L, (VECTOR(uint16_t, 2))(0xE5D2L, 0xFB7CL), 0xFB7CL), // p_354->g_118
        (VECTOR(uint8_t, 8))(0xF4L, (VECTOR(uint8_t, 4))(0xF4L, (VECTOR(uint8_t, 2))(0xF4L, 0UL), 0UL), 0UL, 0xF4L, 0UL), // p_354->g_121
        {{0L,4294967289UL,0x2C957D00FE429114L,0x7C33E8CDL},{0L,4294967289UL,0x2C957D00FE429114L,0x7C33E8CDL},{0L,4294967289UL,0x2C957D00FE429114L,0x7C33E8CDL},{0L,4294967289UL,0x2C957D00FE429114L,0x7C33E8CDL}}, // p_354->g_131
        (VECTOR(uint32_t, 4))(0x3C2238E3L, (VECTOR(uint32_t, 2))(0x3C2238E3L, 0xC56D7985L), 0xC56D7985L), // p_354->g_167
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x54L), 0x54L), // p_354->g_181
        (VECTOR(uint8_t, 2))(255UL, 0x0CL), // p_354->g_185
        (VECTOR(uint8_t, 16))(0x56L, (VECTOR(uint8_t, 4))(0x56L, (VECTOR(uint8_t, 2))(0x56L, 9UL), 9UL), 9UL, 0x56L, 9UL, (VECTOR(uint8_t, 2))(0x56L, 9UL), (VECTOR(uint8_t, 2))(0x56L, 9UL), 0x56L, 9UL, 0x56L, 9UL), // p_354->g_186
        0xECE4B6B2L, // p_354->g_205
        {{{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L}},{{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L},{4294967295UL,0xA19C42E0L,0xFC78F7CEL,4294967295UL,0xCD7A1B21L,0xCD7A1B21L}}}, // p_354->g_210
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x39L), 0x39L), 0x39L, 7UL, 0x39L, (VECTOR(uint8_t, 2))(7UL, 0x39L), (VECTOR(uint8_t, 2))(7UL, 0x39L), 7UL, 0x39L, 7UL, 0x39L), // p_354->g_224
        {0x76L,0x2CF58681L,0xA47875CFD7D5077FL,0x22788B18L}, // p_354->g_235
        {&p_354->g_235,&p_354->g_235,&p_354->g_235}, // p_354->g_234
        (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x3CL), 0x3CL), 0x3CL, (-3L), 0x3CL, (VECTOR(int8_t, 2))((-3L), 0x3CL), (VECTOR(int8_t, 2))((-3L), 0x3CL), (-3L), 0x3CL, (-3L), 0x3CL), // p_354->g_246
        {(void*)0}, // p_354->g_249
        (VECTOR(int16_t, 2))(0x388AL, 1L), // p_354->g_253
        &p_354->g_88, // p_354->g_257
        (void*)0, // p_354->g_260
        &p_354->g_260, // p_354->g_259
        (VECTOR(int32_t, 2))(0x6B8C3FE8L, 7L), // p_354->g_269
        (VECTOR(int32_t, 8))(0x3C22E4D3L, (VECTOR(int32_t, 4))(0x3C22E4D3L, (VECTOR(int32_t, 2))(0x3C22E4D3L, 7L), 7L), 7L, 0x3C22E4D3L, 7L), // p_354->g_270
        (VECTOR(uint16_t, 4))(0x3913L, (VECTOR(uint16_t, 2))(0x3913L, 0x21ABL), 0x21ABL), // p_354->g_303
        0xB644CD104CEADAE3L, // p_354->g_308
        0x152F8D379353C931L, // p_354->g_332
        (void*)0, // p_354->g_342
        (void*)0, // p_354->g_347
        (void*)0, // p_354->g_349
        (void*)0, // p_354->g_351
        (void*)0, // p_354->g_352
        0x45EAB1A0L, // p_354->g_353
        0, // p_354->v_collective
        sequence_input[get_global_id(0)], // p_354->global_0_offset
        sequence_input[get_global_id(1)], // p_354->global_1_offset
        sequence_input[get_global_id(2)], // p_354->global_2_offset
        sequence_input[get_local_id(0)], // p_354->local_0_offset
        sequence_input[get_local_id(1)], // p_354->local_1_offset
        sequence_input[get_local_id(2)], // p_354->local_2_offset
        sequence_input[get_group_id(0)], // p_354->group_0_offset
        sequence_input[get_group_id(1)], // p_354->group_1_offset
        sequence_input[get_group_id(2)], // p_354->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_354->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_355 = c_356;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_354);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_354->g_14, "p_354->g_14", print_hash_value);
    transparent_crc(p_354->g_19, "p_354->g_19", print_hash_value);
    transparent_crc(p_354->g_32.s0, "p_354->g_32.s0", print_hash_value);
    transparent_crc(p_354->g_32.s1, "p_354->g_32.s1", print_hash_value);
    transparent_crc(p_354->g_32.s2, "p_354->g_32.s2", print_hash_value);
    transparent_crc(p_354->g_32.s3, "p_354->g_32.s3", print_hash_value);
    transparent_crc(p_354->g_32.s4, "p_354->g_32.s4", print_hash_value);
    transparent_crc(p_354->g_32.s5, "p_354->g_32.s5", print_hash_value);
    transparent_crc(p_354->g_32.s6, "p_354->g_32.s6", print_hash_value);
    transparent_crc(p_354->g_32.s7, "p_354->g_32.s7", print_hash_value);
    transparent_crc(p_354->g_32.s8, "p_354->g_32.s8", print_hash_value);
    transparent_crc(p_354->g_32.s9, "p_354->g_32.s9", print_hash_value);
    transparent_crc(p_354->g_32.sa, "p_354->g_32.sa", print_hash_value);
    transparent_crc(p_354->g_32.sb, "p_354->g_32.sb", print_hash_value);
    transparent_crc(p_354->g_32.sc, "p_354->g_32.sc", print_hash_value);
    transparent_crc(p_354->g_32.sd, "p_354->g_32.sd", print_hash_value);
    transparent_crc(p_354->g_32.se, "p_354->g_32.se", print_hash_value);
    transparent_crc(p_354->g_32.sf, "p_354->g_32.sf", print_hash_value);
    transparent_crc(p_354->g_33.s0, "p_354->g_33.s0", print_hash_value);
    transparent_crc(p_354->g_33.s1, "p_354->g_33.s1", print_hash_value);
    transparent_crc(p_354->g_33.s2, "p_354->g_33.s2", print_hash_value);
    transparent_crc(p_354->g_33.s3, "p_354->g_33.s3", print_hash_value);
    transparent_crc(p_354->g_33.s4, "p_354->g_33.s4", print_hash_value);
    transparent_crc(p_354->g_33.s5, "p_354->g_33.s5", print_hash_value);
    transparent_crc(p_354->g_33.s6, "p_354->g_33.s6", print_hash_value);
    transparent_crc(p_354->g_33.s7, "p_354->g_33.s7", print_hash_value);
    transparent_crc(p_354->g_37.s0, "p_354->g_37.s0", print_hash_value);
    transparent_crc(p_354->g_37.s1, "p_354->g_37.s1", print_hash_value);
    transparent_crc(p_354->g_37.s2, "p_354->g_37.s2", print_hash_value);
    transparent_crc(p_354->g_37.s3, "p_354->g_37.s3", print_hash_value);
    transparent_crc(p_354->g_37.s4, "p_354->g_37.s4", print_hash_value);
    transparent_crc(p_354->g_37.s5, "p_354->g_37.s5", print_hash_value);
    transparent_crc(p_354->g_37.s6, "p_354->g_37.s6", print_hash_value);
    transparent_crc(p_354->g_37.s7, "p_354->g_37.s7", print_hash_value);
    transparent_crc(p_354->g_37.s8, "p_354->g_37.s8", print_hash_value);
    transparent_crc(p_354->g_37.s9, "p_354->g_37.s9", print_hash_value);
    transparent_crc(p_354->g_37.sa, "p_354->g_37.sa", print_hash_value);
    transparent_crc(p_354->g_37.sb, "p_354->g_37.sb", print_hash_value);
    transparent_crc(p_354->g_37.sc, "p_354->g_37.sc", print_hash_value);
    transparent_crc(p_354->g_37.sd, "p_354->g_37.sd", print_hash_value);
    transparent_crc(p_354->g_37.se, "p_354->g_37.se", print_hash_value);
    transparent_crc(p_354->g_37.sf, "p_354->g_37.sf", print_hash_value);
    transparent_crc(p_354->g_38.s0, "p_354->g_38.s0", print_hash_value);
    transparent_crc(p_354->g_38.s1, "p_354->g_38.s1", print_hash_value);
    transparent_crc(p_354->g_38.s2, "p_354->g_38.s2", print_hash_value);
    transparent_crc(p_354->g_38.s3, "p_354->g_38.s3", print_hash_value);
    transparent_crc(p_354->g_38.s4, "p_354->g_38.s4", print_hash_value);
    transparent_crc(p_354->g_38.s5, "p_354->g_38.s5", print_hash_value);
    transparent_crc(p_354->g_38.s6, "p_354->g_38.s6", print_hash_value);
    transparent_crc(p_354->g_38.s7, "p_354->g_38.s7", print_hash_value);
    transparent_crc(p_354->g_38.s8, "p_354->g_38.s8", print_hash_value);
    transparent_crc(p_354->g_38.s9, "p_354->g_38.s9", print_hash_value);
    transparent_crc(p_354->g_38.sa, "p_354->g_38.sa", print_hash_value);
    transparent_crc(p_354->g_38.sb, "p_354->g_38.sb", print_hash_value);
    transparent_crc(p_354->g_38.sc, "p_354->g_38.sc", print_hash_value);
    transparent_crc(p_354->g_38.sd, "p_354->g_38.sd", print_hash_value);
    transparent_crc(p_354->g_38.se, "p_354->g_38.se", print_hash_value);
    transparent_crc(p_354->g_38.sf, "p_354->g_38.sf", print_hash_value);
    transparent_crc(p_354->g_40.x, "p_354->g_40.x", print_hash_value);
    transparent_crc(p_354->g_40.y, "p_354->g_40.y", print_hash_value);
    transparent_crc(p_354->g_40.z, "p_354->g_40.z", print_hash_value);
    transparent_crc(p_354->g_40.w, "p_354->g_40.w", print_hash_value);
    transparent_crc(p_354->g_41.x, "p_354->g_41.x", print_hash_value);
    transparent_crc(p_354->g_41.y, "p_354->g_41.y", print_hash_value);
    transparent_crc(p_354->g_51.f0, "p_354->g_51.f0", print_hash_value);
    transparent_crc(p_354->g_51.f1, "p_354->g_51.f1", print_hash_value);
    transparent_crc(p_354->g_51.f2, "p_354->g_51.f2", print_hash_value);
    transparent_crc(p_354->g_64.s0, "p_354->g_64.s0", print_hash_value);
    transparent_crc(p_354->g_64.s1, "p_354->g_64.s1", print_hash_value);
    transparent_crc(p_354->g_64.s2, "p_354->g_64.s2", print_hash_value);
    transparent_crc(p_354->g_64.s3, "p_354->g_64.s3", print_hash_value);
    transparent_crc(p_354->g_64.s4, "p_354->g_64.s4", print_hash_value);
    transparent_crc(p_354->g_64.s5, "p_354->g_64.s5", print_hash_value);
    transparent_crc(p_354->g_64.s6, "p_354->g_64.s6", print_hash_value);
    transparent_crc(p_354->g_64.s7, "p_354->g_64.s7", print_hash_value);
    transparent_crc(p_354->g_64.s8, "p_354->g_64.s8", print_hash_value);
    transparent_crc(p_354->g_64.s9, "p_354->g_64.s9", print_hash_value);
    transparent_crc(p_354->g_64.sa, "p_354->g_64.sa", print_hash_value);
    transparent_crc(p_354->g_64.sb, "p_354->g_64.sb", print_hash_value);
    transparent_crc(p_354->g_64.sc, "p_354->g_64.sc", print_hash_value);
    transparent_crc(p_354->g_64.sd, "p_354->g_64.sd", print_hash_value);
    transparent_crc(p_354->g_64.se, "p_354->g_64.se", print_hash_value);
    transparent_crc(p_354->g_64.sf, "p_354->g_64.sf", print_hash_value);
    transparent_crc(p_354->g_66.s0, "p_354->g_66.s0", print_hash_value);
    transparent_crc(p_354->g_66.s1, "p_354->g_66.s1", print_hash_value);
    transparent_crc(p_354->g_66.s2, "p_354->g_66.s2", print_hash_value);
    transparent_crc(p_354->g_66.s3, "p_354->g_66.s3", print_hash_value);
    transparent_crc(p_354->g_66.s4, "p_354->g_66.s4", print_hash_value);
    transparent_crc(p_354->g_66.s5, "p_354->g_66.s5", print_hash_value);
    transparent_crc(p_354->g_66.s6, "p_354->g_66.s6", print_hash_value);
    transparent_crc(p_354->g_66.s7, "p_354->g_66.s7", print_hash_value);
    transparent_crc(p_354->g_81.x, "p_354->g_81.x", print_hash_value);
    transparent_crc(p_354->g_81.y, "p_354->g_81.y", print_hash_value);
    transparent_crc(p_354->g_81.z, "p_354->g_81.z", print_hash_value);
    transparent_crc(p_354->g_81.w, "p_354->g_81.w", print_hash_value);
    transparent_crc(p_354->g_85, "p_354->g_85", print_hash_value);
    transparent_crc(p_354->g_101, "p_354->g_101", print_hash_value);
    transparent_crc(p_354->g_118.x, "p_354->g_118.x", print_hash_value);
    transparent_crc(p_354->g_118.y, "p_354->g_118.y", print_hash_value);
    transparent_crc(p_354->g_118.z, "p_354->g_118.z", print_hash_value);
    transparent_crc(p_354->g_118.w, "p_354->g_118.w", print_hash_value);
    transparent_crc(p_354->g_121.s0, "p_354->g_121.s0", print_hash_value);
    transparent_crc(p_354->g_121.s1, "p_354->g_121.s1", print_hash_value);
    transparent_crc(p_354->g_121.s2, "p_354->g_121.s2", print_hash_value);
    transparent_crc(p_354->g_121.s3, "p_354->g_121.s3", print_hash_value);
    transparent_crc(p_354->g_121.s4, "p_354->g_121.s4", print_hash_value);
    transparent_crc(p_354->g_121.s5, "p_354->g_121.s5", print_hash_value);
    transparent_crc(p_354->g_121.s6, "p_354->g_121.s6", print_hash_value);
    transparent_crc(p_354->g_121.s7, "p_354->g_121.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_354->g_131[i].f0, "p_354->g_131[i].f0", print_hash_value);
        transparent_crc(p_354->g_131[i].f1, "p_354->g_131[i].f1", print_hash_value);
        transparent_crc(p_354->g_131[i].f2, "p_354->g_131[i].f2", print_hash_value);
        transparent_crc(p_354->g_131[i].f3, "p_354->g_131[i].f3", print_hash_value);

    }
    transparent_crc(p_354->g_167.x, "p_354->g_167.x", print_hash_value);
    transparent_crc(p_354->g_167.y, "p_354->g_167.y", print_hash_value);
    transparent_crc(p_354->g_167.z, "p_354->g_167.z", print_hash_value);
    transparent_crc(p_354->g_167.w, "p_354->g_167.w", print_hash_value);
    transparent_crc(p_354->g_181.x, "p_354->g_181.x", print_hash_value);
    transparent_crc(p_354->g_181.y, "p_354->g_181.y", print_hash_value);
    transparent_crc(p_354->g_181.z, "p_354->g_181.z", print_hash_value);
    transparent_crc(p_354->g_181.w, "p_354->g_181.w", print_hash_value);
    transparent_crc(p_354->g_185.x, "p_354->g_185.x", print_hash_value);
    transparent_crc(p_354->g_185.y, "p_354->g_185.y", print_hash_value);
    transparent_crc(p_354->g_186.s0, "p_354->g_186.s0", print_hash_value);
    transparent_crc(p_354->g_186.s1, "p_354->g_186.s1", print_hash_value);
    transparent_crc(p_354->g_186.s2, "p_354->g_186.s2", print_hash_value);
    transparent_crc(p_354->g_186.s3, "p_354->g_186.s3", print_hash_value);
    transparent_crc(p_354->g_186.s4, "p_354->g_186.s4", print_hash_value);
    transparent_crc(p_354->g_186.s5, "p_354->g_186.s5", print_hash_value);
    transparent_crc(p_354->g_186.s6, "p_354->g_186.s6", print_hash_value);
    transparent_crc(p_354->g_186.s7, "p_354->g_186.s7", print_hash_value);
    transparent_crc(p_354->g_186.s8, "p_354->g_186.s8", print_hash_value);
    transparent_crc(p_354->g_186.s9, "p_354->g_186.s9", print_hash_value);
    transparent_crc(p_354->g_186.sa, "p_354->g_186.sa", print_hash_value);
    transparent_crc(p_354->g_186.sb, "p_354->g_186.sb", print_hash_value);
    transparent_crc(p_354->g_186.sc, "p_354->g_186.sc", print_hash_value);
    transparent_crc(p_354->g_186.sd, "p_354->g_186.sd", print_hash_value);
    transparent_crc(p_354->g_186.se, "p_354->g_186.se", print_hash_value);
    transparent_crc(p_354->g_186.sf, "p_354->g_186.sf", print_hash_value);
    transparent_crc(p_354->g_205, "p_354->g_205", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_354->g_210[i][j][k], "p_354->g_210[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_354->g_224.s0, "p_354->g_224.s0", print_hash_value);
    transparent_crc(p_354->g_224.s1, "p_354->g_224.s1", print_hash_value);
    transparent_crc(p_354->g_224.s2, "p_354->g_224.s2", print_hash_value);
    transparent_crc(p_354->g_224.s3, "p_354->g_224.s3", print_hash_value);
    transparent_crc(p_354->g_224.s4, "p_354->g_224.s4", print_hash_value);
    transparent_crc(p_354->g_224.s5, "p_354->g_224.s5", print_hash_value);
    transparent_crc(p_354->g_224.s6, "p_354->g_224.s6", print_hash_value);
    transparent_crc(p_354->g_224.s7, "p_354->g_224.s7", print_hash_value);
    transparent_crc(p_354->g_224.s8, "p_354->g_224.s8", print_hash_value);
    transparent_crc(p_354->g_224.s9, "p_354->g_224.s9", print_hash_value);
    transparent_crc(p_354->g_224.sa, "p_354->g_224.sa", print_hash_value);
    transparent_crc(p_354->g_224.sb, "p_354->g_224.sb", print_hash_value);
    transparent_crc(p_354->g_224.sc, "p_354->g_224.sc", print_hash_value);
    transparent_crc(p_354->g_224.sd, "p_354->g_224.sd", print_hash_value);
    transparent_crc(p_354->g_224.se, "p_354->g_224.se", print_hash_value);
    transparent_crc(p_354->g_224.sf, "p_354->g_224.sf", print_hash_value);
    transparent_crc(p_354->g_235.f0, "p_354->g_235.f0", print_hash_value);
    transparent_crc(p_354->g_235.f1, "p_354->g_235.f1", print_hash_value);
    transparent_crc(p_354->g_235.f2, "p_354->g_235.f2", print_hash_value);
    transparent_crc(p_354->g_235.f3, "p_354->g_235.f3", print_hash_value);
    transparent_crc(p_354->g_246.s0, "p_354->g_246.s0", print_hash_value);
    transparent_crc(p_354->g_246.s1, "p_354->g_246.s1", print_hash_value);
    transparent_crc(p_354->g_246.s2, "p_354->g_246.s2", print_hash_value);
    transparent_crc(p_354->g_246.s3, "p_354->g_246.s3", print_hash_value);
    transparent_crc(p_354->g_246.s4, "p_354->g_246.s4", print_hash_value);
    transparent_crc(p_354->g_246.s5, "p_354->g_246.s5", print_hash_value);
    transparent_crc(p_354->g_246.s6, "p_354->g_246.s6", print_hash_value);
    transparent_crc(p_354->g_246.s7, "p_354->g_246.s7", print_hash_value);
    transparent_crc(p_354->g_246.s8, "p_354->g_246.s8", print_hash_value);
    transparent_crc(p_354->g_246.s9, "p_354->g_246.s9", print_hash_value);
    transparent_crc(p_354->g_246.sa, "p_354->g_246.sa", print_hash_value);
    transparent_crc(p_354->g_246.sb, "p_354->g_246.sb", print_hash_value);
    transparent_crc(p_354->g_246.sc, "p_354->g_246.sc", print_hash_value);
    transparent_crc(p_354->g_246.sd, "p_354->g_246.sd", print_hash_value);
    transparent_crc(p_354->g_246.se, "p_354->g_246.se", print_hash_value);
    transparent_crc(p_354->g_246.sf, "p_354->g_246.sf", print_hash_value);
    transparent_crc(p_354->g_253.x, "p_354->g_253.x", print_hash_value);
    transparent_crc(p_354->g_253.y, "p_354->g_253.y", print_hash_value);
    transparent_crc(p_354->g_269.x, "p_354->g_269.x", print_hash_value);
    transparent_crc(p_354->g_269.y, "p_354->g_269.y", print_hash_value);
    transparent_crc(p_354->g_270.s0, "p_354->g_270.s0", print_hash_value);
    transparent_crc(p_354->g_270.s1, "p_354->g_270.s1", print_hash_value);
    transparent_crc(p_354->g_270.s2, "p_354->g_270.s2", print_hash_value);
    transparent_crc(p_354->g_270.s3, "p_354->g_270.s3", print_hash_value);
    transparent_crc(p_354->g_270.s4, "p_354->g_270.s4", print_hash_value);
    transparent_crc(p_354->g_270.s5, "p_354->g_270.s5", print_hash_value);
    transparent_crc(p_354->g_270.s6, "p_354->g_270.s6", print_hash_value);
    transparent_crc(p_354->g_270.s7, "p_354->g_270.s7", print_hash_value);
    transparent_crc(p_354->g_303.x, "p_354->g_303.x", print_hash_value);
    transparent_crc(p_354->g_303.y, "p_354->g_303.y", print_hash_value);
    transparent_crc(p_354->g_303.z, "p_354->g_303.z", print_hash_value);
    transparent_crc(p_354->g_303.w, "p_354->g_303.w", print_hash_value);
    transparent_crc(p_354->g_308, "p_354->g_308", print_hash_value);
    transparent_crc(p_354->g_332, "p_354->g_332", print_hash_value);
    transparent_crc(p_354->g_353, "p_354->g_353", print_hash_value);
    transparent_crc(p_354->v_collective, "p_354->v_collective", print_hash_value);
    transparent_crc(p_354->l_comm_values[get_linear_local_id()], "p_354->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_354->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_354->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
