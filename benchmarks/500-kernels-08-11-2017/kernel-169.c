// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 42,60,1 -l 1,30,1
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

__constant uint32_t permutations[10][30] = {
{18,13,26,8,15,10,22,16,23,3,6,5,20,12,9,17,24,14,7,4,0,25,27,21,2,19,11,29,28,1}, // permutation 0
{15,0,25,1,26,3,7,24,20,10,16,23,27,12,17,6,21,29,28,4,9,8,19,22,18,14,11,13,5,2}, // permutation 1
{10,29,19,13,20,12,25,9,8,1,6,21,3,11,5,15,22,16,0,26,17,27,4,7,18,23,28,14,2,24}, // permutation 2
{12,5,6,2,24,0,25,4,26,21,27,1,22,8,11,3,29,15,16,14,19,20,18,13,10,17,7,9,28,23}, // permutation 3
{5,3,13,7,27,11,9,28,8,14,16,18,29,23,22,10,24,6,15,1,4,19,21,2,26,20,25,12,0,17}, // permutation 4
{20,11,5,6,12,29,15,0,23,14,22,18,9,16,19,4,8,7,28,25,27,3,24,10,26,13,17,1,2,21}, // permutation 5
{27,16,9,6,21,20,3,28,18,11,13,7,5,0,4,10,8,23,24,29,14,15,12,26,19,1,17,25,2,22}, // permutation 6
{16,0,21,3,17,12,10,23,5,7,25,2,4,6,22,1,14,11,15,29,26,19,20,27,28,9,13,18,24,8}, // permutation 7
{1,21,18,11,10,20,19,23,9,24,12,28,13,4,29,26,3,7,5,22,17,16,14,27,6,15,25,8,2,0}, // permutation 8
{27,14,12,21,8,1,11,23,10,4,2,22,25,9,13,17,19,18,24,15,0,28,6,5,16,20,29,26,7,3} // permutation 9
};

// Seed: 3896600478

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

struct S1 {
    int32_t g_10[7][3][3];
    int32_t *g_9;
    volatile VECTOR(int8_t, 2) g_15;
    VECTOR(int32_t, 8) g_16;
    uint32_t g_24;
    VECTOR(uint32_t, 8) g_62;
    VECTOR(uint32_t, 2) g_63;
    int64_t *g_78;
    uint8_t g_87;
    VECTOR(int16_t, 4) g_90;
    volatile int64_t g_104;
    volatile int64_t *g_103;
    int32_t g_124;
    VECTOR(int32_t, 8) g_136;
    VECTOR(uint16_t, 16) g_142;
    int8_t g_147;
    int8_t *g_146;
    VECTOR(int8_t, 8) g_171;
    VECTOR(int64_t, 4) g_174;
    VECTOR(int64_t, 8) g_176;
    int32_t g_188;
    uint64_t g_190;
    int64_t g_193;
    VECTOR(int32_t, 4) g_220;
    VECTOR(uint16_t, 16) g_221;
    VECTOR(int64_t, 8) g_233;
    int32_t *g_312[10][1];
    volatile uint32_t g_316;
    volatile uint32_t *g_315;
    VECTOR(int8_t, 8) g_342;
    VECTOR(int16_t, 4) g_352;
    VECTOR(int16_t, 2) g_359;
    VECTOR(int16_t, 4) g_360;
    VECTOR(int16_t, 8) g_361;
    VECTOR(int32_t, 16) g_384;
    VECTOR(int32_t, 4) g_385;
    VECTOR(int32_t, 2) g_388;
    VECTOR(int32_t, 4) g_390;
    volatile uint16_t *g_410;
    VECTOR(int16_t, 4) g_413;
    VECTOR(int32_t, 4) g_422;
    VECTOR(int16_t, 16) g_473;
    VECTOR(int16_t, 8) g_474;
    VECTOR(int16_t, 2) g_475;
    uint64_t g_478;
    int32_t g_520[9];
    uint64_t g_573;
    uint64_t * volatile * volatile g_584;
    uint8_t *g_594;
    uint32_t *g_611;
    volatile int16_t * volatile g_626;
    volatile int16_t * volatile *g_625;
    int32_t ** volatile g_631;
    uint16_t g_651;
    int64_t **g_657;
    int64_t *** volatile g_656;
    volatile VECTOR(uint8_t, 8) g_698;
    int16_t *g_727;
    int16_t **g_726;
    volatile uint32_t * volatile *g_808[9];
    volatile uint32_t * volatile ** volatile g_807;
    uint32_t g_907;
    VECTOR(uint16_t, 2) g_914;
    VECTOR(uint16_t, 2) g_922;
    int32_t ** volatile g_952;
    int32_t ** volatile g_953;
    int8_t g_965;
    int64_t g_969;
    union U0 g_972;
    union U0 *g_974;
    union U0 ** volatile g_973;
    volatile VECTOR(uint64_t, 8) g_998;
    uint16_t *g_1043;
    VECTOR(int8_t, 8) g_1045;
    volatile VECTOR(uint8_t, 2) g_1046;
    VECTOR(int16_t, 16) g_1052;
    VECTOR(int16_t, 8) g_1053;
    VECTOR(int8_t, 8) g_1058;
    VECTOR(int8_t, 8) g_1061;
    VECTOR(int8_t, 16) g_1154;
    volatile VECTOR(int8_t, 4) g_1157;
    VECTOR(int32_t, 2) g_1173;
    volatile VECTOR(int32_t, 8) g_1203;
    VECTOR(int16_t, 16) g_1216;
    volatile VECTOR(int16_t, 2) g_1217;
    VECTOR(uint64_t, 16) g_1233;
    union U0 g_1237;
    VECTOR(uint16_t, 16) g_1244;
    union U0 ** volatile g_1256;
    int64_t g_1307;
    volatile VECTOR(int32_t, 8) g_1331;
    volatile uint32_t g_1332;
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
uint64_t  func_1(struct S1 * p_1342);
int32_t * func_2(uint64_t  p_3, int32_t  p_4, int32_t * p_5, int64_t  p_6, int64_t  p_7, struct S1 * p_1342);
int64_t ** func_18(uint32_t  p_19, uint32_t  p_20, int32_t * p_21, int32_t  p_22, struct S1 * p_1342);
int64_t ** func_36(int32_t  p_37, int32_t  p_38, int64_t  p_39, int32_t * p_40, struct S1 * p_1342);
int32_t  func_45(int64_t * p_46, int32_t * p_47, int64_t ** p_48, struct S1 * p_1342);
int64_t * func_49(uint64_t  p_50, int8_t  p_51, int32_t  p_52, int32_t  p_53, struct S1 * p_1342);
uint32_t * func_56(int16_t  p_57, int64_t  p_58, struct S1 * p_1342);
int32_t  func_65(int16_t  p_66, struct S1 * p_1342);
uint32_t  func_73(int64_t * p_74, int32_t  p_75, uint16_t  p_76, uint32_t  p_77, struct S1 * p_1342);
uint16_t  func_99(uint32_t  p_100, uint32_t  p_101, struct S1 * p_1342);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1342->g_9 p_1342->g_15 p_1342->l_comm_values p_1342->g_16 p_1342->g_10 p_1342->g_62 p_1342->g_63 p_1342->g_78 p_1342->g_comm_values p_1342->g_87 p_1342->g_90 p_1342->g_103 p_1342->g_136 p_1342->g_142 p_1342->g_146 p_1342->g_147 p_1342->g_171 p_1342->g_174 p_1342->g_176 p_1342->g_188 p_1342->g_190 p_1342->g_193 p_1342->g_220 p_1342->g_221 p_1342->g_233 p_1342->g_315 p_1342->g_342 p_1342->g_352 p_1342->g_359 p_1342->g_360 p_1342->g_361 p_1342->g_384 p_1342->g_385 p_1342->g_388 p_1342->g_390 p_1342->g_124 p_1342->g_410 p_1342->g_413 p_1342->g_422 p_1342->g_473 p_1342->g_474 p_1342->g_475 p_1342->g_478 p_1342->g_24 p_1342->g_520 p_1342->g_573 p_1342->g_584 p_1342->g_625 p_1342->g_631 p_1342->g_651 p_1342->g_656 p_1342->g_952 p_1342->g_316 p_1342->g_611 p_1342->g_1233 p_1342->g_594 p_1342->g_1216 p_1342->g_1331 p_1342->g_1332
 * writes: p_1342->l_comm_values p_1342->g_24 p_1342->g_87 p_1342->g_78 p_1342->g_124 p_1342->g_16 p_1342->g_147 p_1342->g_190 p_1342->g_193 p_1342->g_221 p_1342->g_312 p_1342->g_142 p_1342->g_176 p_1342->g_233 p_1342->g_478 p_1342->g_174 p_1342->g_520 p_1342->g_413 p_1342->g_573 p_1342->g_594 p_1342->g_188 p_1342->g_611 p_1342->g_657 p_1342->g_171 p_1342->g_10 p_1342->g_359 p_1342->g_651 p_1342->g_914 p_1342->g_361 p_1342->g_1307 p_1342->g_1332
 */
uint64_t  func_1(struct S1 * p_1342)
{ /* block id: 4 */
    uint32_t l_8 = 1UL;
    VECTOR(int32_t, 8) l_11 = (VECTOR(int32_t, 8))(0x2167C28CL, (VECTOR(int32_t, 4))(0x2167C28CL, (VECTOR(int32_t, 2))(0x2167C28CL, (-1L)), (-1L)), (-1L), 0x2167C28CL, (-1L));
    int32_t *l_12 = &p_1342->g_10[2][1][0];
    int64_t *l_17 = (void*)0;
    int32_t **l_1258 = &l_12;
    uint16_t *l_1286 = (void*)0;
    int8_t *l_1287[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_1288[3][5][10] = {{{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L}},{{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L}},{{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L},{6L,1L,1L,6L,6L,1L,1L,6L,6L,1L}}};
    int16_t *l_1289 = (void*)0;
    int16_t *l_1290 = (void*)0;
    int16_t *l_1291 = (void*)0;
    int16_t *l_1292 = (void*)0;
    int16_t *l_1293 = (void*)0;
    int16_t *l_1294 = (void*)0;
    int16_t *l_1295 = (void*)0;
    int16_t *l_1296 = (void*)0;
    int16_t *l_1297 = (void*)0;
    int16_t *l_1298[1];
    uint32_t l_1299 = 4294967295UL;
    uint16_t *l_1300 = (void*)0;
    uint16_t *l_1301[3];
    uint32_t l_1302 = 0xD2E3B625L;
    int32_t *l_1303 = (void*)0;
    int32_t *l_1304 = (void*)0;
    int32_t *l_1305[5][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint16_t l_1306 = 0xC67FL;
    VECTOR(int32_t, 16) l_1318 = (VECTOR(int32_t, 16))(0x45E7B47CL, (VECTOR(int32_t, 4))(0x45E7B47CL, (VECTOR(int32_t, 2))(0x45E7B47CL, 2L), 2L), 2L, 0x45E7B47CL, 2L, (VECTOR(int32_t, 2))(0x45E7B47CL, 2L), (VECTOR(int32_t, 2))(0x45E7B47CL, 2L), 0x45E7B47CL, 2L, 0x45E7B47CL, 2L);
    int32_t l_1330 = (-1L);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1298[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_1301[i] = (void*)0;
    (*l_1258) = func_2(l_8, (l_11.s0 &= ((void*)0 != p_1342->g_9)), l_12, (p_1342->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1342->tid, 30))] = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_1342->g_15.yxxxyyxy)).s7, (p_1342->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1342->tid, 30))] && ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(p_1342->g_16.s77222324)), ((VECTOR(int32_t, 2))(8L, 0x47BA3F30L)).xxyyxxyy))).s7)))), (*l_12), p_1342);
    if ((p_1342->g_1307 = (l_1306 |= ((safe_mod_func_int32_t_s_s((((**l_1258) , ((*l_1258) == (*l_1258))) , (safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((+(((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_u((*l_12), 2)))) , ((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((safe_mul_func_int16_t_s_s((p_1342->g_361.s2 = (safe_mul_func_uint16_t_u_u((p_1342->g_914.y = (p_1342->g_651 ^= ((((*p_1342->g_315) != ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(((safe_div_func_int16_t_s_s((p_1342->g_359.y |= ((**l_1258) = (((((*p_1342->g_611)++) & (**l_1258)) >= ((((((VECTOR(int16_t, 4))(((safe_rshift_func_uint16_t_u_u((((((p_1342->g_1233.sc , (p_1342->g_171.s2 |= (safe_mod_func_uint8_t_u_u(((*p_1342->g_146) | ((void*)0 != l_1286)), (*p_1342->g_146))))) && (*p_1342->g_594)) & l_1288[2][2][0]) , &l_1288[2][2][0]) == (void*)0), 8)) >= 0x44BCFD35L), 0x3DD8L, (-1L), 0x1561L)).y , &p_1342->g_657) != &p_1342->g_657) , (*p_1342->g_146)) , p_1342->g_1216.sa)) && 0x71E323E9L))), p_1342->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1342->tid, 30))])) == (-1L)), ((VECTOR(uint32_t, 4))(1UL)), l_1299, ((VECTOR(uint32_t, 2))(0xF3114AE2L)), ((VECTOR(uint32_t, 4))(0x0D3AAA87L)), 0x0C64D563L, (**l_1258), 1UL, 0x4848802AL)).sff11, (uint32_t)(*p_1342->g_611)))).x) >= p_1342->g_233.s2) >= (*p_1342->g_594)))), 0x598DL))), 0x43C2L)) == 0x692AC040L) || (**l_1258)), l_11.s5)), (-1L))) , 0x5CL)), l_1288[1][3][8])), 0x687BL, ((VECTOR(int16_t, 4))(9L)), 0x40EAL, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 2))((-1L))), (*l_12), 0L, 0x3FD4L)).lo)).odd)).yyzwzxwzwwxyxwzw)).s3 >= l_8) , (*l_12)) < 0x3A81L)), l_1288[2][2][0])) != l_1288[0][2][1]), p_1342->g_193))), l_1299)) | l_1302))))
    { /* block id: 474 */
        uint8_t l_1314 = 1UL;
        uint16_t l_1320 = 65529UL;
        int32_t l_1329[2][10] = {{0x66443D6EL,0x66443D6EL,0x04647C1BL,0x15826C66L,0x6DC60239L,0x15826C66L,0x04647C1BL,0x66443D6EL,0x66443D6EL,0x04647C1BL},{0x66443D6EL,0x66443D6EL,0x04647C1BL,0x15826C66L,0x6DC60239L,0x15826C66L,0x04647C1BL,0x66443D6EL,0x66443D6EL,0x04647C1BL}};
        int i, j;
        for (p_1342->g_573 = 5; (p_1342->g_573 < 19); p_1342->g_573 = safe_add_func_int8_t_s_s(p_1342->g_573, 4))
        { /* block id: 477 */
            int64_t *l_1310 = (void*)0;
            int64_t *l_1311 = &p_1342->g_193;
            int32_t l_1315 = 0x1C74EA21L;
            VECTOR(int32_t, 16) l_1319 = (VECTOR(int32_t, 16))(0x14C468E0L, (VECTOR(int32_t, 4))(0x14C468E0L, (VECTOR(int32_t, 2))(0x14C468E0L, 0x7467777BL), 0x7467777BL), 0x7467777BL, 0x14C468E0L, 0x7467777BL, (VECTOR(int32_t, 2))(0x14C468E0L, 0x7467777BL), (VECTOR(int32_t, 2))(0x14C468E0L, 0x7467777BL), 0x14C468E0L, 0x7467777BL, 0x14C468E0L, 0x7467777BL);
            uint8_t *l_1327 = &l_1314;
            int32_t *l_1328[10][7][3] = {{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}},{{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0},{(void*)0,&p_1342->g_188,(void*)0}}};
            int i, j, k;
            l_1329[0][2] = ((**p_1342->g_952) |= ((p_1342->g_359.y = (((*l_1311) &= ((VECTOR(int64_t, 2))(0L, 5L)).hi) , 1L)) ^ ((safe_lshift_func_int8_t_s_s((*p_1342->g_146), 0)) > (l_1314 >= ((l_1315 , (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1318.s57)), ((VECTOR(int32_t, 2))(0x4F56AE0DL, 0x46FBEBD7L)), ((VECTOR(int32_t, 4))(l_1319.s95bc)))).s1 >= l_1320) && (((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0UL, (safe_rshift_func_int16_t_s_u((&l_1314 != l_1327), 4)))), ((*p_1342->g_594) ^= (l_1328[0][1][1] != (void*)0)))) < (*p_1342->g_146)) < 255UL)) > p_1342->g_384.s6)) != (*p_1342->g_611))))));
            if (l_1330)
                break;
            if (l_1314)
                break;
        }
        l_1329[1][3] &= ((VECTOR(int32_t, 8))(p_1342->g_1331.s14201461)).s4;
        (*l_1258) = (*l_1258);
        ++p_1342->g_1332;
    }
    else
    { /* block id: 489 */
        int32_t *l_1337 = (void*)0;
        uint8_t l_1339 = 0x7BL;
        for (p_1342->g_124 = 0; (p_1342->g_124 > (-27)); --p_1342->g_124)
        { /* block id: 492 */
            int64_t l_1338 = 3L;
            (*l_1258) = l_1337;
            l_1339--;
        }
        (*p_1342->g_9) = 1L;
    }
    (*l_1258) = (*l_1258);
    return p_1342->g_342.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_9 p_1342->g_10 p_1342->g_15 p_1342->g_62 p_1342->g_63 p_1342->g_78 p_1342->g_comm_values p_1342->g_87 p_1342->g_90 p_1342->g_103 p_1342->g_16 p_1342->g_136 p_1342->g_142 p_1342->g_146 p_1342->g_147 p_1342->g_171 p_1342->g_174 p_1342->g_176 p_1342->g_188 p_1342->g_190 p_1342->g_193 p_1342->g_220 p_1342->g_221 p_1342->g_233 p_1342->g_315 p_1342->g_342 p_1342->g_352 p_1342->g_359 p_1342->g_360 p_1342->g_361 p_1342->g_384 p_1342->g_385 p_1342->g_388 p_1342->g_390 p_1342->g_124 p_1342->g_410 p_1342->g_413 p_1342->g_422 p_1342->g_473 p_1342->g_474 p_1342->g_475 p_1342->g_478 p_1342->g_24 p_1342->g_520 p_1342->g_573 p_1342->g_584 p_1342->g_625 p_1342->g_631 p_1342->g_651 p_1342->g_656 p_1342->g_952
 * writes: p_1342->g_24 p_1342->g_87 p_1342->g_78 p_1342->g_124 p_1342->g_16 p_1342->g_147 p_1342->g_190 p_1342->g_193 p_1342->g_221 p_1342->g_312 p_1342->g_142 p_1342->g_176 p_1342->g_233 p_1342->g_478 p_1342->g_174 p_1342->g_520 p_1342->g_413 p_1342->g_573 p_1342->g_594 p_1342->g_188 p_1342->g_611 p_1342->g_657
 */
int32_t * func_2(uint64_t  p_3, int32_t  p_4, int32_t * p_5, int64_t  p_6, int64_t  p_7, struct S1 * p_1342)
{ /* block id: 7 */
    uint32_t *l_23 = &p_1342->g_24;
    int32_t l_25 = 0x62138B36L;
    int32_t *l_664 = (void*)0;
    int32_t *l_665 = (void*)0;
    int32_t *l_666[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_667 = 0x65FEB72BL;
    VECTOR(int16_t, 2) l_668 = (VECTOR(int16_t, 2))(0x08B3L, 0L);
    int8_t l_669 = (-8L);
    int8_t l_670 = 3L;
    int16_t l_671 = 0x3967L;
    int32_t l_672 = 0x6278B65EL;
    int32_t l_673 = 0x490D2CABL;
    uint64_t l_674 = 0x220590823AE9E9CCL;
    VECTOR(uint8_t, 4) l_699 = (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 255UL), 255UL);
    int16_t **l_731[2];
    uint8_t **l_738[7] = {&p_1342->g_594,&p_1342->g_594,&p_1342->g_594,&p_1342->g_594,&p_1342->g_594,&p_1342->g_594,&p_1342->g_594};
    uint32_t **l_810 = &p_1342->g_611;
    uint32_t ***l_809 = &l_810;
    VECTOR(uint64_t, 2) l_857 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x8D319C968E7B6364L);
    uint8_t l_874 = 0x79L;
    int8_t l_891 = (-1L);
    VECTOR(uint16_t, 4) l_913 = (VECTOR(uint16_t, 4))(0x7A6DL, (VECTOR(uint16_t, 2))(0x7A6DL, 0xA797L), 0xA797L);
    VECTOR(int64_t, 4) l_954 = (VECTOR(int64_t, 4))(0x67D9CEC00CC8F420L, (VECTOR(int64_t, 2))(0x67D9CEC00CC8F420L, 0x62BAB89C08853BD4L), 0x62BAB89C08853BD4L);
    VECTOR(int32_t, 2) l_994 = (VECTOR(int32_t, 2))(1L, 0x063E72E5L);
    VECTOR(int8_t, 2) l_1060 = (VECTOR(int8_t, 2))(0x34L, 0x2EL);
    VECTOR(int8_t, 8) l_1155 = (VECTOR(int8_t, 8))(0x19L, (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, (-8L)), (-8L)), (-8L), 0x19L, (-8L));
    VECTOR(int8_t, 2) l_1156 = (VECTOR(int8_t, 2))(1L, (-10L));
    int32_t *l_1177 = (void*)0;
    VECTOR(uint32_t, 4) l_1242 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x0F67EC59L), 0x0F67EC59L);
    int i;
    for (i = 0; i < 2; i++)
        l_731[i] = &p_1342->g_727;
    (*p_1342->g_656) = func_18(((*l_23) = 4294967290UL), l_25, p_5, ((void*)0 != &p_6), p_1342);
    l_674--;
    for (p_1342->g_478 = (-1); (p_1342->g_478 > 22); p_1342->g_478 = safe_add_func_uint32_t_u_u(p_1342->g_478, 4))
    { /* block id: 223 */
        uint8_t l_692 = 0xE4L;
        int32_t l_695 = 1L;
        uint32_t **l_703[2][8][10] = {{{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0}},{{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0},{&l_23,(void*)0,(void*)0,&l_23,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&p_1342->g_611,&l_23,(void*)0}}};
        uint32_t ***l_702 = &l_703[0][2][7];
        int8_t *l_710 = (void*)0;
        int8_t **l_711 = &p_1342->g_146;
        int16_t *l_712 = (void*)0;
        int16_t *l_713 = (void*)0;
        int16_t *l_714 = &l_671;
        int16_t *l_715 = (void*)0;
        int16_t *l_716 = (void*)0;
        int16_t *l_717 = (void*)0;
        int16_t *l_718 = (void*)0;
        int16_t *l_719[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int64_t *l_720 = (void*)0;
        uint8_t **l_736 = (void*)0;
        int32_t l_744 = 0x173984B3L;
        uint16_t l_776 = 2UL;
        int32_t l_778 = 0x0616E1F1L;
        VECTOR(uint16_t, 2) l_794 = (VECTOR(uint16_t, 2))(65535UL, 0x805BL);
        int32_t l_870[4][9][2] = {{{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L}},{{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L}},{{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L}},{{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L},{0x7F19B46AL,1L}}};
        uint64_t l_1022 = 0x0539EA227BD1780DL;
        VECTOR(int8_t, 2) l_1063 = (VECTOR(int8_t, 2))((-6L), 9L);
        int32_t l_1072[4] = {0x00399F54L,0x00399F54L,0x00399F54L,0x00399F54L};
        uint32_t l_1170 = 1UL;
        int64_t l_1171 = 1L;
        VECTOR(int16_t, 2) l_1199 = (VECTOR(int16_t, 2))(0x4F58L, 0x593CL);
        VECTOR(uint16_t, 8) l_1206 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xC79EL), 0xC79EL), 0xC79EL, 7UL, 0xC79EL);
        int8_t l_1231 = 0x56L;
        uint16_t l_1247 = 1UL;
        uint64_t l_1251 = 18446744073709551615UL;
        union U0 *l_1255 = (void*)0;
        VECTOR(int32_t, 2) l_1257 = (VECTOR(int32_t, 2))((-4L), (-6L));
        int i, j, k;
        (1 + 1);
    }
    return (*p_1342->g_952);
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_9 p_1342->g_10 p_1342->g_15 p_1342->g_62 p_1342->g_63 p_1342->g_78 p_1342->g_comm_values p_1342->g_87 p_1342->g_90 p_1342->g_103 p_1342->g_16 p_1342->g_136 p_1342->g_142 p_1342->g_146 p_1342->g_147 p_1342->g_171 p_1342->g_174 p_1342->g_176 p_1342->g_188 p_1342->g_190 p_1342->g_193 p_1342->g_220 p_1342->g_221 p_1342->g_233 p_1342->g_315 p_1342->g_342 p_1342->g_352 p_1342->g_359 p_1342->g_360 p_1342->g_361 p_1342->g_384 p_1342->g_385 p_1342->g_388 p_1342->g_390 p_1342->g_124 p_1342->g_410 p_1342->g_413 p_1342->g_422 p_1342->g_473 p_1342->g_474 p_1342->g_475 p_1342->g_478 p_1342->g_24 p_1342->g_520 p_1342->g_573 p_1342->g_584 p_1342->g_625 p_1342->g_631 p_1342->g_651 p_1342->g_656
 * writes: p_1342->g_87 p_1342->g_78 p_1342->g_124 p_1342->g_16 p_1342->g_147 p_1342->g_190 p_1342->g_24 p_1342->g_193 p_1342->g_221 p_1342->g_312 p_1342->g_142 p_1342->g_176 p_1342->g_233 p_1342->g_478 p_1342->g_174 p_1342->g_520 p_1342->g_413 p_1342->g_573 p_1342->g_594 p_1342->g_188 p_1342->g_611 p_1342->g_657
 */
int64_t ** func_18(uint32_t  p_19, uint32_t  p_20, int32_t * p_21, int32_t  p_22, struct S1 * p_1342)
{ /* block id: 9 */
    int64_t l_31 = 1L;
    int32_t *l_32[3];
    uint8_t l_33 = 0x01L;
    int32_t *l_61 = &p_1342->g_10[0][0][1];
    VECTOR(uint16_t, 8) l_64 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL);
    int16_t *l_557 = (void*)0;
    int16_t *l_558 = (void*)0;
    int16_t *l_559 = (void*)0;
    int16_t *l_560 = (void*)0;
    int16_t *l_561 = (void*)0;
    uint64_t *l_572 = &p_1342->g_573;
    uint32_t *l_610 = &p_1342->g_24;
    uint32_t **l_609[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_629[1][2];
    int64_t **l_630 = (void*)0;
    int64_t l_658 = (-5L);
    int64_t l_659 = (-3L);
    uint32_t l_660 = 4294967295UL;
    int64_t **l_663 = &p_1342->g_78;
    int i, j;
    for (i = 0; i < 3; i++)
        l_32[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_629[i][j] = (void*)0;
    }
    if ((atomic_inc(&p_1342->l_atomic_input[34]) == 3))
    { /* block id: 11 */
        int16_t l_26 = 0x58B3L;
        int32_t l_27 = (-8L);
        int8_t l_28 = 0L;
        uint32_t l_29 = 1UL;
        uint64_t l_30 = 0xB7228D029B4CCC41L;
        l_29 = (l_26 , (l_28 = l_27));
        l_30 = ((VECTOR(int32_t, 2))(0x06FC3314L, 0x0A57461DL)).hi;
        unsigned int result = 0;
        result += l_26;
        result += l_27;
        result += l_28;
        result += l_29;
        result += l_30;
        atomic_add(&p_1342->l_special_values[34], result);
    }
    else
    { /* block id: 15 */
        (1 + 1);
    }
    l_33++;
    (*p_1342->g_656) = func_36((*p_1342->g_9), ((safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(1L, 18446744073709551615UL)), 6)) , ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x1A46C428L, 0x7C80C7F4L)), func_45((l_629[0][0] = func_49(((safe_mod_func_uint64_t_u_u(((&p_19 != (p_1342->g_611 = func_56(((p_19 || p_1342->g_15.y) <= (((safe_mod_func_int64_t_s_s((l_61 != (void*)0), ((*l_572) |= (((VECTOR(uint32_t, 16))(0x70091F4DL, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(p_1342->g_62.s6063)), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1342->g_63.xxxx)), 0x62C3DCCDL, ((VECTOR(uint32_t, 2))(0x192EF5DDL, 0xF4D75DB0L)), 3UL)).odd, ((VECTOR(uint32_t, 2))(0xF04B5A03L, 0x513D9644L)).xxyx)))))), 0x6B0C5DECL, 0xB6AB569FL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_64.s12067217)).s4702614142363204)).s720a, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(0xF1A3L, 0x0579L, 0UL, 0xC30CL)).wzxyzwxy))).s1701772532341553)).s8be4))).xxywywww)), 0x3AC07AC3L)).s9 == func_65((p_1342->g_413.w = (safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))((-5L), (-4L))).lo, (safe_sub_func_uint32_t_u_u(func_73(p_1342->g_78, (*p_21), p_22, p_1342->g_comm_values[p_1342->tid], p_1342), 0x789A26A2L)))) <= p_20), p_20))), p_1342))))) , &p_1342->g_193) == &l_31)), p_19, p_1342))) != 0xBA5BL), (*l_61))) , p_19), p_20, (*p_21), (*p_21), p_1342)), p_21, l_630, p_1342), ((VECTOR(int32_t, 2))(0x7EF26305L)), p_1342->g_651, 0x1E74B1FCL, 0x462A37A1L)).hi)), 0x0763674EL, (*l_61), 0x642B1843L, 3L)).even, ((VECTOR(int32_t, 4))(7L))))).x), p_20, p_21, p_1342);
    l_660++;
    return l_663;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t ** func_36(int32_t  p_37, int32_t  p_38, int64_t  p_39, int32_t * p_40, struct S1 * p_1342)
{ /* block id: 213 */
    uint8_t l_652 = 248UL;
    int64_t **l_655[3];
    int i;
    for (i = 0; i < 3; i++)
        l_655[i] = (void*)0;
    l_652--;
    return l_655[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_631 p_1342->g_124 p_1342->g_10
 * writes: p_1342->g_312 p_1342->g_124
 */
int32_t  func_45(int64_t * p_46, int32_t * p_47, int64_t ** p_48, struct S1 * p_1342)
{ /* block id: 203 */
    int32_t *l_632[1];
    VECTOR(int32_t, 8) l_633 = (VECTOR(int32_t, 8))(0x3E654B5DL, (VECTOR(int32_t, 4))(0x3E654B5DL, (VECTOR(int32_t, 2))(0x3E654B5DL, 0x5BAE4585L), 0x5BAE4585L), 0x5BAE4585L, 0x3E654B5DL, 0x5BAE4585L);
    int32_t l_634[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    int32_t l_635 = 0L;
    uint32_t l_636[10][7][3] = {{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}},{{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL},{9UL,1UL,5UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_632[i] = (void*)0;
    (*p_1342->g_631) = p_47;
    l_636[1][4][1]--;
    for (p_1342->g_124 = 0; (p_1342->g_124 < 23); p_1342->g_124++)
    { /* block id: 208 */
        int64_t l_641 = 0L;
        int32_t l_642 = 0L;
        int32_t l_643 = 0x6588CF9DL;
        int32_t l_644 = 0L;
        int32_t l_645[6] = {(-5L),0x5F15681BL,(-5L),(-5L),0x5F15681BL,(-5L)};
        uint16_t l_646 = 3UL;
        uint8_t **l_649 = &p_1342->g_594;
        uint8_t ***l_650 = &l_649;
        int i;
        ++l_646;
        (*l_650) = l_649;
    }
    return (*p_47);
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_625 p_1342->g_584 p_1342->g_390 p_1342->g_146 p_1342->g_147 p_1342->g_142 p_1342->g_87 p_1342->g_520 p_1342->g_359 p_1342->g_10 p_1342->g_9
 * writes: p_1342->g_594 p_1342->g_193 p_1342->g_188 p_1342->g_312
 */
int64_t * func_49(uint64_t  p_50, int8_t  p_51, int32_t  p_52, int32_t  p_53, struct S1 * p_1342)
{ /* block id: 196 */
    int16_t l_618 = (-3L);
    int16_t *l_619 = (void*)0;
    int16_t *l_620 = (void*)0;
    int16_t *l_621 = (void*)0;
    int32_t l_622 = 0x57992EA4L;
    uint8_t *l_623 = &p_1342->g_87;
    int32_t l_624 = 0x754F2311L;
    int32_t **l_627 = &p_1342->g_312[9][0];
    int64_t *l_628 = &p_1342->g_193;
    (*l_627) = func_56(p_52, ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((p_51 ^ (l_624 &= ((((safe_mul_func_int16_t_s_s((l_622 = (l_618 = p_52)), 6L)) , l_623) == (void*)0) >= p_52))), ((GROUP_DIVERGE(2, 1) , p_1342->g_625) != (void*)0))), 255UL)) , 0x5EC1EDF8B9FCA898L), p_1342);
    return l_628;
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_584 p_1342->g_390 p_1342->g_146 p_1342->g_147 p_1342->g_142 p_1342->g_87 p_1342->g_520 p_1342->g_359 p_1342->g_10 p_1342->g_9 p_1342->g_188
 * writes: p_1342->g_594 p_1342->g_193 p_1342->g_188
 */
uint32_t * func_56(int16_t  p_57, int64_t  p_58, struct S1 * p_1342)
{ /* block id: 186 */
    uint8_t l_574 = 0x5CL;
    int32_t *l_575 = &p_1342->g_10[2][0][2];
    int32_t **l_576 = (void*)0;
    int32_t **l_577 = &l_575;
    VECTOR(int32_t, 8) l_591 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L));
    uint8_t *l_593 = &p_1342->g_87;
    uint8_t **l_592[3];
    int64_t *l_601 = &p_1342->g_193;
    int16_t l_602 = 0x4306L;
    int32_t *l_603 = (void*)0;
    int32_t *l_604 = (void*)0;
    int32_t *l_605 = (void*)0;
    int32_t *l_606 = &p_1342->g_188;
    int32_t *l_607[3];
    uint64_t l_608 = 0xDA240D3EA9C4C778L;
    int i;
    for (i = 0; i < 3; i++)
        l_592[i] = &l_593;
    for (i = 0; i < 3; i++)
        l_607[i] = (void*)0;
    l_574 &= p_58;
    (*l_577) = l_575;
    l_602 = ((safe_add_func_int64_t_s_s(((*l_601) = (safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((void*)0 != p_1342->g_584) ^ (5L & ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint64_t_u_u((((VECTOR(int32_t, 4))(l_591.s1072)).z <= ((p_1342->g_594 = &p_1342->g_87) != (void*)0)), p_1342->g_390.w)) & (*p_1342->g_146)), ((((FAKE_DIVERGE(p_1342->local_1_offset, get_local_id(1), 10) > FAKE_DIVERGE(p_1342->local_2_offset, get_local_id(2), 10)) >= (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((p_1342->g_142.s5 != ((p_57 && p_57) && p_58)) , p_1342->g_87), p_1342->g_520[7])), 0x1D41L)), p_1342->g_359.x))) , 0xCBD2DFBCL) , 0L))) || 0x23FEL), 0x6CL)) , 9L))), (*l_575))) , 0x2CL), p_58))), p_1342->g_147)) && 0x3C489090L);
    l_608 ^= ((*l_606) = (*p_1342->g_9));
    return l_606;
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_24 p_1342->g_9 p_1342->g_10
 * writes: p_1342->g_24
 */
int32_t  func_65(int16_t  p_66, struct S1 * p_1342)
{ /* block id: 177 */
    VECTOR(uint32_t, 4) l_568 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x1DA5B429L), 0x1DA5B429L);
    int32_t *l_571 = &p_1342->g_10[3][0][0];
    int i;
    for (p_1342->g_24 = 12; (p_1342->g_24 <= 32); p_1342->g_24 = safe_add_func_uint64_t_u_u(p_1342->g_24, 4))
    { /* block id: 180 */
        int32_t *l_564 = &p_1342->g_188;
        int32_t *l_565 = (void*)0;
        int32_t *l_566 = (void*)0;
        int32_t *l_567[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_567[i][j] = (void*)0;
        }
        ++l_568.z;
    }
    l_571 = l_571;
    return (*p_1342->g_9);
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_62 p_1342->g_87 p_1342->g_10 p_1342->g_90 p_1342->g_9 p_1342->g_103 p_1342->g_comm_values p_1342->g_63 p_1342->g_16 p_1342->g_136 p_1342->g_142 p_1342->g_146 p_1342->g_147 p_1342->g_171 p_1342->g_174 p_1342->g_176 p_1342->g_188 p_1342->g_190 p_1342->g_193 p_1342->g_220 p_1342->g_221 p_1342->g_233 p_1342->g_315 p_1342->g_342 p_1342->g_352 p_1342->g_359 p_1342->g_360 p_1342->g_361 p_1342->g_384 p_1342->g_385 p_1342->g_388 p_1342->g_390 p_1342->g_124 p_1342->g_410 p_1342->g_413 p_1342->g_422 p_1342->g_473 p_1342->g_474 p_1342->g_475 p_1342->g_478 p_1342->g_24 p_1342->g_520
 * writes: p_1342->g_87 p_1342->g_78 p_1342->g_124 p_1342->g_16 p_1342->g_147 p_1342->g_190 p_1342->g_24 p_1342->g_193 p_1342->g_221 p_1342->g_312 p_1342->g_142 p_1342->g_176 p_1342->g_233 p_1342->g_478 p_1342->g_174 p_1342->g_520
 */
uint32_t  func_73(int64_t * p_74, int32_t  p_75, uint16_t  p_76, uint32_t  p_77, struct S1 * p_1342)
{ /* block id: 19 */
    int32_t *l_79 = &p_1342->g_10[2][1][0];
    int32_t **l_80 = (void*)0;
    int32_t **l_81[7] = {&p_1342->g_9,&p_1342->g_9,&p_1342->g_9,&p_1342->g_9,&p_1342->g_9,&p_1342->g_9,&p_1342->g_9};
    int32_t *l_82 = (void*)0;
    VECTOR(int8_t, 4) l_85 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x18L), 0x18L);
    uint8_t *l_86 = &p_1342->g_87;
    VECTOR(uint8_t, 8) l_94 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
    VECTOR(uint8_t, 8) l_95 = (VECTOR(uint8_t, 8))(0xCFL, (VECTOR(uint8_t, 4))(0xCFL, (VECTOR(uint8_t, 2))(0xCFL, 8UL), 8UL), 8UL, 0xCFL, 8UL);
    VECTOR(uint8_t, 16) l_96 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0xEFL), 0xEFL), 0xEFL, 250UL, 0xEFL, (VECTOR(uint8_t, 2))(250UL, 0xEFL), (VECTOR(uint8_t, 2))(250UL, 0xEFL), 250UL, 0xEFL, 250UL, 0xEFL);
    uint32_t l_126 = 4294967295UL;
    VECTOR(int32_t, 16) l_134 = (VECTOR(int32_t, 16))(0x54B71662L, (VECTOR(int32_t, 4))(0x54B71662L, (VECTOR(int32_t, 2))(0x54B71662L, 0x7C4B7379L), 0x7C4B7379L), 0x7C4B7379L, 0x54B71662L, 0x7C4B7379L, (VECTOR(int32_t, 2))(0x54B71662L, 0x7C4B7379L), (VECTOR(int32_t, 2))(0x54B71662L, 0x7C4B7379L), 0x54B71662L, 0x7C4B7379L, 0x54B71662L, 0x7C4B7379L);
    VECTOR(uint16_t, 8) l_140 = (VECTOR(uint16_t, 8))(0x2A5CL, (VECTOR(uint16_t, 4))(0x2A5CL, (VECTOR(uint16_t, 2))(0x2A5CL, 0UL), 0UL), 0UL, 0x2A5CL, 0UL);
    VECTOR(uint16_t, 16) l_141 = (VECTOR(uint16_t, 16))(0x1729L, (VECTOR(uint16_t, 4))(0x1729L, (VECTOR(uint16_t, 2))(0x1729L, 0x3F0AL), 0x3F0AL), 0x3F0AL, 0x1729L, 0x3F0AL, (VECTOR(uint16_t, 2))(0x1729L, 0x3F0AL), (VECTOR(uint16_t, 2))(0x1729L, 0x3F0AL), 0x1729L, 0x3F0AL, 0x1729L, 0x3F0AL);
    VECTOR(uint16_t, 2) l_143 = (VECTOR(uint16_t, 2))(0x5448L, 65535UL);
    VECTOR(int16_t, 4) l_144 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5DD5L), 0x5DD5L);
    VECTOR(int16_t, 4) l_145 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L);
    VECTOR(int64_t, 2) l_175 = (VECTOR(int64_t, 2))((-2L), (-1L));
    uint32_t l_191 = 0x55A67DACL;
    VECTOR(uint64_t, 16) l_230 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x9AC140D512D91D26L), 0x9AC140D512D91D26L), 0x9AC140D512D91D26L, 18446744073709551608UL, 0x9AC140D512D91D26L, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x9AC140D512D91D26L), (VECTOR(uint64_t, 2))(18446744073709551608UL, 0x9AC140D512D91D26L), 18446744073709551608UL, 0x9AC140D512D91D26L, 18446744073709551608UL, 0x9AC140D512D91D26L);
    VECTOR(int64_t, 16) l_232 = (VECTOR(int64_t, 16))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 4L), 4L), 4L, 5L, 4L, (VECTOR(int64_t, 2))(5L, 4L), (VECTOR(int64_t, 2))(5L, 4L), 5L, 4L, 5L, 4L);
    VECTOR(int64_t, 4) l_234 = (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x6579B1C9B85E786EL), 0x6579B1C9B85E786EL);
    int16_t *l_341 = (void*)0;
    VECTOR(int32_t, 2) l_367 = (VECTOR(int32_t, 2))(0x7883C476L, (-2L));
    int16_t l_373 = (-1L);
    VECTOR(int32_t, 16) l_389 = (VECTOR(int32_t, 16))(0x1A1ABBFCL, (VECTOR(int32_t, 4))(0x1A1ABBFCL, (VECTOR(int32_t, 2))(0x1A1ABBFCL, 0x5A3A3E9EL), 0x5A3A3E9EL), 0x5A3A3E9EL, 0x1A1ABBFCL, 0x5A3A3E9EL, (VECTOR(int32_t, 2))(0x1A1ABBFCL, 0x5A3A3E9EL), (VECTOR(int32_t, 2))(0x1A1ABBFCL, 0x5A3A3E9EL), 0x1A1ABBFCL, 0x5A3A3E9EL, 0x1A1ABBFCL, 0x5A3A3E9EL);
    VECTOR(int32_t, 2) l_392 = (VECTOR(int32_t, 2))(0x55DA5917L, (-1L));
    int16_t l_404 = 1L;
    uint32_t l_418[4];
    VECTOR(int16_t, 16) l_472 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0B7CL), 0x0B7CL), 0x0B7CL, 0L, 0x0B7CL, (VECTOR(int16_t, 2))(0L, 0x0B7CL), (VECTOR(int16_t, 2))(0L, 0x0B7CL), 0L, 0x0B7CL, 0L, 0x0B7CL);
    VECTOR(int16_t, 2) l_476 = (VECTOR(int16_t, 2))(0x3A6BL, 0x17F3L);
    uint64_t *l_477 = &p_1342->g_478;
    uint64_t *l_485[4][9][2] = {{{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190}},{{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190}},{{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190}},{{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190},{&p_1342->g_190,&p_1342->g_190}}};
    int32_t l_486 = 0x470801ECL;
    int64_t *l_493 = (void*)0;
    int64_t *l_494 = (void*)0;
    int64_t *l_495 = (void*)0;
    int64_t *l_496 = (void*)0;
    int64_t *l_497 = (void*)0;
    int64_t *l_498[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_499 = &l_191;
    uint32_t l_500 = 0xDBF41C6DL;
    int64_t l_501 = 1L;
    VECTOR(uint32_t, 8) l_511 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    uint16_t *l_516 = (void*)0;
    VECTOR(uint8_t, 8) l_521 = (VECTOR(uint8_t, 8))(0xEDL, (VECTOR(uint8_t, 4))(0xEDL, (VECTOR(uint8_t, 2))(0xEDL, 0x06L), 0x06L), 0x06L, 0xEDL, 0x06L);
    VECTOR(int8_t, 4) l_549 = (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x45L), 0x45L);
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_418[i] = 0x4AF64223L;
    l_82 = l_79;
    if (((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_1342->g_62.s3, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 2))(l_85.zz)).yyyyxxyx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(6UL, 0x96L)), 0x32L, 6UL)).hi)), 0x23L, 0xD9L)).zxwwyyzx))).s0316172263155336)).s8a3b)), ((VECTOR(int16_t, 2))(0x777AL, 0x5F83L)).lo, (((++(*l_86)) , (*l_82)) , 0x687FL), ((VECTOR(int16_t, 8))(p_1342->g_90.wyzzxxzz)), 9L)).sad)).yyyy)), ((VECTOR(int16_t, 4))(p_75, ((VECTOR(int16_t, 2))(0x1C7BL, 0x7BC9L)), (-1L)))))).y, (safe_unary_minus_func_int32_t_s((((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(l_94.s4527)).wzwyyxzzzxyyyywx))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_95.s56)).xxyxyxxy, ((VECTOR(uint8_t, 4))(l_96.s8982)).xyyzzzwx))))).s2201226541457146))).sa7, ((VECTOR(uint16_t, 4))(1UL, (FAKE_DIVERGE(p_1342->global_0_offset, get_global_id(0), 10) , ((*p_1342->g_9) < ((*l_82) == (safe_mod_func_int16_t_s_s(p_75, func_99((+p_1342->g_62.s5), (*l_79), p_1342)))))), 0x3C1CL, 0x2C9EL)).even))).yxxyxxxy, ((VECTOR(uint16_t, 8))(0x52A3L)), ((VECTOR(uint16_t, 8))(1UL))))).s52)), ((VECTOR(uint16_t, 2))(0xAF34L))))).odd, (*l_82))) > p_77) , l_126))))) , 0x169F9908L))
    { /* block id: 27 */
        int8_t l_132 = 1L;
        VECTOR(int8_t, 16) l_135 = (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x55L), 0x55L), 0x55L, 9L, 0x55L, (VECTOR(int8_t, 2))(9L, 0x55L), (VECTOR(int8_t, 2))(9L, 0x55L), 9L, 0x55L, 9L, 0x55L);
        uint32_t l_157 = 0xFADCD0BBL;
        int32_t l_158[9][5] = {{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L},{1L,0L,0x725FF4A1L,(-6L),0x725FF4A1L}};
        int i, j;
        for (p_76 = 10; (p_76 <= 33); p_76++)
        { /* block id: 30 */
            uint8_t l_129 = 0xDBL;
            VECTOR(int32_t, 4) l_133 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
            VECTOR(uint16_t, 16) l_137 = (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x535CL), 0x535CL), 0x535CL, 65526UL, 0x535CL, (VECTOR(uint16_t, 2))(65526UL, 0x535CL), (VECTOR(uint16_t, 2))(65526UL, 0x535CL), 65526UL, 0x535CL, 65526UL, 0x535CL);
            VECTOR(uint16_t, 16) l_138 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), 65530UL), 65530UL, 0UL, 65530UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), (VECTOR(uint16_t, 2))(0UL, 65530UL), 0UL, 65530UL, 0UL, 65530UL);
            VECTOR(uint16_t, 2) l_139 = (VECTOR(uint16_t, 2))(1UL, 65535UL);
            uint64_t l_156 = 0x2D848F50E0B20138L;
            int i;
            l_129 ^= p_75;
            for (p_75 = 0; (p_75 != 4); p_75 = safe_add_func_int64_t_s_s(p_75, 2))
            { /* block id: 34 */
                l_132 &= p_76;
            }
            l_158[1][2] = (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 8))(l_133.wzyzzzzy)), ((VECTOR(int32_t, 4))((-4L), (p_1342->g_16.s1 &= ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_134.s66b2488c446edb04)).s5812, ((VECTOR(int32_t, 2))(0x37E483A5L, (-6L))).xyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x04CDFD8CL)).yyxyyyyy)).hi))))).odd, (int32_t)p_76, (int32_t)(((VECTOR(int8_t, 2))(l_135.s23)).even != 0L)))).hi), (-1L), (-1L))), 0x3409F4FCL, 2L, 0x5D7041B7L)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(p_1342->g_136.s45132244)).s03, (int32_t)(((VECTOR(uint16_t, 8))(1UL, (l_135.s1 , 65535UL), ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(l_137.s641de24a29cc7154)).odd, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 2))(l_138.s87)).xyyxxyxxyxyyyyxy, ((VECTOR(uint16_t, 8))(l_139.xxyxyxyx)).s5365643755055551, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_140.s7444)))).wwxxyzwzywyxxxxx))).se0e8))).hi)).xxyyyyxy))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(0xA033L, ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 65530UL)).ywwxzxzwzwzyzzwx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(l_141.sef)).xyxyxxxyyxxxyxyy, ((VECTOR(uint16_t, 4))(p_1342->g_142.sfd58)).yxxwzzzyxxxzyxww, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 2))(l_143.xx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_1342->g_62.s3, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-1L), 1L, ((VECTOR(int16_t, 16))(l_144.xwyyyyzyywxwzxzz)).s6, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(l_145.wzxywxzx)).odd, (int16_t)((((((+(p_1342->g_146 != &p_1342->g_147)) && (((safe_add_func_int64_t_s_s(((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x1FL, 0x33L, 0x63L, (p_77 == (-2L)), ((VECTOR(int8_t, 4))(0x43L)), (*p_1342->g_146), p_77, 0L, (*p_1342->g_146), (-1L), p_75, 0x6DL, 0x7EL)))).s20))).odd & 7L), p_1342->g_142.s0)), 0xBB32L)), l_156)) ^ l_135.sd), GROUP_DIVERGE(1, 1))) >= l_133.z) | (*p_1342->g_146))) , 1L) || 4294967295UL) , p_77) >= 5UL), (int16_t)p_1342->g_62.s5))), 0x7C6AL)), 0x05C0L, l_157, ((VECTOR(int16_t, 2))((-2L))), p_1342->g_62.s6, ((VECTOR(int16_t, 2))(0x5068L)), 0x2F24L)).sd4, ((VECTOR(int16_t, 2))((-1L)))))), 0x0625L, 1UL)), ((VECTOR(uint16_t, 2))(0x430DL)), 65535UL)))))).even)).hi))).xyxyyxyxyyyxxyyx)).s9, p_1342->g_62.s3, 0x551CL, 0UL)).wxyyzwzxyxwxzxzw))))).s7fcc)), ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0x39E3L))))).yxyzzwzzxwwwxyyz, ((VECTOR(uint16_t, 16))(0UL)))))))))).sd2)).xyxxyyyx))).s1, p_75, 0x8B24L, ((VECTOR(uint16_t, 2))(0x7D2CL)), 8UL)).s3 > 0xE0D2L), (int32_t)0x6BD901D5L))).xyxyyxyxxyyxyxxy))).s35)).xxxyxyyx, ((VECTOR(int32_t, 8))(0x71156F79L))))).s4 != l_138.sf);
        }
        return p_1342->g_62.s1;
    }
    else
    { /* block id: 41 */
        VECTOR(int8_t, 8) l_170 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
        uint32_t *l_187 = &p_1342->g_24;
        uint8_t *l_189[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_192 = 0x5B3B32C0L;
        int16_t *l_194 = (void*)0;
        int16_t *l_195 = (void*)0;
        int16_t *l_196 = (void*)0;
        int16_t *l_197 = (void*)0;
        int16_t *l_198 = (void*)0;
        int16_t *l_199 = (void*)0;
        int16_t *l_200 = (void*)0;
        int16_t *l_201 = (void*)0;
        int16_t *l_202 = (void*)0;
        int16_t *l_203 = (void*)0;
        int16_t *l_204[6][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int32_t l_205 = 0x3ACA0825L;
        int32_t **l_208[1];
        int32_t *l_311 = (void*)0;
        VECTOR(uint8_t, 2) l_345 = (VECTOR(uint8_t, 2))(0x99L, 255UL);
        VECTOR(int16_t, 4) l_350 = (VECTOR(int16_t, 4))(0x3856L, (VECTOR(int16_t, 2))(0x3856L, 0x3796L), 0x3796L);
        VECTOR(int16_t, 2) l_351 = (VECTOR(int16_t, 2))(9L, (-8L));
        VECTOR(int16_t, 4) l_354 = (VECTOR(int16_t, 4))(0x0C14L, (VECTOR(int16_t, 2))(0x0C14L, 0x7A67L), 0x7A67L);
        int64_t l_356[1][4];
        VECTOR(int16_t, 2) l_358 = (VECTOR(int16_t, 2))((-5L), 0x11C5L);
        VECTOR(int16_t, 2) l_362 = (VECTOR(int16_t, 2))(0x1439L, 0x7322L);
        VECTOR(int16_t, 2) l_363 = (VECTOR(int16_t, 2))(3L, 0x7674L);
        VECTOR(int16_t, 8) l_364 = (VECTOR(int16_t, 8))(0x56AEL, (VECTOR(int16_t, 4))(0x56AEL, (VECTOR(int16_t, 2))(0x56AEL, 1L), 1L), 1L, 0x56AEL, 1L);
        uint32_t l_378 = 1UL;
        VECTOR(int32_t, 16) l_383 = (VECTOR(int32_t, 16))(0x49146D41L, (VECTOR(int32_t, 4))(0x49146D41L, (VECTOR(int32_t, 2))(0x49146D41L, 0x303BB4B2L), 0x303BB4B2L), 0x303BB4B2L, 0x49146D41L, 0x303BB4B2L, (VECTOR(int32_t, 2))(0x49146D41L, 0x303BB4B2L), (VECTOR(int32_t, 2))(0x49146D41L, 0x303BB4B2L), 0x49146D41L, 0x303BB4B2L, 0x49146D41L, 0x303BB4B2L);
        VECTOR(int32_t, 8) l_393 = (VECTOR(int32_t, 8))(0x28C37B43L, (VECTOR(int32_t, 4))(0x28C37B43L, (VECTOR(int32_t, 2))(0x28C37B43L, (-1L)), (-1L)), (-1L), 0x28C37B43L, (-1L));
        VECTOR(int32_t, 2) l_395 = (VECTOR(int32_t, 2))(0x271835A0L, (-4L));
        VECTOR(int64_t, 16) l_409 = (VECTOR(int64_t, 16))(0x4A44CFE688B36A30L, (VECTOR(int64_t, 4))(0x4A44CFE688B36A30L, (VECTOR(int64_t, 2))(0x4A44CFE688B36A30L, (-5L)), (-5L)), (-5L), 0x4A44CFE688B36A30L, (-5L), (VECTOR(int64_t, 2))(0x4A44CFE688B36A30L, (-5L)), (VECTOR(int64_t, 2))(0x4A44CFE688B36A30L, (-5L)), 0x4A44CFE688B36A30L, (-5L), 0x4A44CFE688B36A30L, (-5L));
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_208[i] = &l_79;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_356[i][j] = 1L;
        }
        if (((+((!(!(((+(safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((0x7174L < ((safe_rshift_func_int16_t_s_u((l_205 = (((p_1342->g_193 ^= (((!((((safe_unary_minus_func_uint32_t_u(p_77)) & (safe_add_func_uint16_t_u_u(p_77, 0UL))) || ((6UL || ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(l_170.s31)).xxyyxyyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(p_1342->g_171.s14550374)).hi)))).wwywwyxy))).s6) && ((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1342->g_174.wxxw)).lo)).xyxxyxyy)).s0342465746670036)).sc, (FAKE_DIVERGE(p_1342->group_0_offset, get_group_id(0), 10) , 0x7043A5CBA9923A28L))) == (((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(l_175.yx)).xxyxxyyxxxxyxxyy, ((VECTOR(int64_t, 2))(p_1342->g_176.s22)).xyxyyyxxxyxxxxxy))).se == (safe_unary_minus_func_uint32_t_u(0x7EC73EDBL)))))) , 1UL)) , (l_192 &= ((((*l_187) = ((p_1342->g_190 ^= (safe_mod_func_int16_t_s_s((!(((safe_mul_func_uint8_t_u_u((!(safe_mul_func_uint8_t_u_u((((*p_1342->g_146) |= (safe_unary_minus_func_uint8_t_u((safe_div_func_uint64_t_u_u((l_187 == &p_1342->g_24), p_1342->g_87))))) != 255UL), GROUP_DIVERGE(2, 1)))), p_1342->g_62.s7)) >= 0x3043577463834FB5L) , p_1342->g_174.x)), p_1342->g_188))) < p_75)) & GROUP_DIVERGE(1, 1)) || l_191))) != p_75)) , 0x6FAD5BC9L) || GROUP_DIVERGE(2, 1))), p_1342->g_176.s2)) <= 7UL)), l_170.s2)), p_76))) == 0xDCDEE852L) , p_76))) && p_76)) || p_76))
        { /* block id: 48 */
            uint32_t *l_216 = (void*)0;
            int32_t l_229 = 0x5D07A912L;
            int32_t **l_235 = &p_1342->g_9;
            int16_t *l_339 = (void*)0;
            int16_t **l_340[8] = {&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201,&l_201};
            VECTOR(int16_t, 8) l_353 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L);
            VECTOR(int16_t, 16) l_355 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x71B0L), 0x71B0L), 0x71B0L, 4L, 0x71B0L, (VECTOR(int16_t, 2))(4L, 0x71B0L), (VECTOR(int16_t, 2))(4L, 0x71B0L), 4L, 0x71B0L, 4L, 0x71B0L);
            VECTOR(int16_t, 2) l_357 = (VECTOR(int16_t, 2))(0x7602L, (-7L));
            VECTOR(int32_t, 8) l_368 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x00B5BB09L), 0x00B5BB09L), 0x00B5BB09L, (-5L), 0x00B5BB09L);
            uint64_t *l_374 = (void*)0;
            uint64_t *l_375 = (void*)0;
            uint64_t *l_376 = &p_1342->g_190;
            int64_t *l_377[9][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            VECTOR(int32_t, 8) l_381 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x04064BBCL), 0x04064BBCL), 0x04064BBCL, 1L, 0x04064BBCL);
            VECTOR(int32_t, 8) l_382 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
            int64_t l_386 = 1L;
            VECTOR(int32_t, 4) l_387 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2163CDFEL), 0x2163CDFEL);
            VECTOR(int32_t, 16) l_391 = (VECTOR(int32_t, 16))(0x1C4A5A31L, (VECTOR(int32_t, 4))(0x1C4A5A31L, (VECTOR(int32_t, 2))(0x1C4A5A31L, 0x3293F52BL), 0x3293F52BL), 0x3293F52BL, 0x1C4A5A31L, 0x3293F52BL, (VECTOR(int32_t, 2))(0x1C4A5A31L, 0x3293F52BL), (VECTOR(int32_t, 2))(0x1C4A5A31L, 0x3293F52BL), 0x1C4A5A31L, 0x3293F52BL, 0x1C4A5A31L, 0x3293F52BL);
            VECTOR(int32_t, 4) l_394 = (VECTOR(int32_t, 4))(0x6576B8EDL, (VECTOR(int32_t, 2))(0x6576B8EDL, 0x04251EF0L), 0x04251EF0L);
            uint64_t *l_406[1][3][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int64_t l_417 = 0x097F5B0009B13DE7L;
            int32_t l_455[10] = {0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L,0x431974B6L};
            int i, j, k;
            if ((((((p_76 >= (l_208[0] == (void*)0)) , p_77) || (&p_74 == &p_1342->g_78)) , (void*)0) != l_189[6]))
            { /* block id: 49 */
                uint64_t l_213 = 0xCDB5D7710EA519D7L;
                uint32_t **l_217 = &l_187;
                uint16_t *l_222 = (void*)0;
                uint16_t *l_223 = (void*)0;
                uint16_t *l_224 = (void*)0;
                uint16_t *l_225 = (void*)0;
                uint16_t *l_226 = (void*)0;
                uint16_t *l_227 = (void*)0;
                uint16_t *l_228[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                VECTOR(int32_t, 4) l_231 = (VECTOR(int32_t, 4))(0x65AD4D92L, (VECTOR(int32_t, 2))(0x65AD4D92L, 0x021E3EDDL), 0x021E3EDDL);
                int32_t l_236 = 1L;
                int i, j;
                l_229 |= (safe_lshift_func_uint16_t_u_u(0x2F77L, (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x8308L, 0x2BDFL)), 5UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))((safe_rshift_func_uint16_t_u_u(l_213, 9)), ((VECTOR(uint16_t, 2))(0x456AL, 0xE305L)), 65535UL)).zxyxwwywxzwyywzz, ((VECTOR(uint16_t, 16))(p_76, ((VECTOR(uint16_t, 4))(((((*p_1342->g_146) = (safe_lshift_func_uint8_t_u_u(1UL, p_1342->g_171.s4))) < (l_216 != ((*l_217) = &p_1342->g_24))) <= (safe_div_func_int32_t_s_s((p_1342->g_16.s2 = ((VECTOR(int32_t, 4))(p_1342->g_220.yxxy)).x), 0x87358BB8L))), 0UL, 65535UL, 1UL)), ((VECTOR(uint16_t, 8))(p_1342->g_221.s6c724b24)), (p_1342->g_221.s1 = (p_1342->g_16.s2 >= FAKE_DIVERGE(p_1342->local_2_offset, get_local_id(2), 10))), 0xD831L, 0xC496L)), ((VECTOR(uint16_t, 16))(1UL))))))).sd72c)).odd)), 5UL, 65535UL)), 65532UL)).lo)).w && 65535UL)));
                l_236 |= ((((p_1342->g_90.y , l_202) == (((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(18446744073709551613UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_230.s13b3005cfbde1bf1)).s13)))), 18446744073709551614UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 4))((~18446744073709551615UL), (((&p_1342->g_193 != (p_1342->g_78 = (void*)0)) , ((VECTOR(int32_t, 16))(l_231.zzzxzyxxyyyxzyzw)).s3) || ((void*)0 != l_216)), 18446744073709551614UL, 0x2C0025942EDEBC26L)).y, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(l_232.sfec57086)).s5224631574467131, ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(p_1342->g_233.s56)).yyyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_234.yz)).xxyyxxxx)).lo))))).xxzzwyxx)).s7242715072356262, ((VECTOR(int64_t, 2))(0x39FE2A5CB463609EL, 0x7BB81689C62AA492L)).yxxyyxyxyxyyxyyx))).even)).s15, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((-3L), ((void*)0 != l_224), 4L, (-1L))).zxwzwxyxwwywzxxz)).s10))).yxyxxxxyxxxyxxxy)))))).s61, ((VECTOR(int64_t, 2))(0x580AE462C7E73476L))))), ((VECTOR(int64_t, 2))(0x53D20C5512B700E4L))))), 0x7F3C08C63A200067L, 1UL, 0xF980BA0935403E42L, 0x6AE76BE3BD6451CCL)).hi, ((VECTOR(uint64_t, 4))(0xA81BD4E096BAAEF2L))))).y, ((VECTOR(uint64_t, 2))(0xDAD110EB22DE3F50L)), 0x852C722CBC8A12F2L)).even)).xxyy))), 0xEA5823CA98304DD8L, 0UL, 1UL, 0xA74BF830CF6C2580L)).s6 , &p_1342->g_9) != l_235) , (void*)0)) || 0x75F0600A883288FDL) , l_231.w);
                if ((atomic_inc(&p_1342->g_atomic_input[57 * get_linear_group_id() + 7]) == 3))
                { /* block id: 58 */
                    int64_t l_237 = 0x1BC675DA5E235CA9L;
                    int64_t l_262 = 0x7EAA06FA5281E01CL;
                    int32_t l_264 = 0x15608A17L;
                    int32_t *l_263 = &l_264;
                    l_237 &= 0x3AD77576L;
                    for (l_237 = 0; (l_237 > (-21)); l_237 = safe_sub_func_int32_t_s_s(l_237, 2))
                    { /* block id: 62 */
                        VECTOR(uint64_t, 8) l_240 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3EFCD1EFC9F5F192L), 0x3EFCD1EFC9F5F192L), 0x3EFCD1EFC9F5F192L, 18446744073709551615UL, 0x3EFCD1EFC9F5F192L);
                        uint8_t l_241 = 0xB2L;
                        VECTOR(uint8_t, 4) l_242 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 6UL), 6UL);
                        uint32_t l_243 = 1UL;
                        uint32_t l_244 = 0UL;
                        int32_t l_245 = 0x412AC16EL;
                        VECTOR(uint64_t, 8) l_246 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL);
                        VECTOR(uint64_t, 16) l_247 = (VECTOR(uint64_t, 16))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x6C6ADAB0593DF1BCL), 0x6C6ADAB0593DF1BCL), 0x6C6ADAB0593DF1BCL, 18446744073709551612UL, 0x6C6ADAB0593DF1BCL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x6C6ADAB0593DF1BCL), (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x6C6ADAB0593DF1BCL), 18446744073709551612UL, 0x6C6ADAB0593DF1BCL, 18446744073709551612UL, 0x6C6ADAB0593DF1BCL);
                        int32_t l_248 = (-1L);
                        int32_t *l_249 = &l_245;
                        int32_t *l_250 = &l_245;
                        int32_t *l_251 = &l_245;
                        int32_t l_252 = 0x2743C6E1L;
                        int8_t l_253 = (-1L);
                        uint32_t l_254[9][6] = {{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L},{0x0B98C031L,0x020B48B3L,0x6CA15C22L,0x1CE2904CL,0x6CA15C22L,0x020B48B3L}};
                        int i, j;
                        l_250 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_240.s0154614467642667)))), (uint64_t)((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(l_241, l_242.y, 0xE31C739BD0C10346L, 0x22429E26A8C280A0L)), ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(8UL, 3UL, (l_243 , l_244), 0x64F53B5BA0EBD352L, l_245, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(l_246.s73)), ((VECTOR(uint64_t, 2))(l_247.se8))))).lo, 0UL, 9UL)).s7223454550156342))).s2f60))).y, (uint64_t)(l_248 &= 0x0234A3B4D32A01F8L)))).s1d)).lo , l_249);
                        l_251 = (l_250 = (void*)0);
                        l_254[3][2] |= (l_253 ^= l_252);
                    }
                    for (l_237 = 0; (l_237 <= 27); l_237++)
                    { /* block id: 72 */
                        uint32_t l_257 = 0x25B28911L;
                        VECTOR(int32_t, 4) l_258 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x12F3550DL), 0x12F3550DL);
                        int32_t l_259 = (-7L);
                        int32_t *l_260 = (void*)0;
                        int32_t *l_261 = (void*)0;
                        int i;
                        l_259 &= (l_257 , ((VECTOR(int32_t, 2))(l_258.xz)).even);
                        l_261 = l_260;
                    }
                    l_263 = (l_262 , l_263);
                    unsigned int result = 0;
                    result += l_237;
                    result += l_262;
                    result += l_264;
                    atomic_add(&p_1342->g_special_values[57 * get_linear_group_id() + 7], result);
                }
                else
                { /* block id: 77 */
                    (1 + 1);
                }
                if ((atomic_inc(&p_1342->l_atomic_input[40]) == 5))
                { /* block id: 81 */
                    uint32_t l_265 = 0xBEC50A47L;
                    uint32_t l_266 = 4294967293UL;
                    VECTOR(int16_t, 2) l_267 = (VECTOR(int16_t, 2))(5L, 0x3D7BL);
                    uint32_t l_268 = 4294967289UL;
                    int32_t l_269 = 6L;
                    uint16_t l_270[2][4] = {{65530UL,65530UL,65530UL,65530UL},{65530UL,65530UL,65530UL,65530UL}};
                    VECTOR(uint16_t, 16) l_271 = (VECTOR(uint16_t, 16))(0xD1BCL, (VECTOR(uint16_t, 4))(0xD1BCL, (VECTOR(uint16_t, 2))(0xD1BCL, 0UL), 0UL), 0UL, 0xD1BCL, 0UL, (VECTOR(uint16_t, 2))(0xD1BCL, 0UL), (VECTOR(uint16_t, 2))(0xD1BCL, 0UL), 0xD1BCL, 0UL, 0xD1BCL, 0UL);
                    VECTOR(int32_t, 8) l_272 = (VECTOR(int32_t, 8))(0x3C4E1C3FL, (VECTOR(int32_t, 4))(0x3C4E1C3FL, (VECTOR(int32_t, 2))(0x3C4E1C3FL, 0x2B837027L), 0x2B837027L), 0x2B837027L, 0x3C4E1C3FL, 0x2B837027L);
                    VECTOR(int32_t, 16) l_273 = (VECTOR(int32_t, 16))(0x5217F7E6L, (VECTOR(int32_t, 4))(0x5217F7E6L, (VECTOR(int32_t, 2))(0x5217F7E6L, (-1L)), (-1L)), (-1L), 0x5217F7E6L, (-1L), (VECTOR(int32_t, 2))(0x5217F7E6L, (-1L)), (VECTOR(int32_t, 2))(0x5217F7E6L, (-1L)), 0x5217F7E6L, (-1L), 0x5217F7E6L, (-1L));
                    VECTOR(int32_t, 2) l_274 = (VECTOR(int32_t, 2))(0x59490654L, 4L);
                    int32_t l_275 = (-4L);
                    int32_t l_276 = (-1L);
                    int32_t l_277 = 0L;
                    uint16_t l_278 = 1UL;
                    int32_t l_279 = 0L;
                    VECTOR(int64_t, 16) l_280 = (VECTOR(int64_t, 16))(0x02E590319A3A14F0L, (VECTOR(int64_t, 4))(0x02E590319A3A14F0L, (VECTOR(int64_t, 2))(0x02E590319A3A14F0L, 1L), 1L), 1L, 0x02E590319A3A14F0L, 1L, (VECTOR(int64_t, 2))(0x02E590319A3A14F0L, 1L), (VECTOR(int64_t, 2))(0x02E590319A3A14F0L, 1L), 0x02E590319A3A14F0L, 1L, 0x02E590319A3A14F0L, 1L);
                    uint32_t l_281 = 0x04A66332L;
                    VECTOR(uint8_t, 4) l_282 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x8DL), 0x8DL);
                    VECTOR(uint8_t, 4) l_283 = (VECTOR(uint8_t, 4))(0x1BL, (VECTOR(uint8_t, 2))(0x1BL, 255UL), 255UL);
                    VECTOR(uint8_t, 16) l_284 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xFFL), 0xFFL), 0xFFL, 255UL, 0xFFL, (VECTOR(uint8_t, 2))(255UL, 0xFFL), (VECTOR(uint8_t, 2))(255UL, 0xFFL), 255UL, 0xFFL, 255UL, 0xFFL);
                    VECTOR(int8_t, 16) l_285 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x01L), 0x01L), 0x01L, (-9L), 0x01L, (VECTOR(int8_t, 2))((-9L), 0x01L), (VECTOR(int8_t, 2))((-9L), 0x01L), (-9L), 0x01L, (-9L), 0x01L);
                    VECTOR(int8_t, 8) l_286 = (VECTOR(int8_t, 8))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x7BL), 0x7BL), 0x7BL, 0x56L, 0x7BL);
                    VECTOR(int8_t, 4) l_287 = (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x16L), 0x16L);
                    VECTOR(uint8_t, 2) l_288 = (VECTOR(uint8_t, 2))(253UL, 254UL);
                    VECTOR(uint8_t, 2) l_289 = (VECTOR(uint8_t, 2))(0xCAL, 0x66L);
                    VECTOR(uint8_t, 2) l_290 = (VECTOR(uint8_t, 2))(1UL, 0UL);
                    VECTOR(uint8_t, 16) l_291 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL, (VECTOR(uint8_t, 2))(1UL, 255UL), (VECTOR(uint8_t, 2))(1UL, 255UL), 1UL, 255UL, 1UL, 255UL);
                    VECTOR(uint8_t, 8) l_292 = (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 246UL), 246UL), 246UL, 7UL, 246UL);
                    VECTOR(uint8_t, 2) l_293 = (VECTOR(uint8_t, 2))(255UL, 0UL);
                    uint8_t l_294 = 0x9CL;
                    int16_t l_295 = 0L;
                    int32_t l_296 = 0L;
                    uint32_t l_297 = 0x8B04AB8BL;
                    int16_t l_298 = (-5L);
                    int16_t l_299 = (-1L);
                    uint32_t l_300 = 1UL;
                    uint32_t l_301[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int16_t l_302 = 0x6411L;
                    uint16_t l_303 = 0x3B6EL;
                    int64_t l_304 = 1L;
                    uint32_t l_305 = 4294967288UL;
                    int32_t l_306 = 0x6D19B040L;
                    int32_t l_307[1];
                    uint32_t l_308 = 0xEA212092L;
                    int8_t l_309 = 9L;
                    int64_t l_310 = (-1L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_307[i] = 0L;
                    l_266 = l_265;
                    l_310 = (l_309 = (l_308 = ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(l_267.yyxxxyyx)).s7146322671021650, ((VECTOR(uint16_t, 4))((((l_269 |= l_268) , ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(FAKE_DIVERGE(p_1342->local_1_offset, get_local_id(1), 10), 0UL, 1UL, 0x0E46948929C286E2L)).even)).lo) , (l_270[0][1] = (FAKE_DIVERGE(p_1342->global_2_offset, get_global_id(2), 10) , 0xF2F8L))), ((VECTOR(uint16_t, 2))(l_271.s55)), 0x71AAL)).xwyyxxwzwzyxzxyz))).s7452)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_272.s2244355516434570)).odd)).s12)).xyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))((-1L), 0x2A04FEC6L)).xyyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_273.s50)))).yyyyyxxx)).odd)).zyzxxwxz, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_274.xyxyxyyxxyxxxxxx)), ((VECTOR(int32_t, 4))(l_275, (l_276 , (l_279 = (l_277 , l_278))), 0x335D6010L, (-1L))).zzyyxwyzwyywwyzw, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((l_305 |= (((((l_281 = l_280.s5) , 0UL) , (l_302 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_282.xy)))), ((VECTOR(uint8_t, 16))(l_283.yywyywzyzywwzxxx)).s5f))), 0UL, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_284.s7e)), ((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_285.se0)))).yxyx, ((VECTOR(int8_t, 2))(l_286.s71)).xxyx))).hi))))).xyxyyyyy)), ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(0x47L, 0x45L)).xxxx, ((VECTOR(int8_t, 2))(l_287.yx)).yxyx))).wzxwywzx))), ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_288.yxyyyyyxyyyxyxyy)).scf16)))), ((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 8))(l_289.xyxxxyxy)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(0x9BL, 0xFFL, ((VECTOR(uint8_t, 4))(l_290.yxxy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(l_291.s4a285664)).s47))).xxxy)), ((VECTOR(uint8_t, 4))(l_292.s1435)), 3UL, 1UL)).s6b13, ((VECTOR(uint8_t, 16))(l_293.xyyyxxxxxyyyyxxx)).sbec4, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 16))(1UL, ((l_271.s6 = l_294) , l_295), 0UL, ((VECTOR(uint8_t, 4))(2UL)), l_296, l_297, ((VECTOR(uint8_t, 2))(0x80L)), FAKE_DIVERGE(p_1342->global_1_offset, get_global_id(1), 10), 0x6DL, l_298, 255UL, 255UL)).sd3ec, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0xECL)))))))).odd, (uint8_t)l_299, (uint8_t)0x7AL))).xxyx)).yzywywwx, (uint8_t)l_300, (uint8_t)l_301[5]))).s3373747500441400))))).s7cdd, ((VECTOR(uint8_t, 4))(0x35L))))).hi)).yyxyyyxxxxyyyxyy)).s648d, ((VECTOR(uint8_t, 4))(250UL)))))))).wwzxyzyx))).s3, ((VECTOR(uint8_t, 8))(0xB2L)), 0UL, ((VECTOR(uint8_t, 4))(0x88L)))).sa, ((VECTOR(uint8_t, 4))(0x5DL)), ((VECTOR(uint8_t, 4))(2UL)), 0UL, 2UL, 0xE3L, 1UL)).s0)) , l_303) , l_304)) , l_306), l_307[0], 0x774DBBF2L, 1L)).hi, ((VECTOR(int32_t, 2))(1L))))).xxxyyyxxyyyxyxyx))).lo))))).odd))).xyzxyzywzwxywwxx)).sbe45))).even, ((VECTOR(int32_t, 2))(0x19A36CF7L))))).xxyyyyxx)).s32, ((VECTOR(int32_t, 2))(0x2D869633L))))).lo));
                    unsigned int result = 0;
                    result += l_265;
                    result += l_266;
                    result += l_267.y;
                    result += l_267.x;
                    result += l_268;
                    result += l_269;
                    int l_270_i0, l_270_i1;
                    for (l_270_i0 = 0; l_270_i0 < 2; l_270_i0++) {
                        for (l_270_i1 = 0; l_270_i1 < 4; l_270_i1++) {
                            result += l_270[l_270_i0][l_270_i1];
                        }
                    }
                    result += l_271.sf;
                    result += l_271.se;
                    result += l_271.sd;
                    result += l_271.sc;
                    result += l_271.sb;
                    result += l_271.sa;
                    result += l_271.s9;
                    result += l_271.s8;
                    result += l_271.s7;
                    result += l_271.s6;
                    result += l_271.s5;
                    result += l_271.s4;
                    result += l_271.s3;
                    result += l_271.s2;
                    result += l_271.s1;
                    result += l_271.s0;
                    result += l_272.s7;
                    result += l_272.s6;
                    result += l_272.s5;
                    result += l_272.s4;
                    result += l_272.s3;
                    result += l_272.s2;
                    result += l_272.s1;
                    result += l_272.s0;
                    result += l_273.sf;
                    result += l_273.se;
                    result += l_273.sd;
                    result += l_273.sc;
                    result += l_273.sb;
                    result += l_273.sa;
                    result += l_273.s9;
                    result += l_273.s8;
                    result += l_273.s7;
                    result += l_273.s6;
                    result += l_273.s5;
                    result += l_273.s4;
                    result += l_273.s3;
                    result += l_273.s2;
                    result += l_273.s1;
                    result += l_273.s0;
                    result += l_274.y;
                    result += l_274.x;
                    result += l_275;
                    result += l_276;
                    result += l_277;
                    result += l_278;
                    result += l_279;
                    result += l_280.sf;
                    result += l_280.se;
                    result += l_280.sd;
                    result += l_280.sc;
                    result += l_280.sb;
                    result += l_280.sa;
                    result += l_280.s9;
                    result += l_280.s8;
                    result += l_280.s7;
                    result += l_280.s6;
                    result += l_280.s5;
                    result += l_280.s4;
                    result += l_280.s3;
                    result += l_280.s2;
                    result += l_280.s1;
                    result += l_280.s0;
                    result += l_281;
                    result += l_282.w;
                    result += l_282.z;
                    result += l_282.y;
                    result += l_282.x;
                    result += l_283.w;
                    result += l_283.z;
                    result += l_283.y;
                    result += l_283.x;
                    result += l_284.sf;
                    result += l_284.se;
                    result += l_284.sd;
                    result += l_284.sc;
                    result += l_284.sb;
                    result += l_284.sa;
                    result += l_284.s9;
                    result += l_284.s8;
                    result += l_284.s7;
                    result += l_284.s6;
                    result += l_284.s5;
                    result += l_284.s4;
                    result += l_284.s3;
                    result += l_284.s2;
                    result += l_284.s1;
                    result += l_284.s0;
                    result += l_285.sf;
                    result += l_285.se;
                    result += l_285.sd;
                    result += l_285.sc;
                    result += l_285.sb;
                    result += l_285.sa;
                    result += l_285.s9;
                    result += l_285.s8;
                    result += l_285.s7;
                    result += l_285.s6;
                    result += l_285.s5;
                    result += l_285.s4;
                    result += l_285.s3;
                    result += l_285.s2;
                    result += l_285.s1;
                    result += l_285.s0;
                    result += l_286.s7;
                    result += l_286.s6;
                    result += l_286.s5;
                    result += l_286.s4;
                    result += l_286.s3;
                    result += l_286.s2;
                    result += l_286.s1;
                    result += l_286.s0;
                    result += l_287.w;
                    result += l_287.z;
                    result += l_287.y;
                    result += l_287.x;
                    result += l_288.y;
                    result += l_288.x;
                    result += l_289.y;
                    result += l_289.x;
                    result += l_290.y;
                    result += l_290.x;
                    result += l_291.sf;
                    result += l_291.se;
                    result += l_291.sd;
                    result += l_291.sc;
                    result += l_291.sb;
                    result += l_291.sa;
                    result += l_291.s9;
                    result += l_291.s8;
                    result += l_291.s7;
                    result += l_291.s6;
                    result += l_291.s5;
                    result += l_291.s4;
                    result += l_291.s3;
                    result += l_291.s2;
                    result += l_291.s1;
                    result += l_291.s0;
                    result += l_292.s7;
                    result += l_292.s6;
                    result += l_292.s5;
                    result += l_292.s4;
                    result += l_292.s3;
                    result += l_292.s2;
                    result += l_292.s1;
                    result += l_292.s0;
                    result += l_293.y;
                    result += l_293.x;
                    result += l_294;
                    result += l_295;
                    result += l_296;
                    result += l_297;
                    result += l_298;
                    result += l_299;
                    result += l_300;
                    int l_301_i0;
                    for (l_301_i0 = 0; l_301_i0 < 6; l_301_i0++) {
                        result += l_301[l_301_i0];
                    }
                    result += l_302;
                    result += l_303;
                    result += l_304;
                    result += l_305;
                    result += l_306;
                    int l_307_i0;
                    for (l_307_i0 = 0; l_307_i0 < 1; l_307_i0++) {
                        result += l_307[l_307_i0];
                    }
                    result += l_308;
                    result += l_309;
                    result += l_310;
                    atomic_add(&p_1342->l_special_values[40], result);
                }
                else
                { /* block id: 93 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 96 */
                uint16_t *l_325 = (void*)0;
                uint16_t *l_326[5][4][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                p_1342->g_312[6][0] = (l_311 = &p_75);
                p_1342->g_312[5][0] = (void*)0;
                p_75 ^= ((p_1342->g_90.y == (p_1342->g_142.sf = (((p_1342->g_171.s3 >= (safe_sub_func_int16_t_s_s(3L, ((p_1342->g_233.s5 , p_1342->g_315) == l_216)))) > (safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((p_1342->g_221.s5 |= (safe_add_func_int8_t_s_s((-3L), p_76))), ((safe_add_func_uint64_t_u_u((GROUP_DIVERGE(1, 1) | 0x09L), p_76)) , 0x72E0L))), (*l_82))), (*p_1342->g_9)))) | 0x687AEB9AL))) ^ p_1342->g_147);
            }
            p_75 |= ((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((p_1342->g_176.s2 ^= (((*l_376) &= (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_339 != (l_341 = (void*)0)) | ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(p_1342->g_342.s6203)).yyxyzxzzwxxzzwzy, ((VECTOR(int8_t, 2))((-9L), 9L)).yyxxxyyxyxyyxxyy))).s7), (1UL && (GROUP_DIVERGE(1, 1) == (((safe_mul_func_uint8_t_u_u(4UL, ((VECTOR(uint8_t, 16))(0xA1L, ((VECTOR(uint8_t, 2))(l_345.xy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 16))((++p_1342->g_87), 0xE0L, (safe_sub_func_uint32_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_350.wywyzwzxxwzwwzwy)).s9d)).yxyyyyyyyxxxxxxy)).s08, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(l_351.xyyxyxxx)).s03, ((VECTOR(int16_t, 2))(0x0FE7L, 0x1F44L)))))))).yyxy, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1342->g_352.xywxwwwz)).s3140577175323101)))).s3d14, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(0x0CDCL, ((VECTOR(int16_t, 4))(l_353.s4622)), 8L, (-3L), (-1L))).s02, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(l_354.zxyxyxzzwxxwxzzw)).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(l_355.s6f)), (int16_t)(GROUP_DIVERGE(1, 1) < l_356[0][1])))).xyxyxxyyyxyyxxxx)).lo))).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_357.xyyyxyyxyyyyxxxx)).odd)).hi))), 0x2D77L, ((VECTOR(int16_t, 2))((-1L), 0x1DF1L)), 0x491EL)).s24))))).yxxy)))))).odd, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(l_358.xxxyyyxxyxxyyxyy)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(p_1342->g_359.yyxx)).hi, ((VECTOR(int16_t, 8))(p_1342->g_360.zzyyywxx)).s11))), ((VECTOR(int16_t, 2))(p_1342->g_361.s03)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(l_362.yxxx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_363.yyyx)).yyyzywyw)).lo))).yxzzyyzw, ((VECTOR(int16_t, 2))(0x7286L, 0x6623L)).yyyyyxyy))).s04))))).xyxyxyyyyxyyxxyy))), ((VECTOR(int16_t, 2))(l_364.s65)).yxyyyxxxyyyxyyyy))).s7b))))))).lo , (safe_div_func_int8_t_s_s((**l_235), ((((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_367.yyxxxxxxxxyxyyyx)).hi)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_368.s4067)), p_76, (**l_235), (-1L), 2L)).hi, ((VECTOR(int32_t, 2))((-8L), 5L)).xxyx))).z && ((safe_div_func_uint64_t_u_u((safe_add_func_int8_t_s_s((0x643438F6L | 0xCAE912BDL), (*l_79))), p_76)) && 0x44F4C391BBABF514L)) && p_77)))), 0x30714826L)), p_1342->g_359.y, 246UL, p_1342->g_136.s2, ((VECTOR(uint8_t, 4))(0xB9L)), ((VECTOR(uint8_t, 2))(0x6AL)), 0x9DL, ((VECTOR(uint8_t, 2))(0x85L)), 0x4CL)).lo, ((VECTOR(uint8_t, 8))(0xAEL)), ((VECTOR(uint8_t, 8))(0UL))))))), 0xC7L, 0UL, 0x64L, 0x43L, 249UL)).s7)) || p_77) | p_1342->g_233.s0))))), (**l_235))) & GROUP_DIVERGE(1, 1)), l_373))) == FAKE_DIVERGE(p_1342->group_0_offset, get_group_id(0), 10))), l_378)), p_76)) < 0x7C0AL);
            p_75 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x605CAF8AL)), 0L, (-5L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(0x749AB629L, 1L)).xxyx, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x5BF40DD8L, 6L)).yyyyxxyxyyyyxxyy))))).s325e, ((VECTOR(int32_t, 8))(0L, 0x41FE179EL, 0x7D29A8BBL, ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(0x4A38F2BCL, 0x0979C6E8L)), 0L)), 0x53548755L)).odd)))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-2L), (7L != (8UL | (p_76 == 3UL))), (-1L), 0x18F7468FL)))).xxzwzwwx)).lo, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(l_381.s1422565653622251)).s43fa, ((VECTOR(int32_t, 4))((*p_1342->g_9), 3L, 0x6EBE300FL, 6L)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(l_382.s5470)).xzyxzzxz, ((VECTOR(int32_t, 16))(0x51693C9BL, ((VECTOR(int32_t, 4))(l_383.s4948)), (-4L), ((VECTOR(int32_t, 16))(p_1342->g_384.se1ce6d3a4313f6bc)).sc, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(0x563D44AFL, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x74C47196L, 3L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7A298CF6L, 0L)), 0x15164092L, 0L)).lo))))).yxyyyxyy, ((VECTOR(int32_t, 8))(p_1342->g_385.yxyxzxyy))))).s25)), 0x160DF3A8L, (l_386 |= 0x72AA9E2FL), (-1L), 3L))))), 0x26FCF836L)).lo))).hi)))))).wxxwwxzwyxwywwyw, ((VECTOR(int32_t, 16))(l_387.ywyxxwzwxzxzzzwy)), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(p_1342->g_388.yy)).xxyxxyyxxyyyxxyy, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_389.s86acdc55534d4d67)).s29fb)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1342->g_390.wy)), 0x6244A540L, ((VECTOR(int32_t, 2))(7L, 0L)), p_75, 0x6D113772L, (-1L))).s41))).yyyy)).zwyzyzzy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_391.sa17dc35034025a55)).even)))), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_392.xyxxxxxx)))).s0614302110544042)).s3178, ((VECTOR(int32_t, 16))(0x20C6CBE8L, 0x04888484L, ((VECTOR(int32_t, 8))(l_393.s13106415)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_394.yyxxwzwxzwxxwwxw)).se1, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_395.yxyx)).yzwzyzzxyywzxwzz)).sd973)).lo))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x48946935L, 0x32BE493BL)).xyxyyxyyxxxyxxyx)).sc8))).hi, (-1L), (*p_1342->g_9), 0x0FE511C4L, 0x60D6F371L, 9L)).se726))).yxwyzzyz, (int32_t)p_76)))))), ((VECTOR(int32_t, 8))(4L))))).s35, ((VECTOR(int32_t, 2))(1L))))).xyxxxyyyyyyxxyyy)).s41e3)).w)))))).sb9)))), (-3L), 0x671C15C1L)).even, ((VECTOR(int32_t, 4))(0L))))).zzwzwwxxzywwwywy)).se;
            for (p_1342->g_193 = 0; (p_1342->g_193 >= 21); ++p_1342->g_193)
            { /* block id: 113 */
                uint64_t **l_405 = &l_375;
                int32_t l_414[10][7] = {{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L}};
                int32_t l_419 = (-8L);
                int64_t l_457 = 0x2369EEDF23FC86DAL;
                int i, j;
                l_419 = ((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((p_1342->g_233.s2 &= (p_76 , l_404)) != ((p_1342->g_124 , (((*l_405) = &p_1342->g_190) != (l_406[0][1][5] = &p_1342->g_190))) , (safe_sub_func_int64_t_s_s(((p_1342->g_16.s3 >= ((VECTOR(int64_t, 8))(l_409.s75156fe4)).s6) < 0x91L), (p_1342->g_410 != ((safe_add_func_int16_t_s_s(((+(l_414[8][4] = ((VECTOR(int16_t, 2))(p_1342->g_413.wx)).lo)) >= ((safe_mul_func_int16_t_s_s(0x79DFL, p_77)) | l_417)), l_418[1])) , (void*)0)))))), p_76)), (**l_235))) < 0UL), p_1342->g_385.y)) != GROUP_DIVERGE(2, 1));
                for (l_419 = 0; (l_419 >= 14); l_419 = safe_add_func_uint32_t_u_u(l_419, 7))
                { /* block id: 121 */
                    uint8_t l_456 = 249UL;
                    VECTOR(int32_t, 4) l_458 = (VECTOR(int32_t, 4))(0x03408C66L, (VECTOR(int32_t, 2))(0x03408C66L, 0L), 0L);
                    int i;
                    l_458.y ^= ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(p_1342->g_422.zwxxywzw)).s07, (int32_t)p_76, (int32_t)(p_1342->g_176.s1 == ((((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_75, (0x1C13L != ((((((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(((((safe_div_func_int16_t_s_s((p_75 < (safe_add_func_uint64_t_u_u(p_1342->g_390.y, (safe_mul_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((((*l_79) && (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_455[2] != (((p_1342->g_193 == l_414[8][4]) & p_75) | (*p_1342->g_146))), p_75)), 14)), p_75)), 4))) ^ 1UL) < 0L), p_76)) <= l_456), l_414[8][4])) && p_1342->g_388.x), l_457)), GROUP_DIVERGE(0, 1))) , l_414[8][4]), 0xDAC8L))))), p_1342->g_360.w)) | p_1342->g_10[2][1][0]) ^ (**l_235)) || p_77), p_1342->g_385.w)), p_1342->g_190)) , p_1342->g_124) && FAKE_DIVERGE(p_1342->global_0_offset, get_global_id(0), 10)) < p_1342->g_87) < l_414[8][4]) | 5L)))), (**l_235))) >= p_76), 0x61FEL)) < 9L) & (-7L)) == p_76))))).xxxyyxxx, ((VECTOR(int32_t, 8))(0x67009912L))))).s3;
                }
                return p_75;
            }
        }
        else
        { /* block id: 126 */
            int32_t l_461 = 0x4648AAF2L;
            l_461 &= (safe_rshift_func_int16_t_s_s(p_75, 6));
            p_75 |= (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(7UL, 0UL)).odd, (&p_76 != (void*)0))), (safe_lshift_func_int8_t_s_s(0x59L, 4))));
            if ((atomic_inc(&p_1342->l_atomic_input[0]) == 0))
            { /* block id: 130 */
                int32_t l_468 = (-1L);
                uint32_t l_469 = 0x4C5110F5L;
                int32_t l_470[7];
                uint16_t l_471 = 0xD6E2L;
                int i;
                for (i = 0; i < 7; i++)
                    l_470[i] = 7L;
                l_471 |= (l_470[0] |= (l_469 = l_468));
                unsigned int result = 0;
                result += l_468;
                result += l_469;
                int l_470_i0;
                for (l_470_i0 = 0; l_470_i0 < 7; l_470_i0++) {
                    result += l_470[l_470_i0];
                }
                result += l_471;
                atomic_add(&p_1342->l_special_values[0], result);
            }
            else
            { /* block id: 134 */
                (1 + 1);
            }
        }
    }
    l_501 = (1L | (((l_500 ^= ((p_1342->g_190 = (((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_472.s540e1dd6d35fb65a)).odd)), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1342->g_473.s2121fd2a)).lo)).xxzzyyxx, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(p_1342->g_474.s5607)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_1342->g_475.xyyyyxxyyyyyxxyy)).even)).hi))).wwyxzwyx))))).s95, ((VECTOR(int16_t, 8))(0L, p_1342->g_473.s4, (-8L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_476.xy)), 9L, 1L)), p_76, (-6L), 0L, 9L)).s2, ((((*l_477) &= p_1342->g_352.z) , ((*l_499) &= (((safe_div_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (p_1342->g_174.y = ((*p_1342->g_146) ^ (safe_mod_func_uint8_t_u_u(((*l_86) = p_75), (((p_75 & (safe_mul_func_int16_t_s_s(((((((l_486 ^= ((VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL)).even) >= ((safe_add_func_uint16_t_u_u(((((safe_mul_func_int16_t_s_s((((GROUP_DIVERGE(1, 1) , (((VECTOR(uint64_t, 2))(0x7B66B1D3EB509B68L, 1UL)).odd ^ (safe_lshift_func_int16_t_s_s((&p_75 == (void*)0), p_1342->g_221.sf)))) , p_76) || 0x7BC0L), 0x229AL)) , (*p_1342->g_146)) ^ (*p_1342->g_146)) >= (-4L)), 0x3369L)) | 4294967295UL)) || p_77) | 0x7C0D1A7AL) || 0x507B69D7L) < p_75), p_76))) , 0x5DL) | (*p_1342->g_146)))))))) && p_1342->g_24) & 0x5B9D9DF8L))) , p_76), ((VECTOR(int16_t, 2))(0x767BL)), (-4L))).s16))).even == p_1342->g_188)) && FAKE_DIVERGE(p_1342->global_2_offset, get_global_id(2), 10))) > (*l_79)) >= (*p_1342->g_146)));
    for (p_76 = (-2); (p_76 > 17); p_76 = safe_add_func_int16_t_s_s(p_76, 7))
    { /* block id: 149 */
        int32_t l_504 = 0L;
        int32_t l_505 = 0x3FE6257DL;
        int32_t l_506 = 0x09CA9A2EL;
        int32_t l_507 = 0x0D89FF22L;
        uint32_t l_508 = 4294967295UL;
        uint8_t *l_517 = (void*)0;
        uint8_t *l_518 = (void*)0;
        uint8_t *l_519 = (void*)0;
        int32_t *l_524 = (void*)0;
        int32_t l_527 = 0x325F2B5CL;
        int32_t l_528 = 0x4B78978DL;
        int32_t l_529 = 0L;
        int32_t l_530 = 0x7F84FCF6L;
        int32_t l_531 = 0x562B773EL;
        int32_t l_532 = 0x27AAB6A3L;
        int32_t l_533 = (-1L);
        uint32_t l_534 = 0x52E65A23L;
        VECTOR(uint64_t, 8) l_556 = (VECTOR(uint64_t, 8))(0xF041E7FE8DFD7C31L, (VECTOR(uint64_t, 4))(0xF041E7FE8DFD7C31L, (VECTOR(uint64_t, 2))(0xF041E7FE8DFD7C31L, 0xCDDD6752DD6CA487L), 0xCDDD6752DD6CA487L), 0xCDDD6752DD6CA487L, 0xF041E7FE8DFD7C31L, 0xCDDD6752DD6CA487L);
        int i;
        ++l_508;
        if (((((VECTOR(uint32_t, 4))(l_511.s0462)).w , (l_506 , ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((p_1342->g_520[6] &= ((*l_86) = (l_507 ^= (l_516 == l_341)))) == ((VECTOR(uint8_t, 16))(l_521.s4075735315677254)).s6), 7)), 15)) && (p_1342->g_176.s3 |= (p_75 , 0x58451A808B6CEFD5L))))) , (*l_79)))
        { /* block id: 155 */
            int32_t l_522 = 0x18F4E983L;
            l_522 = l_504;
        }
        else
        { /* block id: 157 */
            int32_t *l_523 = (void*)0;
            l_524 = l_523;
            for (l_508 = 0; (l_508 > 49); l_508++)
            { /* block id: 161 */
                return p_1342->g_24;
            }
        }
        --l_534;
        if ((safe_mod_func_uint32_t_u_u(0UL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x222E8A11L, 4L, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((65532UL & ((safe_sub_func_uint64_t_u_u(18446744073709551613UL, GROUP_DIVERGE(1, 1))) == ((safe_sub_func_int32_t_s_s(p_77, l_508)) || (l_527 |= (-9L))))) == (((VECTOR(int8_t, 2))(l_549.xy)).hi | 0x52L)) != GROUP_DIVERGE(1, 1)), (safe_lshift_func_uint8_t_u_u((((*l_86)++) >= (safe_mod_func_int8_t_s_s(((p_76 & p_1342->g_359.y) ^ 0xAEL), p_76))), (*l_79))))), p_1342->g_413.x)), 7)), ((VECTOR(int32_t, 4))(3L)), p_76, 0L, (-1L), 0x4471DFB2L, 2L, 1L, ((VECTOR(int32_t, 4))((-3L))), 0x5FDFD35BL)), ((VECTOR(int32_t, 16))(3L))))).odd, ((VECTOR(int32_t, 8))(2L))))), 0x7A3595B0L, l_529, (-1L), ((VECTOR(int32_t, 2))(0x5ACC3D51L)), 0x5BA276AEL)))).s8)))
        { /* block id: 168 */
            if (p_76)
                break;
        }
        else
        { /* block id: 170 */
            l_556.s4 |= p_76;
            p_1342->g_312[6][0] = &p_1342->g_188;
        }
    }
    return (*l_79);
}


/* ------------------------------------------ */
/* 
 * reads : p_1342->g_9 p_1342->g_10 p_1342->g_103 p_1342->g_comm_values p_1342->g_62 p_1342->g_63
 * writes: p_1342->g_78 p_1342->g_124
 */
uint16_t  func_99(uint32_t  p_100, uint32_t  p_101, struct S1 * p_1342)
{ /* block id: 22 */
    int64_t **l_102[6];
    VECTOR(uint32_t, 2) l_105 = (VECTOR(uint32_t, 2))(4294967289UL, 0x70EDC5ECL);
    VECTOR(int8_t, 2) l_108 = (VECTOR(int8_t, 2))(1L, 0x29L);
    VECTOR(int8_t, 8) l_109 = (VECTOR(int8_t, 8))(0x3DL, (VECTOR(int8_t, 4))(0x3DL, (VECTOR(int8_t, 2))(0x3DL, (-1L)), (-1L)), (-1L), 0x3DL, (-1L));
    int8_t *l_120 = (void*)0;
    int8_t *l_121 = (void*)0;
    int8_t *l_122 = (void*)0;
    int8_t *l_123[8][5][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_125 = 0L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_102[i] = (void*)0;
    l_125 = (((*p_1342->g_9) & ((p_1342->g_78 = (void*)0) == p_1342->g_103)) != ((((VECTOR(uint32_t, 8))(l_105.yxyyyxxy)).s6 >= ((+((safe_mod_func_uint64_t_u_u(0UL, (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_108.xxyyyxxy)).hi, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(0L, p_1342->g_comm_values[p_1342->tid], 0L, 0x5AL, 0x60L, ((VECTOR(int8_t, 2))(l_109.s13)), (-7L))).even, (int8_t)(+(p_1342->g_124 = (safe_rshift_func_uint8_t_u_u((((!p_1342->g_62.s0) || (safe_add_func_int16_t_s_s(((!((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))((p_101 , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(0x1575L, ((safe_rshift_func_uint8_t_u_u(0UL, 4)) & l_108.y))), 14))), p_101, p_1342->g_comm_values[p_1342->tid], 0UL, ((VECTOR(uint64_t, 4))(7UL)))).s7602417716667044)).s2) >= p_1342->g_10[2][1][0]), p_101))) , FAKE_DIVERGE(p_1342->group_0_offset, get_group_id(0), 10)), l_105.y)))), (int8_t)p_100))), 0x52L, ((VECTOR(int8_t, 4))(1L)), (-8L), ((VECTOR(int8_t, 4))(0x2FL)), 0x67L, (-10L))).lo)).s00)).yyyyyyyy, (int8_t)0L))).even, ((VECTOR(int8_t, 4))(0x7BL))))).wyyzxywz, ((VECTOR(int8_t, 8))((-7L))), ((VECTOR(int8_t, 8))(0x32L))))), ((VECTOR(int8_t, 8))(2L)), ((VECTOR(int8_t, 8))((-9L)))))).s47)), 1L, 0L)).w, p_1342->g_63.y, 0x4BL, 1L, 1L, ((VECTOR(int8_t, 2))(0x35L)), 0x4FL)).s7, 0x55L, 0x3EL)).xwyzzzzwxzyzxzzz)).sf ^ 0L))) < 0x165EL)) ^ p_100)) == 0UL));
    return l_109.s6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[30];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 30; i++)
            l_comm_values[i] = 1;
    struct S1 c_1343;
    struct S1* p_1342 = &c_1343;
    struct S1 c_1344 = {
        {{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}},{{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L},{0x61B583DCL,0x13C61C71L,3L}}}, // p_1342->g_10
        &p_1342->g_10[2][1][0], // p_1342->g_9
        (VECTOR(int8_t, 2))(0x19L, 1L), // p_1342->g_15
        (VECTOR(int32_t, 8))(0x53E99730L, (VECTOR(int32_t, 4))(0x53E99730L, (VECTOR(int32_t, 2))(0x53E99730L, 0x562A04F7L), 0x562A04F7L), 0x562A04F7L, 0x53E99730L, 0x562A04F7L), // p_1342->g_16
        0xD20A2E71L, // p_1342->g_24
        (VECTOR(uint32_t, 8))(0x3775ED14L, (VECTOR(uint32_t, 4))(0x3775ED14L, (VECTOR(uint32_t, 2))(0x3775ED14L, 0xA3ABE652L), 0xA3ABE652L), 0xA3ABE652L, 0x3775ED14L, 0xA3ABE652L), // p_1342->g_62
        (VECTOR(uint32_t, 2))(0xDF13F3F2L, 0UL), // p_1342->g_63
        (void*)0, // p_1342->g_78
        1UL, // p_1342->g_87
        (VECTOR(int16_t, 4))(0x6046L, (VECTOR(int16_t, 2))(0x6046L, 1L), 1L), // p_1342->g_90
        0L, // p_1342->g_104
        &p_1342->g_104, // p_1342->g_103
        (-10L), // p_1342->g_124
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5C91CA63L), 0x5C91CA63L), 0x5C91CA63L, 0L, 0x5C91CA63L), // p_1342->g_136
        (VECTOR(uint16_t, 16))(0x7E3EL, (VECTOR(uint16_t, 4))(0x7E3EL, (VECTOR(uint16_t, 2))(0x7E3EL, 65531UL), 65531UL), 65531UL, 0x7E3EL, 65531UL, (VECTOR(uint16_t, 2))(0x7E3EL, 65531UL), (VECTOR(uint16_t, 2))(0x7E3EL, 65531UL), 0x7E3EL, 65531UL, 0x7E3EL, 65531UL), // p_1342->g_142
        0x54L, // p_1342->g_147
        &p_1342->g_147, // p_1342->g_146
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4FL), 0x4FL), 0x4FL, 1L, 0x4FL), // p_1342->g_171
        (VECTOR(int64_t, 4))(0x19AF7E88CCECE4D9L, (VECTOR(int64_t, 2))(0x19AF7E88CCECE4D9L, (-1L)), (-1L)), // p_1342->g_174
        (VECTOR(int64_t, 8))(0x0A9C157A62254FA0L, (VECTOR(int64_t, 4))(0x0A9C157A62254FA0L, (VECTOR(int64_t, 2))(0x0A9C157A62254FA0L, 0x4BADE560F2390746L), 0x4BADE560F2390746L), 0x4BADE560F2390746L, 0x0A9C157A62254FA0L, 0x4BADE560F2390746L), // p_1342->g_176
        0L, // p_1342->g_188
        0xE0B9C208A202F83CL, // p_1342->g_190
        7L, // p_1342->g_193
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1CE3F2E6L), 0x1CE3F2E6L), // p_1342->g_220
        (VECTOR(uint16_t, 16))(0x0DADL, (VECTOR(uint16_t, 4))(0x0DADL, (VECTOR(uint16_t, 2))(0x0DADL, 0x6D1BL), 0x6D1BL), 0x6D1BL, 0x0DADL, 0x6D1BL, (VECTOR(uint16_t, 2))(0x0DADL, 0x6D1BL), (VECTOR(uint16_t, 2))(0x0DADL, 0x6D1BL), 0x0DADL, 0x6D1BL, 0x0DADL, 0x6D1BL), // p_1342->g_221
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1342->g_233
        {{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188},{&p_1342->g_188}}, // p_1342->g_312
        0x75680E21L, // p_1342->g_316
        &p_1342->g_316, // p_1342->g_315
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1342->g_342
        (VECTOR(int16_t, 4))(0x1373L, (VECTOR(int16_t, 2))(0x1373L, 0x2652L), 0x2652L), // p_1342->g_352
        (VECTOR(int16_t, 2))(0x1EE5L, 5L), // p_1342->g_359
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2568L), 0x2568L), // p_1342->g_360
        (VECTOR(int16_t, 8))(0x2061L, (VECTOR(int16_t, 4))(0x2061L, (VECTOR(int16_t, 2))(0x2061L, 0L), 0L), 0L, 0x2061L, 0L), // p_1342->g_361
        (VECTOR(int32_t, 16))(0x31E68819L, (VECTOR(int32_t, 4))(0x31E68819L, (VECTOR(int32_t, 2))(0x31E68819L, (-2L)), (-2L)), (-2L), 0x31E68819L, (-2L), (VECTOR(int32_t, 2))(0x31E68819L, (-2L)), (VECTOR(int32_t, 2))(0x31E68819L, (-2L)), 0x31E68819L, (-2L), 0x31E68819L, (-2L)), // p_1342->g_384
        (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), // p_1342->g_385
        (VECTOR(int32_t, 2))(8L, 0x4C40B52EL), // p_1342->g_388
        (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L)), // p_1342->g_390
        (void*)0, // p_1342->g_410
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x38B3L), 0x38B3L), // p_1342->g_413
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x20DAAA67L), 0x20DAAA67L), // p_1342->g_422
        (VECTOR(int16_t, 16))(0x0DDAL, (VECTOR(int16_t, 4))(0x0DDAL, (VECTOR(int16_t, 2))(0x0DDAL, 0x56EAL), 0x56EAL), 0x56EAL, 0x0DDAL, 0x56EAL, (VECTOR(int16_t, 2))(0x0DDAL, 0x56EAL), (VECTOR(int16_t, 2))(0x0DDAL, 0x56EAL), 0x0DDAL, 0x56EAL, 0x0DDAL, 0x56EAL), // p_1342->g_473
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x74C9L), 0x74C9L), 0x74C9L, 1L, 0x74C9L), // p_1342->g_474
        (VECTOR(int16_t, 2))(0x70E5L, 0x2C29L), // p_1342->g_475
        1UL, // p_1342->g_478
        {0x38FFBD81L,(-1L),0x38FFBD81L,0x38FFBD81L,(-1L),0x38FFBD81L,0x38FFBD81L,(-1L),0x38FFBD81L}, // p_1342->g_520
        3UL, // p_1342->g_573
        (void*)0, // p_1342->g_584
        &p_1342->g_87, // p_1342->g_594
        &p_1342->g_24, // p_1342->g_611
        (void*)0, // p_1342->g_626
        &p_1342->g_626, // p_1342->g_625
        &p_1342->g_312[2][0], // p_1342->g_631
        2UL, // p_1342->g_651
        &p_1342->g_78, // p_1342->g_657
        &p_1342->g_657, // p_1342->g_656
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1342->g_698
        (void*)0, // p_1342->g_727
        &p_1342->g_727, // p_1342->g_726
        {&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315,&p_1342->g_315}, // p_1342->g_808
        &p_1342->g_808[2], // p_1342->g_807
        0x0F7A3721L, // p_1342->g_907
        (VECTOR(uint16_t, 2))(6UL, 1UL), // p_1342->g_914
        (VECTOR(uint16_t, 2))(0xC51AL, 0xC7D1L), // p_1342->g_922
        &p_1342->g_9, // p_1342->g_952
        &p_1342->g_312[6][0], // p_1342->g_953
        9L, // p_1342->g_965
        0x5234C75E52C603F1L, // p_1342->g_969
        {0x585252D3L}, // p_1342->g_972
        &p_1342->g_972, // p_1342->g_974
        &p_1342->g_974, // p_1342->g_973
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1342->g_998
        (void*)0, // p_1342->g_1043
        (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L)), // p_1342->g_1045
        (VECTOR(uint8_t, 2))(254UL, 0xF7L), // p_1342->g_1046
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x34E6L), 0x34E6L), 0x34E6L, 1L, 0x34E6L, (VECTOR(int16_t, 2))(1L, 0x34E6L), (VECTOR(int16_t, 2))(1L, 0x34E6L), 1L, 0x34E6L, 1L, 0x34E6L), // p_1342->g_1052
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1342->g_1053
        (VECTOR(int8_t, 8))(0x23L, (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 1L), 1L), 1L, 0x23L, 1L), // p_1342->g_1058
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L)), // p_1342->g_1061
        (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 6L), 6L), 6L, (-4L), 6L, (VECTOR(int8_t, 2))((-4L), 6L), (VECTOR(int8_t, 2))((-4L), 6L), (-4L), 6L, (-4L), 6L), // p_1342->g_1154
        (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, 0L), 0L), // p_1342->g_1157
        (VECTOR(int32_t, 2))(0L, 0x081531D5L), // p_1342->g_1173
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-2L)), (-2L)), (-2L), (-4L), (-2L)), // p_1342->g_1203
        (VECTOR(int16_t, 16))(0x4B8CL, (VECTOR(int16_t, 4))(0x4B8CL, (VECTOR(int16_t, 2))(0x4B8CL, 7L), 7L), 7L, 0x4B8CL, 7L, (VECTOR(int16_t, 2))(0x4B8CL, 7L), (VECTOR(int16_t, 2))(0x4B8CL, 7L), 0x4B8CL, 7L, 0x4B8CL, 7L), // p_1342->g_1216
        (VECTOR(int16_t, 2))(0L, (-1L)), // p_1342->g_1217
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xE40DA1A3E8E2E39FL), 0xE40DA1A3E8E2E39FL), 0xE40DA1A3E8E2E39FL, 0UL, 0xE40DA1A3E8E2E39FL, (VECTOR(uint64_t, 2))(0UL, 0xE40DA1A3E8E2E39FL), (VECTOR(uint64_t, 2))(0UL, 0xE40DA1A3E8E2E39FL), 0UL, 0xE40DA1A3E8E2E39FL, 0UL, 0xE40DA1A3E8E2E39FL), // p_1342->g_1233
        {4294967295UL}, // p_1342->g_1237
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC2D4L), 0xC2D4L), 0xC2D4L, 0UL, 0xC2D4L, (VECTOR(uint16_t, 2))(0UL, 0xC2D4L), (VECTOR(uint16_t, 2))(0UL, 0xC2D4L), 0UL, 0xC2D4L, 0UL, 0xC2D4L), // p_1342->g_1244
        &p_1342->g_974, // p_1342->g_1256
        1L, // p_1342->g_1307
        (VECTOR(int32_t, 8))(0x69D6B106L, (VECTOR(int32_t, 4))(0x69D6B106L, (VECTOR(int32_t, 2))(0x69D6B106L, 1L), 1L), 1L, 0x69D6B106L, 1L), // p_1342->g_1331
        1UL, // p_1342->g_1332
        0, // p_1342->v_collective
        sequence_input[get_global_id(0)], // p_1342->global_0_offset
        sequence_input[get_global_id(1)], // p_1342->global_1_offset
        sequence_input[get_global_id(2)], // p_1342->global_2_offset
        sequence_input[get_local_id(0)], // p_1342->local_0_offset
        sequence_input[get_local_id(1)], // p_1342->local_1_offset
        sequence_input[get_local_id(2)], // p_1342->local_2_offset
        sequence_input[get_group_id(0)], // p_1342->group_0_offset
        sequence_input[get_group_id(1)], // p_1342->group_1_offset
        sequence_input[get_group_id(2)], // p_1342->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 30)), permutations[0][get_linear_local_id()])), // p_1342->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1343 = c_1344;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1342);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1342->g_10[i][j][k], "p_1342->g_10[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1342->g_15.x, "p_1342->g_15.x", print_hash_value);
    transparent_crc(p_1342->g_15.y, "p_1342->g_15.y", print_hash_value);
    transparent_crc(p_1342->g_16.s0, "p_1342->g_16.s0", print_hash_value);
    transparent_crc(p_1342->g_16.s1, "p_1342->g_16.s1", print_hash_value);
    transparent_crc(p_1342->g_16.s2, "p_1342->g_16.s2", print_hash_value);
    transparent_crc(p_1342->g_16.s3, "p_1342->g_16.s3", print_hash_value);
    transparent_crc(p_1342->g_16.s4, "p_1342->g_16.s4", print_hash_value);
    transparent_crc(p_1342->g_16.s5, "p_1342->g_16.s5", print_hash_value);
    transparent_crc(p_1342->g_16.s6, "p_1342->g_16.s6", print_hash_value);
    transparent_crc(p_1342->g_16.s7, "p_1342->g_16.s7", print_hash_value);
    transparent_crc(p_1342->g_24, "p_1342->g_24", print_hash_value);
    transparent_crc(p_1342->g_62.s0, "p_1342->g_62.s0", print_hash_value);
    transparent_crc(p_1342->g_62.s1, "p_1342->g_62.s1", print_hash_value);
    transparent_crc(p_1342->g_62.s2, "p_1342->g_62.s2", print_hash_value);
    transparent_crc(p_1342->g_62.s3, "p_1342->g_62.s3", print_hash_value);
    transparent_crc(p_1342->g_62.s4, "p_1342->g_62.s4", print_hash_value);
    transparent_crc(p_1342->g_62.s5, "p_1342->g_62.s5", print_hash_value);
    transparent_crc(p_1342->g_62.s6, "p_1342->g_62.s6", print_hash_value);
    transparent_crc(p_1342->g_62.s7, "p_1342->g_62.s7", print_hash_value);
    transparent_crc(p_1342->g_63.x, "p_1342->g_63.x", print_hash_value);
    transparent_crc(p_1342->g_63.y, "p_1342->g_63.y", print_hash_value);
    transparent_crc(p_1342->g_87, "p_1342->g_87", print_hash_value);
    transparent_crc(p_1342->g_90.x, "p_1342->g_90.x", print_hash_value);
    transparent_crc(p_1342->g_90.y, "p_1342->g_90.y", print_hash_value);
    transparent_crc(p_1342->g_90.z, "p_1342->g_90.z", print_hash_value);
    transparent_crc(p_1342->g_90.w, "p_1342->g_90.w", print_hash_value);
    transparent_crc(p_1342->g_104, "p_1342->g_104", print_hash_value);
    transparent_crc(p_1342->g_124, "p_1342->g_124", print_hash_value);
    transparent_crc(p_1342->g_136.s0, "p_1342->g_136.s0", print_hash_value);
    transparent_crc(p_1342->g_136.s1, "p_1342->g_136.s1", print_hash_value);
    transparent_crc(p_1342->g_136.s2, "p_1342->g_136.s2", print_hash_value);
    transparent_crc(p_1342->g_136.s3, "p_1342->g_136.s3", print_hash_value);
    transparent_crc(p_1342->g_136.s4, "p_1342->g_136.s4", print_hash_value);
    transparent_crc(p_1342->g_136.s5, "p_1342->g_136.s5", print_hash_value);
    transparent_crc(p_1342->g_136.s6, "p_1342->g_136.s6", print_hash_value);
    transparent_crc(p_1342->g_136.s7, "p_1342->g_136.s7", print_hash_value);
    transparent_crc(p_1342->g_142.s0, "p_1342->g_142.s0", print_hash_value);
    transparent_crc(p_1342->g_142.s1, "p_1342->g_142.s1", print_hash_value);
    transparent_crc(p_1342->g_142.s2, "p_1342->g_142.s2", print_hash_value);
    transparent_crc(p_1342->g_142.s3, "p_1342->g_142.s3", print_hash_value);
    transparent_crc(p_1342->g_142.s4, "p_1342->g_142.s4", print_hash_value);
    transparent_crc(p_1342->g_142.s5, "p_1342->g_142.s5", print_hash_value);
    transparent_crc(p_1342->g_142.s6, "p_1342->g_142.s6", print_hash_value);
    transparent_crc(p_1342->g_142.s7, "p_1342->g_142.s7", print_hash_value);
    transparent_crc(p_1342->g_142.s8, "p_1342->g_142.s8", print_hash_value);
    transparent_crc(p_1342->g_142.s9, "p_1342->g_142.s9", print_hash_value);
    transparent_crc(p_1342->g_142.sa, "p_1342->g_142.sa", print_hash_value);
    transparent_crc(p_1342->g_142.sb, "p_1342->g_142.sb", print_hash_value);
    transparent_crc(p_1342->g_142.sc, "p_1342->g_142.sc", print_hash_value);
    transparent_crc(p_1342->g_142.sd, "p_1342->g_142.sd", print_hash_value);
    transparent_crc(p_1342->g_142.se, "p_1342->g_142.se", print_hash_value);
    transparent_crc(p_1342->g_142.sf, "p_1342->g_142.sf", print_hash_value);
    transparent_crc(p_1342->g_147, "p_1342->g_147", print_hash_value);
    transparent_crc(p_1342->g_171.s0, "p_1342->g_171.s0", print_hash_value);
    transparent_crc(p_1342->g_171.s1, "p_1342->g_171.s1", print_hash_value);
    transparent_crc(p_1342->g_171.s2, "p_1342->g_171.s2", print_hash_value);
    transparent_crc(p_1342->g_171.s3, "p_1342->g_171.s3", print_hash_value);
    transparent_crc(p_1342->g_171.s4, "p_1342->g_171.s4", print_hash_value);
    transparent_crc(p_1342->g_171.s5, "p_1342->g_171.s5", print_hash_value);
    transparent_crc(p_1342->g_171.s6, "p_1342->g_171.s6", print_hash_value);
    transparent_crc(p_1342->g_171.s7, "p_1342->g_171.s7", print_hash_value);
    transparent_crc(p_1342->g_174.x, "p_1342->g_174.x", print_hash_value);
    transparent_crc(p_1342->g_174.y, "p_1342->g_174.y", print_hash_value);
    transparent_crc(p_1342->g_174.z, "p_1342->g_174.z", print_hash_value);
    transparent_crc(p_1342->g_174.w, "p_1342->g_174.w", print_hash_value);
    transparent_crc(p_1342->g_176.s0, "p_1342->g_176.s0", print_hash_value);
    transparent_crc(p_1342->g_176.s1, "p_1342->g_176.s1", print_hash_value);
    transparent_crc(p_1342->g_176.s2, "p_1342->g_176.s2", print_hash_value);
    transparent_crc(p_1342->g_176.s3, "p_1342->g_176.s3", print_hash_value);
    transparent_crc(p_1342->g_176.s4, "p_1342->g_176.s4", print_hash_value);
    transparent_crc(p_1342->g_176.s5, "p_1342->g_176.s5", print_hash_value);
    transparent_crc(p_1342->g_176.s6, "p_1342->g_176.s6", print_hash_value);
    transparent_crc(p_1342->g_176.s7, "p_1342->g_176.s7", print_hash_value);
    transparent_crc(p_1342->g_188, "p_1342->g_188", print_hash_value);
    transparent_crc(p_1342->g_190, "p_1342->g_190", print_hash_value);
    transparent_crc(p_1342->g_193, "p_1342->g_193", print_hash_value);
    transparent_crc(p_1342->g_220.x, "p_1342->g_220.x", print_hash_value);
    transparent_crc(p_1342->g_220.y, "p_1342->g_220.y", print_hash_value);
    transparent_crc(p_1342->g_220.z, "p_1342->g_220.z", print_hash_value);
    transparent_crc(p_1342->g_220.w, "p_1342->g_220.w", print_hash_value);
    transparent_crc(p_1342->g_221.s0, "p_1342->g_221.s0", print_hash_value);
    transparent_crc(p_1342->g_221.s1, "p_1342->g_221.s1", print_hash_value);
    transparent_crc(p_1342->g_221.s2, "p_1342->g_221.s2", print_hash_value);
    transparent_crc(p_1342->g_221.s3, "p_1342->g_221.s3", print_hash_value);
    transparent_crc(p_1342->g_221.s4, "p_1342->g_221.s4", print_hash_value);
    transparent_crc(p_1342->g_221.s5, "p_1342->g_221.s5", print_hash_value);
    transparent_crc(p_1342->g_221.s6, "p_1342->g_221.s6", print_hash_value);
    transparent_crc(p_1342->g_221.s7, "p_1342->g_221.s7", print_hash_value);
    transparent_crc(p_1342->g_221.s8, "p_1342->g_221.s8", print_hash_value);
    transparent_crc(p_1342->g_221.s9, "p_1342->g_221.s9", print_hash_value);
    transparent_crc(p_1342->g_221.sa, "p_1342->g_221.sa", print_hash_value);
    transparent_crc(p_1342->g_221.sb, "p_1342->g_221.sb", print_hash_value);
    transparent_crc(p_1342->g_221.sc, "p_1342->g_221.sc", print_hash_value);
    transparent_crc(p_1342->g_221.sd, "p_1342->g_221.sd", print_hash_value);
    transparent_crc(p_1342->g_221.se, "p_1342->g_221.se", print_hash_value);
    transparent_crc(p_1342->g_221.sf, "p_1342->g_221.sf", print_hash_value);
    transparent_crc(p_1342->g_233.s0, "p_1342->g_233.s0", print_hash_value);
    transparent_crc(p_1342->g_233.s1, "p_1342->g_233.s1", print_hash_value);
    transparent_crc(p_1342->g_233.s2, "p_1342->g_233.s2", print_hash_value);
    transparent_crc(p_1342->g_233.s3, "p_1342->g_233.s3", print_hash_value);
    transparent_crc(p_1342->g_233.s4, "p_1342->g_233.s4", print_hash_value);
    transparent_crc(p_1342->g_233.s5, "p_1342->g_233.s5", print_hash_value);
    transparent_crc(p_1342->g_233.s6, "p_1342->g_233.s6", print_hash_value);
    transparent_crc(p_1342->g_233.s7, "p_1342->g_233.s7", print_hash_value);
    transparent_crc(p_1342->g_316, "p_1342->g_316", print_hash_value);
    transparent_crc(p_1342->g_342.s0, "p_1342->g_342.s0", print_hash_value);
    transparent_crc(p_1342->g_342.s1, "p_1342->g_342.s1", print_hash_value);
    transparent_crc(p_1342->g_342.s2, "p_1342->g_342.s2", print_hash_value);
    transparent_crc(p_1342->g_342.s3, "p_1342->g_342.s3", print_hash_value);
    transparent_crc(p_1342->g_342.s4, "p_1342->g_342.s4", print_hash_value);
    transparent_crc(p_1342->g_342.s5, "p_1342->g_342.s5", print_hash_value);
    transparent_crc(p_1342->g_342.s6, "p_1342->g_342.s6", print_hash_value);
    transparent_crc(p_1342->g_342.s7, "p_1342->g_342.s7", print_hash_value);
    transparent_crc(p_1342->g_352.x, "p_1342->g_352.x", print_hash_value);
    transparent_crc(p_1342->g_352.y, "p_1342->g_352.y", print_hash_value);
    transparent_crc(p_1342->g_352.z, "p_1342->g_352.z", print_hash_value);
    transparent_crc(p_1342->g_352.w, "p_1342->g_352.w", print_hash_value);
    transparent_crc(p_1342->g_359.x, "p_1342->g_359.x", print_hash_value);
    transparent_crc(p_1342->g_359.y, "p_1342->g_359.y", print_hash_value);
    transparent_crc(p_1342->g_360.x, "p_1342->g_360.x", print_hash_value);
    transparent_crc(p_1342->g_360.y, "p_1342->g_360.y", print_hash_value);
    transparent_crc(p_1342->g_360.z, "p_1342->g_360.z", print_hash_value);
    transparent_crc(p_1342->g_360.w, "p_1342->g_360.w", print_hash_value);
    transparent_crc(p_1342->g_361.s0, "p_1342->g_361.s0", print_hash_value);
    transparent_crc(p_1342->g_361.s1, "p_1342->g_361.s1", print_hash_value);
    transparent_crc(p_1342->g_361.s2, "p_1342->g_361.s2", print_hash_value);
    transparent_crc(p_1342->g_361.s3, "p_1342->g_361.s3", print_hash_value);
    transparent_crc(p_1342->g_361.s4, "p_1342->g_361.s4", print_hash_value);
    transparent_crc(p_1342->g_361.s5, "p_1342->g_361.s5", print_hash_value);
    transparent_crc(p_1342->g_361.s6, "p_1342->g_361.s6", print_hash_value);
    transparent_crc(p_1342->g_361.s7, "p_1342->g_361.s7", print_hash_value);
    transparent_crc(p_1342->g_384.s0, "p_1342->g_384.s0", print_hash_value);
    transparent_crc(p_1342->g_384.s1, "p_1342->g_384.s1", print_hash_value);
    transparent_crc(p_1342->g_384.s2, "p_1342->g_384.s2", print_hash_value);
    transparent_crc(p_1342->g_384.s3, "p_1342->g_384.s3", print_hash_value);
    transparent_crc(p_1342->g_384.s4, "p_1342->g_384.s4", print_hash_value);
    transparent_crc(p_1342->g_384.s5, "p_1342->g_384.s5", print_hash_value);
    transparent_crc(p_1342->g_384.s6, "p_1342->g_384.s6", print_hash_value);
    transparent_crc(p_1342->g_384.s7, "p_1342->g_384.s7", print_hash_value);
    transparent_crc(p_1342->g_384.s8, "p_1342->g_384.s8", print_hash_value);
    transparent_crc(p_1342->g_384.s9, "p_1342->g_384.s9", print_hash_value);
    transparent_crc(p_1342->g_384.sa, "p_1342->g_384.sa", print_hash_value);
    transparent_crc(p_1342->g_384.sb, "p_1342->g_384.sb", print_hash_value);
    transparent_crc(p_1342->g_384.sc, "p_1342->g_384.sc", print_hash_value);
    transparent_crc(p_1342->g_384.sd, "p_1342->g_384.sd", print_hash_value);
    transparent_crc(p_1342->g_384.se, "p_1342->g_384.se", print_hash_value);
    transparent_crc(p_1342->g_384.sf, "p_1342->g_384.sf", print_hash_value);
    transparent_crc(p_1342->g_385.x, "p_1342->g_385.x", print_hash_value);
    transparent_crc(p_1342->g_385.y, "p_1342->g_385.y", print_hash_value);
    transparent_crc(p_1342->g_385.z, "p_1342->g_385.z", print_hash_value);
    transparent_crc(p_1342->g_385.w, "p_1342->g_385.w", print_hash_value);
    transparent_crc(p_1342->g_388.x, "p_1342->g_388.x", print_hash_value);
    transparent_crc(p_1342->g_388.y, "p_1342->g_388.y", print_hash_value);
    transparent_crc(p_1342->g_390.x, "p_1342->g_390.x", print_hash_value);
    transparent_crc(p_1342->g_390.y, "p_1342->g_390.y", print_hash_value);
    transparent_crc(p_1342->g_390.z, "p_1342->g_390.z", print_hash_value);
    transparent_crc(p_1342->g_390.w, "p_1342->g_390.w", print_hash_value);
    transparent_crc(p_1342->g_413.x, "p_1342->g_413.x", print_hash_value);
    transparent_crc(p_1342->g_413.y, "p_1342->g_413.y", print_hash_value);
    transparent_crc(p_1342->g_413.z, "p_1342->g_413.z", print_hash_value);
    transparent_crc(p_1342->g_413.w, "p_1342->g_413.w", print_hash_value);
    transparent_crc(p_1342->g_422.x, "p_1342->g_422.x", print_hash_value);
    transparent_crc(p_1342->g_422.y, "p_1342->g_422.y", print_hash_value);
    transparent_crc(p_1342->g_422.z, "p_1342->g_422.z", print_hash_value);
    transparent_crc(p_1342->g_422.w, "p_1342->g_422.w", print_hash_value);
    transparent_crc(p_1342->g_473.s0, "p_1342->g_473.s0", print_hash_value);
    transparent_crc(p_1342->g_473.s1, "p_1342->g_473.s1", print_hash_value);
    transparent_crc(p_1342->g_473.s2, "p_1342->g_473.s2", print_hash_value);
    transparent_crc(p_1342->g_473.s3, "p_1342->g_473.s3", print_hash_value);
    transparent_crc(p_1342->g_473.s4, "p_1342->g_473.s4", print_hash_value);
    transparent_crc(p_1342->g_473.s5, "p_1342->g_473.s5", print_hash_value);
    transparent_crc(p_1342->g_473.s6, "p_1342->g_473.s6", print_hash_value);
    transparent_crc(p_1342->g_473.s7, "p_1342->g_473.s7", print_hash_value);
    transparent_crc(p_1342->g_473.s8, "p_1342->g_473.s8", print_hash_value);
    transparent_crc(p_1342->g_473.s9, "p_1342->g_473.s9", print_hash_value);
    transparent_crc(p_1342->g_473.sa, "p_1342->g_473.sa", print_hash_value);
    transparent_crc(p_1342->g_473.sb, "p_1342->g_473.sb", print_hash_value);
    transparent_crc(p_1342->g_473.sc, "p_1342->g_473.sc", print_hash_value);
    transparent_crc(p_1342->g_473.sd, "p_1342->g_473.sd", print_hash_value);
    transparent_crc(p_1342->g_473.se, "p_1342->g_473.se", print_hash_value);
    transparent_crc(p_1342->g_473.sf, "p_1342->g_473.sf", print_hash_value);
    transparent_crc(p_1342->g_474.s0, "p_1342->g_474.s0", print_hash_value);
    transparent_crc(p_1342->g_474.s1, "p_1342->g_474.s1", print_hash_value);
    transparent_crc(p_1342->g_474.s2, "p_1342->g_474.s2", print_hash_value);
    transparent_crc(p_1342->g_474.s3, "p_1342->g_474.s3", print_hash_value);
    transparent_crc(p_1342->g_474.s4, "p_1342->g_474.s4", print_hash_value);
    transparent_crc(p_1342->g_474.s5, "p_1342->g_474.s5", print_hash_value);
    transparent_crc(p_1342->g_474.s6, "p_1342->g_474.s6", print_hash_value);
    transparent_crc(p_1342->g_474.s7, "p_1342->g_474.s7", print_hash_value);
    transparent_crc(p_1342->g_475.x, "p_1342->g_475.x", print_hash_value);
    transparent_crc(p_1342->g_475.y, "p_1342->g_475.y", print_hash_value);
    transparent_crc(p_1342->g_478, "p_1342->g_478", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1342->g_520[i], "p_1342->g_520[i]", print_hash_value);

    }
    transparent_crc(p_1342->g_573, "p_1342->g_573", print_hash_value);
    transparent_crc(p_1342->g_651, "p_1342->g_651", print_hash_value);
    transparent_crc(p_1342->g_698.s0, "p_1342->g_698.s0", print_hash_value);
    transparent_crc(p_1342->g_698.s1, "p_1342->g_698.s1", print_hash_value);
    transparent_crc(p_1342->g_698.s2, "p_1342->g_698.s2", print_hash_value);
    transparent_crc(p_1342->g_698.s3, "p_1342->g_698.s3", print_hash_value);
    transparent_crc(p_1342->g_698.s4, "p_1342->g_698.s4", print_hash_value);
    transparent_crc(p_1342->g_698.s5, "p_1342->g_698.s5", print_hash_value);
    transparent_crc(p_1342->g_698.s6, "p_1342->g_698.s6", print_hash_value);
    transparent_crc(p_1342->g_698.s7, "p_1342->g_698.s7", print_hash_value);
    transparent_crc(p_1342->g_907, "p_1342->g_907", print_hash_value);
    transparent_crc(p_1342->g_914.x, "p_1342->g_914.x", print_hash_value);
    transparent_crc(p_1342->g_914.y, "p_1342->g_914.y", print_hash_value);
    transparent_crc(p_1342->g_922.x, "p_1342->g_922.x", print_hash_value);
    transparent_crc(p_1342->g_922.y, "p_1342->g_922.y", print_hash_value);
    transparent_crc(p_1342->g_965, "p_1342->g_965", print_hash_value);
    transparent_crc(p_1342->g_969, "p_1342->g_969", print_hash_value);
    transparent_crc(p_1342->g_972.f0, "p_1342->g_972.f0", print_hash_value);
    transparent_crc(p_1342->g_998.s0, "p_1342->g_998.s0", print_hash_value);
    transparent_crc(p_1342->g_998.s1, "p_1342->g_998.s1", print_hash_value);
    transparent_crc(p_1342->g_998.s2, "p_1342->g_998.s2", print_hash_value);
    transparent_crc(p_1342->g_998.s3, "p_1342->g_998.s3", print_hash_value);
    transparent_crc(p_1342->g_998.s4, "p_1342->g_998.s4", print_hash_value);
    transparent_crc(p_1342->g_998.s5, "p_1342->g_998.s5", print_hash_value);
    transparent_crc(p_1342->g_998.s6, "p_1342->g_998.s6", print_hash_value);
    transparent_crc(p_1342->g_998.s7, "p_1342->g_998.s7", print_hash_value);
    transparent_crc(p_1342->g_1045.s0, "p_1342->g_1045.s0", print_hash_value);
    transparent_crc(p_1342->g_1045.s1, "p_1342->g_1045.s1", print_hash_value);
    transparent_crc(p_1342->g_1045.s2, "p_1342->g_1045.s2", print_hash_value);
    transparent_crc(p_1342->g_1045.s3, "p_1342->g_1045.s3", print_hash_value);
    transparent_crc(p_1342->g_1045.s4, "p_1342->g_1045.s4", print_hash_value);
    transparent_crc(p_1342->g_1045.s5, "p_1342->g_1045.s5", print_hash_value);
    transparent_crc(p_1342->g_1045.s6, "p_1342->g_1045.s6", print_hash_value);
    transparent_crc(p_1342->g_1045.s7, "p_1342->g_1045.s7", print_hash_value);
    transparent_crc(p_1342->g_1046.x, "p_1342->g_1046.x", print_hash_value);
    transparent_crc(p_1342->g_1046.y, "p_1342->g_1046.y", print_hash_value);
    transparent_crc(p_1342->g_1052.s0, "p_1342->g_1052.s0", print_hash_value);
    transparent_crc(p_1342->g_1052.s1, "p_1342->g_1052.s1", print_hash_value);
    transparent_crc(p_1342->g_1052.s2, "p_1342->g_1052.s2", print_hash_value);
    transparent_crc(p_1342->g_1052.s3, "p_1342->g_1052.s3", print_hash_value);
    transparent_crc(p_1342->g_1052.s4, "p_1342->g_1052.s4", print_hash_value);
    transparent_crc(p_1342->g_1052.s5, "p_1342->g_1052.s5", print_hash_value);
    transparent_crc(p_1342->g_1052.s6, "p_1342->g_1052.s6", print_hash_value);
    transparent_crc(p_1342->g_1052.s7, "p_1342->g_1052.s7", print_hash_value);
    transparent_crc(p_1342->g_1052.s8, "p_1342->g_1052.s8", print_hash_value);
    transparent_crc(p_1342->g_1052.s9, "p_1342->g_1052.s9", print_hash_value);
    transparent_crc(p_1342->g_1052.sa, "p_1342->g_1052.sa", print_hash_value);
    transparent_crc(p_1342->g_1052.sb, "p_1342->g_1052.sb", print_hash_value);
    transparent_crc(p_1342->g_1052.sc, "p_1342->g_1052.sc", print_hash_value);
    transparent_crc(p_1342->g_1052.sd, "p_1342->g_1052.sd", print_hash_value);
    transparent_crc(p_1342->g_1052.se, "p_1342->g_1052.se", print_hash_value);
    transparent_crc(p_1342->g_1052.sf, "p_1342->g_1052.sf", print_hash_value);
    transparent_crc(p_1342->g_1053.s0, "p_1342->g_1053.s0", print_hash_value);
    transparent_crc(p_1342->g_1053.s1, "p_1342->g_1053.s1", print_hash_value);
    transparent_crc(p_1342->g_1053.s2, "p_1342->g_1053.s2", print_hash_value);
    transparent_crc(p_1342->g_1053.s3, "p_1342->g_1053.s3", print_hash_value);
    transparent_crc(p_1342->g_1053.s4, "p_1342->g_1053.s4", print_hash_value);
    transparent_crc(p_1342->g_1053.s5, "p_1342->g_1053.s5", print_hash_value);
    transparent_crc(p_1342->g_1053.s6, "p_1342->g_1053.s6", print_hash_value);
    transparent_crc(p_1342->g_1053.s7, "p_1342->g_1053.s7", print_hash_value);
    transparent_crc(p_1342->g_1058.s0, "p_1342->g_1058.s0", print_hash_value);
    transparent_crc(p_1342->g_1058.s1, "p_1342->g_1058.s1", print_hash_value);
    transparent_crc(p_1342->g_1058.s2, "p_1342->g_1058.s2", print_hash_value);
    transparent_crc(p_1342->g_1058.s3, "p_1342->g_1058.s3", print_hash_value);
    transparent_crc(p_1342->g_1058.s4, "p_1342->g_1058.s4", print_hash_value);
    transparent_crc(p_1342->g_1058.s5, "p_1342->g_1058.s5", print_hash_value);
    transparent_crc(p_1342->g_1058.s6, "p_1342->g_1058.s6", print_hash_value);
    transparent_crc(p_1342->g_1058.s7, "p_1342->g_1058.s7", print_hash_value);
    transparent_crc(p_1342->g_1061.s0, "p_1342->g_1061.s0", print_hash_value);
    transparent_crc(p_1342->g_1061.s1, "p_1342->g_1061.s1", print_hash_value);
    transparent_crc(p_1342->g_1061.s2, "p_1342->g_1061.s2", print_hash_value);
    transparent_crc(p_1342->g_1061.s3, "p_1342->g_1061.s3", print_hash_value);
    transparent_crc(p_1342->g_1061.s4, "p_1342->g_1061.s4", print_hash_value);
    transparent_crc(p_1342->g_1061.s5, "p_1342->g_1061.s5", print_hash_value);
    transparent_crc(p_1342->g_1061.s6, "p_1342->g_1061.s6", print_hash_value);
    transparent_crc(p_1342->g_1061.s7, "p_1342->g_1061.s7", print_hash_value);
    transparent_crc(p_1342->g_1154.s0, "p_1342->g_1154.s0", print_hash_value);
    transparent_crc(p_1342->g_1154.s1, "p_1342->g_1154.s1", print_hash_value);
    transparent_crc(p_1342->g_1154.s2, "p_1342->g_1154.s2", print_hash_value);
    transparent_crc(p_1342->g_1154.s3, "p_1342->g_1154.s3", print_hash_value);
    transparent_crc(p_1342->g_1154.s4, "p_1342->g_1154.s4", print_hash_value);
    transparent_crc(p_1342->g_1154.s5, "p_1342->g_1154.s5", print_hash_value);
    transparent_crc(p_1342->g_1154.s6, "p_1342->g_1154.s6", print_hash_value);
    transparent_crc(p_1342->g_1154.s7, "p_1342->g_1154.s7", print_hash_value);
    transparent_crc(p_1342->g_1154.s8, "p_1342->g_1154.s8", print_hash_value);
    transparent_crc(p_1342->g_1154.s9, "p_1342->g_1154.s9", print_hash_value);
    transparent_crc(p_1342->g_1154.sa, "p_1342->g_1154.sa", print_hash_value);
    transparent_crc(p_1342->g_1154.sb, "p_1342->g_1154.sb", print_hash_value);
    transparent_crc(p_1342->g_1154.sc, "p_1342->g_1154.sc", print_hash_value);
    transparent_crc(p_1342->g_1154.sd, "p_1342->g_1154.sd", print_hash_value);
    transparent_crc(p_1342->g_1154.se, "p_1342->g_1154.se", print_hash_value);
    transparent_crc(p_1342->g_1154.sf, "p_1342->g_1154.sf", print_hash_value);
    transparent_crc(p_1342->g_1157.x, "p_1342->g_1157.x", print_hash_value);
    transparent_crc(p_1342->g_1157.y, "p_1342->g_1157.y", print_hash_value);
    transparent_crc(p_1342->g_1157.z, "p_1342->g_1157.z", print_hash_value);
    transparent_crc(p_1342->g_1157.w, "p_1342->g_1157.w", print_hash_value);
    transparent_crc(p_1342->g_1173.x, "p_1342->g_1173.x", print_hash_value);
    transparent_crc(p_1342->g_1173.y, "p_1342->g_1173.y", print_hash_value);
    transparent_crc(p_1342->g_1203.s0, "p_1342->g_1203.s0", print_hash_value);
    transparent_crc(p_1342->g_1203.s1, "p_1342->g_1203.s1", print_hash_value);
    transparent_crc(p_1342->g_1203.s2, "p_1342->g_1203.s2", print_hash_value);
    transparent_crc(p_1342->g_1203.s3, "p_1342->g_1203.s3", print_hash_value);
    transparent_crc(p_1342->g_1203.s4, "p_1342->g_1203.s4", print_hash_value);
    transparent_crc(p_1342->g_1203.s5, "p_1342->g_1203.s5", print_hash_value);
    transparent_crc(p_1342->g_1203.s6, "p_1342->g_1203.s6", print_hash_value);
    transparent_crc(p_1342->g_1203.s7, "p_1342->g_1203.s7", print_hash_value);
    transparent_crc(p_1342->g_1216.s0, "p_1342->g_1216.s0", print_hash_value);
    transparent_crc(p_1342->g_1216.s1, "p_1342->g_1216.s1", print_hash_value);
    transparent_crc(p_1342->g_1216.s2, "p_1342->g_1216.s2", print_hash_value);
    transparent_crc(p_1342->g_1216.s3, "p_1342->g_1216.s3", print_hash_value);
    transparent_crc(p_1342->g_1216.s4, "p_1342->g_1216.s4", print_hash_value);
    transparent_crc(p_1342->g_1216.s5, "p_1342->g_1216.s5", print_hash_value);
    transparent_crc(p_1342->g_1216.s6, "p_1342->g_1216.s6", print_hash_value);
    transparent_crc(p_1342->g_1216.s7, "p_1342->g_1216.s7", print_hash_value);
    transparent_crc(p_1342->g_1216.s8, "p_1342->g_1216.s8", print_hash_value);
    transparent_crc(p_1342->g_1216.s9, "p_1342->g_1216.s9", print_hash_value);
    transparent_crc(p_1342->g_1216.sa, "p_1342->g_1216.sa", print_hash_value);
    transparent_crc(p_1342->g_1216.sb, "p_1342->g_1216.sb", print_hash_value);
    transparent_crc(p_1342->g_1216.sc, "p_1342->g_1216.sc", print_hash_value);
    transparent_crc(p_1342->g_1216.sd, "p_1342->g_1216.sd", print_hash_value);
    transparent_crc(p_1342->g_1216.se, "p_1342->g_1216.se", print_hash_value);
    transparent_crc(p_1342->g_1216.sf, "p_1342->g_1216.sf", print_hash_value);
    transparent_crc(p_1342->g_1217.x, "p_1342->g_1217.x", print_hash_value);
    transparent_crc(p_1342->g_1217.y, "p_1342->g_1217.y", print_hash_value);
    transparent_crc(p_1342->g_1233.s0, "p_1342->g_1233.s0", print_hash_value);
    transparent_crc(p_1342->g_1233.s1, "p_1342->g_1233.s1", print_hash_value);
    transparent_crc(p_1342->g_1233.s2, "p_1342->g_1233.s2", print_hash_value);
    transparent_crc(p_1342->g_1233.s3, "p_1342->g_1233.s3", print_hash_value);
    transparent_crc(p_1342->g_1233.s4, "p_1342->g_1233.s4", print_hash_value);
    transparent_crc(p_1342->g_1233.s5, "p_1342->g_1233.s5", print_hash_value);
    transparent_crc(p_1342->g_1233.s6, "p_1342->g_1233.s6", print_hash_value);
    transparent_crc(p_1342->g_1233.s7, "p_1342->g_1233.s7", print_hash_value);
    transparent_crc(p_1342->g_1233.s8, "p_1342->g_1233.s8", print_hash_value);
    transparent_crc(p_1342->g_1233.s9, "p_1342->g_1233.s9", print_hash_value);
    transparent_crc(p_1342->g_1233.sa, "p_1342->g_1233.sa", print_hash_value);
    transparent_crc(p_1342->g_1233.sb, "p_1342->g_1233.sb", print_hash_value);
    transparent_crc(p_1342->g_1233.sc, "p_1342->g_1233.sc", print_hash_value);
    transparent_crc(p_1342->g_1233.sd, "p_1342->g_1233.sd", print_hash_value);
    transparent_crc(p_1342->g_1233.se, "p_1342->g_1233.se", print_hash_value);
    transparent_crc(p_1342->g_1233.sf, "p_1342->g_1233.sf", print_hash_value);
    transparent_crc(p_1342->g_1237.f0, "p_1342->g_1237.f0", print_hash_value);
    transparent_crc(p_1342->g_1244.s0, "p_1342->g_1244.s0", print_hash_value);
    transparent_crc(p_1342->g_1244.s1, "p_1342->g_1244.s1", print_hash_value);
    transparent_crc(p_1342->g_1244.s2, "p_1342->g_1244.s2", print_hash_value);
    transparent_crc(p_1342->g_1244.s3, "p_1342->g_1244.s3", print_hash_value);
    transparent_crc(p_1342->g_1244.s4, "p_1342->g_1244.s4", print_hash_value);
    transparent_crc(p_1342->g_1244.s5, "p_1342->g_1244.s5", print_hash_value);
    transparent_crc(p_1342->g_1244.s6, "p_1342->g_1244.s6", print_hash_value);
    transparent_crc(p_1342->g_1244.s7, "p_1342->g_1244.s7", print_hash_value);
    transparent_crc(p_1342->g_1244.s8, "p_1342->g_1244.s8", print_hash_value);
    transparent_crc(p_1342->g_1244.s9, "p_1342->g_1244.s9", print_hash_value);
    transparent_crc(p_1342->g_1244.sa, "p_1342->g_1244.sa", print_hash_value);
    transparent_crc(p_1342->g_1244.sb, "p_1342->g_1244.sb", print_hash_value);
    transparent_crc(p_1342->g_1244.sc, "p_1342->g_1244.sc", print_hash_value);
    transparent_crc(p_1342->g_1244.sd, "p_1342->g_1244.sd", print_hash_value);
    transparent_crc(p_1342->g_1244.se, "p_1342->g_1244.se", print_hash_value);
    transparent_crc(p_1342->g_1244.sf, "p_1342->g_1244.sf", print_hash_value);
    transparent_crc(p_1342->g_1307, "p_1342->g_1307", print_hash_value);
    transparent_crc(p_1342->g_1331.s0, "p_1342->g_1331.s0", print_hash_value);
    transparent_crc(p_1342->g_1331.s1, "p_1342->g_1331.s1", print_hash_value);
    transparent_crc(p_1342->g_1331.s2, "p_1342->g_1331.s2", print_hash_value);
    transparent_crc(p_1342->g_1331.s3, "p_1342->g_1331.s3", print_hash_value);
    transparent_crc(p_1342->g_1331.s4, "p_1342->g_1331.s4", print_hash_value);
    transparent_crc(p_1342->g_1331.s5, "p_1342->g_1331.s5", print_hash_value);
    transparent_crc(p_1342->g_1331.s6, "p_1342->g_1331.s6", print_hash_value);
    transparent_crc(p_1342->g_1331.s7, "p_1342->g_1331.s7", print_hash_value);
    transparent_crc(p_1342->g_1332, "p_1342->g_1332", print_hash_value);
    transparent_crc(p_1342->v_collective, "p_1342->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_1342->g_special_values[i + 57 * get_linear_group_id()], "p_1342->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_1342->l_special_values[i], "p_1342->l_special_values[i]", print_hash_value);
    transparent_crc(p_1342->l_comm_values[get_linear_local_id()], "p_1342->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1342->g_comm_values[get_linear_group_id() * 30 + get_linear_local_id()], "p_1342->g_comm_values[get_linear_group_id() * 30 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
