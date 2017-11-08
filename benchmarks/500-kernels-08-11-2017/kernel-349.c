// --atomics 4 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 96,66,1 -l 4,22,1
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

__constant uint32_t permutations[10][88] = {
{62,20,85,30,53,31,70,80,12,5,7,77,15,28,22,83,36,24,54,21,46,17,13,51,71,63,66,79,39,18,73,10,67,14,2,64,52,35,43,11,26,59,44,6,41,42,9,74,4,82,57,34,84,40,81,23,72,16,87,76,3,8,49,0,55,68,50,56,65,47,27,45,25,75,32,33,58,69,38,19,78,86,48,1,61,29,37,60}, // permutation 0
{83,68,51,78,29,49,14,65,58,53,46,25,35,20,38,62,34,26,30,84,19,1,61,41,50,74,42,27,5,12,13,40,15,39,81,70,21,9,10,56,17,32,67,85,76,72,63,66,18,2,86,37,43,54,52,73,4,8,3,48,82,71,55,64,45,31,11,28,44,60,57,77,22,7,33,79,59,23,36,47,75,87,16,80,69,24,0,6}, // permutation 1
{76,17,29,37,36,55,38,49,19,31,79,7,54,48,15,25,80,68,51,43,9,27,14,22,75,56,59,74,3,4,83,60,87,39,34,21,67,78,35,8,30,64,44,1,61,65,26,50,72,84,28,13,57,63,82,6,71,53,73,85,47,32,23,33,16,2,81,41,70,66,18,20,42,10,58,77,62,5,52,46,11,45,24,86,12,0,40,69}, // permutation 2
{11,76,65,62,12,33,71,14,50,27,58,25,21,80,79,32,31,64,4,7,0,86,47,20,36,68,6,13,52,39,73,55,53,45,35,43,1,81,83,23,30,17,85,5,38,57,74,34,41,37,60,29,42,46,40,24,66,63,16,69,77,2,18,70,72,19,84,78,49,67,26,87,54,61,10,15,8,9,82,75,56,59,22,28,44,51,3,48}, // permutation 3
{41,60,74,17,70,36,72,35,16,14,61,29,24,87,43,7,58,46,42,37,4,2,76,20,40,13,47,83,69,11,67,6,86,44,55,75,52,73,21,50,81,1,30,38,0,66,85,53,78,32,80,23,12,59,22,28,19,27,18,51,48,71,84,64,56,82,77,33,5,63,54,34,65,45,9,15,31,57,8,10,25,79,3,68,49,26,39,62}, // permutation 4
{58,45,33,38,57,50,69,20,18,10,34,66,14,72,76,11,52,83,70,61,4,12,15,56,25,40,47,29,43,85,9,53,42,16,71,31,32,65,2,7,36,17,87,30,63,51,22,44,28,5,78,0,81,21,79,37,67,24,80,39,8,64,3,74,13,35,54,59,19,48,46,68,60,62,75,84,27,55,82,49,23,86,41,26,73,1,6,77}, // permutation 5
{37,4,84,0,7,72,12,42,48,13,45,29,71,54,73,39,28,52,31,5,60,38,6,86,64,77,14,58,82,67,16,40,1,30,41,46,57,3,75,76,55,8,51,34,49,32,56,21,81,85,53,68,44,69,19,63,15,20,23,26,78,59,33,83,9,18,27,80,47,25,36,66,74,43,2,17,65,22,62,10,87,70,35,24,11,79,50,61}, // permutation 6
{56,78,53,14,40,24,31,61,27,64,55,21,72,10,47,48,12,42,38,68,39,73,22,41,71,69,33,66,4,76,18,32,29,75,9,17,77,37,45,84,80,6,1,36,67,54,5,23,62,57,81,13,7,25,2,34,8,51,60,19,82,20,28,0,11,49,83,52,16,35,63,30,43,74,3,85,15,86,50,87,46,70,65,58,44,59,79,26}, // permutation 7
{6,37,82,70,75,73,57,5,59,81,69,72,23,41,4,77,2,83,46,87,33,67,17,12,19,13,44,48,22,25,50,1,31,32,39,58,7,9,15,64,20,8,14,26,35,16,18,29,53,51,79,54,65,60,47,55,68,34,84,66,11,43,30,0,71,45,24,56,86,10,52,36,74,38,27,28,63,3,76,62,80,78,42,61,85,21,49,40}, // permutation 8
{46,5,24,62,65,51,16,49,42,13,72,7,86,31,0,76,64,66,3,63,32,15,79,83,37,45,59,71,2,33,39,75,80,56,30,1,29,27,50,87,53,19,78,25,57,34,4,44,20,23,67,60,22,14,38,41,11,8,47,54,17,6,26,70,85,58,21,40,82,61,74,52,69,10,18,84,68,48,35,9,81,55,12,73,36,77,28,43} // permutation 9
};

// Seed: 2937476690

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_7[5];
    int32_t * volatile g_6;
    volatile VECTOR(int8_t, 16) g_19;
    volatile VECTOR(uint8_t, 2) g_22;
    uint32_t g_23;
    int16_t g_25[6][6][7];
    int32_t g_43;
    int32_t g_308;
    int32_t * volatile g_307;
    int32_t g_319;
    VECTOR(uint64_t, 2) g_330;
    int8_t g_334;
    int8_t g_337;
    int32_t *g_356;
    int32_t ** volatile g_355;
    uint16_t g_391[5][1][2];
    volatile uint8_t g_396;
    int64_t g_404[10];
    volatile VECTOR(int16_t, 16) g_409;
    int8_t g_417;
    uint32_t g_428;
    uint8_t g_434[2];
    uint8_t g_438;
    volatile int16_t *g_477;
    volatile int16_t ** volatile g_476;
    VECTOR(int32_t, 8) g_481;
    VECTOR(uint64_t, 8) g_496;
    int32_t * volatile g_509;
    VECTOR(uint32_t, 16) g_510;
    uint8_t g_517;
    uint8_t g_537;
    int64_t *g_544[7];
    int64_t **g_543;
    int64_t *** volatile g_542;
    uint32_t *g_573[8][4][2];
    int32_t ** volatile g_580[8][6][4];
    int32_t ** volatile g_582;
    volatile int8_t * volatile * volatile g_723;
    int32_t * volatile *g_726[1];
    int32_t * volatile ** volatile g_725;
    volatile uint8_t * volatile g_754;
    volatile uint8_t * volatile *g_753;
    VECTOR(int32_t, 4) g_757;
    VECTOR(uint16_t, 2) g_773;
    uint64_t g_774;
    int32_t g_777[9][3];
    VECTOR(uint64_t, 4) g_781;
    volatile VECTOR(int64_t, 16) g_813;
    VECTOR(uint8_t, 4) g_815;
    volatile VECTOR(uint32_t, 4) g_850;
    VECTOR(uint32_t, 16) g_851;
    volatile int32_t g_872;
    volatile int32_t *g_871[6];
    volatile int32_t * volatile *g_870;
    VECTOR(uint8_t, 16) g_891;
    VECTOR(int32_t, 2) g_945;
    volatile VECTOR(uint32_t, 2) g_946;
    uint32_t g_979;
    int32_t * volatile g_981[1][2][3];
    VECTOR(int8_t, 16) g_1013;
    VECTOR(int8_t, 8) g_1014;
    VECTOR(int8_t, 4) g_1015;
    int32_t * volatile g_1018;
    int32_t * volatile g_1095;
    int32_t g_1147[8];
    int32_t ** volatile g_1165;
    VECTOR(uint16_t, 16) g_1182;
    VECTOR(uint32_t, 4) g_1189;
    uint32_t g_1191;
    volatile VECTOR(int32_t, 16) g_1199;
    int8_t *g_1200;
    int32_t * volatile g_1203;
    volatile uint32_t * volatile g_1224;
    volatile uint32_t * volatile * volatile g_1223;
    volatile uint32_t * volatile * volatile * volatile g_1225;
    volatile uint32_t * volatile * volatile * volatile g_1226[6];
    int8_t g_1235;
    VECTOR(uint32_t, 16) g_1265;
    volatile VECTOR(uint32_t, 16) g_1278;
    VECTOR(uint16_t, 8) g_1286;
    int32_t ** volatile g_1294[2];
    int32_t ** volatile g_1295;
    volatile VECTOR(int8_t, 4) g_1313;
    VECTOR(uint16_t, 4) g_1322;
    int16_t *g_1323;
    int32_t *g_1325;
    int32_t **g_1324;
    uint32_t g_1337[5][2][10];
    volatile uint32_t g_1338;
    volatile VECTOR(uint32_t, 16) g_1390;
    VECTOR(int32_t, 4) g_1411;
    VECTOR(int8_t, 16) g_1419;
    uint16_t * volatile g_1444[4];
    uint16_t * volatile *g_1443;
    uint16_t * volatile * volatile *g_1442;
    uint32_t *g_1501;
    volatile VECTOR(uint32_t, 16) g_1544;
    VECTOR(uint32_t, 2) g_1549;
    VECTOR(uint32_t, 2) g_1551;
    uint32_t *g_1560;
    uint32_t **g_1559;
    VECTOR(uint32_t, 16) g_1579;
    int32_t ***g_1581;
    int16_t g_1586;
    uint64_t g_1595[7][10];
    volatile uint32_t g_1667;
    int32_t *g_1707;
    int32_t ** volatile g_1706;
    VECTOR(int32_t, 16) g_1709;
    volatile VECTOR(int32_t, 8) g_1710;
    VECTOR(int64_t, 16) g_1735;
    volatile VECTOR(int64_t, 16) g_1747;
    VECTOR(uint16_t, 16) g_1781;
    VECTOR(int64_t, 4) g_1789;
    volatile VECTOR(int32_t, 4) g_1812;
    VECTOR(int32_t, 16) g_1827;
    uint16_t *g_1843;
    uint16_t **g_1842;
    VECTOR(uint32_t, 16) g_1878;
    VECTOR(int64_t, 8) g_1903;
    volatile VECTOR(int16_t, 2) g_1912;
    VECTOR(int32_t, 16) g_1915;
    uint64_t g_1933;
    VECTOR(uint32_t, 8) g_1941;
    VECTOR(uint16_t, 8) g_1971;
    VECTOR(int32_t, 4) g_1978;
    uint64_t g_2022;
    int64_t g_2059;
    VECTOR(uint8_t, 2) g_2072;
    volatile VECTOR(uint8_t, 2) g_2074;
    VECTOR(int8_t, 16) g_2085;
    VECTOR(uint16_t, 16) g_2101;
    VECTOR(int16_t, 16) g_2129;
    uint8_t *g_2139;
    uint8_t **g_2138[10][7];
    VECTOR(int64_t, 8) g_2153;
    volatile VECTOR(int32_t, 8) g_2155;
    VECTOR(int64_t, 16) g_2158;
    int64_t g_2218[8][7];
    volatile VECTOR(uint16_t, 8) g_2262;
    volatile VECTOR(int16_t, 8) g_2291;
    volatile VECTOR(int16_t, 8) g_2338;
    volatile VECTOR(uint32_t, 8) g_2381;
    VECTOR(uint32_t, 4) g_2383;
    VECTOR(uint32_t, 4) g_2390;
    int32_t ****g_2406[5][7];
    int32_t *****g_2405;
    int32_t * volatile g_2409;
    uint16_t g_2410[5][7][7];
    int64_t g_2411;
    int32_t **g_2415;
    int32_t *** volatile g_2414;
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
uint32_t  func_1(struct S0 * p_2417);
int16_t  func_29(int64_t  p_30, int32_t  p_31, struct S0 * p_2417);
int32_t * func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, int32_t  p_48, int32_t  p_49, struct S0 * p_2417);
int32_t * func_50(int16_t * p_51, uint64_t  p_52, int32_t ** p_53, struct S0 * p_2417);
int16_t * func_54(int32_t * p_55, int32_t  p_56, struct S0 * p_2417);
int32_t  func_63(int64_t  p_64, int32_t * p_65, struct S0 * p_2417);
int32_t  func_70(int16_t  p_71, int64_t  p_72, int16_t  p_73, int32_t * p_74, struct S0 * p_2417);
int16_t  func_76(int32_t * p_77, int16_t * p_78, struct S0 * p_2417);
uint8_t  func_322(int16_t * p_323, struct S0 * p_2417);
int16_t * func_324(int32_t * p_325, int32_t  p_326, int32_t * p_327, uint64_t  p_328, struct S0 * p_2417);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_2417->g_6 p_2417->g_7 p_2417->g_1827 p_2417->g_2414
 * writes: p_2417->g_7 p_2417->g_1827 p_2417->g_2415
 */
uint32_t  func_1(struct S0 * p_2417)
{ /* block id: 4 */
    VECTOR(uint32_t, 4) l_8 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x6F084217L), 0x6F084217L);
    int32_t *l_9[10];
    uint8_t l_10 = 0xCAL;
    VECTOR(int8_t, 2) l_20 = (VECTOR(int8_t, 2))((-3L), 0x2BL);
    VECTOR(int16_t, 8) l_34 = (VECTOR(int16_t, 8))(0x5654L, (VECTOR(int16_t, 4))(0x5654L, (VECTOR(int16_t, 2))(0x5654L, 0x3735L), 0x3735L), 0x3735L, 0x5654L, 0x3735L);
    VECTOR(int16_t, 16) l_41 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x0D13L), 0x0D13L), 0x0D13L, (-10L), 0x0D13L, (VECTOR(int16_t, 2))((-10L), 0x0D13L), (VECTOR(int16_t, 2))((-10L), 0x0D13L), (-10L), 0x0D13L, (-10L), 0x0D13L);
    uint32_t l_2413 = 0x525B3D3EL;
    int16_t l_2416 = 0x02E7L;
    int i;
    for (i = 0; i < 10; i++)
        l_9[i] = (void*)0;
    (*p_2417->g_6) &= (GROUP_DIVERGE(2, 1) >= (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((0x0FL > 0x72L), 7)), 7)));
    l_10 |= (((VECTOR(uint32_t, 16))(l_8.xyyyxyzyxzywzxyz)).s1 > p_2417->g_7[1]);
    for (l_10 = 0; (l_10 > 9); l_10 = safe_add_func_int16_t_s_s(l_10, 2))
    { /* block id: 9 */
        int32_t *l_13 = &p_2417->g_7[4];
        int32_t **l_14 = (void*)0;
        int32_t **l_15 = &l_13;
        VECTOR(int8_t, 4) l_18 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x51L), 0x51L);
        int16_t *l_24 = &p_2417->g_25[5][4][2];
        VECTOR(int8_t, 16) l_26 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        int32_t *l_42 = &p_2417->g_43;
        int32_t l_2412 = 0x761C6FE0L;
        int i;
        (*l_15) = l_13;
        p_2417->g_1827.s5 ^= ((**l_15) ^ (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(0x20L, 0x0CL, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_18.yzzzwyzxyyywxzzx)).s5f, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_2417->g_19.s54)))), ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 2))(l_20.xy)), (int8_t)(**l_15)))).yxxyxyxxxxxyyxxy)).lo, (int8_t)(safe_unary_minus_func_int16_t_s(((*l_24) = (p_2417->g_23 &= (p_2417->g_comm_values[p_2417->tid] != ((VECTOR(uint8_t, 2))(p_2417->g_22.xy)).odd)))))))).s03))), ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(l_26.s6221)).zwyzywxy, ((VECTOR(int8_t, 2))(2L, 4L)).yxxxxxyy))).s15))).yyyy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((safe_lshift_func_uint8_t_u_s(253UL, ((((!func_29((p_2417->g_22.y , ((*l_13) >= (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_34.s4271)).x, (safe_rshift_func_uint8_t_u_u(p_2417->g_19.sc, ((safe_div_func_uint32_t_u_u((((*l_42) = (safe_sub_func_int16_t_s_s(p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))], ((*l_24) = ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(l_41.sbc)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x6226L, (-1L), ((VECTOR(int16_t, 2))(0L, 6L)), p_2417->g_23, ((VECTOR(int16_t, 2))(0x4BEBL)), 0L)).s30)), (*l_13), 0x3454L, ((VECTOR(int16_t, 4))((-9L))))).s06, ((VECTOR(int16_t, 2))((-8L)))))), 0x0E68L, 1L)), ((VECTOR(int16_t, 4))((-1L))))).s05, ((VECTOR(int16_t, 2))((-6L)))))).yyyyyyxxxyyxxyyy, ((VECTOR(int16_t, 16))(1L))))).s4)))) , 2UL), (-1L))) & p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]))))))), p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))], p_2417)) <= p_2417->g_2410[0][6][0]) && (-8L)) , 1L))) & p_2417->g_2411), l_2412, (-8L), (**l_15), ((VECTOR(int8_t, 2))(5L)), 0x2BL, 1L)).s06)).yyyxyxxxyyxxxxyx)).sfd44, ((VECTOR(int8_t, 4))(1L))))), 0x0BL, 2L, (-2L), 0x01L, ((VECTOR(int8_t, 4))(1L)), 1L, 0L)).s4205)).zxyzxzwxyyyzxxzz, ((VECTOR(int8_t, 16))(0x68L))))).s7, l_2413)));
        (*p_2417->g_2414) = &p_2417->g_1707;
    }
    return l_2416;
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_43 p_2417->g_307 p_2417->g_7 p_2417->g_355 p_2417->g_356 p_2417->g_22 p_2417->g_19 p_2417->g_23 p_2417->g_396 p_2417->g_308 p_2417->g_391 p_2417->g_25 p_2417->g_434 p_2417->g_337 p_2417->g_476 p_2417->g_438 p_2417->g_6 p_2417->g_409 p_2417->g_496 p_2417->g_404 p_2417->g_330 p_2417->g_334 p_2417->g_509 p_2417->g_319 p_2417->g_542 p_2417->g_517 p_2417->g_723 p_2417->g_725 p_2417->g_726 p_2417->g_753 p_2417->g_757 p_2417->g_773 p_2417->g_777 p_2417->g_850 p_2417->g_851 p_2417->g_comm_values p_2417->g_481 p_2417->g_813 p_2417->l_comm_values p_2417->g_510 p_2417->g_979 p_2417->g_774 p_2417->g_428 p_2417->g_1013 p_2417->g_1014 p_2417->g_1015 p_2417->g_945 p_2417->g_872 p_2417->g_815 p_2417->g_1147 p_2417->g_1165 p_2417->g_537 p_2417->g_1203 p_2417->g_1199 p_2417->g_1223 p_2417->g_1265 p_2417->g_543 p_2417->g_1278 p_2417->g_1182 p_2417->g_1286 p_2417->g_1191 p_2417->g_781 p_2417->g_1295 p_2417->g_1313 p_2417->g_1322 p_2417->g_1324 p_2417->g_1337 p_2417->g_1338 p_2417->g_1390 p_2417->g_1323 p_2417->g_1419 p_2417->g_1442 p_2417->g_1325 p_2417->g_1443 p_2417->g_1444 p_2417->g_1411 p_2417->g_1544 p_2417->g_1549 p_2417->g_1551 p_2417->g_1559 p_2417->g_1224 p_2417->g_1579 p_2417->g_1560 p_2417->g_1581 p_2417->g_1586 p_2417->g_1235 p_2417->g_1667 p_2417->g_1501 p_2417->g_1706 p_2417->g_1709 p_2417->g_1710 p_2417->g_1878 p_2417->g_1842 p_2417->g_1903 p_2417->g_1912 p_2417->g_1915 p_2417->g_1933 p_2417->g_1941 p_2417->g_1971 p_2417->g_1978 p_2417->g_1781 p_2417->g_2022 p_2417->g_2072 p_2417->g_2074 p_2417->g_2085 p_2417->g_417 p_2417->g_2129 p_2417->g_2138 p_2417->g_2139 p_2417->g_2153 p_2417->g_2155 p_2417->g_2158 p_2417->g_2059 p_2417->g_1789 p_2417->g_2262 p_2417->g_2291 p_2417->g_2338 p_2417->g_2381 p_2417->g_2383 p_2417->g_2390 p_2417->g_2409
 * writes: p_2417->g_43 p_2417->g_308 p_2417->g_319 p_2417->g_356 p_2417->g_330 p_2417->g_337 p_2417->g_396 p_2417->g_428 p_2417->g_434 p_2417->g_334 p_2417->g_543 p_2417->g_438 p_2417->g_23 p_2417->g_723 p_2417->g_726 p_2417->g_25 p_2417->g_753 p_2417->g_391 p_2417->g_774 p_2417->g_404 p_2417->g_417 p_2417->g_979 p_2417->g_777 p_2417->g_1223 p_2417->g_1182 p_2417->g_1235 p_2417->g_773 p_2417->g_1265 p_2417->g_1323 p_2417->g_1325 p_2417->g_1191 p_2417->g_815 p_2417->g_517 p_2417->g_1013 p_2417->g_1337 p_2417->g_781 p_2417->g_1501 p_2417->g_1560 p_2417->g_1581 p_2417->g_1586 p_2417->g_1667 p_2417->g_1933 p_2417->g_2138 p_2417->g_2059 p_2417->g_509 p_2417->g_6 p_2417->g_2129 p_2417->g_2405
 */
int16_t  func_29(int64_t  p_30, int32_t  p_31, struct S0 * p_2417)
{ /* block id: 15 */
    int32_t *l_66[2];
    VECTOR(uint32_t, 8) l_1275 = (VECTOR(uint32_t, 8))(0xE2A7F3DCL, (VECTOR(uint32_t, 4))(0xE2A7F3DCL, (VECTOR(uint32_t, 2))(0xE2A7F3DCL, 4294967288UL), 4294967288UL), 4294967288UL, 0xE2A7F3DCL, 4294967288UL);
    VECTOR(uint32_t, 4) l_1276 = (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x1091D3A5L), 0x1091D3A5L);
    VECTOR(uint32_t, 8) l_1277 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL);
    VECTOR(uint32_t, 4) l_1279 = (VECTOR(uint32_t, 4))(0xBCF1A759L, (VECTOR(uint32_t, 2))(0xBCF1A759L, 3UL), 3UL);
    uint64_t *l_1282 = (void*)0;
    uint64_t *l_1283 = &p_2417->g_774;
    VECTOR(int16_t, 2) l_1284 = (VECTOR(int16_t, 2))(0x47C3L, 0x21BFL);
    VECTOR(int16_t, 2) l_1285 = (VECTOR(int16_t, 2))(0L, 5L);
    int8_t *l_1291 = &p_2417->g_1235;
    int8_t l_1292[7][3][9] = {{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}},{{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)},{(-6L),0x00L,0x7DL,0x32L,(-2L),0x2DL,0x1DL,0L,(-7L)}}};
    uint16_t *l_1447[3][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int8_t l_1448 = 0x63L;
    VECTOR(uint64_t, 8) l_1451 = (VECTOR(uint64_t, 8))(0x7365A32B58EE3E5CL, (VECTOR(uint64_t, 4))(0x7365A32B58EE3E5CL, (VECTOR(uint64_t, 2))(0x7365A32B58EE3E5CL, 4UL), 4UL), 4UL, 0x7365A32B58EE3E5CL, 4UL);
    int16_t **l_1452 = (void*)0;
    VECTOR(uint8_t, 4) l_1461 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x21L), 0x21L);
    VECTOR(int64_t, 8) l_1464 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    VECTOR(int32_t, 4) l_1465 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L);
    uint32_t *l_1467 = &p_2417->g_1191;
    uint32_t **l_1466 = &l_1467;
    uint8_t l_1468[4][5] = {{1UL,0x15L,1UL,1UL,0x15L},{1UL,0x15L,1UL,1UL,0x15L},{1UL,0x15L,1UL,1UL,0x15L},{1UL,0x15L,1UL,1UL,0x15L}};
    uint16_t l_1469[8][4][7] = {{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}},{{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL},{0x74C8L,4UL,0x988AL,0x0F9BL,1UL,0xBEFBL,65526UL}}};
    VECTOR(int8_t, 4) l_1497 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x14L), 0x14L);
    int32_t l_1528 = 0L;
    VECTOR(uint32_t, 16) l_1547 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x87F0E81BL), 0x87F0E81BL), 0x87F0E81BL, 4294967295UL, 0x87F0E81BL, (VECTOR(uint32_t, 2))(4294967295UL, 0x87F0E81BL), (VECTOR(uint32_t, 2))(4294967295UL, 0x87F0E81BL), 4294967295UL, 0x87F0E81BL, 4294967295UL, 0x87F0E81BL);
    int32_t l_1556 = 8L;
    int32_t *l_1614 = &p_2417->g_43;
    int32_t **l_1613 = &l_1614;
    VECTOR(uint32_t, 4) l_1616 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xB661D4D6L), 0xB661D4D6L);
    int32_t l_1657 = 1L;
    int8_t l_1685 = 2L;
    int32_t *l_1705[5][7][1] = {{{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]}},{{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]}},{{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]}},{{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]}},{{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]},{&p_2417->g_1147[7]}}};
    int32_t **l_1704 = &l_1705[2][5][0];
    int32_t ****l_1725 = (void*)0;
    VECTOR(uint32_t, 8) l_1727 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    int32_t l_1839 = 2L;
    uint16_t l_1892 = 65532UL;
    int32_t l_1922 = 0x1DB0DCC4L;
    int8_t l_1947 = 6L;
    VECTOR(uint16_t, 8) l_1972 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
    VECTOR(int32_t, 2) l_1975 = (VECTOR(int32_t, 2))(9L, 0x5B63AA83L);
    VECTOR(int32_t, 4) l_1976 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x65FB2DB2L), 0x65FB2DB2L);
    VECTOR(int32_t, 4) l_1977 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x7013895BL), 0x7013895BL);
    VECTOR(int32_t, 4) l_1979 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x323F12BDL), 0x323F12BDL);
    VECTOR(int32_t, 2) l_1980 = (VECTOR(int32_t, 2))(1L, 0x292CA923L);
    VECTOR(int32_t, 4) l_1981 = (VECTOR(int32_t, 4))(0x32E02091L, (VECTOR(int32_t, 2))(0x32E02091L, 0x569AF1FDL), 0x569AF1FDL);
    VECTOR(int32_t, 8) l_1982 = (VECTOR(int32_t, 8))(0x533D8CC8L, (VECTOR(int32_t, 4))(0x533D8CC8L, (VECTOR(int32_t, 2))(0x533D8CC8L, 0x5222F857L), 0x5222F857L), 0x5222F857L, 0x533D8CC8L, 0x5222F857L);
    VECTOR(int32_t, 2) l_1983 = (VECTOR(int32_t, 2))(0x4C5472C0L, 0x0954911FL);
    VECTOR(int32_t, 16) l_1984 = (VECTOR(int32_t, 16))(0x49EFFA17L, (VECTOR(int32_t, 4))(0x49EFFA17L, (VECTOR(int32_t, 2))(0x49EFFA17L, (-1L)), (-1L)), (-1L), 0x49EFFA17L, (-1L), (VECTOR(int32_t, 2))(0x49EFFA17L, (-1L)), (VECTOR(int32_t, 2))(0x49EFFA17L, (-1L)), 0x49EFFA17L, (-1L), 0x49EFFA17L, (-1L));
    int8_t l_1991 = (-8L);
    int64_t l_1992 = (-6L);
    VECTOR(uint64_t, 16) l_2048 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    int16_t l_2055 = 0x3D43L;
    VECTOR(uint16_t, 8) l_2102 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3C02L), 0x3C02L), 0x3C02L, 65535UL, 0x3C02L);
    VECTOR(int8_t, 4) l_2114 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x50L), 0x50L);
    uint32_t l_2135 = 0xEC0D0018L;
    uint16_t l_2141 = 65527UL;
    int64_t ***l_2145[9][6] = {{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543},{&p_2417->g_543,&p_2417->g_543,&p_2417->g_543,(void*)0,&p_2417->g_543,&p_2417->g_543}};
    VECTOR(int8_t, 8) l_2152 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 2L), 2L), 2L, (-5L), 2L);
    VECTOR(int64_t, 16) l_2160 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x42C4EA1641A0010DL), 0x42C4EA1641A0010DL), 0x42C4EA1641A0010DL, (-1L), 0x42C4EA1641A0010DL, (VECTOR(int64_t, 2))((-1L), 0x42C4EA1641A0010DL), (VECTOR(int64_t, 2))((-1L), 0x42C4EA1641A0010DL), (-1L), 0x42C4EA1641A0010DL, (-1L), 0x42C4EA1641A0010DL);
    int32_t l_2165 = 8L;
    int32_t l_2213 = (-9L);
    uint8_t l_2263 = 1UL;
    int16_t l_2264 = 5L;
    int32_t ***l_2307 = &p_2417->g_1324;
    int8_t l_2326 = 0x76L;
    VECTOR(int64_t, 2) l_2335 = (VECTOR(int64_t, 2))(0x2710053E7F34E1E9L, 0x4642AEF94E57BE72L);
    VECTOR(int8_t, 2) l_2342 = (VECTOR(int8_t, 2))((-10L), 0x23L);
    int16_t l_2346 = 0x55C1L;
    uint8_t l_2361 = 5UL;
    uint16_t l_2393 = 65535UL;
    VECTOR(int64_t, 2) l_2395 = (VECTOR(int64_t, 2))(0x567B466F1F77DFD9L, 0x26D13835FAE8E429L);
    int32_t ******l_2402 = (void*)0;
    int32_t *****l_2404 = (void*)0;
    int32_t ******l_2403[6] = {&l_2404,&l_2404,&l_2404,&l_2404,&l_2404,&l_2404};
    int32_t *l_2407 = (void*)0;
    int32_t **l_2408 = &l_2407;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_66[i] = (void*)0;
    (*p_2417->g_1324) = func_44(func_50((p_2417->g_1323 = func_54((((p_30 | (safe_mod_func_uint16_t_u_u((p_2417->g_773.y = ((safe_div_func_uint64_t_u_u(((*l_1283) = (p_31 <= ((((VECTOR(uint32_t, 16))(4294967295UL, 4294967295UL, 1UL, ((FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10) < ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0xACL)).xyxyxxxy)).s4) , (safe_add_func_int32_t_s_s(func_63(p_2417->g_43, l_66[0], p_2417), p_30))), ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(0x99137F96L, 0x4BAE5E25L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_1275.s12753044)).s4157312271475413))))).sce46, ((VECTOR(uint32_t, 2))(l_1276.yx)).xyyy))).yzzywzzx)).s16))), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xCC540CB9L, 0x449DF15EL)).yxxyxyxy)))), 4294967295UL, ((VECTOR(uint32_t, 4))(l_1277.s5572)), 4294967292UL, 6UL, 0x883140C5L)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_2417->g_1278.s70a5)).wyzywyzzzwwwywwz))))).even, ((VECTOR(uint32_t, 8))(l_1279.wwxwxwyx))))), 1UL, 4294967291UL)).sf , (++p_2417->g_1182.s7)) && p_2417->g_773.x))), (p_2417->g_1013.s8 | ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(l_1284.xxyxxyyyxyyyyyyy)).lo, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(((((*l_1291) = (((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x319DL)).yyxy)))))), (-4L), 0x3CACL, 1L)).s50, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x101DL)).yxxyyyxxyxxxyxyy)).se2))).yxyxxxxyyyxyyxyy)).s9dfa, ((VECTOR(int16_t, 4))(l_1285.yxxx))))).ywwzwyzw, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(p_2417->g_1286.s4251342511576331)), (uint16_t)(safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_31, 1L)), 0x4E8FL))))).even))).s5 , p_2417->g_1191)) ^ l_1292[4][0][2]) != (-1L)), 0x7C92L, 6L, p_31, 1L, (-1L), 1L, 0x6D45L)).s14, ((VECTOR(int16_t, 2))(0x6FECL)), ((VECTOR(int16_t, 2))(0x7261L))))).yxxxxxxy))).s5))) != p_31)), p_2417->g_781.x))) >= p_2417->g_496.s4) , l_66[0]), p_2417->g_517, p_2417)), p_2417->g_510.s0, p_2417->g_1324, p_2417), p_30, p_31, p_2417->g_757.z, p_2417->g_781.y, p_2417);
    if (((safe_mul_func_uint16_t_u_u((l_1448 = ((***p_2417->g_1442) = ((VECTOR(uint16_t, 2))(0x928BL, 0xA7D5L)).hi)), (safe_div_func_uint16_t_u_u((((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_1451.s14333641)).lo)).xzzywxyy)).s7646731600557317)).s27, (uint64_t)((l_1452 == (void*)0) > (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_31, ((p_31 | p_2417->g_851.sa) == p_2417->g_1411.z))) ^ (l_1468[0][0] |= (((FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10) && (safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_1461.yw)).hi, GROUP_DIVERGE(0, 1))) || (safe_div_func_int64_t_s_s(0x790D5707157F6991L, ((VECTOR(int64_t, 16))(l_1464.s0510025436546313)).s4))), ((VECTOR(int32_t, 2))(l_1465.wy)).hi))) | ((p_31 ^ (l_1466 == &l_1467)) <= 0x4603A3E0L)) & 5L))), l_1469[2][1][4])))))).odd ^ 0x612E3610BC024751L), p_30)))) & GROUP_DIVERGE(1, 1)))
    { /* block id: 729 */
        uint32_t l_1470 = 0x8039CF80L;
        VECTOR(int16_t, 2) l_1475 = (VECTOR(int16_t, 2))((-5L), 0x0547L);
        int32_t l_1478 = (-1L);
        int32_t l_1479 = 0x0DE2AA89L;
        uint8_t *l_1480 = (void*)0;
        uint8_t *l_1481 = &l_1468[0][0];
        int8_t l_1488 = 0x7AL;
        uint32_t *l_1491 = &p_2417->g_1337[3][1][2];
        int32_t l_1492 = 0x73FA4CE0L;
        uint32_t **l_1498 = (void*)0;
        uint32_t *l_1500 = (void*)0;
        uint32_t **l_1499[3][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1500,&l_1500}}};
        int32_t *l_1502[1][7][8] = {{{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479},{(void*)0,&p_2417->g_7[2],&p_2417->g_7[2],&p_2417->g_7[1],&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,&l_1479}}};
        VECTOR(int32_t, 4) l_1504 = (VECTOR(int32_t, 4))(0x50898CD3L, (VECTOR(int32_t, 2))(0x50898CD3L, 0x526AF51DL), 0x526AF51DL);
        uint64_t *l_1517 = (void*)0;
        VECTOR(uint16_t, 2) l_1525 = (VECTOR(uint16_t, 2))(0xB0BCL, 0x2E25L);
        VECTOR(uint32_t, 8) l_1550 = (VECTOR(uint32_t, 8))(0xC2E86DE3L, (VECTOR(uint32_t, 4))(0xC2E86DE3L, (VECTOR(uint32_t, 2))(0xC2E86DE3L, 8UL), 8UL), 8UL, 0xC2E86DE3L, 8UL);
        uint32_t l_1663 = 0x6893C6ECL;
        int64_t l_1674 = 0x028FEF222488C5A2L;
        VECTOR(int8_t, 16) l_1683 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L, (VECTOR(int8_t, 2))((-7L), 1L), (VECTOR(int8_t, 2))((-7L), 1L), (-7L), 1L, (-7L), 1L);
        int32_t **l_1684 = &l_66[0];
        uint16_t l_1686 = 0x4DFAL;
        int32_t l_1690 = 0x59E618A6L;
        VECTOR(uint16_t, 2) l_1708 = (VECTOR(uint16_t, 2))(0xFFD8L, 0xD64BL);
        VECTOR(int32_t, 8) l_1715 = (VECTOR(int32_t, 8))(0x5E0167D4L, (VECTOR(int32_t, 4))(0x5E0167D4L, (VECTOR(int32_t, 2))(0x5E0167D4L, 0x6FAD6AD0L), 0x6FAD6AD0L), 0x6FAD6AD0L, 0x5E0167D4L, 0x6FAD6AD0L);
        int32_t l_1720 = 0L;
        uint8_t l_1801 = 8UL;
        VECTOR(int64_t, 8) l_1856 = (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x7F7C9A1B4040F843L), 0x7F7C9A1B4040F843L), 0x7F7C9A1B4040F843L, 3L, 0x7F7C9A1B4040F843L);
        int i, j, k;
        l_1492 |= (((l_1470 , func_44(&p_2417->g_43, (l_1470 > p_30), (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1475.xx)))).yxxyxxyxxxxyyxyy))).sd, ((safe_sub_func_int8_t_s_s((((*l_1481)++) || ((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(l_1478, (((*l_1491) |= (((((((VECTOR(uint32_t, 8))(p_30, 0xEF6E1A80L, ((VECTOR(uint32_t, 2))(0xA7E92A14L, 0x17ED24F9L)), l_1488, (((((VECTOR(uint16_t, 8))(p_30, (safe_mod_func_uint16_t_u_u(((p_2417->g_781.x ^= p_30) > l_1475.y), p_31)), p_30, ((VECTOR(uint16_t, 2))(0x986DL)), p_30, 0x474EL, 65534UL)).s4 && 0L) ^ p_30) | p_30), 4294967295UL, 1UL)).s5 < l_1478) >= GROUP_DIVERGE(1, 1)) < p_30) == 0x4DL) == 1UL)) >= p_31))) < 3L), 0x45B6L)) >= p_31)), l_1475.x)) , FAKE_DIVERGE(p_2417->global_2_offset, get_global_id(2), 10)))), FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10))), p_2417->g_1015.x, l_1479, p_2417)) != (void*)0) > l_1488);
        l_1492 ^= (safe_rshift_func_uint16_t_u_u((((*p_2417->g_1323) = 0x34DBL) != (safe_mod_func_int8_t_s_s((-3L), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1497.yzywzxwyxzyxwywy)))).s3))), ((***p_2417->g_1442) &= 0xF416L)));
        if ((&p_2417->g_23 == (p_2417->g_1501 = l_1491)))
        { /* block id: 738 */
            int32_t *l_1503 = &l_1492;
            uint32_t **l_1512 = &l_1467;
            VECTOR(uint16_t, 4) l_1524 = (VECTOR(uint16_t, 4))(0x695CL, (VECTOR(uint16_t, 2))(0x695CL, 0xEF3CL), 0xEF3CL);
            uint8_t l_1526 = 0UL;
            int32_t l_1527 = 0x3FBD2F80L;
            int32_t l_1529 = (-1L);
            int i;
            l_1502[0][4][4] = func_50(&p_2417->g_25[5][4][2], p_2417->g_510.sd, &l_66[0], p_2417);
            (*p_2417->g_1324) = l_1503;
            (*p_2417->g_1325) |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1504.wzwyxxwx)))).s1;
            l_1529 = ((safe_mod_func_uint64_t_u_u(2UL, (safe_unary_minus_func_int16_t_s((p_31 & (safe_lshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_1512 == (((((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))((((safe_mul_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((l_1517 != ((safe_mul_func_int16_t_s_s(((void*)0 == &l_1470), (safe_mul_func_uint16_t_u_u((l_1527 = (((safe_rshift_func_uint16_t_u_s(((*l_1503) = (((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(l_1524.xxzxxxxwzzyyxxxw)), ((VECTOR(uint16_t, 8))(((**p_2417->g_1443) = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_1525.xxxxxxxyyyyxyxyx)).even)))).s0), 4UL, 0x95C1L, 1UL, l_1526, 0x67AAL, 65535UL, 0xFEE2L)).s2061330527536505))).s0 | (*p_2417->g_1323))), 13)) , &l_1503) != (void*)0)), p_30)))) , &p_2417->g_774)), GROUP_DIVERGE(1, 1))) >= 0UL) > (-9L)), p_30)) < p_30) == 0x2DL), ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 8))(0x4151F6F0L)), 0x6E8A3448L, 2L, (-1L))), ((VECTOR(int32_t, 16))(0x7406F18DL))))).s6 , (*l_1503)) || 0x26L) , (void*)0)), p_31)), 7))))))) , l_1528);
        }
        else
        { /* block id: 746 */
            uint32_t l_1534 = 1UL;
            int32_t l_1539 = 0x61A01EDEL;
            VECTOR(uint32_t, 16) l_1545 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xAEE176C0L), 0xAEE176C0L), 0xAEE176C0L, 4294967295UL, 0xAEE176C0L, (VECTOR(uint32_t, 2))(4294967295UL, 0xAEE176C0L), (VECTOR(uint32_t, 2))(4294967295UL, 0xAEE176C0L), 4294967295UL, 0xAEE176C0L, 4294967295UL, 0xAEE176C0L);
            VECTOR(uint32_t, 4) l_1546 = (VECTOR(uint32_t, 4))(0x174BE9B2L, (VECTOR(uint32_t, 2))(0x174BE9B2L, 0x0ED6C507L), 0x0ED6C507L);
            VECTOR(uint32_t, 8) l_1548 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0UL), 0UL), 0UL, 4294967290UL, 0UL);
            uint32_t *l_1569 = &p_2417->g_1191;
            int32_t *l_1610 = &p_2417->g_43;
            int32_t **l_1609 = &l_1610;
            uint8_t l_1623 = 0x0CL;
            uint32_t **l_1635[4];
            VECTOR(int64_t, 4) l_1649 = (VECTOR(int64_t, 4))(0x1F91B0603248AFBDL, (VECTOR(int64_t, 2))(0x1F91B0603248AFBDL, 0x2DE04FA200A4208FL), 0x2DE04FA200A4208FL);
            int32_t l_1658 = 0x34F0A19FL;
            int32_t l_1660 = (-1L);
            int32_t l_1661 = (-1L);
            int32_t l_1666[2][8] = {{0x3E7A926FL,0x4DE3C4A4L,0x3E7A926FL,0x3E7A926FL,0x4DE3C4A4L,0x3E7A926FL,0x3E7A926FL,0x4DE3C4A4L},{0x3E7A926FL,0x4DE3C4A4L,0x3E7A926FL,0x3E7A926FL,0x4DE3C4A4L,0x3E7A926FL,0x3E7A926FL,0x4DE3C4A4L}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1635[i] = &l_1491;
            (*p_2417->g_1324) = &l_1478;
            if ((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10) >= (((safe_mod_func_uint16_t_u_u((++l_1534), (~(safe_div_func_uint64_t_u_u(0x99899AE970C827B3L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(1L, 0x375E36660A825496L)), 0x191D375EB1CA8F6EL, (-9L))).y))))) | (((l_1539 , (safe_rshift_func_uint8_t_u_s(((!0xA7L) || (safe_add_func_int32_t_s_s((p_31 == ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(p_2417->g_1544.s02421093)).hi, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1545.s07)).yyxyyyxy)).lo))).zwwwyzxxzyxzywzw)).s2e)).xxyyxyyyyyyxyyxy, ((VECTOR(uint32_t, 4))(l_1546.wyxw)).wzwwyxzxxwxywzww))).even)).s45, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_1547.s0b755bb0)).lo)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_1548.s32005606)).s1, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(p_2417->g_1549.yyyxxxyx)).lo, ((VECTOR(uint32_t, 16))(l_1550.s0535172666251235)).sa57f, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x3A091CC7L, ((VECTOR(uint32_t, 2))(5UL, 0x092CE3D1L)), 0x2059F170L))))))), ((VECTOR(uint32_t, 2))(p_2417->g_1551.yx)), 0x425056C8L)))))).s22)).yxyyxxxy)).s03))).lo), (251UL == (safe_mul_func_int16_t_s_s((((*p_2417->g_1323) && ((0xF927AD4BL != ((safe_lshift_func_uint16_t_u_u((p_2417->g_481.s5 > l_1556), 9)) , 0x720FAF8EL)) > (-1L))) , p_31), 0x0231L)))))), 7))) || l_1545.s3) && p_30)) & 0x84F327C203AFBA9BL)), 0x4E2BL)))
            { /* block id: 749 */
                uint32_t ***l_1561 = &l_1466;
                VECTOR(int8_t, 8) l_1568 = (VECTOR(int8_t, 8))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, (-1L)), (-1L)), (-1L), 0x64L, (-1L));
                int32_t l_1570 = 0x5FB0727AL;
                uint32_t **l_1571 = &l_1569;
                int i;
                if ((safe_lshift_func_int16_t_s_s((((*l_1491) = ((((*l_1561) = p_2417->g_1559) != ((((safe_mod_func_int16_t_s_s(((-9L) & 0xE59507E0L), ((*p_2417->g_1323) = 0x7346L))) != (safe_mod_func_uint64_t_u_u(((l_1570 |= (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1568.s75767410)), ((VECTOR(int8_t, 8))(0x61L, p_31, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((*p_2417->g_1223) != ((*p_2417->g_1559) = l_1569)), (p_31 <= (-10L)), ((VECTOR(int8_t, 2))(0x5CL)), ((VECTOR(int8_t, 4))(0x69L)))).odd)), (-3L), 1L)))).sb, p_31))) || 0x2FE3L), p_2417->g_1182.sa))) != p_30) , l_1571)) > 0x332CL)) <= p_31), p_2417->g_1265.s5)))
                { /* block id: 755 */
                    uint32_t *l_1580 = &p_2417->g_1191;
                    int32_t ****l_1582 = &p_2417->g_1581;
                    int32_t l_1583 = (-1L);
                    (**p_2417->g_1324) &= (p_2417->g_1014.s7 <= (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((l_1570 , ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x7433L, (-3L))).yyxxyxxy)).hi)), (int16_t)((*p_2417->g_1323) &= ((safe_mod_func_uint16_t_u_u(((**p_2417->g_1443) = 65526UL), (safe_rshift_func_uint8_t_u_s(((((((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((safe_unary_minus_func_int8_t_s(p_2417->g_319)) == (((VECTOR(uint32_t, 2))(p_2417->g_1579.sfe)).even , (((l_1580 == ((**l_1561) = (*p_2417->g_1559))) || ((0x458E4B9F27C01B3EL ^ (((*l_1582) = p_2417->g_1581) == (void*)0)) ^ 0L)) > l_1583))), 4294967293UL, 0UL, 0xD2FE4B9FL, ((VECTOR(uint32_t, 2))(1UL)), 1UL, 0UL, p_30, 0xCB56966EL, 0x62F4A8D7L, ((VECTOR(uint32_t, 2))(0UL)), 0x71839965L, 0x8ACD23B7L, 4294967293UL)))).scf0f)).odd))).lo < p_30) == p_31) , 0x7C757227L) && p_31), p_31)))) , p_31)), (int16_t)0x5C5EL))).z) != p_30), 1L, 6L, 0x72L)).yyxzzzzy)).s73, ((VECTOR(int8_t, 2))(0x20L))))).lo)));
                    for (l_1479 = 0; (l_1479 != (-29)); l_1479--)
                    { /* block id: 763 */
                        (**p_2417->g_1324) = 1L;
                        (*p_2417->g_1325) |= ((VECTOR(int32_t, 4))(0L, (-1L), 0x34480722L, 0x310F298BL)).z;
                    }
                    l_1539 &= p_2417->g_1586;
                }
                else
                { /* block id: 768 */
                    VECTOR(int16_t, 2) l_1588 = (VECTOR(int16_t, 2))(0x1B71L, (-1L));
                    int8_t l_1593 = 0x6DL;
                    int64_t l_1596 = 0L;
                    int i;
                    if (p_30)
                    { /* block id: 769 */
                        int16_t **l_1587 = &p_2417->g_1323;
                        uint64_t *l_1594[6] = {&p_2417->g_1595[5][4],&p_2417->g_1595[5][4],&p_2417->g_1595[5][4],&p_2417->g_1595[5][4],&p_2417->g_1595[5][4],&p_2417->g_1595[5][4]};
                        int32_t *l_1597 = (void*)0;
                        int i;
                        (*p_2417->g_1324) = func_50(((*l_1587) = (void*)0), (l_1568.s7 != ((VECTOR(int16_t, 16))(l_1588.yyxyyyxxyxxxxxyx)).s1), &l_66[1], p_2417);
                        l_1597 = (*p_2417->g_1165);
                    }
                    else
                    { /* block id: 776 */
                        int32_t *l_1599 = &l_1492;
                        (*p_2417->g_1325) &= 0L;
                        (**p_2417->g_1324) |= (safe_unary_minus_func_uint32_t_u(p_31));
                        l_1599 = (*p_2417->g_1165);
                        (*p_2417->g_1324) = &l_1539;
                    }
                    return l_1570;
                }
                for (p_2417->g_774 = (-26); (p_2417->g_774 <= 15); p_2417->g_774++)
                { /* block id: 786 */
                    (*p_2417->g_1325) ^= 1L;
                    return p_31;
                }
            }
            else
            { /* block id: 790 */
                uint32_t *l_1608 = &p_2417->g_979;
                int32_t **l_1611 = &l_1610;
                int32_t ***l_1612 = (void*)0;
                uint8_t l_1615 = 0x55L;
                int8_t l_1655 = 0x28L;
                int32_t l_1656 = (-3L);
                int32_t l_1659 = (-1L);
                int32_t l_1662 = 0x5DDB8E28L;
                (*p_2417->g_1325) |= (((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 4))(0xE66C86E1L, (++(*l_1491)), 0x21973232L, 0x94108423L)).wzxyxwxz, ((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))((safe_rshift_func_uint8_t_u_s((((p_31 , ((safe_add_func_int32_t_s_s(p_31, (((l_1608 != l_66[0]) > (l_1609 == (l_1613 = l_1611))) < l_1615))) || (GROUP_DIVERGE(0, 1) && GROUP_DIVERGE(0, 1)))) | ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_1616.xzyyyyyz)).lo)).w) != (((safe_sub_func_int8_t_s_s(p_30, (((safe_mul_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(8L, 4UL)) , l_1615), p_31)) ^ 0x13FD30B7856D1B54L) , p_30))) , 0x0183C9082420793FL) | l_1545.s9)), l_1623)), 0x83A0E8D8L, 0xC1497545L, 4294967295UL, ((VECTOR(uint32_t, 8))(1UL)), 0UL, ((VECTOR(uint32_t, 2))(4294967292UL)), 0x4F11AEA1L)).se9, ((VECTOR(uint32_t, 2))(0xF747AB08L))))).xyxyyxyy))).s00, ((VECTOR(uint32_t, 2))(4294967292UL))))), 4294967295UL)).xyxzyxzy, ((VECTOR(uint32_t, 8))(0x740C4B70L)), ((VECTOR(uint32_t, 8))(4294967294UL))))).s5 || (-1L));
                for (p_2417->g_428 = 0; (p_2417->g_428 != 53); p_2417->g_428 = safe_add_func_uint32_t_u_u(p_2417->g_428, 5))
                { /* block id: 796 */
                    (*p_2417->g_1325) &= 0x0C20C09BL;
                    return p_31;
                }
                for (p_2417->g_1586 = 0; (p_2417->g_1586 < 10); p_2417->g_1586 = safe_add_func_int8_t_s_s(p_2417->g_1586, 9))
                { /* block id: 802 */
                    int32_t l_1634 = 0x17496E00L;
                    int32_t l_1650 = 0x448A2309L;
                    int32_t l_1651 = 4L;
                    uint16_t l_1652 = 0xC46AL;
                    for (p_2417->g_334 = 23; (p_2417->g_334 >= (-2)); p_2417->g_334 = safe_sub_func_uint16_t_u_u(p_2417->g_334, 9))
                    { /* block id: 805 */
                        uint32_t ***l_1636 = (void*)0;
                        uint32_t ***l_1637 = &l_1635[0];
                        int64_t *l_1638[8][10][3] = {{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}},{{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]},{&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}}};
                        int32_t l_1648 = (-10L);
                        int i, j, k;
                        (**p_2417->g_1324) |= ((**p_2417->g_1443) < ((l_1649.w = ((safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(l_1634, (((p_2417->g_1265.s6 || (l_1539 ^= (((*l_1637) = l_1635[0]) == (void*)0))) < ((*l_1291) &= p_30)) && ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-3L), ((VECTOR(int8_t, 8))(0x49L, l_1634, p_2417->g_1147[5], ((safe_unary_minus_func_int32_t_s(((safe_add_func_uint32_t_u_u(p_31, p_31)) == 0x5861D263L))) , 0x52L), (-1L), ((VECTOR(int8_t, 2))(0x45L)), 8L)).s1, 0x63L, (-1L), 0x45L, 0x37L, p_30, (-1L), ((VECTOR(int8_t, 8))((-1L))))).s2a)), 0x51L, 0x5BL)).x, 0x72L)), l_1615)), p_31)) > 0xB3B6L)))) , 0xC5DD2A33E984E8A4L), 1L)) < l_1648)) > 0x0B0EL));
                        if (p_30)
                            continue;
                    }
                    l_1652++;
                }
                l_1663--;
            }
            (*p_2417->g_1324) = (*p_2417->g_355);
            p_2417->g_1667++;
        }
        if ((l_1686 &= ((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x70733762L, 4294967295UL, l_1674, 0xC1DC69B1L, ((*p_2417->g_1501)++), 0UL, 4294967294UL, 0UL)))).s4 , p_30) ^ (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(2L, 9L)), 0L, 0x3F483690L)), (-2L), (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((l_1685 = (((*p_2417->g_1324) = &l_1492) != ((*l_1684) = ((((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((&p_2417->g_723 == (void*)0), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1683.s4697)).odd)), 0x57L, 0x15L)).z)))) && ((GROUP_DIVERGE(1, 1) , 255UL) == p_30)) , p_31) , (*p_2417->g_1165))))))), 11)), ((VECTOR(int32_t, 2))(0x142E2273L)), ((VECTOR(int32_t, 8))(0x2D613EFDL)))).s7 , 252UL)), p_31)), p_30)) == 0x609FF21C24652C17L) | (-6L)) & GROUP_DIVERGE(2, 1))))
        { /* block id: 825 */
            int32_t l_1687 = (-8L);
            int32_t l_1688 = 0x393C0807L;
            int32_t l_1689 = 0L;
            int32_t l_1691 = (-3L);
            int32_t l_1692 = (-9L);
            uint64_t l_1693 = 0x6C0B9BFFF53838BAL;
            uint8_t **l_1696 = &l_1480;
            uint8_t ***l_1697 = &l_1696;
            l_1693--;
            (*l_1697) = l_1696;
        }
        else
        { /* block id: 828 */
            uint32_t l_1718[7] = {0xD05AB1FBL,0xD05AB1FBL,0xD05AB1FBL,0xD05AB1FBL,0xD05AB1FBL,0xD05AB1FBL,0xD05AB1FBL};
            int32_t **l_1719 = (void*)0;
            int32_t l_1723 = (-4L);
            VECTOR(int64_t, 4) l_1736 = (VECTOR(int64_t, 4))(0x2159B28107DE3C0CL, (VECTOR(int64_t, 2))(0x2159B28107DE3C0CL, (-1L)), (-1L));
            VECTOR(int64_t, 4) l_1738 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x601B8847581E85DBL), 0x601B8847581E85DBL);
            uint64_t *l_1742 = &p_2417->g_1595[0][5];
            VECTOR(uint16_t, 8) l_1782 = (VECTOR(uint16_t, 8))(0x9D04L, (VECTOR(uint16_t, 4))(0x9D04L, (VECTOR(uint16_t, 2))(0x9D04L, 65533UL), 65533UL), 65533UL, 0x9D04L, 65533UL);
            int32_t l_1792 = 0x7A70D337L;
            int32_t l_1798[4][10];
            int32_t *l_1804 = &p_2417->g_43;
            VECTOR(int64_t, 2) l_1817 = (VECTOR(int64_t, 2))(0x2C0E3E24711622A2L, 0x19693EAC3A1BCAF2L);
            uint64_t l_1840 = 0xB6CACD9AFFCB590CL;
            uint8_t l_1863 = 255UL;
            uint16_t l_1865 = 0x7C70L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1798[i][j] = 3L;
            }
            (*l_1684) = (((**p_2417->g_1324) = (safe_mul_func_int8_t_s_s(0x29L, ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_1704 == p_2417->g_1706), ((VECTOR(uint16_t, 8))(l_1708.yxyyyyxx)).s3)), ((void*)0 != &l_1481))) , (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_2417->g_1709.s8d35fc38)).s3625333623332630)).lo, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_2417->g_1710.s60)).xxxxxyxxxyyxyyyy)).s06, (int32_t)((l_1720 = (+((***p_2417->g_1442) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1715.s3, ((*l_1291) = (safe_mul_func_int8_t_s_s((l_1718[6] || (&l_1502[0][1][1] == l_1719)), 253UL))))), 0L))))) == p_31)))))).xyyy, ((VECTOR(int32_t, 4))((-1L)))))).zwywxwxz, ((VECTOR(int32_t, 8))(0L))))).s1 == p_30))))) , &l_1528);
            for (l_1492 = 0; (l_1492 < 20); l_1492 = safe_add_func_int64_t_s_s(l_1492, 7))
            { /* block id: 836 */
                uint8_t l_1724 = 7UL;
                VECTOR(int64_t, 8) l_1737 = (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x1208DE9D0F5429B9L), 0x1208DE9D0F5429B9L), 0x1208DE9D0F5429B9L, 3L, 0x1208DE9D0F5429B9L);
                int32_t l_1741[2][6][3] = {{{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)}},{{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)},{1L,0x2CD13E09L,(-8L)}}};
                uint16_t **l_1766[6][1] = {{&l_1447[2][2][0]},{&l_1447[2][2][0]},{&l_1447[2][2][0]},{&l_1447[2][2][0]},{&l_1447[2][2][0]},{&l_1447[2][2][0]}};
                int32_t l_1783 = 0x6108780CL;
                uint32_t l_1790 = 0x8896C288L;
                int8_t l_1800 = 0L;
                int32_t l_1809 = 0x274635B4L;
                VECTOR(uint32_t, 4) l_1826 = (VECTOR(uint32_t, 4))(0x3984A6D2L, (VECTOR(uint32_t, 2))(0x3984A6D2L, 0x4207CBFEL), 0x4207CBFEL);
                VECTOR(int32_t, 2) l_1828 = (VECTOR(int32_t, 2))(0x443783D2L, 0x3A381D69L);
                int i, j, k;
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 892 */
        uint16_t ***l_1875 = &p_2417->g_1842;
        int32_t l_1891 = (-1L);
        uint8_t l_1918 = 0xF7L;
        VECTOR(int32_t, 16) l_1924 = (VECTOR(int32_t, 16))(0x202A9B44L, (VECTOR(int32_t, 4))(0x202A9B44L, (VECTOR(int32_t, 2))(0x202A9B44L, (-1L)), (-1L)), (-1L), 0x202A9B44L, (-1L), (VECTOR(int32_t, 2))(0x202A9B44L, (-1L)), (VECTOR(int32_t, 2))(0x202A9B44L, (-1L)), 0x202A9B44L, (-1L), 0x202A9B44L, (-1L));
        uint64_t *l_1961 = &p_2417->g_774;
        int i;
        for (p_2417->g_308 = 0; (p_2417->g_308 < 7); p_2417->g_308++)
        { /* block id: 895 */
            int64_t *l_1893[8];
            int32_t l_1894 = (-2L);
            int32_t l_1928 = (-1L);
            int32_t l_1929 = 0x225A1EA1L;
            int32_t l_1930 = 6L;
            int32_t l_1931 = 3L;
            int32_t *l_1936 = &p_2417->g_43;
            int32_t l_1945[1][9][9] = {{{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L},{(-1L),1L,(-3L),(-3L),1L,(-1L),(-9L),0x72D6737CL,0x6A718573L}}};
            int32_t l_1948 = 1L;
            uint16_t l_1949 = 0xA2C7L;
            uint8_t l_1969 = 0x16L;
            uint32_t *l_1970 = &p_2417->g_1337[2][1][1];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_1893[i] = (void*)0;
            if ((((safe_rshift_func_uint16_t_u_s(((((void*)0 == l_1875) | 0x2DE6L) ^ (safe_sub_func_int32_t_s_s(p_30, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_2417->g_1878.s9c3c7d9acc98cb2c)))).sa))), ((safe_add_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((~(safe_mod_func_int64_t_s_s((l_1894 |= (!(((safe_mod_func_int32_t_s_s(p_31, (GROUP_DIVERGE(1, 1) , p_31))) , (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((*p_2417->g_1442) == (*l_1875)), l_1891)), p_31))) , l_1892))), FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10)))), 9L)), 0x1A73L)) == p_30))) && p_31) , (*p_2417->g_6)))
            { /* block id: 897 */
                VECTOR(uint32_t, 4) l_1902 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967286UL), 4294967286UL);
                uint32_t *l_1911 = &p_2417->g_979;
                int32_t l_1919 = 0x1F83A3BBL;
                int32_t l_1927[3][2][3] = {{{0x23E52F82L,1L,1L},{0x23E52F82L,1L,1L}},{{0x23E52F82L,1L,1L},{0x23E52F82L,1L,1L}},{{0x23E52F82L,1L,1L},{0x23E52F82L,1L,1L}}};
                int16_t l_1932 = (-1L);
                uint16_t l_1940 = 0x8067L;
                int64_t l_1944 = (-1L);
                int i, j, k;
                l_1894 &= 1L;
                for (p_31 = (-21); (p_31 >= (-27)); p_31 = safe_sub_func_int8_t_s_s(p_31, 3))
                { /* block id: 901 */
                    uint64_t l_1901 = 9UL;
                    VECTOR(int32_t, 2) l_1906 = (VECTOR(int32_t, 2))(2L, 6L);
                    int64_t l_1939 = 0x6E634B2721D8526CL;
                    int32_t l_1946 = 0x3E45B234L;
                    int i;
                    l_1919 = (safe_lshift_func_int16_t_s_s(((*p_2417->g_1323) = (safe_lshift_func_uint8_t_u_s((l_1901 , l_1902.y), 3))), ((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_2417->g_1903.s6362)).zxyzywwxxwxxzzyw)).s2 ^ ((((safe_sub_func_uint64_t_u_u((++(*l_1283)), (safe_rshift_func_int16_t_s_s(((void*)0 != l_1911), ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(0x7A30L, 1L)).yxxxyxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_2417->g_1912.xxyyyxxxxxxxxyyy)).sd5)).yyxy)).yyywwyxx))).s0)))) , ((safe_sub_func_uint64_t_u_u(1UL, (((VECTOR(int32_t, 8))(p_2417->g_1915.sfb6ab9c1)).s2 , (FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10) && 18446744073709551615UL)))) , (safe_mul_func_int16_t_s_s((0xC5L && ((((p_30 , p_31) >= p_30) ^ l_1894) == 0x2036L)), (***p_2417->g_1442))))) , l_1891) && p_2417->g_434[1])) && p_30) >= l_1918) , 0x5D29L)));
                    for (p_2417->g_43 = 0; (p_2417->g_43 < 20); p_2417->g_43 = safe_add_func_uint64_t_u_u(p_2417->g_43, 1))
                    { /* block id: 907 */
                        int8_t l_1923 = 0x49L;
                        int32_t l_1925 = (-3L);
                        VECTOR(int32_t, 2) l_1926 = (VECTOR(int32_t, 2))(0x55B7D1A5L, (-6L));
                        int i;
                        p_2417->g_1933--;
                        l_1924.s6 = 0x2F31F1FEL;
                        (*p_2417->g_1324) = func_44(func_44(l_1936, (safe_rshift_func_uint8_t_u_s((((((((l_1906.y ^= 0x128F9B6ADA375B8AL) , l_1939) >= (l_1940 < ((VECTOR(uint32_t, 2))(p_2417->g_1941.s15)).lo)) <= (-9L)) < (p_31 < ((void*)0 != l_1893[4]))) <= p_2417->g_19.se) == l_1902.x), 3)), p_30, l_1891, p_31, p_2417), l_1901, l_1902.w, p_31, l_1901, p_2417);
                        --l_1949;
                    }
                }
            }
            else
            { /* block id: 915 */
                uint8_t *l_1958 = &p_2417->g_517;
                uint32_t *l_1964[7][1][10] = {{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_2417->g_979,(void*)0,(void*)0,&p_2417->g_979,&p_2417->g_979,&p_2417->g_979,(void*)0}}};
                uint64_t *l_1965 = &p_2417->g_774;
                int32_t l_1966 = 0x0395139BL;
                uint32_t ***l_1968 = &l_1466;
                uint32_t ****l_1967 = &l_1968;
                int i, j, k;
                l_1966 = (((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_1924.se, l_1918)), ((l_1969 = ((1L & ((*l_1958) ^= (0x2088E90CL && (safe_lshift_func_uint16_t_u_u(l_1894, 15))))) , (((*l_1967) = (((safe_add_func_uint8_t_u_u((l_1961 != ((l_1945[0][8][2] = ((l_1894 | ((l_1945[0][8][2] >= 0x6D231C7DL) > l_1928)) , l_1918)) , l_1965)), p_2417->g_1286.s7)) && l_1966) , &p_2417->g_1559)) != (void*)0))) ^ 0x49L))) == (*p_2417->g_509)) != (-1L));
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_2417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[(safe_mod_func_uint32_t_u_u(((*l_1970) = p_30), 10))][(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]));
        }
    }
    if ((0x67556C6A85F900EBL <= ((p_30 <= (p_30 > (((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_2417->g_1971.s0141)), ((VECTOR(uint16_t, 4))(l_1972.s5232)))).odd, ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0xC71FL, (((((safe_lshift_func_uint8_t_u_s(p_30, 7)) == (((VECTOR(uint16_t, 8))(65526UL, ((VECTOR(uint16_t, 8))((((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_1975.yyyy)).zwzxxyzzyzyxwzwy, (int32_t)0x5136BAE7L, (int32_t)((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1976.yxwywwwx)).s60)).xxyy, ((VECTOR(int32_t, 8))(l_1977.wwyzxwyy)).odd))).w))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(p_2417->g_1978.xyyx)), ((VECTOR(int32_t, 2))(l_1979.ww)).yyyy))).yzyxwxyzxxwxzywx, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_1980.yy)).yyyx, ((VECTOR(int32_t, 2))(l_1981.yx)).xyxx))).xyzzwyyyxzyzwywx))).s1b)).xxxyyxxx)).s1701322362472411)).s6a)).yyyyxyxy, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_1982.s4453)).hi, ((VECTOR(int32_t, 16))(l_1983.yyxyyxxyyxxyxxyx)).s60))).yxxyxyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1984.s6dc5a1780e172758)).sbb)).xyyyyxxy))).s5 & (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((p_31 > ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x763186A5L, 0xA2735F94L)).hi, p_31)) | 0L)) > 0x10L), p_30)) < p_30), 0x08L))), ((VECTOR(uint16_t, 2))(8UL)), 0x5F42L, 0xCB10L, ((VECTOR(uint16_t, 2))(0x234BL)), 6UL)).s4, p_31, ((VECTOR(uint16_t, 4))(7UL)), 0x11C0L)).s7 == p_31)) != 0x3AL) >= FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10)) , 6UL), ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 8))(0xCB47L)), 0xEABBL, l_1991, 1UL, 1UL)).even)), 65534UL, 65529UL, p_31, 0x9190L, 0x2FF4L, ((VECTOR(uint16_t, 2))(1UL)), 1UL)).s6d45)).wxxzzzwwzzzwxzxw, ((VECTOR(uint16_t, 16))(65535UL))))).lo, ((VECTOR(uint16_t, 8))(0xBCB5L))))).odd))).z ^ p_30))) <= l_1992)))
    { /* block id: 928 */
        VECTOR(uint8_t, 4) l_1993 = (VECTOR(uint8_t, 4))(0xBBL, (VECTOR(uint8_t, 2))(0xBBL, 3UL), 3UL);
        int32_t *l_1994 = &p_2417->g_308;
        int i;
        (*p_2417->g_355) = (*p_2417->g_1165);
        l_1993.y = 0x5B88194CL;
        (*p_2417->g_1324) = l_1994;
    }
    else
    { /* block id: 932 */
        uint16_t l_2021 = 0x31DBL;
        int32_t l_2023 = 0x765AAB42L;
        VECTOR(int32_t, 4) l_2031 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0L), 0L);
        VECTOR(int32_t, 2) l_2032 = (VECTOR(int32_t, 2))(9L, (-8L));
        VECTOR(int32_t, 2) l_2033 = (VECTOR(int32_t, 2))(1L, 7L);
        int16_t *l_2036[6] = {&p_2417->g_25[3][1][2],&p_2417->g_25[3][1][2],&p_2417->g_25[3][1][2],&p_2417->g_25[3][1][2],&p_2417->g_25[3][1][2],&p_2417->g_25[3][1][2]};
        VECTOR(uint8_t, 16) l_2063 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xADL), 0xADL), 0xADL, 255UL, 0xADL, (VECTOR(uint8_t, 2))(255UL, 0xADL), (VECTOR(uint8_t, 2))(255UL, 0xADL), 255UL, 0xADL, 255UL, 0xADL);
        int32_t ***l_2094 = &p_2417->g_1324;
        int32_t ****l_2093[6] = {&l_2094,&l_2094,&l_2094,&l_2094,&l_2094,&l_2094};
        VECTOR(uint64_t, 4) l_2124 = (VECTOR(uint64_t, 4))(0x9E78294A298CA530L, (VECTOR(uint64_t, 2))(0x9E78294A298CA530L, 0UL), 0UL);
        VECTOR(int16_t, 16) l_2127 = (VECTOR(int16_t, 16))(0x0A9FL, (VECTOR(int16_t, 4))(0x0A9FL, (VECTOR(int16_t, 2))(0x0A9FL, (-7L)), (-7L)), (-7L), 0x0A9FL, (-7L), (VECTOR(int16_t, 2))(0x0A9FL, (-7L)), (VECTOR(int16_t, 2))(0x0A9FL, (-7L)), 0x0A9FL, (-7L), 0x0A9FL, (-7L));
        VECTOR(int16_t, 4) l_2128 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 5L), 5L);
        int64_t ***l_2144 = &p_2417->g_543;
        uint64_t l_2215[2][3] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
        int64_t l_2242[6] = {0x2A515B174A47A7D3L,(-1L),0x2A515B174A47A7D3L,0x2A515B174A47A7D3L,(-1L),0x2A515B174A47A7D3L};
        int32_t *l_2265 = (void*)0;
        int32_t l_2269 = 0x4995593DL;
        uint16_t l_2270 = 0UL;
        VECTOR(int16_t, 16) l_2293 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L, (VECTOR(int16_t, 2))((-8L), 1L), (VECTOR(int16_t, 2))((-8L), 1L), (-8L), 1L, (-8L), 1L);
        VECTOR(int32_t, 2) l_2341 = (VECTOR(int32_t, 2))(1L, (-5L));
        uint32_t l_2344 = 1UL;
        VECTOR(int16_t, 4) l_2374 = (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-1L)), (-1L));
        VECTOR(uint32_t, 4) l_2391 = (VECTOR(uint32_t, 4))(0x0861807BL, (VECTOR(uint32_t, 2))(0x0861807BL, 0xDBE8E404L), 0xDBE8E404L);
        int32_t * volatile *l_2394 = &l_66[0];
        int i, j;
        if ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_30, (p_30 , (p_31 || ((safe_div_func_uint8_t_u_u(((((l_2023 &= (((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((((*l_1291) ^= ((!(p_30 > ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x6DL, 0x66L, 5UL, 0xB6L, 0x1EL, ((VECTOR(uint8_t, 2))(0xC2L, 3UL)), 0xEEL)).even)).y)) , ((l_1283 == &p_2417->g_774) >= (((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((**p_2417->g_1443)--), ((safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(4L, 0x3FFBL)), 9L, (-6L))).w >= ((p_2417->g_773.y = ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_2021, p_30)), p_2417->g_1781.s3)), (-3L), (-9L), 0L)))).z, l_2021)) || l_2021)) & 0x7603L)), 5)) || l_2021))), p_31)) <= p_2417->g_2022) < p_30) ^ 1UL) || (-1L))))) <= p_30), p_30)) >= 0x66BF5FC1L), l_2021)) < l_2021) <= FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10))) != p_30) , p_31) | 0UL), (-10L))) >= p_30))))), p_31)), 18446744073709551615UL)))
        { /* block id: 937 */
            int8_t l_2045 = 8L;
            int32_t l_2049 = (-1L);
            uint8_t *l_2050 = (void*)0;
            uint8_t *l_2051 = (void*)0;
            int32_t *l_2054 = (void*)0;
            int16_t *l_2056 = &p_2417->g_1586;
            int8_t l_2057 = 0x74L;
            int64_t *l_2058[9][3] = {{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059},{&p_2417->g_2059,&p_2417->g_2059,&p_2417->g_2059}};
            int64_t **l_2060 = &p_2417->g_544[2];
            VECTOR(uint8_t, 16) l_2073 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x72L), 0x72L), 0x72L, 2UL, 0x72L, (VECTOR(uint8_t, 2))(2UL, 0x72L), (VECTOR(uint8_t, 2))(2UL, 0x72L), 2UL, 0x72L, 2UL, 0x72L);
            VECTOR(uint16_t, 4) l_2103 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x4BB5L), 0x4BB5L);
            int32_t **l_2107 = &p_2417->g_1325;
            int i, j;
            if (((*p_2417->g_307) &= ((((l_2049 = (safe_rshift_func_int8_t_s_u(((p_2417->g_510.s1 ^ ((safe_unary_minus_func_int32_t_s(l_2021)) != (l_2032.x = ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(l_2031.xw)), (-1L))), 0x50130974L, 0x73EA0DD7L, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_2032.xyyxyxyy)).s1571721233720234, ((VECTOR(int32_t, 2))(1L, 0x3A4AD7B7L)).xxyxxxyxyxyxxxxx, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_2033.xx)).xyyxxxxy, ((VECTOR(int32_t, 8))(0x011FCAD8L, 0x72BBC0A4L, (safe_mul_func_int16_t_s_s((l_2036[3] == (((safe_mul_func_int16_t_s_s((!(safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((l_2045 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(0x6D721803L, (-10L))).yxxyyyxxyxyxxyyx))).sf), (l_2055 = (l_2031.z || ((safe_mul_func_uint8_t_u_u((p_2417->g_438 = ((0x729DD3CDC27C5395L == ((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_2048.s03)), 18446744073709551615UL, 18446744073709551608UL)).wzzwzwzx))).s5) | l_2049)), 6L)) < ((*l_1283) = ((safe_mod_func_int32_t_s_s(((((p_31 && p_31) , l_2054) == l_2054) & 0x159D5578F634048FL), 1UL)) ^ l_2049))))))) , 0x7AL), l_2032.x)), p_31))), 0x7EB3L)) | l_2049) , l_2056)), 0UL)), 0x720ECE37L, (-1L), ((VECTOR(int32_t, 2))(0x66AFD448L)), 1L))))).s12)).yxxyyxyx, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0L))))), 0x00B5F51FL, 0x29EE9986L, ((VECTOR(int32_t, 4))(9L)), 2L, 0L)), ((VECTOR(int32_t, 16))(0x6147626EL))))).s62)), ((VECTOR(int32_t, 2))(0x1D0BA8BCL)), ((VECTOR(int32_t, 2))((-9L)))))), (-3L), 0x6E089E60L)).wzxwzwyz, ((VECTOR(int32_t, 8))(0x23176B99L))))).s6457555174554431))).s1, l_2057, (-1L), 0x66126322L, 0x19FC9820L, (-7L), (-2L), (-7L), 0L)).se, 0xF4D77713L)) & 4UL)))) & p_31), 5))) , l_2060) != l_2060) & l_2057)))
            { /* block id: 945 */
                VECTOR(uint8_t, 2) l_2064 = (VECTOR(uint8_t, 2))(0x12L, 0x19L);
                VECTOR(uint8_t, 2) l_2065 = (VECTOR(uint8_t, 2))(1UL, 0UL);
                uint8_t *l_2086 = (void*)0;
                uint8_t *l_2087 = &l_1468[1][1];
                int32_t l_2092 = 0L;
                int i;
                l_2049 = (((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0xD2L, 0x98L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x28L, 255UL)).yxyy)).even)), 255UL, 6UL, 0UL, 252UL)))).s01))).xyyy)).odd)).xyyyyyxx)).s46, ((VECTOR(uint8_t, 2))(l_2063.sce))))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_2064.xyxy)).hi)), ((VECTOR(uint8_t, 4))(l_2065.xxyy)).even))).even ^ ((safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((*p_2417->g_1323) &= (safe_mod_func_int32_t_s_s((((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(p_2417->g_2072.xxxxxyyyyxyxxxyx)).sf3, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_2073.s1b)), 5UL, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(0UL, 0UL)).xxxy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_2417->g_2074.yxyyxyxx)))).hi, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(0xD1L, 253UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xFDL, 0x67L)), 0x50L, 0x19L)))), ((((safe_lshift_func_uint8_t_u_s(l_2032.y, 0)) > p_31) , (safe_lshift_func_int8_t_s_s(p_30, 5))) ^ (safe_lshift_func_uint16_t_u_u(0xB17EL, (p_31 & (safe_lshift_func_uint8_t_u_u(l_2064.y, ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_2417->g_2085.s79353c9319ba3c1e)).s8, ((*l_2087) = 249UL))) < (l_2065.x , (safe_rshift_func_int16_t_s_s((p_31 | 0xE8L), p_31)))))))))), ((VECTOR(uint8_t, 2))(0UL)), 0x66L, ((VECTOR(uint8_t, 2))(246UL)), ((VECTOR(uint8_t, 4))(0x10L)))).odd, ((VECTOR(uint8_t, 8))(0x96L)), ((VECTOR(uint8_t, 8))(0x13L))))).lo))).w, 1UL, p_31, 0x7EL, 0xFEL)).s5127554411715547)).s4959)).lo))), ((VECTOR(uint8_t, 2))(1UL))))).odd > GROUP_DIVERGE(1, 1)), 4UL))), p_30)) , p_31), l_2073.s9)) != 0x33CFL));
                for (l_2057 = 0; (l_2057 <= (-13)); l_2057 = safe_sub_func_uint16_t_u_u(l_2057, 7))
                { /* block id: 951 */
                    l_2092 &= ((*p_2417->g_1323) || ((p_30 , (void*)0) != (void*)0));
                    return (*p_2417->g_1323);
                }
                (**l_2094) = ((l_2093[4] == (void*)0) , (void*)0);
                for (p_2417->g_417 = 0; (p_2417->g_417 < (-1)); p_2417->g_417 = safe_sub_func_int64_t_s_s(p_2417->g_417, 1))
                { /* block id: 958 */
                    int8_t l_2116[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_2116[i] = (-6L);
                    for (p_2417->g_308 = 0; (p_2417->g_308 < 5); p_2417->g_308++)
                    { /* block id: 961 */
                        uint32_t *l_2108[4][1][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int32_t l_2109 = 0x17F859FEL;
                        int8_t **l_2110 = &p_2417->g_1200;
                        int32_t l_2111 = 0x56973F3AL;
                        int64_t l_2115[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_2115[i] = 0L;
                        l_2116[2] = ((safe_div_func_uint64_t_u_u((((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(p_2417->g_2101.s1e)).yyxx, ((VECTOR(uint16_t, 16))(l_2102.s3243176464004532)).s7ef1, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_2103.xxzy)), 65527UL, ((safe_unary_minus_func_int8_t_s(p_2417->g_773.x)) || (l_2057 | ((safe_div_func_int32_t_s_s((((**l_2060) = ((l_2109 = (l_2107 == ((*l_2094) = &l_66[0]))) != (((void*)0 != l_2110) , FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10)))) < l_2111), l_2111)) <= (((l_2115[1] = (safe_lshift_func_int8_t_s_u(((*l_1291) = ((VECTOR(int8_t, 2))(l_2114.yz)).lo), (p_30 != 18446744073709551615UL)))) <= (*p_2417->g_1203)) ^ 0UL)))), 1UL, 8UL)).s62, ((VECTOR(uint16_t, 2))(65526UL))))).yxxx))).z >= (*p_2417->g_1323)), 0x488F44EBD9F34070L)) ^ 0x3C06L);
                        (*p_2417->g_1324) = (**l_2094);
                        if (l_2116[2])
                            continue;
                    }
                }
            }
            else
            { /* block id: 972 */
                l_2049 &= p_30;
            }
            for (l_1992 = 0; (l_1992 != 18); l_1992 = safe_add_func_int8_t_s_s(l_1992, 8))
            { /* block id: 977 */
                if (p_30)
                    break;
            }
        }
        else
        { /* block id: 980 */
            int64_t l_2121[10];
            int32_t ****l_2130 = &p_2417->g_1581;
            int32_t l_2136[10] = {0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L,0x48446DA6L};
            int32_t l_2137 = (-2L);
            uint8_t ***l_2140 = &p_2417->g_2138[3][6];
            int64_t ***l_2143 = &p_2417->g_543;
            int64_t ****l_2142[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_2146 = 0x051FF90CL;
            int16_t *l_2177[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(int32_t, 8) l_2231 = (VECTOR(int32_t, 8))(0x545F9D85L, (VECTOR(int32_t, 4))(0x545F9D85L, (VECTOR(int32_t, 2))(0x545F9D85L, 0L), 0L), 0L, 0x545F9D85L, 0L);
            int i, j;
            for (i = 0; i < 10; i++)
                l_2121[i] = 0x1953D9778E59418DL;
            if (((((*p_2417->g_2139) |= (+((l_2146 = (safe_add_func_int8_t_s_s(p_30, ((l_2144 = ((l_2141 = (l_2121[0] & (((*l_2140) = ((((*l_1467) = (safe_rshift_func_int8_t_s_s(p_31, (((VECTOR(uint64_t, 8))(l_2124.wyzwxxyw)).s2 & (safe_add_func_uint32_t_u_u((((l_2137 ^= ((((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_2127.secce5c0bd17a4269)).lo)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_2128.xwxzyyxx)).s5004530456536610)))).sd856, ((VECTOR(int16_t, 2))(p_2417->g_2129.sb3)).yxxx))).x ^ ((void*)0 == l_2130)) & ((((void*)0 == &p_2417->g_1323) || (l_2136[8] = ((safe_div_func_uint16_t_u_u((((~(l_2121[5] ^ (safe_lshift_func_int16_t_s_u((p_2417->g_850.x , p_31), 12)))) , l_2135) == p_30), p_30)) ^ p_30))) , 0x7C3BL))) && p_31) > 0x16ECL), 0x7AD1A9D9L)))))) , p_31) , p_2417->g_2138[3][4])) != &p_2417->g_2139))) , &p_2417->g_543)) != l_2145[2][2])))) && 0x5AB23A53L))) >= p_30) , 0x38312E70L))
            { /* block id: 989 */
                int32_t l_2151 = 0L;
                VECTOR(uint32_t, 8) l_2156 = (VECTOR(uint32_t, 8))(0x655FE0D9L, (VECTOR(uint32_t, 4))(0x655FE0D9L, (VECTOR(uint32_t, 2))(0x655FE0D9L, 5UL), 5UL), 5UL, 0x655FE0D9L, 5UL);
                VECTOR(int64_t, 4) l_2157 = (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x3774F531D2CEAF38L), 0x3774F531D2CEAF38L);
                VECTOR(int64_t, 8) l_2159 = (VECTOR(int64_t, 8))(0x1DB01452B6C2D84DL, (VECTOR(int64_t, 4))(0x1DB01452B6C2D84DL, (VECTOR(int64_t, 2))(0x1DB01452B6C2D84DL, (-3L)), (-3L)), (-3L), 0x1DB01452B6C2D84DL, (-3L));
                int64_t l_2166 = 1L;
                int i;
                (*p_2417->g_1203) &= (GROUP_DIVERGE(0, 1) && (safe_lshift_func_uint8_t_u_s(p_31, (safe_rshift_func_uint8_t_u_u(p_31, l_2151)))));
                l_2137 &= ((p_30 || ((((VECTOR(int8_t, 2))(l_2152.s53)).even >= ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(255UL, (1UL & ((l_2146 = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((-2L), 0L, ((VECTOR(int64_t, 8))(p_2417->g_2153.s74607014)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(0x71ED9EC142693666L, (0xE05EFEB5L < (safe_unary_minus_func_int32_t_s((p_30 <= ((*p_2417->g_2139) = 248UL))))), 5L, 0x17DB6ACC9D5DE039L)).hi, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(p_2417->g_2155.s31)), ((VECTOR(uint32_t, 4))(l_2156.s1766)).odd))).yxyxyyyy))).s47, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))((-1L), 0L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_2157.wyzw)))), 4L, 0x32E8B6983B3E5581L)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_2417->g_2158.s3d29)).yzyyxxwxxyzzxwww)).sd13c))).zzyxwzwwwxwzzxwz)).sba, ((VECTOR(int64_t, 4))(l_2159.s3455)).even))).yyyx, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))((~(l_2136[8] = p_30)), 0x54A9BE675FF78273L, 7L, 0x64B1F66D34266E9CL)).lo, ((VECTOR(int64_t, 4))(l_2160.s40da)).lo))).yyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(0x4E95A7787A2A3D74L, 0x56D13F3E58D9DE84L, (l_2151 = (((((p_31 && p_30) & ((((VECTOR(uint16_t, 16))((safe_mul_func_int8_t_s_s((((--(*p_2417->g_2139)) > (0UL & p_31)) || 0x6344073718EFAD4FL), p_31)), (**p_2417->g_1443), l_2165, GROUP_DIVERGE(0, 1), ((VECTOR(uint16_t, 2))(0x5AE0L)), 0x80E1L, ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 4))(0x4A8BL)), 0x348DL)).s6 <= p_30) || (-1L))) > p_31) != l_2157.x) != (*p_2417->g_1323))), ((VECTOR(int64_t, 8))((-1L))), 0x04F6EDACE70F92A1L, p_31, 0x427E12455AE54645L, 0x0DAD3A88D16A9023L, 0x6177477AFA9F35B0L)).s3c4c, ((VECTOR(int64_t, 4))(0x587C272A32509B9BL))))).yyzxwyyy)).odd, ((VECTOR(int64_t, 4))(0x0B50F4D54FE66289L)))))))).zwyzzwyw)).s31)).xxyx)), l_2136[8], 3L, 1L, 0x52AC35500F1105E9L)).odd)).hi))), 1L)).wwzxzwwy, ((VECTOR(int64_t, 8))(1L))))).hi, (int64_t)l_2166))).even)), l_2151, (-1L), 0x3383FC3BAB70BA5DL, 6L)).odd)).s5 | p_30)) , 0x2BL)), 0xF5L, 0xF0L)).xzwwwxzx, ((VECTOR(uint8_t, 8))(251UL))))).s65)).lo) != p_30)) , p_31);
            }
            else
            { /* block id: 997 */
                uint32_t l_2167 = 4294967290UL;
                ++l_2167;
            }
            if ((safe_mod_func_int32_t_s_s(p_31, ((safe_sub_func_int8_t_s_s(p_31, l_2137)) , (((void*)0 == (*l_1466)) ^ (safe_rshift_func_int8_t_s_s(p_31, 0)))))))
            { /* block id: 1000 */
                int16_t **l_2176[5][6][8] = {{{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]}},{{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]}},{{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]}},{{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]}},{{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]},{&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3],&l_2036[3]}}};
                uint32_t *l_2197 = (void*)0;
                uint32_t *l_2198 = (void*)0;
                int32_t l_2199 = 1L;
                int64_t *l_2208 = &p_2417->g_2059;
                int32_t l_2214 = (-1L);
                int32_t l_2219 = 0x47B8392AL;
                VECTOR(int32_t, 2) l_2232 = (VECTOR(int32_t, 2))(1L, 0L);
                VECTOR(uint64_t, 4) l_2250 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x744107E25866D341L), 0x744107E25866D341L);
                int i, j, k;
                (*p_2417->g_1324) = func_50((p_31 , (l_2177[4][2] = &p_2417->g_25[2][5][1])), p_31, &l_66[0], p_2417);
                l_2136[8] ^= (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((***l_2094))), 1));
                if ((l_2136[8] & (((VECTOR(int8_t, 2))(0x22L, 0x26L)).odd < (((safe_rshift_func_uint16_t_u_u((l_2137 ^= ((**p_2417->g_1443)--)), ((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(((p_2417->g_773.y , ((*l_1291) = (safe_mul_func_int16_t_s_s(((*p_2417->g_1323) = (safe_mod_func_uint32_t_u_u((l_2199 = (l_2146 = p_31)), (((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10), (safe_rshift_func_uint8_t_u_u(((l_2214 = (safe_add_func_uint8_t_u_u((p_31 && (l_2121[0] && (safe_div_func_uint16_t_u_u((0x3337B369E414E500L > (((*l_2208) &= p_31) , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_31, (((*l_1704) = (((p_31 || l_2213) , p_31) , (void*)0)) == (void*)0))), 0x132EL)) == 1UL))), (***l_2094))))), p_30))) , 0x85L), 3)))) > p_30) , GROUP_DIVERGE(2, 1))))), 0x3011L)))) <= (*p_2417->g_2139)), p_30)) , (*p_2417->g_1323)), l_2215[0][1])), 10)) > p_30))) & p_30) <= 0x402BL))))
                { /* block id: 1013 */
                    int8_t l_2220 = 0L;
                    for (l_2146 = (-29); (l_2146 >= (-4)); l_2146 = safe_add_func_int32_t_s_s(l_2146, 8))
                    { /* block id: 1016 */
                        uint64_t l_2221 = 0x11D0BA9D59D63DDCL;
                        l_2221--;
                    }
                    for (l_2055 = 0; (l_2055 > (-17)); --l_2055)
                    { /* block id: 1021 */
                        return l_2220;
                    }
                }
                else
                { /* block id: 1024 */
                    int32_t *l_2226 = &p_2417->g_43;
                    uint32_t l_2235 = 0x86AF8F43L;
                    uint32_t *l_2236 = (void*)0;
                    uint32_t *l_2237[8][10][3] = {{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}},{{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0},{(void*)0,&p_2417->g_1337[1][0][8],(void*)0}}};
                    int32_t l_2249 = 0x5FE2000CL;
                    uint8_t l_2257 = 9UL;
                    int i, j, k;
                    (*p_2417->g_1324) = func_44(l_2226, p_30, p_30, (p_31 <= ((***l_2094) ^ (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10), l_2214)) , (l_2199 , (((VECTOR(int32_t, 8))(0x7AE8010AL, 0x394EBC71L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_2231.s7033053503777765)).even, ((VECTOR(int32_t, 2))(1L, (-3L))).yyxxxyxy))))).odd, ((VECTOR(int32_t, 2))(l_2232.yx)).yyxy))).zwyzwzww, (int32_t)(safe_unary_minus_func_uint32_t_u(((l_2214 = ((safe_unary_minus_func_int16_t_s(((+((VECTOR(uint8_t, 4))(((p_2417->g_404[1] , (l_2235 | p_30)) && FAKE_DIVERGE(p_2417->group_1_offset, get_group_id(1), 10)), p_31, 1UL, 0UL)).z) || p_31))) ^ 0xFC2AL)) < l_2235)))))).lo)).wywzyzzw, ((VECTOR(int32_t, 8))(0x2F36D312L))))).s62)), 1L, ((VECTOR(int32_t, 2))(0L)), 0x4EF4AA89L)).s3 , GROUP_DIVERGE(0, 1)))), p_2417->g_1789.y)))), l_2231.s3, p_2417);
                    l_2264 &= (safe_rshift_func_uint8_t_u_u(((((***p_2417->g_1442) = ((safe_mul_func_int16_t_s_s((~l_2242[4]), ((safe_div_func_int16_t_s_s(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 1UL)), ((safe_div_func_uint16_t_u_u(((FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10) | (l_2235 , (((l_2249 &= (safe_add_func_uint8_t_u_u(((void*)0 == &p_2417->g_543), p_30))) & l_2232.y) || (((VECTOR(uint64_t, 8))(l_2250.wwxywxxw)).s4 , (safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(l_2136[8], (l_2257 , (safe_sub_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((+((((VECTOR(uint16_t, 8))(p_2417->g_2262.s00223205)).s1 < (p_30 == p_31)) ^ 0x09L)), 65528UL)) , 0x34L) , 0x1FE13AA8L), 0x6693358BL))))) <= 0UL), l_2231.s1)), l_2136[8])))))) || l_2263), FAKE_DIVERGE(p_2417->group_1_offset, get_group_id(1), 10))) <= FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10)), 0x12295D8BL, 0xB5CFB515L, 0x4266B1C5L, 7UL, 4294967295UL)).s1 || p_31) < l_2257), l_2235)) != p_30))) | l_2250.w)) , &p_30) == (void*)0), p_31));
                }
            }
            else
            { /* block id: 1031 */
                return p_30;
            }
        }
        if ((*p_2417->g_1203))
        { /* block id: 1035 */
            (**l_2094) = l_2265;
            return (*p_2417->g_1323);
        }
        else
        { /* block id: 1038 */
            int32_t *l_2266[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int64_t *l_2288 = &l_2242[2];
            uint16_t l_2296 = 1UL;
            VECTOR(uint16_t, 8) l_2305 = (VECTOR(uint16_t, 8))(0xEE35L, (VECTOR(uint16_t, 4))(0xEE35L, (VECTOR(uint16_t, 2))(0xEE35L, 0x3E2CL), 0x3E2CL), 0x3E2CL, 0xEE35L, 0x3E2CL);
            uint8_t l_2306 = 2UL;
            int16_t **l_2316 = &l_2036[3];
            VECTOR(int16_t, 2) l_2373 = (VECTOR(int16_t, 2))(0x0004L, (-1L));
            VECTOR(uint32_t, 2) l_2382 = (VECTOR(uint32_t, 2))(6UL, 0UL);
            uint32_t ****l_2386 = (void*)0;
            uint32_t *****l_2387 = &l_2386;
            uint32_t l_2392 = 0xCA9A6B41L;
            int i, j;
            (**l_2094) = l_2266[0][0];
            for (p_2417->g_334 = 0; (p_2417->g_334 != 18); p_2417->g_334 = safe_add_func_int64_t_s_s(p_2417->g_334, 2))
            { /* block id: 1042 */
                int64_t *l_2287 = &p_2417->g_404[6];
                VECTOR(int16_t, 16) l_2292 = (VECTOR(int16_t, 16))(0x29C3L, (VECTOR(int16_t, 4))(0x29C3L, (VECTOR(int16_t, 2))(0x29C3L, 0x6DC1L), 0x6DC1L), 0x6DC1L, 0x29C3L, 0x6DC1L, (VECTOR(int16_t, 2))(0x29C3L, 0x6DC1L), (VECTOR(int16_t, 2))(0x29C3L, 0x6DC1L), 0x29C3L, 0x6DC1L, 0x29C3L, 0x6DC1L);
                int i;
                (**p_2417->g_725) = func_50(&p_2417->g_25[5][4][2], (l_2269 || ((((*p_2417->g_1323) = (l_2270 , ((safe_rshift_func_int16_t_s_s((((*l_1291) = ((2L | (safe_sub_func_int16_t_s_s(p_30, (safe_rshift_func_int8_t_s_u((((((((safe_rshift_func_int16_t_s_s(0x116BL, ((safe_sub_func_uint64_t_u_u(p_31, (5UL || (safe_rshift_func_uint8_t_u_s(0xC5L, 4))))) < 2UL))) < 0x09D8A50DD85107D4L) | 0L) >= p_31) == p_31) , (void*)0) == (*p_2417->g_542)), 7))))) == GROUP_DIVERGE(1, 1))) != GROUP_DIVERGE(0, 1)), p_31)) ^ p_31))) == 0x4AD2L) , GROUP_DIVERGE(0, 1))), &p_2417->g_1325, p_2417);
                (*p_2417->g_307) = (((safe_mul_func_int16_t_s_s((~(safe_sub_func_uint8_t_u_u(((((((l_2287 == (l_2288 = l_2288)) && (*p_2417->g_1323)) & ((*p_2417->g_2139) = (safe_lshift_func_int16_t_s_u((p_30 , (p_2417->g_2129.s3 = ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_2417->g_2291.s13)).xxyy)).xxxxwwxw)))))).odd, ((VECTOR(int16_t, 8))(1L, (*p_2417->g_1323), p_31, (*p_2417->g_1323), ((VECTOR(int16_t, 2))(l_2292.sa3)), 0x0E4AL, 1L)).hi))), ((VECTOR(int16_t, 16))(l_2293.s24af4244810392fc)).se482))).xwzzwxwyyzyyyzyx))).sf)), p_30)))) != (safe_lshift_func_int8_t_s_u(l_2296, p_31))) , 0x13961912F3A5789FL) >= 0xB2F20AE341ED4DB3L), p_30))), 0x0A87L)) , p_31) || l_2292.se);
                return p_30;
            }
            if ((safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0xC96FL, (((safe_div_func_int64_t_s_s((((*p_2417->g_1323) = (p_30 >= 0xF2073AD1L)) , p_30), 0x70CE3DBD390B8464L)) , ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(1UL, 7UL, 65535UL, 0x4B04L)))).wzyzxywx, ((VECTOR(uint16_t, 16))(l_2305.s6050372741617641)).lo))).even, ((VECTOR(uint16_t, 8))(0x2285L, 0xF780L, (p_30 < (((l_2306 , ((void*)0 == l_2307)) , l_2266[0][0]) == (void*)0)), ((VECTOR(uint16_t, 4))(7UL)), 0x5956L)).even))), ((VECTOR(uint32_t, 4))(4294967289UL))))).w, 0x0801DA72L)) ^ 65535UL)) , p_30))), p_31)))
            { /* block id: 1053 */
                int16_t ***l_2317 = &l_1452;
                int32_t l_2327 = 0x6947DB3AL;
                l_2327 = (FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10) >= (safe_div_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(0x56L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((-8L), (-4L), 0x12L, 0x20L)))), 0x77L, (-7L), (((((((safe_lshift_func_int8_t_s_u((((*l_2317) = l_2316) == &p_2417->g_1323), (5L && (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x6634C2E502B58AE2L, 0x6D3E5EBB4567380BL, 0x589673E56DEADEB0L, 0x0F50EF0BEB066E8FL)).even)), (-10L), ((VECTOR(int64_t, 4))((-7L), (0x2A82ABCEL & ((safe_add_func_uint8_t_u_u(((*p_2417->g_2139) = FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10)), (&l_2215[0][1] != l_1283))) == (((*l_1467) ^= p_31) , ((*p_2417->g_542) != (void*)0)))), 0x1EDF46183D2A7A9EL, 0L)), ((VECTOR(int64_t, 4))(0L)), 0x70533AA7591C82CFL, ((VECTOR(int64_t, 2))(0x04C218DC699C2D7CL)), 0x1554E97300F2EC72L)).s5b, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))(0x1DD1EA8E1C318F51L))))), (int64_t)l_2326, (int64_t)p_30))).lo , FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10)), p_31)) | 65535UL), p_30)), 0x381C143AL))))) , p_30) & p_2417->g_1933) >= p_31) < p_31) < p_31) < (*p_2417->g_1323)), ((VECTOR(int8_t, 2))(0x29L)), 0L, 0L, ((VECTOR(int8_t, 2))((-1L))), 0x5EL, 0x7FL)).sff, ((VECTOR(int8_t, 2))(0x1FL))))).lo, GROUP_DIVERGE(0, 1))), p_30)), (*p_2417->g_1323))));
                return p_30;
            }
            else
            { /* block id: 1059 */
                int8_t l_2359 = (-10L);
                int32_t l_2362 = 0x3166F0DAL;
                for (p_2417->g_428 = 0; (p_2417->g_428 <= 28); p_2417->g_428 = safe_add_func_int8_t_s_s(p_2417->g_428, 7))
                { /* block id: 1062 */
                    int64_t l_2360 = 0x6A73BE74C972743DL;
                    for (l_2135 = (-20); (l_2135 != 21); l_2135 = safe_add_func_int8_t_s_s(l_2135, 4))
                    { /* block id: 1065 */
                        int64_t l_2332[9][1] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
                        int32_t l_2345 = 0x003A9486L;
                        uint32_t *l_2347 = (void*)0;
                        uint32_t *l_2348 = (void*)0;
                        uint32_t *l_2349 = (void*)0;
                        uint32_t *l_2350 = (void*)0;
                        uint32_t *l_2351 = (void*)0;
                        uint32_t *l_2352 = (void*)0;
                        uint32_t *l_2353 = (void*)0;
                        uint32_t *l_2354 = (void*)0;
                        uint32_t *l_2355 = (void*)0;
                        uint32_t *l_2356 = (void*)0;
                        uint32_t *l_2357 = (void*)0;
                        uint32_t *l_2358[7][10][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_2332[8][0] ^= 7L;
                        l_2360 = (0x3EA0786EL != (safe_rshift_func_uint16_t_u_u((((VECTOR(int64_t, 2))(l_2335.xy)).lo , ((***p_2417->g_1442) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(p_2417->g_2338.s7365)).z, 0x6872L)))), (safe_sub_func_uint64_t_u_u(((l_2359 ^= (p_31 == ((l_2346 ^= (0x0B4F1D95L != ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_2341.yy)))).yyyx, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(l_2342.yxxyyyyxxyyxxyyy)).hi, ((VECTOR(int8_t, 2))((-9L), 0x05L)).yyyxyxxy))).s5272221674740104, ((VECTOR(uint8_t, 4))(p_31, 0x93L, 4UL, 0xCEL)).xxyyyzyxxwzyyyzz))).sd5, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), (-8L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((safe_unary_minus_func_uint16_t_u((((*l_1283) = l_2344) || ((*l_2288) |= p_30)))), (l_2345 ^= (*p_2417->g_1323)), p_31, 1L, p_30, 1L, 0L, 0x1157L)).odd)), ((VECTOR(int16_t, 8))((-7L))), (-1L), 0x6ACDL)).s0d))).yyxxyyyxyxyyyxxx, ((VECTOR(uint16_t, 16))(0UL))))).s4074, ((VECTOR(int32_t, 4))(0L))))).z)) | p_2417->g_2153.s7))) > p_30), 18446744073709551615UL)))));
                    }
                }
                l_2362 = (l_2361 > p_30);
            }
            (*p_2417->g_307) = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((&l_1466 != ((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s((((((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(l_2373.xx)).yxxxyyxx, ((VECTOR(int16_t, 16))(0x7222L, ((VECTOR(int16_t, 16))(p_30, 0x704FL, (-2L), 0L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(l_2374.zxxxxxyy)).s5070727376476136))).even)), (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((p_31 < ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_2417->g_2381.s16544646)).s3064343062000275)), ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(l_2382.xyxx)).wwwwxwwz, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_2417->g_2383.xyzwxyyz)).lo)).xxwxyxxw))).s0714155466156056))).s8), (safe_sub_func_int32_t_s_s((((*l_2387) = l_2386) == (((((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 2))((-8L), (-1L))).even, p_2417->g_945.y)) & ((*p_2417->g_1323) | p_31)) , (p_31 < ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(p_2417->g_2390.wy)).xxxxyyxy, ((VECTOR(uint32_t, 16))(l_2391.wwywzxywxxwwwxxz)).hi))).lo)).w)) | p_31) , (void*)0)), p_30)))), p_30)), 4L)), 0L, 5L, 0x4D16L)).s7, (-7L), 0x3C20L, 0x71F1L, p_31, 0x7520L, 0x7791L, (*p_2417->g_1323), (*p_2417->g_1323), l_2392, 1L, ((VECTOR(int16_t, 4))(0x2DF9L)))).even))).s6323035760360727))).s2, p_31)) > 0x7B75L) , p_30) || p_30) ^ l_2393), 5)) <= 0x47L) , p_31) ^ p_31), (*p_2417->g_1323))) , (void*)0)), p_31)), p_31));
        }
        (*l_2394) = (**p_2417->g_725);
    }
    (*p_2417->g_2409) = (!(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))((-1L), 0x2A5A1AE985ACAB8CL)))), 0x1882621DA74AA88DL, 0x4476708DDE1CD1E8L)))), ((VECTOR(int64_t, 8))(l_2395.xyxyyyyy)), ((VECTOR(int64_t, 2))(0x5928E95DDFBE1ED3L, (-6L))), (-1L), 0L)).s9 || (((*p_2417->g_2139) = (18446744073709551612UL & (safe_mod_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((***p_2417->g_1442), ((p_31 , &l_1725) != (p_2417->g_2405 = &l_1725)))) >= ((l_66[0] = (p_30 , (void*)0)) != ((*l_2408) = l_2407))), 0x54L)) <= p_31) <= (-1L)), 0x1AB05583L)))) & 0x52L)));
    return (*p_2417->g_1323);
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_517 p_2417->g_813 p_2417->g_1419 p_2417->g_1337 p_2417->g_1323 p_2417->g_25 p_2417->g_1014 p_2417->g_1442 p_2417->g_1324 p_2417->g_1325
 * writes: p_2417->g_1013 p_2417->g_1337 p_2417->g_434 p_2417->g_334 p_2417->g_1325
 */
int32_t * func_44(int32_t * p_45, int32_t  p_46, uint64_t  p_47, int32_t  p_48, int32_t  p_49, struct S0 * p_2417)
{ /* block id: 716 */
    int32_t *l_1412 = (void*)0;
    int32_t *l_1413[6];
    uint32_t l_1414 = 1UL;
    VECTOR(int8_t, 2) l_1417 = (VECTOR(int8_t, 2))((-6L), 0x6AL);
    int16_t l_1418 = 0L;
    VECTOR(int8_t, 16) l_1420 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x46L), 0x46L), 0x46L, 7L, 0x46L, (VECTOR(int8_t, 2))(7L, 0x46L), (VECTOR(int8_t, 2))(7L, 0x46L), 7L, 0x46L, 7L, 0x46L);
    int8_t *l_1421 = (void*)0;
    uint8_t l_1426 = 0xCCL;
    uint32_t *l_1429 = &p_2417->g_1337[3][1][2];
    VECTOR(uint16_t, 8) l_1434 = (VECTOR(uint16_t, 8))(0x060FL, (VECTOR(uint16_t, 4))(0x060FL, (VECTOR(uint16_t, 2))(0x060FL, 0xF733L), 0xF733L), 0xF733L, 0x060FL, 0xF733L);
    uint32_t *l_1435 = &p_2417->g_428;
    uint8_t *l_1436 = (void*)0;
    uint8_t *l_1437 = &p_2417->g_434[0];
    uint16_t l_1440 = 65533UL;
    int8_t *l_1441 = &p_2417->g_334;
    int i;
    for (i = 0; i < 6; i++)
        l_1413[i] = &p_2417->g_308;
    l_1414--;
    (*p_2417->g_1324) = ((((((((((((((((p_2417->g_1013.s5 = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_1417.yx)), ((p_2417->g_517 & l_1418) && p_2417->g_813.sc), ((VECTOR(int8_t, 2))(p_2417->g_1419.s7f)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_1420.sdd303e556b67204f)).s0c)), (-5L))).odd)).x) > 0x1CL) , (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(l_1426, (safe_mul_func_uint16_t_u_u(((--(*l_1429)) , (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 8))(0x03A9L, 65535UL, 0xE12AL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(l_1434.s73)).yxxxyxxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0UL, ((((*l_1437) = (l_1435 == (void*)0)) & (safe_lshift_func_uint8_t_u_s(p_48, ((*l_1441) = l_1440)))) || p_49), ((VECTOR(uint16_t, 4))(5UL)), 0UL, ((VECTOR(uint16_t, 4))(0x2E95L)), 4UL, 0x9467L, ((VECTOR(uint16_t, 2))(0xEA0FL)), 0x0591L)).odd)), ((VECTOR(uint16_t, 8))(0x626AL))))).odd)).zxywxzyx, ((VECTOR(uint16_t, 8))(0x3CC7L))))).even)), 0xDDC4L)), (uint16_t)65535UL, (uint16_t)GROUP_DIVERGE(0, 1)))), ((VECTOR(uint16_t, 8))(0xA942L))))).s7, p_49))), p_49)))), (*p_2417->g_1323)))) > 0UL) == 251UL) != p_47) , p_2417->g_1014.s7) || p_46) , (void*)0) == p_2417->g_1442) == (*p_2417->g_1323)) <= (*p_2417->g_1323)) , 0x8DAE3C6AAFCCBC54L) == p_46) && FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10)) , (void*)0);
    (*p_2417->g_1324) = (void*)0;
    return (*p_2417->g_1324);
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_308 p_2417->g_1337 p_2417->g_1338 p_2417->g_438 p_2417->g_813 p_2417->g_1390 p_2417->g_1323 p_2417->g_25 p_2417->g_1324 p_2417->g_725 p_2417->g_726 p_2417->g_509 p_2417->g_6 p_2417->g_319 p_2417->g_7 p_2417->g_1165 p_2417->g_356
 * writes: p_2417->g_308 p_2417->g_428 p_2417->g_1235 p_2417->g_1325 p_2417->g_1191 p_2417->g_25 p_2417->g_815 p_2417->g_319 p_2417->g_517
 */
int32_t * func_50(int16_t * p_51, uint64_t  p_52, int32_t ** p_53, struct S0 * p_2417)
{ /* block id: 652 */
    uint32_t l_1339 = 0UL;
    int32_t *l_1405 = &p_2417->g_43;
    VECTOR(int32_t, 2) l_1409 = (VECTOR(int32_t, 2))((-1L), 0x36076BB8L);
    int i;
    for (p_2417->g_308 = 0; (p_2417->g_308 <= (-21)); p_2417->g_308 = safe_sub_func_int16_t_s_s(p_2417->g_308, 3))
    { /* block id: 655 */
        uint16_t l_1333 = 65528UL;
        uint32_t *l_1367 = (void*)0;
        uint32_t **l_1366 = &l_1367;
        int32_t l_1368 = (-1L);
        int32_t *l_1402[8] = {&l_1368,&l_1368,&l_1368,&l_1368,&l_1368,&l_1368,&l_1368,&l_1368};
        uint8_t l_1406 = 0x41L;
        int i;
        for (p_2417->g_428 = 21; (p_2417->g_428 > 19); p_2417->g_428 = safe_sub_func_int32_t_s_s(p_2417->g_428, 1))
        { /* block id: 658 */
            int32_t l_1334 = (-8L);
            VECTOR(int64_t, 2) l_1345 = (VECTOR(int64_t, 2))((-1L), 0x241ABA0CADA7CED8L);
            uint32_t l_1369 = 4294967295UL;
            int i;
            for (p_2417->g_1235 = 0; (p_2417->g_1235 != (-22)); p_2417->g_1235 = safe_sub_func_int16_t_s_s(p_2417->g_1235, 4))
            { /* block id: 661 */
                int32_t l_1332 = 0L;
                (*p_53) = (void*)0;
                if (l_1332)
                    continue;
            }
            if ((l_1339 |= ((l_1333 & l_1334) & (((safe_rshift_func_int16_t_s_s((p_2417->g_1337[3][1][2] && 249UL), 4)) || ((FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10) <= (p_52 != 2UL)) , (~(p_2417->g_1338 <= (l_1334 <= 0x07B0AEC6ED6B4C1FL))))) < 1UL))))
            { /* block id: 666 */
                int8_t l_1344 = 0x5FL;
                uint8_t *l_1358[2];
                uint32_t l_1359 = 1UL;
                uint32_t *l_1365 = &p_2417->g_1191;
                uint32_t **l_1364[6];
                uint16_t *l_1398[2][5] = {{&p_2417->g_391[0][0][0],&l_1333,&p_2417->g_391[0][0][0],&p_2417->g_391[0][0][0],&l_1333},{&p_2417->g_391[0][0][0],&l_1333,&p_2417->g_391[0][0][0],&p_2417->g_391[0][0][0],&l_1333}};
                uint16_t **l_1397 = &l_1398[1][0];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1358[i] = &p_2417->g_537;
                for (i = 0; i < 6; i++)
                    l_1364[i] = &l_1365;
                if ((((((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_1334, (((+(l_1344 ^ p_52)) < ((VECTOR(int64_t, 8))(0x6F40D5BF8DECE640L, ((VECTOR(int64_t, 2))(l_1345.yx)), (safe_sub_func_int8_t_s_s(0x50L, (safe_add_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((--l_1359), ((safe_sub_func_int64_t_s_s((((((((((l_1368 = ((*p_51) ^= (l_1364[4] == l_1366))) | l_1369) != p_52) && p_52) , 0x7426L) && (*p_51)) != p_52) , 18446744073709551615UL) || p_52), p_52)) == p_2417->g_409.s1))), 4)), p_52)), p_2417->g_319)), p_2417->g_757.y)))), ((VECTOR(int64_t, 4))(1L)))).s3) && l_1369))), l_1333)) != l_1339) , &p_51) == &p_51) & p_2417->g_438))
                { /* block id: 670 */
                    int32_t *l_1370 = &p_2417->g_43;
                    return l_1370;
                }
                else
                { /* block id: 672 */
                    uint32_t l_1399 = 1UL;
                    if ((atomic_inc(&p_2417->l_atomic_input[0]) == 9))
                    { /* block id: 674 */
                        int32_t l_1371 = 6L;
                        int16_t l_1372 = 0x58CAL;
                        int16_t l_1373 = 0x1383L;
                        int32_t l_1374 = 0x232E7BD4L;
                        uint8_t l_1375 = 254UL;
                        l_1371 = (-8L);
                        l_1375--;
                        unsigned int result = 0;
                        result += l_1371;
                        result += l_1372;
                        result += l_1373;
                        result += l_1374;
                        result += l_1375;
                        atomic_add(&p_2417->l_special_values[0], result);
                    }
                    else
                    { /* block id: 677 */
                        (1 + 1);
                    }
                    for (p_2417->g_1191 = 29; (p_2417->g_1191 >= 50); ++p_2417->g_1191)
                    { /* block id: 682 */
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_2417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((0x83L | (-8L)) & ((!((safe_mod_func_uint64_t_u_u(1UL, 2UL)) <= (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (-10L))), ((!((safe_sub_func_int32_t_s_s(0x0D42F7AFL, FAKE_DIVERGE(p_2417->global_2_offset, get_global_id(2), 10))) , p_2417->g_813.s4)) , (((((p_2417->g_815.z = (((VECTOR(uint32_t, 8))(p_2417->g_1390.s4e0d6be7)).s0 , (l_1359 , (((*p_51) = (safe_sub_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(GROUP_DIVERGE(0, 1), (l_1397 != (void*)0))) && l_1399), l_1359)) ^ (*p_2417->g_1323)), l_1359))) >= GROUP_DIVERGE(0, 1))))) ^ FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10)) == l_1333) && 4294967292UL) <= l_1399)))))) , 0x7FL)) | l_1339) , (*p_51)), p_52)), 10))][(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]));
                    }
                    return &p_2417->g_43;
                }
            }
            else
            { /* block id: 691 */
                for (p_2417->g_319 = 24; (p_2417->g_319 != (-12)); --p_2417->g_319)
                { /* block id: 694 */
                    l_1402[2] = ((*p_2417->g_1324) = (void*)0);
                }
                for (p_2417->g_517 = 0; (p_2417->g_517 < 60); ++p_2417->g_517)
                { /* block id: 700 */
                    return l_1405;
                }
                (*p_2417->g_1324) = &l_1368;
            }
        }
        l_1406--;
        if (l_1409.x)
        { /* block id: 707 */
            int32_t *l_1410[3][7][5] = {{{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0}},{{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0}},{{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0},{&p_2417->g_7[2],&p_2417->g_7[2],(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            if ((***p_2417->g_725))
                break;
            l_1410[1][3][3] = (*p_2417->g_1165);
            l_1409.y &= ((VECTOR(int32_t, 2))(p_2417->g_1411.wz)).hi;
        }
        else
        { /* block id: 711 */
            return &p_2417->g_43;
        }
    }
    return &p_2417->g_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_1295 p_2417->g_481 p_2417->g_1265 p_2417->g_1313 p_2417->g_7 p_2417->g_777 p_2417->g_1322 p_2417->g_945 p_2417->g_509
 * writes: p_2417->g_356 p_2417->g_434 p_2417->g_1265 p_2417->g_23 p_2417->g_391 p_2417->g_319
 */
int16_t * func_54(int32_t * p_55, int32_t  p_56, struct S0 * p_2417)
{ /* block id: 642 */
    int32_t *l_1293[4];
    uint8_t *l_1300 = (void*)0;
    uint8_t *l_1301 = (void*)0;
    uint8_t *l_1302 = &p_2417->g_434[1];
    uint32_t *l_1311 = &p_2417->g_23;
    VECTOR(int8_t, 2) l_1312 = (VECTOR(int8_t, 2))(0x30L, 0x1AL);
    int32_t *l_1316 = &p_2417->g_43;
    int32_t **l_1315 = &l_1316;
    int32_t ***l_1314 = &l_1315;
    int32_t ***l_1318 = &l_1315;
    int32_t ****l_1317 = &l_1318;
    uint16_t *l_1319 = (void*)0;
    uint16_t *l_1320 = &p_2417->g_391[0][0][0];
    int32_t l_1321 = 0x5A2DB31FL;
    int i;
    for (i = 0; i < 4; i++)
        l_1293[i] = (void*)0;
    (*p_2417->g_1295) = l_1293[0];
    (*p_2417->g_509) = ((((safe_lshift_func_uint16_t_u_s(p_2417->g_481.s1, ((safe_mod_func_uint8_t_u_u(((((*l_1302) = p_56) , (((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(p_56, (safe_mul_func_uint8_t_u_u((((*l_1311) = (--p_2417->g_1265.sd)) , FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10)), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(l_1312.yxyxyyxxxyyxxxyy)).s95, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(p_2417->g_1313.zxwyywxz)).hi))).hi))).hi)))) & ((((void*)0 != &p_2417->g_573[2][3][0]) ^ ((((((p_56 || (((*l_1320) = (l_1314 != ((*l_1317) = &l_1315))) != p_56)) , (void*)0) == &p_2417->g_777[5][0]) >= p_56) ^ l_1321) < p_56)) >= 0xEFCCL)) < FAKE_DIVERGE(p_2417->global_2_offset, get_global_id(2), 10)), p_56)), 6UL, p_56, ((VECTOR(uint32_t, 8))(4UL)), ((VECTOR(uint32_t, 2))(3UL)), ((VECTOR(uint32_t, 2))(4294967292UL)), 1UL)).sf889, ((VECTOR(uint32_t, 4))(0x805FB913L))))).hi, ((VECTOR(uint32_t, 2))(6UL))))).xyyxyxxyxxyyxyxx)))), ((VECTOR(uint32_t, 16))(0x8B882D0CL))))).s6 , p_2417->g_7[2])) != p_56), p_2417->g_777[5][0])) <= p_56))) | 0x24C0L) == p_2417->g_1322.w) <= p_2417->g_945.x);
    return &p_2417->g_25[4][1][6];
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_43 p_2417->g_307 p_2417->g_7 p_2417->g_355 p_2417->g_356 p_2417->g_22 p_2417->g_19 p_2417->g_23 p_2417->g_396 p_2417->g_308 p_2417->g_391 p_2417->g_25 p_2417->g_434 p_2417->g_337 p_2417->g_476 p_2417->g_438 p_2417->g_6 p_2417->g_409 p_2417->g_496 p_2417->g_404 p_2417->g_330 p_2417->g_334 p_2417->g_509 p_2417->g_319 p_2417->g_542 p_2417->g_517 p_2417->g_723 p_2417->g_725 p_2417->g_726 p_2417->g_753 p_2417->g_757 p_2417->g_773 p_2417->g_777 p_2417->g_850 p_2417->g_851 p_2417->g_comm_values p_2417->g_481 p_2417->g_813 p_2417->l_comm_values p_2417->g_510 p_2417->g_979 p_2417->g_774 p_2417->g_428 p_2417->g_1013 p_2417->g_1014 p_2417->g_1015 p_2417->g_945 p_2417->g_872 p_2417->g_815 p_2417->g_1147 p_2417->g_1165 p_2417->g_537 p_2417->g_1203 p_2417->g_1199 p_2417->g_1223 p_2417->g_1265 p_2417->g_543
 * writes: p_2417->g_43 p_2417->g_308 p_2417->g_319 p_2417->g_356 p_2417->g_330 p_2417->g_337 p_2417->g_396 p_2417->g_428 p_2417->g_434 p_2417->g_334 p_2417->g_543 p_2417->g_438 p_2417->g_23 p_2417->g_723 p_2417->g_726 p_2417->g_25 p_2417->g_753 p_2417->g_391 p_2417->g_774 p_2417->g_404 p_2417->g_417 p_2417->g_979 p_2417->g_777 p_2417->g_1223
 */
int32_t  func_63(int64_t  p_64, int32_t * p_65, struct S0 * p_2417)
{ /* block id: 16 */
    int32_t l_69 = 4L;
    int16_t *l_79 = &p_2417->g_25[5][4][2];
    VECTOR(int64_t, 8) l_999 = (VECTOR(int64_t, 8))(0x75129F59611CAF25L, (VECTOR(int64_t, 4))(0x75129F59611CAF25L, (VECTOR(int64_t, 2))(0x75129F59611CAF25L, 1L), 1L), 1L, 0x75129F59611CAF25L, 1L);
    int32_t l_1009 = 0x0E6E9119L;
    uint32_t l_1017[7][7] = {{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL},{0xD6C913FFL,7UL,0UL,0x2E868DFCL,7UL,0x2E868DFCL,0UL}};
    VECTOR(int8_t, 4) l_1042 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x11L), 0x11L);
    int8_t *l_1047 = &p_2417->g_417;
    int32_t l_1052 = 0x07F77A94L;
    int32_t l_1053[6];
    uint32_t l_1092 = 4294967292UL;
    uint16_t l_1109 = 0x0C8DL;
    int32_t l_1111 = 0x3B60B8D8L;
    uint32_t l_1118 = 0UL;
    uint64_t *l_1144 = (void*)0;
    int32_t l_1148 = 0x57AE5893L;
    int16_t l_1164 = 0L;
    uint32_t l_1214 = 8UL;
    int64_t *l_1257 = (void*)0;
    int64_t *l_1258[1];
    VECTOR(uint32_t, 16) l_1261 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xC142C31AL), 0xC142C31AL), 0xC142C31AL, 1UL, 0xC142C31AL, (VECTOR(uint32_t, 2))(1UL, 0xC142C31AL), (VECTOR(uint32_t, 2))(1UL, 0xC142C31AL), 1UL, 0xC142C31AL, 1UL, 0xC142C31AL);
    VECTOR(uint32_t, 4) l_1262 = (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0xAE913A1CL), 0xAE913A1CL);
    VECTOR(uint32_t, 4) l_1263 = (VECTOR(uint32_t, 4))(0xEE282F6BL, (VECTOR(uint32_t, 2))(0xEE282F6BL, 0x0D37BA7DL), 0x0D37BA7DL);
    VECTOR(uint32_t, 4) l_1264 = (VECTOR(uint32_t, 4))(0xF5CC2ED7L, (VECTOR(uint32_t, 2))(0xF5CC2ED7L, 0x71F679CBL), 0x71F679CBL);
    VECTOR(uint32_t, 4) l_1266 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 8) l_1267 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967288UL), 4294967288UL), 4294967288UL, 4294967295UL, 4294967288UL);
    uint16_t *l_1272 = &p_2417->g_391[2][0][1];
    VECTOR(uint32_t, 4) l_1273 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 2UL), 2UL);
    int32_t *l_1274 = &p_2417->g_319;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1053[i] = 1L;
    for (i = 0; i < 1; i++)
        l_1258[i] = &p_2417->g_404[0];
    for (p_2417->g_43 = 13; (p_2417->g_43 != (-25)); p_2417->g_43 = safe_sub_func_int8_t_s_s(p_2417->g_43, 1))
    { /* block id: 19 */
        uint32_t l_75 = 0UL;
        int32_t **l_982 = &p_2417->g_356;
        int32_t l_1008 = 4L;
        int32_t l_1020 = 0L;
        uint16_t *l_1041[10];
        uint16_t **l_1040 = &l_1041[4];
        int32_t l_1054 = 0L;
        int32_t l_1055 = 0x2EDA71ABL;
        int32_t l_1056 = 1L;
        int32_t l_1057 = 0x1633B585L;
        int32_t l_1058 = 0x25B1E11DL;
        int32_t l_1059[5];
        VECTOR(int64_t, 16) l_1081 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
        int i;
        for (i = 0; i < 10; i++)
            l_1041[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_1059[i] = 0x1CCFF728L;
        (*p_2417->g_307) = ((l_69 | ((func_70(l_75, l_69, func_76(&p_2417->g_43, l_79, p_2417), p_65, p_2417) , p_2417->g_774) , 1UL)) >= 0x55870851FA24BD40L);
        (*l_982) = (*p_2417->g_355);
        if ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_64, 5UL)) | (~p_64)), (0x6DC4DEECL || (safe_add_func_int64_t_s_s(p_64, (safe_unary_minus_func_uint16_t_u(0x13E8L))))))))
        { /* block id: 536 */
            uint16_t l_1016 = 0x5415L;
            int32_t *l_1022 = &p_2417->g_43;
            int32_t **l_1021 = &l_1022;
            int32_t l_1048 = 0L;
            int32_t l_1049 = 0x1161C4C6L;
            int32_t *l_1050 = &p_2417->g_308;
            int32_t *l_1051[10] = {&l_1020,&l_69,&l_1008,&l_69,&l_1020,&l_1020,&l_69,&l_1008,&l_69,&l_1020};
            int8_t l_1060 = 1L;
            uint8_t l_1061 = 0xA2L;
            int i;
            for (p_2417->g_428 = 0; (p_2417->g_428 == 23); ++p_2417->g_428)
            { /* block id: 539 */
                (*p_2417->g_509) &= (-6L);
            }
            for (l_75 = 10; (l_75 <= 44); ++l_75)
            { /* block id: 544 */
                uint64_t *l_996 = (void*)0;
                uint64_t *l_1002 = (void*)0;
                uint64_t *l_1003 = (void*)0;
                uint64_t *l_1004 = (void*)0;
                uint64_t *l_1005 = (void*)0;
                uint64_t *l_1006 = (void*)0;
                uint64_t *l_1007[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(int8_t, 8) l_1012 = (VECTOR(int8_t, 8))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, (-4L)), (-4L)), (-4L), 0x02L, (-4L));
                int32_t *l_1019[9][5] = {{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0},{&l_69,(void*)0,(void*)0,&p_2417->g_7[2],(void*)0}};
                uint16_t *l_1038 = (void*)0;
                uint16_t **l_1037 = &l_1038;
                uint16_t ***l_1039 = &l_1037;
                int i, j;
                l_1020 = (safe_rshift_func_int16_t_s_s((((VECTOR(uint64_t, 8))(0UL, (p_2417->g_774++), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_999.s42041250)).s70)).xxxxxxxxyyxxxyyx)).s1c))).xxyx)), 0xF0CB558E912A0CF0L)).s6 != ((safe_add_func_uint64_t_u_u(((FAKE_DIVERGE(p_2417->local_2_offset, get_local_id(2), 10) & ((~p_64) ^ 1UL)) , (l_1008 = p_2417->g_409.s7)), (l_1009 <= (safe_mul_func_uint8_t_u_u((((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1012.s65025662)).s0733562650551132)), ((VECTOR(int8_t, 4))(0x66L, (-2L), 0L, 5L)).zwwzzywzyzwwxzzy, ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(p_2417->g_1013.s56e98cdd00c2e8f1)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_2417->g_1014.s56)).yxxy)).yxyyzxxyxxxzxxyy)))))).even, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(p_2417->g_1015.xw)).xxyx, (int8_t)((p_64 || p_64) <= (((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(l_1016, p_64, p_2417->g_945.x, p_64, 65535UL, l_999.s0, 0x1F3CL, 0UL)).hi, ((VECTOR(uint16_t, 4))(65535UL))))).z , l_1017[6][6]))))).yywwxxwy, ((VECTOR(int8_t, 8))(0x6BL))))).even, ((VECTOR(int8_t, 4))(0x4AL))))).even, ((VECTOR(uint8_t, 2))(0xC8L))))).even > (-8L)), 1UL))))) & 0x7C08L)), 11));
                l_69 |= ((p_2417->g_319 , l_1021) == &l_1022);
                l_69 |= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((p_64 <= p_64), (safe_rshift_func_uint16_t_u_u(l_999.s2, ((safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((((((l_999.s7 && (0x577C1ED1D0064906L >= (((((*l_1039) = l_1037) != l_1040) >= (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1042.yzzxyyyw)), 0x28L, (-3L), ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x06L, 0x21L)), (((p_64 < GROUP_DIVERGE(2, 1)) , (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(6L, 2L)).yxxy)).y, (l_1047 == l_1047))), p_64))) == l_1042.w), (-1L), ((VECTOR(int8_t, 4))(0x60L)), ((VECTOR(int8_t, 8))((-3L))))).sa155, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))((-9L)))))).xwxxwyxw, ((VECTOR(int8_t, 8))(0x1DL))))).s3316227621456133)).se74f, ((VECTOR(int8_t, 4))((-10L)))))), 4L, 0x61L)).s9 >= l_1016)) == p_2417->g_850.w))) , p_64) | p_64) ^ FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10)) && p_2417->g_438), GROUP_DIVERGE(0, 1))) < p_2417->g_851.s3) , 0x0549L), p_64)) <= p_2417->g_23), p_2417->g_1014.s4)) > 0L))))), 0xC1DB7A57L));
            }
            l_1061--;
        }
        else
        { /* block id: 553 */
            int8_t l_1070 = 1L;
            int32_t l_1071 = 0x6B09014DL;
            for (p_2417->g_308 = 0; (p_2417->g_308 <= 8); p_2417->g_308++)
            { /* block id: 556 */
                int32_t *l_1066 = &l_1053[5];
                int32_t *l_1067 = &l_1059[2];
                int32_t *l_1068 = &l_1057;
                int32_t *l_1069[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t l_1072 = 0x51L;
                int i;
                l_1072--;
                (*l_1066) ^= ((VECTOR(int32_t, 2))(0x524C20FAL, 1L)).odd;
                (*l_1067) = ((*l_1066) = (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_1081.sd7)).hi, ((VECTOR(uint64_t, 8))(0UL, 0UL, 0x9D4EFB6E50247602L, ((VECTOR(uint64_t, 4))((safe_add_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((p_64 && (l_1017[5][2] == (l_1052 == p_64))), (0x58D7L != ((safe_lshift_func_uint16_t_u_u((p_2417->g_773.x > p_64), p_2417->g_1014.s7)) & 1UL)))) >= l_1070), l_1017[4][3])), p_64)), 1UL, 18446744073709551615UL, 18446744073709551615UL)), 18446744073709551611UL)).s5)) == l_1042.z), p_64)), 0x47FCFC32L)));
                for (l_1054 = (-5); (l_1054 < (-4)); l_1054 = safe_add_func_uint32_t_u_u(l_1054, 5))
                { /* block id: 563 */
                    --l_1092;
                }
            }
            l_69 = p_64;
            for (l_1055 = 0; (l_1055 <= 0); l_1055 = safe_add_func_uint16_t_u_u(l_1055, 5))
            { /* block id: 570 */
                int32_t *l_1100 = &p_2417->g_308;
                for (l_1070 = 23; (l_1070 >= (-11)); l_1070--)
                { /* block id: 573 */
                    return (***p_2417->g_725);
                }
                (*l_1100) ^= l_1070;
                return (*p_2417->g_509);
            }
        }
    }
    if ((((safe_div_func_uint32_t_u_u((safe_div_func_int64_t_s_s(((((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_1109, (safe_unary_minus_func_uint32_t_u((((0x0535L | l_1052) , l_1047) == (void*)0))))), p_64)) <= l_1111) <= (((((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_1017[3][1], (((safe_rshift_func_int8_t_s_u((p_2417->g_330.x <= (-4L)), p_64)) || 0x8F18A3E7L) > l_1053[5]))), 9L)) , l_1017[3][0]) < l_999.s0) < l_1052) , p_64)) || l_1118), 0x74EAE68D638738E7L)), (-1L))) || p_64) , (*p_2417->g_6)))
    { /* block id: 581 */
        int32_t l_1121 = 0x0D8E640AL;
        int32_t l_1122[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        VECTOR(uint32_t, 16) l_1159 = (VECTOR(uint32_t, 16))(0xF053AC36L, (VECTOR(uint32_t, 4))(0xF053AC36L, (VECTOR(uint32_t, 2))(0xF053AC36L, 2UL), 2UL), 2UL, 0xF053AC36L, 2UL, (VECTOR(uint32_t, 2))(0xF053AC36L, 2UL), (VECTOR(uint32_t, 2))(0xF053AC36L, 2UL), 0xF053AC36L, 2UL, 0xF053AC36L, 2UL);
        uint8_t *l_1161 = &p_2417->g_434[0];
        uint8_t **l_1160 = &l_1161;
        int64_t l_1162 = 0x4C2CB9F49DE4ED54L;
        int32_t *l_1163 = &p_2417->g_43;
        int32_t *l_1167[10][10] = {{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]},{&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0],&l_1122[1],&l_1053[0],&l_1053[0]}};
        int i, j;
        for (p_2417->g_23 = 0; (p_2417->g_23 <= 11); p_2417->g_23 = safe_add_func_int64_t_s_s(p_2417->g_23, 6))
        { /* block id: 584 */
            int32_t **l_1143[3];
            int32_t ***l_1142 = &l_1143[2];
            int32_t ****l_1141 = &l_1142;
            uint8_t *l_1145 = &p_2417->g_434[1];
            uint8_t *l_1146 = &p_2417->g_438;
            int i;
            for (i = 0; i < 3; i++)
                l_1143[i] = &p_2417->g_356;
            l_1122[3] = l_1121;
            for (l_1052 = 14; (l_1052 > (-24)); --l_1052)
            { /* block id: 588 */
                return l_1122[3];
            }
            l_1122[4] = (safe_mod_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(p_64, ((l_1122[3] <= (0L & (safe_mod_func_uint8_t_u_u(((*l_1146) = ((*l_1145) = (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(p_64, ((safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(((void*)0 != l_1141), (l_1053[2] = (((*l_79) = ((&p_2417->g_774 == l_1144) ^ (((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x1F1381D5L, 7L)), 0x2D7F984DL, 0x08A9A278L)).w || (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0x940E53006F349D6CL)), 18446744073709551613UL, 0x41358EF0353AFF4DL)).y <= p_2417->g_872)) , p_2417->g_1013.se) , 1UL))) , 0x03335D1ABB766B90L)))) , l_1118), GROUP_DIVERGE(1, 1))) > l_1122[7]))) || p_64), GROUP_DIVERGE(0, 1))), p_64)))), p_2417->g_1014.s7)))) && l_1121))) ^ p_2417->g_815.x), GROUP_DIVERGE(0, 1)));
            return p_2417->g_1147[7];
        }
        if ((l_1164 = (p_2417->g_850.w , (((l_1042.z == l_1148) , 0xF3L) <= (safe_add_func_int16_t_s_s(l_1122[5], (((safe_lshift_func_int16_t_s_u((((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(65530UL, 0x7220L)).xyxx, ((VECTOR(uint16_t, 2))(65530UL, 1UL)).yxyy))), (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_1163) = ((p_64 <= (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_1159.s70b84b07)).lo)).y == (l_1160 != &p_2417->g_754))) <= (p_64 & l_1162))) , 246UL), l_1159.s5)), l_1159.s5)), 65526UL, 0UL, 0x30DDL)).s5 == 1UL) && 1UL) , (-2L)), FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10))) != p_64) , 0x8790L)))))))
        { /* block id: 600 */
            (*p_2417->g_1165) = p_65;
        }
        else
        { /* block id: 602 */
            int32_t *l_1166 = (void*)0;
            l_1167[1][0] = l_1166;
        }
    }
    else
    { /* block id: 605 */
        VECTOR(uint32_t, 16) l_1188 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967286UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), 4294967286UL, 4294967295UL, 4294967286UL, 4294967295UL);
        VECTOR(uint64_t, 16) l_1194 = (VECTOR(uint64_t, 16))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x32CD8B6DEB68A86AL), 0x32CD8B6DEB68A86AL), 0x32CD8B6DEB68A86AL, 4UL, 0x32CD8B6DEB68A86AL, (VECTOR(uint64_t, 2))(4UL, 0x32CD8B6DEB68A86AL), (VECTOR(uint64_t, 2))(4UL, 0x32CD8B6DEB68A86AL), 4UL, 0x32CD8B6DEB68A86AL, 4UL, 0x32CD8B6DEB68A86AL);
        VECTOR(int32_t, 8) l_1197 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x56E68640L), 0x56E68640L), 0x56E68640L, (-8L), 0x56E68640L);
        VECTOR(int32_t, 4) l_1198 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L);
        uint8_t l_1202 = 0UL;
        uint8_t l_1232 = 255UL;
        uint32_t *l_1233[2][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int8_t l_1234[1][5][2];
        uint8_t l_1236 = 0UL;
        uint16_t *l_1239 = &p_2417->g_391[0][0][0];
        int64_t *l_1246 = &p_2417->g_404[6];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1234[i][j][k] = (-9L);
            }
        }
        for (l_1164 = (-21); (l_1164 >= (-8)); l_1164 = safe_add_func_uint64_t_u_u(l_1164, 8))
        { /* block id: 608 */
            VECTOR(uint64_t, 4) l_1195 = (VECTOR(uint64_t, 4))(0x97B66F08DC00516CL, (VECTOR(uint64_t, 2))(0x97B66F08DC00516CL, 0x18118CFACF5C665DL), 0x18118CFACF5C665DL);
            VECTOR(uint64_t, 8) l_1196 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL);
            int8_t *l_1201 = (void*)0;
            int16_t l_1222[6][4] = {{0x6865L,0x6865L,0x6865L,0x6865L},{0x6865L,0x6865L,0x6865L,0x6865L},{0x6865L,0x6865L,0x6865L,0x6865L},{0x6865L,0x6865L,0x6865L,0x6865L},{0x6865L,0x6865L,0x6865L,0x6865L},{0x6865L,0x6865L,0x6865L,0x6865L}};
            volatile uint32_t * volatile * volatile *l_1227 = &p_2417->g_1223;
            int i, j;
            for (p_2417->g_979 = 22; (p_2417->g_979 < 38); p_2417->g_979++)
            { /* block id: 611 */
                uint32_t l_1179 = 0x01CB57A3L;
                VECTOR(uint32_t, 8) l_1187 = (VECTOR(uint32_t, 8))(0xC496C59CL, (VECTOR(uint32_t, 4))(0xC496C59CL, (VECTOR(uint32_t, 2))(0xC496C59CL, 0xAE3B58B3L), 0xAE3B58B3L), 0xAE3B58B3L, 0xC496C59CL, 0xAE3B58B3L);
                uint32_t *l_1190 = &p_2417->g_1191;
                VECTOR(uint16_t, 16) l_1206 = (VECTOR(uint16_t, 16))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0x8309L), 0x8309L), 0x8309L, 3UL, 0x8309L, (VECTOR(uint16_t, 2))(3UL, 0x8309L), (VECTOR(uint16_t, 2))(3UL, 0x8309L), 3UL, 0x8309L, 3UL, 0x8309L);
                int32_t *l_1207 = (void*)0;
                int32_t *l_1215 = &p_2417->g_777[4][2];
                int32_t *l_1216 = &l_1053[5];
                uint64_t *l_1217 = (void*)0;
                uint64_t *l_1218 = (void*)0;
                uint64_t *l_1219 = (void*)0;
                uint64_t *l_1220 = (void*)0;
                uint64_t *l_1221[5][4];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1221[i][j] = (void*)0;
                }
                (*p_2417->g_1203) = (safe_unary_minus_func_uint8_t_u(((safe_add_func_int32_t_s_s((0x0A61L >= ((safe_div_func_uint8_t_u_u((p_64 != (l_1179 != ((((((-2L) ^ p_64) >= (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(p_2417->g_1182.s41)))), 0x6698L, 0x7290L)).x, ((*l_79) = ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))((-1L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((safe_div_func_int8_t_s_s(((*l_1047) = (((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(l_1187.s6370)).yzzxxxyx, ((VECTOR(uint32_t, 4))(l_1188.s00db)).xyyzzyzx))))).s5, (((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_2417->g_1189.xwzxzxwxyxwywwyz)).s23ab)).w , (((*l_1190) = p_2417->g_774) , (safe_mul_func_uint16_t_u_u(((p_2417->g_1200 = ((((p_64 < ((+((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(l_1194.s4a994f5a64ecd7c4)).s36, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(0x72B8AB838815630DL, 4UL)).yxxy, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 2))(l_1195.xx)).xxxx, ((VECTOR(uint64_t, 16))(l_1196.s0622164115204433)).s2c2b)))))).zyyyyxzz)).s53))).even) <= l_1194.s1)) == ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x6CF82429L, 0x53421AC1L)).xxxy, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_1197.s46)).xxxx, ((VECTOR(int32_t, 8))(l_1198.xzwwzwyy)).lo))), ((VECTOR(int32_t, 4))(p_2417->g_1199.s2481)))))))).y) >= 250UL) , (void*)0)) == l_1201), p_2417->g_1182.s2)))) == 0xAFL) >= 0x77L))) < l_1202) > 0x02CD78F9A65CE329L)), 0x3DL)), 0x192AL, ((VECTOR(int16_t, 2))(0x371EL)), ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x7949L)), l_1202, 0x6C4CL, p_64, 0x27E1L, p_64, 0x3D63L, (-8L), 0x0AAEL)).lo)), ((VECTOR(int16_t, 2))(0L)), 0x1509L, 0x714BL, l_999.s0, (-6L), 0x184EL)).odd, ((VECTOR(int16_t, 8))(0x7014L))))).s2)))) ^ l_1188.s8) , (-1L)) != l_1195.z))), p_2417->g_537)) , l_1179)), p_64)) | (-2L))));
                l_1052 &= (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1206.s223e)).zzwzwzzy)).s1741444356247012)).sb, 2));
                (*p_2417->g_307) = (safe_sub_func_uint64_t_u_u((l_1222[2][0] = (((((&p_2417->g_1147[7] == ((safe_lshift_func_uint16_t_u_u(p_2417->g_1015.w, p_2417->g_1147[7])) , p_65)) > p_64) , ((*l_1216) = (safe_lshift_func_int16_t_s_u(l_1214, (((*l_1215) ^= ((((+(&p_65 != &l_1207)) < (FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10) && p_2417->g_496.s3)) , p_64) , l_1202)) , 0xA48FL))))) != 0xD4F28450L) , 18446744073709551608UL)), p_2417->g_1199.s8));
            }
            (*l_1227) = p_2417->g_1223;
        }
        l_1198.z = (((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 248UL)) > ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xC798L, 8UL)), 0xC289L, 0x0E4FL)).w, 65535UL, (safe_mul_func_int16_t_s_s(((((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-9L), (-1L))), (-8L), 0x55L)).z < l_1232) == l_69) != ((*l_1239) = ((--l_1236) > 0x6968001EL))) , (((*l_1246) = ((VECTOR(int64_t, 8))(0L, 0x38DA95E10C1B227CL, 0x61787CE02D1B8DC7L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x48BF0D34678B677FL, (-5L))))), (((safe_rshift_func_int16_t_s_u((l_69 &= 8L), 6)) | (safe_mod_func_uint8_t_u_u((0x23CF658B2CF13068L ^ (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10), ((((p_64 , (l_1047 == &p_2417->g_1235)) < GROUP_DIVERGE(0, 1)) || 4294967295UL) <= p_2417->g_319)))), l_1198.z))) || p_64), 0x417AA51D66BBF238L, 0x2DBF831A9BA94767L)).s4) > p_64)), p_64)), 0xB46DL, 0UL, p_2417->g_434[1], 1UL, ((VECTOR(uint16_t, 4))(3UL)), 65530UL, ((VECTOR(uint16_t, 2))(0UL)), 0xB728L, 0x6730L)).lo, ((VECTOR(uint16_t, 8))(0xDEDCL))))).s03)).lo) ^ 0x28348C04L);
    }
    (*l_1274) = (!(l_1111 = ((safe_mul_func_uint16_t_u_u(((l_1053[3] |= l_1017[6][6]) , ((l_1017[6][6] && p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]) >= FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10))), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(p_64, ((((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(p_64, (((safe_lshift_func_int8_t_s_s((0x062EL <= ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_69 &= ((l_1052 = p_64) == (((*l_1272) = (((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(l_1261.sb4)), ((VECTOR(uint32_t, 4))(l_1262.yxzy)).even, ((VECTOR(uint32_t, 16))(l_1263.xxywyyyzyzyywxzx)).s0f))), 4294967295UL, 4294967288UL)), ((VECTOR(uint32_t, 8))(l_1264.yywyyzyw)).hi))).yyyxzwxz, ((VECTOR(uint32_t, 2))(p_2417->g_1265.se0)).xyyyyxxy))), ((VECTOR(uint32_t, 4))(l_1266.wzwy)).xxwxyzxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_1267.s62026443)).s3067533344734170)))).sf5))).xxyxyyyyxxyxyyyy, ((VECTOR(uint32_t, 8))((safe_mod_func_uint32_t_u_u(0UL, (safe_lshift_func_int8_t_s_u((&l_1257 == (*p_2417->g_542)), p_64)))), 3UL, 0xC069C5F0L, 0x32E8D8A6L, 1UL, 4294967295UL, 0UL, 4294967295UL)).s6073573431541714))).sb6)).yxyxyxyx))), ((VECTOR(uint32_t, 8))(0x111EEC31L))))).s1 && 0UL)) | l_1266.z))), 0x4009L)), 12)), 0x64L)) , p_2417->g_308)), 3)) != p_64) != l_1042.y), 0x11E7L, l_1273.w, 0x4C34L, 1L, p_2417->g_334, ((VECTOR(int16_t, 4))(0x7006L)), l_1266.y, ((VECTOR(int16_t, 4))(2L)))).sba43, ((VECTOR(int16_t, 4))(0x5999L))))).even, (int16_t)l_1148, (int16_t)l_1264.x))).even ^ p_2417->g_1147[7]) ^ FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10)), (-3L), (-1L))), ((VECTOR(int16_t, 4))(0x6354L))))).wyyyyzxw)).s4)) | p_2417->g_319)));
    return (*l_1274);
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_319 p_2417->g_22 p_2417->g_25 p_2417->g_308 p_2417->g_330 p_2417->g_307 p_2417->g_438 p_2417->g_6 p_2417->g_7 p_2417->g_355 p_2417->g_356 p_2417->g_23 p_2417->g_496 p_2417->g_517 p_2417->g_404 p_2417->g_723 p_2417->g_725 p_2417->g_726 p_2417->g_428 p_2417->g_753 p_2417->g_757 p_2417->g_391 p_2417->g_773 p_2417->g_777 p_2417->g_781 p_2417->g_544 p_2417->g_434 p_2417->g_337 p_2417->g_509 p_2417->g_813 p_2417->g_815 p_2417->g_510 p_2417->g_850 p_2417->g_851 p_2417->g_comm_values p_2417->g_481 p_2417->g_870 p_2417->g_891 p_2417->l_comm_values p_2417->g_979 p_2417->g_774
 * writes: p_2417->g_434 p_2417->g_544 p_2417->g_573 p_2417->g_319 p_2417->g_308 p_2417->g_438 p_2417->g_23 p_2417->g_723 p_2417->g_726 p_2417->g_25 p_2417->g_428 p_2417->g_753 p_2417->g_391 p_2417->g_774 p_2417->g_356 p_2417->g_404 p_2417->g_517 p_2417->g_334 p_2417->g_417
 */
int32_t  func_70(int16_t  p_71, int64_t  p_72, int16_t  p_73, int32_t * p_74, struct S0 * p_2417)
{ /* block id: 313 */
    int32_t *l_545 = &p_2417->g_319;
    int32_t *l_546 = &p_2417->g_319;
    int32_t *l_547 = &p_2417->g_319;
    int32_t *l_548 = &p_2417->g_308;
    int32_t *l_549 = &p_2417->g_308;
    int32_t *l_550 = (void*)0;
    int32_t *l_551 = (void*)0;
    int32_t *l_552 = &p_2417->g_319;
    int32_t *l_553[4];
    int32_t l_554 = 0x548E98D1L;
    uint32_t l_555 = 8UL;
    uint8_t *l_559 = &p_2417->g_434[1];
    int32_t **l_564 = (void*)0;
    int64_t *l_565 = (void*)0;
    int64_t *l_566 = &p_2417->g_404[6];
    int64_t **l_567 = &p_2417->g_544[2];
    uint32_t **l_570 = (void*)0;
    uint32_t *l_572 = &l_555;
    uint32_t **l_571[10][3][6] = {{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}},{{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0},{&l_572,&l_572,(void*)0,&l_572,&l_572,(void*)0}}};
    VECTOR(uint64_t, 4) l_706 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551607UL), 18446744073709551607UL);
    int64_t l_745 = 0L;
    VECTOR(int16_t, 16) l_816 = (VECTOR(int16_t, 16))(0x15DAL, (VECTOR(int16_t, 4))(0x15DAL, (VECTOR(int16_t, 2))(0x15DAL, 0x74F5L), 0x74F5L), 0x74F5L, 0x15DAL, 0x74F5L, (VECTOR(int16_t, 2))(0x15DAL, 0x74F5L), (VECTOR(int16_t, 2))(0x15DAL, 0x74F5L), 0x15DAL, 0x74F5L, 0x15DAL, 0x74F5L);
    VECTOR(uint8_t, 4) l_842 = (VECTOR(uint8_t, 4))(0x5BL, (VECTOR(uint8_t, 2))(0x5BL, 255UL), 255UL);
    uint64_t *l_908 = (void*)0;
    uint16_t l_917[1][6][9] = {{{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L},{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L},{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L},{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L},{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L},{0x7237L,2UL,0x136AL,1UL,0x17EDL,1UL,0x136AL,2UL,0x7237L}}};
    int32_t l_918 = 0x0162D522L;
    VECTOR(int16_t, 2) l_920 = (VECTOR(int16_t, 2))(6L, (-10L));
    int32_t *l_927 = (void*)0;
    int32_t **l_926 = &l_927;
    VECTOR(uint16_t, 8) l_944 = (VECTOR(uint16_t, 8))(0x1017L, (VECTOR(uint16_t, 4))(0x1017L, (VECTOR(uint16_t, 2))(0x1017L, 0xD298L), 0xD298L), 0xD298L, 0x1017L, 0xD298L);
    VECTOR(uint32_t, 8) l_949 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x7AA1BBCDL), 0x7AA1BBCDL), 0x7AA1BBCDL, 0UL, 0x7AA1BBCDL);
    VECTOR(int32_t, 16) l_954 = (VECTOR(int32_t, 16))(0x440C57FDL, (VECTOR(int32_t, 4))(0x440C57FDL, (VECTOR(int32_t, 2))(0x440C57FDL, 0L), 0L), 0L, 0x440C57FDL, 0L, (VECTOR(int32_t, 2))(0x440C57FDL, 0L), (VECTOR(int32_t, 2))(0x440C57FDL, 0L), 0x440C57FDL, 0L, 0x440C57FDL, 0L);
    uint32_t l_973[1][1];
    uint16_t l_980 = 0x54ABL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_553[i] = &p_2417->g_319;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_973[i][j] = 0x34BB2EDCL;
    }
    ++l_555;
    (*p_2417->g_307) = ((*l_546) = (((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((safe_unary_minus_func_int16_t_s(((*l_552) >= ((((*l_559) = p_2417->g_22.y) && (safe_div_func_int16_t_s_s((p_2417->g_25[5][4][2] | (((((safe_rshift_func_int8_t_s_s((l_564 == &l_546), 2)) , (l_565 = &p_72)) != ((*l_567) = l_566)) == GROUP_DIVERGE(2, 1)) , (GROUP_DIVERGE(1, 1) , (safe_mod_func_uint8_t_u_u(((*l_548) & (((((p_2417->g_573[2][2][1] = &l_555) != &p_2417->g_428) < (*l_546)) | GROUP_DIVERGE(2, 1)) >= p_73)), p_71))))), 0x1992L))) != p_2417->g_330.y)))), ((VECTOR(int64_t, 2))((-5L))), 0L)).wxyzzwzzyzzzwxzz)).s22)))).yyyx, ((VECTOR(int64_t, 4))((-1L)))))).odd)), ((VECTOR(int64_t, 2))((-3L))), ((VECTOR(int64_t, 2))((-2L)))))).yyyyyyxx)).s3 >= (*l_546)) && 0L) , (*l_552)) >= p_72) , 0x4E787958L));
    for (p_2417->g_438 = 0; (p_2417->g_438 == 15); p_2417->g_438 = safe_add_func_int16_t_s_s(p_2417->g_438, 7))
    { /* block id: 323 */
        return p_72;
    }
    for (l_555 = (-9); (l_555 == 5); l_555 = safe_add_func_int16_t_s_s(l_555, 5))
    { /* block id: 328 */
        int32_t l_578 = 1L;
        uint32_t *l_703[6] = {&p_2417->g_23,&p_2417->g_23,&p_2417->g_23,&p_2417->g_23,&p_2417->g_23,&p_2417->g_23};
        VECTOR(uint64_t, 8) l_707 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL);
        uint64_t *l_708 = (void*)0;
        uint64_t *l_709 = (void*)0;
        uint8_t *l_716[9][1][9] = {{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}},{{&p_2417->g_434[0],&p_2417->g_434[1],&p_2417->g_537,&p_2417->g_517,&p_2417->g_438,&p_2417->g_434[1],&p_2417->g_517,&p_2417->g_537,&p_2417->g_434[1]}}};
        uint16_t *l_719 = &p_2417->g_391[0][0][0];
        int8_t l_722 = 0x47L;
        int32_t l_792 = (-4L);
        int32_t l_809[9] = {(-5L),0L,(-5L),(-5L),0L,(-5L),(-5L),0L,(-5L)};
        VECTOR(uint16_t, 4) l_859 = (VECTOR(uint16_t, 4))(0xFCBDL, (VECTOR(uint16_t, 2))(0xFCBDL, 0xFA79L), 0xFA79L);
        VECTOR(int32_t, 2) l_867 = (VECTOR(int32_t, 2))(0x08B8337EL, 1L);
        int8_t *l_895 = (void*)0;
        int8_t **l_894 = &l_895;
        int8_t ***l_893 = &l_894;
        VECTOR(int32_t, 16) l_951 = (VECTOR(int32_t, 16))(0x5311B2D7L, (VECTOR(int32_t, 4))(0x5311B2D7L, (VECTOR(int32_t, 2))(0x5311B2D7L, 0x0AD45CB7L), 0x0AD45CB7L), 0x0AD45CB7L, 0x5311B2D7L, 0x0AD45CB7L, (VECTOR(int32_t, 2))(0x5311B2D7L, 0x0AD45CB7L), (VECTOR(int32_t, 2))(0x5311B2D7L, 0x0AD45CB7L), 0x5311B2D7L, 0x0AD45CB7L, 0x5311B2D7L, 0x0AD45CB7L);
        VECTOR(uint32_t, 2) l_957 = (VECTOR(uint32_t, 2))(4294967293UL, 0UL);
        VECTOR(int64_t, 2) l_965 = (VECTOR(int64_t, 2))(1L, (-6L));
        int i, j, k;
        if ((l_578 ^= (p_71 != (*p_2417->g_6))))
        { /* block id: 330 */
            int32_t *l_579 = &p_2417->g_319;
            l_579 = p_74;
        }
        else
        { /* block id: 332 */
            int32_t **l_581 = (void*)0;
            int32_t **l_583 = &l_553[1];
            p_74 = (*p_2417->g_355);
            (*l_583) = (*p_2417->g_355);
        }
        if ((atomic_inc(&p_2417->g_atomic_input[4 * get_linear_group_id() + 3]) == 4))
        { /* block id: 337 */
            int32_t l_584 = 0x3B6EE9ECL;
            uint8_t l_589 = 0UL;
            uint64_t l_590 = 18446744073709551611UL;
            int32_t *l_591 = &l_584;
            int32_t *l_592[6] = {&l_584,&l_584,&l_584,&l_584,&l_584,&l_584};
            int32_t *l_593 = &l_584;
            int i;
            for (l_584 = (-23); (l_584 >= 12); ++l_584)
            { /* block id: 340 */
                int8_t **l_587 = (void*)0;
                int8_t **l_588 = (void*)0;
                l_588 = (l_587 = (void*)0);
            }
            l_593 = (l_592[5] = ((l_589 , l_590) , l_591));
            for (l_584 = 0; (l_584 <= 3); l_584++)
            { /* block id: 348 */
                int32_t l_596 = (-2L);
                uint8_t l_603 = 0UL;
                VECTOR(int32_t, 8) l_604 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-7L)), (-7L)), (-7L), (-2L), (-7L));
                int i;
                for (l_596 = (-17); (l_596 >= 13); l_596++)
                { /* block id: 351 */
                    int16_t l_599 = 0x1472L;
                    int16_t l_600 = (-4L);
                    int32_t l_602[8] = {0x423745C0L,0x423745C0L,0x423745C0L,0x423745C0L,0x423745C0L,0x423745C0L,0x423745C0L,0x423745C0L};
                    int32_t *l_601 = &l_602[0];
                    int i;
                    l_592[4] = ((l_599 , l_600) , (l_593 = l_601));
                }
                l_604.s2 |= l_603;
            }
            for (l_584 = 0; (l_584 == (-14)); l_584 = safe_sub_func_uint64_t_u_u(l_584, 7))
            { /* block id: 359 */
                int16_t l_607 = 0x4BBCL;
                uint16_t l_702[7] = {0x45A2L,0x45A2L,0x45A2L,0x45A2L,0x45A2L,0x45A2L,0x45A2L};
                uint16_t *l_701 = &l_702[4];
                uint16_t **l_700 = &l_701;
                int i;
                if (l_607)
                { /* block id: 360 */
                    VECTOR(uint64_t, 16) l_608 = (VECTOR(uint64_t, 16))(0xE7D2F1E8C6DDC2CBL, (VECTOR(uint64_t, 4))(0xE7D2F1E8C6DDC2CBL, (VECTOR(uint64_t, 2))(0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL), 0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL, 0xE7D2F1E8C6DDC2CBL, 18446744073709551615UL);
                    VECTOR(int32_t, 2) l_609 = (VECTOR(int32_t, 2))(3L, 0L);
                    int i;
                    l_609.x = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_608.s46)))).odd , ((VECTOR(int32_t, 16))(l_609.xxyyxyxxxxxyyyxy)).sd);
                }
                else
                { /* block id: 362 */
                    VECTOR(int32_t, 4) l_610 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2809C6EDL), 0x2809C6EDL);
                    uint32_t l_611 = 0x8AAE6BE4L;
                    int16_t l_621[10] = {0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL,0x3AEAL};
                    int32_t l_622 = 0x0CD176D4L;
                    VECTOR(uint8_t, 16) l_635 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 1UL), 1UL), 1UL, 249UL, 1UL, (VECTOR(uint8_t, 2))(249UL, 1UL), (VECTOR(uint8_t, 2))(249UL, 1UL), 249UL, 1UL, 249UL, 1UL);
                    uint8_t l_636 = 0xC0L;
                    int16_t l_637 = 0x68B2L;
                    int i;
                    l_611 = ((VECTOR(int32_t, 8))(l_610.xxyzzxyx)).s7;
                    for (l_611 = 10; (l_611 != 29); l_611 = safe_add_func_uint8_t_u_u(l_611, 2))
                    { /* block id: 366 */
                        uint16_t l_614 = 0xD646L;
                        int64_t l_615 = 1L;
                        uint64_t l_616 = 18446744073709551609UL;
                        int64_t l_617 = (-6L);
                        VECTOR(int32_t, 16) l_618 = (VECTOR(int32_t, 16))(0x3148C617L, (VECTOR(int32_t, 4))(0x3148C617L, (VECTOR(int32_t, 2))(0x3148C617L, 0x4E399AB5L), 0x4E399AB5L), 0x4E399AB5L, 0x3148C617L, 0x4E399AB5L, (VECTOR(int32_t, 2))(0x3148C617L, 0x4E399AB5L), (VECTOR(int32_t, 2))(0x3148C617L, 0x4E399AB5L), 0x3148C617L, 0x4E399AB5L, 0x3148C617L, 0x4E399AB5L);
                        int32_t l_619 = 0x3ECDAAC7L;
                        int16_t l_620[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_620[i] = 0L;
                        l_615 = l_614;
                        l_617 = l_616;
                        l_619 = (l_618.s8 = ((VECTOR(int32_t, 8))(l_618.s3bfb04e2)).s3);
                        l_620[2] &= 0x3960F4CEL;
                    }
                    if ((l_621[5] , l_622))
                    { /* block id: 373 */
                        int8_t l_623 = 0x3FL;
                        uint16_t l_626 = 0xE2C7L;
                        VECTOR(int32_t, 2) l_627 = (VECTOR(int32_t, 2))(0x31B86600L, 0x5058E411L);
                        int8_t l_628 = 7L;
                        int i;
                        l_628 ^= (((--l_611) , l_626) , ((VECTOR(int32_t, 16))(l_627.xxxyyyxxxxxxyyxx)).s6);
                    }
                    else
                    { /* block id: 376 */
                        uint64_t l_629 = 0x3BBC55E089A95900L;
                        uint32_t l_630 = 0UL;
                        uint32_t l_631 = 0x215474C8L;
                        uint16_t l_632[6][9][3] = {{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}},{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}},{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}},{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}},{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}},{{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL},{65532UL,0x3978L,0UL}}};
                        int32_t l_634[2][6];
                        int32_t *l_633 = &l_634[1][4];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_634[i][j] = (-4L);
                        }
                        l_630 = l_629;
                        l_593 = ((l_631 , l_632[1][6][0]) , l_633);
                    }
                    if (((l_589 = ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_635.s47390318d0055124)).s9e)), 1UL, 255UL)).yxwzzzxx))).s5) , (l_636 , l_637)))
                    { /* block id: 381 */
                        uint8_t l_638 = 255UL;
                        ++l_638;
                        l_592[5] = (void*)0;
                    }
                    else
                    { /* block id: 384 */
                        VECTOR(int64_t, 8) l_641 = (VECTOR(int64_t, 8))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x67EB8C8C36FDD8E5L), 0x67EB8C8C36FDD8E5L), 0x67EB8C8C36FDD8E5L, (-8L), 0x67EB8C8C36FDD8E5L);
                        VECTOR(int64_t, 8) l_642 = (VECTOR(int64_t, 8))(0x024A97C6047D224BL, (VECTOR(int64_t, 4))(0x024A97C6047D224BL, (VECTOR(int64_t, 2))(0x024A97C6047D224BL, 3L), 3L), 3L, 0x024A97C6047D224BL, 3L);
                        VECTOR(int32_t, 4) l_643 = (VECTOR(int32_t, 4))(0x5E0358EFL, (VECTOR(int32_t, 2))(0x5E0358EFL, 0x3D7D06D4L), 0x3D7D06D4L);
                        VECTOR(int32_t, 4) l_644 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x4826A29BL), 0x4826A29BL);
                        uint32_t l_645 = 4294967295UL;
                        uint32_t l_646 = 0xDC36ADCAL;
                        VECTOR(int32_t, 16) l_647 = (VECTOR(int32_t, 16))(0x5CC7DA36L, (VECTOR(int32_t, 4))(0x5CC7DA36L, (VECTOR(int32_t, 2))(0x5CC7DA36L, 1L), 1L), 1L, 0x5CC7DA36L, 1L, (VECTOR(int32_t, 2))(0x5CC7DA36L, 1L), (VECTOR(int32_t, 2))(0x5CC7DA36L, 1L), 0x5CC7DA36L, 1L, 0x5CC7DA36L, 1L);
                        int8_t l_648[4];
                        VECTOR(int32_t, 8) l_649 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x1DE2E84EL), 0x1DE2E84EL), 0x1DE2E84EL, (-4L), 0x1DE2E84EL);
                        VECTOR(uint32_t, 2) l_650 = (VECTOR(uint32_t, 2))(0x849A4161L, 0x230F6742L);
                        VECTOR(int64_t, 4) l_651 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x2550459C5209DBEDL), 0x2550459C5209DBEDL);
                        VECTOR(int64_t, 8) l_652 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x518F91269E981E60L), 0x518F91269E981E60L), 0x518F91269E981E60L, (-9L), 0x518F91269E981E60L);
                        VECTOR(int64_t, 4) l_653 = (VECTOR(int64_t, 4))(0x754AE6FFF700EFACL, (VECTOR(int64_t, 2))(0x754AE6FFF700EFACL, (-1L)), (-1L));
                        VECTOR(int64_t, 4) l_654 = (VECTOR(int64_t, 4))(0x519D0E3861933289L, (VECTOR(int64_t, 2))(0x519D0E3861933289L, 0x0EC7302F8A92C248L), 0x0EC7302F8A92C248L);
                        uint32_t l_655 = 0x86C4E2E5L;
                        VECTOR(int64_t, 8) l_656 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L);
                        VECTOR(int64_t, 4) l_657 = (VECTOR(int64_t, 4))(0x56AC50B07A273353L, (VECTOR(int64_t, 2))(0x56AC50B07A273353L, (-1L)), (-1L));
                        VECTOR(int64_t, 8) l_658 = (VECTOR(int64_t, 8))(0x5D22B44C02CB336CL, (VECTOR(int64_t, 4))(0x5D22B44C02CB336CL, (VECTOR(int64_t, 2))(0x5D22B44C02CB336CL, 0x4D7FA12E5F008A19L), 0x4D7FA12E5F008A19L), 0x4D7FA12E5F008A19L, 0x5D22B44C02CB336CL, 0x4D7FA12E5F008A19L);
                        VECTOR(int64_t, 8) l_659 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        VECTOR(int64_t, 8) l_660 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5730F7C476644420L), 0x5730F7C476644420L), 0x5730F7C476644420L, (-1L), 0x5730F7C476644420L);
                        VECTOR(int64_t, 16) l_661 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x6CC2BF1C450958EBL), 0x6CC2BF1C450958EBL), 0x6CC2BF1C450958EBL, 0L, 0x6CC2BF1C450958EBL, (VECTOR(int64_t, 2))(0L, 0x6CC2BF1C450958EBL), (VECTOR(int64_t, 2))(0L, 0x6CC2BF1C450958EBL), 0L, 0x6CC2BF1C450958EBL, 0L, 0x6CC2BF1C450958EBL);
                        uint32_t l_662 = 4294967293UL;
                        int8_t l_663 = 0x20L;
                        VECTOR(int64_t, 8) l_664 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        uint32_t l_665 = 1UL;
                        uint32_t l_666 = 4294967295UL;
                        uint32_t l_667 = 0x786CEA1EL;
                        int8_t l_668 = 0x7CL;
                        uint16_t l_669 = 8UL;
                        int32_t l_670 = 9L;
                        uint32_t l_671 = 4294967295UL;
                        int32_t l_672 = 1L;
                        uint8_t l_673 = 0x66L;
                        uint16_t l_674 = 0x8902L;
                        uint32_t l_675 = 8UL;
                        int32_t l_678 = 0L;
                        uint8_t l_679[2];
                        uint16_t l_680 = 65535UL;
                        uint8_t l_681 = 253UL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_648[i] = 0L;
                        for (i = 0; i < 2; i++)
                            l_679[i] = 0UL;
                        l_671 = (((VECTOR(int64_t, 16))((-10L), ((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_641.s4266)).zyzxzxxxxzxzzwzy)).sb0)).yxxxyxyyyxyxyxyy)).odd, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(l_642.s70)).yxxx, ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_643.xx)), 0L, 0x14EB11F9L, ((VECTOR(int32_t, 4))(0x069F28AFL, ((VECTOR(int32_t, 2))(l_644.yz)), 0x51F8A30BL)), (l_645 , l_646), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_647.s6058c7ad611cef4a)).sdc)), l_648[0], ((VECTOR(int32_t, 4))(l_649.s7653)))).s2132)).wyyyxyxwzxzxzyxw)).s28, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_650.yxxyxxyx)).s2231444071343055)))).hi)).s71))).xyyx))), ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 2))(l_651.yz)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_652.s43)), ((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_653.zwwyxzwz)).s3, 0x1CA8EC812C2339ECL, 0x38A22796BDD994D2L, 0x3F02C3EEBAF6AE10L, (-5L), 0x31FF876542CC26F8L, ((VECTOR(int64_t, 4))(l_654.wzxy)), 0x7BB6F6DC94C58456L, l_655, ((VECTOR(int64_t, 4))(l_656.s5543)))).lo, ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(l_657.xxwxxyzxzywzxyxw)).odd)))))), ((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(l_658.s54)).xyyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))((-8L), (-6L))).yxyx, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(l_659.s0657)).odd, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))((-1L), (-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x525542039AD5171FL, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_660.s36)))), ((VECTOR(int64_t, 2))(l_661.s19))))), 0L)).lo)))), 5L, ((VECTOR(int64_t, 4))(l_662, (l_659.s3 = l_663), 0L, 0x40A15DF3DD239411L)).z, 4L, 0x1A74E384A7072B38L)).lo, ((VECTOR(int64_t, 2))(l_664.s03)).xxyx))), ((VECTOR(int64_t, 8))(5L, l_665, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))((-10L), 0x0B219D0A205F35D8L)).yxxyxxxyyyyyxxyx)).sa0))), ((VECTOR(int64_t, 16))((-5L), 5L, ((VECTOR(int64_t, 2))(1L, 1L)), 0x5DDB9512D51CD737L, 0x4DFDD124FA087A71L, l_666, ((VECTOR(int64_t, 8))(0L)), 0x4C90C8A6A14200F0L)).sfd, ((VECTOR(int64_t, 2))((-7L)))))).xxxy)), 5L, 0x587F574A5AE520F5L)).even))), ((VECTOR(int64_t, 4))(1L)), 0x262118C24D9EF54DL, ((VECTOR(int64_t, 4))(0x2E389902F9F1ED34L)), l_667, 0L, 1L)).sb4))).xxxx))), (-4L), ((VECTOR(int64_t, 2))((-6L))), (-5L))).lo))), 0x484454AF27FF4C7DL, 1L)).s14, ((VECTOR(int64_t, 2))(0L))))).yxyyxxyx)).s70))).yxyx))).zxwzxwxx))), l_668, l_669, ((VECTOR(int64_t, 2))(0x4DED52061CB57AE1L)), 0x29B52D85BC643801L, 0x2F5521ABD1DDF05AL, 0x4C3C9F61B057E000L)).sd , l_670);
                        l_674 = (l_673 |= (l_670 = l_672));
                        --l_675;
                        l_681 ^= (l_678 , (l_680 = l_679[1]));
                    }
                }
                for (l_607 = 0; (l_607 != 10); l_607 = safe_add_func_int16_t_s_s(l_607, 1))
                { /* block id: 397 */
                    VECTOR(int32_t, 2) l_684 = (VECTOR(int32_t, 2))(2L, 0x71FFD3C9L);
                    uint64_t l_685 = 18446744073709551614UL;
                    int16_t l_686 = (-7L);
                    int16_t l_687 = 3L;
                    int32_t l_688 = 6L;
                    int32_t l_689 = (-1L);
                    int32_t l_690 = 0x06B435F3L;
                    int8_t l_691 = 0L;
                    int8_t l_692 = 1L;
                    int32_t l_693 = 1L;
                    int32_t l_694 = 0x1E533F90L;
                    VECTOR(int16_t, 2) l_695 = (VECTOR(int16_t, 2))(0x20CAL, 0x431EL);
                    uint8_t l_696 = 1UL;
                    uint32_t l_699 = 0x87487D11L;
                    int i;
                    l_685 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_684.yxxyyxxx)).s4466270623554147)).s4;
                    l_696++;
                    l_690 &= l_699;
                }
                l_592[5] = (void*)0;
                l_700 = (void*)0;
            }
            unsigned int result = 0;
            result += l_584;
            result += l_589;
            result += l_590;
            atomic_add(&p_2417->g_special_values[4 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 405 */
            (1 + 1);
        }
        if (l_578)
            continue;
        if ((((--p_2417->g_23) , 0x1196B8D3L) != (!((*l_546) = (p_71 && ((GROUP_DIVERGE(2, 1) | ((p_2417->g_7[2] && ((*l_549) ^= ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 2))(l_706.xx)).yxxx, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_707.s5561)).xxwzwyywzyzzwywz)).s5fa1))).y)) && ((safe_lshift_func_uint8_t_u_s(((p_2417->g_496.s3 < ((safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(((-1L) < (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x5F44E275L, (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x2244L, 0x1EFCL)).yxyxxyxx)), 0x15FEL, (l_716[4][0][6] == l_716[4][0][6]), ((p_72 , ((*l_719)--)) || ((p_72 | p_71) == (*l_549))), (-4L), (-3L), 0x4D92L, 0x5693L)).s1a, ((VECTOR(uint16_t, 2))(0UL))))))), 0x78DE3E2CL, (-1L))).y, ((VECTOR(int32_t, 4))(0x171B348CL)), ((VECTOR(int32_t, 2))(1L)), 0x2C6A96DBL)).s3 != 0x725CD01DL), 0xE3B62C49L, 0x94D3B079L)), (*l_545), ((VECTOR(uint32_t, 4))(0x41663729L)), l_578, ((VECTOR(uint32_t, 2))(4UL)), ((VECTOR(uint32_t, 4))(4294967291UL)))).sa > 0x671E3772L)), 0x27F5CF8EL)) == p_2417->g_517) || p_2417->g_404[6]) != 8UL), l_722)) , GROUP_DIVERGE(1, 1))) , 255UL), p_2417->g_7[2])) != p_73))) & l_707.s5))))))
        { /* block id: 413 */
            volatile int8_t * volatile * volatile *l_724[7][5] = {{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723},{&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723,&p_2417->g_723}};
            int32_t ***l_731 = &l_564;
            VECTOR(int8_t, 16) l_732 = (VECTOR(int8_t, 16))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, (-1L)), (-1L)), (-1L), 0x16L, (-1L), (VECTOR(int8_t, 2))(0x16L, (-1L)), (VECTOR(int8_t, 2))(0x16L, (-1L)), 0x16L, (-1L), 0x16L, (-1L));
            VECTOR(int8_t, 4) l_743 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L);
            int32_t l_744 = 0x018E5DE0L;
            uint8_t l_746 = 0xAFL;
            int16_t *l_747 = (void*)0;
            int16_t *l_748 = &p_2417->g_25[5][4][2];
            VECTOR(int8_t, 4) l_766 = (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0x70L), 0x70L);
            int32_t l_795 = 1L;
            VECTOR(uint16_t, 2) l_819 = (VECTOR(uint16_t, 2))(5UL, 0x4A8FL);
            int64_t l_822 = 0x4B2DA0B0EBBBBC09L;
            int32_t l_823 = 0x154669B3L;
            VECTOR(int16_t, 8) l_835 = (VECTOR(int16_t, 8))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L);
            int64_t l_856 = 0x29399C8DE2EDA4C5L;
            uint64_t *l_862[4][7] = {{(void*)0,&p_2417->g_774,(void*)0,(void*)0,&p_2417->g_774,(void*)0,(void*)0},{(void*)0,&p_2417->g_774,(void*)0,(void*)0,&p_2417->g_774,(void*)0,(void*)0},{(void*)0,&p_2417->g_774,(void*)0,(void*)0,&p_2417->g_774,(void*)0,(void*)0},{(void*)0,&p_2417->g_774,(void*)0,(void*)0,&p_2417->g_774,(void*)0,(void*)0}};
            uint8_t l_892 = 255UL;
            uint8_t **l_896 = &l_716[0][0][7];
            VECTOR(int16_t, 4) l_919 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x37F2L), 0x37F2L);
            VECTOR(int16_t, 16) l_922 = (VECTOR(int16_t, 16))(0x6596L, (VECTOR(int16_t, 4))(0x6596L, (VECTOR(int16_t, 2))(0x6596L, 1L), 1L), 1L, 0x6596L, 1L, (VECTOR(int16_t, 2))(0x6596L, 1L), (VECTOR(int16_t, 2))(0x6596L, 1L), 0x6596L, 1L, 0x6596L, 1L);
            int i, j;
            (*l_545) &= 1L;
            p_2417->g_723 = p_2417->g_723;
            (*p_2417->g_725) = &p_2417->g_509;
            if ((safe_mul_func_uint16_t_u_u((*l_546), ((((*l_748) = (((safe_add_func_int32_t_s_s((((*l_731) = &p_2417->g_356) != (*p_2417->g_725)), (GROUP_DIVERGE(0, 1) >= (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_732.s9a)))).even | (safe_div_func_int32_t_s_s(p_72, l_707.s3)))))) > p_2417->g_308) | ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 2))(0x814DL, 4UL)).xxyx))).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x146BL, (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(((0UL >= ((safe_lshift_func_uint8_t_u_u(p_71, 3)) > GROUP_DIVERGE(2, 1))) >= (((VECTOR(int8_t, 16))((-2L), ((VECTOR(int8_t, 4))(l_743.xwww)).y, l_744, ((VECTOR(int8_t, 2))(0x32L)), p_2417->g_481.s5, l_745, p_73, p_2417->g_43, (-1L), 0x6EL, p_71, 0x78L, 2L, 0x7BL, 0x2CL)).sb >= 2UL)), FAKE_DIVERGE(p_2417->global_1_offset, get_global_id(1), 10))) >= p_72) & l_746), 6)), 65526UL, 2UL)).yzwxzxywzxxwzzxz)).odd)).s74, ((VECTOR(uint16_t, 2))(65535UL))))).odd)) == p_2417->g_319) != (*l_549)))))
            { /* block id: 419 */
                uint64_t l_752 = 18446744073709551607UL;
                int32_t l_768 = 0x4593697FL;
                int32_t l_779 = 0x5D4D2EB7L;
                VECTOR(uint64_t, 2) l_780 = (VECTOR(uint64_t, 2))(0UL, 0xEBFCBA550DBCD00AL);
                int32_t *l_786[1];
                int32_t ***l_800 = &l_564;
                VECTOR(uint8_t, 4) l_812 = (VECTOR(uint8_t, 4))(0x2CL, (VECTOR(uint8_t, 2))(0x2CL, 6UL), 6UL);
                int i;
                for (i = 0; i < 1; i++)
                    l_786[i] = &l_779;
                for (p_2417->g_428 = 0; (p_2417->g_428 != 45); p_2417->g_428++)
                { /* block id: 422 */
                    int8_t l_751 = 0L;
                    if (((((l_751 |= 0x1A4ADD23L) | 5L) == 8UL) , l_752))
                    { /* block id: 424 */
                        p_2417->g_753 = p_2417->g_753;
                    }
                    else
                    { /* block id: 426 */
                        int8_t *l_767[1];
                        int32_t l_778[5];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_767[i] = (void*)0;
                        for (i = 0; i < 5; i++)
                            l_778[i] = 0x37E4CE3CL;
                        atomic_add(&p_2417->g_atomic_reduction[get_linear_group_id()], ((((*l_748) = ((safe_rshift_func_int8_t_s_u(p_71, (0x01E6BAFFFA893AFCL != (((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x770472E8L, (-6L))).yxyxxyxy, ((VECTOR(int32_t, 16))(p_2417->g_757.yxwyxyxxxyxywwyw)).lo, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((l_779 = (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((+((((*l_548) = (l_768 = ((VECTOR(int8_t, 4))(l_766.wyyw)).x)) >= ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0L, 0L)))), 0x2AL, 0x5EL)).z) <= 0xFE87252CCE60E7CBL)) , p_72) & ((l_578 | GROUP_DIVERGE(1, 1)) , (safe_lshift_func_uint16_t_u_s(((*l_719) ^= l_751), 10)))), 0x537FA946989BF56DL)) <= GROUP_DIVERGE(2, 1)), ((((safe_mod_func_int32_t_s_s((p_73 || (p_2417->g_774 = ((VECTOR(uint16_t, 2))(p_2417->g_773.yy)).odd)), (safe_lshift_func_int16_t_s_s((p_73 ^ p_2417->g_777[5][0]), 14)))) , (void*)0) == (void*)0) ^ GROUP_DIVERGE(1, 1)))) & 2L), l_778[0])), (-5L)))) <= l_752), ((VECTOR(int32_t, 4))(0x73647405L)), 0L, (-6L), 0x0A4E0CF7L)).s2132013361112631, ((VECTOR(int32_t, 16))(3L))))).even))).s5702557406267131)), ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(1L))))).se & l_778[0])))) , 0x2C71L)) < p_73) < FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_2417->v_collective += p_2417->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        (*l_564) = (*l_564);
                        l_779 = (l_707.s4 ^ ((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 16))(l_780.xxxxxxxxxxxxyxyy)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_2417->g_781.xyyxxzwz)).s32)).xyyxxyyyyxyxyyxx))).s2);
                    }
                }
                for (p_2417->g_319 = 0; (p_2417->g_319 > 26); p_2417->g_319++)
                { /* block id: 440 */
                    int32_t *l_787 = &l_779;
                    for (l_554 = 0; (l_554 != 10); l_554 = safe_add_func_uint64_t_u_u(l_554, 8))
                    { /* block id: 443 */
                        l_786[0] = &l_768;
                    }
                    l_787 = p_74;
                    (**l_731) = p_74;
                }
                for (l_554 = 28; (l_554 <= 25); l_554 = safe_sub_func_uint32_t_u_u(l_554, 9))
                { /* block id: 451 */
                    int64_t l_811 = (-1L);
                    if ((safe_rshift_func_int16_t_s_u((l_722 <= l_707.s7), 4)))
                    { /* block id: 452 */
                        (*l_547) &= (l_792 = 0L);
                    }
                    else
                    { /* block id: 455 */
                        uint64_t *l_793 = (void*)0;
                        int32_t l_794[9] = {0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL,0x277F850DL};
                        int32_t ****l_801 = (void*)0;
                        int32_t ****l_802 = &l_800;
                        int32_t *l_810 = &l_744;
                        int i;
                        (*l_546) = (((VECTOR(int32_t, 16))(0L, (-4L), (-1L), 0x0872A372L, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((*l_810) = ((((*l_559) &= (l_795 = (((**l_567) = 0x6AB06750FD09A0FAL) | (l_794[0] = 0UL)))) != 1UL) > (((void*)0 == &p_2417->g_477) | (p_73 != (safe_add_func_uint64_t_u_u((((*l_802) = l_800) != (void*)0), ((safe_add_func_uint8_t_u_u(((p_2417->g_517++) ^ (((+(0x59CFD178L <= 0x5A3043AEL)) || 0x5436L) >= l_809[8])), p_2417->g_781.x)) != (-1L)))))))), 3L, ((VECTOR(int32_t, 2))((-1L))), (-1L), ((VECTOR(int32_t, 2))(0x6ED130A2L)), 0x277F0A1CL, ((VECTOR(int32_t, 4))((-7L))), (-1L), ((VECTOR(int32_t, 2))(1L)), 0x2BEAFD31L)).s92)).yxxy)).ywwzwwyxxzxxwzxx, ((VECTOR(int32_t, 16))(0x47B04B23L))))).s6e42, ((VECTOR(int32_t, 4))(9L))))).wzxzwzxxwyzzwwyz))).s4184, ((VECTOR(int32_t, 4))(4L)), ((VECTOR(int32_t, 4))(0x78B09851L))))), p_2417->g_337, l_811, ((VECTOR(int32_t, 4))(0x4394A314L)), (-8L), 0x5021CB37L)).s4 , (*l_546));
                        (*l_549) |= (p_71 | ((VECTOR(uint8_t, 4))(l_812.zwzx)).y);
                    }
                    return p_2417->g_391[3][0][1];
                }
                (*p_2417->g_509) |= 0x2741F4B1L;
            }
            else
            { /* block id: 469 */
                VECTOR(uint8_t, 8) l_814 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x16L), 0x16L), 0x16L, 0UL, 0x16L);
                int16_t l_845 = 0x0A1DL;
                uint8_t l_877 = 0xBDL;
                int32_t l_898 = 0x00759AFCL;
                VECTOR(int16_t, 4) l_921 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
                VECTOR(int16_t, 16) l_923 = (VECTOR(int16_t, 16))(0x7939L, (VECTOR(int16_t, 4))(0x7939L, (VECTOR(int16_t, 2))(0x7939L, 0x6494L), 0x6494L), 0x6494L, 0x7939L, 0x6494L, (VECTOR(int16_t, 2))(0x7939L, 0x6494L), (VECTOR(int16_t, 2))(0x7939L, 0x6494L), 0x7939L, 0x6494L, 0x7939L, 0x6494L);
                int i;
                if ((((((l_722 == (&p_2417->g_723 == l_724[3][0])) > ((VECTOR(int64_t, 8))(5L, 0x092949F91BC3E7B0L, ((VECTOR(int64_t, 2))(p_2417->g_813.s4e)), 0x5D21167F32377879L, 0x52D20C91C3C74415L, 0x679A7B6A0C5FFF84L, 0x202BACFBB19083FAL)).s5) || (p_71 & p_72)) , (((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(0UL, 0x6BL)).yxxx, ((VECTOR(uint8_t, 8))(l_814.s31244573)).even))))), ((VECTOR(uint8_t, 2))(p_2417->g_815.wz)).xxxy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((*l_559) |= (FAKE_DIVERGE(p_2417->group_2_offset, get_group_id(2), 10) ^ ((VECTOR(int16_t, 8))(l_816.s1e5973f7)).s6)), ((*l_559) = ((((safe_mul_func_uint16_t_u_u(((*l_719) = ((VECTOR(uint16_t, 8))(l_819.yxxyxxxy)).s1), (((safe_mul_func_uint16_t_u_u(((0x67B4DC09ABB2A43CL & p_73) != p_72), (&l_549 != &p_74))) && 9UL) , 1UL))) > l_822) == p_2417->g_404[6]) | p_2417->g_510.sf)), l_823, l_707.s2, FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10), 0x2BL, 0x7EL, p_72, 0UL, l_707.s7, (*l_546), ((VECTOR(uint8_t, 2))(0xAAL)), 246UL, 1UL, 253UL)).s5d, ((VECTOR(uint8_t, 2))(249UL))))).yxyy))))).xzyyxyxzwxzzzyzw, ((VECTOR(uint8_t, 16))(0x59L))))), ((VECTOR(uint8_t, 16))(0xF0L)), ((VECTOR(uint8_t, 16))(255UL))))).s0 != 0x84L)) & p_2417->g_7[2]))
                { /* block id: 473 */
                    int8_t l_834 = 2L;
                    int i, j;
                    (*l_564) = (*p_2417->g_355);
                    for (l_795 = 0; (l_795 < (-2)); l_795 = safe_sub_func_uint64_t_u_u(l_795, 9))
                    { /* block id: 477 */
                        return p_73;
                    }
                    for (l_744 = 0; (l_744 == 23); l_744 = safe_add_func_uint8_t_u_u(l_744, 1))
                    { /* block id: 482 */
                        (*l_548) = (safe_sub_func_uint32_t_u_u(2UL, 0UL));
                        (**l_731) = (void*)0;
                    }
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_2417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[(safe_mod_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(18446744073709551611UL, (*l_552), (safe_div_func_int16_t_s_s(((p_71 = l_834) || ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_835.s55135702)).lo)).zzyxzzxy)), ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(0x064AL, 0x4908L)).yyyy))).xzxzwxzz))).s05)), (int16_t)(safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((p_72 != (((*l_547) = ((safe_lshift_func_uint8_t_u_u((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_842.xzzy)).zwyxwxzx)).s5 == (safe_sub_func_int16_t_s_s(p_71, (p_73 = 0x73A5L)))), 3)) == (((l_845 , (((*l_566) = (safe_div_func_uint32_t_u_u((safe_add_func_int64_t_s_s(((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(p_2417->g_850.xzzzzxyw)).even, ((VECTOR(uint32_t, 2))(p_2417->g_851.s28)).xyxx))).xzwyywzz)).s2 , (safe_div_func_uint32_t_u_u(p_71, (safe_sub_func_uint8_t_u_u((((void*)0 != &p_2417->g_337) < p_72), l_856))))) , (-7L)), 0x87ACEA2DAE7AC128L)), p_71))) != p_71)) && p_72) == l_845))) ^ GROUP_DIVERGE(0, 1))), p_2417->g_comm_values[p_2417->tid])) > (*l_549)) == p_2417->g_481.s4), p_2417->g_851.s8))))).odd), p_72)), 0UL, 2UL, 18446744073709551615UL, l_814.s0, ((VECTOR(uint64_t, 2))(9UL)), 0xB79D7F3A6DFAC3E2L, ((VECTOR(uint64_t, 2))(0x21557C84EB8D0070L)), 0x87828049C501ACA4L, ((VECTOR(uint64_t, 2))(0xFA9D206FAA7483A6L)), 18446744073709551615UL)).odd)).lo, (uint64_t)l_834))).y, 18446744073709551610UL)) , (*l_547)) && 0x033AL), 10))][(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]));
                }
                else
                { /* block id: 493 */
                    int32_t *l_874 = (void*)0;
                    int32_t **l_873[6][6][4] = {{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}},{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}},{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}},{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}},{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}},{{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874},{&l_874,&l_874,&l_874,&l_874}}};
                    int32_t ***l_875 = &l_873[3][3][2];
                    int8_t *l_876[8] = {&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722,&l_722};
                    int32_t l_884 = 0x3EF09272L;
                    uint8_t **l_897 = &l_559;
                    VECTOR(int8_t, 8) l_899 = (VECTOR(int8_t, 8))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, (-7L)), (-7L)), (-7L), 0x28L, (-7L));
                    int i, j, k;
                    (*l_546) = (safe_rshift_func_int8_t_s_s((((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65535UL, 65535UL, 5UL, 0xF333L, 0xAD08L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_859.wz)))), 0UL, (((safe_mod_func_int8_t_s_s(((void*)0 != l_862[0][4]), (l_814.s3 | (safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) || (((safe_mul_func_int64_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_867.xxxy)))).y , (safe_mod_func_int8_t_s_s((l_877 = (p_2417->g_870 != ((*l_875) = l_873[4][0][0]))), p_73))), (p_72 , ((void*)0 == (*p_2417->g_725))))) != 0UL) || l_814.s7)), p_71))))) , (*l_564)) == (void*)0), 0x90D0L, 0x46A4L, 0UL, 0UL, 0x332FL, 65535UL, 1UL)).s76)).yyxyxyyx, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 8))(65535UL))))).s1 != FAKE_DIVERGE(p_2417->global_1_offset, get_global_id(1), 10)), 2));
                    l_792 &= ((safe_div_func_int64_t_s_s((((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((p_73 ^ 0L), 12)), ((l_884 & ((*l_545) = l_884)) != 7L))) <= ((*l_559) = (~(((((((safe_lshift_func_int16_t_s_s(l_814.s3, ((((((((safe_div_func_uint16_t_u_u(((p_2417->g_813.sf || ((VECTOR(uint8_t, 4))(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_2417->g_891.sc5b31194)), ((p_71 || (*l_548)) || p_2417->g_comm_values[p_2417->tid]), l_877, ((VECTOR(uint8_t, 4))(0xD4L)), 0xD9L, 0x19L)).lo, ((VECTOR(uint8_t, 8))(0xBFL))))).s2, 0x0EL)) < l_877), 0x05L, 246UL, 0xF1L)).x) > p_71), p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))])) || p_71) || 0x22L) >= p_71) < p_2417->g_25[5][1][4]) , 18446744073709551610UL) | p_71) != p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]))) || 0x3F3AL) ^ l_892) <= p_2417->g_7[1]) , 65532UL) != p_2417->g_434[1]) > 0UL)))) <= 3L), p_71)) < l_795);
                    if (((void*)0 == l_893))
                    { /* block id: 500 */
                        l_898 = (l_896 == l_897);
                    }
                    else
                    { /* block id: 502 */
                        int32_t *l_900 = &p_2417->g_777[0][1];
                        int32_t **l_901 = &l_900;
                        (*l_549) |= (((VECTOR(int8_t, 16))(l_899.s3230440225376763)).sa & (&p_2417->g_777[6][1] != ((*l_901) = l_900)));
                        (*l_548) &= ((l_859.y , ((p_73 , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x77L, ((((void*)0 != l_908) <= (safe_lshift_func_int8_t_s_s(l_814.s0, (p_73 == 0x70L)))) != (***p_2417->g_725)))), p_2417->g_510.sd)), l_899.s3)) | 5L)) <= l_899.s1)) , (*p_2417->g_509));
                    }
                    if (p_71)
                        break;
                }
                (*l_552) = (0x6EL ^ (safe_div_func_int64_t_s_s(p_71, (safe_mul_func_int16_t_s_s((1L && 3L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(0L, 0L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))((GROUP_DIVERGE(2, 1) && (safe_lshift_func_uint8_t_u_u(l_809[8], ((VECTOR(uint8_t, 2))(250UL, 255UL)).hi))), l_917[0][1][6], ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_918, ((VECTOR(int16_t, 2))(l_919.yx)), 0x6D3AL)).lo, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(l_792, ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(0x116DL, ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))(l_920.yyyy)), ((VECTOR(int16_t, 16))(l_921.wywwzxwzxwzzzxyx)).sefed))), 0x7112L, 0x1F19L, 0x6DE7L)).s22, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((-1L), (-1L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x646CL, (-1L))).xyxxxxxy)), ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(l_922.s363f2610)).lo, ((VECTOR(int16_t, 4))(0x3DF4L, 0x7BE6L, 1L, 0x1A8BL)), ((VECTOR(int16_t, 4))(l_923.s7e28))))).xywyxxzx)).s73, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3088L, (-1L))).xyyy)).even))).yxxy, ((VECTOR(int16_t, 2))((-8L), 0x661BL)).xyxy))).z, (safe_sub_func_uint8_t_u_u((l_926 != (void*)0), p_73)), ((VECTOR(int16_t, 2))(0x0E8DL)), (-1L), 0x7FB4L)).sc034)))).zwzzwzzz)).lo))))).lo))), 0x53E1L)), ((VECTOR(int16_t, 4))(0x66A4L))))).xwwwzwxz)).s5620314043157261)).s47fd)).even))), ((VECTOR(int16_t, 8))(0x0617L)), 1L, (-1L), (-5L), 0x2246L)).sa247, ((VECTOR(int16_t, 4))((-4L))), ((VECTOR(int16_t, 4))(0L))))), 8L, (-5L), p_73, ((VECTOR(int16_t, 8))(0x592CL)), 0L)).sfd78, ((VECTOR(int16_t, 4))(4L))))).wxzwwyywzyywwyyy)).s7e, ((VECTOR(int16_t, 2))((-4L)))))).yxyx)).y)))));
            }
        }
        else
        { /* block id: 511 */
            int8_t l_930 = (-4L);
            int32_t l_950 = 0L;
            VECTOR(int32_t, 16) l_953 = (VECTOR(int32_t, 16))(0x1AE62BEAL, (VECTOR(int32_t, 4))(0x1AE62BEAL, (VECTOR(int32_t, 2))(0x1AE62BEAL, (-9L)), (-9L)), (-9L), 0x1AE62BEAL, (-9L), (VECTOR(int32_t, 2))(0x1AE62BEAL, (-9L)), (VECTOR(int32_t, 2))(0x1AE62BEAL, (-9L)), 0x1AE62BEAL, (-9L), 0x1AE62BEAL, (-9L));
            VECTOR(uint32_t, 16) l_958 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967290UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967290UL, 4294967295UL), 4294967290UL, 4294967295UL, 4294967290UL, 4294967295UL);
            int i;
            for (p_2417->g_334 = (-16); (p_2417->g_334 == 29); p_2417->g_334++)
            { /* block id: 514 */
                int8_t l_931[6][3][4] = {{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}},{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}},{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}},{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}},{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}},{{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L},{0x72L,0x72L,0x72L,0x72L}}};
                VECTOR(int32_t, 16) l_952 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 4L), 4L), 4L, (-10L), 4L, (VECTOR(int32_t, 2))((-10L), 4L), (VECTOR(int32_t, 2))((-10L), 4L), (-10L), 4L, (-10L), 4L);
                VECTOR(uint32_t, 8) l_959 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 9UL), 9UL), 9UL, 9UL, 9UL);
                int8_t *l_972 = &l_930;
                int16_t *l_974[6][3][9] = {{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}},{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}},{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}},{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}},{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}},{{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]},{(void*)0,&p_2417->g_25[5][4][2],(void*)0,(void*)0,&p_2417->g_25[5][1][3],(void*)0,(void*)0,(void*)0,&p_2417->g_25[5][4][2]}}};
                int i, j, k;
                l_930 = (*p_2417->g_509);
                (*l_548) &= (l_931[3][1][1] | (((VECTOR(uint64_t, 2))(1UL, 0x4A86AC9C3055773CL)).odd >= ((p_2417->g_25[5][4][2] = ((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((((VECTOR(int64_t, 2))(0x217E96EC11EF7052L, 0x754087E5C3079939L)).lo ^ l_809[8]), 65535UL)) & (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((((((*l_719) = ((VECTOR(uint16_t, 16))(l_944.s1020332534146254)).sf) < (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_2417->g_945.xxyxyxyyyyxxxyxx)).s6fc3)).w < ((VECTOR(uint32_t, 8))(p_2417->g_946.xxxyxxxx)).s6)) || (l_950 = (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_949.s75244657)).s72)).lo, 1UL)))) , ((l_931[0][0][2] , 0L) <= (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_951.sbb3bc705a14a8f40)).s3d)).xyxy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_952.sf7fe)).xxzzzzzy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(l_953.sf1)).yyyxyyyx, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_954.sce44a4fb)), (int32_t)(((*l_559) = (safe_mul_func_int8_t_s_s((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(l_957.yxyxxyyx)).s6467007701371336, ((VECTOR(uint32_t, 4))(l_958.sa505)).yzywzxzzxzywywzy))).sc005, ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(4294967289UL, 0xF4A7D83CL)).xyyyyxyxxyyyxyyy, ((VECTOR(uint32_t, 2))(l_959.s61)).yyxyyyyyyyyxyxyy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(0xF6184A62L, (((~(***p_2417->g_725)) >= ((safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s((((*l_972) ^= (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_965.yy)).even, (safe_mul_func_uint8_t_u_u(((((-3L) & (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_809[8], p_72)), p_72))) < 0x7259D7CAL) > l_959.s5), p_2417->g_851.s6))))) , 0x0EL), 252UL)))) || GROUP_DIVERGE(2, 1))) , 0UL), 4294967286UL, ((VECTOR(uint32_t, 4))(0x068BF22EL)), 0x741B6288L, 1UL, p_73, 3UL, p_71, l_973[0][0], ((VECTOR(uint32_t, 2))(0xBD4ED4C8L)), 2UL)).hi, ((VECTOR(uint32_t, 8))(0x1629DA3EL))))).s0112135031253011, ((VECTOR(uint32_t, 16))(0xDA86C844L))))).s13)).yyxyxyyxyyyyyyxy))).sa539))), ((VECTOR(uint32_t, 2))(4294967295UL)), 0x4039D0A5L, 4294967295UL)).s5 & p_72), (*l_546)))) > p_2417->g_25[3][0][6])))), ((VECTOR(int32_t, 8))(0x26E6BECFL)))))))).s4137356700604442, (int32_t)l_859.y))).s8b)), ((VECTOR(int32_t, 2))(0L))))))), ((VECTOR(int32_t, 4))((-1L))), 1L, 0x1DB338E6L)), ((VECTOR(int32_t, 8))((-9L))))))))).hi))))).lo, ((VECTOR(int32_t, 2))(1L))))).xxxyyxxy)).s1432453441005027)).s9 , 0x091B7559514309DCL))), p_2417->g_777[7][0])), FAKE_DIVERGE(p_2417->local_0_offset, get_local_id(0), 10)))), 0x50102505L)), p_2417->g_7[2])) == l_859.z), l_722)) != p_71)) >= p_72)));
            }
            for (p_73 = 0; (p_73 >= 11); p_73 = safe_add_func_int8_t_s_s(p_73, 9))
            { /* block id: 525 */
                (*l_552) &= l_859.w;
            }
            (*l_549) |= (safe_add_func_uint8_t_u_u(p_2417->g_979, (p_2417->g_417 = ((l_950 <= (p_72 && (l_578 | ((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(0UL, 0xC056B92409514866L)).yyxyyxyxxxyxxxxy, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(9UL, 0x71837E5B88AC4B76L)), 0x7810A31D5CBE31FDL, 0x59E10755F5485F60L)).even)).yyxyxxyxyxxyyxyx))).s5))) , (&p_2417->g_725 == (void*)0)))));
            if (l_980)
                break;
        }
    }
    return p_2417->g_774;
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_307 p_2417->g_308 p_2417->g_7 p_2417->g_330 p_2417->g_22 p_2417->l_comm_values p_2417->g_43 p_2417->g_355 p_2417->g_356 p_2417->g_19 p_2417->g_23 p_2417->g_337 p_2417->g_396 p_2417->g_391 p_2417->g_25 p_2417->g_434 p_2417->g_476 p_2417->g_438 p_2417->g_6 p_2417->g_409 p_2417->g_496 p_2417->g_404 p_2417->g_334 p_2417->g_509 p_2417->g_319 p_2417->g_510 p_2417->g_537 p_2417->g_542
 * writes: p_2417->g_308 p_2417->g_319 p_2417->g_334 p_2417->g_337 p_2417->l_comm_values p_2417->g_356 p_2417->g_330 p_2417->g_396 p_2417->g_428 p_2417->g_434 p_2417->g_517 p_2417->g_537 p_2417->g_543
 */
int16_t  func_76(int32_t * p_77, int16_t * p_78, struct S0 * p_2417)
{ /* block id: 20 */
    uint8_t l_306[3];
    VECTOR(int32_t, 16) l_511 = (VECTOR(int32_t, 16))(0x6C79DDF9L, (VECTOR(int32_t, 4))(0x6C79DDF9L, (VECTOR(int32_t, 2))(0x6C79DDF9L, 0x0160D09FL), 0x0160D09FL), 0x0160D09FL, 0x6C79DDF9L, 0x0160D09FL, (VECTOR(int32_t, 2))(0x6C79DDF9L, 0x0160D09FL), (VECTOR(int32_t, 2))(0x6C79DDF9L, 0x0160D09FL), 0x6C79DDF9L, 0x0160D09FL, 0x6C79DDF9L, 0x0160D09FL);
    uint32_t l_535[10] = {0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L,0x8A7CE6A2L};
    int8_t *l_536[8][2] = {{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337},{&p_2417->g_337,&p_2417->g_337}};
    int64_t **l_541 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_306[i] = 2UL;
    if ((atomic_inc(&p_2417->g_atomic_input[4 * get_linear_group_id() + 2]) == 6))
    { /* block id: 22 */
        int32_t l_80 = 1L;
        int32_t l_102 = 0x4A90243FL;
        VECTOR(int32_t, 16) l_107 = (VECTOR(int32_t, 16))(0x40DFEC3DL, (VECTOR(int32_t, 4))(0x40DFEC3DL, (VECTOR(int32_t, 2))(0x40DFEC3DL, 0x2AF734E6L), 0x2AF734E6L), 0x2AF734E6L, 0x40DFEC3DL, 0x2AF734E6L, (VECTOR(int32_t, 2))(0x40DFEC3DL, 0x2AF734E6L), (VECTOR(int32_t, 2))(0x40DFEC3DL, 0x2AF734E6L), 0x40DFEC3DL, 0x2AF734E6L, 0x40DFEC3DL, 0x2AF734E6L);
        int32_t *l_304 = (void*)0;
        int32_t *l_305 = &l_102;
        int i;
        for (l_80 = 0; (l_80 <= (-4)); l_80--)
        { /* block id: 25 */
            VECTOR(int32_t, 16) l_83 = (VECTOR(int32_t, 16))(0x7B072C46L, (VECTOR(int32_t, 4))(0x7B072C46L, (VECTOR(int32_t, 2))(0x7B072C46L, 0x6C4368ECL), 0x6C4368ECL), 0x6C4368ECL, 0x7B072C46L, 0x6C4368ECL, (VECTOR(int32_t, 2))(0x7B072C46L, 0x6C4368ECL), (VECTOR(int32_t, 2))(0x7B072C46L, 0x6C4368ECL), 0x7B072C46L, 0x6C4368ECL, 0x7B072C46L, 0x6C4368ECL);
            int32_t l_84[5][6] = {{3L,0x32D6F416L,0x32D6F416L,3L,3L,0x32D6F416L},{3L,0x32D6F416L,0x32D6F416L,3L,3L,0x32D6F416L},{3L,0x32D6F416L,0x32D6F416L,3L,3L,0x32D6F416L},{3L,0x32D6F416L,0x32D6F416L,3L,3L,0x32D6F416L},{3L,0x32D6F416L,0x32D6F416L,3L,3L,0x32D6F416L}};
            VECTOR(int32_t, 16) l_85 = (VECTOR(int32_t, 16))(0x6470AD0CL, (VECTOR(int32_t, 4))(0x6470AD0CL, (VECTOR(int32_t, 2))(0x6470AD0CL, 1L), 1L), 1L, 0x6470AD0CL, 1L, (VECTOR(int32_t, 2))(0x6470AD0CL, 1L), (VECTOR(int32_t, 2))(0x6470AD0CL, 1L), 0x6470AD0CL, 1L, 0x6470AD0CL, 1L);
            VECTOR(int32_t, 4) l_86 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x2F2E2092L), 0x2F2E2092L);
            VECTOR(int32_t, 4) l_87 = (VECTOR(int32_t, 4))(0x25C8CE6CL, (VECTOR(int32_t, 2))(0x25C8CE6CL, 0x21085DA1L), 0x21085DA1L);
            int32_t l_88 = 0x0341E9F4L;
            uint16_t l_89 = 65535UL;
            int64_t l_92 = 0x7F862FE7C9D89B7AL;
            uint8_t l_93 = 7UL;
            int64_t l_94 = 5L;
            int32_t l_95[1][10][3] = {{{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL},{1L,(-2L),0x264ADD8BL}}};
            uint8_t l_96 = 0x8FL;
            int32_t l_97 = 0x31DFB687L;
            int32_t l_98 = 0x4C279608L;
            uint32_t l_99 = 0xC4FD0C6BL;
            uint64_t l_100 = 18446744073709551614UL;
            int16_t l_101[1][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_101[i][j] = 0x35E4L;
            }
            l_101[0][0] = (l_100 = ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 4))(l_83.s64c7)), l_84[2][5], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_85.s616adea61e07d3a0)).lo, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_86.wzxy))))).wxzwyxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x578F30EDL, 2L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0L, 0x0A455C58L)), ((VECTOR(int32_t, 8))(3L, ((VECTOR(int32_t, 2))(l_87.xw)), 1L, (l_88 = (-1L)), 0x2845225CL, 0x3BB7457EL, 0x073F6369L)).s57))), 0L, (l_96 = ((l_84[2][5] = (l_94 = (((l_89--) , l_92) , l_93))) , l_95[0][5][2])), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x2CAA49FFL, l_97, 3L, (-1L))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-6L), 0x5A8C8944L)).xxyy)).even))))), (-7L), 0x6C2C3437L)), (l_99 = (l_98 , 0x680B3DF5L)), ((VECTOR(int32_t, 2))((-1L))), 0x09EC31A1L, 0x0F678E9AL, 6L)).sa18e)).xwywwzzz))), ((VECTOR(int32_t, 8))(0x6AA53E6AL))))).s37, ((VECTOR(int32_t, 2))(9L)), ((VECTOR(int32_t, 2))(0L))))).yyxxyyyyxxxyxyxx)).sa5ef)), 0x27D4F983L, ((VECTOR(int32_t, 2))((-2L))), (-6L), 0x4B42E234L, 0x49FB339EL)).sc4, ((VECTOR(int32_t, 2))(0x06111E29L))))).odd);
        }
        if (l_102)
        { /* block id: 35 */
            int32_t l_103[6][8][5] = {{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}},{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}},{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}},{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}},{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}},{{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL},{(-3L),0x619E33AEL,0x045E1727L,0L,0x393CCABFL}}};
            int i, j, k;
            for (l_103[3][6][3] = 0; (l_103[3][6][3] > 25); ++l_103[3][6][3])
            { /* block id: 38 */
                int32_t l_106 = 1L;
                l_80 ^= (-4L);
                l_102 &= l_106;
            }
        }
        else
        { /* block id: 42 */
            l_80 |= (-1L);
        }
        if (((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 0x096A6C0AL)).yyxyyyyy)).s72)).xxxxyyyxxxyxxyxy)).s48)).xxxyxyxyxxyxxxyy, ((VECTOR(int32_t, 2))(0x24836203L, 7L)).xyxxyyyyyyxyyxxy, ((VECTOR(int32_t, 4))(l_107.sba9f)).yxwxyzwyxxxzxyww))).s4)
        { /* block id: 45 */
            int32_t l_108[1][7][6] = {{{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L},{(-7L),1L,1L,0x7F8201C6L,1L,0x7F8201C6L}}};
            int64_t l_109[2][10][10] = {{{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L}},{{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L},{0x5819CC642A9DD399L,0x0C0EF68449CD76D8L,0x0C0EF68449CD76D8L,0x5819CC642A9DD399L,(-2L),1L,1L,(-2L),0x5819CC642A9DD399L,0x0C0EF68449CD76D8L}}};
            uint64_t l_110 = 4UL;
            int8_t l_195 = (-5L);
            int i, j, k;
            if (((l_108[0][4][4] , (l_109[1][0][0] , 0x5A51C166L)) , (l_107.sc = l_110)))
            { /* block id: 47 */
                int32_t l_111[7][6] = {{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L},{(-1L),0x183F0AB7L,0x691CFF77L,(-1L),0x691CFF77L,0x183F0AB7L}};
                int i, j;
                for (l_111[0][2] = (-25); (l_111[0][2] == (-6)); l_111[0][2] = safe_add_func_int32_t_s_s(l_111[0][2], 1))
                { /* block id: 50 */
                    int32_t l_114[8] = {8L,8L,8L,8L,8L,8L,8L,8L};
                    int16_t l_133[10][8][3] = {{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}},{{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)},{0x1659L,0x1659L,(-10L)}}};
                    int64_t l_134[3];
                    uint32_t l_135 = 0xC1190EECL;
                    int32_t l_138 = 0x76EE530DL;
                    int32_t *l_137 = &l_138;
                    int32_t **l_136 = &l_137;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_134[i] = (-1L);
                    for (l_114[6] = 0; (l_114[6] != 3); l_114[6] = safe_add_func_int16_t_s_s(l_114[6], 6))
                    { /* block id: 53 */
                        uint64_t l_117 = 9UL;
                        int32_t l_120 = (-1L);
                        VECTOR(int32_t, 2) l_121 = (VECTOR(int32_t, 2))((-8L), 0x3908BB1CL);
                        int32_t *l_122 = &l_120;
                        int32_t *l_123 = (void*)0;
                        int32_t **l_124 = &l_123;
                        int32_t **l_125[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_125[i] = &l_122;
                        l_117++;
                        l_121.y = (l_108[0][4][4] &= (l_120 , ((VECTOR(int32_t, 4))(l_121.yyxx)).x));
                        l_123 = l_122;
                        l_125[2] = l_124;
                    }
                    for (l_114[6] = 12; (l_114[6] <= (-30)); l_114[6]--)
                    { /* block id: 62 */
                        int8_t l_128 = 7L;
                        uint64_t l_129 = 0xCEFFE510EADCF1EFL;
                        uint64_t l_132[6] = {0x9E99429188FF261EL,0x9E99429188FF261EL,0x9E99429188FF261EL,0x9E99429188FF261EL,0x9E99429188FF261EL,0x9E99429188FF261EL};
                        int i;
                        ++l_129;
                        l_80 ^= 0x397C7D5AL;
                        l_102 ^= l_132[3];
                    }
                    l_102 ^= (l_133[2][0][1] , ((l_135 = l_134[0]) , 1L));
                    l_136 = (void*)0;
                }
                for (l_111[0][2] = 13; (l_111[0][2] < (-4)); l_111[0][2] = safe_sub_func_uint64_t_u_u(l_111[0][2], 4))
                { /* block id: 73 */
                    uint32_t l_141 = 4294967295UL;
                    int16_t l_153 = 0x3768L;
                    int32_t l_154 = 3L;
                    if (l_141)
                    { /* block id: 74 */
                        int32_t l_142 = 0L;
                        uint32_t l_143 = 0xFBBCB493L;
                        VECTOR(uint32_t, 16) l_144 = (VECTOR(uint32_t, 16))(0x0F757600L, (VECTOR(uint32_t, 4))(0x0F757600L, (VECTOR(uint32_t, 2))(0x0F757600L, 4294967295UL), 4294967295UL), 4294967295UL, 0x0F757600L, 4294967295UL, (VECTOR(uint32_t, 2))(0x0F757600L, 4294967295UL), (VECTOR(uint32_t, 2))(0x0F757600L, 4294967295UL), 0x0F757600L, 4294967295UL, 0x0F757600L, 4294967295UL);
                        VECTOR(int8_t, 16) l_147 = (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 7L), 7L), 7L, 0x66L, 7L, (VECTOR(int8_t, 2))(0x66L, 7L), (VECTOR(int8_t, 2))(0x66L, 7L), 0x66L, 7L, 0x66L, 7L);
                        int i;
                        l_108[0][6][1] &= (l_142 , l_143);
                        l_107.s1 = 1L;
                        ++l_144.s5;
                        l_108[0][2][4] = l_147.s8;
                    }
                    else
                    { /* block id: 79 */
                        uint64_t l_148 = 0xB2E43F2AAD057FE0L;
                        int8_t l_151 = 1L;
                        int16_t l_152[7][3];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_152[i][j] = (-1L);
                        }
                        --l_148;
                        l_80 = 1L;
                        l_108[0][4][5] &= (l_102 ^= l_151);
                        l_102 = (l_108[0][1][3] = l_152[5][1]);
                    }
                    l_107.s5 |= l_153;
                    if ((l_102 = l_154))
                    { /* block id: 89 */
                        int8_t l_155 = (-1L);
                        uint32_t l_156 = 1UL;
                        VECTOR(uint16_t, 8) l_159 = (VECTOR(uint16_t, 8))(0x2B3BL, (VECTOR(uint16_t, 4))(0x2B3BL, (VECTOR(uint16_t, 2))(0x2B3BL, 0UL), 0UL), 0UL, 0x2B3BL, 0UL);
                        uint64_t l_160 = 0xEB8CE4A9CA1E3233L;
                        VECTOR(int32_t, 4) l_161 = (VECTOR(int32_t, 4))(0x6F268804L, (VECTOR(int32_t, 2))(0x6F268804L, (-8L)), (-8L));
                        uint32_t l_162 = 0x6F5E02EBL;
                        int32_t *l_163 = (void*)0;
                        int32_t *l_164[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_107.sc |= ((l_160 = (l_155 , ((VECTOR(uint16_t, 8))((--l_156), 0x8F5FL, ((VECTOR(uint16_t, 4))(l_159.s2332)), 0x96DFL, 65535UL)).s2)) , ((VECTOR(int32_t, 8))(l_161.zwywzwzw)).s4);
                        l_161.w |= l_162;
                        l_164[3] = l_163;
                        l_102 &= 9L;
                    }
                    else
                    { /* block id: 96 */
                        uint8_t l_165 = 0x1FL;
                        int32_t l_166 = (-4L);
                        int32_t l_167 = (-1L);
                        VECTOR(int32_t, 8) l_168 = (VECTOR(int32_t, 8))(0x42B5266AL, (VECTOR(int32_t, 4))(0x42B5266AL, (VECTOR(int32_t, 2))(0x42B5266AL, 0x2389C7B4L), 0x2389C7B4L), 0x2389C7B4L, 0x42B5266AL, 0x2389C7B4L);
                        int8_t l_169[2];
                        uint32_t l_170 = 0UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_169[i] = (-2L);
                        l_107.sb = l_165;
                        ++l_170;
                    }
                }
                for (l_111[0][2] = 0; (l_111[0][2] < 13); ++l_111[0][2])
                { /* block id: 103 */
                    int8_t l_175 = 0x39L;
                    if (l_175)
                    { /* block id: 104 */
                        VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(0x6FAD5A6DL, (VECTOR(int32_t, 2))(0x6FAD5A6DL, 9L), 9L);
                        uint16_t l_177 = 0UL;
                        int i;
                        l_80 = ((VECTOR(int32_t, 4))(l_176.yyzy)).x;
                        l_176.x = l_177;
                    }
                    else
                    { /* block id: 107 */
                        VECTOR(int32_t, 16) l_178 = (VECTOR(int32_t, 16))(0x53ABCD41L, (VECTOR(int32_t, 4))(0x53ABCD41L, (VECTOR(int32_t, 2))(0x53ABCD41L, 1L), 1L), 1L, 0x53ABCD41L, 1L, (VECTOR(int32_t, 2))(0x53ABCD41L, 1L), (VECTOR(int32_t, 2))(0x53ABCD41L, 1L), 0x53ABCD41L, 1L, 0x53ABCD41L, 1L);
                        int8_t l_179[2];
                        uint8_t l_180 = 1UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_179[i] = 0x1DL;
                        l_107.s6 = ((VECTOR(int32_t, 4))(l_178.s777e)).x;
                        l_107.sa &= l_179[1];
                        l_180--;
                        l_107.s9 |= (l_108[0][0][3] = (-7L));
                    }
                }
            }
            else
            { /* block id: 115 */
                int32_t l_183 = (-1L);
                uint32_t l_188 = 0xAA4E5B74L;
                VECTOR(uint64_t, 4) l_191 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
                uint32_t l_192 = 0x4B7A8BAAL;
                int i;
                for (l_183 = 0; (l_183 >= (-2)); l_183 = safe_sub_func_uint64_t_u_u(l_183, 3))
                { /* block id: 118 */
                    int16_t l_186 = (-1L);
                    uint64_t l_187 = 1UL;
                    l_187 ^= l_186;
                }
                l_188--;
                l_107.sc = (((l_192 = ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0UL, 0xB818E0E8F7A8CC25L, 0xED8C7E989D174007L, ((VECTOR(uint64_t, 4))(l_191.xxxw)), 0x269E7D40DAFEC8D3L)).s27)).hi) , (l_110++)) , ((VECTOR(int32_t, 2))(0L, 5L)).hi);
            }
            l_102 = 0L;
            l_102 = l_195;
        }
        else
        { /* block id: 128 */
            uint32_t l_196 = 0UL;
            int16_t l_199 = 0x2EDDL;
            uint16_t l_200 = 1UL;
            int32_t l_201 = 0x176F25A8L;
            ++l_196;
            l_200 = (l_80 = l_199);
            if (l_201)
            { /* block id: 132 */
                VECTOR(int32_t, 16) l_202 = (VECTOR(int32_t, 16))(0x4F209D36L, (VECTOR(int32_t, 4))(0x4F209D36L, (VECTOR(int32_t, 2))(0x4F209D36L, (-2L)), (-2L)), (-2L), 0x4F209D36L, (-2L), (VECTOR(int32_t, 2))(0x4F209D36L, (-2L)), (VECTOR(int32_t, 2))(0x4F209D36L, (-2L)), 0x4F209D36L, (-2L), 0x4F209D36L, (-2L));
                VECTOR(int32_t, 8) l_203 = (VECTOR(int32_t, 8))(0x13677A51L, (VECTOR(int32_t, 4))(0x13677A51L, (VECTOR(int32_t, 2))(0x13677A51L, 0x5D7113E7L), 0x5D7113E7L), 0x5D7113E7L, 0x13677A51L, 0x5D7113E7L);
                VECTOR(int32_t, 2) l_204 = (VECTOR(int32_t, 2))(0x633435BBL, 0x102A6E8EL);
                VECTOR(int16_t, 16) l_205 = (VECTOR(int16_t, 16))(0x23B1L, (VECTOR(int16_t, 4))(0x23B1L, (VECTOR(int16_t, 2))(0x23B1L, 0x5E1AL), 0x5E1AL), 0x5E1AL, 0x23B1L, 0x5E1AL, (VECTOR(int16_t, 2))(0x23B1L, 0x5E1AL), (VECTOR(int16_t, 2))(0x23B1L, 0x5E1AL), 0x23B1L, 0x5E1AL, 0x23B1L, 0x5E1AL);
                VECTOR(int16_t, 4) l_206 = (VECTOR(int16_t, 4))(0x1F3DL, (VECTOR(int16_t, 2))(0x1F3DL, 0x2404L), 0x2404L);
                VECTOR(uint16_t, 8) l_207 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 1UL), 1UL), 1UL, 2UL, 1UL);
                VECTOR(int32_t, 4) l_208 = (VECTOR(int32_t, 4))(0x53C6F077L, (VECTOR(int32_t, 2))(0x53C6F077L, 0x766F7A08L), 0x766F7A08L);
                VECTOR(int32_t, 8) l_209 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x48D345C2L), 0x48D345C2L), 0x48D345C2L, 0L, 0x48D345C2L);
                VECTOR(int32_t, 16) l_210 = (VECTOR(int32_t, 16))(0x3FFE8253L, (VECTOR(int32_t, 4))(0x3FFE8253L, (VECTOR(int32_t, 2))(0x3FFE8253L, 5L), 5L), 5L, 0x3FFE8253L, 5L, (VECTOR(int32_t, 2))(0x3FFE8253L, 5L), (VECTOR(int32_t, 2))(0x3FFE8253L, 5L), 0x3FFE8253L, 5L, 0x3FFE8253L, 5L);
                uint32_t l_211 = 0xF51BFF64L;
                uint64_t l_212 = 4UL;
                uint16_t l_213 = 0x92E8L;
                int32_t l_214 = 0x0E30AD3EL;
                int i;
                l_102 ^= ((VECTOR(int32_t, 16))(l_202.scbae7f329c724748)).se;
                l_201 = ((VECTOR(int32_t, 16))(0L, 1L, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0L, 0x53ECBD2FL)).yyyxyxxx, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(l_203.s0040)).zzwyxyxz, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_204.xxyy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x306D4112L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(l_205.s6d)).xyxy))).xwwxyxxz))).s34, ((VECTOR(int16_t, 8))(l_206.yxzzzzyz)).s10))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(2UL, 65526UL)), ((VECTOR(uint16_t, 4))(l_207.s3714)), 1UL, 0xCA4CL)).s65))), 0x0F8A1C53L, 0x604C85C1L, 0x208B2242L, 0L, 0x3ACF8998L)).s6, ((VECTOR(int32_t, 8))(l_208.yzwwxwxy)), 0x6B12BC84L, ((VECTOR(int32_t, 4))(l_209.s0366)), 0x21FC0D30L, 0L)).s50d2))).wxxxzwzxzzwzyzyy)), ((VECTOR(int32_t, 2))(l_210.s93)).yxxyyxyyxxxyyxyy))).lo))), ((VECTOR(int32_t, 4))(0x12F68C6CL, 6L, (-1L), (-10L))).yxzzzwxy))), 4L, 0x3B951112L, l_211, (l_209.s7 = 0x79160525L), 0x671EDED3L, 0x72699EA8L)).sd;
                l_80 = (l_212 , l_213);
                l_214 |= (l_210.s8 = 6L);
            }
            else
            { /* block id: 139 */
                int32_t l_215 = (-1L);
                for (l_215 = 0; (l_215 == (-5)); l_215--)
                { /* block id: 142 */
                    VECTOR(int32_t, 8) l_218 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x320A8510L), 0x320A8510L), 0x320A8510L, (-1L), 0x320A8510L);
                    int i;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_218.s05)).yyxyyxxy)))).s7)
                    { /* block id: 143 */
                        VECTOR(int32_t, 8) l_219 = (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x689C20EAL), 0x689C20EAL), 0x689C20EAL, (-3L), 0x689C20EAL);
                        uint8_t l_220 = 1UL;
                        int i;
                        l_107.s7 ^= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_219.s06716706)).odd, ((VECTOR(int32_t, 4))(0x3ED75555L, l_220, 0x2EA24C7BL, 7L))))).x;
                    }
                    else
                    { /* block id: 145 */
                        uint32_t l_221 = 4294967292UL;
                        int32_t *l_222 = (void*)0;
                        int64_t l_223 = (-1L);
                        int16_t l_224 = 1L;
                        VECTOR(int32_t, 4) l_225 = (VECTOR(int32_t, 4))(0x272EF4E3L, (VECTOR(int32_t, 2))(0x272EF4E3L, 0x75FD858BL), 0x75FD858BL);
                        int64_t l_226 = 8L;
                        int8_t l_227 = 0x7AL;
                        int i;
                        l_222 = (l_221 , l_222);
                        l_218.s3 = l_223;
                        l_107.sd &= (((VECTOR(int32_t, 16))((-1L), 0x651410D9L, l_224, 0x13667645L, (-1L), 0x14F7CC05L, ((VECTOR(int32_t, 4))(l_225.xxwy)), 3L, l_226, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-5L), (-1L))).yxyx)))).sd , l_227);
                    }
                }
            }
            for (l_200 = 5; (l_200 < 47); l_200 = safe_add_func_int16_t_s_s(l_200, 4))
            { /* block id: 154 */
                int8_t l_230 = (-10L);
                uint32_t l_231 = 1UL;
                int64_t l_232[7][6] = {{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L},{0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L,0x1FF62609A0F8C372L,0x0A830BBB3BF72AAFL,0x0A830BBB3BF72AAFL,0x1FF62609A0F8C372L}};
                VECTOR(int32_t, 4) l_276 = (VECTOR(int32_t, 4))(0x171DEBE7L, (VECTOR(int32_t, 2))(0x171DEBE7L, 0x4AD3666BL), 0x4AD3666BL);
                VECTOR(int32_t, 16) l_277 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L), (VECTOR(int32_t, 2))((-1L), (-7L)), (VECTOR(int32_t, 2))((-1L), (-7L)), (-1L), (-7L), (-1L), (-7L));
                int i, j;
                if ((l_230 , (l_232[0][5] = l_231)))
                { /* block id: 156 */
                    VECTOR(uint32_t, 4) l_233 = (VECTOR(uint32_t, 4))(0x6FB7C800L, (VECTOR(uint32_t, 2))(0x6FB7C800L, 4294967295UL), 4294967295UL);
                    int32_t l_234[3][9][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
                    uint64_t l_235 = 0xC0C1F5A1C232D976L;
                    VECTOR(uint32_t, 16) l_236 = (VECTOR(uint32_t, 16))(0x3AFCE1F6L, (VECTOR(uint32_t, 4))(0x3AFCE1F6L, (VECTOR(uint32_t, 2))(0x3AFCE1F6L, 0xE04991E0L), 0xE04991E0L), 0xE04991E0L, 0x3AFCE1F6L, 0xE04991E0L, (VECTOR(uint32_t, 2))(0x3AFCE1F6L, 0xE04991E0L), (VECTOR(uint32_t, 2))(0x3AFCE1F6L, 0xE04991E0L), 0x3AFCE1F6L, 0xE04991E0L, 0x3AFCE1F6L, 0xE04991E0L);
                    VECTOR(uint32_t, 8) l_237 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL);
                    uint64_t l_238[5] = {5UL,5UL,5UL,5UL,5UL};
                    int8_t l_239 = 0x43L;
                    VECTOR(uint32_t, 4) l_240 = (VECTOR(uint32_t, 4))(0xBA99FDA0L, (VECTOR(uint32_t, 2))(0xBA99FDA0L, 0x310052ACL), 0x310052ACL);
                    VECTOR(uint32_t, 16) l_241 = (VECTOR(uint32_t, 16))(0x6993E920L, (VECTOR(uint32_t, 4))(0x6993E920L, (VECTOR(uint32_t, 2))(0x6993E920L, 0x5839FD0BL), 0x5839FD0BL), 0x5839FD0BL, 0x6993E920L, 0x5839FD0BL, (VECTOR(uint32_t, 2))(0x6993E920L, 0x5839FD0BL), (VECTOR(uint32_t, 2))(0x6993E920L, 0x5839FD0BL), 0x6993E920L, 0x5839FD0BL, 0x6993E920L, 0x5839FD0BL);
                    int8_t l_242[4][1];
                    VECTOR(uint32_t, 4) l_243 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 8UL), 8UL);
                    VECTOR(uint32_t, 2) l_244 = (VECTOR(uint32_t, 2))(0UL, 0x4DD1A172L);
                    uint16_t l_245 = 0x2085L;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_242[i][j] = 0x72L;
                    }
                    l_201 &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_233.wywz)).even, ((VECTOR(uint32_t, 16))(l_234[2][1][0], l_235, 4UL, ((VECTOR(uint32_t, 4))(l_236.secaf)), ((VECTOR(uint32_t, 4))(l_237.s3425)), ((VECTOR(uint32_t, 2))(0x5F9A7D5AL, 0x853B75FDL)), (l_238[1] , l_239), 1UL, 0x70C7485AL)).s7d, ((VECTOR(uint32_t, 16))(l_240.wyyxzwzyxzzzyxxy)).se1))), ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x115227CDL, ((VECTOR(uint32_t, 2))(l_241.s5b)), 0x615E9AC7L)), (l_242[0][0] , 4294967287UL), 2UL, 0x859488B6L, 3UL)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_243.zxzx)).xyzwyxxxxyyxwzxy)).s061e, ((VECTOR(uint32_t, 2))(0x265089CDL, 0x83BA15FAL)).yyxx))), ((VECTOR(uint32_t, 8))(l_244.yxyyxxyy)), 0x69C654EAL, 0x886D6786L)).s5 , (l_107.sb = 0x66C3C61FL));
                    l_80 = ((VECTOR(int32_t, 2))((-1L), 0x14E4C939L)).even;
                    ++l_245;
                }
                else
                { /* block id: 161 */
                    int16_t l_248 = (-4L);
                    uint64_t l_249 = 0xE47FB7F7314760B1L;
                    int32_t l_251[7];
                    int32_t *l_250 = &l_251[4];
                    int32_t *l_252 = &l_251[4];
                    uint64_t l_253 = 6UL;
                    VECTOR(uint64_t, 4) l_254 = (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 18446744073709551606UL), 18446744073709551606UL);
                    VECTOR(int32_t, 16) l_255 = (VECTOR(int32_t, 16))(0x44338563L, (VECTOR(int32_t, 4))(0x44338563L, (VECTOR(int32_t, 2))(0x44338563L, (-1L)), (-1L)), (-1L), 0x44338563L, (-1L), (VECTOR(int32_t, 2))(0x44338563L, (-1L)), (VECTOR(int32_t, 2))(0x44338563L, (-1L)), 0x44338563L, (-1L), 0x44338563L, (-1L));
                    uint64_t l_256 = 18446744073709551609UL;
                    int8_t l_264 = (-5L);
                    uint8_t l_265 = 0xCDL;
                    int16_t l_266 = (-9L);
                    int i;
                    for (i = 0; i < 7; i++)
                        l_251[i] = 0x098895E4L;
                    l_252 = ((l_248 , (l_249 = 0L)) , l_250);
                    if ((l_253 , ((((VECTOR(uint64_t, 16))(l_254.ywyxwzyzwxyyzzzz)).s0 , ((VECTOR(int32_t, 8))(l_255.sa5584c7e)).s4) , l_256)))
                    { /* block id: 164 */
                        uint64_t l_257 = 18446744073709551607UL;
                        l_257--;
                    }
                    else
                    { /* block id: 166 */
                        int32_t **l_260 = (void*)0;
                        int32_t l_263 = 0x421B3FF2L;
                        int32_t *l_262 = &l_263;
                        int32_t **l_261 = &l_262;
                        l_261 = l_260;
                    }
                    l_80 = ((l_265 = l_264) , l_266);
                    for (l_264 = 0; (l_264 > 4); l_264 = safe_add_func_int32_t_s_s(l_264, 2))
                    { /* block id: 173 */
                        uint16_t l_269 = 0UL;
                        uint16_t l_272 = 65528UL;
                        uint16_t l_273 = 65527UL;
                        ++l_269;
                        (*l_252) &= l_272;
                        --l_273;
                    }
                }
                if (((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_276.yxzy)).xyyzxzzyyzwzzxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_277.s6097)))).wxzwzzwwwxwwwwxx))).sb)
                { /* block id: 179 */
                    uint64_t l_278 = 1UL;
                    int32_t *l_290 = (void*)0;
                    if ((l_277.se = l_278))
                    { /* block id: 181 */
                        int16_t **l_279 = (void*)0;
                        int16_t l_282 = 0x0748L;
                        int16_t *l_281[4][4][6] = {{{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282}},{{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282}},{{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282}},{{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282},{&l_282,&l_282,&l_282,&l_282,&l_282,&l_282}}};
                        int16_t **l_280 = &l_281[3][1][1];
                        uint64_t l_283[1][1];
                        uint64_t l_284 = 0xFC125FBF1FA647FEL;
                        uint32_t l_285 = 0UL;
                        int64_t l_286 = 0x0EF9AA07C460DB71L;
                        uint16_t l_287 = 65535UL;
                        int32_t l_288 = 0x1686E4F0L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_283[i][j] = 0x0FC767BCB52C3858L;
                        }
                        l_280 = l_279;
                        l_277.sb = (l_285 = (l_283[0][0] , l_284));
                        l_277.s1 |= (l_287 |= (l_102 = (l_107.s0 = l_286)));
                        l_277.sd = l_288;
                    }
                    else
                    { /* block id: 190 */
                        VECTOR(int32_t, 16) l_289 = (VECTOR(int32_t, 16))(0x288F0C4BL, (VECTOR(int32_t, 4))(0x288F0C4BL, (VECTOR(int32_t, 2))(0x288F0C4BL, 4L), 4L), 4L, 0x288F0C4BL, 4L, (VECTOR(int32_t, 2))(0x288F0C4BL, 4L), (VECTOR(int32_t, 2))(0x288F0C4BL, 4L), 0x288F0C4BL, 4L, 0x288F0C4BL, 4L);
                        int i;
                        l_276.w = (l_201 = ((VECTOR(int32_t, 16))(l_289.sa4a64453e614e49b)).sf);
                        l_107.s0 ^= (l_201 = (-1L));
                    }
                    l_290 = (void*)0;
                }
                else
                { /* block id: 197 */
                    int16_t l_291 = (-1L);
                    if (l_291)
                    { /* block id: 198 */
                        int8_t l_292 = 0L;
                        uint64_t l_293 = 0x4BAC0EDAEEF26658L;
                        int32_t l_296 = 0x6989D618L;
                        uint64_t l_297 = 0xC267F3CD12A0E969L;
                        int32_t l_299[9];
                        int32_t *l_298 = &l_299[6];
                        uint16_t l_300 = 0x909BL;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_299[i] = (-1L);
                        l_298 = ((l_297 &= ((l_292 , (--l_293)) , l_296)) , (void*)0);
                        l_80 = l_300;
                    }
                    else
                    { /* block id: 203 */
                        uint32_t l_301 = 0xC890D855L;
                        l_301++;
                        l_80 = 9L;
                    }
                }
            }
        }
        l_305 = l_304;
        unsigned int result = 0;
        result += l_80;
        result += l_102;
        result += l_107.sf;
        result += l_107.se;
        result += l_107.sd;
        result += l_107.sc;
        result += l_107.sb;
        result += l_107.sa;
        result += l_107.s9;
        result += l_107.s8;
        result += l_107.s7;
        result += l_107.s6;
        result += l_107.s5;
        result += l_107.s4;
        result += l_107.s3;
        result += l_107.s2;
        result += l_107.s1;
        result += l_107.s0;
        atomic_add(&p_2417->g_special_values[4 * get_linear_group_id() + 2], result);
    }
    else
    { /* block id: 211 */
        (1 + 1);
    }
    if ((l_306[0] <= 0x724DE4B2L))
    { /* block id: 214 */
        int8_t l_317 = (-2L);
        (*p_2417->g_307) = l_306[0];
        for (p_2417->g_308 = 0; (p_2417->g_308 < (-17)); --p_2417->g_308)
        { /* block id: 218 */
            int32_t *l_318 = &p_2417->g_319;
            if ((atomic_inc(&p_2417->l_atomic_input[1]) == 9))
            { /* block id: 220 */
                int32_t l_313 = 0x1A8A24A2L;
                int32_t *l_312[7][3] = {{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313},{&l_313,&l_313,&l_313}};
                int32_t **l_311 = &l_312[0][2];
                int32_t **l_314 = &l_312[1][1];
                int16_t l_315 = 1L;
                uint8_t l_316[4][7][9] = {{{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL}},{{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL}},{{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL}},{{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL},{255UL,0xFBL,0UL,0xA3L,1UL,246UL,1UL,1UL,1UL}}};
                int i, j, k;
                l_314 = l_311;
                l_316[3][5][3] ^= l_315;
                unsigned int result = 0;
                result += l_313;
                result += l_315;
                int l_316_i0, l_316_i1, l_316_i2;
                for (l_316_i0 = 0; l_316_i0 < 4; l_316_i0++) {
                    for (l_316_i1 = 0; l_316_i1 < 7; l_316_i1++) {
                        for (l_316_i2 = 0; l_316_i2 < 9; l_316_i2++) {
                            result += l_316[l_316_i0][l_316_i1][l_316_i2];
                        }
                    }
                }
                atomic_add(&p_2417->l_special_values[1], result);
            }
            else
            { /* block id: 223 */
                (1 + 1);
            }
            (*l_318) = l_317;
            return p_2417->g_7[2];
        }
    }
    else
    { /* block id: 229 */
        VECTOR(int8_t, 2) l_331 = (VECTOR(int8_t, 2))((-1L), 1L);
        VECTOR(int8_t, 16) l_332 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int8_t, 2))(0L, (-1L)), (VECTOR(int8_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        int8_t *l_333 = &p_2417->g_334;
        int8_t *l_335 = (void*)0;
        int8_t *l_336 = &p_2417->g_337;
        int32_t l_342 = 8L;
        int64_t *l_343 = (void*)0;
        int64_t *l_344 = (void*)0;
        int64_t *l_345 = (void*)0;
        int64_t *l_346 = (void*)0;
        int64_t *l_347 = (void*)0;
        int64_t *l_348 = (void*)0;
        int64_t *l_349 = (void*)0;
        int64_t *l_350 = (void*)0;
        int64_t *l_351[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_508[6];
        int32_t l_539[6][2][5] = {{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}},{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}},{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}},{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}},{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}},{{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L},{0x3084A131L,0x6538981AL,1L,0x57AE4B43L,1L}}};
        VECTOR(int32_t, 4) l_540 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3AD850BDL), 0x3AD850BDL);
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_508[i] = (-10L);
        l_508[5] ^= (safe_lshift_func_int8_t_s_s((0x4AL <= func_322(func_324(p_77, ((safe_unary_minus_func_int16_t_s((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(0xD6B44EB88B96E72EL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_2417->g_330.yy)).yyyy)), ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(18446744073709551615UL, (((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(l_331.yyxy)).hi, ((VECTOR(int8_t, 2))(l_332.s7e))))).yyyyyyyy)).s1 & ((*l_336) = ((*l_333) = l_332.s8))) , 0UL) <= ((p_2417->l_comm_values[(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))] &= (((1L <= (l_331.y , (l_331.x , (l_332.s6 , (l_342 = (((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(p_2417->g_330.y, l_306[0])) > p_2417->g_330.x), 3)) >= p_2417->g_22.x) , l_306[0])))))) ^ 0x76L) , l_306[0])) , p_2417->g_308)), ((VECTOR(uint64_t, 2))(0x19F9BF1DC84013ACL)), 0x067ACE969139DE40L, ((VECTOR(uint64_t, 4))(0x89A4E89D2B46AF86L)), p_2417->g_43, GROUP_DIVERGE(2, 1), 0x215F1D132825DC13L, 0xD4C093A4387AF10AL, ((VECTOR(uint64_t, 2))(0x7A685B01B43F70AAL)), 1UL)).sc7, (uint64_t)GROUP_DIVERGE(1, 1)))), 8UL)).s76, ((VECTOR(uint64_t, 2))(0xBC178B6B4E31191BL)), ((VECTOR(uint64_t, 2))(0xC2D2860BEA343ECAL))))))).hi != 9UL))) , l_306[2]), p_77, l_306[0], p_2417), p_2417)), 4));
        (*p_2417->g_509) ^= (&l_349 != &l_348);
        if ((((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_2417->g_510.sd049)).yyzwxyyy)).s31))).lo , (-2L)))
        { /* block id: 303 */
            uint64_t l_516 = 18446744073709551612UL;
            VECTOR(uint64_t, 4) l_518 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
            int32_t *l_534 = (void*)0;
            int32_t *l_538[10][2][4] = {{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}},{{(void*)0,(void*)0,&p_2417->g_319,(void*)0},{(void*)0,(void*)0,&p_2417->g_319,(void*)0}}};
            int i, j, k;
            l_539[0][0][0] ^= ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(l_511.s8e)).xyxxxxyyxyxyxxyy, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x7C398E31L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0D2DF5E8L, 0L)), 0x66D6BAD4L, 0x647DB1E2L)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((safe_rshift_func_int8_t_s_u(((*p_78) == (p_2417->g_537 &= ((safe_sub_func_int64_t_s_s((!((p_2417->g_517 = l_516) || 0x351EL)), ((VECTOR(uint64_t, 16))(l_518.xxwwzzzzywzyyzzx)).s0)) >= (0x4183L | ((((safe_add_func_int16_t_s_s((((l_511.s5 && ((!(FAKE_DIVERGE(p_2417->global_0_offset, get_global_id(0), 10) >= (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(l_508[5], (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(1UL, (safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_mod_func_int16_t_s_s((p_77 != l_534), l_332.s3)) > l_331.x))), 0xA35F1FD7L)))) , l_342) != l_511.s6), 0x55L)))), 18446744073709551610UL)))) || (*p_78))) <= l_535[3]) , l_511.sf), (*p_78))) > 5UL) , l_536[0][0]) == l_335))))), l_332.sd)) > 0xEDL), ((VECTOR(int32_t, 2))(0x1E494DADL)), 0L)).xwyxywwx, ((VECTOR(int32_t, 8))(0x2F8A7B10L))))).even))))).odd, (int32_t)(*p_2417->g_509)))), 0x4A78111CL)), (*p_2417->g_307), ((VECTOR(int32_t, 2))(0x74C48109L)), 0x7189A929L)))).lo))).xzyxzwyzyyxywxww))).s7;
            (*p_2417->g_509) |= ((VECTOR(int32_t, 2))(l_540.wy)).even;
        }
        else
        { /* block id: 308 */
            (*p_2417->g_542) = l_541;
        }
    }
    return l_535[9];
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_355 p_2417->g_356 p_2417->g_334
 * writes:
 */
uint8_t  func_322(int16_t * p_323, struct S0 * p_2417)
{ /* block id: 298 */
    int32_t *l_507 = &p_2417->g_308;
    l_507 = (*p_2417->g_355);
    return p_2417->g_334;
}


/* ------------------------------------------ */
/* 
 * reads : p_2417->g_355 p_2417->g_356 p_2417->g_7 p_2417->g_22 p_2417->g_19 p_2417->g_23 p_2417->g_337 p_2417->g_396 p_2417->g_308 p_2417->g_391 p_2417->g_25 p_2417->g_434 p_2417->g_307 p_2417->g_476 p_2417->g_438 p_2417->g_6 p_2417->g_409 p_2417->g_496 p_2417->g_404 p_2417->g_330
 * writes: p_2417->g_356 p_2417->g_330 p_2417->g_337 p_2417->g_396 p_2417->g_308 p_2417->g_428 p_2417->g_434 p_2417->g_334
 */
int16_t * func_324(int32_t * p_325, int32_t  p_326, int32_t * p_327, uint64_t  p_328, struct S0 * p_2417)
{ /* block id: 234 */
    int32_t *l_358 = &p_2417->g_7[2];
    uint32_t l_364 = 0x5F2F5C69L;
    int32_t l_448 = (-1L);
    VECTOR(uint8_t, 16) l_467 = (VECTOR(uint8_t, 16))(0x0DL, (VECTOR(uint8_t, 4))(0x0DL, (VECTOR(uint8_t, 2))(0x0DL, 0x16L), 0x16L), 0x16L, 0x0DL, 0x16L, (VECTOR(uint8_t, 2))(0x0DL, 0x16L), (VECTOR(uint8_t, 2))(0x0DL, 0x16L), 0x0DL, 0x16L, 0x0DL, 0x16L);
    int64_t *l_472 = &p_2417->g_404[8];
    int16_t *l_495 = &p_2417->g_25[1][3][5];
    int16_t **l_494 = &l_495;
    int i;
    for (p_328 = 0; (p_328 != 60); p_328 = safe_add_func_uint64_t_u_u(p_328, 1))
    { /* block id: 237 */
        int32_t *l_354 = &p_2417->g_7[3];
        int32_t **l_357 = &p_2417->g_356;
        uint64_t *l_359 = (void*)0;
        uint64_t *l_360 = (void*)0;
        uint64_t *l_361[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int8_t l_393 = 9L;
        int32_t l_415 = 6L;
        int16_t *l_446[2];
        int32_t l_455 = 0x6C87197EL;
        int64_t *l_475 = (void*)0;
        int16_t l_482 = 0x11B7L;
        uint32_t l_503 = 4294967294UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_446[i] = &p_2417->g_25[5][4][3];
        (*p_2417->g_355) = l_354;
        p_327 = ((*l_357) = (void*)0);
        (*l_357) = l_358;
        if (((((**l_357) >= ((p_2417->g_330.y = p_2417->g_22.x) || ((safe_lshift_func_int8_t_s_s((((l_364 ^ 0x55C7L) , (safe_rshift_func_int8_t_s_u(p_328, 0))) , p_328), ((safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s(((void*)0 != &p_2417->g_25[4][1][1]), (0xE5L || 0x11L))), p_2417->g_19.s6)) <= (*l_358)))) <= p_2417->g_23))) <= FAKE_DIVERGE(p_2417->local_1_offset, get_local_id(1), 10)) <= (-1L)))
        { /* block id: 243 */
            int16_t l_371[10][10] = {{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL},{0x4A46L,0x4A46L,0x444EL,0x2DDFL,(-1L),0x2DDFL,0x444EL,0x4A46L,0x4A46L,0x444EL}};
            int i, j;
            atomic_and(&p_2417->g_atomic_reduction[get_linear_group_id()], l_371[1][6] + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_2417->v_collective += p_2417->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        else
        { /* block id: 245 */
            int64_t l_385 = (-1L);
            int32_t l_461[2][8][4] = {{{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L}},{{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L},{(-1L),0x7EA64C77L,0x35533DD5L,0x45DA57D2L}}};
            int32_t *l_478[9][8][3] = {{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}},{{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319},{&l_455,(void*)0,&p_2417->g_319}}};
            int8_t *l_506 = &p_2417->g_334;
            int i, j, k;
            for (p_2417->g_337 = 0; (p_2417->g_337 >= 7); p_2417->g_337 = safe_add_func_int64_t_s_s(p_2417->g_337, 4))
            { /* block id: 248 */
                VECTOR(int64_t, 8) l_374 = (VECTOR(int64_t, 8))(0x105E991380E6533EL, (VECTOR(int64_t, 4))(0x105E991380E6533EL, (VECTOR(int64_t, 2))(0x105E991380E6533EL, 0x37779B283DA6919EL), 0x37779B283DA6919EL), 0x37779B283DA6919EL, 0x105E991380E6533EL, 0x37779B283DA6919EL);
                int16_t *l_388 = (void*)0;
                int16_t *l_389 = &p_2417->g_25[5][4][2];
                uint16_t *l_390 = &p_2417->g_391[0][0][0];
                uint64_t l_392[7][8][4] = {{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}},{{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL},{2UL,0x5BFCBBD7D85E815FL,0x5B19405C3C7A0B05L,0UL}}};
                int32_t l_403 = 0x5E80B883L;
                int32_t l_418 = 1L;
                int16_t *l_447[6] = {&p_2417->g_25[0][3][4],&p_2417->g_25[4][5][1],&p_2417->g_25[0][3][4],&p_2417->g_25[0][3][4],&p_2417->g_25[4][5][1],&p_2417->g_25[0][3][4]};
                int16_t l_456 = 0x4C4DL;
                uint16_t l_462[9] = {0x16BFL,1UL,0x16BFL,0x16BFL,1UL,0x16BFL,0x16BFL,1UL,0x16BFL};
                int64_t *l_474 = &p_2417->g_404[6];
                int64_t **l_473[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_473[i] = &l_474;
                if ((0x55FBF8F3B270DDE9L == ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_374.s13)).xxyxyyyy)).s6472066764071231, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(p_326, (-1L), 1L, ((((l_374.s5 , (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(((((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((0xD172BB0609439A7EL == l_385), ((*l_390) = ((2L != ((*l_389) = (0x58L == p_326))) > p_326)))) != l_392[4][2][1]), (**l_357))), 0x7392D92FF420F41BL)) ^ p_2417->g_337) < p_326) < (*l_358)), l_393)), p_328))) , (void*)0) != &p_2417->g_6) == 0x5FL), 0x1BFD3C0F7A78EEDBL, ((VECTOR(int64_t, 2))(0x6447C181A38B84AEL)), (-8L))).odd, ((VECTOR(int64_t, 4))((-5L)))))).yxxwxzwzyzzyzxzx))).s719b)), l_374.s5, 0x3E7BD58151DAF607L, ((VECTOR(int64_t, 4))((-1L))), ((VECTOR(int64_t, 4))((-9L))), 0x661AF548C56D475DL, (-1L))).s67)).yxxyxyyx, (int64_t)(*l_358), (int64_t)(*l_354)))).s3761210225740723)).s4))
                { /* block id: 251 */
                    int32_t *l_394 = &p_2417->g_308;
                    int32_t *l_395[8] = {&p_2417->g_7[3],&p_2417->g_308,&p_2417->g_7[3],&p_2417->g_7[3],&p_2417->g_308,&p_2417->g_7[3],&p_2417->g_7[3],&p_2417->g_308};
                    VECTOR(int64_t, 2) l_412 = (VECTOR(int64_t, 2))(0L, (-6L));
                    int8_t *l_416[8] = {&p_2417->g_334,(void*)0,&p_2417->g_334,&p_2417->g_334,(void*)0,&p_2417->g_334,&p_2417->g_334,(void*)0};
                    int i;
                    ++p_2417->g_396;
                    l_418 ^= (~((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(((*l_394) = (((((safe_add_func_uint16_t_u_u((((p_2417->g_404[6] = ((*l_389) ^= (safe_rshift_func_uint8_t_u_s((~0x72L), (l_403 = (-1L)))))) <= l_374.s1) , 65535UL), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(0x4F6EL, 0L))))).xxyy)).y)) && ((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((~((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(p_2417->g_409.sdc3f6b30e7c98db7)).se6, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))((safe_rshift_func_uint8_t_u_u((0x6A0D4CFEL > (((l_403 ^= (((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(l_412.yyxxyyyx)), ((VECTOR(int64_t, 16))((((0x1398L >= 6UL) , (((l_385 ^ (safe_rshift_func_int16_t_s_s(((FAKE_DIVERGE(p_2417->group_1_offset, get_group_id(1), 10) != (**l_357)) != 0x6F346340L), (*l_354)))) , 0x6EL) <= 0x31L)) < p_326), 0x0D3CF32B178EFF58L, ((VECTOR(int64_t, 2))(1L)), 0x76D8273B4D8BCC47L, ((VECTOR(int64_t, 8))(0x381B8B4179B7EFABL)), (-1L), (-1L), (-5L))).even))).s0 == l_415)) , p_328) != 0xFDL)), p_2417->g_308)), p_2417->g_330.x, 1L, (-4L))).hi, ((VECTOR(int16_t, 2))(0x59A4L)), ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 2))(0L))))).lo), l_385)), 4)) <= p_2417->g_330.y)) , p_2417->g_7[3]) < (-8L)) != p_2417->g_417)), 0x0A481660L, ((VECTOR(int32_t, 4))((-1L))), l_385, (-1L), ((VECTOR(int32_t, 2))(0x261F4989L)), l_403, p_326, ((VECTOR(int32_t, 4))(0x611FAA56L)))).even, (int32_t)(**p_2417->g_355)))).s1);
                    (*l_394) |= 0x111DE726L;
                }
                else
                { /* block id: 260 */
                    uint16_t l_436 = 0xE61AL;
                    int32_t l_449 = (-1L);
                    int32_t l_450 = 0x0403D0F5L;
                    int32_t *l_451 = &l_418;
                    int32_t *l_452 = (void*)0;
                    int32_t *l_453 = (void*)0;
                    int32_t *l_454 = &p_2417->g_319;
                    int32_t *l_457 = &p_2417->g_319;
                    int32_t *l_458 = &p_2417->g_308;
                    int32_t *l_459 = &l_403;
                    int32_t *l_460[5][8] = {{&l_418,&l_403,&l_403,&l_418,&l_418,&l_403,&l_403,&l_418},{&l_418,&l_403,&l_403,&l_418,&l_418,&l_403,&l_403,&l_418},{&l_418,&l_403,&l_403,&l_418,&l_418,&l_403,&l_403,&l_418},{&l_418,&l_403,&l_403,&l_418,&l_418,&l_403,&l_403,&l_418},{&l_418,&l_403,&l_403,&l_418,&l_418,&l_403,&l_403,&l_418}};
                    int i, j;
                    for (l_393 = 0; (l_393 > 15); l_393 = safe_add_func_int64_t_s_s(l_393, 8))
                    { /* block id: 263 */
                        uint32_t *l_427 = &p_2417->g_428;
                        uint8_t *l_433 = &p_2417->g_434[1];
                        uint8_t *l_437[4] = {&p_2417->g_438,&p_2417->g_438,&p_2417->g_438,&p_2417->g_438};
                        int32_t l_439 = (-2L);
                        int32_t *l_442 = (void*)0;
                        int32_t *l_443[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_443[i] = &l_418;
                        (*p_2417->g_355) = (*p_2417->g_355);
                        l_403 &= (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(((((*l_433) &= ((safe_lshift_func_int16_t_s_s(p_2417->g_391[3][0][1], ((p_2417->g_396 & ((*l_427) = FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10))) < ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_328, 11)) > p_326), p_326)) ^ (p_328 , p_2417->g_25[2][4][1]))))) , GROUP_DIVERGE(0, 1))) < ((((safe_unary_minus_func_uint8_t_u((l_439 = l_436))) & (safe_div_func_uint8_t_u_u((*l_354), p_2417->g_25[5][4][2]))) < p_2417->g_337) < p_2417->g_23)) | (*l_358)), 6UL)) , 0x97F6L), p_328));
                        l_448 = (((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))((-1L), (-6L))).odd, (l_446[1] != l_447[3]))) != p_326) == ((*l_358) == p_326));
                    }
                    --l_462[6];
                    for (p_326 = 9; (p_326 <= (-8)); p_326 = safe_sub_func_uint64_t_u_u(p_326, 3))
                    { /* block id: 274 */
                        (*p_2417->g_307) |= (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_467.s7c10ad38d38d2026)).sf063)).z > 0xFEL);
                    }
                }
                (*p_2417->g_307) = (safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((l_472 == l_360), ((&p_2417->g_404[2] == (l_475 = l_472)) >= ((((p_2417->g_22.x , p_2417->g_476) != &l_446[1]) < (((void*)0 == l_478[5][6][1]) ^ 0x217F105BC7F94B27L)) | 0x35B553ACL)))), p_2417->g_438));
                for (p_326 = 10; (p_326 < 23); p_326++)
                { /* block id: 282 */
                    uint32_t l_483 = 0x9A7819B8L;
                    l_482 ^= ((VECTOR(int32_t, 2))(p_2417->g_481.s71)).hi;
                    l_483--;
                    (*l_357) = &l_403;
                    (*p_2417->g_355) = p_327;
                }
            }
            p_327 = p_325;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_2417->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))((p_2417->g_428 = ((*p_2417->g_6) , (p_328 < (safe_div_func_uint8_t_u_u((((*l_506) = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_2417->group_0_offset, get_group_id(0), 10), (((((safe_mul_func_int16_t_s_s(((((l_494 == ((p_2417->g_409.sa == ((void*)0 != (*l_494))) , &p_2417->g_477)) ^ ((VECTOR(uint64_t, 8))(p_2417->g_496.s62223446)).s7) <= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(l_503, (safe_lshift_func_int16_t_s_u(p_2417->g_434[0], 6)))) > 0x69073EDFCC87532CL), p_2417->g_404[4])) && p_326), p_2417->g_330.y))) ^ p_326), p_2417->g_308)) || 6UL) || p_326) , p_327) == &p_2417->g_7[1]))), p_326))) != p_326), p_326))))), 1UL, 0x2149BAD7L, p_2417->g_7[2], 0x0D4FC8EBL, ((VECTOR(uint32_t, 2))(0xE9847B15L)), 4294967295UL)).s4, 10))][(safe_mod_func_uint32_t_u_u(p_2417->tid, 88))]));
        }
    }
    return &p_2417->g_25[1][0][4];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_comm_values[i] = 1;
    struct S0 c_2418;
    struct S0* p_2417 = &c_2418;
    struct S0 c_2419 = {
        {0x6E58D020L,0x6E58D020L,0x6E58D020L,0x6E58D020L,0x6E58D020L}, // p_2417->g_7
        &p_2417->g_7[2], // p_2417->g_6
        (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x42L), 0x42L), 0x42L, 9L, 0x42L, (VECTOR(int8_t, 2))(9L, 0x42L), (VECTOR(int8_t, 2))(9L, 0x42L), 9L, 0x42L, 9L, 0x42L), // p_2417->g_19
        (VECTOR(uint8_t, 2))(0x02L, 0x24L), // p_2417->g_22
        0x5752783DL, // p_2417->g_23
        {{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}},{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}},{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}},{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}},{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}},{{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL},{(-5L),0x4C70L,1L,0x3E4FL,0x5AD8L,0x5D3EL,0x6E6EL}}}, // p_2417->g_25
        0x6D0A58DEL, // p_2417->g_43
        1L, // p_2417->g_308
        &p_2417->g_308, // p_2417->g_307
        (-1L), // p_2417->g_319
        (VECTOR(uint64_t, 2))(0xD15AD85B41F0E0C7L, 1UL), // p_2417->g_330
        0x33L, // p_2417->g_334
        0x0EL, // p_2417->g_337
        &p_2417->g_308, // p_2417->g_356
        &p_2417->g_356, // p_2417->g_355
        {{{0xA0CDL,0xA0CDL}},{{0xA0CDL,0xA0CDL}},{{0xA0CDL,0xA0CDL}},{{0xA0CDL,0xA0CDL}},{{0xA0CDL,0xA0CDL}}}, // p_2417->g_391
        0xA5L, // p_2417->g_396
        {0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL,0x7D327A6E8E74EF5AL}, // p_2417->g_404
        (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-8L)), (-8L)), (-8L), (-3L), (-8L), (VECTOR(int16_t, 2))((-3L), (-8L)), (VECTOR(int16_t, 2))((-3L), (-8L)), (-3L), (-8L), (-3L), (-8L)), // p_2417->g_409
        0x07L, // p_2417->g_417
        4294967295UL, // p_2417->g_428
        {3UL,3UL}, // p_2417->g_434
        0UL, // p_2417->g_438
        (void*)0, // p_2417->g_477
        &p_2417->g_477, // p_2417->g_476
        (VECTOR(int32_t, 8))(0x1AA472C8L, (VECTOR(int32_t, 4))(0x1AA472C8L, (VECTOR(int32_t, 2))(0x1AA472C8L, (-1L)), (-1L)), (-1L), 0x1AA472C8L, (-1L)), // p_2417->g_481
        (VECTOR(uint64_t, 8))(0xD635933B79132284L, (VECTOR(uint64_t, 4))(0xD635933B79132284L, (VECTOR(uint64_t, 2))(0xD635933B79132284L, 1UL), 1UL), 1UL, 0xD635933B79132284L, 1UL), // p_2417->g_496
        &p_2417->g_319, // p_2417->g_509
        (VECTOR(uint32_t, 16))(0x854DCCC3L, (VECTOR(uint32_t, 4))(0x854DCCC3L, (VECTOR(uint32_t, 2))(0x854DCCC3L, 7UL), 7UL), 7UL, 0x854DCCC3L, 7UL, (VECTOR(uint32_t, 2))(0x854DCCC3L, 7UL), (VECTOR(uint32_t, 2))(0x854DCCC3L, 7UL), 0x854DCCC3L, 7UL, 0x854DCCC3L, 7UL), // p_2417->g_510
        0xB0L, // p_2417->g_517
        0x2DL, // p_2417->g_537
        {&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6],&p_2417->g_404[6]}, // p_2417->g_544
        &p_2417->g_544[2], // p_2417->g_543
        &p_2417->g_543, // p_2417->g_542
        {{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}},{{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428},{&p_2417->g_428,&p_2417->g_428}}}, // p_2417->g_573
        {{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}},{{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356},{(void*)0,&p_2417->g_356,&p_2417->g_356,&p_2417->g_356}}}, // p_2417->g_580
        (void*)0, // p_2417->g_582
        (void*)0, // p_2417->g_723
        {&p_2417->g_6}, // p_2417->g_726
        &p_2417->g_726[0], // p_2417->g_725
        (void*)0, // p_2417->g_754
        &p_2417->g_754, // p_2417->g_753
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 4L), 4L), // p_2417->g_757
        (VECTOR(uint16_t, 2))(0xFEC6L, 65526UL), // p_2417->g_773
        0UL, // p_2417->g_774
        {{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L},{0x1C2E6BA8L,0x1C2E6BA8L,0x1C2E6BA8L}}, // p_2417->g_777
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x0F0BFD801FAE977AL), 0x0F0BFD801FAE977AL), // p_2417->g_781
        (VECTOR(int64_t, 16))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x779BEA73D1ED243AL), 0x779BEA73D1ED243AL), 0x779BEA73D1ED243AL, (-10L), 0x779BEA73D1ED243AL, (VECTOR(int64_t, 2))((-10L), 0x779BEA73D1ED243AL), (VECTOR(int64_t, 2))((-10L), 0x779BEA73D1ED243AL), (-10L), 0x779BEA73D1ED243AL, (-10L), 0x779BEA73D1ED243AL), // p_2417->g_813
        (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 7UL), 7UL), // p_2417->g_815
        (VECTOR(uint32_t, 4))(0xD3C871E0L, (VECTOR(uint32_t, 2))(0xD3C871E0L, 4294967290UL), 4294967290UL), // p_2417->g_850
        (VECTOR(uint32_t, 16))(0xE2757420L, (VECTOR(uint32_t, 4))(0xE2757420L, (VECTOR(uint32_t, 2))(0xE2757420L, 1UL), 1UL), 1UL, 0xE2757420L, 1UL, (VECTOR(uint32_t, 2))(0xE2757420L, 1UL), (VECTOR(uint32_t, 2))(0xE2757420L, 1UL), 0xE2757420L, 1UL, 0xE2757420L, 1UL), // p_2417->g_851
        (-3L), // p_2417->g_872
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_2417->g_871
        &p_2417->g_871[3], // p_2417->g_870
        (VECTOR(uint8_t, 16))(0x58L, (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 0x5BL), 0x5BL), 0x5BL, 0x58L, 0x5BL, (VECTOR(uint8_t, 2))(0x58L, 0x5BL), (VECTOR(uint8_t, 2))(0x58L, 0x5BL), 0x58L, 0x5BL, 0x58L, 0x5BL), // p_2417->g_891
        (VECTOR(int32_t, 2))(0x7809384CL, (-1L)), // p_2417->g_945
        (VECTOR(uint32_t, 2))(3UL, 0x86C7ED16L), // p_2417->g_946
        1UL, // p_2417->g_979
        {{{&p_2417->g_319,&p_2417->g_319,&p_2417->g_319},{&p_2417->g_319,&p_2417->g_319,&p_2417->g_319}}}, // p_2417->g_981
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int8_t, 2))((-1L), 2L), (VECTOR(int8_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L), // p_2417->g_1013
        (VECTOR(int8_t, 8))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, 1L), 1L), 1L, 0x24L, 1L), // p_2417->g_1014
        (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, 0x59L), 0x59L), // p_2417->g_1015
        (void*)0, // p_2417->g_1018
        (void*)0, // p_2417->g_1095
        {0x6EC76988L,0x6EC76988L,0x6EC76988L,0x6EC76988L,0x6EC76988L,0x6EC76988L,0x6EC76988L,0x6EC76988L}, // p_2417->g_1147
        &p_2417->g_356, // p_2417->g_1165
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x68DAL), 0x68DAL), 0x68DAL, 1UL, 0x68DAL, (VECTOR(uint16_t, 2))(1UL, 0x68DAL), (VECTOR(uint16_t, 2))(1UL, 0x68DAL), 1UL, 0x68DAL, 1UL, 0x68DAL), // p_2417->g_1182
        (VECTOR(uint32_t, 4))(0xF19C7EA8L, (VECTOR(uint32_t, 2))(0xF19C7EA8L, 0UL), 0UL), // p_2417->g_1189
        0x924DECB4L, // p_2417->g_1191
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int32_t, 2))(8L, (-1L)), (VECTOR(int32_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L)), // p_2417->g_1199
        &p_2417->g_417, // p_2417->g_1200
        &p_2417->g_319, // p_2417->g_1203
        (void*)0, // p_2417->g_1224
        &p_2417->g_1224, // p_2417->g_1223
        (void*)0, // p_2417->g_1225
        {&p_2417->g_1223,&p_2417->g_1223,&p_2417->g_1223,&p_2417->g_1223,&p_2417->g_1223,&p_2417->g_1223}, // p_2417->g_1226
        1L, // p_2417->g_1235
        (VECTOR(uint32_t, 16))(0x8CA1B4F2L, (VECTOR(uint32_t, 4))(0x8CA1B4F2L, (VECTOR(uint32_t, 2))(0x8CA1B4F2L, 0x45E12BA9L), 0x45E12BA9L), 0x45E12BA9L, 0x8CA1B4F2L, 0x45E12BA9L, (VECTOR(uint32_t, 2))(0x8CA1B4F2L, 0x45E12BA9L), (VECTOR(uint32_t, 2))(0x8CA1B4F2L, 0x45E12BA9L), 0x8CA1B4F2L, 0x45E12BA9L, 0x8CA1B4F2L, 0x45E12BA9L), // p_2417->g_1265
        (VECTOR(uint32_t, 16))(0x5B59B767L, (VECTOR(uint32_t, 4))(0x5B59B767L, (VECTOR(uint32_t, 2))(0x5B59B767L, 0UL), 0UL), 0UL, 0x5B59B767L, 0UL, (VECTOR(uint32_t, 2))(0x5B59B767L, 0UL), (VECTOR(uint32_t, 2))(0x5B59B767L, 0UL), 0x5B59B767L, 0UL, 0x5B59B767L, 0UL), // p_2417->g_1278
        (VECTOR(uint16_t, 8))(0xE220L, (VECTOR(uint16_t, 4))(0xE220L, (VECTOR(uint16_t, 2))(0xE220L, 4UL), 4UL), 4UL, 0xE220L, 4UL), // p_2417->g_1286
        {&p_2417->g_356,&p_2417->g_356}, // p_2417->g_1294
        &p_2417->g_356, // p_2417->g_1295
        (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 1L), 1L), // p_2417->g_1313
        (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0x5AEFL), 0x5AEFL), // p_2417->g_1322
        (void*)0, // p_2417->g_1323
        &p_2417->g_7[2], // p_2417->g_1325
        &p_2417->g_1325, // p_2417->g_1324
        {{{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL},{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL}},{{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL},{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL}},{{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL},{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL}},{{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL},{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL}},{{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL},{7UL,0xA4589E3EL,1UL,1UL,0xA4589E3EL,7UL,0x5E26703DL,1UL,3UL,0x3C7779ACL}}}, // p_2417->g_1337
        0x41F4711FL, // p_2417->g_1338
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x35B74FB0L), 0x35B74FB0L), 0x35B74FB0L, 0UL, 0x35B74FB0L, (VECTOR(uint32_t, 2))(0UL, 0x35B74FB0L), (VECTOR(uint32_t, 2))(0UL, 0x35B74FB0L), 0UL, 0x35B74FB0L, 0UL, 0x35B74FB0L), // p_2417->g_1390
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x3EAFC8BEL), 0x3EAFC8BEL), // p_2417->g_1411
        (VECTOR(int8_t, 16))(0x34L, (VECTOR(int8_t, 4))(0x34L, (VECTOR(int8_t, 2))(0x34L, (-4L)), (-4L)), (-4L), 0x34L, (-4L), (VECTOR(int8_t, 2))(0x34L, (-4L)), (VECTOR(int8_t, 2))(0x34L, (-4L)), 0x34L, (-4L), 0x34L, (-4L)), // p_2417->g_1419
        {&p_2417->g_391[0][0][0],&p_2417->g_391[0][0][0],&p_2417->g_391[0][0][0],&p_2417->g_391[0][0][0]}, // p_2417->g_1444
        &p_2417->g_1444[0], // p_2417->g_1443
        &p_2417->g_1443, // p_2417->g_1442
        (void*)0, // p_2417->g_1501
        (VECTOR(uint32_t, 16))(0x50B13A02L, (VECTOR(uint32_t, 4))(0x50B13A02L, (VECTOR(uint32_t, 2))(0x50B13A02L, 0UL), 0UL), 0UL, 0x50B13A02L, 0UL, (VECTOR(uint32_t, 2))(0x50B13A02L, 0UL), (VECTOR(uint32_t, 2))(0x50B13A02L, 0UL), 0x50B13A02L, 0UL, 0x50B13A02L, 0UL), // p_2417->g_1544
        (VECTOR(uint32_t, 2))(9UL, 0xD63C71BBL), // p_2417->g_1549
        (VECTOR(uint32_t, 2))(1UL, 4294967295UL), // p_2417->g_1551
        (void*)0, // p_2417->g_1560
        &p_2417->g_1560, // p_2417->g_1559
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967292UL), 4294967292UL), 4294967292UL, 1UL, 4294967292UL, (VECTOR(uint32_t, 2))(1UL, 4294967292UL), (VECTOR(uint32_t, 2))(1UL, 4294967292UL), 1UL, 4294967292UL, 1UL, 4294967292UL), // p_2417->g_1579
        (void*)0, // p_2417->g_1581
        0x6621L, // p_2417->g_1586
        {{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L},{0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L,0x77B50B2F4254F3F8L}}, // p_2417->g_1595
        0UL, // p_2417->g_1667
        &p_2417->g_1147[7], // p_2417->g_1707
        &p_2417->g_1707, // p_2417->g_1706
        (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int32_t, 2))((-4L), 1L), (VECTOR(int32_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L), // p_2417->g_1709
        (VECTOR(int32_t, 8))(0x0C51D465L, (VECTOR(int32_t, 4))(0x0C51D465L, (VECTOR(int32_t, 2))(0x0C51D465L, (-1L)), (-1L)), (-1L), 0x0C51D465L, (-1L)), // p_2417->g_1710
        (VECTOR(int64_t, 16))(0x2E2FAC3B5864820DL, (VECTOR(int64_t, 4))(0x2E2FAC3B5864820DL, (VECTOR(int64_t, 2))(0x2E2FAC3B5864820DL, 1L), 1L), 1L, 0x2E2FAC3B5864820DL, 1L, (VECTOR(int64_t, 2))(0x2E2FAC3B5864820DL, 1L), (VECTOR(int64_t, 2))(0x2E2FAC3B5864820DL, 1L), 0x2E2FAC3B5864820DL, 1L, 0x2E2FAC3B5864820DL, 1L), // p_2417->g_1735
        (VECTOR(int64_t, 16))(0x6092A15A2A3CB111L, (VECTOR(int64_t, 4))(0x6092A15A2A3CB111L, (VECTOR(int64_t, 2))(0x6092A15A2A3CB111L, 0x741931ECABF39AB3L), 0x741931ECABF39AB3L), 0x741931ECABF39AB3L, 0x6092A15A2A3CB111L, 0x741931ECABF39AB3L, (VECTOR(int64_t, 2))(0x6092A15A2A3CB111L, 0x741931ECABF39AB3L), (VECTOR(int64_t, 2))(0x6092A15A2A3CB111L, 0x741931ECABF39AB3L), 0x6092A15A2A3CB111L, 0x741931ECABF39AB3L, 0x6092A15A2A3CB111L, 0x741931ECABF39AB3L), // p_2417->g_1747
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL), // p_2417->g_1781
        (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x08742F0175718FE1L), 0x08742F0175718FE1L), // p_2417->g_1789
        (VECTOR(int32_t, 4))(0x7A11B558L, (VECTOR(int32_t, 2))(0x7A11B558L, 1L), 1L), // p_2417->g_1812
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x10DB14A0L), 0x10DB14A0L), 0x10DB14A0L, (-8L), 0x10DB14A0L, (VECTOR(int32_t, 2))((-8L), 0x10DB14A0L), (VECTOR(int32_t, 2))((-8L), 0x10DB14A0L), (-8L), 0x10DB14A0L, (-8L), 0x10DB14A0L), // p_2417->g_1827
        (void*)0, // p_2417->g_1843
        &p_2417->g_1843, // p_2417->g_1842
        (VECTOR(uint32_t, 16))(0xB52D1A88L, (VECTOR(uint32_t, 4))(0xB52D1A88L, (VECTOR(uint32_t, 2))(0xB52D1A88L, 4294967290UL), 4294967290UL), 4294967290UL, 0xB52D1A88L, 4294967290UL, (VECTOR(uint32_t, 2))(0xB52D1A88L, 4294967290UL), (VECTOR(uint32_t, 2))(0xB52D1A88L, 4294967290UL), 0xB52D1A88L, 4294967290UL, 0xB52D1A88L, 4294967290UL), // p_2417->g_1878
        (VECTOR(int64_t, 8))(0x1A1BBCF58CCD7FECL, (VECTOR(int64_t, 4))(0x1A1BBCF58CCD7FECL, (VECTOR(int64_t, 2))(0x1A1BBCF58CCD7FECL, 0L), 0L), 0L, 0x1A1BBCF58CCD7FECL, 0L), // p_2417->g_1903
        (VECTOR(int16_t, 2))((-1L), 0x7C7CL), // p_2417->g_1912
        (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int32_t, 2))(4L, 0L), (VECTOR(int32_t, 2))(4L, 0L), 4L, 0L, 4L, 0L), // p_2417->g_1915
        1UL, // p_2417->g_1933
        (VECTOR(uint32_t, 8))(0x2BEFAAE9L, (VECTOR(uint32_t, 4))(0x2BEFAAE9L, (VECTOR(uint32_t, 2))(0x2BEFAAE9L, 0xB1FDA6A7L), 0xB1FDA6A7L), 0xB1FDA6A7L, 0x2BEFAAE9L, 0xB1FDA6A7L), // p_2417->g_1941
        (VECTOR(uint16_t, 8))(0xB7CAL, (VECTOR(uint16_t, 4))(0xB7CAL, (VECTOR(uint16_t, 2))(0xB7CAL, 0x4931L), 0x4931L), 0x4931L, 0xB7CAL, 0x4931L), // p_2417->g_1971
        (VECTOR(int32_t, 4))(0x44FD47F2L, (VECTOR(int32_t, 2))(0x44FD47F2L, 0x2D213919L), 0x2D213919L), // p_2417->g_1978
        0x5B63E760DDEF9688L, // p_2417->g_2022
        (-1L), // p_2417->g_2059
        (VECTOR(uint8_t, 2))(1UL, 1UL), // p_2417->g_2072
        (VECTOR(uint8_t, 2))(0xA8L, 8UL), // p_2417->g_2074
        (VECTOR(int8_t, 16))(0x52L, (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, 0x53L), 0x53L), 0x53L, 0x52L, 0x53L, (VECTOR(int8_t, 2))(0x52L, 0x53L), (VECTOR(int8_t, 2))(0x52L, 0x53L), 0x52L, 0x53L, 0x52L, 0x53L), // p_2417->g_2085
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xA115L), 0xA115L), 0xA115L, 65530UL, 0xA115L, (VECTOR(uint16_t, 2))(65530UL, 0xA115L), (VECTOR(uint16_t, 2))(65530UL, 0xA115L), 65530UL, 0xA115L, 65530UL, 0xA115L), // p_2417->g_2101
        (VECTOR(int16_t, 16))(0x785AL, (VECTOR(int16_t, 4))(0x785AL, (VECTOR(int16_t, 2))(0x785AL, (-7L)), (-7L)), (-7L), 0x785AL, (-7L), (VECTOR(int16_t, 2))(0x785AL, (-7L)), (VECTOR(int16_t, 2))(0x785AL, (-7L)), 0x785AL, (-7L), 0x785AL, (-7L)), // p_2417->g_2129
        &p_2417->g_438, // p_2417->g_2139
        {{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139},{&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139,&p_2417->g_2139}}, // p_2417->g_2138
        (VECTOR(int64_t, 8))(0x1931AC86F5D4A2E7L, (VECTOR(int64_t, 4))(0x1931AC86F5D4A2E7L, (VECTOR(int64_t, 2))(0x1931AC86F5D4A2E7L, 0L), 0L), 0L, 0x1931AC86F5D4A2E7L, 0L), // p_2417->g_2153
        (VECTOR(int32_t, 8))(0x15CE5C19L, (VECTOR(int32_t, 4))(0x15CE5C19L, (VECTOR(int32_t, 2))(0x15CE5C19L, 7L), 7L), 7L, 0x15CE5C19L, 7L), // p_2417->g_2155
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_2417->g_2158
        {{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL},{0x59FC3466C8CC912CL,0x366A14F0EA11100AL,(-3L),0x366A14F0EA11100AL,0x59FC3466C8CC912CL,0x59FC3466C8CC912CL,0x366A14F0EA11100AL}}, // p_2417->g_2218
        (VECTOR(uint16_t, 8))(0xBF3AL, (VECTOR(uint16_t, 4))(0xBF3AL, (VECTOR(uint16_t, 2))(0xBF3AL, 2UL), 2UL), 2UL, 0xBF3AL, 2UL), // p_2417->g_2262
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x623EL), 0x623EL), 0x623EL, (-6L), 0x623EL), // p_2417->g_2291
        (VECTOR(int16_t, 8))(0x3A27L, (VECTOR(int16_t, 4))(0x3A27L, (VECTOR(int16_t, 2))(0x3A27L, 0x19DAL), 0x19DAL), 0x19DAL, 0x3A27L, 0x19DAL), // p_2417->g_2338
        (VECTOR(uint32_t, 8))(0xE55B24EEL, (VECTOR(uint32_t, 4))(0xE55B24EEL, (VECTOR(uint32_t, 2))(0xE55B24EEL, 1UL), 1UL), 1UL, 0xE55B24EEL, 1UL), // p_2417->g_2381
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), // p_2417->g_2383
        (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL), // p_2417->g_2390
        {{&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581},{&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581},{&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581},{&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581},{&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581,&p_2417->g_1581}}, // p_2417->g_2406
        &p_2417->g_2406[3][0], // p_2417->g_2405
        &p_2417->g_308, // p_2417->g_2409
        {{{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L}},{{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L}},{{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L}},{{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L}},{{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L},{0x32FCL,0UL,0xBB89L,0UL,0x1B3DL,0x6442L,0x6442L}}}, // p_2417->g_2410
        (-10L), // p_2417->g_2411
        &p_2417->g_1707, // p_2417->g_2415
        &p_2417->g_2415, // p_2417->g_2414
        0, // p_2417->v_collective
        sequence_input[get_global_id(0)], // p_2417->global_0_offset
        sequence_input[get_global_id(1)], // p_2417->global_1_offset
        sequence_input[get_global_id(2)], // p_2417->global_2_offset
        sequence_input[get_local_id(0)], // p_2417->local_0_offset
        sequence_input[get_local_id(1)], // p_2417->local_1_offset
        sequence_input[get_local_id(2)], // p_2417->local_2_offset
        sequence_input[get_group_id(0)], // p_2417->group_0_offset
        sequence_input[get_group_id(1)], // p_2417->group_1_offset
        sequence_input[get_group_id(2)], // p_2417->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 88)), permutations[0][get_linear_local_id()])), // p_2417->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_2418 = c_2419;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_2417);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_2417->g_7[i], "p_2417->g_7[i]", print_hash_value);

    }
    transparent_crc(p_2417->g_19.s0, "p_2417->g_19.s0", print_hash_value);
    transparent_crc(p_2417->g_19.s1, "p_2417->g_19.s1", print_hash_value);
    transparent_crc(p_2417->g_19.s2, "p_2417->g_19.s2", print_hash_value);
    transparent_crc(p_2417->g_19.s3, "p_2417->g_19.s3", print_hash_value);
    transparent_crc(p_2417->g_19.s4, "p_2417->g_19.s4", print_hash_value);
    transparent_crc(p_2417->g_19.s5, "p_2417->g_19.s5", print_hash_value);
    transparent_crc(p_2417->g_19.s6, "p_2417->g_19.s6", print_hash_value);
    transparent_crc(p_2417->g_19.s7, "p_2417->g_19.s7", print_hash_value);
    transparent_crc(p_2417->g_19.s8, "p_2417->g_19.s8", print_hash_value);
    transparent_crc(p_2417->g_19.s9, "p_2417->g_19.s9", print_hash_value);
    transparent_crc(p_2417->g_19.sa, "p_2417->g_19.sa", print_hash_value);
    transparent_crc(p_2417->g_19.sb, "p_2417->g_19.sb", print_hash_value);
    transparent_crc(p_2417->g_19.sc, "p_2417->g_19.sc", print_hash_value);
    transparent_crc(p_2417->g_19.sd, "p_2417->g_19.sd", print_hash_value);
    transparent_crc(p_2417->g_19.se, "p_2417->g_19.se", print_hash_value);
    transparent_crc(p_2417->g_19.sf, "p_2417->g_19.sf", print_hash_value);
    transparent_crc(p_2417->g_22.x, "p_2417->g_22.x", print_hash_value);
    transparent_crc(p_2417->g_22.y, "p_2417->g_22.y", print_hash_value);
    transparent_crc(p_2417->g_23, "p_2417->g_23", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2417->g_25[i][j][k], "p_2417->g_25[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2417->g_43, "p_2417->g_43", print_hash_value);
    transparent_crc(p_2417->g_308, "p_2417->g_308", print_hash_value);
    transparent_crc(p_2417->g_319, "p_2417->g_319", print_hash_value);
    transparent_crc(p_2417->g_330.x, "p_2417->g_330.x", print_hash_value);
    transparent_crc(p_2417->g_330.y, "p_2417->g_330.y", print_hash_value);
    transparent_crc(p_2417->g_334, "p_2417->g_334", print_hash_value);
    transparent_crc(p_2417->g_337, "p_2417->g_337", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_2417->g_391[i][j][k], "p_2417->g_391[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2417->g_396, "p_2417->g_396", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_2417->g_404[i], "p_2417->g_404[i]", print_hash_value);

    }
    transparent_crc(p_2417->g_409.s0, "p_2417->g_409.s0", print_hash_value);
    transparent_crc(p_2417->g_409.s1, "p_2417->g_409.s1", print_hash_value);
    transparent_crc(p_2417->g_409.s2, "p_2417->g_409.s2", print_hash_value);
    transparent_crc(p_2417->g_409.s3, "p_2417->g_409.s3", print_hash_value);
    transparent_crc(p_2417->g_409.s4, "p_2417->g_409.s4", print_hash_value);
    transparent_crc(p_2417->g_409.s5, "p_2417->g_409.s5", print_hash_value);
    transparent_crc(p_2417->g_409.s6, "p_2417->g_409.s6", print_hash_value);
    transparent_crc(p_2417->g_409.s7, "p_2417->g_409.s7", print_hash_value);
    transparent_crc(p_2417->g_409.s8, "p_2417->g_409.s8", print_hash_value);
    transparent_crc(p_2417->g_409.s9, "p_2417->g_409.s9", print_hash_value);
    transparent_crc(p_2417->g_409.sa, "p_2417->g_409.sa", print_hash_value);
    transparent_crc(p_2417->g_409.sb, "p_2417->g_409.sb", print_hash_value);
    transparent_crc(p_2417->g_409.sc, "p_2417->g_409.sc", print_hash_value);
    transparent_crc(p_2417->g_409.sd, "p_2417->g_409.sd", print_hash_value);
    transparent_crc(p_2417->g_409.se, "p_2417->g_409.se", print_hash_value);
    transparent_crc(p_2417->g_409.sf, "p_2417->g_409.sf", print_hash_value);
    transparent_crc(p_2417->g_417, "p_2417->g_417", print_hash_value);
    transparent_crc(p_2417->g_428, "p_2417->g_428", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_2417->g_434[i], "p_2417->g_434[i]", print_hash_value);

    }
    transparent_crc(p_2417->g_438, "p_2417->g_438", print_hash_value);
    transparent_crc(p_2417->g_481.s0, "p_2417->g_481.s0", print_hash_value);
    transparent_crc(p_2417->g_481.s1, "p_2417->g_481.s1", print_hash_value);
    transparent_crc(p_2417->g_481.s2, "p_2417->g_481.s2", print_hash_value);
    transparent_crc(p_2417->g_481.s3, "p_2417->g_481.s3", print_hash_value);
    transparent_crc(p_2417->g_481.s4, "p_2417->g_481.s4", print_hash_value);
    transparent_crc(p_2417->g_481.s5, "p_2417->g_481.s5", print_hash_value);
    transparent_crc(p_2417->g_481.s6, "p_2417->g_481.s6", print_hash_value);
    transparent_crc(p_2417->g_481.s7, "p_2417->g_481.s7", print_hash_value);
    transparent_crc(p_2417->g_496.s0, "p_2417->g_496.s0", print_hash_value);
    transparent_crc(p_2417->g_496.s1, "p_2417->g_496.s1", print_hash_value);
    transparent_crc(p_2417->g_496.s2, "p_2417->g_496.s2", print_hash_value);
    transparent_crc(p_2417->g_496.s3, "p_2417->g_496.s3", print_hash_value);
    transparent_crc(p_2417->g_496.s4, "p_2417->g_496.s4", print_hash_value);
    transparent_crc(p_2417->g_496.s5, "p_2417->g_496.s5", print_hash_value);
    transparent_crc(p_2417->g_496.s6, "p_2417->g_496.s6", print_hash_value);
    transparent_crc(p_2417->g_496.s7, "p_2417->g_496.s7", print_hash_value);
    transparent_crc(p_2417->g_510.s0, "p_2417->g_510.s0", print_hash_value);
    transparent_crc(p_2417->g_510.s1, "p_2417->g_510.s1", print_hash_value);
    transparent_crc(p_2417->g_510.s2, "p_2417->g_510.s2", print_hash_value);
    transparent_crc(p_2417->g_510.s3, "p_2417->g_510.s3", print_hash_value);
    transparent_crc(p_2417->g_510.s4, "p_2417->g_510.s4", print_hash_value);
    transparent_crc(p_2417->g_510.s5, "p_2417->g_510.s5", print_hash_value);
    transparent_crc(p_2417->g_510.s6, "p_2417->g_510.s6", print_hash_value);
    transparent_crc(p_2417->g_510.s7, "p_2417->g_510.s7", print_hash_value);
    transparent_crc(p_2417->g_510.s8, "p_2417->g_510.s8", print_hash_value);
    transparent_crc(p_2417->g_510.s9, "p_2417->g_510.s9", print_hash_value);
    transparent_crc(p_2417->g_510.sa, "p_2417->g_510.sa", print_hash_value);
    transparent_crc(p_2417->g_510.sb, "p_2417->g_510.sb", print_hash_value);
    transparent_crc(p_2417->g_510.sc, "p_2417->g_510.sc", print_hash_value);
    transparent_crc(p_2417->g_510.sd, "p_2417->g_510.sd", print_hash_value);
    transparent_crc(p_2417->g_510.se, "p_2417->g_510.se", print_hash_value);
    transparent_crc(p_2417->g_510.sf, "p_2417->g_510.sf", print_hash_value);
    transparent_crc(p_2417->g_517, "p_2417->g_517", print_hash_value);
    transparent_crc(p_2417->g_537, "p_2417->g_537", print_hash_value);
    transparent_crc(p_2417->g_757.x, "p_2417->g_757.x", print_hash_value);
    transparent_crc(p_2417->g_757.y, "p_2417->g_757.y", print_hash_value);
    transparent_crc(p_2417->g_757.z, "p_2417->g_757.z", print_hash_value);
    transparent_crc(p_2417->g_757.w, "p_2417->g_757.w", print_hash_value);
    transparent_crc(p_2417->g_773.x, "p_2417->g_773.x", print_hash_value);
    transparent_crc(p_2417->g_773.y, "p_2417->g_773.y", print_hash_value);
    transparent_crc(p_2417->g_774, "p_2417->g_774", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_2417->g_777[i][j], "p_2417->g_777[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2417->g_781.x, "p_2417->g_781.x", print_hash_value);
    transparent_crc(p_2417->g_781.y, "p_2417->g_781.y", print_hash_value);
    transparent_crc(p_2417->g_781.z, "p_2417->g_781.z", print_hash_value);
    transparent_crc(p_2417->g_781.w, "p_2417->g_781.w", print_hash_value);
    transparent_crc(p_2417->g_813.s0, "p_2417->g_813.s0", print_hash_value);
    transparent_crc(p_2417->g_813.s1, "p_2417->g_813.s1", print_hash_value);
    transparent_crc(p_2417->g_813.s2, "p_2417->g_813.s2", print_hash_value);
    transparent_crc(p_2417->g_813.s3, "p_2417->g_813.s3", print_hash_value);
    transparent_crc(p_2417->g_813.s4, "p_2417->g_813.s4", print_hash_value);
    transparent_crc(p_2417->g_813.s5, "p_2417->g_813.s5", print_hash_value);
    transparent_crc(p_2417->g_813.s6, "p_2417->g_813.s6", print_hash_value);
    transparent_crc(p_2417->g_813.s7, "p_2417->g_813.s7", print_hash_value);
    transparent_crc(p_2417->g_813.s8, "p_2417->g_813.s8", print_hash_value);
    transparent_crc(p_2417->g_813.s9, "p_2417->g_813.s9", print_hash_value);
    transparent_crc(p_2417->g_813.sa, "p_2417->g_813.sa", print_hash_value);
    transparent_crc(p_2417->g_813.sb, "p_2417->g_813.sb", print_hash_value);
    transparent_crc(p_2417->g_813.sc, "p_2417->g_813.sc", print_hash_value);
    transparent_crc(p_2417->g_813.sd, "p_2417->g_813.sd", print_hash_value);
    transparent_crc(p_2417->g_813.se, "p_2417->g_813.se", print_hash_value);
    transparent_crc(p_2417->g_813.sf, "p_2417->g_813.sf", print_hash_value);
    transparent_crc(p_2417->g_815.x, "p_2417->g_815.x", print_hash_value);
    transparent_crc(p_2417->g_815.y, "p_2417->g_815.y", print_hash_value);
    transparent_crc(p_2417->g_815.z, "p_2417->g_815.z", print_hash_value);
    transparent_crc(p_2417->g_815.w, "p_2417->g_815.w", print_hash_value);
    transparent_crc(p_2417->g_850.x, "p_2417->g_850.x", print_hash_value);
    transparent_crc(p_2417->g_850.y, "p_2417->g_850.y", print_hash_value);
    transparent_crc(p_2417->g_850.z, "p_2417->g_850.z", print_hash_value);
    transparent_crc(p_2417->g_850.w, "p_2417->g_850.w", print_hash_value);
    transparent_crc(p_2417->g_851.s0, "p_2417->g_851.s0", print_hash_value);
    transparent_crc(p_2417->g_851.s1, "p_2417->g_851.s1", print_hash_value);
    transparent_crc(p_2417->g_851.s2, "p_2417->g_851.s2", print_hash_value);
    transparent_crc(p_2417->g_851.s3, "p_2417->g_851.s3", print_hash_value);
    transparent_crc(p_2417->g_851.s4, "p_2417->g_851.s4", print_hash_value);
    transparent_crc(p_2417->g_851.s5, "p_2417->g_851.s5", print_hash_value);
    transparent_crc(p_2417->g_851.s6, "p_2417->g_851.s6", print_hash_value);
    transparent_crc(p_2417->g_851.s7, "p_2417->g_851.s7", print_hash_value);
    transparent_crc(p_2417->g_851.s8, "p_2417->g_851.s8", print_hash_value);
    transparent_crc(p_2417->g_851.s9, "p_2417->g_851.s9", print_hash_value);
    transparent_crc(p_2417->g_851.sa, "p_2417->g_851.sa", print_hash_value);
    transparent_crc(p_2417->g_851.sb, "p_2417->g_851.sb", print_hash_value);
    transparent_crc(p_2417->g_851.sc, "p_2417->g_851.sc", print_hash_value);
    transparent_crc(p_2417->g_851.sd, "p_2417->g_851.sd", print_hash_value);
    transparent_crc(p_2417->g_851.se, "p_2417->g_851.se", print_hash_value);
    transparent_crc(p_2417->g_851.sf, "p_2417->g_851.sf", print_hash_value);
    transparent_crc(p_2417->g_872, "p_2417->g_872", print_hash_value);
    transparent_crc(p_2417->g_891.s0, "p_2417->g_891.s0", print_hash_value);
    transparent_crc(p_2417->g_891.s1, "p_2417->g_891.s1", print_hash_value);
    transparent_crc(p_2417->g_891.s2, "p_2417->g_891.s2", print_hash_value);
    transparent_crc(p_2417->g_891.s3, "p_2417->g_891.s3", print_hash_value);
    transparent_crc(p_2417->g_891.s4, "p_2417->g_891.s4", print_hash_value);
    transparent_crc(p_2417->g_891.s5, "p_2417->g_891.s5", print_hash_value);
    transparent_crc(p_2417->g_891.s6, "p_2417->g_891.s6", print_hash_value);
    transparent_crc(p_2417->g_891.s7, "p_2417->g_891.s7", print_hash_value);
    transparent_crc(p_2417->g_891.s8, "p_2417->g_891.s8", print_hash_value);
    transparent_crc(p_2417->g_891.s9, "p_2417->g_891.s9", print_hash_value);
    transparent_crc(p_2417->g_891.sa, "p_2417->g_891.sa", print_hash_value);
    transparent_crc(p_2417->g_891.sb, "p_2417->g_891.sb", print_hash_value);
    transparent_crc(p_2417->g_891.sc, "p_2417->g_891.sc", print_hash_value);
    transparent_crc(p_2417->g_891.sd, "p_2417->g_891.sd", print_hash_value);
    transparent_crc(p_2417->g_891.se, "p_2417->g_891.se", print_hash_value);
    transparent_crc(p_2417->g_891.sf, "p_2417->g_891.sf", print_hash_value);
    transparent_crc(p_2417->g_945.x, "p_2417->g_945.x", print_hash_value);
    transparent_crc(p_2417->g_945.y, "p_2417->g_945.y", print_hash_value);
    transparent_crc(p_2417->g_946.x, "p_2417->g_946.x", print_hash_value);
    transparent_crc(p_2417->g_946.y, "p_2417->g_946.y", print_hash_value);
    transparent_crc(p_2417->g_979, "p_2417->g_979", print_hash_value);
    transparent_crc(p_2417->g_1013.s0, "p_2417->g_1013.s0", print_hash_value);
    transparent_crc(p_2417->g_1013.s1, "p_2417->g_1013.s1", print_hash_value);
    transparent_crc(p_2417->g_1013.s2, "p_2417->g_1013.s2", print_hash_value);
    transparent_crc(p_2417->g_1013.s3, "p_2417->g_1013.s3", print_hash_value);
    transparent_crc(p_2417->g_1013.s4, "p_2417->g_1013.s4", print_hash_value);
    transparent_crc(p_2417->g_1013.s5, "p_2417->g_1013.s5", print_hash_value);
    transparent_crc(p_2417->g_1013.s6, "p_2417->g_1013.s6", print_hash_value);
    transparent_crc(p_2417->g_1013.s7, "p_2417->g_1013.s7", print_hash_value);
    transparent_crc(p_2417->g_1013.s8, "p_2417->g_1013.s8", print_hash_value);
    transparent_crc(p_2417->g_1013.s9, "p_2417->g_1013.s9", print_hash_value);
    transparent_crc(p_2417->g_1013.sa, "p_2417->g_1013.sa", print_hash_value);
    transparent_crc(p_2417->g_1013.sb, "p_2417->g_1013.sb", print_hash_value);
    transparent_crc(p_2417->g_1013.sc, "p_2417->g_1013.sc", print_hash_value);
    transparent_crc(p_2417->g_1013.sd, "p_2417->g_1013.sd", print_hash_value);
    transparent_crc(p_2417->g_1013.se, "p_2417->g_1013.se", print_hash_value);
    transparent_crc(p_2417->g_1013.sf, "p_2417->g_1013.sf", print_hash_value);
    transparent_crc(p_2417->g_1014.s0, "p_2417->g_1014.s0", print_hash_value);
    transparent_crc(p_2417->g_1014.s1, "p_2417->g_1014.s1", print_hash_value);
    transparent_crc(p_2417->g_1014.s2, "p_2417->g_1014.s2", print_hash_value);
    transparent_crc(p_2417->g_1014.s3, "p_2417->g_1014.s3", print_hash_value);
    transparent_crc(p_2417->g_1014.s4, "p_2417->g_1014.s4", print_hash_value);
    transparent_crc(p_2417->g_1014.s5, "p_2417->g_1014.s5", print_hash_value);
    transparent_crc(p_2417->g_1014.s6, "p_2417->g_1014.s6", print_hash_value);
    transparent_crc(p_2417->g_1014.s7, "p_2417->g_1014.s7", print_hash_value);
    transparent_crc(p_2417->g_1015.x, "p_2417->g_1015.x", print_hash_value);
    transparent_crc(p_2417->g_1015.y, "p_2417->g_1015.y", print_hash_value);
    transparent_crc(p_2417->g_1015.z, "p_2417->g_1015.z", print_hash_value);
    transparent_crc(p_2417->g_1015.w, "p_2417->g_1015.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_2417->g_1147[i], "p_2417->g_1147[i]", print_hash_value);

    }
    transparent_crc(p_2417->g_1182.s0, "p_2417->g_1182.s0", print_hash_value);
    transparent_crc(p_2417->g_1182.s1, "p_2417->g_1182.s1", print_hash_value);
    transparent_crc(p_2417->g_1182.s2, "p_2417->g_1182.s2", print_hash_value);
    transparent_crc(p_2417->g_1182.s3, "p_2417->g_1182.s3", print_hash_value);
    transparent_crc(p_2417->g_1182.s4, "p_2417->g_1182.s4", print_hash_value);
    transparent_crc(p_2417->g_1182.s5, "p_2417->g_1182.s5", print_hash_value);
    transparent_crc(p_2417->g_1182.s6, "p_2417->g_1182.s6", print_hash_value);
    transparent_crc(p_2417->g_1182.s7, "p_2417->g_1182.s7", print_hash_value);
    transparent_crc(p_2417->g_1182.s8, "p_2417->g_1182.s8", print_hash_value);
    transparent_crc(p_2417->g_1182.s9, "p_2417->g_1182.s9", print_hash_value);
    transparent_crc(p_2417->g_1182.sa, "p_2417->g_1182.sa", print_hash_value);
    transparent_crc(p_2417->g_1182.sb, "p_2417->g_1182.sb", print_hash_value);
    transparent_crc(p_2417->g_1182.sc, "p_2417->g_1182.sc", print_hash_value);
    transparent_crc(p_2417->g_1182.sd, "p_2417->g_1182.sd", print_hash_value);
    transparent_crc(p_2417->g_1182.se, "p_2417->g_1182.se", print_hash_value);
    transparent_crc(p_2417->g_1182.sf, "p_2417->g_1182.sf", print_hash_value);
    transparent_crc(p_2417->g_1189.x, "p_2417->g_1189.x", print_hash_value);
    transparent_crc(p_2417->g_1189.y, "p_2417->g_1189.y", print_hash_value);
    transparent_crc(p_2417->g_1189.z, "p_2417->g_1189.z", print_hash_value);
    transparent_crc(p_2417->g_1189.w, "p_2417->g_1189.w", print_hash_value);
    transparent_crc(p_2417->g_1191, "p_2417->g_1191", print_hash_value);
    transparent_crc(p_2417->g_1199.s0, "p_2417->g_1199.s0", print_hash_value);
    transparent_crc(p_2417->g_1199.s1, "p_2417->g_1199.s1", print_hash_value);
    transparent_crc(p_2417->g_1199.s2, "p_2417->g_1199.s2", print_hash_value);
    transparent_crc(p_2417->g_1199.s3, "p_2417->g_1199.s3", print_hash_value);
    transparent_crc(p_2417->g_1199.s4, "p_2417->g_1199.s4", print_hash_value);
    transparent_crc(p_2417->g_1199.s5, "p_2417->g_1199.s5", print_hash_value);
    transparent_crc(p_2417->g_1199.s6, "p_2417->g_1199.s6", print_hash_value);
    transparent_crc(p_2417->g_1199.s7, "p_2417->g_1199.s7", print_hash_value);
    transparent_crc(p_2417->g_1199.s8, "p_2417->g_1199.s8", print_hash_value);
    transparent_crc(p_2417->g_1199.s9, "p_2417->g_1199.s9", print_hash_value);
    transparent_crc(p_2417->g_1199.sa, "p_2417->g_1199.sa", print_hash_value);
    transparent_crc(p_2417->g_1199.sb, "p_2417->g_1199.sb", print_hash_value);
    transparent_crc(p_2417->g_1199.sc, "p_2417->g_1199.sc", print_hash_value);
    transparent_crc(p_2417->g_1199.sd, "p_2417->g_1199.sd", print_hash_value);
    transparent_crc(p_2417->g_1199.se, "p_2417->g_1199.se", print_hash_value);
    transparent_crc(p_2417->g_1199.sf, "p_2417->g_1199.sf", print_hash_value);
    transparent_crc(p_2417->g_1235, "p_2417->g_1235", print_hash_value);
    transparent_crc(p_2417->g_1265.s0, "p_2417->g_1265.s0", print_hash_value);
    transparent_crc(p_2417->g_1265.s1, "p_2417->g_1265.s1", print_hash_value);
    transparent_crc(p_2417->g_1265.s2, "p_2417->g_1265.s2", print_hash_value);
    transparent_crc(p_2417->g_1265.s3, "p_2417->g_1265.s3", print_hash_value);
    transparent_crc(p_2417->g_1265.s4, "p_2417->g_1265.s4", print_hash_value);
    transparent_crc(p_2417->g_1265.s5, "p_2417->g_1265.s5", print_hash_value);
    transparent_crc(p_2417->g_1265.s6, "p_2417->g_1265.s6", print_hash_value);
    transparent_crc(p_2417->g_1265.s7, "p_2417->g_1265.s7", print_hash_value);
    transparent_crc(p_2417->g_1265.s8, "p_2417->g_1265.s8", print_hash_value);
    transparent_crc(p_2417->g_1265.s9, "p_2417->g_1265.s9", print_hash_value);
    transparent_crc(p_2417->g_1265.sa, "p_2417->g_1265.sa", print_hash_value);
    transparent_crc(p_2417->g_1265.sb, "p_2417->g_1265.sb", print_hash_value);
    transparent_crc(p_2417->g_1265.sc, "p_2417->g_1265.sc", print_hash_value);
    transparent_crc(p_2417->g_1265.sd, "p_2417->g_1265.sd", print_hash_value);
    transparent_crc(p_2417->g_1265.se, "p_2417->g_1265.se", print_hash_value);
    transparent_crc(p_2417->g_1265.sf, "p_2417->g_1265.sf", print_hash_value);
    transparent_crc(p_2417->g_1278.s0, "p_2417->g_1278.s0", print_hash_value);
    transparent_crc(p_2417->g_1278.s1, "p_2417->g_1278.s1", print_hash_value);
    transparent_crc(p_2417->g_1278.s2, "p_2417->g_1278.s2", print_hash_value);
    transparent_crc(p_2417->g_1278.s3, "p_2417->g_1278.s3", print_hash_value);
    transparent_crc(p_2417->g_1278.s4, "p_2417->g_1278.s4", print_hash_value);
    transparent_crc(p_2417->g_1278.s5, "p_2417->g_1278.s5", print_hash_value);
    transparent_crc(p_2417->g_1278.s6, "p_2417->g_1278.s6", print_hash_value);
    transparent_crc(p_2417->g_1278.s7, "p_2417->g_1278.s7", print_hash_value);
    transparent_crc(p_2417->g_1278.s8, "p_2417->g_1278.s8", print_hash_value);
    transparent_crc(p_2417->g_1278.s9, "p_2417->g_1278.s9", print_hash_value);
    transparent_crc(p_2417->g_1278.sa, "p_2417->g_1278.sa", print_hash_value);
    transparent_crc(p_2417->g_1278.sb, "p_2417->g_1278.sb", print_hash_value);
    transparent_crc(p_2417->g_1278.sc, "p_2417->g_1278.sc", print_hash_value);
    transparent_crc(p_2417->g_1278.sd, "p_2417->g_1278.sd", print_hash_value);
    transparent_crc(p_2417->g_1278.se, "p_2417->g_1278.se", print_hash_value);
    transparent_crc(p_2417->g_1278.sf, "p_2417->g_1278.sf", print_hash_value);
    transparent_crc(p_2417->g_1286.s0, "p_2417->g_1286.s0", print_hash_value);
    transparent_crc(p_2417->g_1286.s1, "p_2417->g_1286.s1", print_hash_value);
    transparent_crc(p_2417->g_1286.s2, "p_2417->g_1286.s2", print_hash_value);
    transparent_crc(p_2417->g_1286.s3, "p_2417->g_1286.s3", print_hash_value);
    transparent_crc(p_2417->g_1286.s4, "p_2417->g_1286.s4", print_hash_value);
    transparent_crc(p_2417->g_1286.s5, "p_2417->g_1286.s5", print_hash_value);
    transparent_crc(p_2417->g_1286.s6, "p_2417->g_1286.s6", print_hash_value);
    transparent_crc(p_2417->g_1286.s7, "p_2417->g_1286.s7", print_hash_value);
    transparent_crc(p_2417->g_1313.x, "p_2417->g_1313.x", print_hash_value);
    transparent_crc(p_2417->g_1313.y, "p_2417->g_1313.y", print_hash_value);
    transparent_crc(p_2417->g_1313.z, "p_2417->g_1313.z", print_hash_value);
    transparent_crc(p_2417->g_1313.w, "p_2417->g_1313.w", print_hash_value);
    transparent_crc(p_2417->g_1322.x, "p_2417->g_1322.x", print_hash_value);
    transparent_crc(p_2417->g_1322.y, "p_2417->g_1322.y", print_hash_value);
    transparent_crc(p_2417->g_1322.z, "p_2417->g_1322.z", print_hash_value);
    transparent_crc(p_2417->g_1322.w, "p_2417->g_1322.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_2417->g_1337[i][j][k], "p_2417->g_1337[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2417->g_1338, "p_2417->g_1338", print_hash_value);
    transparent_crc(p_2417->g_1390.s0, "p_2417->g_1390.s0", print_hash_value);
    transparent_crc(p_2417->g_1390.s1, "p_2417->g_1390.s1", print_hash_value);
    transparent_crc(p_2417->g_1390.s2, "p_2417->g_1390.s2", print_hash_value);
    transparent_crc(p_2417->g_1390.s3, "p_2417->g_1390.s3", print_hash_value);
    transparent_crc(p_2417->g_1390.s4, "p_2417->g_1390.s4", print_hash_value);
    transparent_crc(p_2417->g_1390.s5, "p_2417->g_1390.s5", print_hash_value);
    transparent_crc(p_2417->g_1390.s6, "p_2417->g_1390.s6", print_hash_value);
    transparent_crc(p_2417->g_1390.s7, "p_2417->g_1390.s7", print_hash_value);
    transparent_crc(p_2417->g_1390.s8, "p_2417->g_1390.s8", print_hash_value);
    transparent_crc(p_2417->g_1390.s9, "p_2417->g_1390.s9", print_hash_value);
    transparent_crc(p_2417->g_1390.sa, "p_2417->g_1390.sa", print_hash_value);
    transparent_crc(p_2417->g_1390.sb, "p_2417->g_1390.sb", print_hash_value);
    transparent_crc(p_2417->g_1390.sc, "p_2417->g_1390.sc", print_hash_value);
    transparent_crc(p_2417->g_1390.sd, "p_2417->g_1390.sd", print_hash_value);
    transparent_crc(p_2417->g_1390.se, "p_2417->g_1390.se", print_hash_value);
    transparent_crc(p_2417->g_1390.sf, "p_2417->g_1390.sf", print_hash_value);
    transparent_crc(p_2417->g_1411.x, "p_2417->g_1411.x", print_hash_value);
    transparent_crc(p_2417->g_1411.y, "p_2417->g_1411.y", print_hash_value);
    transparent_crc(p_2417->g_1411.z, "p_2417->g_1411.z", print_hash_value);
    transparent_crc(p_2417->g_1411.w, "p_2417->g_1411.w", print_hash_value);
    transparent_crc(p_2417->g_1419.s0, "p_2417->g_1419.s0", print_hash_value);
    transparent_crc(p_2417->g_1419.s1, "p_2417->g_1419.s1", print_hash_value);
    transparent_crc(p_2417->g_1419.s2, "p_2417->g_1419.s2", print_hash_value);
    transparent_crc(p_2417->g_1419.s3, "p_2417->g_1419.s3", print_hash_value);
    transparent_crc(p_2417->g_1419.s4, "p_2417->g_1419.s4", print_hash_value);
    transparent_crc(p_2417->g_1419.s5, "p_2417->g_1419.s5", print_hash_value);
    transparent_crc(p_2417->g_1419.s6, "p_2417->g_1419.s6", print_hash_value);
    transparent_crc(p_2417->g_1419.s7, "p_2417->g_1419.s7", print_hash_value);
    transparent_crc(p_2417->g_1419.s8, "p_2417->g_1419.s8", print_hash_value);
    transparent_crc(p_2417->g_1419.s9, "p_2417->g_1419.s9", print_hash_value);
    transparent_crc(p_2417->g_1419.sa, "p_2417->g_1419.sa", print_hash_value);
    transparent_crc(p_2417->g_1419.sb, "p_2417->g_1419.sb", print_hash_value);
    transparent_crc(p_2417->g_1419.sc, "p_2417->g_1419.sc", print_hash_value);
    transparent_crc(p_2417->g_1419.sd, "p_2417->g_1419.sd", print_hash_value);
    transparent_crc(p_2417->g_1419.se, "p_2417->g_1419.se", print_hash_value);
    transparent_crc(p_2417->g_1419.sf, "p_2417->g_1419.sf", print_hash_value);
    transparent_crc(p_2417->g_1544.s0, "p_2417->g_1544.s0", print_hash_value);
    transparent_crc(p_2417->g_1544.s1, "p_2417->g_1544.s1", print_hash_value);
    transparent_crc(p_2417->g_1544.s2, "p_2417->g_1544.s2", print_hash_value);
    transparent_crc(p_2417->g_1544.s3, "p_2417->g_1544.s3", print_hash_value);
    transparent_crc(p_2417->g_1544.s4, "p_2417->g_1544.s4", print_hash_value);
    transparent_crc(p_2417->g_1544.s5, "p_2417->g_1544.s5", print_hash_value);
    transparent_crc(p_2417->g_1544.s6, "p_2417->g_1544.s6", print_hash_value);
    transparent_crc(p_2417->g_1544.s7, "p_2417->g_1544.s7", print_hash_value);
    transparent_crc(p_2417->g_1544.s8, "p_2417->g_1544.s8", print_hash_value);
    transparent_crc(p_2417->g_1544.s9, "p_2417->g_1544.s9", print_hash_value);
    transparent_crc(p_2417->g_1544.sa, "p_2417->g_1544.sa", print_hash_value);
    transparent_crc(p_2417->g_1544.sb, "p_2417->g_1544.sb", print_hash_value);
    transparent_crc(p_2417->g_1544.sc, "p_2417->g_1544.sc", print_hash_value);
    transparent_crc(p_2417->g_1544.sd, "p_2417->g_1544.sd", print_hash_value);
    transparent_crc(p_2417->g_1544.se, "p_2417->g_1544.se", print_hash_value);
    transparent_crc(p_2417->g_1544.sf, "p_2417->g_1544.sf", print_hash_value);
    transparent_crc(p_2417->g_1549.x, "p_2417->g_1549.x", print_hash_value);
    transparent_crc(p_2417->g_1549.y, "p_2417->g_1549.y", print_hash_value);
    transparent_crc(p_2417->g_1551.x, "p_2417->g_1551.x", print_hash_value);
    transparent_crc(p_2417->g_1551.y, "p_2417->g_1551.y", print_hash_value);
    transparent_crc(p_2417->g_1579.s0, "p_2417->g_1579.s0", print_hash_value);
    transparent_crc(p_2417->g_1579.s1, "p_2417->g_1579.s1", print_hash_value);
    transparent_crc(p_2417->g_1579.s2, "p_2417->g_1579.s2", print_hash_value);
    transparent_crc(p_2417->g_1579.s3, "p_2417->g_1579.s3", print_hash_value);
    transparent_crc(p_2417->g_1579.s4, "p_2417->g_1579.s4", print_hash_value);
    transparent_crc(p_2417->g_1579.s5, "p_2417->g_1579.s5", print_hash_value);
    transparent_crc(p_2417->g_1579.s6, "p_2417->g_1579.s6", print_hash_value);
    transparent_crc(p_2417->g_1579.s7, "p_2417->g_1579.s7", print_hash_value);
    transparent_crc(p_2417->g_1579.s8, "p_2417->g_1579.s8", print_hash_value);
    transparent_crc(p_2417->g_1579.s9, "p_2417->g_1579.s9", print_hash_value);
    transparent_crc(p_2417->g_1579.sa, "p_2417->g_1579.sa", print_hash_value);
    transparent_crc(p_2417->g_1579.sb, "p_2417->g_1579.sb", print_hash_value);
    transparent_crc(p_2417->g_1579.sc, "p_2417->g_1579.sc", print_hash_value);
    transparent_crc(p_2417->g_1579.sd, "p_2417->g_1579.sd", print_hash_value);
    transparent_crc(p_2417->g_1579.se, "p_2417->g_1579.se", print_hash_value);
    transparent_crc(p_2417->g_1579.sf, "p_2417->g_1579.sf", print_hash_value);
    transparent_crc(p_2417->g_1586, "p_2417->g_1586", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_2417->g_1595[i][j], "p_2417->g_1595[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2417->g_1667, "p_2417->g_1667", print_hash_value);
    transparent_crc(p_2417->g_1709.s0, "p_2417->g_1709.s0", print_hash_value);
    transparent_crc(p_2417->g_1709.s1, "p_2417->g_1709.s1", print_hash_value);
    transparent_crc(p_2417->g_1709.s2, "p_2417->g_1709.s2", print_hash_value);
    transparent_crc(p_2417->g_1709.s3, "p_2417->g_1709.s3", print_hash_value);
    transparent_crc(p_2417->g_1709.s4, "p_2417->g_1709.s4", print_hash_value);
    transparent_crc(p_2417->g_1709.s5, "p_2417->g_1709.s5", print_hash_value);
    transparent_crc(p_2417->g_1709.s6, "p_2417->g_1709.s6", print_hash_value);
    transparent_crc(p_2417->g_1709.s7, "p_2417->g_1709.s7", print_hash_value);
    transparent_crc(p_2417->g_1709.s8, "p_2417->g_1709.s8", print_hash_value);
    transparent_crc(p_2417->g_1709.s9, "p_2417->g_1709.s9", print_hash_value);
    transparent_crc(p_2417->g_1709.sa, "p_2417->g_1709.sa", print_hash_value);
    transparent_crc(p_2417->g_1709.sb, "p_2417->g_1709.sb", print_hash_value);
    transparent_crc(p_2417->g_1709.sc, "p_2417->g_1709.sc", print_hash_value);
    transparent_crc(p_2417->g_1709.sd, "p_2417->g_1709.sd", print_hash_value);
    transparent_crc(p_2417->g_1709.se, "p_2417->g_1709.se", print_hash_value);
    transparent_crc(p_2417->g_1709.sf, "p_2417->g_1709.sf", print_hash_value);
    transparent_crc(p_2417->g_1710.s0, "p_2417->g_1710.s0", print_hash_value);
    transparent_crc(p_2417->g_1710.s1, "p_2417->g_1710.s1", print_hash_value);
    transparent_crc(p_2417->g_1710.s2, "p_2417->g_1710.s2", print_hash_value);
    transparent_crc(p_2417->g_1710.s3, "p_2417->g_1710.s3", print_hash_value);
    transparent_crc(p_2417->g_1710.s4, "p_2417->g_1710.s4", print_hash_value);
    transparent_crc(p_2417->g_1710.s5, "p_2417->g_1710.s5", print_hash_value);
    transparent_crc(p_2417->g_1710.s6, "p_2417->g_1710.s6", print_hash_value);
    transparent_crc(p_2417->g_1710.s7, "p_2417->g_1710.s7", print_hash_value);
    transparent_crc(p_2417->g_1735.s0, "p_2417->g_1735.s0", print_hash_value);
    transparent_crc(p_2417->g_1735.s1, "p_2417->g_1735.s1", print_hash_value);
    transparent_crc(p_2417->g_1735.s2, "p_2417->g_1735.s2", print_hash_value);
    transparent_crc(p_2417->g_1735.s3, "p_2417->g_1735.s3", print_hash_value);
    transparent_crc(p_2417->g_1735.s4, "p_2417->g_1735.s4", print_hash_value);
    transparent_crc(p_2417->g_1735.s5, "p_2417->g_1735.s5", print_hash_value);
    transparent_crc(p_2417->g_1735.s6, "p_2417->g_1735.s6", print_hash_value);
    transparent_crc(p_2417->g_1735.s7, "p_2417->g_1735.s7", print_hash_value);
    transparent_crc(p_2417->g_1735.s8, "p_2417->g_1735.s8", print_hash_value);
    transparent_crc(p_2417->g_1735.s9, "p_2417->g_1735.s9", print_hash_value);
    transparent_crc(p_2417->g_1735.sa, "p_2417->g_1735.sa", print_hash_value);
    transparent_crc(p_2417->g_1735.sb, "p_2417->g_1735.sb", print_hash_value);
    transparent_crc(p_2417->g_1735.sc, "p_2417->g_1735.sc", print_hash_value);
    transparent_crc(p_2417->g_1735.sd, "p_2417->g_1735.sd", print_hash_value);
    transparent_crc(p_2417->g_1735.se, "p_2417->g_1735.se", print_hash_value);
    transparent_crc(p_2417->g_1735.sf, "p_2417->g_1735.sf", print_hash_value);
    transparent_crc(p_2417->g_1747.s0, "p_2417->g_1747.s0", print_hash_value);
    transparent_crc(p_2417->g_1747.s1, "p_2417->g_1747.s1", print_hash_value);
    transparent_crc(p_2417->g_1747.s2, "p_2417->g_1747.s2", print_hash_value);
    transparent_crc(p_2417->g_1747.s3, "p_2417->g_1747.s3", print_hash_value);
    transparent_crc(p_2417->g_1747.s4, "p_2417->g_1747.s4", print_hash_value);
    transparent_crc(p_2417->g_1747.s5, "p_2417->g_1747.s5", print_hash_value);
    transparent_crc(p_2417->g_1747.s6, "p_2417->g_1747.s6", print_hash_value);
    transparent_crc(p_2417->g_1747.s7, "p_2417->g_1747.s7", print_hash_value);
    transparent_crc(p_2417->g_1747.s8, "p_2417->g_1747.s8", print_hash_value);
    transparent_crc(p_2417->g_1747.s9, "p_2417->g_1747.s9", print_hash_value);
    transparent_crc(p_2417->g_1747.sa, "p_2417->g_1747.sa", print_hash_value);
    transparent_crc(p_2417->g_1747.sb, "p_2417->g_1747.sb", print_hash_value);
    transparent_crc(p_2417->g_1747.sc, "p_2417->g_1747.sc", print_hash_value);
    transparent_crc(p_2417->g_1747.sd, "p_2417->g_1747.sd", print_hash_value);
    transparent_crc(p_2417->g_1747.se, "p_2417->g_1747.se", print_hash_value);
    transparent_crc(p_2417->g_1747.sf, "p_2417->g_1747.sf", print_hash_value);
    transparent_crc(p_2417->g_1781.s0, "p_2417->g_1781.s0", print_hash_value);
    transparent_crc(p_2417->g_1781.s1, "p_2417->g_1781.s1", print_hash_value);
    transparent_crc(p_2417->g_1781.s2, "p_2417->g_1781.s2", print_hash_value);
    transparent_crc(p_2417->g_1781.s3, "p_2417->g_1781.s3", print_hash_value);
    transparent_crc(p_2417->g_1781.s4, "p_2417->g_1781.s4", print_hash_value);
    transparent_crc(p_2417->g_1781.s5, "p_2417->g_1781.s5", print_hash_value);
    transparent_crc(p_2417->g_1781.s6, "p_2417->g_1781.s6", print_hash_value);
    transparent_crc(p_2417->g_1781.s7, "p_2417->g_1781.s7", print_hash_value);
    transparent_crc(p_2417->g_1781.s8, "p_2417->g_1781.s8", print_hash_value);
    transparent_crc(p_2417->g_1781.s9, "p_2417->g_1781.s9", print_hash_value);
    transparent_crc(p_2417->g_1781.sa, "p_2417->g_1781.sa", print_hash_value);
    transparent_crc(p_2417->g_1781.sb, "p_2417->g_1781.sb", print_hash_value);
    transparent_crc(p_2417->g_1781.sc, "p_2417->g_1781.sc", print_hash_value);
    transparent_crc(p_2417->g_1781.sd, "p_2417->g_1781.sd", print_hash_value);
    transparent_crc(p_2417->g_1781.se, "p_2417->g_1781.se", print_hash_value);
    transparent_crc(p_2417->g_1781.sf, "p_2417->g_1781.sf", print_hash_value);
    transparent_crc(p_2417->g_1789.x, "p_2417->g_1789.x", print_hash_value);
    transparent_crc(p_2417->g_1789.y, "p_2417->g_1789.y", print_hash_value);
    transparent_crc(p_2417->g_1789.z, "p_2417->g_1789.z", print_hash_value);
    transparent_crc(p_2417->g_1789.w, "p_2417->g_1789.w", print_hash_value);
    transparent_crc(p_2417->g_1812.x, "p_2417->g_1812.x", print_hash_value);
    transparent_crc(p_2417->g_1812.y, "p_2417->g_1812.y", print_hash_value);
    transparent_crc(p_2417->g_1812.z, "p_2417->g_1812.z", print_hash_value);
    transparent_crc(p_2417->g_1812.w, "p_2417->g_1812.w", print_hash_value);
    transparent_crc(p_2417->g_1827.s0, "p_2417->g_1827.s0", print_hash_value);
    transparent_crc(p_2417->g_1827.s1, "p_2417->g_1827.s1", print_hash_value);
    transparent_crc(p_2417->g_1827.s2, "p_2417->g_1827.s2", print_hash_value);
    transparent_crc(p_2417->g_1827.s3, "p_2417->g_1827.s3", print_hash_value);
    transparent_crc(p_2417->g_1827.s4, "p_2417->g_1827.s4", print_hash_value);
    transparent_crc(p_2417->g_1827.s5, "p_2417->g_1827.s5", print_hash_value);
    transparent_crc(p_2417->g_1827.s6, "p_2417->g_1827.s6", print_hash_value);
    transparent_crc(p_2417->g_1827.s7, "p_2417->g_1827.s7", print_hash_value);
    transparent_crc(p_2417->g_1827.s8, "p_2417->g_1827.s8", print_hash_value);
    transparent_crc(p_2417->g_1827.s9, "p_2417->g_1827.s9", print_hash_value);
    transparent_crc(p_2417->g_1827.sa, "p_2417->g_1827.sa", print_hash_value);
    transparent_crc(p_2417->g_1827.sb, "p_2417->g_1827.sb", print_hash_value);
    transparent_crc(p_2417->g_1827.sc, "p_2417->g_1827.sc", print_hash_value);
    transparent_crc(p_2417->g_1827.sd, "p_2417->g_1827.sd", print_hash_value);
    transparent_crc(p_2417->g_1827.se, "p_2417->g_1827.se", print_hash_value);
    transparent_crc(p_2417->g_1827.sf, "p_2417->g_1827.sf", print_hash_value);
    transparent_crc(p_2417->g_1878.s0, "p_2417->g_1878.s0", print_hash_value);
    transparent_crc(p_2417->g_1878.s1, "p_2417->g_1878.s1", print_hash_value);
    transparent_crc(p_2417->g_1878.s2, "p_2417->g_1878.s2", print_hash_value);
    transparent_crc(p_2417->g_1878.s3, "p_2417->g_1878.s3", print_hash_value);
    transparent_crc(p_2417->g_1878.s4, "p_2417->g_1878.s4", print_hash_value);
    transparent_crc(p_2417->g_1878.s5, "p_2417->g_1878.s5", print_hash_value);
    transparent_crc(p_2417->g_1878.s6, "p_2417->g_1878.s6", print_hash_value);
    transparent_crc(p_2417->g_1878.s7, "p_2417->g_1878.s7", print_hash_value);
    transparent_crc(p_2417->g_1878.s8, "p_2417->g_1878.s8", print_hash_value);
    transparent_crc(p_2417->g_1878.s9, "p_2417->g_1878.s9", print_hash_value);
    transparent_crc(p_2417->g_1878.sa, "p_2417->g_1878.sa", print_hash_value);
    transparent_crc(p_2417->g_1878.sb, "p_2417->g_1878.sb", print_hash_value);
    transparent_crc(p_2417->g_1878.sc, "p_2417->g_1878.sc", print_hash_value);
    transparent_crc(p_2417->g_1878.sd, "p_2417->g_1878.sd", print_hash_value);
    transparent_crc(p_2417->g_1878.se, "p_2417->g_1878.se", print_hash_value);
    transparent_crc(p_2417->g_1878.sf, "p_2417->g_1878.sf", print_hash_value);
    transparent_crc(p_2417->g_1903.s0, "p_2417->g_1903.s0", print_hash_value);
    transparent_crc(p_2417->g_1903.s1, "p_2417->g_1903.s1", print_hash_value);
    transparent_crc(p_2417->g_1903.s2, "p_2417->g_1903.s2", print_hash_value);
    transparent_crc(p_2417->g_1903.s3, "p_2417->g_1903.s3", print_hash_value);
    transparent_crc(p_2417->g_1903.s4, "p_2417->g_1903.s4", print_hash_value);
    transparent_crc(p_2417->g_1903.s5, "p_2417->g_1903.s5", print_hash_value);
    transparent_crc(p_2417->g_1903.s6, "p_2417->g_1903.s6", print_hash_value);
    transparent_crc(p_2417->g_1903.s7, "p_2417->g_1903.s7", print_hash_value);
    transparent_crc(p_2417->g_1912.x, "p_2417->g_1912.x", print_hash_value);
    transparent_crc(p_2417->g_1912.y, "p_2417->g_1912.y", print_hash_value);
    transparent_crc(p_2417->g_1915.s0, "p_2417->g_1915.s0", print_hash_value);
    transparent_crc(p_2417->g_1915.s1, "p_2417->g_1915.s1", print_hash_value);
    transparent_crc(p_2417->g_1915.s2, "p_2417->g_1915.s2", print_hash_value);
    transparent_crc(p_2417->g_1915.s3, "p_2417->g_1915.s3", print_hash_value);
    transparent_crc(p_2417->g_1915.s4, "p_2417->g_1915.s4", print_hash_value);
    transparent_crc(p_2417->g_1915.s5, "p_2417->g_1915.s5", print_hash_value);
    transparent_crc(p_2417->g_1915.s6, "p_2417->g_1915.s6", print_hash_value);
    transparent_crc(p_2417->g_1915.s7, "p_2417->g_1915.s7", print_hash_value);
    transparent_crc(p_2417->g_1915.s8, "p_2417->g_1915.s8", print_hash_value);
    transparent_crc(p_2417->g_1915.s9, "p_2417->g_1915.s9", print_hash_value);
    transparent_crc(p_2417->g_1915.sa, "p_2417->g_1915.sa", print_hash_value);
    transparent_crc(p_2417->g_1915.sb, "p_2417->g_1915.sb", print_hash_value);
    transparent_crc(p_2417->g_1915.sc, "p_2417->g_1915.sc", print_hash_value);
    transparent_crc(p_2417->g_1915.sd, "p_2417->g_1915.sd", print_hash_value);
    transparent_crc(p_2417->g_1915.se, "p_2417->g_1915.se", print_hash_value);
    transparent_crc(p_2417->g_1915.sf, "p_2417->g_1915.sf", print_hash_value);
    transparent_crc(p_2417->g_1933, "p_2417->g_1933", print_hash_value);
    transparent_crc(p_2417->g_1941.s0, "p_2417->g_1941.s0", print_hash_value);
    transparent_crc(p_2417->g_1941.s1, "p_2417->g_1941.s1", print_hash_value);
    transparent_crc(p_2417->g_1941.s2, "p_2417->g_1941.s2", print_hash_value);
    transparent_crc(p_2417->g_1941.s3, "p_2417->g_1941.s3", print_hash_value);
    transparent_crc(p_2417->g_1941.s4, "p_2417->g_1941.s4", print_hash_value);
    transparent_crc(p_2417->g_1941.s5, "p_2417->g_1941.s5", print_hash_value);
    transparent_crc(p_2417->g_1941.s6, "p_2417->g_1941.s6", print_hash_value);
    transparent_crc(p_2417->g_1941.s7, "p_2417->g_1941.s7", print_hash_value);
    transparent_crc(p_2417->g_1971.s0, "p_2417->g_1971.s0", print_hash_value);
    transparent_crc(p_2417->g_1971.s1, "p_2417->g_1971.s1", print_hash_value);
    transparent_crc(p_2417->g_1971.s2, "p_2417->g_1971.s2", print_hash_value);
    transparent_crc(p_2417->g_1971.s3, "p_2417->g_1971.s3", print_hash_value);
    transparent_crc(p_2417->g_1971.s4, "p_2417->g_1971.s4", print_hash_value);
    transparent_crc(p_2417->g_1971.s5, "p_2417->g_1971.s5", print_hash_value);
    transparent_crc(p_2417->g_1971.s6, "p_2417->g_1971.s6", print_hash_value);
    transparent_crc(p_2417->g_1971.s7, "p_2417->g_1971.s7", print_hash_value);
    transparent_crc(p_2417->g_1978.x, "p_2417->g_1978.x", print_hash_value);
    transparent_crc(p_2417->g_1978.y, "p_2417->g_1978.y", print_hash_value);
    transparent_crc(p_2417->g_1978.z, "p_2417->g_1978.z", print_hash_value);
    transparent_crc(p_2417->g_1978.w, "p_2417->g_1978.w", print_hash_value);
    transparent_crc(p_2417->g_2022, "p_2417->g_2022", print_hash_value);
    transparent_crc(p_2417->g_2059, "p_2417->g_2059", print_hash_value);
    transparent_crc(p_2417->g_2072.x, "p_2417->g_2072.x", print_hash_value);
    transparent_crc(p_2417->g_2072.y, "p_2417->g_2072.y", print_hash_value);
    transparent_crc(p_2417->g_2074.x, "p_2417->g_2074.x", print_hash_value);
    transparent_crc(p_2417->g_2074.y, "p_2417->g_2074.y", print_hash_value);
    transparent_crc(p_2417->g_2085.s0, "p_2417->g_2085.s0", print_hash_value);
    transparent_crc(p_2417->g_2085.s1, "p_2417->g_2085.s1", print_hash_value);
    transparent_crc(p_2417->g_2085.s2, "p_2417->g_2085.s2", print_hash_value);
    transparent_crc(p_2417->g_2085.s3, "p_2417->g_2085.s3", print_hash_value);
    transparent_crc(p_2417->g_2085.s4, "p_2417->g_2085.s4", print_hash_value);
    transparent_crc(p_2417->g_2085.s5, "p_2417->g_2085.s5", print_hash_value);
    transparent_crc(p_2417->g_2085.s6, "p_2417->g_2085.s6", print_hash_value);
    transparent_crc(p_2417->g_2085.s7, "p_2417->g_2085.s7", print_hash_value);
    transparent_crc(p_2417->g_2085.s8, "p_2417->g_2085.s8", print_hash_value);
    transparent_crc(p_2417->g_2085.s9, "p_2417->g_2085.s9", print_hash_value);
    transparent_crc(p_2417->g_2085.sa, "p_2417->g_2085.sa", print_hash_value);
    transparent_crc(p_2417->g_2085.sb, "p_2417->g_2085.sb", print_hash_value);
    transparent_crc(p_2417->g_2085.sc, "p_2417->g_2085.sc", print_hash_value);
    transparent_crc(p_2417->g_2085.sd, "p_2417->g_2085.sd", print_hash_value);
    transparent_crc(p_2417->g_2085.se, "p_2417->g_2085.se", print_hash_value);
    transparent_crc(p_2417->g_2085.sf, "p_2417->g_2085.sf", print_hash_value);
    transparent_crc(p_2417->g_2101.s0, "p_2417->g_2101.s0", print_hash_value);
    transparent_crc(p_2417->g_2101.s1, "p_2417->g_2101.s1", print_hash_value);
    transparent_crc(p_2417->g_2101.s2, "p_2417->g_2101.s2", print_hash_value);
    transparent_crc(p_2417->g_2101.s3, "p_2417->g_2101.s3", print_hash_value);
    transparent_crc(p_2417->g_2101.s4, "p_2417->g_2101.s4", print_hash_value);
    transparent_crc(p_2417->g_2101.s5, "p_2417->g_2101.s5", print_hash_value);
    transparent_crc(p_2417->g_2101.s6, "p_2417->g_2101.s6", print_hash_value);
    transparent_crc(p_2417->g_2101.s7, "p_2417->g_2101.s7", print_hash_value);
    transparent_crc(p_2417->g_2101.s8, "p_2417->g_2101.s8", print_hash_value);
    transparent_crc(p_2417->g_2101.s9, "p_2417->g_2101.s9", print_hash_value);
    transparent_crc(p_2417->g_2101.sa, "p_2417->g_2101.sa", print_hash_value);
    transparent_crc(p_2417->g_2101.sb, "p_2417->g_2101.sb", print_hash_value);
    transparent_crc(p_2417->g_2101.sc, "p_2417->g_2101.sc", print_hash_value);
    transparent_crc(p_2417->g_2101.sd, "p_2417->g_2101.sd", print_hash_value);
    transparent_crc(p_2417->g_2101.se, "p_2417->g_2101.se", print_hash_value);
    transparent_crc(p_2417->g_2101.sf, "p_2417->g_2101.sf", print_hash_value);
    transparent_crc(p_2417->g_2129.s0, "p_2417->g_2129.s0", print_hash_value);
    transparent_crc(p_2417->g_2129.s1, "p_2417->g_2129.s1", print_hash_value);
    transparent_crc(p_2417->g_2129.s2, "p_2417->g_2129.s2", print_hash_value);
    transparent_crc(p_2417->g_2129.s3, "p_2417->g_2129.s3", print_hash_value);
    transparent_crc(p_2417->g_2129.s4, "p_2417->g_2129.s4", print_hash_value);
    transparent_crc(p_2417->g_2129.s5, "p_2417->g_2129.s5", print_hash_value);
    transparent_crc(p_2417->g_2129.s6, "p_2417->g_2129.s6", print_hash_value);
    transparent_crc(p_2417->g_2129.s7, "p_2417->g_2129.s7", print_hash_value);
    transparent_crc(p_2417->g_2129.s8, "p_2417->g_2129.s8", print_hash_value);
    transparent_crc(p_2417->g_2129.s9, "p_2417->g_2129.s9", print_hash_value);
    transparent_crc(p_2417->g_2129.sa, "p_2417->g_2129.sa", print_hash_value);
    transparent_crc(p_2417->g_2129.sb, "p_2417->g_2129.sb", print_hash_value);
    transparent_crc(p_2417->g_2129.sc, "p_2417->g_2129.sc", print_hash_value);
    transparent_crc(p_2417->g_2129.sd, "p_2417->g_2129.sd", print_hash_value);
    transparent_crc(p_2417->g_2129.se, "p_2417->g_2129.se", print_hash_value);
    transparent_crc(p_2417->g_2129.sf, "p_2417->g_2129.sf", print_hash_value);
    transparent_crc(p_2417->g_2153.s0, "p_2417->g_2153.s0", print_hash_value);
    transparent_crc(p_2417->g_2153.s1, "p_2417->g_2153.s1", print_hash_value);
    transparent_crc(p_2417->g_2153.s2, "p_2417->g_2153.s2", print_hash_value);
    transparent_crc(p_2417->g_2153.s3, "p_2417->g_2153.s3", print_hash_value);
    transparent_crc(p_2417->g_2153.s4, "p_2417->g_2153.s4", print_hash_value);
    transparent_crc(p_2417->g_2153.s5, "p_2417->g_2153.s5", print_hash_value);
    transparent_crc(p_2417->g_2153.s6, "p_2417->g_2153.s6", print_hash_value);
    transparent_crc(p_2417->g_2153.s7, "p_2417->g_2153.s7", print_hash_value);
    transparent_crc(p_2417->g_2155.s0, "p_2417->g_2155.s0", print_hash_value);
    transparent_crc(p_2417->g_2155.s1, "p_2417->g_2155.s1", print_hash_value);
    transparent_crc(p_2417->g_2155.s2, "p_2417->g_2155.s2", print_hash_value);
    transparent_crc(p_2417->g_2155.s3, "p_2417->g_2155.s3", print_hash_value);
    transparent_crc(p_2417->g_2155.s4, "p_2417->g_2155.s4", print_hash_value);
    transparent_crc(p_2417->g_2155.s5, "p_2417->g_2155.s5", print_hash_value);
    transparent_crc(p_2417->g_2155.s6, "p_2417->g_2155.s6", print_hash_value);
    transparent_crc(p_2417->g_2155.s7, "p_2417->g_2155.s7", print_hash_value);
    transparent_crc(p_2417->g_2158.s0, "p_2417->g_2158.s0", print_hash_value);
    transparent_crc(p_2417->g_2158.s1, "p_2417->g_2158.s1", print_hash_value);
    transparent_crc(p_2417->g_2158.s2, "p_2417->g_2158.s2", print_hash_value);
    transparent_crc(p_2417->g_2158.s3, "p_2417->g_2158.s3", print_hash_value);
    transparent_crc(p_2417->g_2158.s4, "p_2417->g_2158.s4", print_hash_value);
    transparent_crc(p_2417->g_2158.s5, "p_2417->g_2158.s5", print_hash_value);
    transparent_crc(p_2417->g_2158.s6, "p_2417->g_2158.s6", print_hash_value);
    transparent_crc(p_2417->g_2158.s7, "p_2417->g_2158.s7", print_hash_value);
    transparent_crc(p_2417->g_2158.s8, "p_2417->g_2158.s8", print_hash_value);
    transparent_crc(p_2417->g_2158.s9, "p_2417->g_2158.s9", print_hash_value);
    transparent_crc(p_2417->g_2158.sa, "p_2417->g_2158.sa", print_hash_value);
    transparent_crc(p_2417->g_2158.sb, "p_2417->g_2158.sb", print_hash_value);
    transparent_crc(p_2417->g_2158.sc, "p_2417->g_2158.sc", print_hash_value);
    transparent_crc(p_2417->g_2158.sd, "p_2417->g_2158.sd", print_hash_value);
    transparent_crc(p_2417->g_2158.se, "p_2417->g_2158.se", print_hash_value);
    transparent_crc(p_2417->g_2158.sf, "p_2417->g_2158.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_2417->g_2218[i][j], "p_2417->g_2218[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_2417->g_2262.s0, "p_2417->g_2262.s0", print_hash_value);
    transparent_crc(p_2417->g_2262.s1, "p_2417->g_2262.s1", print_hash_value);
    transparent_crc(p_2417->g_2262.s2, "p_2417->g_2262.s2", print_hash_value);
    transparent_crc(p_2417->g_2262.s3, "p_2417->g_2262.s3", print_hash_value);
    transparent_crc(p_2417->g_2262.s4, "p_2417->g_2262.s4", print_hash_value);
    transparent_crc(p_2417->g_2262.s5, "p_2417->g_2262.s5", print_hash_value);
    transparent_crc(p_2417->g_2262.s6, "p_2417->g_2262.s6", print_hash_value);
    transparent_crc(p_2417->g_2262.s7, "p_2417->g_2262.s7", print_hash_value);
    transparent_crc(p_2417->g_2291.s0, "p_2417->g_2291.s0", print_hash_value);
    transparent_crc(p_2417->g_2291.s1, "p_2417->g_2291.s1", print_hash_value);
    transparent_crc(p_2417->g_2291.s2, "p_2417->g_2291.s2", print_hash_value);
    transparent_crc(p_2417->g_2291.s3, "p_2417->g_2291.s3", print_hash_value);
    transparent_crc(p_2417->g_2291.s4, "p_2417->g_2291.s4", print_hash_value);
    transparent_crc(p_2417->g_2291.s5, "p_2417->g_2291.s5", print_hash_value);
    transparent_crc(p_2417->g_2291.s6, "p_2417->g_2291.s6", print_hash_value);
    transparent_crc(p_2417->g_2291.s7, "p_2417->g_2291.s7", print_hash_value);
    transparent_crc(p_2417->g_2338.s0, "p_2417->g_2338.s0", print_hash_value);
    transparent_crc(p_2417->g_2338.s1, "p_2417->g_2338.s1", print_hash_value);
    transparent_crc(p_2417->g_2338.s2, "p_2417->g_2338.s2", print_hash_value);
    transparent_crc(p_2417->g_2338.s3, "p_2417->g_2338.s3", print_hash_value);
    transparent_crc(p_2417->g_2338.s4, "p_2417->g_2338.s4", print_hash_value);
    transparent_crc(p_2417->g_2338.s5, "p_2417->g_2338.s5", print_hash_value);
    transparent_crc(p_2417->g_2338.s6, "p_2417->g_2338.s6", print_hash_value);
    transparent_crc(p_2417->g_2338.s7, "p_2417->g_2338.s7", print_hash_value);
    transparent_crc(p_2417->g_2381.s0, "p_2417->g_2381.s0", print_hash_value);
    transparent_crc(p_2417->g_2381.s1, "p_2417->g_2381.s1", print_hash_value);
    transparent_crc(p_2417->g_2381.s2, "p_2417->g_2381.s2", print_hash_value);
    transparent_crc(p_2417->g_2381.s3, "p_2417->g_2381.s3", print_hash_value);
    transparent_crc(p_2417->g_2381.s4, "p_2417->g_2381.s4", print_hash_value);
    transparent_crc(p_2417->g_2381.s5, "p_2417->g_2381.s5", print_hash_value);
    transparent_crc(p_2417->g_2381.s6, "p_2417->g_2381.s6", print_hash_value);
    transparent_crc(p_2417->g_2381.s7, "p_2417->g_2381.s7", print_hash_value);
    transparent_crc(p_2417->g_2383.x, "p_2417->g_2383.x", print_hash_value);
    transparent_crc(p_2417->g_2383.y, "p_2417->g_2383.y", print_hash_value);
    transparent_crc(p_2417->g_2383.z, "p_2417->g_2383.z", print_hash_value);
    transparent_crc(p_2417->g_2383.w, "p_2417->g_2383.w", print_hash_value);
    transparent_crc(p_2417->g_2390.x, "p_2417->g_2390.x", print_hash_value);
    transparent_crc(p_2417->g_2390.y, "p_2417->g_2390.y", print_hash_value);
    transparent_crc(p_2417->g_2390.z, "p_2417->g_2390.z", print_hash_value);
    transparent_crc(p_2417->g_2390.w, "p_2417->g_2390.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_2417->g_2410[i][j][k], "p_2417->g_2410[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_2417->g_2411, "p_2417->g_2411", print_hash_value);
    transparent_crc(p_2417->v_collective, "p_2417->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 4; i++)
            transparent_crc(p_2417->g_special_values[i + 4 * get_linear_group_id()], "p_2417->g_special_values[i + 4 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 4; i++)
            transparent_crc(p_2417->l_special_values[i], "p_2417->l_special_values[i]", print_hash_value);
    transparent_crc(p_2417->l_comm_values[get_linear_local_id()], "p_2417->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_2417->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()], "p_2417->g_comm_values[get_linear_group_id() * 88 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
